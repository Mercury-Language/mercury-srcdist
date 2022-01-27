/*
** Automatically generated from `make_hlds_passes.m'
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


/* :- module hlds.make_hlds.make_hlds_passes. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.mih"


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
#include "libs.file_util.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
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
#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"



#line 1178 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s {
#line 1182 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded;
#line 1216 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214;
#line 1216 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23;
#line 1216 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24;
#line 1216 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26;
#line 1226 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215;
#line 1226 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216;
#line 1229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32;
#line 1253 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1;
#line 1253 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170;
#line 1253 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171;
#line 1253 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172;
#line 1253 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173;
#line 1253 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174;
#line 1253 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175;
#line 1254 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170;
#line 1178 "make_hlds_passes.m"
};

#line 1059 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s {
#line 1063 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded;
#line 1091 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194;
#line 1091 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21;
#line 1091 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22;
#line 1091 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24;
#line 1102 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195;
#line 1102 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196;
#line 1105 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30;
#line 1129 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1;
#line 1129 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150;
#line 1129 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151;
#line 1129 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152;
#line 1129 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153;
#line 1129 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154;
#line 1129 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155;
#line 1130 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150;
#line 1059 "make_hlds_passes.m"
};


#line 280 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 283 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 286 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 289 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 292 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho12_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho10_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho9_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho8_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho7_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho6_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho5_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho4_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho3_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho2_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho1_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 556 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__556__1_2_p_0(
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15,
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_45);

#line 555 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__555__1_2_p_0(
#line 555 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_14,
#line 555 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_40);

#line 1327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0_1(
#line 1327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 1327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

#line 1226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(
#line 1226 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1229 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3(
#line 1229 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(
#line 1226 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(
#line 1226 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1253 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(
#line 1253 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1254 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7(
#line 1254 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1253 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(
#line 1253 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1253 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(
#line 1253 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1102 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(
#line 1102 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1105 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3(
#line 1105 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1102 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(
#line 1102 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1102 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(
#line 1102 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1129 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(
#line 1129 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1130 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7(
#line 1130 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1129 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(
#line 1129 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1129 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(
#line 1129 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 556 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2(
#line 556 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 555 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1(
#line 555 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 256 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 256 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);

#line 229 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
#line 229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 229 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 214 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 214 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 214 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 214 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8);

#line 206 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 206 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[5][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[47][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][8];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[2][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][1];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[5][3] = {
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
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[47][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has invalid signature."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[12])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "used in initialise declaration"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matches multiple pred declarations."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[12])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[19])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration has invalid signature."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[12])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[12])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][8] = {
  /* row 0 */
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
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][11] = {
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[2][5] = {
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1085 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1094 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1103 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1111 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1119 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1041 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_9,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 1041 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22,
#line 1041 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 1041 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 1041 "make_hlds_passes.m"
{
#line 1047 "make_hlds_passes.m"
  {
#line 1047 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1047 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 0)));
#line 1047 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 1)));
#line 1047 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 2)));
#line 1047 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 3)));
#line 1048 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 4)));

#line 1054 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Origin_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "make_hlds_passes.m"
      {
#line 1052 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__Arity_15, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
      }
#line 1054 "make_hlds_passes.m"
    else
#line 1055 "make_hlds_passes.m"
      {
#line 1056 "make_hlds_passes.m"
        {
#line 1056 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_initialise\'/8", (MR_String) "bad introduced initialise declaration");
#line 1056 "make_hlds_passes.m"
          return;
        }
#line 1055 "make_hlds_passes.m"
      }
#line 1047 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22;
#line 1047 "make_hlds_passes.m"
  }
#line 1041 "make_hlds_passes.m"
}

#line 694 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 694 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36,
#line 694 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37)
#line 694 "make_hlds_passes.m"
{
#line 698 "make_hlds_passes.m"
  {
#line 698 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeDet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ClassContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 699 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 699 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));

#line 705 "make_hlds_passes.m"
#line 705 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_12) {
#line 705 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 706 "make_hlds_passes.m"
        {
#line 706 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__Arity_25;
#line 706 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_26;
#line 706 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__PredTable0_27;
#line 706 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__PredIds_28;

#line 707 "make_hlds_passes.m"
          {
#line 707 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_13, &hlds__make_hlds__make_hlds_passes__Arity_25);
          }
#line 708 "make_hlds_passes.m"
          {
#line 708 "make_hlds_passes.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_26, hlds__make_hlds__make_hlds_passes__Arity_25);
          }
#line 709 "make_hlds_passes.m"
          {
#line 709 "make_hlds_passes.m"
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__make_hlds_passes__PredTable0_27);
          }
#line 710 "make_hlds_passes.m"
          {
#line 710 "make_hlds_passes.m"
            hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_27, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__FuncArity_26, &hlds__make_hlds__make_hlds_passes__PredIds_28);
          }
#line 718 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__PredIds_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "make_hlds_passes.m"
            {
#line 720 "make_hlds_passes.m"
              {
#line 720 "make_hlds_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_pred_decl\'/6", (MR_String) "can\'t find func declaration");
#line 720 "make_hlds_passes.m"
                return;
              }
#line 719 "make_hlds_passes.m"
            }
#line 718 "make_hlds_passes.m"
          else
#line 713 "make_hlds_passes.m"
            {
#line 713 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Preds0_31;
#line 713 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Preds_32;
#line 713 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__PredTable_33;

#line 714 "make_hlds_passes.m"
              {
#line 714 "make_hlds_passes.m"
                hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_27, &hlds__make_hlds__make_hlds_passes__Preds0_31);
              }
#line 715 "make_hlds_passes.m"
              {
#line 715 "make_hlds_passes.m"
                check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(hlds__make_hlds__make_hlds_passes__PredIds_28, hlds__make_hlds__make_hlds_passes__Preds0_31, &hlds__make_hlds__make_hlds_passes__Preds_32);
              }
#line 716 "make_hlds_passes.m"
              {
#line 716 "make_hlds_passes.m"
                hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_32, hlds__make_hlds__make_hlds_passes__PredTable0_27, &hlds__make_hlds__make_hlds_passes__PredTable_33);
              }
#line 717 "make_hlds_passes.m"
              {
#line 717 "make_hlds_passes.m"
                hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__make_hlds_passes__PredTable_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35);
              }
#line 713 "make_hlds_passes.m"
            }
#line 706 "make_hlds_passes.m"
        }
#line 705 "make_hlds_passes.m"
        break;
#line 705 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 704 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 705 "make_hlds_passes.m"
        break;
#line 705 "make_hlds_passes.m"
    }
#line 698 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36;
#line 698 "make_hlds_passes.m"
  }
#line 694 "make_hlds_passes.m"
}

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho12_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 314 "make_hlds_passes.m"
{
#line 320 "make_hlds_passes.m"
  while (MR_TRUE)
#line 320 "make_hlds_passes.m"
    {
#line 320 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 320 "make_hlds_passes.m"
      {
#line 320 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 320 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "make_hlds_passes.m"
          {
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 320 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
        else
#line 323 "make_hlds_passes.m"
          {
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 326 "make_hlds_passes.m"
            {
#line 326 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_28, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37);
            }
#line 328 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;

#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 328 "make_hlds_passes.m"
            }
#line 328 "make_hlds_passes.m"
            continue;
#line 323 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
      }
#line 320 "make_hlds_passes.m"
      break;
#line 320 "make_hlds_passes.m"
    }
#line 314 "make_hlds_passes.m"
}

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 314 "make_hlds_passes.m"
{
#line 320 "make_hlds_passes.m"
  while (MR_TRUE)
#line 320 "make_hlds_passes.m"
    {
#line 320 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 320 "make_hlds_passes.m"
      {
#line 320 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 320 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "make_hlds_passes.m"
          {
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 320 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
        else
#line 323 "make_hlds_passes.m"
          {
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 326 "make_hlds_passes.m"
            {
#line 326 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_28, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37);
            }
#line 328 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;

#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 328 "make_hlds_passes.m"
            }
#line 328 "make_hlds_passes.m"
            continue;
#line 323 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
      }
#line 320 "make_hlds_passes.m"
      break;
#line 320 "make_hlds_passes.m"
    }
#line 314 "make_hlds_passes.m"
}

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho10_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 314 "make_hlds_passes.m"
{
#line 320 "make_hlds_passes.m"
  while (MR_TRUE)
#line 320 "make_hlds_passes.m"
    {
#line 320 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 320 "make_hlds_passes.m"
      {
#line 320 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 320 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "make_hlds_passes.m"
          {
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 320 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
        else
#line 323 "make_hlds_passes.m"
          {
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__int_for_opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 326 "make_hlds_passes.m"
            {
#line 326 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_28, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37);
            }
#line 328 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;

#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 328 "make_hlds_passes.m"
            }
#line 328 "make_hlds_passes.m"
            continue;
#line 323 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
      }
#line 320 "make_hlds_passes.m"
      break;
#line 320 "make_hlds_passes.m"
    }
#line 314 "make_hlds_passes.m"
}

#line 314 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho9_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 314 "make_hlds_passes.m"
{
#line 320 "make_hlds_passes.m"
  while (MR_TRUE)
#line 320 "make_hlds_passes.m"
    {
#line 320 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 320 "make_hlds_passes.m"
      {
#line 320 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 320 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "make_hlds_passes.m"
          {
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 320 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
        else
#line 323 "make_hlds_passes.m"
          {
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 326 "make_hlds_passes.m"
            {
#line 326 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_28, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37);
            }
#line 328 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;

#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 328 "make_hlds_passes.m"
            }
#line 328 "make_hlds_passes.m"
            continue;
#line 323 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
      }
#line 320 "make_hlds_passes.m"
      break;
#line 320 "make_hlds_passes.m"
    }
#line 314 "make_hlds_passes.m"
}

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho8_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 347 "make_hlds_passes.m"
{
#line 352 "make_hlds_passes.m"
  while (MR_TRUE)
#line 352 "make_hlds_passes.m"
    {
#line 352 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 352 "make_hlds_passes.m"
      {
#line 352 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 352 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "make_hlds_passes.m"
          {
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 352 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
        else
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_22;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
#line 355 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));

#line 356 "make_hlds_passes.m"
            {
#line 356 "make_hlds_passes.m"
              parse_tree__status__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_22);
            }
#line 357 "make_hlds_passes.m"
            {
#line 357 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_22, hlds__make_hlds__make_hlds_passes__Items_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
            }
#line 358 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;

#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 358 "make_hlds_passes.m"
            }
#line 358 "make_hlds_passes.m"
            continue;
#line 354 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
      }
#line 352 "make_hlds_passes.m"
      break;
#line 352 "make_hlds_passes.m"
    }
#line 347 "make_hlds_passes.m"
}

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho7_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 347 "make_hlds_passes.m"
{
#line 352 "make_hlds_passes.m"
  while (MR_TRUE)
#line 352 "make_hlds_passes.m"
    {
#line 352 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 352 "make_hlds_passes.m"
      {
#line 352 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 352 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "make_hlds_passes.m"
          {
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 352 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
        else
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_22;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
#line 355 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));

#line 356 "make_hlds_passes.m"
            {
#line 356 "make_hlds_passes.m"
              parse_tree__status__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_22);
            }
#line 357 "make_hlds_passes.m"
            {
#line 357 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_22, hlds__make_hlds__make_hlds_passes__Items_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
            }
#line 358 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;

#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 358 "make_hlds_passes.m"
            }
#line 358 "make_hlds_passes.m"
            continue;
#line 354 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
      }
#line 352 "make_hlds_passes.m"
      break;
#line 352 "make_hlds_passes.m"
    }
#line 347 "make_hlds_passes.m"
}

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho6_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 347 "make_hlds_passes.m"
{
#line 352 "make_hlds_passes.m"
  while (MR_TRUE)
#line 352 "make_hlds_passes.m"
    {
#line 352 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 352 "make_hlds_passes.m"
      {
#line 352 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 352 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "make_hlds_passes.m"
          {
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 352 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
        else
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_22;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
#line 355 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));

#line 356 "make_hlds_passes.m"
            {
#line 356 "make_hlds_passes.m"
              parse_tree__status__int_for_opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_22);
            }
#line 357 "make_hlds_passes.m"
            {
#line 357 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_22, hlds__make_hlds__make_hlds_passes__Items_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
            }
#line 358 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;

#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 358 "make_hlds_passes.m"
            }
#line 358 "make_hlds_passes.m"
            continue;
#line 354 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
      }
#line 352 "make_hlds_passes.m"
      break;
#line 352 "make_hlds_passes.m"
    }
#line 347 "make_hlds_passes.m"
}

#line 347 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho5_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 347 "make_hlds_passes.m"
{
#line 352 "make_hlds_passes.m"
  while (MR_TRUE)
#line 352 "make_hlds_passes.m"
    {
#line 352 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 352 "make_hlds_passes.m"
      {
#line 352 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 352 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "make_hlds_passes.m"
          {
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 352 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
        else
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_22;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
#line 355 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));

#line 356 "make_hlds_passes.m"
            {
#line 356 "make_hlds_passes.m"
              parse_tree__status__opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_22);
            }
#line 357 "make_hlds_passes.m"
            {
#line 357 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_22, hlds__make_hlds__make_hlds_passes__Items_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
            }
#line 358 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;

#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 358 "make_hlds_passes.m"
            }
#line 358 "make_hlds_passes.m"
            continue;
#line 354 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
      }
#line 352 "make_hlds_passes.m"
      break;
#line 352 "make_hlds_passes.m"
    }
#line 347 "make_hlds_passes.m"
}

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho4_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 371 "make_hlds_passes.m"
{
#line 376 "make_hlds_passes.m"
  while (MR_TRUE)
#line 376 "make_hlds_passes.m"
    {
#line 376 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 376 "make_hlds_passes.m"
      {
#line 376 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 376 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "make_hlds_passes.m"
          {
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 376 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
        else
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_29;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__NeedQualifier_30;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_31;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_32;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;
#line 379 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 380 "make_hlds_passes.m"
            {
#line 380 "make_hlds_passes.m"
              parse_tree__status__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 0)));
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__NeedQualifier_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 1)));
#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__MQInfo0_31);
            }
#line 383 "make_hlds_passes.m"
            {
#line 383 "make_hlds_passes.m"
              parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0(hlds__make_hlds__make_hlds_passes__NeedQualifier_30, hlds__make_hlds__make_hlds_passes__MQInfo0_31, &hlds__make_hlds__make_hlds_passes__MQInfo_32);
            }
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39);
            }
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_29, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42);
            }
#line 386 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 386 "make_hlds_passes.m"
            {
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;

#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 386 "make_hlds_passes.m"
            }
#line 386 "make_hlds_passes.m"
            continue;
#line 378 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
      }
#line 376 "make_hlds_passes.m"
      break;
#line 376 "make_hlds_passes.m"
    }
#line 371 "make_hlds_passes.m"
}

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho3_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 371 "make_hlds_passes.m"
{
#line 376 "make_hlds_passes.m"
  while (MR_TRUE)
#line 376 "make_hlds_passes.m"
    {
#line 376 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 376 "make_hlds_passes.m"
      {
#line 376 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 376 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "make_hlds_passes.m"
          {
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 376 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
        else
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_29;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__NeedQualifier_30;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_31;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_32;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;
#line 379 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 380 "make_hlds_passes.m"
            {
#line 380 "make_hlds_passes.m"
              parse_tree__status__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 0)));
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__NeedQualifier_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 1)));
#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__MQInfo0_31);
            }
#line 383 "make_hlds_passes.m"
            {
#line 383 "make_hlds_passes.m"
              parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0(hlds__make_hlds__make_hlds_passes__NeedQualifier_30, hlds__make_hlds__make_hlds_passes__MQInfo0_31, &hlds__make_hlds__make_hlds_passes__MQInfo_32);
            }
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39);
            }
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_29, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42);
            }
#line 386 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 386 "make_hlds_passes.m"
            {
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;

#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 386 "make_hlds_passes.m"
            }
#line 386 "make_hlds_passes.m"
            continue;
#line 378 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
      }
#line 376 "make_hlds_passes.m"
      break;
#line 376 "make_hlds_passes.m"
    }
#line 371 "make_hlds_passes.m"
}

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho2_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 371 "make_hlds_passes.m"
{
#line 376 "make_hlds_passes.m"
  while (MR_TRUE)
#line 376 "make_hlds_passes.m"
    {
#line 376 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 376 "make_hlds_passes.m"
      {
#line 376 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 376 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "make_hlds_passes.m"
          {
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 376 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
        else
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_29;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__NeedQualifier_30;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_31;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_32;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;
#line 379 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 380 "make_hlds_passes.m"
            {
#line 380 "make_hlds_passes.m"
              parse_tree__status__int_for_opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 0)));
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__NeedQualifier_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 1)));
#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__MQInfo0_31);
            }
#line 383 "make_hlds_passes.m"
            {
#line 383 "make_hlds_passes.m"
              parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0(hlds__make_hlds__make_hlds_passes__NeedQualifier_30, hlds__make_hlds__make_hlds_passes__MQInfo0_31, &hlds__make_hlds__make_hlds_passes__MQInfo_32);
            }
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39);
            }
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_29, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42);
            }
#line 386 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 386 "make_hlds_passes.m"
            {
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;

#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 386 "make_hlds_passes.m"
            }
#line 386 "make_hlds_passes.m"
            continue;
#line 378 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
      }
#line 376 "make_hlds_passes.m"
      break;
#line 376 "make_hlds_passes.m"
    }
#line 371 "make_hlds_passes.m"
}

#line 371 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho1_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 371 "make_hlds_passes.m"
{
#line 376 "make_hlds_passes.m"
  while (MR_TRUE)
#line 376 "make_hlds_passes.m"
    {
#line 376 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 376 "make_hlds_passes.m"
      {
#line 376 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 376 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "make_hlds_passes.m"
          {
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 376 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
        else
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_29;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__NeedQualifier_30;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_31;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_32;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;
#line 379 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));

#line 380 "make_hlds_passes.m"
            {
#line 380 "make_hlds_passes.m"
              parse_tree__status__opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_28);
            }
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 0)));
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__NeedQualifier_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 1)));
#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__MQInfo0_31);
            }
#line 383 "make_hlds_passes.m"
            {
#line 383 "make_hlds_passes.m"
              parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0(hlds__make_hlds__make_hlds_passes__NeedQualifier_30, hlds__make_hlds__make_hlds_passes__MQInfo0_31, &hlds__make_hlds__make_hlds_passes__MQInfo_32);
            }
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39);
            }
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_29, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42);
            }
#line 386 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 386 "make_hlds_passes.m"
            {
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;

#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 386 "make_hlds_passes.m"
            }
#line 386 "make_hlds_passes.m"
            continue;
#line 378 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
      }
#line 376 "make_hlds_passes.m"
      break;
#line 376 "make_hlds_passes.m"
    }
#line 371 "make_hlds_passes.m"
}

#line 556 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__556__1_2_p_0(
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15,
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_45)
#line 556 "make_hlds_passes.m"
{
#line 556 "make_hlds_passes.m"
  {
#line 556 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 556 "make_hlds_passes.m"
    {
#line 556 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[2], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_15)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_45)));
    }
#line 556 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 556 "make_hlds_passes.m"
  }
#line 556 "make_hlds_passes.m"
}

#line 555 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__555__1_2_p_0(
#line 555 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_14,
#line 555 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_40)
#line 555 "make_hlds_passes.m"
{
#line 555 "make_hlds_passes.m"
  {
#line 555 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 555 "make_hlds_passes.m"
    {
#line 555 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[1], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_14)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_40)));
    }
#line 555 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 555 "make_hlds_passes.m"
  }
#line 555 "make_hlds_passes.m"
}

#line 1330 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
#line 1330 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 1330 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6,
#line 1330 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10,
#line 1330 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11)
#line 1330 "make_hlds_passes.m"
{
#line 1334 "make_hlds_passes.m"
  {
#line 1334 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1334 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 1334 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9;
#line 1335 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 1335 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 1335 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 1338 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_16_16;
#line 1338 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17;
#line 1338 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18;
#line 1338 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19;

#line 1336 "make_hlds_passes.m"
    {
#line 1336 "make_hlds_passes.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6)), hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8, &hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9);
    }
#line 1338 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 1338 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 1338 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 1338 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 1338 "make_hlds_passes.m"
    {
#line 1338 "make_hlds_passes.m"
      MR_Word base;
#line 1338 "make_hlds_passes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1338 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11 = base;
#line 1338 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_16_16));
#line 1338 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_17_17));
#line 1338 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_18_18));
#line 1338 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9));
#line 1338 "make_hlds_passes.m"
    }
#line 1334 "make_hlds_passes.m"
  }
#line 1330 "make_hlds_passes.m"
}

#line 1327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0_1(
#line 1327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 1327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
#line 1327 "make_hlds_passes.m"
{
#line 1327 "make_hlds_passes.m"
  {
#line 1327 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 1327 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11;

#line 1327 "make_hlds_passes.m"
    {
#line 1327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11);
    }
#line 1327 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11));
#line 1327 "make_hlds_passes.m"
  }
#line 1327 "make_hlds_passes.m"
}

#line 1320 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0(
#line 1320 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 1320 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbers_6,
#line 1320 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8,
#line 1320 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9)
#line 1320 "make_hlds_passes.m"
{
#line 1323 "make_hlds_passes.m"
  {
#line 1323 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1323 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_10_10;

#line 1327 "make_hlds_passes.m"
    {
#line 1327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
#line 1327 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0_1));
#line 1327 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1327 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5));
#line 1327 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbers_6));
#line 1327 "make_hlds_passes.m"
    }
#line 1326 "make_hlds_passes.m"
    {
#line 1326 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__make_hlds_passes__V_10_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9);
#line 1326 "make_hlds_passes.m"
      return;
    }
#line 1323 "make_hlds_passes.m"
  }
#line 1320 "make_hlds_passes.m"
}

#line 1300 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_mutable_8_p_0(
#line 1300 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_9,
#line 1300 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 1300 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15,
#line 1300 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16,
#line 1300 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17,
#line 1300 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18,
#line 1300 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19,
#line 1300 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20)
#line 1300 "make_hlds_passes.m"
{
#line 1305 "make_hlds_passes.m"
  {
#line 1305 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1305 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_14;

#line 1309 "make_hlds_passes.m"
    {
#line 1309 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_14 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_10);
    }
#line 1314 "make_hlds_passes.m"
#line 1314 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_14) {
#line 1314 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1314 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 1315 "make_hlds_passes.m"
        {
#line 1315 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15;
#line 1315 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17;
#line 1315 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19;
#line 1315 "make_hlds_passes.m"
        }
#line 1314 "make_hlds_passes.m"
        break;
#line 1314 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 1312 "make_hlds_passes.m"
        {
#line 1312 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_9, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20);
#line 1312 "make_hlds_passes.m"
          return;
        }
#line 1314 "make_hlds_passes.m"
        break;
#line 1314 "make_hlds_passes.m"
    }
#line 1305 "make_hlds_passes.m"
  }
#line 1300 "make_hlds_passes.m"
}

#line 1226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(
#line 1226 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1226 "make_hlds_passes.m"
{
#line 1226 "make_hlds_passes.m"
  {
#line 1226 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1226 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0, 1);
#line 1226 "make_hlds_passes.m"
  }
#line 1226 "make_hlds_passes.m"
}

#line 1229 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3(
#line 1229 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1229 "make_hlds_passes.m"
{
#line 1229 "make_hlds_passes.m"
  {
#line 1229 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1229 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32);
#line 1229 "make_hlds_passes.m"
    {
#line 1229 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1229 "make_hlds_passes.m"
      return;
    }
#line 1229 "make_hlds_passes.m"
  }
#line 1229 "make_hlds_passes.m"
}

#line 1226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(
#line 1226 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1226 "make_hlds_passes.m"
{
#line 1226 "make_hlds_passes.m"
  {
#line 1226 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1230 "make_hlds_passes.m"
    {
#line 1230 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33);
    }
#line 1232 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33)) == (MR_mktag((MR_Integer) 1)));
#line 1232 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1232 "make_hlds_passes.m"
      {
#line 1232 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33, (MR_Integer) 0)));
#line 1226 "make_hlds_passes.m"
        {
#line 1233 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34)) == (MR_mktag((MR_Integer) 1)));
#line 1233 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1233 "make_hlds_passes.m"
            {
#line 1233 "make_hlds_passes.m"
              {
#line 1233 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34, (MR_Integer) 0)));
#line 1233 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34, (MR_Integer) 1)));
#line 1233 "make_hlds_passes.m"
              }
#line 1226 "make_hlds_passes.m"
              {
#line 1233 "make_hlds_passes.m"
                {
#line 1233 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1233 "make_hlds_passes.m"
                {
#line 1233 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215);
                }
#line 1226 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                  {
#line 1233 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90)) == (MR_mktag((MR_Integer) 1)));
#line 1233 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1233 "make_hlds_passes.m"
                      {
#line 1233 "make_hlds_passes.m"
                        {
#line 1233 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90, (MR_Integer) 0)));
#line 1233 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90, (MR_Integer) 1)));
#line 1233 "make_hlds_passes.m"
                        }
#line 1226 "make_hlds_passes.m"
                        {
#line 1233 "make_hlds_passes.m"
                          {
#line 1233 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1233 "make_hlds_passes.m"
                          {
#line 1233 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216);
                          }
#line 1226 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                            {
#line 1233 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                                {
#line 1234 "make_hlds_passes.m"
                                  {
#line 1234 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35);
                                  }
#line 1235 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1235 "make_hlds_passes.m"
                                    {
#line 1235 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35, (MR_Integer) 0)));
#line 1226 "make_hlds_passes.m"
                                      {
#line 1236 "make_hlds_passes.m"
#line 1236 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36) {
#line 1236 "make_hlds_passes.m"
                                          default:
#line 1236 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1236 "make_hlds_passes.m"
                                            break;
#line 1236 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1236 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1236 "make_hlds_passes.m"
                                            break;
#line 1236 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1236 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1236 "make_hlds_passes.m"
                                            break;
#line 1236 "make_hlds_passes.m"
                                        }
#line 1226 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                                          {
#line 1237 "make_hlds_passes.m"
                                            {
#line 1237 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37);
                                            }
#line 1238 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37 == (MR_Integer) 0);
#line 1238 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1238 "make_hlds_passes.m"
                                              {
#line 1238 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1238 "make_hlds_passes.m"
                                                return;
                                              }
#line 1226 "make_hlds_passes.m"
                                          }
#line 1226 "make_hlds_passes.m"
                                      }
#line 1235 "make_hlds_passes.m"
                                    }
#line 1226 "make_hlds_passes.m"
                                }
#line 1226 "make_hlds_passes.m"
                            }
#line 1226 "make_hlds_passes.m"
                        }
#line 1233 "make_hlds_passes.m"
                      }
#line 1226 "make_hlds_passes.m"
                  }
#line 1226 "make_hlds_passes.m"
              }
#line 1233 "make_hlds_passes.m"
            }
#line 1226 "make_hlds_passes.m"
        }
#line 1232 "make_hlds_passes.m"
      }
#line 1226 "make_hlds_passes.m"
  }
#line 1226 "make_hlds_passes.m"
}

#line 1226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(
#line 1226 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1226 "make_hlds_passes.m"
{
#line 1226 "make_hlds_passes.m"
  {
#line 1226 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1226 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0) == 0)
#line 1226 "make_hlds_passes.m"
      {
#line 1226 "make_hlds_passes.m"
        {
#line 1226 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_30;
#line 1226 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_31;
#line 1226 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_87_87;
#line 1226 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_88_88;

#line 1226 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
            {
#line 1226 "make_hlds_passes.m"
              {
#line 1226 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24, (MR_Integer) 0)));
#line 1226 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24, (MR_Integer) 1)));
#line 1226 "make_hlds_passes.m"
              }
#line 1226 "make_hlds_passes.m"
              {
#line 1226 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                  {
#line 1226 "make_hlds_passes.m"
                    {
#line 1226 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_87_87, (MR_Integer) 0)));
#line 1226 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_87_87, (MR_Integer) 1)));
#line 1226 "make_hlds_passes.m"
                    }
#line 1226 "make_hlds_passes.m"
                    {
#line 1226 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                        {
#line 1227 "make_hlds_passes.m"
                          {
#line 1227 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_30);
                          }
#line 1226 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1226 "make_hlds_passes.m"
                            {
#line 1228 "make_hlds_passes.m"
                              {
#line 1228 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_31);
                              }
#line 1226 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1229 "make_hlds_passes.m"
                                {
#line 1229 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26, hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1226 "make_hlds_passes.m"
                            }
#line 1226 "make_hlds_passes.m"
                        }
#line 1226 "make_hlds_passes.m"
                    }
#line 1226 "make_hlds_passes.m"
                  }
#line 1226 "make_hlds_passes.m"
              }
#line 1226 "make_hlds_passes.m"
            }
#line 1226 "make_hlds_passes.m"
        }
#line 1226 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1226 "make_hlds_passes.m"
      }
#line 1226 "make_hlds_passes.m"
    else
#line 1226 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1226 "make_hlds_passes.m"
  }
#line 1226 "make_hlds_passes.m"
}

#line 1253 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(
#line 1253 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1253 "make_hlds_passes.m"
{
#line 1253 "make_hlds_passes.m"
  {
#line 1253 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1253 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1, 1);
#line 1253 "make_hlds_passes.m"
  }
#line 1253 "make_hlds_passes.m"
}

#line 1254 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7(
#line 1254 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1254 "make_hlds_passes.m"
{
#line 1254 "make_hlds_passes.m"
  {
#line 1254 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1254 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170);
#line 1254 "make_hlds_passes.m"
    {
#line 1254 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1254 "make_hlds_passes.m"
      return;
    }
#line 1254 "make_hlds_passes.m"
  }
#line 1254 "make_hlds_passes.m"
}

#line 1253 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(
#line 1253 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1253 "make_hlds_passes.m"
{
#line 1253 "make_hlds_passes.m"
  {
#line 1253 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1255 "make_hlds_passes.m"
    {
#line 1255 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171);
    }
#line 1257 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171)) == (MR_mktag((MR_Integer) 1)));
#line 1257 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1257 "make_hlds_passes.m"
      {
#line 1257 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171, (MR_Integer) 0)));
#line 1253 "make_hlds_passes.m"
        {
#line 1258 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1253 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1253 "make_hlds_passes.m"
            {
#line 1259 "make_hlds_passes.m"
              {
#line 1259 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173);
              }
#line 1260 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173)) == (MR_mktag((MR_Integer) 1)));
#line 1260 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1260 "make_hlds_passes.m"
                {
#line 1260 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173, (MR_Integer) 0)));
#line 1253 "make_hlds_passes.m"
                  {
#line 1261 "make_hlds_passes.m"
#line 1261 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174) {
#line 1261 "make_hlds_passes.m"
                      default:
#line 1261 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1261 "make_hlds_passes.m"
                        break;
#line 1261 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1261 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1261 "make_hlds_passes.m"
                        break;
#line 1261 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1261 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1261 "make_hlds_passes.m"
                        break;
#line 1261 "make_hlds_passes.m"
                    }
#line 1253 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1253 "make_hlds_passes.m"
                      {
#line 1262 "make_hlds_passes.m"
                        {
#line 1262 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175);
                        }
#line 1263 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175 == (MR_Integer) 2);
#line 1263 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1263 "make_hlds_passes.m"
                          {
#line 1263 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1263 "make_hlds_passes.m"
                            return;
                          }
#line 1253 "make_hlds_passes.m"
                      }
#line 1253 "make_hlds_passes.m"
                  }
#line 1260 "make_hlds_passes.m"
                }
#line 1253 "make_hlds_passes.m"
            }
#line 1253 "make_hlds_passes.m"
        }
#line 1257 "make_hlds_passes.m"
      }
#line 1253 "make_hlds_passes.m"
  }
#line 1253 "make_hlds_passes.m"
}

#line 1253 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(
#line 1253 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1253 "make_hlds_passes.m"
{
#line 1253 "make_hlds_passes.m"
  {
#line 1253 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1253 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1) == 0)
#line 1253 "make_hlds_passes.m"
      {
#line 1253 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1253 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1254 "make_hlds_passes.m"
          {
#line 1254 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26, hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1253 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1253 "make_hlds_passes.m"
      }
#line 1253 "make_hlds_passes.m"
    else
#line 1253 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1253 "make_hlds_passes.m"
  }
#line 1253 "make_hlds_passes.m"
}

#line 1178 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0(
#line 1178 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_6,
#line 1178 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45,
#line 1178 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46,
#line 1178 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47,
#line 1178 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48)
#line 1178 "make_hlds_passes.m"
{
#line 1178 "make_hlds_passes.m"
  {
#line 1178 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1182 "make_hlds_passes.m"
    {
#line 1182 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 0)));
#line 1182 "make_hlds_passes.m"
      MR_Integer hlds__make_hlds__make_hlds_passes__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 1)));
#line 1182 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__Origin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 2)));
#line 1182 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 3)));
#line 1182 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_15;
#line 1182 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_16;
#line 1193 "make_hlds_passes.m"
      MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 4)));

#line 1198 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "make_hlds_passes.m"
        {
#line 1199 "make_hlds_passes.m"
        }
#line 1198 "make_hlds_passes.m"
      else
#line 1196 "make_hlds_passes.m"
        {
#line 1197 "make_hlds_passes.m"
          {
#line 1197 "make_hlds_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_finalise\'/5", (MR_String) "bad introduced finalise declaration");
#line 1197 "make_hlds_passes.m"
            return;
          }
#line 1196 "make_hlds_passes.m"
        }
#line 1201 "make_hlds_passes.m"
      {
#line 1201 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__PredTable_15);
      }
#line 1202 "make_hlds_passes.m"
      {
#line 1202 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_15, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__PredIds_16);
      }
#line 1213 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "make_hlds_passes.m"
        {
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_17;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_18;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_19;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_138_138;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_139_139;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_140_140;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_162_162;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_163_163;
#line 1205 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_167_167;

#line 1206 "make_hlds_passes.m"
          {
#line 1206 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1206 "make_hlds_passes.m"
          }
#line 1206 "make_hlds_passes.m"
          {
#line 1206 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_140_140));
#line 1206 "make_hlds_passes.m"
          }
#line 1206 "make_hlds_passes.m"
          {
#line 1206 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_139_139));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[31])));
#line 1206 "make_hlds_passes.m"
          }
#line 1206 "make_hlds_passes.m"
          {
#line 1206 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1206 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_138_138));
#line 1206 "make_hlds_passes.m"
          }
#line 1210 "make_hlds_passes.m"
          {
#line 1210 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_17));
#line 1210 "make_hlds_passes.m"
          }
#line 1210 "make_hlds_passes.m"
          {
#line 1210 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_163_163));
#line 1210 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1210 "make_hlds_passes.m"
          }
#line 1210 "make_hlds_passes.m"
          {
#line 1210 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_18, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1210 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_162_162));
#line 1210 "make_hlds_passes.m"
          }
#line 1211 "make_hlds_passes.m"
          {
#line 1211 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_18));
#line 1211 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "make_hlds_passes.m"
          }
#line 1211 "make_hlds_passes.m"
          {
#line 1211 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1211 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_167_167));
#line 1211 "make_hlds_passes.m"
          }
#line 1212 "make_hlds_passes.m"
          {
#line 1212 "make_hlds_passes.m"
            MR_Word base;
#line 1212 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1212 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_19));
#line 1212 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1212 "make_hlds_passes.m"
          }
#line 1205 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1205 "make_hlds_passes.m"
        }
#line 1213 "make_hlds_passes.m"
      else
#line 1214 "make_hlds_passes.m"
        {
#line 1214 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_16, (MR_Integer) 0)));
#line 1214 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_16, (MR_Integer) 1)));

#line 1286 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "make_hlds_passes.m"
            {
#line 1216 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_25;
#line 1216 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_27;
#line 1216 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_28;
#line 1216 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_29;

#line 1218 "make_hlds_passes.m"
              {
#line 1218 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__make_hlds_passes__HeadPredId_20, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23);
              }
#line 1219 "make_hlds_passes.m"
              {
#line 1219 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24);
              }
#line 1220 "make_hlds_passes.m"
              {
#line 1220 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &hlds__make_hlds__make_hlds_passes__ProcTable_25);
              }
#line 3774 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1221 "make_hlds_passes.m"
              {
#line 1221 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, hlds__make_hlds__make_hlds_passes__ProcTable_25);
              }
#line 1222 "make_hlds_passes.m"
              {
#line 1222 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__Globals_27);
              }
#line 1223 "make_hlds_passes.m"
              {
#line 1223 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_27, &hlds__make_hlds__make_hlds_passes__CompilationTarget_28);
              }
#line 1224 "make_hlds_passes.m"
              {
#line 1224 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_29 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_28);
              }
#line 1226 "make_hlds_passes.m"
              {
#line 1226 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1252 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1241 "make_hlds_passes.m"
                {
#line 1241 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_38;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_39;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_40;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_94_94;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_95_95;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1241 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;

#line 1240 "make_hlds_passes.m"
                  {
#line 1240 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__CName_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93);
                  }
#line 1243 "make_hlds_passes.m"
                  {
#line 1243 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_95_95 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1243 "make_hlds_passes.m"
                  {
#line 1243 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_97_97 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1243 "make_hlds_passes.m"
                  {
#line 1243 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1243 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "make_hlds_passes.m"
                  }
#line 1243 "make_hlds_passes.m"
                  {
#line 1243 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_95_95));
#line 1243 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1243 "make_hlds_passes.m"
                  }
#line 1242 "make_hlds_passes.m"
                  {
#line 1242 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1242 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_94_94));
#line 1242 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1242 "make_hlds_passes.m"
                  }
#line 1244 "make_hlds_passes.m"
                  {
#line 1244 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_29));
#line 1244 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_39));
#line 1244 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_38));
#line 1244 "make_hlds_passes.m"
                  }
#line 1250 "make_hlds_passes.m"
                  {
#line 1250 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_40, hlds__make_hlds__make_hlds_passes__Context_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48);
#line 1250 "make_hlds_passes.m"
                    return;
                  }
#line 1241 "make_hlds_passes.m"
                }
#line 1252 "make_hlds_passes.m"
              else
#line 1277 "make_hlds_passes.m"
                {
#line 1253 "make_hlds_passes.m"
                  {
#line 1253 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1277 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1266 "make_hlds_passes.m"
                    {
#line 1266 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104;
#line 1266 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_176;
#line 1266 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_177;
#line 1266 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_178;

#line 1265 "make_hlds_passes.m"
                      {
#line 1265 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__CName_176, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104);
                      }
#line 1267 "make_hlds_passes.m"
                      {
#line 1267 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1267 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1267 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1267 "make_hlds_passes.m"
                      }
#line 1269 "make_hlds_passes.m"
                      {
#line 1269 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_29));
#line 1269 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_177));
#line 1269 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_176));
#line 1269 "make_hlds_passes.m"
                      }
#line 1275 "make_hlds_passes.m"
                      {
#line 1275 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_178, hlds__make_hlds__make_hlds_passes__Context_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48);
#line 1275 "make_hlds_passes.m"
                        return;
                      }
#line 1266 "make_hlds_passes.m"
                    }
#line 1277 "make_hlds_passes.m"
                  else
#line 1280 "make_hlds_passes.m"
                    {
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_114_114;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_115_115;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_128_128;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_129_129;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_133_133;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_181;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_182;
#line 1280 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_183;

#line 1278 "make_hlds_passes.m"
                      {
#line 1278 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1278 "make_hlds_passes.m"
                      }
#line 1278 "make_hlds_passes.m"
                      {
#line 1278 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_115_115));
#line 1278 "make_hlds_passes.m"
                      }
#line 1278 "make_hlds_passes.m"
                      {
#line 1278 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_114_114));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[35])));
#line 1278 "make_hlds_passes.m"
                      }
#line 1278 "make_hlds_passes.m"
                      {
#line 1278 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1278 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_181, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1278 "make_hlds_passes.m"
                      }
#line 1281 "make_hlds_passes.m"
                      {
#line 1281 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_181));
#line 1281 "make_hlds_passes.m"
                      }
#line 1281 "make_hlds_passes.m"
                      {
#line 1281 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_129_129));
#line 1281 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1281 "make_hlds_passes.m"
                      }
#line 1281 "make_hlds_passes.m"
                      {
#line 1281 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_182, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1281 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_182, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_128_128));
#line 1281 "make_hlds_passes.m"
                      }
#line 1283 "make_hlds_passes.m"
                      {
#line 1283 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_182));
#line 1283 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "make_hlds_passes.m"
                      }
#line 1282 "make_hlds_passes.m"
                      {
#line 1282 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1282 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1282 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_133_133));
#line 1282 "make_hlds_passes.m"
                      }
#line 1284 "make_hlds_passes.m"
                      {
#line 1284 "make_hlds_passes.m"
                        MR_Word base;
#line 1284 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1284 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_183));
#line 1284 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1284 "make_hlds_passes.m"
                      }
#line 1280 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1280 "make_hlds_passes.m"
                    }
#line 1277 "make_hlds_passes.m"
                }
#line 1216 "make_hlds_passes.m"
            }
#line 1286 "make_hlds_passes.m"
          else
#line 1287 "make_hlds_passes.m"
            {
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_55_55;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_56_56;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_57_57;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_84_84;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_204;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_205;
#line 1287 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_206;

#line 1288 "make_hlds_passes.m"
              {
#line 1288 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1288 "make_hlds_passes.m"
              }
#line 1288 "make_hlds_passes.m"
              {
#line 1288 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_57_57));
#line 1288 "make_hlds_passes.m"
              }
#line 1288 "make_hlds_passes.m"
              {
#line 1288 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_56_56));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[43])));
#line 1288 "make_hlds_passes.m"
              }
#line 1288 "make_hlds_passes.m"
              {
#line 1288 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1288 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_204, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_55_55));
#line 1288 "make_hlds_passes.m"
              }
#line 1292 "make_hlds_passes.m"
              {
#line 1292 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_204));
#line 1292 "make_hlds_passes.m"
              }
#line 1292 "make_hlds_passes.m"
              {
#line 1292 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 1292 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "make_hlds_passes.m"
              }
#line 1292 "make_hlds_passes.m"
              {
#line 1292 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_205, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1292 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_205, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1292 "make_hlds_passes.m"
              }
#line 1293 "make_hlds_passes.m"
              {
#line 1293 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_205));
#line 1293 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1293 "make_hlds_passes.m"
              }
#line 1293 "make_hlds_passes.m"
              {
#line 1293 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1293 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1293 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_84_84));
#line 1293 "make_hlds_passes.m"
              }
#line 1294 "make_hlds_passes.m"
              {
#line 1294 "make_hlds_passes.m"
                MR_Word base;
#line 1294 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1294 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_206));
#line 1294 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1294 "make_hlds_passes.m"
              }
#line 1287 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1287 "make_hlds_passes.m"
            }
#line 1214 "make_hlds_passes.m"
        }
#line 1182 "make_hlds_passes.m"
    }
#line 1178 "make_hlds_passes.m"
  }
#line 1178 "make_hlds_passes.m"
}

#line 1102 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(
#line 1102 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1102 "make_hlds_passes.m"
{
#line 1102 "make_hlds_passes.m"
  {
#line 1102 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1102 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0, 1);
#line 1102 "make_hlds_passes.m"
  }
#line 1102 "make_hlds_passes.m"
}

#line 1105 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3(
#line 1105 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1105 "make_hlds_passes.m"
{
#line 1105 "make_hlds_passes.m"
  {
#line 1105 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1105 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30);
#line 1105 "make_hlds_passes.m"
    {
#line 1105 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1105 "make_hlds_passes.m"
      return;
    }
#line 1105 "make_hlds_passes.m"
  }
#line 1105 "make_hlds_passes.m"
}

#line 1102 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(
#line 1102 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1102 "make_hlds_passes.m"
{
#line 1102 "make_hlds_passes.m"
  {
#line 1102 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1106 "make_hlds_passes.m"
    {
#line 1106 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31);
    }
#line 1108 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
#line 1108 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1108 "make_hlds_passes.m"
      {
#line 1108 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
#line 1102 "make_hlds_passes.m"
        {
#line 1109 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1109 "make_hlds_passes.m"
            {
#line 1109 "make_hlds_passes.m"
              {
#line 1109 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
#line 1109 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
#line 1109 "make_hlds_passes.m"
              }
#line 1102 "make_hlds_passes.m"
              {
#line 1109 "make_hlds_passes.m"
                {
#line 1109 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1109 "make_hlds_passes.m"
                {
#line 1109 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195);
                }
#line 1102 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                  {
#line 1109 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1109 "make_hlds_passes.m"
                      {
#line 1109 "make_hlds_passes.m"
                        {
#line 1109 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73, (MR_Integer) 0)));
#line 1109 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73, (MR_Integer) 1)));
#line 1109 "make_hlds_passes.m"
                        }
#line 1102 "make_hlds_passes.m"
                        {
#line 1109 "make_hlds_passes.m"
                          {
#line 1109 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1109 "make_hlds_passes.m"
                          {
#line 1109 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196);
                          }
#line 1102 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                            {
#line 1109 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1102 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                                {
#line 1110 "make_hlds_passes.m"
                                  {
#line 1110 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33);
                                  }
#line 1111 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
#line 1111 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1111 "make_hlds_passes.m"
                                    {
#line 1111 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
#line 1102 "make_hlds_passes.m"
                                      {
#line 1112 "make_hlds_passes.m"
#line 1112 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34) {
#line 1112 "make_hlds_passes.m"
                                          default:
#line 1112 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1112 "make_hlds_passes.m"
                                            break;
#line 1112 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1112 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1112 "make_hlds_passes.m"
                                            break;
#line 1112 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1112 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1112 "make_hlds_passes.m"
                                            break;
#line 1112 "make_hlds_passes.m"
                                        }
#line 1102 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                                          {
#line 1113 "make_hlds_passes.m"
                                            {
#line 1113 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35);
                                            }
#line 1114 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
#line 1114 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1114 "make_hlds_passes.m"
                                              {
#line 1114 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1114 "make_hlds_passes.m"
                                                return;
                                              }
#line 1102 "make_hlds_passes.m"
                                          }
#line 1102 "make_hlds_passes.m"
                                      }
#line 1111 "make_hlds_passes.m"
                                    }
#line 1102 "make_hlds_passes.m"
                                }
#line 1102 "make_hlds_passes.m"
                            }
#line 1102 "make_hlds_passes.m"
                        }
#line 1109 "make_hlds_passes.m"
                      }
#line 1102 "make_hlds_passes.m"
                  }
#line 1102 "make_hlds_passes.m"
              }
#line 1109 "make_hlds_passes.m"
            }
#line 1102 "make_hlds_passes.m"
        }
#line 1108 "make_hlds_passes.m"
      }
#line 1102 "make_hlds_passes.m"
  }
#line 1102 "make_hlds_passes.m"
}

#line 1102 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(
#line 1102 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1102 "make_hlds_passes.m"
{
#line 1102 "make_hlds_passes.m"
  {
#line 1102 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1102 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0) == 0)
#line 1102 "make_hlds_passes.m"
      {
#line 1102 "make_hlds_passes.m"
        {
#line 1102 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
#line 1102 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
#line 1102 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_70_70;
#line 1102 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_71_71;

#line 1102 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
            {
#line 1102 "make_hlds_passes.m"
              {
#line 1102 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
#line 1102 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
#line 1102 "make_hlds_passes.m"
              }
#line 1102 "make_hlds_passes.m"
              {
#line 1102 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                  {
#line 1102 "make_hlds_passes.m"
                    {
#line 1102 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 0)));
#line 1102 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 1)));
#line 1102 "make_hlds_passes.m"
                    }
#line 1102 "make_hlds_passes.m"
                    {
#line 1102 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1102 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                        {
#line 1103 "make_hlds_passes.m"
                          {
#line 1103 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
#line 1102 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                            {
#line 1104 "make_hlds_passes.m"
                              {
#line 1104 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
#line 1102 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1105 "make_hlds_passes.m"
                                {
#line 1105 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1102 "make_hlds_passes.m"
                            }
#line 1102 "make_hlds_passes.m"
                        }
#line 1102 "make_hlds_passes.m"
                    }
#line 1102 "make_hlds_passes.m"
                  }
#line 1102 "make_hlds_passes.m"
              }
#line 1102 "make_hlds_passes.m"
            }
#line 1102 "make_hlds_passes.m"
        }
#line 1102 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1102 "make_hlds_passes.m"
      }
#line 1102 "make_hlds_passes.m"
    else
#line 1102 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1102 "make_hlds_passes.m"
  }
#line 1102 "make_hlds_passes.m"
}

#line 1129 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(
#line 1129 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1129 "make_hlds_passes.m"
{
#line 1129 "make_hlds_passes.m"
  {
#line 1129 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1129 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1, 1);
#line 1129 "make_hlds_passes.m"
  }
#line 1129 "make_hlds_passes.m"
}

#line 1130 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7(
#line 1130 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1130 "make_hlds_passes.m"
{
#line 1130 "make_hlds_passes.m"
  {
#line 1130 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1130 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150);
#line 1130 "make_hlds_passes.m"
    {
#line 1130 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1130 "make_hlds_passes.m"
      return;
    }
#line 1130 "make_hlds_passes.m"
  }
#line 1130 "make_hlds_passes.m"
}

#line 1129 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(
#line 1129 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1129 "make_hlds_passes.m"
{
#line 1129 "make_hlds_passes.m"
  {
#line 1129 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1131 "make_hlds_passes.m"
    {
#line 1131 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151);
    }
#line 1133 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151)) == (MR_mktag((MR_Integer) 1)));
#line 1133 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1133 "make_hlds_passes.m"
      {
#line 1133 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151, (MR_Integer) 0)));
#line 1129 "make_hlds_passes.m"
        {
#line 1134 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1129 "make_hlds_passes.m"
            {
#line 1135 "make_hlds_passes.m"
              {
#line 1135 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153);
              }
#line 1136 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153)) == (MR_mktag((MR_Integer) 1)));
#line 1136 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1136 "make_hlds_passes.m"
                {
#line 1136 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153, (MR_Integer) 0)));
#line 1129 "make_hlds_passes.m"
                  {
#line 1137 "make_hlds_passes.m"
#line 1137 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154) {
#line 1137 "make_hlds_passes.m"
                      default:
#line 1137 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1137 "make_hlds_passes.m"
                        break;
#line 1137 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1137 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1137 "make_hlds_passes.m"
                        break;
#line 1137 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1137 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1137 "make_hlds_passes.m"
                        break;
#line 1137 "make_hlds_passes.m"
                    }
#line 1129 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1129 "make_hlds_passes.m"
                      {
#line 1138 "make_hlds_passes.m"
                        {
#line 1138 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155);
                        }
#line 1139 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155 == (MR_Integer) 2);
#line 1139 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1139 "make_hlds_passes.m"
                          {
#line 1139 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1139 "make_hlds_passes.m"
                            return;
                          }
#line 1129 "make_hlds_passes.m"
                      }
#line 1129 "make_hlds_passes.m"
                  }
#line 1136 "make_hlds_passes.m"
                }
#line 1129 "make_hlds_passes.m"
            }
#line 1129 "make_hlds_passes.m"
        }
#line 1133 "make_hlds_passes.m"
      }
#line 1129 "make_hlds_passes.m"
  }
#line 1129 "make_hlds_passes.m"
}

#line 1129 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(
#line 1129 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1129 "make_hlds_passes.m"
{
#line 1129 "make_hlds_passes.m"
  {
#line 1129 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1129 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1) == 0)
#line 1129 "make_hlds_passes.m"
      {
#line 1129 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1130 "make_hlds_passes.m"
          {
#line 1130 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1129 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1129 "make_hlds_passes.m"
      }
#line 1129 "make_hlds_passes.m"
    else
#line 1129 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1129 "make_hlds_passes.m"
  }
#line 1129 "make_hlds_passes.m"
}

#line 1059 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0(
#line 1059 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
#line 1059 "make_hlds_passes.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
#line 1059 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
#line 1059 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
#line 1059 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
#line 1059 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
#line 1059 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
#line 1059 "make_hlds_passes.m"
{
#line 1059 "make_hlds_passes.m"
  {
#line 1059 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1063 "make_hlds_passes.m"
    {
#line 1063 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
#line 1063 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

#line 1076 "make_hlds_passes.m"
      {
#line 1076 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
#line 1077 "make_hlds_passes.m"
      {
#line 1077 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
#line 1088 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1080 "make_hlds_passes.m"
        {
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_118_118;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_119_119;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_120_120;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_142_142;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_143_143;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_147_147;

#line 1081 "make_hlds_passes.m"
          {
#line 1081 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1081 "make_hlds_passes.m"
          }
#line 1081 "make_hlds_passes.m"
          {
#line 1081 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_120_120));
#line 1081 "make_hlds_passes.m"
          }
#line 1081 "make_hlds_passes.m"
          {
#line 1081 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_119_119));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[22])));
#line 1081 "make_hlds_passes.m"
          }
#line 1081 "make_hlds_passes.m"
          {
#line 1081 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1081 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_118_118));
#line 1081 "make_hlds_passes.m"
          }
#line 1085 "make_hlds_passes.m"
          {
#line 1085 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
#line 1085 "make_hlds_passes.m"
          }
#line 1085 "make_hlds_passes.m"
          {
#line 1085 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_143_143));
#line 1085 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1085 "make_hlds_passes.m"
          }
#line 1085 "make_hlds_passes.m"
          {
#line 1085 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1085 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_142_142));
#line 1085 "make_hlds_passes.m"
          }
#line 1086 "make_hlds_passes.m"
          {
#line 1086 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
#line 1086 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "make_hlds_passes.m"
          }
#line 1086 "make_hlds_passes.m"
          {
#line 1086 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1086 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_147_147));
#line 1086 "make_hlds_passes.m"
          }
#line 1087 "make_hlds_passes.m"
          {
#line 1087 "make_hlds_passes.m"
            MR_Word base;
#line 1087 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1087 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
#line 1087 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1087 "make_hlds_passes.m"
          }
#line 1080 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1080 "make_hlds_passes.m"
        }
#line 1088 "make_hlds_passes.m"
      else
#line 1089 "make_hlds_passes.m"
        {
#line 1089 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
#line 1089 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

#line 1164 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1091 "make_hlds_passes.m"
            {
#line 1091 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
#line 1091 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
#line 1091 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
#line 1091 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

#line 1093 "make_hlds_passes.m"
              {
#line 1093 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21);
              }
#line 1094 "make_hlds_passes.m"
              {
#line 1094 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22);
              }
#line 1095 "make_hlds_passes.m"
              {
#line 1095 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 4963 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1096 "make_hlds_passes.m"
              {
#line 1096 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 1097 "make_hlds_passes.m"
              {
#line 1097 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
#line 1098 "make_hlds_passes.m"
              {
#line 1098 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1099 "make_hlds_passes.m"
              {
#line 1099 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1102 "make_hlds_passes.m"
              {
#line 1102 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1128 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1117 "make_hlds_passes.m"
                {
#line 1117 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_77_77;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_78_78;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1117 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;

#line 1116 "make_hlds_passes.m"
                  {
#line 1116 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76);
                  }
#line 1119 "make_hlds_passes.m"
                  {
#line 1119 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_78_78 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1119 "make_hlds_passes.m"
                  {
#line 1119 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_80_80 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1119 "make_hlds_passes.m"
                  {
#line 1119 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 1119 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "make_hlds_passes.m"
                  }
#line 1119 "make_hlds_passes.m"
                  {
#line 1119 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_78_78));
#line 1119 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1119 "make_hlds_passes.m"
                  }
#line 1118 "make_hlds_passes.m"
                  {
#line 1118 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1118 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_77_77));
#line 1118 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1118 "make_hlds_passes.m"
                  }
#line 1120 "make_hlds_passes.m"
                  {
#line 1120 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1120 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
#line 1120 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
#line 1120 "make_hlds_passes.m"
                  }
#line 1126 "make_hlds_passes.m"
                  {
#line 1126 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
#line 1126 "make_hlds_passes.m"
                    return;
                  }
#line 1117 "make_hlds_passes.m"
                }
#line 1128 "make_hlds_passes.m"
              else
#line 1153 "make_hlds_passes.m"
                {
#line 1129 "make_hlds_passes.m"
                  {
#line 1129 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1153 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1142 "make_hlds_passes.m"
                    {
#line 1142 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87;
#line 1142 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_156;
#line 1142 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_157;
#line 1142 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_158;

#line 1141 "make_hlds_passes.m"
                      {
#line 1141 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_156, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87);
                      }
#line 1143 "make_hlds_passes.m"
                      {
#line 1143 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1143 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1143 "make_hlds_passes.m"
                      }
#line 1145 "make_hlds_passes.m"
                      {
#line 1145 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1145 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_157));
#line 1145 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_156));
#line 1145 "make_hlds_passes.m"
                      }
#line 1151 "make_hlds_passes.m"
                      {
#line 1151 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_158, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
#line 1151 "make_hlds_passes.m"
                        return;
                      }
#line 1142 "make_hlds_passes.m"
                    }
#line 1153 "make_hlds_passes.m"
                  else
#line 1157 "make_hlds_passes.m"
                    {
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_98_98;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_108_108;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_109_109;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_161;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_162;
#line 1157 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_163;

#line 1155 "make_hlds_passes.m"
                      {
#line 1155 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1155 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1155 "make_hlds_passes.m"
                      }
#line 1155 "make_hlds_passes.m"
                      {
#line 1155 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1155 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_98_98));
#line 1155 "make_hlds_passes.m"
                      }
#line 1155 "make_hlds_passes.m"
                      {
#line 1155 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1155 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[26])));
#line 1155 "make_hlds_passes.m"
                      }
#line 1154 "make_hlds_passes.m"
                      {
#line 1154 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1154 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1154 "make_hlds_passes.m"
                      }
#line 1159 "make_hlds_passes.m"
                      {
#line 1159 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_161));
#line 1159 "make_hlds_passes.m"
                      }
#line 1159 "make_hlds_passes.m"
                      {
#line 1159 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_109_109));
#line 1159 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "make_hlds_passes.m"
                      }
#line 1159 "make_hlds_passes.m"
                      {
#line 1159 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1159 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_108_108));
#line 1159 "make_hlds_passes.m"
                      }
#line 1161 "make_hlds_passes.m"
                      {
#line 1161 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_162));
#line 1161 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "make_hlds_passes.m"
                      }
#line 1160 "make_hlds_passes.m"
                      {
#line 1160 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1160 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1160 "make_hlds_passes.m"
                      }
#line 1162 "make_hlds_passes.m"
                      {
#line 1162 "make_hlds_passes.m"
                        MR_Word base;
#line 1162 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1162 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_163));
#line 1162 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1162 "make_hlds_passes.m"
                      }
#line 1157 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1157 "make_hlds_passes.m"
                    }
#line 1153 "make_hlds_passes.m"
                }
#line 1091 "make_hlds_passes.m"
            }
#line 1164 "make_hlds_passes.m"
          else
#line 1165 "make_hlds_passes.m"
            {
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_50_50;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_51_51;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_62_62;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_63_63;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_67_67;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_184;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_185;
#line 1165 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_186;

#line 1166 "make_hlds_passes.m"
              {
#line 1166 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1166 "make_hlds_passes.m"
              }
#line 1166 "make_hlds_passes.m"
              {
#line 1166 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 1166 "make_hlds_passes.m"
              }
#line 1166 "make_hlds_passes.m"
              {
#line 1166 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_51_51));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[29])));
#line 1166 "make_hlds_passes.m"
              }
#line 1166 "make_hlds_passes.m"
              {
#line 1166 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1166 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_50_50));
#line 1166 "make_hlds_passes.m"
              }
#line 1169 "make_hlds_passes.m"
              {
#line 1169 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_184));
#line 1169 "make_hlds_passes.m"
              }
#line 1169 "make_hlds_passes.m"
              {
#line 1169 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_63_63));
#line 1169 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "make_hlds_passes.m"
              }
#line 1169 "make_hlds_passes.m"
              {
#line 1169 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1169 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_62_62));
#line 1169 "make_hlds_passes.m"
              }
#line 1171 "make_hlds_passes.m"
              {
#line 1171 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_185));
#line 1171 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "make_hlds_passes.m"
              }
#line 1170 "make_hlds_passes.m"
              {
#line 1170 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1170 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1170 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_67_67));
#line 1170 "make_hlds_passes.m"
              }
#line 1172 "make_hlds_passes.m"
              {
#line 1172 "make_hlds_passes.m"
                MR_Word base;
#line 1172 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1172 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_186));
#line 1172 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1172 "make_hlds_passes.m"
              }
#line 1165 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1165 "make_hlds_passes.m"
            }
#line 1089 "make_hlds_passes.m"
        }
#line 1063 "make_hlds_passes.m"
    }
#line 1059 "make_hlds_passes.m"
  }
#line 1059 "make_hlds_passes.m"
}

#line 1041 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_8_p_0(
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_9,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes___Status_10,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 1041 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22,
#line 1041 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23,
#line 1041 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 1041 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 1041 "make_hlds_passes.m"
{
#line 1047 "make_hlds_passes.m"
  {
#line 1047 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 1047 "make_hlds_passes.m"
    {
#line 1047 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
#line 1047 "make_hlds_passes.m"
      return;
    }
#line 1047 "make_hlds_passes.m"
  }
#line 1041 "make_hlds_passes.m"
}

#line 1010 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_13,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_14,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VarSet_15,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Goal_16,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_17,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_18,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 1010 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28,
#line 1010 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29,
#line 1010 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30,
#line 1010 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31)
#line 1010 "make_hlds_passes.m"
{
#line 1016 "make_hlds_passes.m"
  {
#line 1016 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1016 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Line_22;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__File_23;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__Name_24;
#line 1016 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_25;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_35_35;
#line 1016 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_42_42;
#line 1016 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_44_44;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_48_48;
#line 1016 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_54_54;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_56_56;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_57_57;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_64_64;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_66_66;
#line 1016 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_67_67;

#line 1017 "make_hlds_passes.m"
    {
#line 1017 "make_hlds_passes.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__Line_22);
    }
#line 1018 "make_hlds_passes.m"
    {
#line 1018 "make_hlds_passes.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__File_23);
    }
#line 1020 "make_hlds_passes.m"
    {
#line 1020 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_35_35 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_passes__PromiseType_13);
    }
#line 5529 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__V_54_54 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_8[0];
#line 1020 "make_hlds_passes.m"
    {
#line 1020 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__File_23, &hlds__make_hlds__make_hlds_passes__V_48_48);
    }
#line 1019 "make_hlds_passes.m"
    {
#line 1019 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_48_48);
    }
#line 1020 "make_hlds_passes.m"
    {
#line 1020 "make_hlds_passes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__Line_22, &hlds__make_hlds__make_hlds_passes__V_57_57);
    }
#line 1019 "make_hlds_passes.m"
    {
#line 1019 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_57_57, hlds__make_hlds__make_hlds_passes__V_56_56);
    }
#line 1019 "make_hlds_passes.m"
    {
#line 1019 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_64_64);
    }
#line 1020 "make_hlds_passes.m"
    {
#line 1020 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__V_35_35, &hlds__make_hlds__make_hlds_passes__V_67_67);
    }
#line 1019 "make_hlds_passes.m"
    {
#line 1019 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Name_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_67_67, hlds__make_hlds__make_hlds_passes__V_66_66);
    }
#line 1034 "make_hlds_passes.m"
    {
#line 1034 "make_hlds_passes.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__make_hlds_passes__ModuleName_25);
    }
#line 1035 "make_hlds_passes.m"
    {
#line 1035 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_25));
#line 1035 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Name_24));
#line 1035 "make_hlds_passes.m"
    }
#line 1036 "make_hlds_passes.m"
    {
#line 1036 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PromiseType_13));
#line 1036 "make_hlds_passes.m"
    }
#line 1035 "make_hlds_passes.m"
    {
#line 1035 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_15, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__V_42_42, hlds__make_hlds__make_hlds_passes__HeadVars_14, hlds__make_hlds__make_hlds_passes__Goal_16, hlds__make_hlds__make_hlds_passes__Status_18, hlds__make_hlds__make_hlds_passes__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__V_44_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31);
#line 1035 "make_hlds_passes.m"
      return;
    }
#line 1016 "make_hlds_passes.m"
  }
#line 1010 "make_hlds_passes.m"
}

#line 983 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_promise_8_p_0(
#line 983 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPromise_9,
#line 983 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 983 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21,
#line 983 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22,
#line 983 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_23,
#line 983 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_24,
#line 983 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25,
#line 983 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26)
#line 983 "make_hlds_passes.m"
{
#line 988 "make_hlds_passes.m"
  {
#line 988 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 0)));
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 1)));
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 2)));
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 3)));
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 4)));
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_20;
#line 988 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 989 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 5)));

#line 995 "make_hlds_passes.m"
    {
#line 995 "make_hlds_passes.m"
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_passes__UnivVars_17, &hlds__make_hlds__make_hlds_passes__HeadVars_20);
    }
#line 1003 "make_hlds_passes.m"
#line 1003 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PromiseType_14) {
#line 1003 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 1003 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 1003 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 1002 "make_hlds_passes.m"
        {
#line 1002 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(hlds__make_hlds__make_hlds_passes__UnivVars_17, hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
        }
#line 1003 "make_hlds_passes.m"
        break;
#line 1003 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 1004 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25;
#line 1003 "make_hlds_passes.m"
        break;
#line 1003 "make_hlds_passes.m"
    }
#line 1007 "make_hlds_passes.m"
    {
#line 1007 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__HeadVars_20, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26);
#line 1007 "make_hlds_passes.m"
      return;
    }
#line 988 "make_hlds_passes.m"
  }
#line 983 "make_hlds_passes.m"
}

#line 963 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_pred_decl_8_p_0(
#line 963 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_9,
#line 963 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 963 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30,
#line 963 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31,
#line 963 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_32,
#line 963 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_33,
#line 963 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 963 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 963 "make_hlds_passes.m"
{
#line 968 "make_hlds_passes.m"
  {
#line 968 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 968 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 0)));
#line 968 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 1)));
#line 968 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 2)));
#line 968 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 12)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 3)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 4)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 5)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 6)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 7)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 8)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 9)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 10)));
#line 969 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 11)));
#line 969 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 13)));

#line 973 "make_hlds_passes.m"
#line 973 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_15) {
#line 973 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 973 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 974 "make_hlds_passes.m"
        {
#line 974 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__PredArity_28;
#line 974 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_29;

#line 975 "make_hlds_passes.m"
          {
#line 975 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_16, &hlds__make_hlds__make_hlds_passes__PredArity_28);
          }
#line 976 "make_hlds_passes.m"
          {
#line 976 "make_hlds_passes.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_29, hlds__make_hlds__make_hlds_passes__PredArity_28);
          }
#line 977 "make_hlds_passes.m"
          {
#line 977 "make_hlds_passes.m"
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30, hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__FuncArity_29, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__Context_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
          }
#line 974 "make_hlds_passes.m"
        }
#line 973 "make_hlds_passes.m"
        break;
#line 973 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 972 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 973 "make_hlds_passes.m"
        break;
#line 973 "make_hlds_passes.m"
    }
#line 968 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_32;
#line 968 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30;
#line 968 "make_hlds_passes.m"
  }
#line 963 "make_hlds_passes.m"
}

#line 948 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_8_p_0(
#line 948 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 948 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 948 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 948 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 948 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 948 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 948 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 948 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 948 "make_hlds_passes.m"
{
#line 953 "make_hlds_passes.m"
  while (MR_TRUE)
#line 953 "make_hlds_passes.m"
    {
#line 953 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 953 "make_hlds_passes.m"
      {
#line 953 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 953 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 953 "make_hlds_passes.m"
          {
#line 954 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 954 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 954 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 953 "make_hlds_passes.m"
          }
#line 953 "make_hlds_passes.m"
        else
#line 956 "make_hlds_passes.m"
          {
#line 956 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 956 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 956 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 956 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 956 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;
#line 956 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_48;

#line 1309 "make_hlds_passes.m"
            {
#line 1309 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__DefinedThisModule_48 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__HeadVar__2_2);
            }
#line 1314 "make_hlds_passes.m"
#line 1314 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_48) {
#line 1314 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1314 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 1315 "make_hlds_passes.m"
                {
#line 1315 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 1315 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 1315 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 1315 "make_hlds_passes.m"
                }
#line 1314 "make_hlds_passes.m"
                break;
#line 1314 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 1312 "make_hlds_passes.m"
                {
#line 1312 "make_hlds_passes.m"
                  hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_19, hlds__make_hlds__make_hlds_passes__HeadVar__2_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
                }
#line 1314 "make_hlds_passes.m"
                break;
#line 1314 "make_hlds_passes.m"
            }
#line 958 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 958 "make_hlds_passes.m"
            {
#line 958 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_20;
#line 958 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 958 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 958 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 958 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 958 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 958 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 958 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 958 "make_hlds_passes.m"
            }
#line 958 "make_hlds_passes.m"
            continue;
#line 956 "make_hlds_passes.m"
          }
#line 953 "make_hlds_passes.m"
      }
#line 953 "make_hlds_passes.m"
      break;
#line 953 "make_hlds_passes.m"
    }
#line 948 "make_hlds_passes.m"
}

#line 923 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_type_defn_8_p_0(
#line 923 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9,
#line 923 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 923 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23,
#line 923 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24,
#line 923 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25,
#line 923 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26,
#line 923 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27,
#line 923 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28)
#line 923 "make_hlds_passes.m"
{
#line 928 "make_hlds_passes.m"
  {
#line 928 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 928 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 0)));
#line 928 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 1)));
#line 928 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 2)));
#line 928 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 4)));
#line 929 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 3)));
#line 929 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 5)));
#line 944 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20;
#line 936 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_29_29;
#line 936 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_21;

#line 936 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 936 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 936 "make_hlds_passes.m"
      {
#line 936 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 1)));
#line 936 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 2)));
#line 937 "make_hlds_passes.m"
        {
#line 937 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_29_29 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_10);
        }
#line 937 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_29_29 == (MR_Integer) 1);
#line 936 "make_hlds_passes.m"
      }
#line 944 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 940 "make_hlds_passes.m"
      {
#line 940 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_22;
#line 940 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30;
#line 940 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31;
#line 940 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32;
#line 941 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_36_36;
#line 941 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_37_37;
#line 941 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;
#line 941 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;

#line 939 "make_hlds_passes.m"
        {
#line 939 "make_hlds_passes.m"
          hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_11_p_0(hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__TypeParams_15, hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32);
        }
#line 941 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 0)));
#line 941 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 1)));
#line 941 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 2)));
#line 941 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 3)));
#line 941 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__MutableItems_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 4)));
#line 942 "make_hlds_passes.m"
        {
#line 942 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_8_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_22, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 942 "make_hlds_passes.m"
          return;
        }
#line 940 "make_hlds_passes.m"
      }
#line 944 "make_hlds_passes.m"
    else
#line 945 "make_hlds_passes.m"
      {
#line 945 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 945 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25;
#line 945 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23;
#line 945 "make_hlds_passes.m"
      }
#line 928 "make_hlds_passes.m"
  }
#line 923 "make_hlds_passes.m"
}

#line 884 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_clause_8_p_0(
#line 884 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemClause_9,
#line 884 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 884 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28,
#line 884 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29,
#line 884 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30,
#line 884 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31,
#line 884 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32,
#line 884 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33)
#line 884 "make_hlds_passes.m"
{
#line 889 "make_hlds_passes.m"
  {
#line 889 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 0)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 1)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 2)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 3)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 4)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Body_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 5)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 6)));
#line 889 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 7)));
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40;
#line 889 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_45_45;

#line 914 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 904 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "make_hlds_passes.m"
        {
#line 894 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__Arity_22;
#line 894 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23;
#line 894 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__ClauseId_24;
#line 894 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_37_37;
#line 894 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;
#line 894 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 894 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_41_41;
#line 894 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__V_42_42;

#line 895 "make_hlds_passes.m"
          {
#line 895 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[3], hlds__make_hlds__make_hlds_passes__Args_16, &hlds__make_hlds__make_hlds_passes__Arity_22);
          }
#line 899 "make_hlds_passes.m"
          {
#line 899 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredName_14);
          }
#line 901 "make_hlds_passes.m"
          {
#line 901 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 901 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23));
#line 901 "make_hlds_passes.m"
          }
#line 901 "make_hlds_passes.m"
          {
#line 901 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_38_38));
#line 901 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_22));
#line 901 "make_hlds_passes.m"
          }
#line 900 "make_hlds_passes.m"
          {
#line 900 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ClauseId_24 = parse_tree__prog_out__simple_call_id_to_string_2_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__V_37_37);
          }
#line 902 "make_hlds_passes.m"
          {
#line 902 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "clause for ", hlds__make_hlds__make_hlds_passes__ClauseId_24);
          }
#line 902 "make_hlds_passes.m"
          {
#line 902 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 902 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_42_42));
#line 902 "make_hlds_passes.m"
          }
#line 902 "make_hlds_passes.m"
          {
#line 902 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_41_41));
#line 902 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "make_hlds_passes.m"
          }
#line 902 "make_hlds_passes.m"
          {
#line 902 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40);
          }
#line 894 "make_hlds_passes.m"
        }
#line 904 "make_hlds_passes.m"
      else
#line 905 "make_hlds_passes.m"
        {
#line 905 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_25 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 905 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__AllowExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_25, (MR_Integer) 0)));
#line 906 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___IsMutable_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_25, (MR_Integer) 1)));

#line 909 "make_hlds_passes.m"
#line 909 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__AllowExport_26) {
#line 909 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 909 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 908 "make_hlds_passes.m"
              {
#line 908 "make_hlds_passes.m"
              }
#line 909 "make_hlds_passes.m"
              break;
#line 909 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 910 "make_hlds_passes.m"
              {
#line 911 "make_hlds_passes.m"
                {
#line 911 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_clause\'/8", (MR_String) "bad introduced clause");
#line 911 "make_hlds_passes.m"
                  return;
                }
#line 910 "make_hlds_passes.m"
              }
#line 909 "make_hlds_passes.m"
              break;
#line 909 "make_hlds_passes.m"
          }
#line 905 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 905 "make_hlds_passes.m"
        }
#line 914 "make_hlds_passes.m"
    else
#line 914 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 919 "make_hlds_passes.m"
    {
#line 919 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SeqNum_21));
#line 919 "make_hlds_passes.m"
    }
#line 918 "make_hlds_passes.m"
    {
#line 918 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_18, hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__PredName_14, hlds__make_hlds__make_hlds_passes__Args_16, hlds__make_hlds__make_hlds_passes__Body_19, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 918 "make_hlds_passes.m"
      return;
    }
#line 889 "make_hlds_passes.m"
  }
#line 884 "make_hlds_passes.m"
}

#line 838 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_pass_3_8_p_0(
#line 838 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_9,
#line 838 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_10,
#line 838 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29,
#line 838 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30,
#line 838 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31,
#line 838 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32,
#line 838 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33,
#line 838 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34)
#line 838 "make_hlds_passes.m"
{
#line 844 "make_hlds_passes.m"
  {
#line 844 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 844 "make_hlds_passes.m"
#line 844 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10)) {
#line 844 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 844 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 871 "make_hlds_passes.m"
        {
#line 871 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 871 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 871 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 871 "make_hlds_passes.m"
        }
#line 844 "make_hlds_passes.m"
        break;
#line 844 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 844 "make_hlds_passes.m"
        {
#line 844 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemClause_14 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 1);

#line 845 "make_hlds_passes.m"
          {
#line 845 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_3_clause_8_p_0(hlds__make_hlds__make_hlds_passes__ItemClause_14, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 845 "make_hlds_passes.m"
            return;
          }
#line 844 "make_hlds_passes.m"
        }
#line 844 "make_hlds_passes.m"
        break;
#line 844 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 847 "make_hlds_passes.m"
        {
#line 847 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 2);

#line 848 "make_hlds_passes.m"
          {
#line 848 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_3_type_defn_8_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefn_15, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 848 "make_hlds_passes.m"
            return;
          }
#line 847 "make_hlds_passes.m"
        }
#line 844 "make_hlds_passes.m"
        break;
#line 844 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 844 "make_hlds_passes.m"
#line 844 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 0)))) {
#line 844 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 872 "make_hlds_passes.m"
            {
#line 872 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 872 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 872 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 872 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 873 "make_hlds_passes.m"
            {
#line 873 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 873 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 873 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 873 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 851 "make_hlds_passes.m"
            {
#line 851 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 852 "make_hlds_passes.m"
              {
#line 852 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_pred_decl_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_16, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 852 "make_hlds_passes.m"
                return;
              }
#line 851 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 874 "make_hlds_passes.m"
            {
#line 874 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 874 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 874 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 874 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 855 "make_hlds_passes.m"
            {
#line 855 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPragma_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 856 "make_hlds_passes.m"
              {
#line 856 "make_hlds_passes.m"
                hlds__make_hlds__add_pragma__add_pass_3_pragma_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPragma_17, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 856 "make_hlds_passes.m"
                return;
              }
#line 855 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 858 "make_hlds_passes.m"
            {
#line 858 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPromise_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 859 "make_hlds_passes.m"
              {
#line 859 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_promise_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPromise_18, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 859 "make_hlds_passes.m"
                return;
              }
#line 858 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 875 "make_hlds_passes.m"
            {
#line 875 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 875 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 875 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 875 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 876 "make_hlds_passes.m"
            {
#line 876 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 876 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 876 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 876 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 861 "make_hlds_passes.m"
            {
#line 861 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 862 "make_hlds_passes.m"
              {
#line 862 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 862 "make_hlds_passes.m"
                return;
              }
#line 861 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 865 "make_hlds_passes.m"
            {
#line 865 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 866 "make_hlds_passes.m"
              {
#line 866 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0(hlds__make_hlds__make_hlds_passes__ItemFinalise_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
              }
#line 865 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 865 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 868 "make_hlds_passes.m"
            {
#line 868 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 868 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_69;

#line 1309 "make_hlds_passes.m"
              {
#line 1309 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__DefinedThisModule_69 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_9);
              }
#line 1314 "make_hlds_passes.m"
#line 1314 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_69) {
#line 1314 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1314 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 1315 "make_hlds_passes.m"
                  {
#line 1315 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 1315 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 1315 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 1315 "make_hlds_passes.m"
                  }
#line 1314 "make_hlds_passes.m"
                  break;
#line 1314 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 1312 "make_hlds_passes.m"
                  {
#line 1312 "make_hlds_passes.m"
                    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_21, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
#line 1312 "make_hlds_passes.m"
                    return;
                  }
#line 1314 "make_hlds_passes.m"
                  break;
#line 1314 "make_hlds_passes.m"
              }
#line 868 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
          case (MR_Integer) 11:
#line 877 "make_hlds_passes.m"
            {
#line 877 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_29;
#line 877 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_31;
#line 877 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 877 "make_hlds_passes.m"
            }
#line 844 "make_hlds_passes.m"
            break;
#line 844 "make_hlds_passes.m"
        }
#line 844 "make_hlds_passes.m"
        break;
#line 844 "make_hlds_passes.m"
    }
#line 844 "make_hlds_passes.m"
  }
#line 838 "make_hlds_passes.m"
}

#line 806 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(
#line 806 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_7,
#line 806 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 806 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22,
#line 806 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23,
#line 806 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 806 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 806 "make_hlds_passes.m"
{
#line 810 "make_hlds_passes.m"
  {
#line 810 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 810 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 810 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_21;
#line 810 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 811 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 812 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 817 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 814 "make_hlds_passes.m"
      {
#line 814 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 6)));
#line 813 "make_hlds_passes.m"
        MR_String hlds__make_hlds__make_hlds_passes___Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 0)));
#line 813 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 1)));
#line 813 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___InitTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 2)));
#line 813 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 3)));
#line 813 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___MutAttrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 4)));
#line 813 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 5)));
#line 813 "make_hlds_passes.m"
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 7)));

#line 815 "make_hlds_passes.m"
        {
#line 815 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[11]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
        }
#line 814 "make_hlds_passes.m"
      }
#line 817 "make_hlds_passes.m"
    else
#line 817 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24;
#line 827 "make_hlds_passes.m"
    {
#line 827 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_21 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_11);
    }
#line 831 "make_hlds_passes.m"
#line 831 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_21) {
#line 831 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 831 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 832 "make_hlds_passes.m"
        {
#line 832 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22;
#line 832 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 832 "make_hlds_passes.m"
        }
#line 831 "make_hlds_passes.m"
        break;
#line 831 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 830 "make_hlds_passes.m"
        {
#line 830 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_7, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
#line 830 "make_hlds_passes.m"
          return;
        }
#line 831 "make_hlds_passes.m"
        break;
#line 831 "make_hlds_passes.m"
    }
#line 810 "make_hlds_passes.m"
  }
#line 806 "make_hlds_passes.m"
}

#line 780 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_finalise_6_p_0(
#line 780 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_7,
#line 780 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 780 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
#line 780 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
#line 780 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
#line 780 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
#line 780 "make_hlds_passes.m"
{
#line 784 "make_hlds_passes.m"
  {
#line 784 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 784 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 2)));
#line 784 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 3)));
#line 784 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 787 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 0)));
#line 787 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 1)));
#line 787 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 4)));
#line 788 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 789 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 800 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 794 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "make_hlds_passes.m"
        {
#line 792 "make_hlds_passes.m"
          {
#line 792 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[9]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
#line 791 "make_hlds_passes.m"
        }
#line 794 "make_hlds_passes.m"
      else
#line 797 "make_hlds_passes.m"
        {
#line 798 "make_hlds_passes.m"
          {
#line 798 "make_hlds_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_finalise\'/6", (MR_String) "bad introduced finalise declaration");
#line 798 "make_hlds_passes.m"
            return;
          }
#line 797 "make_hlds_passes.m"
        }
#line 800 "make_hlds_passes.m"
    else
#line 800 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 784 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
#line 784 "make_hlds_passes.m"
  }
#line 780 "make_hlds_passes.m"
}

#line 747 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_initialise_6_p_0(
#line 747 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_7,
#line 747 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 747 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21,
#line 747 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22,
#line 747 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23,
#line 747 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24)
#line 747 "make_hlds_passes.m"
{
#line 751 "make_hlds_passes.m"
  {
#line 751 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 751 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 2)));
#line 751 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 3)));
#line 751 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 754 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 0)));
#line 754 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 1)));
#line 754 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 4)));
#line 755 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 756 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 774 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 761 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "make_hlds_passes.m"
        {
#line 759 "make_hlds_passes.m"
          {
#line 759 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[7]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24);
          }
#line 758 "make_hlds_passes.m"
        }
#line 761 "make_hlds_passes.m"
      else
#line 762 "make_hlds_passes.m"
        {
#line 762 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_18 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_13), (MR_Integer) 1);
#line 762 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_18, (MR_Integer) 1)));
#line 763 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_18, (MR_Integer) 0)));

#line 768 "make_hlds_passes.m"
#line 768 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__IsMutable_20) {
#line 768 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 768 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 767 "make_hlds_passes.m"
              {
#line 767 "make_hlds_passes.m"
              }
#line 768 "make_hlds_passes.m"
              break;
#line 768 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 769 "make_hlds_passes.m"
              {
#line 770 "make_hlds_passes.m"
                {
#line 770 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_initialise\'/6", (MR_String) "bad introduced initialise declaration");
#line 770 "make_hlds_passes.m"
                  return;
                }
#line 769 "make_hlds_passes.m"
              }
#line 768 "make_hlds_passes.m"
              break;
#line 768 "make_hlds_passes.m"
          }
#line 762 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23;
#line 762 "make_hlds_passes.m"
        }
#line 774 "make_hlds_passes.m"
    else
#line 774 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23;
#line 751 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21;
#line 751 "make_hlds_passes.m"
  }
#line 747 "make_hlds_passes.m"
}

#line 726 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_instance_6_p_0(
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInstance_7,
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24,
#line 726 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25,
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26,
#line 726 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27)
#line 726 "make_hlds_passes.m"
{
#line 730 "make_hlds_passes.m"
  {
#line 730 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 0)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 1)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 2)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 3)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 4)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 5)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstanceModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 6)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 7)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__BodyStatus_22;
#line 731 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 8)));
#line 733 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 737 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Body_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "make_hlds_passes.m"
      {
#line 736 "make_hlds_passes.m"
        hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_20, &hlds__make_hlds__make_hlds_passes__BodyStatus_22);
      }
#line 737 "make_hlds_passes.m"
    else
#line 739 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__BodyStatus_22 = hlds__make_hlds__make_hlds_passes__ImportStatus_20;
#line 741 "make_hlds_passes.m"
    {
#line 741 "make_hlds_passes.m"
      hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(hlds__make_hlds__make_hlds_passes__InstanceModuleName_17, hlds__make_hlds__make_hlds_passes__Constraints_14, hlds__make_hlds__make_hlds_passes__Name_11, hlds__make_hlds__make_hlds_passes__Types_12, hlds__make_hlds__make_hlds_passes__OriginalTypes_13, hlds__make_hlds__make_hlds_passes__Body_15, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__BodyStatus_22, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27);
#line 741 "make_hlds_passes.m"
      return;
    }
#line 730 "make_hlds_passes.m"
  }
#line 726 "make_hlds_passes.m"
}

#line 694 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_pred_decl_6_p_0(
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes___Status_8,
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 694 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 694 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36,
#line 694 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37)
#line 694 "make_hlds_passes.m"
{
#line 698 "make_hlds_passes.m"
  {
#line 698 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 698 "make_hlds_passes.m"
    {
#line 698 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37);
#line 698 "make_hlds_passes.m"
      return;
    }
#line 698 "make_hlds_passes.m"
  }
#line 694 "make_hlds_passes.m"
}

#line 681 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(
#line 681 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 681 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_2,
#line 681 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 681 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 681 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 681 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 681 "make_hlds_passes.m"
{
#line 685 "make_hlds_passes.m"
  while (MR_TRUE)
#line 685 "make_hlds_passes.m"
    {
#line 685 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 685 "make_hlds_passes.m"
      {
#line 685 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 685 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "make_hlds_passes.m"
          {
#line 685 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 685 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 685 "make_hlds_passes.m"
          }
#line 685 "make_hlds_passes.m"
        else
#line 687 "make_hlds_passes.m"
          {
#line 687 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 687 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 687 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 687 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 688 "make_hlds_passes.m"
            {
#line 688 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_14, hlds__make_hlds__make_hlds_passes__Status_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
            }
#line 689 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 689 "make_hlds_passes.m"
            {
#line 689 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_15;
#line 689 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 689 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 689 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 689 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 689 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 689 "make_hlds_passes.m"
            }
#line 689 "make_hlds_passes.m"
            continue;
#line 687 "make_hlds_passes.m"
          }
#line 685 "make_hlds_passes.m"
      }
#line 685 "make_hlds_passes.m"
      break;
#line 685 "make_hlds_passes.m"
    }
#line 681 "make_hlds_passes.m"
}

#line 666 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_type_defn_6_p_0(
#line 666 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7,
#line 666 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 666 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 666 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 666 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22,
#line 666 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23)
#line 666 "make_hlds_passes.m"
{
#line 670 "make_hlds_passes.m"
  {
#line 670 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 670 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 2)));
#line 671 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 0)));
#line 671 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 1)));
#line 671 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 3)));
#line 671 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 4)));
#line 671 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 5)));
#line 677 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17;
#line 673 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18;

#line 673 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 673 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 673 "make_hlds_passes.m"
      {
#line 673 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 1)));
#line 673 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 2)));
#line 674 "make_hlds_passes.m"
        {
#line 674 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 4)));
#line 674 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 0)));
#line 674 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 1)));
#line 674 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 2)));
#line 674 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 3)));

#line 675 "make_hlds_passes.m"
          {
#line 675 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_19, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23);
#line 675 "make_hlds_passes.m"
            return;
          }
#line 674 "make_hlds_passes.m"
        }
#line 673 "make_hlds_passes.m"
      }
#line 673 "make_hlds_passes.m"
    else
#line 678 "make_hlds_passes.m"
      {
#line 678 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22;
#line 678 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20;
#line 678 "make_hlds_passes.m"
      }
#line 670 "make_hlds_passes.m"
  }
#line 666 "make_hlds_passes.m"
}

#line 624 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_6_p_0(
#line 624 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_7,
#line 624 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_8,
#line 624 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 624 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 624 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28,
#line 624 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29)
#line 624 "make_hlds_passes.m"
{
#line 630 "make_hlds_passes.m"
  {
#line 630 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 630 "make_hlds_passes.m"
#line 630 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_8)) {
#line 630 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 630 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 630 "make_hlds_passes.m"
        {
#line 630 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 630 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 630 "make_hlds_passes.m"
        }
#line 630 "make_hlds_passes.m"
        break;
#line 630 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 653 "make_hlds_passes.m"
        {
#line 653 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 653 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 653 "make_hlds_passes.m"
        }
#line 630 "make_hlds_passes.m"
        break;
#line 630 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 632 "make_hlds_passes.m"
        {
#line 632 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_8), (MR_Integer) 2);
#line 632 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12, (MR_Integer) 2)));
#line 671 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___SymName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12, (MR_Integer) 0)));
#line 671 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___TypeParams_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12, (MR_Integer) 1)));
#line 671 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12, (MR_Integer) 3)));
#line 671 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___Context_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12, (MR_Integer) 4)));
#line 671 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_12, (MR_Integer) 5)));
#line 677 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81;
#line 673 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_82;

#line 673 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_77, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 673 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 673 "make_hlds_passes.m"
            {
#line 673 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_77, (MR_Integer) 1)));
#line 673 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_77, (MR_Integer) 2)));
#line 674 "make_hlds_passes.m"
              {
#line 674 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81, (MR_Integer) 4)));
#line 674 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81, (MR_Integer) 0)));
#line 674 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81, (MR_Integer) 1)));
#line 674 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81, (MR_Integer) 2)));
#line 674 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_81, (MR_Integer) 3)));

#line 675 "make_hlds_passes.m"
                {
#line 675 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_83, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 675 "make_hlds_passes.m"
                  return;
                }
#line 674 "make_hlds_passes.m"
              }
#line 673 "make_hlds_passes.m"
            }
#line 673 "make_hlds_passes.m"
          else
#line 678 "make_hlds_passes.m"
            {
#line 678 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 678 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 678 "make_hlds_passes.m"
            }
#line 632 "make_hlds_passes.m"
        }
#line 630 "make_hlds_passes.m"
        break;
#line 630 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 630 "make_hlds_passes.m"
#line 630 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 0)))) {
#line 630 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 654 "make_hlds_passes.m"
            {
#line 654 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 654 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 654 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 655 "make_hlds_passes.m"
            {
#line 655 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 655 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 655 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 635 "make_hlds_passes.m"
            {
#line 635 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 636 "make_hlds_passes.m"
              {
#line 636 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_13, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 636 "make_hlds_passes.m"
                return;
              }
#line 635 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 656 "make_hlds_passes.m"
            {
#line 656 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 656 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 656 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 638 "make_hlds_passes.m"
            {
#line 638 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPragma_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 639 "make_hlds_passes.m"
              {
#line 639 "make_hlds_passes.m"
                hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPragma_14, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 639 "make_hlds_passes.m"
                return;
              }
#line 638 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 657 "make_hlds_passes.m"
            {
#line 657 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 657 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 657 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 658 "make_hlds_passes.m"
            {
#line 658 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 658 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 658 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 641 "make_hlds_passes.m"
            {
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInstance_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 0)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Types_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 1)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__OriginalTypes_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 2)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Constraints_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 3)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Body_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 4)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__VarSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 5)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__InstanceModuleName_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 6)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 7)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_7, (MR_Integer) 0)));
#line 641 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__BodyStatus_63;
#line 731 "make_hlds_passes.m"
              MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_15, (MR_Integer) 8)));
#line 733 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_7, (MR_Integer) 1)));

#line 737 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__Body_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "make_hlds_passes.m"
                {
#line 736 "make_hlds_passes.m"
                  hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_61, &hlds__make_hlds__make_hlds_passes__BodyStatus_63);
                }
#line 737 "make_hlds_passes.m"
              else
#line 739 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__BodyStatus_63 = hlds__make_hlds__make_hlds_passes__ImportStatus_61;
#line 741 "make_hlds_passes.m"
              {
#line 741 "make_hlds_passes.m"
                hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(hlds__make_hlds__make_hlds_passes__InstanceModuleName_58, hlds__make_hlds__make_hlds_passes__Constraints_55, hlds__make_hlds__make_hlds_passes__Name_52, hlds__make_hlds__make_hlds_passes__Types_53, hlds__make_hlds__make_hlds_passes__OriginalTypes_54, hlds__make_hlds__make_hlds_passes__Body_56, hlds__make_hlds__make_hlds_passes__VarSet_57, hlds__make_hlds__make_hlds_passes__BodyStatus_63, hlds__make_hlds__make_hlds_passes__Context_59, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 741 "make_hlds_passes.m"
                return;
              }
#line 641 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 644 "make_hlds_passes.m"
            {
#line 644 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 645 "make_hlds_passes.m"
              {
#line 645 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_initialise_6_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_16, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 645 "make_hlds_passes.m"
                return;
              }
#line 644 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 647 "make_hlds_passes.m"
            {
#line 647 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 648 "make_hlds_passes.m"
              {
#line 648 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_finalise_6_p_0(hlds__make_hlds__make_hlds_passes__ItemFinalise_17, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 648 "make_hlds_passes.m"
                return;
              }
#line 647 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 650 "make_hlds_passes.m"
            {
#line 650 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 651 "make_hlds_passes.m"
              {
#line 651 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_18, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
#line 651 "make_hlds_passes.m"
                return;
              }
#line 650 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
          case (MR_Integer) 11:
#line 659 "make_hlds_passes.m"
            {
#line 659 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 659 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28;
#line 659 "make_hlds_passes.m"
            }
#line 630 "make_hlds_passes.m"
            break;
#line 630 "make_hlds_passes.m"
        }
#line 630 "make_hlds_passes.m"
        break;
#line 630 "make_hlds_passes.m"
    }
#line 630 "make_hlds_passes.m"
  }
#line 624 "make_hlds_passes.m"
}

#line 605 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_mutable_6_p_0(
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_7,
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14,
#line 605 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15,
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16,
#line 605 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17)
#line 605 "make_hlds_passes.m"
{
#line 609 "make_hlds_passes.m"
  {
#line 609 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 609 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 609 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_13;
#line 612 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 613 "make_hlds_passes.m"
    {
#line 613 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_13 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_11);
    }
#line 617 "make_hlds_passes.m"
#line 617 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_13) {
#line 617 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 617 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 618 "make_hlds_passes.m"
        {
#line 618 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14;
#line 618 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16;
#line 618 "make_hlds_passes.m"
        }
#line 617 "make_hlds_passes.m"
        break;
#line 617 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 616 "make_hlds_passes.m"
        {
#line 616 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_7, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17);
#line 616 "make_hlds_passes.m"
          return;
        }
#line 617 "make_hlds_passes.m"
        break;
#line 617 "make_hlds_passes.m"
    }
#line 609 "make_hlds_passes.m"
  }
#line 605 "make_hlds_passes.m"
}

#line 584 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_mode_decl_6_p_0(
#line 584 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_7,
#line 584 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 584 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23,
#line 584 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24,
#line 584 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25,
#line 584 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26)
#line 584 "make_hlds_passes.m"
{
#line 588 "make_hlds_passes.m"
  {
#line 588 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 588 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 0)));
#line 588 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 1)));
#line 588 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 2)));
#line 588 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 4)));
#line 588 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 5)));
#line 588 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 6)));
#line 589 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 3)));
#line 589 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 7)));

#line 596 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "make_hlds_passes.m"
      {
#line 600 "make_hlds_passes.m"
        {
#line 600 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_mode_decl\'/6", (MR_String) "no pred_or_func on mode declaration");
#line 600 "make_hlds_passes.m"
          return;
        }
#line 597 "make_hlds_passes.m"
      }
#line 596 "make_hlds_passes.m"
    else
#line 592 "make_hlds_passes.m"
      {
#line 592 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12, (MR_Integer) 0)));
#line 592 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 593 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));
#line 594 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_22_22;

#line 594 "make_hlds_passes.m"
        {
#line 594 "make_hlds_passes.m"
          hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__PredName_11, hlds__make_hlds__make_hlds_passes__Modes_13, hlds__make_hlds__make_hlds_passes__MaybeDet_15, hlds__make_hlds__make_hlds_passes__ImportStatus_20, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__PredOrFunc_19, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__V_22_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26);
        }
#line 592 "make_hlds_passes.m"
      }
#line 588 "make_hlds_passes.m"
  }
#line 584 "make_hlds_passes.m"
}

#line 556 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2(
#line 556 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 556 "make_hlds_passes.m"
{
#line 556 "make_hlds_passes.m"
  {
#line 556 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 556 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 556 "make_hlds_passes.m"
    {
#line 556 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__556__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 556 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 556 "make_hlds_passes.m"
  }
#line 556 "make_hlds_passes.m"
}

#line 555 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1(
#line 555 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 555 "make_hlds_passes.m"
{
#line 555 "make_hlds_passes.m"
  {
#line 555 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 555 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 555 "make_hlds_passes.m"
    {
#line 555 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__555__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 555 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 555 "make_hlds_passes.m"
  }
#line 555 "make_hlds_passes.m"
}

#line 545 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0(
#line 545 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 545 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 545 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32,
#line 545 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33,
#line 545 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 545 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 545 "make_hlds_passes.m"
{
#line 549 "make_hlds_passes.m"
  {
#line 549 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDetism_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ClassContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Markers_29;
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrigin_30;
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_36_36;
#line 549 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_41_41;
#line 550 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));
#line 578 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_31_31;

#line 555 "make_hlds_passes.m"
    {
#line 555 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 555 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0]));
#line 555 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1));
#line 555 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 555 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_14));
#line 555 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "make_hlds_passes.m"
    }
#line 555 "make_hlds_passes.m"
    {
#line 555 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_36_36, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_pred_decl\'/6", (MR_String) "WithType != no");
    }
#line 556 "make_hlds_passes.m"
    {
#line 556 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 556 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[1]));
#line 556 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2));
#line 556 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_15));
#line 556 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "make_hlds_passes.m"
    }
#line 556 "make_hlds_passes.m"
    {
#line 556 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_41_41, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_pred_decl\'/6", (MR_String) "WithInst != no");
    }
#line 561 "make_hlds_passes.m"
    {
#line 561 "make_hlds_passes.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__make_hlds_passes__Markers0_25);
    }
#line 572 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Markers_29 = hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 572 "make_hlds_passes.m"
    else
#line 563 "make_hlds_passes.m"
      {
#line 563 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_26 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 563 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_26, (MR_Integer) 1)));
#line 564 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_26, (MR_Integer) 0)));

#line 568 "make_hlds_passes.m"
#line 568 "make_hlds_passes.m"
        switch (hlds__make_hlds__make_hlds_passes__IsMutable_28) {
#line 568 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 568 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 566 "make_hlds_passes.m"
            {
#line 567 "make_hlds_passes.m"
              {
#line 567 "make_hlds_passes.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, hlds__make_hlds__make_hlds_passes__Markers0_25, &hlds__make_hlds__make_hlds_passes__Markers_29);
              }
#line 566 "make_hlds_passes.m"
            }
#line 568 "make_hlds_passes.m"
            break;
#line 568 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 570 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Markers_29 = hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 568 "make_hlds_passes.m"
            break;
#line 568 "make_hlds_passes.m"
        }
#line 563 "make_hlds_passes.m"
      }
#line 577 "make_hlds_passes.m"
    {
#line 577 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredOrigin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 577 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredName_11));
#line 577 "make_hlds_passes.m"
    }
#line 578 "make_hlds_passes.m"
    {
#line 578 "make_hlds_passes.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__make_hlds_passes__PredOrigin_30, hlds__make_hlds__make_hlds_passes__TypeVarSet_18, hlds__make_hlds__make_hlds_passes__InstVarSet_19, hlds__make_hlds__make_hlds_passes__ExistQVars_20, hlds__make_hlds__make_hlds_passes__PredOrFunc_12, hlds__make_hlds__make_hlds_passes__PredName_11, hlds__make_hlds__make_hlds_passes__TypesAndModes_13, hlds__make_hlds__make_hlds_passes__MaybeDetism_16, hlds__make_hlds__make_hlds_passes__Purity_21, hlds__make_hlds__make_hlds_passes__ClassContext_22, hlds__make_hlds__make_hlds_passes__Markers_29, hlds__make_hlds__make_hlds_passes__Context_23, hlds__make_hlds__make_hlds_passes__Status_8, &hlds__make_hlds__make_hlds_passes__V_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
    }
#line 549 "make_hlds_passes.m"
  }
#line 545 "make_hlds_passes.m"
}

#line 532 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_6_p_0(
#line 532 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 532 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_2,
#line 532 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 532 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 532 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 532 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 532 "make_hlds_passes.m"
{
#line 536 "make_hlds_passes.m"
  while (MR_TRUE)
#line 536 "make_hlds_passes.m"
    {
#line 536 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 536 "make_hlds_passes.m"
      {
#line 536 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 536 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "make_hlds_passes.m"
          {
#line 536 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 536 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 536 "make_hlds_passes.m"
          }
#line 536 "make_hlds_passes.m"
        else
#line 538 "make_hlds_passes.m"
          {
#line 538 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 538 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 538 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;
#line 538 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_2, (MR_Integer) 0)));
#line 538 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_37;
#line 612 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_2, (MR_Integer) 1)));

#line 613 "make_hlds_passes.m"
            {
#line 613 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__DefinedThisModule_37 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_35);
            }
#line 617 "make_hlds_passes.m"
#line 617 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_37) {
#line 617 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 617 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 618 "make_hlds_passes.m"
                {
#line 618 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 618 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 618 "make_hlds_passes.m"
                }
#line 617 "make_hlds_passes.m"
                break;
#line 617 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 616 "make_hlds_passes.m"
                {
#line 616 "make_hlds_passes.m"
                  hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_14, hlds__make_hlds__make_hlds_passes__Status_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
                }
#line 617 "make_hlds_passes.m"
                break;
#line 617 "make_hlds_passes.m"
            }
#line 540 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 540 "make_hlds_passes.m"
            {
#line 540 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_15;
#line 540 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 540 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 540 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 540 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 540 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 540 "make_hlds_passes.m"
            }
#line 540 "make_hlds_passes.m"
            continue;
#line 538 "make_hlds_passes.m"
          }
#line 536 "make_hlds_passes.m"
      }
#line 536 "make_hlds_passes.m"
      break;
#line 536 "make_hlds_passes.m"
    }
#line 532 "make_hlds_passes.m"
}

#line 504 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_type_defn_6_p_0(
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7,
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 504 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22,
#line 504 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23)
#line 504 "make_hlds_passes.m"
{
#line 508 "make_hlds_passes.m"
  {
#line 508 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 0)));
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 1)));
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 2)));
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 3)));
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 4)));
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26;
#line 508 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 518 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 5)));
#line 526 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17;
#line 520 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18;

#line 520 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 520 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 520 "make_hlds_passes.m"
      {
#line 520 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 1)));
#line 520 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 2)));
#line 522 "make_hlds_passes.m"
        {
#line 522 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_19;
#line 522 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24;
#line 522 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25;
#line 523 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_30_30;
#line 523 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_31_31;
#line 523 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 523 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_33_33;

#line 521 "make_hlds_passes.m"
          {
#line 521 "make_hlds_passes.m"
            hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_10_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_14, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__TypeParams_12, hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, hlds__make_hlds__make_hlds_passes__Context_15, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25);
          }
#line 523 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 0)));
#line 523 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 1)));
#line 523 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 2)));
#line 523 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 3)));
#line 523 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__MutableItems_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 4)));
#line 524 "make_hlds_passes.m"
          {
#line 524 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_19, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
          }
#line 522 "make_hlds_passes.m"
        }
#line 520 "make_hlds_passes.m"
      }
#line 520 "make_hlds_passes.m"
    else
#line 527 "make_hlds_passes.m"
      {
#line 527 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22;
#line 527 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20;
#line 527 "make_hlds_passes.m"
      }
#line 529 "make_hlds_passes.m"
    {
#line 529 "make_hlds_passes.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_14, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__TypeParams_12, hlds__make_hlds__make_hlds_passes__TypeDefn_13, hlds__make_hlds__make_hlds_passes__Context_15, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23);
#line 529 "make_hlds_passes.m"
      return;
    }
#line 508 "make_hlds_passes.m"
  }
#line 504 "make_hlds_passes.m"
}

#line 479 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_imported_module_name_4_p_0(
#line 479 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 479 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__IStat_6,
#line 479 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_9,
#line 479 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_10)
#line 479 "make_hlds_passes.m"
{
#line 482 "make_hlds_passes.m"
  {
#line 482 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 482 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedInThisModule_8;

#line 483 "make_hlds_passes.m"
    {
#line 483 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedInThisModule_8 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__IStat_6);
    }
#line 487 "make_hlds_passes.m"
#line 487 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedInThisModule_8) {
#line 487 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 487 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 497 "make_hlds_passes.m"
        {
#line 490 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_11_11;

#line 491 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__IStat_6)) == (MR_mktag((MR_Integer) 2)));
#line 491 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 491 "make_hlds_passes.m"
            {
#line 491 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__IStat_6, (MR_Integer) 0)));
#line 491 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_11_11 == (MR_Integer) 3);
#line 491 "make_hlds_passes.m"
            }
#line 497 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 493 "make_hlds_passes.m"
            {
#line 493 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12_12;

#line 493 "make_hlds_passes.m"
              {
#line 493 "make_hlds_passes.m"
                hlds__hlds_module__module_add_imported_module_name_4_p_0(hlds__make_hlds__make_hlds_passes__IStat_6, hlds__make_hlds__make_hlds_passes__ModuleName_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_9, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12_12);
              }
#line 496 "make_hlds_passes.m"
              {
#line 496 "make_hlds_passes.m"
                hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_10);
#line 496 "make_hlds_passes.m"
                return;
              }
#line 493 "make_hlds_passes.m"
            }
#line 497 "make_hlds_passes.m"
          else
#line 498 "make_hlds_passes.m"
            {
#line 498 "make_hlds_passes.m"
              hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_10);
#line 498 "make_hlds_passes.m"
              return;
            }
#line 497 "make_hlds_passes.m"
        }
#line 487 "make_hlds_passes.m"
        break;
#line 487 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 486 "make_hlds_passes.m"
        {
#line 486 "make_hlds_passes.m"
          hlds__hlds_module__module_add_imported_module_name_4_p_0(hlds__make_hlds__make_hlds_passes__IStat_6, hlds__make_hlds__make_hlds_passes__ModuleName_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_10);
#line 486 "make_hlds_passes.m"
          return;
        }
#line 487 "make_hlds_passes.m"
        break;
#line 487 "make_hlds_passes.m"
    }
#line 482 "make_hlds_passes.m"
  }
#line 479 "make_hlds_passes.m"
}

#line 463 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_module_defn_6_p_0(
#line 463 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_7,
#line 463 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 463 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_18,
#line 463 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_19,
#line 463 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20,
#line 463 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21)
#line 463 "make_hlds_passes.m"
{
#line 467 "make_hlds_passes.m"
  {
#line 467 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 467 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_7, (MR_Integer) 0)));
#line 468 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_7, (MR_Integer) 1)));
#line 468 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_7, (MR_Integer) 2)));

#line 475 "make_hlds_passes.m"
#line 475 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ModuleDefn_11)) {
#line 475 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 476 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_19 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_18;
#line 475 "make_hlds_passes.m"
        break;
#line 475 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 472 "make_hlds_passes.m"
        {
#line 472 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__ModuleDefn_11, (MR_Integer) 0)));
#line 472 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 473 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 474 "make_hlds_passes.m"
          {
#line 474 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_imported_module_name_4_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_14, hlds__make_hlds__make_hlds_passes__ImportStatus_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_19);
          }
#line 472 "make_hlds_passes.m"
        }
#line 475 "make_hlds_passes.m"
        break;
#line 475 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 472 "make_hlds_passes.m"
        {
#line 472 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__ModuleDefn_11, (MR_Integer) 0)));
#line 472 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 473 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 474 "make_hlds_passes.m"
          {
#line 474 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_imported_module_name_4_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_24, hlds__make_hlds__make_hlds_passes__ImportStatus_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_19);
          }
#line 472 "make_hlds_passes.m"
        }
#line 475 "make_hlds_passes.m"
        break;
#line 475 "make_hlds_passes.m"
    }
#line 467 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20;
#line 467 "make_hlds_passes.m"
  }
#line 463 "make_hlds_passes.m"
}

#line 402 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_8_p_0(
#line 402 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_9,
#line 402 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_10,
#line 402 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30,
#line 402 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31,
#line 402 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32,
#line 402 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33,
#line 402 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 402 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 402 "make_hlds_passes.m"
{
#line 410 "make_hlds_passes.m"
  {
#line 410 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 410 "make_hlds_passes.m"
#line 410 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10)) {
#line 410 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 410 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 410 "make_hlds_passes.m"
        {
#line 410 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_14 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 0);

#line 411 "make_hlds_passes.m"
          {
#line 411 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_1_module_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemModuleDefn_14, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
          }
#line 410 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 410 "make_hlds_passes.m"
        }
#line 410 "make_hlds_passes.m"
        break;
#line 410 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 444 "make_hlds_passes.m"
        {
#line 444 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 444 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 444 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 444 "make_hlds_passes.m"
        }
#line 410 "make_hlds_passes.m"
        break;
#line 410 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 413 "make_hlds_passes.m"
        {
#line 413 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 2);

#line 414 "make_hlds_passes.m"
          {
#line 414 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_1_type_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_15, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
          }
#line 413 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 413 "make_hlds_passes.m"
        }
#line 410 "make_hlds_passes.m"
        break;
#line 410 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 410 "make_hlds_passes.m"
#line 410 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 0)))) {
#line 410 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 424 "make_hlds_passes.m"
            {
#line 424 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 424 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__FoundError_17;

#line 418 "make_hlds_passes.m"
              {
#line 418 "make_hlds_passes.m"
                hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_16, &hlds__make_hlds__make_hlds_passes__FoundError_17, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
              }
#line 428 "make_hlds_passes.m"
#line 428 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__FoundError_17) {
#line 428 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 428 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 429 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 428 "make_hlds_passes.m"
                  break;
#line 428 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 427 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = (MR_Integer) 1;
#line 428 "make_hlds_passes.m"
                  break;
#line 428 "make_hlds_passes.m"
              }
#line 424 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 424 "make_hlds_passes.m"
            {
#line 424 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 424 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__FoundError_53;

#line 422 "make_hlds_passes.m"
              {
#line 422 "make_hlds_passes.m"
                hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_18, &hlds__make_hlds__make_hlds_passes__FoundError_53, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
              }
#line 428 "make_hlds_passes.m"
#line 428 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__FoundError_53) {
#line 428 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 428 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 429 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 428 "make_hlds_passes.m"
                  break;
#line 428 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 427 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = (MR_Integer) 1;
#line 428 "make_hlds_passes.m"
                  break;
#line 428 "make_hlds_passes.m"
              }
#line 424 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 432 "make_hlds_passes.m"
            {
#line 432 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 433 "make_hlds_passes.m"
              {
#line 433 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_19, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
              }
#line 432 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 432 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 435 "make_hlds_passes.m"
            {
#line 435 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 436 "make_hlds_passes.m"
              {
#line 436 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_mode_decl_6_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDecl_20, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
              }
#line 435 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 435 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 445 "make_hlds_passes.m"
            {
#line 445 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 445 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 445 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 445 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 446 "make_hlds_passes.m"
            {
#line 446 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 446 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 446 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 446 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 438 "make_hlds_passes.m"
            {
#line 438 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeClass_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 439 "make_hlds_passes.m"
              {
#line 439 "make_hlds_passes.m"
                hlds__make_hlds__add_class__module_add_class_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeClass_21, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
              }
#line 438 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 438 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 447 "make_hlds_passes.m"
            {
#line 447 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 447 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 447 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 447 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 448 "make_hlds_passes.m"
            {
#line 448 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 448 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 448 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 448 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 449 "make_hlds_passes.m"
            {
#line 449 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 449 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 449 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 449 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 441 "make_hlds_passes.m"
            {
#line 441 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 441 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_9, (MR_Integer) 0)));
#line 441 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_64;
#line 612 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_9, (MR_Integer) 1)));

#line 613 "make_hlds_passes.m"
              {
#line 613 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__DefinedThisModule_64 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_62);
              }
#line 617 "make_hlds_passes.m"
#line 617 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_64) {
#line 617 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 617 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 618 "make_hlds_passes.m"
                  {
#line 618 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 618 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 618 "make_hlds_passes.m"
                  }
#line 617 "make_hlds_passes.m"
                  break;
#line 617 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 616 "make_hlds_passes.m"
                  {
#line 616 "make_hlds_passes.m"
                    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_22, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
                  }
#line 617 "make_hlds_passes.m"
                  break;
#line 617 "make_hlds_passes.m"
              }
#line 441 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 441 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
          case (MR_Integer) 11:
#line 450 "make_hlds_passes.m"
            {
#line 450 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_30;
#line 450 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 450 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 450 "make_hlds_passes.m"
            }
#line 410 "make_hlds_passes.m"
            break;
#line 410 "make_hlds_passes.m"
        }
#line 410 "make_hlds_passes.m"
        break;
#line 410 "make_hlds_passes.m"
    }
#line 410 "make_hlds_passes.m"
  }
#line 402 "make_hlds_passes.m"
}

#line 388 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(
#line 388 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_1,
#line 388 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 388 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 388 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 388 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 388 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 388 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 388 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 388 "make_hlds_passes.m"
{
#line 392 "make_hlds_passes.m"
  while (MR_TRUE)
#line 392 "make_hlds_passes.m"
    {
#line 392 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 392 "make_hlds_passes.m"
      {
#line 392 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 392 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "make_hlds_passes.m"
          {
#line 392 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 392 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 392 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 392 "make_hlds_passes.m"
          }
#line 392 "make_hlds_passes.m"
        else
#line 393 "make_hlds_passes.m"
          {
#line 393 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 393 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 393 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 394 "make_hlds_passes.m"
            {
#line 394 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__Status_1, hlds__make_hlds__make_hlds_passes__Item_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
            }
#line 395 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 395 "make_hlds_passes.m"
            {
#line 395 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__Items_21;
#line 395 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 395 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 395 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 395 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 395 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 395 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 395 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 395 "make_hlds_passes.m"
            }
#line 395 "make_hlds_passes.m"
            continue;
#line 393 "make_hlds_passes.m"
          }
#line 392 "make_hlds_passes.m"
      }
#line 392 "make_hlds_passes.m"
      break;
#line 392 "make_hlds_passes.m"
    }
#line 388 "make_hlds_passes.m"
}

#line 371 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3_8_p_0(
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_for_MS_46,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 371 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 371 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 371 "make_hlds_passes.m"
{
#line 376 "make_hlds_passes.m"
  while (MR_TRUE)
#line 376 "make_hlds_passes.m"
    {
#line 376 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 376 "make_hlds_passes.m"
      {
#line 376 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 376 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "make_hlds_passes.m"
          {
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 376 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 376 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
        else
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__Section_25 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_29;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__NeedQualifier_30;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_31;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_32;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 378 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;
#line 379 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            void MR_CALL (* hlds__make_hlds__make_hlds_passes__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_Status_28;

#line 380 "make_hlds_passes.m"
            {
#line 380 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__func_0(((MR_Box) hlds__make_hlds__make_hlds_passes__HeadVar__2_2), hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__conv1_Status_28);
            }
#line 380 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Status_28 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_Status_28);
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 0)));
#line 381 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__NeedQualifier_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_28, (MR_Integer) 1)));
#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__MQInfo0_31);
            }
#line 383 "make_hlds_passes.m"
            {
#line 383 "make_hlds_passes.m"
              parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0(hlds__make_hlds__make_hlds_passes__NeedQualifier_30, hlds__make_hlds__make_hlds_passes__MQInfo0_31, &hlds__make_hlds__make_hlds_passes__MQInfo_32);
            }
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39);
            }
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_29, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_39_39, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42);
            }
#line 386 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 386 "make_hlds_passes.m"
            {
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_41_41;
#line 386 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42_42;

#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 386 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 386 "make_hlds_passes.m"
            }
#line 386 "make_hlds_passes.m"
            continue;
#line 378 "make_hlds_passes.m"
          }
#line 376 "make_hlds_passes.m"
      }
#line 376 "make_hlds_passes.m"
      break;
#line 376 "make_hlds_passes.m"
    }
#line 371 "make_hlds_passes.m"
}

#line 360 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(
#line 360 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_1,
#line 360 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 360 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 360 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 360 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 360 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 360 "make_hlds_passes.m"
{
#line 364 "make_hlds_passes.m"
  while (MR_TRUE)
#line 364 "make_hlds_passes.m"
    {
#line 364 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 364 "make_hlds_passes.m"
      {
#line 364 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 364 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "make_hlds_passes.m"
          {
#line 364 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 364 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 364 "make_hlds_passes.m"
          }
#line 364 "make_hlds_passes.m"
        else
#line 365 "make_hlds_passes.m"
          {
#line 365 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 365 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 366 "make_hlds_passes.m"
            {
#line 366 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_1, hlds__make_hlds__make_hlds_passes__Item_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
            }
#line 367 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 367 "make_hlds_passes.m"
            {
#line 367 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__Items_16;
#line 367 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 367 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 367 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 367 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 367 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 367 "make_hlds_passes.m"
            }
#line 367 "make_hlds_passes.m"
            continue;
#line 365 "make_hlds_passes.m"
          }
#line 364 "make_hlds_passes.m"
      }
#line 364 "make_hlds_passes.m"
      break;
#line 364 "make_hlds_passes.m"
    }
#line 360 "make_hlds_passes.m"
}

#line 347 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2_6_p_0(
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_for_MS_31,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 347 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 347 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 347 "make_hlds_passes.m"
{
#line 352 "make_hlds_passes.m"
  while (MR_TRUE)
#line 352 "make_hlds_passes.m"
    {
#line 352 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 352 "make_hlds_passes.m"
      {
#line 352 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 352 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "make_hlds_passes.m"
          {
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 352 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 352 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
        else
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__Section_19 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_22;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 354 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
#line 355 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            void MR_CALL (* hlds__make_hlds__make_hlds_passes__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_Status_22;

#line 356 "make_hlds_passes.m"
            {
#line 356 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__func_0(((MR_Box) hlds__make_hlds__make_hlds_passes__HeadVar__2_2), hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__conv1_Status_22);
            }
#line 356 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Status_22 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_Status_22);
#line 357 "make_hlds_passes.m"
            {
#line 357 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_22, hlds__make_hlds__make_hlds_passes__Items_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
            }
#line 358 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27_27;
#line 358 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;

#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 358 "make_hlds_passes.m"
            }
#line 358 "make_hlds_passes.m"
            continue;
#line 354 "make_hlds_passes.m"
          }
#line 352 "make_hlds_passes.m"
      }
#line 352 "make_hlds_passes.m"
      break;
#line 352 "make_hlds_passes.m"
    }
#line 347 "make_hlds_passes.m"
}

#line 331 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(
#line 331 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_1,
#line 331 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 331 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 331 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 331 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 331 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 331 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 331 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 331 "make_hlds_passes.m"
{
#line 336 "make_hlds_passes.m"
  while (MR_TRUE)
#line 336 "make_hlds_passes.m"
    {
#line 336 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 336 "make_hlds_passes.m"
      {
#line 336 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 336 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "make_hlds_passes.m"
          {
#line 337 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 337 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 337 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 336 "make_hlds_passes.m"
          }
#line 336 "make_hlds_passes.m"
        else
#line 339 "make_hlds_passes.m"
          {
#line 339 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31_31;
#line 339 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32_32;
#line 339 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 340 "make_hlds_passes.m"
            {
#line 340 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_1, hlds__make_hlds__make_hlds_passes__Item_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
            }
#line 342 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 342 "make_hlds_passes.m"
            {
#line 342 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__Items_21;
#line 342 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31_31;
#line 342 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32_32;
#line 342 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 342 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 342 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 342 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 342 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 342 "make_hlds_passes.m"
            }
#line 342 "make_hlds_passes.m"
            continue;
#line 339 "make_hlds_passes.m"
          }
#line 336 "make_hlds_passes.m"
      }
#line 336 "make_hlds_passes.m"
      break;
#line 336 "make_hlds_passes.m"
    }
#line 331 "make_hlds_passes.m"
}

#line 314 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_for_MS_41,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 314 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 314 "make_hlds_passes.m"
{
#line 320 "make_hlds_passes.m"
  while (MR_TRUE)
#line 320 "make_hlds_passes.m"
    {
#line 320 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 320 "make_hlds_passes.m"
      {
#line 320 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 320 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "make_hlds_passes.m"
          {
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 321 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 320 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
        else
#line 323 "make_hlds_passes.m"
          {
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__Section_25 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_28;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 325 "make_hlds_passes.m"
            void MR_CALL (* hlds__make_hlds__make_hlds_passes__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_Status_28;

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__func_0(((MR_Box) hlds__make_hlds__make_hlds_passes__HeadVar__2_2), hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__conv1_Status_28);
            }
#line 325 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Status_28 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_Status_28);
#line 326 "make_hlds_passes.m"
            {
#line 326 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_28, hlds__make_hlds__make_hlds_passes__Items_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37);
            }
#line 328 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_35_35;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36_36;
#line 328 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37_37;

#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 328 "make_hlds_passes.m"
            }
#line 328 "make_hlds_passes.m"
            continue;
#line 323 "make_hlds_passes.m"
          }
#line 320 "make_hlds_passes.m"
      }
#line 320 "make_hlds_passes.m"
      break;
#line 320 "make_hlds_passes.m"
    }
#line 314 "make_hlds_passes.m"
}

#line 288 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_p_0(
#line 288 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeCtor_4,
#line 288 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11,
#line 288 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12)
#line 288 "make_hlds_passes.m"
{
#line 291 "make_hlds_passes.m"
  {
#line 291 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 291 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TVarSet_6;
#line 291 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_8;
#line 291 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Type_10;

#line 292 "make_hlds_passes.m"
    {
#line 292 "make_hlds_passes.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__make_hlds_passes__TVarSet_6);
    }
#line 294 "make_hlds_passes.m"
    {
#line 294 "make_hlds_passes.m"
      mercury__term__context_init_1_p_0(&hlds__make_hlds__make_hlds_passes__Context_8);
    }
#line 296 "make_hlds_passes.m"
    {
#line 296 "make_hlds_passes.m"
      parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__Type_10);
    }
#line 308 "make_hlds_passes.m"
    {
#line 308 "make_hlds_passes.m"
      hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__make_hlds_passes__TVarSet_6, hlds__make_hlds__make_hlds_passes__Type_10, hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[44]), hlds__make_hlds__make_hlds_passes__Context_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12);
#line 308 "make_hlds_passes.m"
      return;
    }
#line 291 "make_hlds_passes.m"
  }
#line 288 "make_hlds_passes.m"
}

#line 256 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 256 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 256 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
#line 256 "make_hlds_passes.m"
{
#line 256 "make_hlds_passes.m"
  {
#line 256 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 256 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_QualInfo_9;

#line 256 "make_hlds_passes.m"
    {
#line 256 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_QualInfo_9);
    }
#line 256 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_QualInfo_9));
#line 256 "make_hlds_passes.m"
  }
#line 256 "make_hlds_passes.m"
}

#line 229 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
#line 229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 229 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 229 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 229 "make_hlds_passes.m"
{
#line 229 "make_hlds_passes.m"
  {
#line 229 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 229 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_ModuleInfo_12;

#line 229 "make_hlds_passes.m"
    {
#line 229 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_ModuleInfo_12);
    }
#line 229 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_ModuleInfo_12));
#line 229 "make_hlds_passes.m"
  }
#line 229 "make_hlds_passes.m"
}

#line 214 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 214 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 214 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 214 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 214 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8)
#line 214 "make_hlds_passes.m"
{
#line 214 "make_hlds_passes.m"
  {
#line 214 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 214 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv4_HeadVar__4_4;
#line 214 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv3_HeadVar__6_6;
#line 214 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv2_HeadVar__8_8;

#line 214 "make_hlds_passes.m"
    {
#line 214 "make_hlds_passes.m"
      hlds__make_hlds__add_type__process_type_defn_8_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv4_HeadVar__4_4, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_5), &hlds__make_hlds__make_hlds_passes__conv3_HeadVar__6_6, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_7), &hlds__make_hlds__make_hlds_passes__conv2_HeadVar__8_8);
    }
#line 214 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv4_HeadVar__4_4));
#line 214 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv3_HeadVar__6_6));
#line 214 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv2_HeadVar__8_8));
#line 214 "make_hlds_passes.m"
  }
#line 214 "make_hlds_passes.m"
}

#line 206 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 206 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 206 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
#line 206 "make_hlds_passes.m"
{
#line 206 "make_hlds_passes.m"
  {
#line 206 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 206 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_HeadVar__5_5;

#line 206 "make_hlds_passes.m"
    {
#line 206 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv0_HeadVar__5_5);
    }
#line 206 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_HeadVar__5_5));
#line 206 "make_hlds_passes.m"
  }
#line 206 "make_hlds_passes.m"
}

#line 86 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(
#line 86 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__AugCompUnit_12,
#line 86 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Globals_13,
#line 86 "make_hlds_passes.m"
  MR_String hlds__make_hlds__make_hlds_passes__DumpBaseFileName_14,
#line 86 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_15,
#line 86 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeEqvMapMap_16,
#line 86 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__UsedModules_17,
#line 86 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__QualInfo_18,
#line 86 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__FoundInvalidType_19,
#line 86 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode_20,
#line 86 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
#line 86 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_45)
#line 86 "make_hlds_passes.m"
{
#line 134 "make_hlds_passes.m"
  {
#line 134 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PQInfo_23;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_24;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_26;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SrcItemBlocks_27;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DirectIntItemBlocks_28;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__IndirectIntItemBlocks_29;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__OptItemBlocks_30;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__IntForOptItemBlocks_31;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Pass1Specs_32;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Pass2Specs_33;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode1_34;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Statistics_35;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__FoundInvalidType1_38;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_41;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInvalidType_42;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInvalidInstOrMode_43;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_47_47;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_48_48;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_52_52;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_53_53;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_54_54;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_56_56;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_57_57;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_58_58;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_60_60;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_61_61;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_62_62;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_64_64;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_65_65;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_66_66;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_69_69;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_78_78;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_79_79;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_81_81;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_82_82;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_84_84;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_85_85;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_88_88;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_101_101;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_105_105;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_110_110;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_112_112;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_113_113;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_114_114;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_116_116;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_117_117;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_121_121;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_122_122;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_124_124;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_125_125;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_126_126;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_129_129;
#line 139 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ModuleNameContext_25;
#line 226 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_207_207;
#line 256 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv11_QualInfo_18;

#line 135 "make_hlds_passes.m"
    {
#line 135 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_15, &hlds__make_hlds__make_hlds_passes__PQInfo_23);
    }
#line 136 "make_hlds_passes.m"
    {
#line 136 "make_hlds_passes.m"
      hlds__hlds_module__module_info_init_6_p_0(hlds__make_hlds__make_hlds_passes__AugCompUnit_12, hlds__make_hlds__make_hlds_passes__DumpBaseFileName_14, hlds__make_hlds__make_hlds_passes__Globals_13, hlds__make_hlds__make_hlds_passes__PQInfo_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_47_47);
    }
#line 138 "make_hlds_passes.m"
    {
#line 138 "make_hlds_passes.m"
      hlds__hlds_module__module_info_set_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__UsedModules_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_47_47, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_48_48);
    }
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 0)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___ModuleNameContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 1)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 2)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__SrcItemBlocks_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 3)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__DirectIntItemBlocks_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 4)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__IndirectIntItemBlocks_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 5)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__OptItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 6)));
#line 139 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__IntForOptItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 7)));
#line 147 "make_hlds_passes.m"
    {
#line 147 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho12_8_p_0(hlds__make_hlds__make_hlds_passes__SrcItemBlocks_27, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_52_52, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_54_54);
    }
#line 150 "make_hlds_passes.m"
    {
#line 150 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0(hlds__make_hlds__make_hlds_passes__DirectIntItemBlocks_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_52_52, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_56_56, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_53_53, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_54_54, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_58_58);
    }
#line 153 "make_hlds_passes.m"
    {
#line 153 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0(hlds__make_hlds__make_hlds_passes__IndirectIntItemBlocks_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_56_56, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_60_60, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_57_57, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_61_61, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_58_58, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_62_62);
    }
#line 156 "make_hlds_passes.m"
    {
#line 156 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho10_8_p_0(hlds__make_hlds__make_hlds_passes__IntForOptItemBlocks_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_60_60, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_64_64, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_61_61, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_65_65, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_62_62, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_66_66);
    }
#line 160 "make_hlds_passes.m"
    {
#line 160 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho9_8_p_0(hlds__make_hlds__make_hlds_passes__OptItemBlocks_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_64_64, &hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode1_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_65_65, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_69_69, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass1Specs_66_66, &hlds__make_hlds__make_hlds_passes__Pass1Specs_32);
    }
#line 167 "make_hlds_passes.m"
    {
#line 167 "make_hlds_passes.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__Globals_13, (MR_Integer) 55, &hlds__make_hlds__make_hlds_passes__Statistics_35);
    }
#line 169 "make_hlds_passes.m"
    {
#line 169 "make_hlds_passes.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__make_hlds__make_hlds_passes__Statistics_35, (MR_String) "% Processed all items in pass 1\n");
    }
#line 171 "make_hlds_passes.m"
    {
#line 171 "make_hlds_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(hlds__make_hlds__make_hlds_passes__Statistics_35);
    }
#line 176 "make_hlds_passes.m"
    {
#line 176 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho8_6_p_0(hlds__make_hlds__make_hlds_passes__SrcItemBlocks_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_69_69, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_78_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_79_79);
    }
#line 178 "make_hlds_passes.m"
    {
#line 178 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho7_6_p_0(hlds__make_hlds__make_hlds_passes__DirectIntItemBlocks_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_78_78, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_81_81, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_79_79, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_82_82);
    }
#line 180 "make_hlds_passes.m"
    {
#line 180 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho7_6_p_0(hlds__make_hlds__make_hlds_passes__IndirectIntItemBlocks_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_81_81, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_84_84, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_82_82, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_85_85);
    }
#line 182 "make_hlds_passes.m"
    {
#line 182 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho6_6_p_0(hlds__make_hlds__make_hlds_passes__IntForOptItemBlocks_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_84_84, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_85_85, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_88_88);
    }
#line 184 "make_hlds_passes.m"
    {
#line 184 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho5_6_p_0(hlds__make_hlds__make_hlds_passes__OptItemBlocks_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Pass2Specs_88_88, &hlds__make_hlds__make_hlds_passes__Pass2Specs_33);
    }
#line 189 "make_hlds_passes.m"
    {
#line 189 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__make_hlds_passes__Pass1Specs_32, hlds__make_hlds__make_hlds_passes__Pass2Specs_33);
    }
#line 218 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Pass2Specs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 201 "make_hlds_passes.m"
      {
#line 201 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_93_93;
#line 201 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_94_94;
#line 201 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_96_96;
#line 201 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_97_97;
#line 206 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_TypeTable_96_96;
#line 214 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv7_FoundInvalidType1_38;
#line 214 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_100_100;
#line 214 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_Specs_101_101;

#line 205 "make_hlds_passes.m"
        {
#line 205 "make_hlds_passes.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_93_93);
        }
#line 206 "make_hlds_passes.m"
        {
#line 206 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 206 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_94_94, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0]));
#line 206 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1));
#line 206 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 206 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_94_94, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90));
#line 206 "make_hlds_passes.m"
        }
#line 206 "make_hlds_passes.m"
        {
#line 206 "make_hlds_passes.m"
          hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[1], hlds__make_hlds__make_hlds_passes__V_94_94, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_93_93, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_93_93)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_TypeTable_96_96);
        }
#line 206 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_96_96 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_TypeTable_96_96);
#line 208 "make_hlds_passes.m"
        {
#line 208 "make_hlds_passes.m"
          hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_96_96, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_97_97);
        }
#line 214 "make_hlds_passes.m"
        {
#line 214 "make_hlds_passes.m"
          hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[0], (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[2], hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_96_96, ((MR_Box) ((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__conv7_FoundInvalidType1_38, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_97_97)), &hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_100_100, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92)), &hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_Specs_101_101);
        }
#line 214 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__FoundInvalidType1_38 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv7_FoundInvalidType1_38);
#line 214 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_100_100);
#line 214 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_101_101 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_Specs_101_101);
#line 201 "make_hlds_passes.m"
      }
#line 218 "make_hlds_passes.m"
    else
#line 219 "make_hlds_passes.m"
      {
#line 220 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__FoundInvalidType1_38 = (MR_Integer) 1;
#line 219 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90;
#line 219 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_101_101 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92;
#line 219 "make_hlds_passes.m"
      }
#line 226 "make_hlds_passes.m"
    {
#line 226 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_207_207 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 226 "make_hlds_passes.m"
    {
#line 226 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__make_hlds_passes__ModuleName_24, hlds__make_hlds__make_hlds_passes__V_207_207);
    }
#line 226 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 227 "make_hlds_passes.m"
      {
#line 227 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100);
      }
#line 231 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 229 "make_hlds_passes.m"
      {
#line 229 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_103_103;
#line 229 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_ModuleInfo_104_104;

#line 230 "make_hlds_passes.m"
        {
#line 230 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_103_103 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 229 "make_hlds_passes.m"
        {
#line 229 "make_hlds_passes.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3], hlds__make_hlds__make_hlds_passes__V_103_103, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100)), &hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_ModuleInfo_104_104);
        }
#line 229 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_ModuleInfo_104_104);
#line 229 "make_hlds_passes.m"
      }
#line 231 "make_hlds_passes.m"
    else
#line 231 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100;
#line 236 "make_hlds_passes.m"
    {
#line 236 "make_hlds_passes.m"
      hlds__hlds_module__module_info_optimize_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_105_105);
    }
#line 239 "make_hlds_passes.m"
    {
#line 239 "make_hlds_passes.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__make_hlds__make_hlds_passes__Statistics_35, (MR_String) "% Processed all items in pass 2\n");
    }
#line 241 "make_hlds_passes.m"
    {
#line 241 "make_hlds_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(hlds__make_hlds__make_hlds_passes__Statistics_35);
    }
#line 245 "make_hlds_passes.m"
    {
#line 245 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__init_qual_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_15, hlds__make_hlds__make_hlds_passes__TypeEqvMapMap_16, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_110_110);
    }
#line 246 "make_hlds_passes.m"
    {
#line 246 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho4_8_p_0(hlds__make_hlds__make_hlds_passes__SrcItemBlocks_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_110_110, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_101_101, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_114_114);
    }
#line 248 "make_hlds_passes.m"
    {
#line 248 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho3_8_p_0(hlds__make_hlds__make_hlds_passes__DirectIntItemBlocks_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_112_112, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_116_116, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_113_113, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_117_117, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_114_114, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118);
    }
#line 250 "make_hlds_passes.m"
    {
#line 250 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho3_8_p_0(hlds__make_hlds__make_hlds_passes__IndirectIntItemBlocks_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_116_116, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_117_117, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_121_121, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_122_122);
    }
#line 252 "make_hlds_passes.m"
    {
#line 252 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho2_8_p_0(hlds__make_hlds__make_hlds_passes__IntForOptItemBlocks_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_124_124, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_121_121, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_125_125, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_122_122, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_126_126);
    }
#line 254 "make_hlds_passes.m"
    {
#line 254 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho1_8_p_0(hlds__make_hlds__make_hlds_passes__OptItemBlocks_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_124_124, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_125_125, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_129_129, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_126_126, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_45);
    }
#line 256 "make_hlds_passes.m"
    {
#line 256 "make_hlds_passes.m"
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[4], hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_26, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_129_129)), &hlds__make_hlds__make_hlds_passes__conv11_QualInfo_18);
    }
#line 256 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__QualInfo_18 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv11_QualInfo_18);
#line 262 "make_hlds_passes.m"
    {
#line 262 "make_hlds_passes.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__make_hlds__make_hlds_passes__Statistics_35, (MR_String) "% Processed all items in pass 3\n");
    }
#line 266 "make_hlds_passes.m"
    {
#line 266 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*hlds__make_hlds__make_hlds_passes__QualInfo_18, &hlds__make_hlds__make_hlds_passes__MQInfo_41);
    }
#line 267 "make_hlds_passes.m"
    {
#line 267 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_type_error_flag_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_41, &hlds__make_hlds__make_hlds_passes__MQInvalidType_42);
    }
#line 268 "make_hlds_passes.m"
    {
#line 268 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_mode_error_flag_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_41, &hlds__make_hlds__make_hlds_passes__MQInvalidInstOrMode_43);
    }
#line 270 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__FoundInvalidType1_38 == (MR_Integer) 0);
#line 270 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 271 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQInvalidType_42 == (MR_Integer) 0);
#line 274 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 273 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidType_19 = (MR_Integer) 0;
#line 274 "make_hlds_passes.m"
    else
#line 275 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidType_19 = (MR_Integer) 1;
#line 278 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode1_34 == (MR_Integer) 0);
#line 278 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 279 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQInvalidInstOrMode_43 == (MR_Integer) 0);
#line 282 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 281 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode_20 = (MR_Integer) 0;
#line 282 "make_hlds_passes.m"
    else
#line 283 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode_20 = (MR_Integer) 1;
#line 134 "make_hlds_passes.m"
  }
#line 86 "make_hlds_passes.m"
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
