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
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_rename.mih"
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



#line 1156 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s {
#line 1160 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded;
#line 1194 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214;
#line 1194 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23;
#line 1194 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24;
#line 1194 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26;
#line 1204 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215;
#line 1204 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216;
#line 1207 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32;
#line 1231 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1;
#line 1231 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170;
#line 1231 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171;
#line 1231 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172;
#line 1231 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173;
#line 1231 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174;
#line 1231 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175;
#line 1232 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170;
#line 1156 "make_hlds_passes.m"
};

#line 1037 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s {
#line 1041 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded;
#line 1069 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194;
#line 1069 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21;
#line 1069 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22;
#line 1069 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24;
#line 1080 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195;
#line 1080 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196;
#line 1083 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30;
#line 1107 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1;
#line 1107 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150;
#line 1107 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151;
#line 1107 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152;
#line 1107 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153;
#line 1107 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154;
#line 1107 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155;
#line 1108 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150;
#line 1037 "make_hlds_passes.m"
};


#line 282 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 285 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 288 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 291 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 294 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho12_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

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

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

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

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho10_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

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

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho9_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

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

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho8_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho7_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho6_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho5_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6);

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho4_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho3_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho2_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho1_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8);

#line 537 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__537__1_2_p_0(
#line 537 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15,
#line 537 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_45);

#line 536 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__536__1_2_p_0(
#line 536 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_14,
#line 536 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_40);

#line 1305 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0_1(
#line 1305 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 1305 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1305 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

#line 1204 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(
#line 1204 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1207 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3(
#line 1207 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1204 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(
#line 1204 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1204 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(
#line 1204 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1231 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(
#line 1231 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1232 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7(
#line 1232 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1231 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(
#line 1231 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1231 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(
#line 1231 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1080 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(
#line 1080 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1083 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3(
#line 1083 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1080 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(
#line 1080 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1080 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(
#line 1080 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1107 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(
#line 1107 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1108 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7(
#line 1108 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1107 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(
#line 1107 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1107 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(
#line 1107 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 537 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2(
#line 537 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 536 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1(
#line 536 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[3][7];

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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[3][7] = {
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
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_import_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1155 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1164 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1173 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1181 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1189 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1019 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_9,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 1019 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22,
#line 1019 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 1019 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 1019 "make_hlds_passes.m"
{
#line 1025 "make_hlds_passes.m"
  {
#line 1025 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1025 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 0)));
#line 1025 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 1)));
#line 1025 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 2)));
#line 1025 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 3)));
#line 1026 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 4)));

#line 1032 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Origin_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "make_hlds_passes.m"
      {
#line 1030 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__Arity_15, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
      }
#line 1032 "make_hlds_passes.m"
    else
#line 1033 "make_hlds_passes.m"
      {
#line 1034 "make_hlds_passes.m"
        {
#line 1034 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_initialise\'/8", (MR_String) "bad introduced initialise declaration");
#line 1034 "make_hlds_passes.m"
          return;
        }
#line 1033 "make_hlds_passes.m"
      }
#line 1025 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22;
#line 1025 "make_hlds_passes.m"
  }
#line 1019 "make_hlds_passes.m"
}

#line 673 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 673 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36,
#line 673 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37)
#line 673 "make_hlds_passes.m"
{
#line 677 "make_hlds_passes.m"
  {
#line 677 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 677 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 677 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 677 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeDet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ClassContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 678 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 678 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));

#line 684 "make_hlds_passes.m"
#line 684 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_12) {
#line 684 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 684 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 685 "make_hlds_passes.m"
        {
#line 685 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__Arity_25;
#line 685 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_26;
#line 685 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__PredTable0_27;
#line 685 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__PredIds_28;

#line 686 "make_hlds_passes.m"
          {
#line 686 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_13, &hlds__make_hlds__make_hlds_passes__Arity_25);
          }
#line 687 "make_hlds_passes.m"
          {
#line 687 "make_hlds_passes.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_26, hlds__make_hlds__make_hlds_passes__Arity_25);
          }
#line 688 "make_hlds_passes.m"
          {
#line 688 "make_hlds_passes.m"
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__make_hlds_passes__PredTable0_27);
          }
#line 689 "make_hlds_passes.m"
          {
#line 689 "make_hlds_passes.m"
            hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_27, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__FuncArity_26, &hlds__make_hlds__make_hlds_passes__PredIds_28);
          }
#line 697 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__PredIds_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "make_hlds_passes.m"
            {
#line 699 "make_hlds_passes.m"
              {
#line 699 "make_hlds_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_pred_decl\'/6", (MR_String) "can\'t find func declaration");
#line 699 "make_hlds_passes.m"
                return;
              }
#line 698 "make_hlds_passes.m"
            }
#line 697 "make_hlds_passes.m"
          else
#line 692 "make_hlds_passes.m"
            {
#line 692 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Preds0_31;
#line 692 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Preds_32;
#line 692 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__PredTable_33;

#line 693 "make_hlds_passes.m"
              {
#line 693 "make_hlds_passes.m"
                hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_27, &hlds__make_hlds__make_hlds_passes__Preds0_31);
              }
#line 694 "make_hlds_passes.m"
              {
#line 694 "make_hlds_passes.m"
                check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(hlds__make_hlds__make_hlds_passes__PredIds_28, hlds__make_hlds__make_hlds_passes__Preds0_31, &hlds__make_hlds__make_hlds_passes__Preds_32);
              }
#line 695 "make_hlds_passes.m"
              {
#line 695 "make_hlds_passes.m"
                hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_32, hlds__make_hlds__make_hlds_passes__PredTable0_27, &hlds__make_hlds__make_hlds_passes__PredTable_33);
              }
#line 696 "make_hlds_passes.m"
              {
#line 696 "make_hlds_passes.m"
                hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__make_hlds_passes__PredTable_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35);
              }
#line 692 "make_hlds_passes.m"
            }
#line 685 "make_hlds_passes.m"
        }
#line 684 "make_hlds_passes.m"
        break;
#line 684 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 683 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 684 "make_hlds_passes.m"
        break;
#line 684 "make_hlds_passes.m"
    }
#line 677 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36;
#line 677 "make_hlds_passes.m"
  }
#line 673 "make_hlds_passes.m"
}

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho12_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 327 "make_hlds_passes.m"
{
#line 327 "make_hlds_passes.m"
  {
#line 327 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 327 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11;

#line 327 "make_hlds_passes.m"
    {
#line 327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_pass_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11);
    }
#line 327 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11));
#line 327 "make_hlds_passes.m"
  }
#line 327 "make_hlds_passes.m"
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
            MR_Word hlds__make_hlds__make_hlds_passes__Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 326 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 327 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40;

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho12_8_p_0_1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ImportStatus_31));
#line 327 "make_hlds_passes.m"
            }
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__Avails_28, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
            }
#line 327 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_30, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43);
            }
#line 330 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 330 "make_hlds_passes.m"
            {
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;

#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 330 "make_hlds_passes.m"
            }
#line 330 "make_hlds_passes.m"
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

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 327 "make_hlds_passes.m"
{
#line 327 "make_hlds_passes.m"
  {
#line 327 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 327 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11;

#line 327 "make_hlds_passes.m"
    {
#line 327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_pass_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11);
    }
#line 327 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11));
#line 327 "make_hlds_passes.m"
  }
#line 327 "make_hlds_passes.m"
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
            MR_Word hlds__make_hlds__make_hlds_passes__Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 326 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 327 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40;

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho11_8_p_0_1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ImportStatus_31));
#line 327 "make_hlds_passes.m"
            }
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__Avails_28, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
            }
#line 327 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_30, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43);
            }
#line 330 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 330 "make_hlds_passes.m"
            {
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;

#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 330 "make_hlds_passes.m"
            }
#line 330 "make_hlds_passes.m"
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

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho10_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 327 "make_hlds_passes.m"
{
#line 327 "make_hlds_passes.m"
  {
#line 327 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 327 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11;

#line 327 "make_hlds_passes.m"
    {
#line 327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_pass_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11);
    }
#line 327 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11));
#line 327 "make_hlds_passes.m"
  }
#line 327 "make_hlds_passes.m"
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
            MR_Word hlds__make_hlds__make_hlds_passes__Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 326 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 327 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40;

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__int_for_opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho10_8_p_0_1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ImportStatus_31));
#line 327 "make_hlds_passes.m"
            }
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__Avails_28, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
            }
#line 327 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_30, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43);
            }
#line 330 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 330 "make_hlds_passes.m"
            {
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;

#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 330 "make_hlds_passes.m"
            }
#line 330 "make_hlds_passes.m"
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

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho9_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 327 "make_hlds_passes.m"
{
#line 327 "make_hlds_passes.m"
  {
#line 327 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 327 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11;

#line 327 "make_hlds_passes.m"
    {
#line 327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_pass_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11);
    }
#line 327 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_11));
#line 327 "make_hlds_passes.m"
  }
#line 327 "make_hlds_passes.m"
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
            MR_Word hlds__make_hlds__make_hlds_passes__Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 326 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 327 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40;

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              parse_tree__status__opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1__ho9_8_p_0_1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ImportStatus_31));
#line 327 "make_hlds_passes.m"
            }
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__Avails_28, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
            }
#line 327 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_40_40);
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_30, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43);
            }
#line 330 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 330 "make_hlds_passes.m"
            {
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;

#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 330 "make_hlds_passes.m"
            }
#line 330 "make_hlds_passes.m"
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

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho8_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 349 "make_hlds_passes.m"
{
#line 354 "make_hlds_passes.m"
  while (MR_TRUE)
#line 354 "make_hlds_passes.m"
    {
#line 354 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 354 "make_hlds_passes.m"
      {
#line 354 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 354 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 354 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
        else
#line 356 "make_hlds_passes.m"
          {
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 4)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_24;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 3)));

#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              parse_tree__status__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_24);
            }
#line 359 "make_hlds_passes.m"
            {
#line 359 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_24, hlds__make_hlds__make_hlds_passes__Items_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30);
            }
#line 360 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 360 "make_hlds_passes.m"
            {
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;

#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 360 "make_hlds_passes.m"
            }
#line 360 "make_hlds_passes.m"
            continue;
#line 356 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
      }
#line 354 "make_hlds_passes.m"
      break;
#line 354 "make_hlds_passes.m"
    }
#line 349 "make_hlds_passes.m"
}

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho7_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 349 "make_hlds_passes.m"
{
#line 354 "make_hlds_passes.m"
  while (MR_TRUE)
#line 354 "make_hlds_passes.m"
    {
#line 354 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 354 "make_hlds_passes.m"
      {
#line 354 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 354 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 354 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
        else
#line 356 "make_hlds_passes.m"
          {
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 4)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_24;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 3)));

#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              parse_tree__status__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_24);
            }
#line 359 "make_hlds_passes.m"
            {
#line 359 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_24, hlds__make_hlds__make_hlds_passes__Items_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30);
            }
#line 360 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 360 "make_hlds_passes.m"
            {
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;

#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 360 "make_hlds_passes.m"
            }
#line 360 "make_hlds_passes.m"
            continue;
#line 356 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
      }
#line 354 "make_hlds_passes.m"
      break;
#line 354 "make_hlds_passes.m"
    }
#line 349 "make_hlds_passes.m"
}

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho6_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 349 "make_hlds_passes.m"
{
#line 354 "make_hlds_passes.m"
  while (MR_TRUE)
#line 354 "make_hlds_passes.m"
    {
#line 354 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 354 "make_hlds_passes.m"
      {
#line 354 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 354 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 354 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
        else
#line 356 "make_hlds_passes.m"
          {
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 4)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_24;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 3)));

#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              parse_tree__status__int_for_opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_24);
            }
#line 359 "make_hlds_passes.m"
            {
#line 359 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_24, hlds__make_hlds__make_hlds_passes__Items_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30);
            }
#line 360 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 360 "make_hlds_passes.m"
            {
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;

#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 360 "make_hlds_passes.m"
            }
#line 360 "make_hlds_passes.m"
            continue;
#line 356 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
      }
#line 354 "make_hlds_passes.m"
      break;
#line 354 "make_hlds_passes.m"
    }
#line 349 "make_hlds_passes.m"
}

#line 349 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2__ho5_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 349 "make_hlds_passes.m"
{
#line 354 "make_hlds_passes.m"
  while (MR_TRUE)
#line 354 "make_hlds_passes.m"
    {
#line 354 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 354 "make_hlds_passes.m"
      {
#line 354 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 354 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 354 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
        else
#line 356 "make_hlds_passes.m"
          {
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 4)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_24;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 3)));

#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              parse_tree__status__opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__Status_24);
            }
#line 359 "make_hlds_passes.m"
            {
#line 359 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_24, hlds__make_hlds__make_hlds_passes__Items_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30);
            }
#line 360 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 360 "make_hlds_passes.m"
            {
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;

#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 360 "make_hlds_passes.m"
            }
#line 360 "make_hlds_passes.m"
            continue;
#line 356 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
      }
#line 354 "make_hlds_passes.m"
      break;
#line 354 "make_hlds_passes.m"
    }
#line 349 "make_hlds_passes.m"
}

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho4_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 373 "make_hlds_passes.m"
{
#line 378 "make_hlds_passes.m"
  while (MR_TRUE)
#line 378 "make_hlds_passes.m"
    {
#line 378 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 378 "make_hlds_passes.m"
      {
#line 378 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 378 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 378 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
        else
#line 380 "make_hlds_passes.m"
          {
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 383 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___NeedQualifier_32;

#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              parse_tree__status__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes___NeedQualifier_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_31, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41);
            }
#line 385 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;

#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 385 "make_hlds_passes.m"
            }
#line 385 "make_hlds_passes.m"
            continue;
#line 380 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
      }
#line 378 "make_hlds_passes.m"
      break;
#line 378 "make_hlds_passes.m"
    }
#line 373 "make_hlds_passes.m"
}

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho3_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 373 "make_hlds_passes.m"
{
#line 378 "make_hlds_passes.m"
  while (MR_TRUE)
#line 378 "make_hlds_passes.m"
    {
#line 378 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 378 "make_hlds_passes.m"
      {
#line 378 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 378 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 378 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
        else
#line 380 "make_hlds_passes.m"
          {
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 383 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___NeedQualifier_32;

#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              parse_tree__status__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes___NeedQualifier_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_31, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41);
            }
#line 385 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;

#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 385 "make_hlds_passes.m"
            }
#line 385 "make_hlds_passes.m"
            continue;
#line 380 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
      }
#line 378 "make_hlds_passes.m"
      break;
#line 378 "make_hlds_passes.m"
    }
#line 373 "make_hlds_passes.m"
}

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho2_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 373 "make_hlds_passes.m"
{
#line 378 "make_hlds_passes.m"
  while (MR_TRUE)
#line 378 "make_hlds_passes.m"
    {
#line 378 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 378 "make_hlds_passes.m"
      {
#line 378 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 378 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 378 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
        else
#line 380 "make_hlds_passes.m"
          {
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 383 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___NeedQualifier_32;

#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              parse_tree__status__int_for_opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes___NeedQualifier_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_31, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41);
            }
#line 385 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;

#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 385 "make_hlds_passes.m"
            }
#line 385 "make_hlds_passes.m"
            continue;
#line 380 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
      }
#line 378 "make_hlds_passes.m"
      break;
#line 378 "make_hlds_passes.m"
    }
#line 373 "make_hlds_passes.m"
}

#line 373 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3__ho1_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 373 "make_hlds_passes.m"
{
#line 378 "make_hlds_passes.m"
  while (MR_TRUE)
#line 378 "make_hlds_passes.m"
    {
#line 378 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 378 "make_hlds_passes.m"
      {
#line 378 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 378 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 378 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
        else
#line 380 "make_hlds_passes.m"
          {
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Section_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 383 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___NeedQualifier_32;

#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              parse_tree__status__opt_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__Status_30);
            }
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes___NeedQualifier_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_31, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41);
            }
#line 385 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;

#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 385 "make_hlds_passes.m"
            }
#line 385 "make_hlds_passes.m"
            continue;
#line 380 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
      }
#line 378 "make_hlds_passes.m"
      break;
#line 378 "make_hlds_passes.m"
    }
#line 373 "make_hlds_passes.m"
}

#line 537 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__537__1_2_p_0(
#line 537 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15,
#line 537 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_45)
#line 537 "make_hlds_passes.m"
{
#line 537 "make_hlds_passes.m"
  {
#line 537 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 537 "make_hlds_passes.m"
    {
#line 537 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[2], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_15)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_45)));
    }
#line 537 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 537 "make_hlds_passes.m"
  }
#line 537 "make_hlds_passes.m"
}

#line 536 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__536__1_2_p_0(
#line 536 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_14,
#line 536 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_40)
#line 536 "make_hlds_passes.m"
{
#line 536 "make_hlds_passes.m"
  {
#line 536 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 536 "make_hlds_passes.m"
    {
#line 536 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[1], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_14)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_40)));
    }
#line 536 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 536 "make_hlds_passes.m"
  }
#line 536 "make_hlds_passes.m"
}

#line 1308 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
#line 1308 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 1308 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6,
#line 1308 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10,
#line 1308 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11)
#line 1308 "make_hlds_passes.m"
{
#line 1312 "make_hlds_passes.m"
  {
#line 1312 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1312 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 1312 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9;
#line 1313 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 1313 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 1313 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 1316 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_16_16;
#line 1316 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17;
#line 1316 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18;
#line 1316 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19;

#line 1314 "make_hlds_passes.m"
    {
#line 1314 "make_hlds_passes.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6)), hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8, &hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9);
    }
#line 1316 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 1316 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 1316 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 1316 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 1316 "make_hlds_passes.m"
    {
#line 1316 "make_hlds_passes.m"
      MR_Word base;
#line 1316 "make_hlds_passes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11 = base;
#line 1316 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_16_16));
#line 1316 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_17_17));
#line 1316 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_18_18));
#line 1316 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9));
#line 1316 "make_hlds_passes.m"
    }
#line 1312 "make_hlds_passes.m"
  }
#line 1308 "make_hlds_passes.m"
}

#line 1305 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0_1(
#line 1305 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 1305 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1305 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
#line 1305 "make_hlds_passes.m"
{
#line 1305 "make_hlds_passes.m"
  {
#line 1305 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 1305 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11;

#line 1305 "make_hlds_passes.m"
    {
#line 1305 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11);
    }
#line 1305 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11));
#line 1305 "make_hlds_passes.m"
  }
#line 1305 "make_hlds_passes.m"
}

#line 1298 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0(
#line 1298 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 1298 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbers_6,
#line 1298 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8,
#line 1298 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9)
#line 1298 "make_hlds_passes.m"
{
#line 1301 "make_hlds_passes.m"
  {
#line 1301 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1301 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_10_10;

#line 1305 "make_hlds_passes.m"
    {
#line 1305 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2]));
#line 1305 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_version_numbers_pass_3_4_p_0_1));
#line 1305 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1305 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5));
#line 1305 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbers_6));
#line 1305 "make_hlds_passes.m"
    }
#line 1304 "make_hlds_passes.m"
    {
#line 1304 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__make_hlds_passes__V_10_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9);
#line 1304 "make_hlds_passes.m"
      return;
    }
#line 1301 "make_hlds_passes.m"
  }
#line 1298 "make_hlds_passes.m"
}

#line 1278 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_mutable_8_p_0(
#line 1278 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_9,
#line 1278 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 1278 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15,
#line 1278 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16,
#line 1278 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17,
#line 1278 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18,
#line 1278 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19,
#line 1278 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20)
#line 1278 "make_hlds_passes.m"
{
#line 1283 "make_hlds_passes.m"
  {
#line 1283 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1283 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_14;

#line 1287 "make_hlds_passes.m"
    {
#line 1287 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_14 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_10);
    }
#line 1292 "make_hlds_passes.m"
#line 1292 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_14) {
#line 1292 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 1293 "make_hlds_passes.m"
        {
#line 1293 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15;
#line 1293 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17;
#line 1293 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19;
#line 1293 "make_hlds_passes.m"
        }
#line 1292 "make_hlds_passes.m"
        break;
#line 1292 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 1290 "make_hlds_passes.m"
        {
#line 1290 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_9, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20);
#line 1290 "make_hlds_passes.m"
          return;
        }
#line 1292 "make_hlds_passes.m"
        break;
#line 1292 "make_hlds_passes.m"
    }
#line 1283 "make_hlds_passes.m"
  }
#line 1278 "make_hlds_passes.m"
}

#line 1204 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(
#line 1204 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1204 "make_hlds_passes.m"
{
#line 1204 "make_hlds_passes.m"
  {
#line 1204 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1204 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0, 1);
#line 1204 "make_hlds_passes.m"
  }
#line 1204 "make_hlds_passes.m"
}

#line 1207 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3(
#line 1207 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1207 "make_hlds_passes.m"
{
#line 1207 "make_hlds_passes.m"
  {
#line 1207 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1207 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32);
#line 1207 "make_hlds_passes.m"
    {
#line 1207 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1207 "make_hlds_passes.m"
      return;
    }
#line 1207 "make_hlds_passes.m"
  }
#line 1207 "make_hlds_passes.m"
}

#line 1204 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(
#line 1204 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1204 "make_hlds_passes.m"
{
#line 1204 "make_hlds_passes.m"
  {
#line 1204 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1208 "make_hlds_passes.m"
    {
#line 1208 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33);
    }
#line 1210 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33)) == (MR_mktag((MR_Integer) 1)));
#line 1210 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1210 "make_hlds_passes.m"
      {
#line 1210 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33, (MR_Integer) 0)));
#line 1204 "make_hlds_passes.m"
        {
#line 1211 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34)) == (MR_mktag((MR_Integer) 1)));
#line 1211 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1211 "make_hlds_passes.m"
            {
#line 1211 "make_hlds_passes.m"
              {
#line 1211 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34, (MR_Integer) 0)));
#line 1211 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34, (MR_Integer) 1)));
#line 1211 "make_hlds_passes.m"
              }
#line 1204 "make_hlds_passes.m"
              {
#line 1211 "make_hlds_passes.m"
                {
#line 1211 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1211 "make_hlds_passes.m"
                {
#line 1211 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215);
                }
#line 1204 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                  {
#line 1211 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90)) == (MR_mktag((MR_Integer) 1)));
#line 1211 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1211 "make_hlds_passes.m"
                      {
#line 1211 "make_hlds_passes.m"
                        {
#line 1211 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90, (MR_Integer) 0)));
#line 1211 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90, (MR_Integer) 1)));
#line 1211 "make_hlds_passes.m"
                        }
#line 1204 "make_hlds_passes.m"
                        {
#line 1211 "make_hlds_passes.m"
                          {
#line 1211 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1211 "make_hlds_passes.m"
                          {
#line 1211 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216);
                          }
#line 1204 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                            {
#line 1211 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                                {
#line 1212 "make_hlds_passes.m"
                                  {
#line 1212 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35);
                                  }
#line 1213 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35)) == (MR_mktag((MR_Integer) 1)));
#line 1213 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1213 "make_hlds_passes.m"
                                    {
#line 1213 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35, (MR_Integer) 0)));
#line 1204 "make_hlds_passes.m"
                                      {
#line 1214 "make_hlds_passes.m"
#line 1214 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36) {
#line 1214 "make_hlds_passes.m"
                                          default:
#line 1214 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1214 "make_hlds_passes.m"
                                            break;
#line 1214 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1214 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1214 "make_hlds_passes.m"
                                            break;
#line 1214 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1214 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1214 "make_hlds_passes.m"
                                            break;
#line 1214 "make_hlds_passes.m"
                                        }
#line 1204 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                                          {
#line 1215 "make_hlds_passes.m"
                                            {
#line 1215 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37);
                                            }
#line 1216 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37 == (MR_Integer) 0);
#line 1216 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1216 "make_hlds_passes.m"
                                              {
#line 1216 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1216 "make_hlds_passes.m"
                                                return;
                                              }
#line 1204 "make_hlds_passes.m"
                                          }
#line 1204 "make_hlds_passes.m"
                                      }
#line 1213 "make_hlds_passes.m"
                                    }
#line 1204 "make_hlds_passes.m"
                                }
#line 1204 "make_hlds_passes.m"
                            }
#line 1204 "make_hlds_passes.m"
                        }
#line 1211 "make_hlds_passes.m"
                      }
#line 1204 "make_hlds_passes.m"
                  }
#line 1204 "make_hlds_passes.m"
              }
#line 1211 "make_hlds_passes.m"
            }
#line 1204 "make_hlds_passes.m"
        }
#line 1210 "make_hlds_passes.m"
      }
#line 1204 "make_hlds_passes.m"
  }
#line 1204 "make_hlds_passes.m"
}

#line 1204 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(
#line 1204 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1204 "make_hlds_passes.m"
{
#line 1204 "make_hlds_passes.m"
  {
#line 1204 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1204 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0) == 0)
#line 1204 "make_hlds_passes.m"
      {
#line 1204 "make_hlds_passes.m"
        {
#line 1204 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_30;
#line 1204 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_31;
#line 1204 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_87_87;
#line 1204 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_88_88;

#line 1204 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24)) == (MR_mktag((MR_Integer) 1)));
#line 1204 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
            {
#line 1204 "make_hlds_passes.m"
              {
#line 1204 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24, (MR_Integer) 0)));
#line 1204 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24, (MR_Integer) 1)));
#line 1204 "make_hlds_passes.m"
              }
#line 1204 "make_hlds_passes.m"
              {
#line 1204 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 1204 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                  {
#line 1204 "make_hlds_passes.m"
                    {
#line 1204 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_87_87, (MR_Integer) 0)));
#line 1204 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_87_87, (MR_Integer) 1)));
#line 1204 "make_hlds_passes.m"
                    }
#line 1204 "make_hlds_passes.m"
                    {
#line 1204 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                        {
#line 1205 "make_hlds_passes.m"
                          {
#line 1205 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_30);
                          }
#line 1204 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1204 "make_hlds_passes.m"
                            {
#line 1206 "make_hlds_passes.m"
                              {
#line 1206 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_31);
                              }
#line 1204 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1207 "make_hlds_passes.m"
                                {
#line 1207 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26, hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1204 "make_hlds_passes.m"
                            }
#line 1204 "make_hlds_passes.m"
                        }
#line 1204 "make_hlds_passes.m"
                    }
#line 1204 "make_hlds_passes.m"
                  }
#line 1204 "make_hlds_passes.m"
              }
#line 1204 "make_hlds_passes.m"
            }
#line 1204 "make_hlds_passes.m"
        }
#line 1204 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1204 "make_hlds_passes.m"
      }
#line 1204 "make_hlds_passes.m"
    else
#line 1204 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1204 "make_hlds_passes.m"
  }
#line 1204 "make_hlds_passes.m"
}

#line 1231 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(
#line 1231 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1231 "make_hlds_passes.m"
{
#line 1231 "make_hlds_passes.m"
  {
#line 1231 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1231 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1, 1);
#line 1231 "make_hlds_passes.m"
  }
#line 1231 "make_hlds_passes.m"
}

#line 1232 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7(
#line 1232 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1232 "make_hlds_passes.m"
{
#line 1232 "make_hlds_passes.m"
  {
#line 1232 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1232 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170);
#line 1232 "make_hlds_passes.m"
    {
#line 1232 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1232 "make_hlds_passes.m"
      return;
    }
#line 1232 "make_hlds_passes.m"
  }
#line 1232 "make_hlds_passes.m"
}

#line 1231 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(
#line 1231 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1231 "make_hlds_passes.m"
{
#line 1231 "make_hlds_passes.m"
  {
#line 1231 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1233 "make_hlds_passes.m"
    {
#line 1233 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171);
    }
#line 1235 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1235 "make_hlds_passes.m"
      {
#line 1235 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171, (MR_Integer) 0)));
#line 1231 "make_hlds_passes.m"
        {
#line 1236 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1231 "make_hlds_passes.m"
            {
#line 1237 "make_hlds_passes.m"
              {
#line 1237 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173);
              }
#line 1238 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1238 "make_hlds_passes.m"
                {
#line 1238 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173, (MR_Integer) 0)));
#line 1231 "make_hlds_passes.m"
                  {
#line 1239 "make_hlds_passes.m"
#line 1239 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174) {
#line 1239 "make_hlds_passes.m"
                      default:
#line 1239 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1239 "make_hlds_passes.m"
                        break;
#line 1239 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1239 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1239 "make_hlds_passes.m"
                        break;
#line 1239 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1239 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1239 "make_hlds_passes.m"
                        break;
#line 1239 "make_hlds_passes.m"
                    }
#line 1231 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1231 "make_hlds_passes.m"
                      {
#line 1240 "make_hlds_passes.m"
                        {
#line 1240 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175);
                        }
#line 1241 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175 == (MR_Integer) 2);
#line 1241 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1241 "make_hlds_passes.m"
                          {
#line 1241 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1241 "make_hlds_passes.m"
                            return;
                          }
#line 1231 "make_hlds_passes.m"
                      }
#line 1231 "make_hlds_passes.m"
                  }
#line 1238 "make_hlds_passes.m"
                }
#line 1231 "make_hlds_passes.m"
            }
#line 1231 "make_hlds_passes.m"
        }
#line 1235 "make_hlds_passes.m"
      }
#line 1231 "make_hlds_passes.m"
  }
#line 1231 "make_hlds_passes.m"
}

#line 1231 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(
#line 1231 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1231 "make_hlds_passes.m"
{
#line 1231 "make_hlds_passes.m"
  {
#line 1231 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1231 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1) == 0)
#line 1231 "make_hlds_passes.m"
      {
#line 1231 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1232 "make_hlds_passes.m"
          {
#line 1232 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26, hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1231 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1231 "make_hlds_passes.m"
      }
#line 1231 "make_hlds_passes.m"
    else
#line 1231 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1231 "make_hlds_passes.m"
  }
#line 1231 "make_hlds_passes.m"
}

#line 1156 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0(
#line 1156 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_6,
#line 1156 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45,
#line 1156 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46,
#line 1156 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47,
#line 1156 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48)
#line 1156 "make_hlds_passes.m"
{
#line 1156 "make_hlds_passes.m"
  {
#line 1156 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1160 "make_hlds_passes.m"
    {
#line 1160 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 0)));
#line 1160 "make_hlds_passes.m"
      MR_Integer hlds__make_hlds__make_hlds_passes__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 1)));
#line 1160 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__Origin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 2)));
#line 1160 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 3)));
#line 1160 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_15;
#line 1160 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_16;
#line 1171 "make_hlds_passes.m"
      MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 4)));

#line 1176 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1177 "make_hlds_passes.m"
        {
#line 1177 "make_hlds_passes.m"
        }
#line 1176 "make_hlds_passes.m"
      else
#line 1174 "make_hlds_passes.m"
        {
#line 1175 "make_hlds_passes.m"
          {
#line 1175 "make_hlds_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_finalise\'/5", (MR_String) "bad introduced finalise declaration");
#line 1175 "make_hlds_passes.m"
            return;
          }
#line 1174 "make_hlds_passes.m"
        }
#line 1179 "make_hlds_passes.m"
      {
#line 1179 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__PredTable_15);
      }
#line 1180 "make_hlds_passes.m"
      {
#line 1180 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_15, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__PredIds_16);
      }
#line 1191 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "make_hlds_passes.m"
        {
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_17;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_18;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_19;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_138_138;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_139_139;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_140_140;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_162_162;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_163_163;
#line 1183 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_167_167;

#line 1184 "make_hlds_passes.m"
          {
#line 1184 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1184 "make_hlds_passes.m"
          }
#line 1184 "make_hlds_passes.m"
          {
#line 1184 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_140_140));
#line 1184 "make_hlds_passes.m"
          }
#line 1184 "make_hlds_passes.m"
          {
#line 1184 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_139_139));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[31])));
#line 1184 "make_hlds_passes.m"
          }
#line 1184 "make_hlds_passes.m"
          {
#line 1184 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1184 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_138_138));
#line 1184 "make_hlds_passes.m"
          }
#line 1188 "make_hlds_passes.m"
          {
#line 1188 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_17));
#line 1188 "make_hlds_passes.m"
          }
#line 1188 "make_hlds_passes.m"
          {
#line 1188 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_163_163));
#line 1188 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "make_hlds_passes.m"
          }
#line 1188 "make_hlds_passes.m"
          {
#line 1188 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_18, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1188 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_162_162));
#line 1188 "make_hlds_passes.m"
          }
#line 1189 "make_hlds_passes.m"
          {
#line 1189 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_18));
#line 1189 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "make_hlds_passes.m"
          }
#line 1189 "make_hlds_passes.m"
          {
#line 1189 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1189 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_167_167));
#line 1189 "make_hlds_passes.m"
          }
#line 1190 "make_hlds_passes.m"
          {
#line 1190 "make_hlds_passes.m"
            MR_Word base;
#line 1190 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1190 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_19));
#line 1190 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1190 "make_hlds_passes.m"
          }
#line 1183 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1183 "make_hlds_passes.m"
        }
#line 1191 "make_hlds_passes.m"
      else
#line 1192 "make_hlds_passes.m"
        {
#line 1192 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_16, (MR_Integer) 0)));
#line 1192 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_16, (MR_Integer) 1)));

#line 1264 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1194 "make_hlds_passes.m"
            {
#line 1194 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_25;
#line 1194 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_27;
#line 1194 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_28;
#line 1194 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_29;

#line 1196 "make_hlds_passes.m"
              {
#line 1196 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__make_hlds_passes__HeadPredId_20, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23);
              }
#line 1197 "make_hlds_passes.m"
              {
#line 1197 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24);
              }
#line 1198 "make_hlds_passes.m"
              {
#line 1198 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &hlds__make_hlds__make_hlds_passes__ProcTable_25);
              }
#line 4076 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1199 "make_hlds_passes.m"
              {
#line 1199 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, hlds__make_hlds__make_hlds_passes__ProcTable_25);
              }
#line 1200 "make_hlds_passes.m"
              {
#line 1200 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__Globals_27);
              }
#line 1201 "make_hlds_passes.m"
              {
#line 1201 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_27, &hlds__make_hlds__make_hlds_passes__CompilationTarget_28);
              }
#line 1202 "make_hlds_passes.m"
              {
#line 1202 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_29 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_28);
              }
#line 1204 "make_hlds_passes.m"
              {
#line 1204 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1230 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1219 "make_hlds_passes.m"
                {
#line 1219 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_38;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_39;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_40;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_94_94;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_95_95;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1219 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;

#line 1218 "make_hlds_passes.m"
                  {
#line 1218 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__CName_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93);
                  }
#line 1221 "make_hlds_passes.m"
                  {
#line 1221 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_95_95 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1221 "make_hlds_passes.m"
                  {
#line 1221 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_97_97 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1221 "make_hlds_passes.m"
                  {
#line 1221 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1221 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "make_hlds_passes.m"
                  }
#line 1221 "make_hlds_passes.m"
                  {
#line 1221 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_95_95));
#line 1221 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1221 "make_hlds_passes.m"
                  }
#line 1220 "make_hlds_passes.m"
                  {
#line 1220 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1220 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_94_94));
#line 1220 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1220 "make_hlds_passes.m"
                  }
#line 1222 "make_hlds_passes.m"
                  {
#line 1222 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_29));
#line 1222 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_39));
#line 1222 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_38));
#line 1222 "make_hlds_passes.m"
                  }
#line 1228 "make_hlds_passes.m"
                  {
#line 1228 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_40, hlds__make_hlds__make_hlds_passes__Context_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48);
#line 1228 "make_hlds_passes.m"
                    return;
                  }
#line 1219 "make_hlds_passes.m"
                }
#line 1230 "make_hlds_passes.m"
              else
#line 1255 "make_hlds_passes.m"
                {
#line 1231 "make_hlds_passes.m"
                  {
#line 1231 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1255 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1244 "make_hlds_passes.m"
                    {
#line 1244 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104;
#line 1244 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_176;
#line 1244 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_177;
#line 1244 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_178;

#line 1243 "make_hlds_passes.m"
                      {
#line 1243 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__CName_176, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104);
                      }
#line 1245 "make_hlds_passes.m"
                      {
#line 1245 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1245 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1245 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1245 "make_hlds_passes.m"
                      }
#line 1247 "make_hlds_passes.m"
                      {
#line 1247 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_29));
#line 1247 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_177));
#line 1247 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_176));
#line 1247 "make_hlds_passes.m"
                      }
#line 1253 "make_hlds_passes.m"
                      {
#line 1253 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_178, hlds__make_hlds__make_hlds_passes__Context_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48);
#line 1253 "make_hlds_passes.m"
                        return;
                      }
#line 1244 "make_hlds_passes.m"
                    }
#line 1255 "make_hlds_passes.m"
                  else
#line 1258 "make_hlds_passes.m"
                    {
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_114_114;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_115_115;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_128_128;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_129_129;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_133_133;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_181;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_182;
#line 1258 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_183;

#line 1256 "make_hlds_passes.m"
                      {
#line 1256 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1256 "make_hlds_passes.m"
                      }
#line 1256 "make_hlds_passes.m"
                      {
#line 1256 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_115_115));
#line 1256 "make_hlds_passes.m"
                      }
#line 1256 "make_hlds_passes.m"
                      {
#line 1256 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_114_114));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[35])));
#line 1256 "make_hlds_passes.m"
                      }
#line 1256 "make_hlds_passes.m"
                      {
#line 1256 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1256 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_181, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1256 "make_hlds_passes.m"
                      }
#line 1259 "make_hlds_passes.m"
                      {
#line 1259 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_181));
#line 1259 "make_hlds_passes.m"
                      }
#line 1259 "make_hlds_passes.m"
                      {
#line 1259 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_129_129));
#line 1259 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1259 "make_hlds_passes.m"
                      }
#line 1259 "make_hlds_passes.m"
                      {
#line 1259 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_182, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1259 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_182, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_128_128));
#line 1259 "make_hlds_passes.m"
                      }
#line 1261 "make_hlds_passes.m"
                      {
#line 1261 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_182));
#line 1261 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "make_hlds_passes.m"
                      }
#line 1260 "make_hlds_passes.m"
                      {
#line 1260 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1260 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1260 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_133_133));
#line 1260 "make_hlds_passes.m"
                      }
#line 1262 "make_hlds_passes.m"
                      {
#line 1262 "make_hlds_passes.m"
                        MR_Word base;
#line 1262 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1262 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_183));
#line 1262 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1262 "make_hlds_passes.m"
                      }
#line 1258 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1258 "make_hlds_passes.m"
                    }
#line 1255 "make_hlds_passes.m"
                }
#line 1194 "make_hlds_passes.m"
            }
#line 1264 "make_hlds_passes.m"
          else
#line 1265 "make_hlds_passes.m"
            {
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_55_55;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_56_56;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_57_57;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_84_84;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_204;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_205;
#line 1265 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_206;

#line 1266 "make_hlds_passes.m"
              {
#line 1266 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1266 "make_hlds_passes.m"
              }
#line 1266 "make_hlds_passes.m"
              {
#line 1266 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_57_57));
#line 1266 "make_hlds_passes.m"
              }
#line 1266 "make_hlds_passes.m"
              {
#line 1266 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_56_56));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[43])));
#line 1266 "make_hlds_passes.m"
              }
#line 1266 "make_hlds_passes.m"
              {
#line 1266 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1266 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_204, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_55_55));
#line 1266 "make_hlds_passes.m"
              }
#line 1270 "make_hlds_passes.m"
              {
#line 1270 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_204));
#line 1270 "make_hlds_passes.m"
              }
#line 1270 "make_hlds_passes.m"
              {
#line 1270 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 1270 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1270 "make_hlds_passes.m"
              }
#line 1270 "make_hlds_passes.m"
              {
#line 1270 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_205, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1270 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_205, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1270 "make_hlds_passes.m"
              }
#line 1271 "make_hlds_passes.m"
              {
#line 1271 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_205));
#line 1271 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1271 "make_hlds_passes.m"
              }
#line 1271 "make_hlds_passes.m"
              {
#line 1271 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1271 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1271 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_84_84));
#line 1271 "make_hlds_passes.m"
              }
#line 1272 "make_hlds_passes.m"
              {
#line 1272 "make_hlds_passes.m"
                MR_Word base;
#line 1272 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1272 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_206));
#line 1272 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1272 "make_hlds_passes.m"
              }
#line 1265 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1265 "make_hlds_passes.m"
            }
#line 1192 "make_hlds_passes.m"
        }
#line 1160 "make_hlds_passes.m"
    }
#line 1156 "make_hlds_passes.m"
  }
#line 1156 "make_hlds_passes.m"
}

#line 1080 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(
#line 1080 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1080 "make_hlds_passes.m"
{
#line 1080 "make_hlds_passes.m"
  {
#line 1080 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1080 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0, 1);
#line 1080 "make_hlds_passes.m"
  }
#line 1080 "make_hlds_passes.m"
}

#line 1083 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3(
#line 1083 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1083 "make_hlds_passes.m"
{
#line 1083 "make_hlds_passes.m"
  {
#line 1083 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1083 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30);
#line 1083 "make_hlds_passes.m"
    {
#line 1083 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1083 "make_hlds_passes.m"
      return;
    }
#line 1083 "make_hlds_passes.m"
  }
#line 1083 "make_hlds_passes.m"
}

#line 1080 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(
#line 1080 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1080 "make_hlds_passes.m"
{
#line 1080 "make_hlds_passes.m"
  {
#line 1080 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1084 "make_hlds_passes.m"
    {
#line 1084 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31);
    }
#line 1086 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
#line 1086 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1086 "make_hlds_passes.m"
      {
#line 1086 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
#line 1080 "make_hlds_passes.m"
        {
#line 1087 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
            {
#line 1087 "make_hlds_passes.m"
              {
#line 1087 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
#line 1087 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
              }
#line 1080 "make_hlds_passes.m"
              {
#line 1087 "make_hlds_passes.m"
                {
#line 1087 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1087 "make_hlds_passes.m"
                {
#line 1087 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195);
                }
#line 1080 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                  {
#line 1087 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                      {
#line 1087 "make_hlds_passes.m"
                        {
#line 1087 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73, (MR_Integer) 0)));
#line 1087 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73, (MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
                        }
#line 1080 "make_hlds_passes.m"
                        {
#line 1087 "make_hlds_passes.m"
                          {
#line 1087 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1087 "make_hlds_passes.m"
                          {
#line 1087 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196);
                          }
#line 1080 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                            {
#line 1087 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                                {
#line 1088 "make_hlds_passes.m"
                                  {
#line 1088 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33);
                                  }
#line 1089 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1089 "make_hlds_passes.m"
                                    {
#line 1089 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
#line 1080 "make_hlds_passes.m"
                                      {
#line 1090 "make_hlds_passes.m"
#line 1090 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34) {
#line 1090 "make_hlds_passes.m"
                                          default:
#line 1090 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1090 "make_hlds_passes.m"
                                            break;
#line 1090 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1090 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1090 "make_hlds_passes.m"
                                            break;
#line 1090 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1090 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1090 "make_hlds_passes.m"
                                            break;
#line 1090 "make_hlds_passes.m"
                                        }
#line 1080 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                                          {
#line 1091 "make_hlds_passes.m"
                                            {
#line 1091 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35);
                                            }
#line 1092 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
#line 1092 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1092 "make_hlds_passes.m"
                                              {
#line 1092 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1092 "make_hlds_passes.m"
                                                return;
                                              }
#line 1080 "make_hlds_passes.m"
                                          }
#line 1080 "make_hlds_passes.m"
                                      }
#line 1089 "make_hlds_passes.m"
                                    }
#line 1080 "make_hlds_passes.m"
                                }
#line 1080 "make_hlds_passes.m"
                            }
#line 1080 "make_hlds_passes.m"
                        }
#line 1087 "make_hlds_passes.m"
                      }
#line 1080 "make_hlds_passes.m"
                  }
#line 1080 "make_hlds_passes.m"
              }
#line 1087 "make_hlds_passes.m"
            }
#line 1080 "make_hlds_passes.m"
        }
#line 1086 "make_hlds_passes.m"
      }
#line 1080 "make_hlds_passes.m"
  }
#line 1080 "make_hlds_passes.m"
}

#line 1080 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(
#line 1080 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1080 "make_hlds_passes.m"
{
#line 1080 "make_hlds_passes.m"
  {
#line 1080 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1080 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0) == 0)
#line 1080 "make_hlds_passes.m"
      {
#line 1080 "make_hlds_passes.m"
        {
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_70_70;
#line 1080 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_71_71;

#line 1080 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
#line 1080 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
            {
#line 1080 "make_hlds_passes.m"
              {
#line 1080 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
#line 1080 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
#line 1080 "make_hlds_passes.m"
              }
#line 1080 "make_hlds_passes.m"
              {
#line 1080 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 1080 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                  {
#line 1080 "make_hlds_passes.m"
                    {
#line 1080 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 0)));
#line 1080 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 1)));
#line 1080 "make_hlds_passes.m"
                    }
#line 1080 "make_hlds_passes.m"
                    {
#line 1080 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                        {
#line 1081 "make_hlds_passes.m"
                          {
#line 1081 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
#line 1080 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1080 "make_hlds_passes.m"
                            {
#line 1082 "make_hlds_passes.m"
                              {
#line 1082 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
#line 1080 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1083 "make_hlds_passes.m"
                                {
#line 1083 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1080 "make_hlds_passes.m"
                            }
#line 1080 "make_hlds_passes.m"
                        }
#line 1080 "make_hlds_passes.m"
                    }
#line 1080 "make_hlds_passes.m"
                  }
#line 1080 "make_hlds_passes.m"
              }
#line 1080 "make_hlds_passes.m"
            }
#line 1080 "make_hlds_passes.m"
        }
#line 1080 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1080 "make_hlds_passes.m"
      }
#line 1080 "make_hlds_passes.m"
    else
#line 1080 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1080 "make_hlds_passes.m"
  }
#line 1080 "make_hlds_passes.m"
}

#line 1107 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(
#line 1107 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1107 "make_hlds_passes.m"
{
#line 1107 "make_hlds_passes.m"
  {
#line 1107 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1107 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1, 1);
#line 1107 "make_hlds_passes.m"
  }
#line 1107 "make_hlds_passes.m"
}

#line 1108 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7(
#line 1108 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1108 "make_hlds_passes.m"
{
#line 1108 "make_hlds_passes.m"
  {
#line 1108 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1108 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150);
#line 1108 "make_hlds_passes.m"
    {
#line 1108 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1108 "make_hlds_passes.m"
      return;
    }
#line 1108 "make_hlds_passes.m"
  }
#line 1108 "make_hlds_passes.m"
}

#line 1107 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(
#line 1107 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1107 "make_hlds_passes.m"
{
#line 1107 "make_hlds_passes.m"
  {
#line 1107 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1109 "make_hlds_passes.m"
    {
#line 1109 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151);
    }
#line 1111 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151)) == (MR_mktag((MR_Integer) 1)));
#line 1111 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1111 "make_hlds_passes.m"
      {
#line 1111 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151, (MR_Integer) 0)));
#line 1107 "make_hlds_passes.m"
        {
#line 1112 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1107 "make_hlds_passes.m"
            {
#line 1113 "make_hlds_passes.m"
              {
#line 1113 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153);
              }
#line 1114 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153)) == (MR_mktag((MR_Integer) 1)));
#line 1114 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1114 "make_hlds_passes.m"
                {
#line 1114 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153, (MR_Integer) 0)));
#line 1107 "make_hlds_passes.m"
                  {
#line 1115 "make_hlds_passes.m"
#line 1115 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154) {
#line 1115 "make_hlds_passes.m"
                      default:
#line 1115 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1115 "make_hlds_passes.m"
                        break;
#line 1115 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1115 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1115 "make_hlds_passes.m"
                        break;
#line 1115 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1115 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1115 "make_hlds_passes.m"
                        break;
#line 1115 "make_hlds_passes.m"
                    }
#line 1107 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1107 "make_hlds_passes.m"
                      {
#line 1116 "make_hlds_passes.m"
                        {
#line 1116 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155);
                        }
#line 1117 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155 == (MR_Integer) 2);
#line 1117 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1117 "make_hlds_passes.m"
                          {
#line 1117 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1117 "make_hlds_passes.m"
                            return;
                          }
#line 1107 "make_hlds_passes.m"
                      }
#line 1107 "make_hlds_passes.m"
                  }
#line 1114 "make_hlds_passes.m"
                }
#line 1107 "make_hlds_passes.m"
            }
#line 1107 "make_hlds_passes.m"
        }
#line 1111 "make_hlds_passes.m"
      }
#line 1107 "make_hlds_passes.m"
  }
#line 1107 "make_hlds_passes.m"
}

#line 1107 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(
#line 1107 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1107 "make_hlds_passes.m"
{
#line 1107 "make_hlds_passes.m"
  {
#line 1107 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1107 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1) == 0)
#line 1107 "make_hlds_passes.m"
      {
#line 1107 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1108 "make_hlds_passes.m"
          {
#line 1108 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1107 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1107 "make_hlds_passes.m"
      }
#line 1107 "make_hlds_passes.m"
    else
#line 1107 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1107 "make_hlds_passes.m"
  }
#line 1107 "make_hlds_passes.m"
}

#line 1037 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0(
#line 1037 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
#line 1037 "make_hlds_passes.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
#line 1037 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
#line 1037 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
#line 1037 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
#line 1037 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
#line 1037 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
#line 1037 "make_hlds_passes.m"
{
#line 1037 "make_hlds_passes.m"
  {
#line 1037 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1041 "make_hlds_passes.m"
    {
#line 1041 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
#line 1041 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

#line 1054 "make_hlds_passes.m"
      {
#line 1054 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
#line 1055 "make_hlds_passes.m"
      {
#line 1055 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
#line 1066 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1058 "make_hlds_passes.m"
        {
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_118_118;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_119_119;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_120_120;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_142_142;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_143_143;
#line 1058 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_147_147;

#line 1059 "make_hlds_passes.m"
          {
#line 1059 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1059 "make_hlds_passes.m"
          }
#line 1059 "make_hlds_passes.m"
          {
#line 1059 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_120_120));
#line 1059 "make_hlds_passes.m"
          }
#line 1059 "make_hlds_passes.m"
          {
#line 1059 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_119_119));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[22])));
#line 1059 "make_hlds_passes.m"
          }
#line 1059 "make_hlds_passes.m"
          {
#line 1059 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1059 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_118_118));
#line 1059 "make_hlds_passes.m"
          }
#line 1063 "make_hlds_passes.m"
          {
#line 1063 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
#line 1063 "make_hlds_passes.m"
          }
#line 1063 "make_hlds_passes.m"
          {
#line 1063 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_143_143));
#line 1063 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1063 "make_hlds_passes.m"
          }
#line 1063 "make_hlds_passes.m"
          {
#line 1063 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1063 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_142_142));
#line 1063 "make_hlds_passes.m"
          }
#line 1064 "make_hlds_passes.m"
          {
#line 1064 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
#line 1064 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "make_hlds_passes.m"
          }
#line 1064 "make_hlds_passes.m"
          {
#line 1064 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1064 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_147_147));
#line 1064 "make_hlds_passes.m"
          }
#line 1065 "make_hlds_passes.m"
          {
#line 1065 "make_hlds_passes.m"
            MR_Word base;
#line 1065 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1065 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
#line 1065 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1065 "make_hlds_passes.m"
          }
#line 1058 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1058 "make_hlds_passes.m"
        }
#line 1066 "make_hlds_passes.m"
      else
#line 1067 "make_hlds_passes.m"
        {
#line 1067 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
#line 1067 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

#line 1142 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1069 "make_hlds_passes.m"
            {
#line 1069 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
#line 1069 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
#line 1069 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
#line 1069 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

#line 1071 "make_hlds_passes.m"
              {
#line 1071 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21);
              }
#line 1072 "make_hlds_passes.m"
              {
#line 1072 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22);
              }
#line 1073 "make_hlds_passes.m"
              {
#line 1073 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 5265 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1074 "make_hlds_passes.m"
              {
#line 1074 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 1075 "make_hlds_passes.m"
              {
#line 1075 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
#line 1076 "make_hlds_passes.m"
              {
#line 1076 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1077 "make_hlds_passes.m"
              {
#line 1077 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1080 "make_hlds_passes.m"
              {
#line 1080 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1106 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1095 "make_hlds_passes.m"
                {
#line 1095 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_77_77;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_78_78;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1095 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;

#line 1094 "make_hlds_passes.m"
                  {
#line 1094 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76);
                  }
#line 1097 "make_hlds_passes.m"
                  {
#line 1097 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_78_78 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1097 "make_hlds_passes.m"
                  {
#line 1097 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_80_80 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1097 "make_hlds_passes.m"
                  {
#line 1097 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 1097 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "make_hlds_passes.m"
                  }
#line 1097 "make_hlds_passes.m"
                  {
#line 1097 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_78_78));
#line 1097 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1097 "make_hlds_passes.m"
                  }
#line 1096 "make_hlds_passes.m"
                  {
#line 1096 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1096 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_77_77));
#line 1096 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1096 "make_hlds_passes.m"
                  }
#line 1098 "make_hlds_passes.m"
                  {
#line 1098 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1098 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
#line 1098 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
#line 1098 "make_hlds_passes.m"
                  }
#line 1104 "make_hlds_passes.m"
                  {
#line 1104 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
#line 1104 "make_hlds_passes.m"
                    return;
                  }
#line 1095 "make_hlds_passes.m"
                }
#line 1106 "make_hlds_passes.m"
              else
#line 1131 "make_hlds_passes.m"
                {
#line 1107 "make_hlds_passes.m"
                  {
#line 1107 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1131 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1120 "make_hlds_passes.m"
                    {
#line 1120 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87;
#line 1120 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_156;
#line 1120 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_157;
#line 1120 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_158;

#line 1119 "make_hlds_passes.m"
                      {
#line 1119 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_156, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87);
                      }
#line 1121 "make_hlds_passes.m"
                      {
#line 1121 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1121 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1121 "make_hlds_passes.m"
                      }
#line 1123 "make_hlds_passes.m"
                      {
#line 1123 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1123 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_157));
#line 1123 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_156));
#line 1123 "make_hlds_passes.m"
                      }
#line 1129 "make_hlds_passes.m"
                      {
#line 1129 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[46]))), hlds__make_hlds__make_hlds_passes__FPEInfo_158, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
#line 1129 "make_hlds_passes.m"
                        return;
                      }
#line 1120 "make_hlds_passes.m"
                    }
#line 1131 "make_hlds_passes.m"
                  else
#line 1135 "make_hlds_passes.m"
                    {
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_98_98;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_108_108;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_109_109;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_161;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_162;
#line 1135 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_163;

#line 1133 "make_hlds_passes.m"
                      {
#line 1133 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1133 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1133 "make_hlds_passes.m"
                      }
#line 1133 "make_hlds_passes.m"
                      {
#line 1133 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1133 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_98_98));
#line 1133 "make_hlds_passes.m"
                      }
#line 1133 "make_hlds_passes.m"
                      {
#line 1133 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1133 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[26])));
#line 1133 "make_hlds_passes.m"
                      }
#line 1132 "make_hlds_passes.m"
                      {
#line 1132 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1132 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1132 "make_hlds_passes.m"
                      }
#line 1137 "make_hlds_passes.m"
                      {
#line 1137 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_161));
#line 1137 "make_hlds_passes.m"
                      }
#line 1137 "make_hlds_passes.m"
                      {
#line 1137 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_109_109));
#line 1137 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "make_hlds_passes.m"
                      }
#line 1137 "make_hlds_passes.m"
                      {
#line 1137 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1137 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_108_108));
#line 1137 "make_hlds_passes.m"
                      }
#line 1139 "make_hlds_passes.m"
                      {
#line 1139 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_162));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "make_hlds_passes.m"
                      }
#line 1138 "make_hlds_passes.m"
                      {
#line 1138 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1138 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1138 "make_hlds_passes.m"
                      }
#line 1140 "make_hlds_passes.m"
                      {
#line 1140 "make_hlds_passes.m"
                        MR_Word base;
#line 1140 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1140 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_163));
#line 1140 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1140 "make_hlds_passes.m"
                      }
#line 1135 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1135 "make_hlds_passes.m"
                    }
#line 1131 "make_hlds_passes.m"
                }
#line 1069 "make_hlds_passes.m"
            }
#line 1142 "make_hlds_passes.m"
          else
#line 1143 "make_hlds_passes.m"
            {
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_50_50;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_51_51;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_62_62;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_63_63;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_67_67;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_184;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_185;
#line 1143 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_186;

#line 1144 "make_hlds_passes.m"
              {
#line 1144 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1144 "make_hlds_passes.m"
              }
#line 1144 "make_hlds_passes.m"
              {
#line 1144 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 1144 "make_hlds_passes.m"
              }
#line 1144 "make_hlds_passes.m"
              {
#line 1144 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_51_51));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[29])));
#line 1144 "make_hlds_passes.m"
              }
#line 1144 "make_hlds_passes.m"
              {
#line 1144 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_2[45])));
#line 1144 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_50_50));
#line 1144 "make_hlds_passes.m"
              }
#line 1147 "make_hlds_passes.m"
              {
#line 1147 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_184));
#line 1147 "make_hlds_passes.m"
              }
#line 1147 "make_hlds_passes.m"
              {
#line 1147 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_63_63));
#line 1147 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "make_hlds_passes.m"
              }
#line 1147 "make_hlds_passes.m"
              {
#line 1147 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1147 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_62_62));
#line 1147 "make_hlds_passes.m"
              }
#line 1149 "make_hlds_passes.m"
              {
#line 1149 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_185));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1149 "make_hlds_passes.m"
              }
#line 1148 "make_hlds_passes.m"
              {
#line 1148 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1148 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_67_67));
#line 1148 "make_hlds_passes.m"
              }
#line 1150 "make_hlds_passes.m"
              {
#line 1150 "make_hlds_passes.m"
                MR_Word base;
#line 1150 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1150 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_186));
#line 1150 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1150 "make_hlds_passes.m"
              }
#line 1143 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1143 "make_hlds_passes.m"
            }
#line 1067 "make_hlds_passes.m"
        }
#line 1041 "make_hlds_passes.m"
    }
#line 1037 "make_hlds_passes.m"
  }
#line 1037 "make_hlds_passes.m"
}

#line 1019 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_8_p_0(
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_9,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes___Status_10,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 1019 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22,
#line 1019 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23,
#line 1019 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 1019 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 1019 "make_hlds_passes.m"
{
#line 1025 "make_hlds_passes.m"
  {
#line 1025 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 1025 "make_hlds_passes.m"
    {
#line 1025 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
#line 1025 "make_hlds_passes.m"
      return;
    }
#line 1025 "make_hlds_passes.m"
  }
#line 1019 "make_hlds_passes.m"
}

#line 988 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_13,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_14,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VarSet_15,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Goal_16,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_17,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_18,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 988 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28,
#line 988 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29,
#line 988 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30,
#line 988 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31)
#line 988 "make_hlds_passes.m"
{
#line 994 "make_hlds_passes.m"
  {
#line 994 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 994 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Line_22;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__File_23;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__Name_24;
#line 994 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_25;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_35_35;
#line 994 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_42_42;
#line 994 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_44_44;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_48_48;
#line 994 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_54_54;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_56_56;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_57_57;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_64_64;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_66_66;
#line 994 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_67_67;

#line 995 "make_hlds_passes.m"
    {
#line 995 "make_hlds_passes.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__Line_22);
    }
#line 996 "make_hlds_passes.m"
    {
#line 996 "make_hlds_passes.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__File_23);
    }
#line 998 "make_hlds_passes.m"
    {
#line 998 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_35_35 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_passes__PromiseType_13);
    }
#line 5831 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__V_54_54 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_8[0];
#line 998 "make_hlds_passes.m"
    {
#line 998 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__File_23, &hlds__make_hlds__make_hlds_passes__V_48_48);
    }
#line 997 "make_hlds_passes.m"
    {
#line 997 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_48_48);
    }
#line 998 "make_hlds_passes.m"
    {
#line 998 "make_hlds_passes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__Line_22, &hlds__make_hlds__make_hlds_passes__V_57_57);
    }
#line 997 "make_hlds_passes.m"
    {
#line 997 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_57_57, hlds__make_hlds__make_hlds_passes__V_56_56);
    }
#line 997 "make_hlds_passes.m"
    {
#line 997 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_64_64);
    }
#line 998 "make_hlds_passes.m"
    {
#line 998 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__V_35_35, &hlds__make_hlds__make_hlds_passes__V_67_67);
    }
#line 997 "make_hlds_passes.m"
    {
#line 997 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Name_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_67_67, hlds__make_hlds__make_hlds_passes__V_66_66);
    }
#line 1012 "make_hlds_passes.m"
    {
#line 1012 "make_hlds_passes.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__make_hlds_passes__ModuleName_25);
    }
#line 1013 "make_hlds_passes.m"
    {
#line 1013 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_25));
#line 1013 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Name_24));
#line 1013 "make_hlds_passes.m"
    }
#line 1014 "make_hlds_passes.m"
    {
#line 1014 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PromiseType_13));
#line 1014 "make_hlds_passes.m"
    }
#line 1013 "make_hlds_passes.m"
    {
#line 1013 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_15, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__V_42_42, hlds__make_hlds__make_hlds_passes__HeadVars_14, hlds__make_hlds__make_hlds_passes__Goal_16, hlds__make_hlds__make_hlds_passes__Status_18, hlds__make_hlds__make_hlds_passes__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__V_44_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31);
#line 1013 "make_hlds_passes.m"
      return;
    }
#line 994 "make_hlds_passes.m"
  }
#line 988 "make_hlds_passes.m"
}

#line 961 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_promise_8_p_0(
#line 961 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPromise_9,
#line 961 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 961 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21,
#line 961 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22,
#line 961 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_23,
#line 961 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_24,
#line 961 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25,
#line 961 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26)
#line 961 "make_hlds_passes.m"
{
#line 966 "make_hlds_passes.m"
  {
#line 966 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 0)));
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 1)));
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 2)));
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 3)));
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 4)));
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_20;
#line 966 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 967 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 5)));

#line 973 "make_hlds_passes.m"
    {
#line 973 "make_hlds_passes.m"
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_passes__UnivVars_17, &hlds__make_hlds__make_hlds_passes__HeadVars_20);
    }
#line 981 "make_hlds_passes.m"
#line 981 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PromiseType_14) {
#line 981 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 981 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 981 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 981 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 980 "make_hlds_passes.m"
        {
#line 980 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(hlds__make_hlds__make_hlds_passes__UnivVars_17, hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
        }
#line 981 "make_hlds_passes.m"
        break;
#line 981 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 982 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25;
#line 981 "make_hlds_passes.m"
        break;
#line 981 "make_hlds_passes.m"
    }
#line 985 "make_hlds_passes.m"
    {
#line 985 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__HeadVars_20, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26);
#line 985 "make_hlds_passes.m"
      return;
    }
#line 966 "make_hlds_passes.m"
  }
#line 961 "make_hlds_passes.m"
}

#line 941 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_pred_decl_8_p_0(
#line 941 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_9,
#line 941 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 941 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30,
#line 941 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31,
#line 941 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_32,
#line 941 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_33,
#line 941 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 941 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 941 "make_hlds_passes.m"
{
#line 946 "make_hlds_passes.m"
  {
#line 946 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 946 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 0)));
#line 946 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 1)));
#line 946 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 2)));
#line 946 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 12)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 3)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 4)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 5)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 6)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 7)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 8)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 9)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 10)));
#line 947 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 11)));
#line 947 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 13)));

#line 951 "make_hlds_passes.m"
#line 951 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_15) {
#line 951 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 951 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 952 "make_hlds_passes.m"
        {
#line 952 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__PredArity_28;
#line 952 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_29;

#line 953 "make_hlds_passes.m"
          {
#line 953 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_16, &hlds__make_hlds__make_hlds_passes__PredArity_28);
          }
#line 954 "make_hlds_passes.m"
          {
#line 954 "make_hlds_passes.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_29, hlds__make_hlds__make_hlds_passes__PredArity_28);
          }
#line 955 "make_hlds_passes.m"
          {
#line 955 "make_hlds_passes.m"
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30, hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__FuncArity_29, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__Context_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
          }
#line 952 "make_hlds_passes.m"
        }
#line 951 "make_hlds_passes.m"
        break;
#line 951 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 950 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 951 "make_hlds_passes.m"
        break;
#line 951 "make_hlds_passes.m"
    }
#line 946 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_32;
#line 946 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30;
#line 946 "make_hlds_passes.m"
  }
#line 941 "make_hlds_passes.m"
}

#line 926 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_8_p_0(
#line 926 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 926 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 926 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 926 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 926 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 926 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 926 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 926 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 926 "make_hlds_passes.m"
{
#line 931 "make_hlds_passes.m"
  while (MR_TRUE)
#line 931 "make_hlds_passes.m"
    {
#line 931 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 931 "make_hlds_passes.m"
      {
#line 931 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 931 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "make_hlds_passes.m"
          {
#line 932 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 932 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 932 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 931 "make_hlds_passes.m"
          }
#line 931 "make_hlds_passes.m"
        else
#line 934 "make_hlds_passes.m"
          {
#line 934 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 934 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 934 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 934 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 934 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;
#line 934 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_48;

#line 1287 "make_hlds_passes.m"
            {
#line 1287 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__DefinedThisModule_48 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__HeadVar__2_2);
            }
#line 1292 "make_hlds_passes.m"
#line 1292 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_48) {
#line 1292 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 1293 "make_hlds_passes.m"
                {
#line 1293 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 1293 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 1293 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 1293 "make_hlds_passes.m"
                }
#line 1292 "make_hlds_passes.m"
                break;
#line 1292 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 1290 "make_hlds_passes.m"
                {
#line 1290 "make_hlds_passes.m"
                  hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_19, hlds__make_hlds__make_hlds_passes__HeadVar__2_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
                }
#line 1292 "make_hlds_passes.m"
                break;
#line 1292 "make_hlds_passes.m"
            }
#line 936 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 936 "make_hlds_passes.m"
            {
#line 936 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_20;
#line 936 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 936 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 936 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 936 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 936 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 936 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 936 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 936 "make_hlds_passes.m"
            }
#line 936 "make_hlds_passes.m"
            continue;
#line 934 "make_hlds_passes.m"
          }
#line 931 "make_hlds_passes.m"
      }
#line 931 "make_hlds_passes.m"
      break;
#line 931 "make_hlds_passes.m"
    }
#line 926 "make_hlds_passes.m"
}

#line 901 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_type_defn_8_p_0(
#line 901 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9,
#line 901 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 901 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23,
#line 901 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24,
#line 901 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25,
#line 901 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26,
#line 901 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27,
#line 901 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28)
#line 901 "make_hlds_passes.m"
{
#line 906 "make_hlds_passes.m"
  {
#line 906 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 906 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 0)));
#line 906 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 1)));
#line 906 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 2)));
#line 906 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 4)));
#line 907 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 3)));
#line 907 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 5)));
#line 922 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20;
#line 914 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_29_29;
#line 914 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_21;

#line 914 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 914 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 914 "make_hlds_passes.m"
      {
#line 914 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 1)));
#line 914 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 2)));
#line 915 "make_hlds_passes.m"
        {
#line 915 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_29_29 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_10);
        }
#line 915 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_29_29 == (MR_Integer) 1);
#line 914 "make_hlds_passes.m"
      }
#line 922 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 918 "make_hlds_passes.m"
      {
#line 918 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_22;
#line 918 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30;
#line 918 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31;
#line 918 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32;
#line 919 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_36_36;
#line 919 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_37_37;
#line 919 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;
#line 919 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;

#line 917 "make_hlds_passes.m"
        {
#line 917 "make_hlds_passes.m"
          hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_11_p_0(hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__TypeParams_15, hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32);
        }
#line 919 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 0)));
#line 919 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 1)));
#line 919 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 2)));
#line 919 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 3)));
#line 919 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__MutableItems_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 4)));
#line 920 "make_hlds_passes.m"
        {
#line 920 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_8_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_22, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 920 "make_hlds_passes.m"
          return;
        }
#line 918 "make_hlds_passes.m"
      }
#line 922 "make_hlds_passes.m"
    else
#line 923 "make_hlds_passes.m"
      {
#line 923 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 923 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25;
#line 923 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23;
#line 923 "make_hlds_passes.m"
      }
#line 906 "make_hlds_passes.m"
  }
#line 901 "make_hlds_passes.m"
}

#line 862 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_clause_8_p_0(
#line 862 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemClause_9,
#line 862 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 862 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28,
#line 862 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29,
#line 862 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30,
#line 862 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31,
#line 862 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32,
#line 862 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33)
#line 862 "make_hlds_passes.m"
{
#line 867 "make_hlds_passes.m"
  {
#line 867 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 0)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 1)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 2)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 3)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 4)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Body_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 5)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 6)));
#line 867 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 7)));
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40;
#line 867 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_45_45;

#line 892 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 882 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "make_hlds_passes.m"
        {
#line 872 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__Arity_22;
#line 872 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23;
#line 872 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__ClauseId_24;
#line 872 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_37_37;
#line 872 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;
#line 872 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 872 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_41_41;
#line 872 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__V_42_42;

#line 873 "make_hlds_passes.m"
          {
#line 873 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[3], hlds__make_hlds__make_hlds_passes__Args_16, &hlds__make_hlds__make_hlds_passes__Arity_22);
          }
#line 877 "make_hlds_passes.m"
          {
#line 877 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredName_14);
          }
#line 879 "make_hlds_passes.m"
          {
#line 879 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 879 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23));
#line 879 "make_hlds_passes.m"
          }
#line 879 "make_hlds_passes.m"
          {
#line 879 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_38_38));
#line 879 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_22));
#line 879 "make_hlds_passes.m"
          }
#line 878 "make_hlds_passes.m"
          {
#line 878 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ClauseId_24 = parse_tree__prog_out__simple_call_id_to_string_2_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__V_37_37);
          }
#line 880 "make_hlds_passes.m"
          {
#line 880 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "clause for ", hlds__make_hlds__make_hlds_passes__ClauseId_24);
          }
#line 880 "make_hlds_passes.m"
          {
#line 880 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 880 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_42_42));
#line 880 "make_hlds_passes.m"
          }
#line 880 "make_hlds_passes.m"
          {
#line 880 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_41_41));
#line 880 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "make_hlds_passes.m"
          }
#line 880 "make_hlds_passes.m"
          {
#line 880 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40);
          }
#line 872 "make_hlds_passes.m"
        }
#line 882 "make_hlds_passes.m"
      else
#line 883 "make_hlds_passes.m"
        {
#line 883 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_25 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 883 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__AllowExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_25, (MR_Integer) 0)));
#line 884 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___IsMutable_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_25, (MR_Integer) 1)));

#line 887 "make_hlds_passes.m"
#line 887 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__AllowExport_26) {
#line 887 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 887 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 886 "make_hlds_passes.m"
              {
#line 886 "make_hlds_passes.m"
              }
#line 887 "make_hlds_passes.m"
              break;
#line 887 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 888 "make_hlds_passes.m"
              {
#line 889 "make_hlds_passes.m"
                {
#line 889 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_clause\'/8", (MR_String) "bad introduced clause");
#line 889 "make_hlds_passes.m"
                  return;
                }
#line 888 "make_hlds_passes.m"
              }
#line 887 "make_hlds_passes.m"
              break;
#line 887 "make_hlds_passes.m"
          }
#line 883 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 883 "make_hlds_passes.m"
        }
#line 892 "make_hlds_passes.m"
    else
#line 892 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 897 "make_hlds_passes.m"
    {
#line 897 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SeqNum_21));
#line 897 "make_hlds_passes.m"
    }
#line 896 "make_hlds_passes.m"
    {
#line 896 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_18, hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__PredName_14, hlds__make_hlds__make_hlds_passes__Args_16, hlds__make_hlds__make_hlds_passes__Body_19, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 896 "make_hlds_passes.m"
      return;
    }
#line 867 "make_hlds_passes.m"
  }
#line 862 "make_hlds_passes.m"
}

#line 817 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_pass_3_8_p_0(
#line 817 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_9,
#line 817 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_10,
#line 817 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28,
#line 817 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29,
#line 817 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30,
#line 817 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31,
#line 817 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32,
#line 817 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33)
#line 817 "make_hlds_passes.m"
{
#line 823 "make_hlds_passes.m"
  {
#line 823 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 823 "make_hlds_passes.m"
#line 823 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10)) {
#line 823 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 823 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 823 "make_hlds_passes.m"
        {
#line 823 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemClause_14 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 0);

#line 824 "make_hlds_passes.m"
          {
#line 824 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_3_clause_8_p_0(hlds__make_hlds__make_hlds_passes__ItemClause_14, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 824 "make_hlds_passes.m"
            return;
          }
#line 823 "make_hlds_passes.m"
        }
#line 823 "make_hlds_passes.m"
        break;
#line 823 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 826 "make_hlds_passes.m"
        {
#line 826 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 1);

#line 827 "make_hlds_passes.m"
          {
#line 827 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_3_type_defn_8_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefn_15, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 827 "make_hlds_passes.m"
            return;
          }
#line 826 "make_hlds_passes.m"
        }
#line 823 "make_hlds_passes.m"
        break;
#line 823 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 850 "make_hlds_passes.m"
        {
#line 850 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 850 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 850 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 850 "make_hlds_passes.m"
        }
#line 823 "make_hlds_passes.m"
        break;
#line 823 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 823 "make_hlds_passes.m"
#line 823 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 0)))) {
#line 823 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 851 "make_hlds_passes.m"
            {
#line 851 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 851 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 851 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 851 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 830 "make_hlds_passes.m"
            {
#line 830 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 831 "make_hlds_passes.m"
              {
#line 831 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_pred_decl_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_16, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 831 "make_hlds_passes.m"
                return;
              }
#line 830 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 852 "make_hlds_passes.m"
            {
#line 852 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 852 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 852 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 852 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 834 "make_hlds_passes.m"
            {
#line 834 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPragma_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 835 "make_hlds_passes.m"
              {
#line 835 "make_hlds_passes.m"
                hlds__make_hlds__add_pragma__add_pass_3_pragma_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPragma_17, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 835 "make_hlds_passes.m"
                return;
              }
#line 834 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 837 "make_hlds_passes.m"
            {
#line 837 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPromise_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 838 "make_hlds_passes.m"
              {
#line 838 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_promise_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPromise_18, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 838 "make_hlds_passes.m"
                return;
              }
#line 837 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 853 "make_hlds_passes.m"
            {
#line 853 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 853 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 853 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 853 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 854 "make_hlds_passes.m"
            {
#line 854 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 854 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 854 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 854 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 840 "make_hlds_passes.m"
            {
#line 840 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 841 "make_hlds_passes.m"
              {
#line 841 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 841 "make_hlds_passes.m"
                return;
              }
#line 840 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 844 "make_hlds_passes.m"
            {
#line 844 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 845 "make_hlds_passes.m"
              {
#line 845 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0(hlds__make_hlds__make_hlds_passes__ItemFinalise_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
              }
#line 844 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 844 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 847 "make_hlds_passes.m"
            {
#line 847 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 847 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_68;

#line 1287 "make_hlds_passes.m"
              {
#line 1287 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__DefinedThisModule_68 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_9);
              }
#line 1292 "make_hlds_passes.m"
#line 1292 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_68) {
#line 1292 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 1293 "make_hlds_passes.m"
                  {
#line 1293 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 1293 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 1293 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 1293 "make_hlds_passes.m"
                  }
#line 1292 "make_hlds_passes.m"
                  break;
#line 1292 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 1290 "make_hlds_passes.m"
                  {
#line 1290 "make_hlds_passes.m"
                    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_21, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 1290 "make_hlds_passes.m"
                    return;
                  }
#line 1292 "make_hlds_passes.m"
                  break;
#line 1292 "make_hlds_passes.m"
              }
#line 847 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 855 "make_hlds_passes.m"
            {
#line 855 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28;
#line 855 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30;
#line 855 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 855 "make_hlds_passes.m"
            }
#line 823 "make_hlds_passes.m"
            break;
#line 823 "make_hlds_passes.m"
        }
#line 823 "make_hlds_passes.m"
        break;
#line 823 "make_hlds_passes.m"
    }
#line 823 "make_hlds_passes.m"
  }
#line 817 "make_hlds_passes.m"
}

#line 785 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(
#line 785 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_7,
#line 785 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 785 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22,
#line 785 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23,
#line 785 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 785 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 785 "make_hlds_passes.m"
{
#line 789 "make_hlds_passes.m"
  {
#line 789 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 789 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 789 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_21;
#line 789 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 790 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 791 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 796 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 793 "make_hlds_passes.m"
      {
#line 793 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 6)));
#line 792 "make_hlds_passes.m"
        MR_String hlds__make_hlds__make_hlds_passes___Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 0)));
#line 792 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 1)));
#line 792 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___InitTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 2)));
#line 792 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 3)));
#line 792 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___MutAttrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 4)));
#line 792 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 5)));
#line 792 "make_hlds_passes.m"
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 7)));

#line 794 "make_hlds_passes.m"
        {
#line 794 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[11]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
        }
#line 793 "make_hlds_passes.m"
      }
#line 796 "make_hlds_passes.m"
    else
#line 796 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24;
#line 806 "make_hlds_passes.m"
    {
#line 806 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_21 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_11);
    }
#line 810 "make_hlds_passes.m"
#line 810 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_21) {
#line 810 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 810 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 811 "make_hlds_passes.m"
        {
#line 811 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22;
#line 811 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 811 "make_hlds_passes.m"
        }
#line 810 "make_hlds_passes.m"
        break;
#line 810 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 809 "make_hlds_passes.m"
        {
#line 809 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_7, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
#line 809 "make_hlds_passes.m"
          return;
        }
#line 810 "make_hlds_passes.m"
        break;
#line 810 "make_hlds_passes.m"
    }
#line 789 "make_hlds_passes.m"
  }
#line 785 "make_hlds_passes.m"
}

#line 759 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_finalise_6_p_0(
#line 759 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_7,
#line 759 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 759 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
#line 759 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
#line 759 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
#line 759 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
#line 759 "make_hlds_passes.m"
{
#line 763 "make_hlds_passes.m"
  {
#line 763 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 763 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 2)));
#line 763 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 3)));
#line 763 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 766 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 0)));
#line 766 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 1)));
#line 766 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 4)));
#line 767 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 768 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 779 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 773 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "make_hlds_passes.m"
        {
#line 771 "make_hlds_passes.m"
          {
#line 771 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[9]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
#line 770 "make_hlds_passes.m"
        }
#line 773 "make_hlds_passes.m"
      else
#line 776 "make_hlds_passes.m"
        {
#line 777 "make_hlds_passes.m"
          {
#line 777 "make_hlds_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_finalise\'/6", (MR_String) "bad introduced finalise declaration");
#line 777 "make_hlds_passes.m"
            return;
          }
#line 776 "make_hlds_passes.m"
        }
#line 779 "make_hlds_passes.m"
    else
#line 779 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 763 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
#line 763 "make_hlds_passes.m"
  }
#line 759 "make_hlds_passes.m"
}

#line 726 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_initialise_6_p_0(
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_7,
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21,
#line 726 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22,
#line 726 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23,
#line 726 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24)
#line 726 "make_hlds_passes.m"
{
#line 730 "make_hlds_passes.m"
  {
#line 730 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 2)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 3)));
#line 730 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 733 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 0)));
#line 733 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 1)));
#line 733 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 4)));
#line 734 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 735 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 753 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 740 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "make_hlds_passes.m"
        {
#line 738 "make_hlds_passes.m"
          {
#line 738 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_2[7]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24);
          }
#line 737 "make_hlds_passes.m"
        }
#line 740 "make_hlds_passes.m"
      else
#line 741 "make_hlds_passes.m"
        {
#line 741 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_18 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_13), (MR_Integer) 1);
#line 741 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_18, (MR_Integer) 1)));
#line 742 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_18, (MR_Integer) 0)));

#line 747 "make_hlds_passes.m"
#line 747 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__IsMutable_20) {
#line 747 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 747 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 746 "make_hlds_passes.m"
              {
#line 746 "make_hlds_passes.m"
              }
#line 747 "make_hlds_passes.m"
              break;
#line 747 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 748 "make_hlds_passes.m"
              {
#line 749 "make_hlds_passes.m"
                {
#line 749 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_initialise\'/6", (MR_String) "bad introduced initialise declaration");
#line 749 "make_hlds_passes.m"
                  return;
                }
#line 748 "make_hlds_passes.m"
              }
#line 747 "make_hlds_passes.m"
              break;
#line 747 "make_hlds_passes.m"
          }
#line 741 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23;
#line 741 "make_hlds_passes.m"
        }
#line 753 "make_hlds_passes.m"
    else
#line 753 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23;
#line 730 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21;
#line 730 "make_hlds_passes.m"
  }
#line 726 "make_hlds_passes.m"
}

#line 705 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_instance_6_p_0(
#line 705 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInstance_7,
#line 705 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 705 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24,
#line 705 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25,
#line 705 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26,
#line 705 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27)
#line 705 "make_hlds_passes.m"
{
#line 709 "make_hlds_passes.m"
  {
#line 709 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 0)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 1)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 2)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 3)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 4)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 5)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstanceModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 6)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 7)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 709 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__BodyStatus_22;
#line 710 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 8)));
#line 712 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 716 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Body_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "make_hlds_passes.m"
      {
#line 715 "make_hlds_passes.m"
        hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_20, &hlds__make_hlds__make_hlds_passes__BodyStatus_22);
      }
#line 716 "make_hlds_passes.m"
    else
#line 718 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__BodyStatus_22 = hlds__make_hlds__make_hlds_passes__ImportStatus_20;
#line 720 "make_hlds_passes.m"
    {
#line 720 "make_hlds_passes.m"
      hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(hlds__make_hlds__make_hlds_passes__InstanceModuleName_17, hlds__make_hlds__make_hlds_passes__Constraints_14, hlds__make_hlds__make_hlds_passes__Name_11, hlds__make_hlds__make_hlds_passes__Types_12, hlds__make_hlds__make_hlds_passes__OriginalTypes_13, hlds__make_hlds__make_hlds_passes__Body_15, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__BodyStatus_22, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27);
#line 720 "make_hlds_passes.m"
      return;
    }
#line 709 "make_hlds_passes.m"
  }
#line 705 "make_hlds_passes.m"
}

#line 673 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_pred_decl_6_p_0(
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes___Status_8,
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 673 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 673 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36,
#line 673 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37)
#line 673 "make_hlds_passes.m"
{
#line 677 "make_hlds_passes.m"
  {
#line 677 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 677 "make_hlds_passes.m"
    {
#line 677 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37);
#line 677 "make_hlds_passes.m"
      return;
    }
#line 677 "make_hlds_passes.m"
  }
#line 673 "make_hlds_passes.m"
}

#line 660 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_2,
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 660 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 660 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 660 "make_hlds_passes.m"
{
#line 664 "make_hlds_passes.m"
  while (MR_TRUE)
#line 664 "make_hlds_passes.m"
    {
#line 664 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 664 "make_hlds_passes.m"
      {
#line 664 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 664 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "make_hlds_passes.m"
          {
#line 664 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 664 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 664 "make_hlds_passes.m"
          }
#line 664 "make_hlds_passes.m"
        else
#line 666 "make_hlds_passes.m"
          {
#line 666 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 666 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 666 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 666 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 667 "make_hlds_passes.m"
            {
#line 667 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_14, hlds__make_hlds__make_hlds_passes__Status_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
            }
#line 668 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 668 "make_hlds_passes.m"
            {
#line 668 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_15;
#line 668 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 668 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 668 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 668 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 668 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 668 "make_hlds_passes.m"
            }
#line 668 "make_hlds_passes.m"
            continue;
#line 666 "make_hlds_passes.m"
          }
#line 664 "make_hlds_passes.m"
      }
#line 664 "make_hlds_passes.m"
      break;
#line 664 "make_hlds_passes.m"
    }
#line 660 "make_hlds_passes.m"
}

#line 645 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_type_defn_6_p_0(
#line 645 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7,
#line 645 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 645 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 645 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 645 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22,
#line 645 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23)
#line 645 "make_hlds_passes.m"
{
#line 649 "make_hlds_passes.m"
  {
#line 649 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 649 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 2)));
#line 650 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 0)));
#line 650 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 1)));
#line 650 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 3)));
#line 650 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 4)));
#line 650 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 5)));
#line 656 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17;
#line 652 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18;

#line 652 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 652 "make_hlds_passes.m"
      {
#line 652 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 1)));
#line 652 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 2)));
#line 653 "make_hlds_passes.m"
        {
#line 653 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 4)));
#line 653 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 0)));
#line 653 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 1)));
#line 653 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 2)));
#line 653 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 3)));

#line 654 "make_hlds_passes.m"
          {
#line 654 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_19, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23);
#line 654 "make_hlds_passes.m"
            return;
          }
#line 653 "make_hlds_passes.m"
        }
#line 652 "make_hlds_passes.m"
      }
#line 652 "make_hlds_passes.m"
    else
#line 657 "make_hlds_passes.m"
      {
#line 657 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22;
#line 657 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20;
#line 657 "make_hlds_passes.m"
      }
#line 649 "make_hlds_passes.m"
  }
#line 645 "make_hlds_passes.m"
}

#line 605 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_6_p_0(
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_7,
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_8,
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25,
#line 605 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26,
#line 605 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27,
#line 605 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28)
#line 605 "make_hlds_passes.m"
{
#line 611 "make_hlds_passes.m"
  {
#line 611 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 611 "make_hlds_passes.m"
#line 611 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_8)) {
#line 611 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 611 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 632 "make_hlds_passes.m"
        {
#line 632 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 632 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 632 "make_hlds_passes.m"
        }
#line 611 "make_hlds_passes.m"
        break;
#line 611 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 611 "make_hlds_passes.m"
        {
#line 611 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_8), (MR_Integer) 1);
#line 611 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11, (MR_Integer) 2)));
#line 650 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___SymName_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11, (MR_Integer) 0)));
#line 650 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___TypeParams_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11, (MR_Integer) 1)));
#line 650 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11, (MR_Integer) 3)));
#line 650 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11, (MR_Integer) 4)));
#line 650 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_11, (MR_Integer) 5)));
#line 656 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80;
#line 652 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_81;

#line 652 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 652 "make_hlds_passes.m"
            {
#line 652 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_76, (MR_Integer) 1)));
#line 652 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_76, (MR_Integer) 2)));
#line 653 "make_hlds_passes.m"
              {
#line 653 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80, (MR_Integer) 4)));
#line 653 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80, (MR_Integer) 0)));
#line 653 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80, (MR_Integer) 1)));
#line 653 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80, (MR_Integer) 2)));
#line 653 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_80, (MR_Integer) 3)));

#line 654 "make_hlds_passes.m"
                {
#line 654 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_82, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 654 "make_hlds_passes.m"
                  return;
                }
#line 653 "make_hlds_passes.m"
              }
#line 652 "make_hlds_passes.m"
            }
#line 652 "make_hlds_passes.m"
          else
#line 657 "make_hlds_passes.m"
            {
#line 657 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 657 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 657 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
        }
#line 611 "make_hlds_passes.m"
        break;
#line 611 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 633 "make_hlds_passes.m"
        {
#line 633 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 633 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 633 "make_hlds_passes.m"
        }
#line 611 "make_hlds_passes.m"
        break;
#line 611 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 611 "make_hlds_passes.m"
#line 611 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 0)))) {
#line 611 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 634 "make_hlds_passes.m"
            {
#line 634 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 634 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 634 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 614 "make_hlds_passes.m"
            {
#line 614 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 615 "make_hlds_passes.m"
              {
#line 615 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 615 "make_hlds_passes.m"
                return;
              }
#line 614 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 635 "make_hlds_passes.m"
            {
#line 635 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 635 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 635 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 617 "make_hlds_passes.m"
            {
#line 617 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPragma_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 618 "make_hlds_passes.m"
              {
#line 618 "make_hlds_passes.m"
                hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPragma_13, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 618 "make_hlds_passes.m"
                return;
              }
#line 617 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 636 "make_hlds_passes.m"
            {
#line 636 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 636 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 636 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 637 "make_hlds_passes.m"
            {
#line 637 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 637 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 637 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 620 "make_hlds_passes.m"
            {
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInstance_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Name_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 0)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Types_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 1)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__OriginalTypes_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 2)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Constraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 3)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Body_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 4)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__VarSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 5)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__InstanceModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 6)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Context_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 7)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_7, (MR_Integer) 0)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__BodyStatus_62;
#line 710 "make_hlds_passes.m"
              MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_14, (MR_Integer) 8)));
#line 712 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_7, (MR_Integer) 1)));

#line 716 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__Body_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "make_hlds_passes.m"
                {
#line 715 "make_hlds_passes.m"
                  hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_60, &hlds__make_hlds__make_hlds_passes__BodyStatus_62);
                }
#line 716 "make_hlds_passes.m"
              else
#line 718 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__BodyStatus_62 = hlds__make_hlds__make_hlds_passes__ImportStatus_60;
#line 720 "make_hlds_passes.m"
              {
#line 720 "make_hlds_passes.m"
                hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(hlds__make_hlds__make_hlds_passes__InstanceModuleName_57, hlds__make_hlds__make_hlds_passes__Constraints_54, hlds__make_hlds__make_hlds_passes__Name_51, hlds__make_hlds__make_hlds_passes__Types_52, hlds__make_hlds__make_hlds_passes__OriginalTypes_53, hlds__make_hlds__make_hlds_passes__Body_55, hlds__make_hlds__make_hlds_passes__VarSet_56, hlds__make_hlds__make_hlds_passes__BodyStatus_62, hlds__make_hlds__make_hlds_passes__Context_58, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 720 "make_hlds_passes.m"
                return;
              }
#line 620 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 623 "make_hlds_passes.m"
            {
#line 623 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 624 "make_hlds_passes.m"
              {
#line 624 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_initialise_6_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_15, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 624 "make_hlds_passes.m"
                return;
              }
#line 623 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 626 "make_hlds_passes.m"
            {
#line 626 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 627 "make_hlds_passes.m"
              {
#line 627 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_finalise_6_p_0(hlds__make_hlds__make_hlds_passes__ItemFinalise_16, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 627 "make_hlds_passes.m"
                return;
              }
#line 626 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 629 "make_hlds_passes.m"
            {
#line 629 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 630 "make_hlds_passes.m"
              {
#line 630 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_17, hlds__make_hlds__make_hlds_passes__Status_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 630 "make_hlds_passes.m"
                return;
              }
#line 629 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 638 "make_hlds_passes.m"
            {
#line 638 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_25;
#line 638 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 638 "make_hlds_passes.m"
            }
#line 611 "make_hlds_passes.m"
            break;
#line 611 "make_hlds_passes.m"
        }
#line 611 "make_hlds_passes.m"
        break;
#line 611 "make_hlds_passes.m"
    }
#line 611 "make_hlds_passes.m"
  }
#line 605 "make_hlds_passes.m"
}

#line 586 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_mutable_6_p_0(
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_7,
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14,
#line 586 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15,
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16,
#line 586 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17)
#line 586 "make_hlds_passes.m"
{
#line 590 "make_hlds_passes.m"
  {
#line 590 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 590 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 590 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_13;
#line 593 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 594 "make_hlds_passes.m"
    {
#line 594 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_13 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_11);
    }
#line 598 "make_hlds_passes.m"
#line 598 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_13) {
#line 598 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 598 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 599 "make_hlds_passes.m"
        {
#line 599 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14;
#line 599 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16;
#line 599 "make_hlds_passes.m"
        }
#line 598 "make_hlds_passes.m"
        break;
#line 598 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 597 "make_hlds_passes.m"
        {
#line 597 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_7, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17);
#line 597 "make_hlds_passes.m"
          return;
        }
#line 598 "make_hlds_passes.m"
        break;
#line 598 "make_hlds_passes.m"
    }
#line 590 "make_hlds_passes.m"
  }
#line 586 "make_hlds_passes.m"
}

#line 565 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_mode_decl_6_p_0(
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_7,
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23,
#line 565 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24,
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25,
#line 565 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26)
#line 565 "make_hlds_passes.m"
{
#line 569 "make_hlds_passes.m"
  {
#line 569 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 569 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 0)));
#line 569 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 1)));
#line 569 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 2)));
#line 569 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 4)));
#line 569 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 5)));
#line 569 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 6)));
#line 570 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 3)));
#line 570 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 7)));

#line 577 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "make_hlds_passes.m"
      {
#line 581 "make_hlds_passes.m"
        {
#line 581 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_mode_decl\'/6", (MR_String) "no pred_or_func on mode declaration");
#line 581 "make_hlds_passes.m"
          return;
        }
#line 578 "make_hlds_passes.m"
      }
#line 577 "make_hlds_passes.m"
    else
#line 573 "make_hlds_passes.m"
      {
#line 573 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12, (MR_Integer) 0)));
#line 573 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 574 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));
#line 575 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_22_22;

#line 575 "make_hlds_passes.m"
        {
#line 575 "make_hlds_passes.m"
          hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__PredName_11, hlds__make_hlds__make_hlds_passes__Modes_13, hlds__make_hlds__make_hlds_passes__MaybeDet_15, hlds__make_hlds__make_hlds_passes__ImportStatus_20, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__PredOrFunc_19, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__V_22_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26);
        }
#line 573 "make_hlds_passes.m"
      }
#line 569 "make_hlds_passes.m"
  }
#line 565 "make_hlds_passes.m"
}

#line 537 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2(
#line 537 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 537 "make_hlds_passes.m"
{
#line 537 "make_hlds_passes.m"
  {
#line 537 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 537 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 537 "make_hlds_passes.m"
    {
#line 537 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__537__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 537 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 537 "make_hlds_passes.m"
  }
#line 537 "make_hlds_passes.m"
}

#line 536 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1(
#line 536 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 536 "make_hlds_passes.m"
{
#line 536 "make_hlds_passes.m"
  {
#line 536 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 536 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 536 "make_hlds_passes.m"
    {
#line 536 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__536__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 536 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 536 "make_hlds_passes.m"
  }
#line 536 "make_hlds_passes.m"
}

#line 526 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0(
#line 526 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 526 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 526 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32,
#line 526 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33,
#line 526 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 526 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 526 "make_hlds_passes.m"
{
#line 530 "make_hlds_passes.m"
  {
#line 530 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDetism_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ClassContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Markers_29;
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrigin_30;
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_36_36;
#line 530 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_41_41;
#line 531 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));
#line 559 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_31_31;

#line 536 "make_hlds_passes.m"
    {
#line 536 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 536 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0]));
#line 536 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1));
#line 536 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 536 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_14));
#line 536 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "make_hlds_passes.m"
    }
#line 536 "make_hlds_passes.m"
    {
#line 536 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_36_36, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_pred_decl\'/6", (MR_String) "WithType != no");
    }
#line 537 "make_hlds_passes.m"
    {
#line 537 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 537 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[1]));
#line 537 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2));
#line 537 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 537 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_15));
#line 537 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "make_hlds_passes.m"
    }
#line 537 "make_hlds_passes.m"
    {
#line 537 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_41_41, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_pred_decl\'/6", (MR_String) "WithInst != no");
    }
#line 542 "make_hlds_passes.m"
    {
#line 542 "make_hlds_passes.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__make_hlds_passes__Markers0_25);
    }
#line 553 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Markers_29 = hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 553 "make_hlds_passes.m"
    else
#line 544 "make_hlds_passes.m"
      {
#line 544 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_26 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 544 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_26, (MR_Integer) 1)));
#line 545 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_26, (MR_Integer) 0)));

#line 549 "make_hlds_passes.m"
#line 549 "make_hlds_passes.m"
        switch (hlds__make_hlds__make_hlds_passes__IsMutable_28) {
#line 549 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 549 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 547 "make_hlds_passes.m"
            {
#line 548 "make_hlds_passes.m"
              {
#line 548 "make_hlds_passes.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, hlds__make_hlds__make_hlds_passes__Markers0_25, &hlds__make_hlds__make_hlds_passes__Markers_29);
              }
#line 547 "make_hlds_passes.m"
            }
#line 549 "make_hlds_passes.m"
            break;
#line 549 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 551 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Markers_29 = hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 549 "make_hlds_passes.m"
            break;
#line 549 "make_hlds_passes.m"
        }
#line 544 "make_hlds_passes.m"
      }
#line 558 "make_hlds_passes.m"
    {
#line 558 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredOrigin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 558 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredName_11));
#line 558 "make_hlds_passes.m"
    }
#line 559 "make_hlds_passes.m"
    {
#line 559 "make_hlds_passes.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__make_hlds_passes__PredOrigin_30, hlds__make_hlds__make_hlds_passes__TypeVarSet_18, hlds__make_hlds__make_hlds_passes__InstVarSet_19, hlds__make_hlds__make_hlds_passes__ExistQVars_20, hlds__make_hlds__make_hlds_passes__PredOrFunc_12, hlds__make_hlds__make_hlds_passes__PredName_11, hlds__make_hlds__make_hlds_passes__TypesAndModes_13, hlds__make_hlds__make_hlds_passes__MaybeDetism_16, hlds__make_hlds__make_hlds_passes__Purity_21, hlds__make_hlds__make_hlds_passes__ClassContext_22, hlds__make_hlds__make_hlds_passes__Markers_29, hlds__make_hlds__make_hlds_passes__Context_23, hlds__make_hlds__make_hlds_passes__Status_8, &hlds__make_hlds__make_hlds_passes__V_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
    }
#line 530 "make_hlds_passes.m"
  }
#line 526 "make_hlds_passes.m"
}

#line 513 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_6_p_0(
#line 513 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 513 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_2,
#line 513 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 513 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 513 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 513 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 513 "make_hlds_passes.m"
{
#line 517 "make_hlds_passes.m"
  while (MR_TRUE)
#line 517 "make_hlds_passes.m"
    {
#line 517 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 517 "make_hlds_passes.m"
      {
#line 517 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 517 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "make_hlds_passes.m"
          {
#line 517 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 517 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 517 "make_hlds_passes.m"
          }
#line 517 "make_hlds_passes.m"
        else
#line 519 "make_hlds_passes.m"
          {
#line 519 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 519 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;
#line 519 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_2, (MR_Integer) 0)));
#line 519 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_37;
#line 593 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_2, (MR_Integer) 1)));

#line 594 "make_hlds_passes.m"
            {
#line 594 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__DefinedThisModule_37 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_35);
            }
#line 598 "make_hlds_passes.m"
#line 598 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_37) {
#line 598 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 598 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 599 "make_hlds_passes.m"
                {
#line 599 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 599 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 599 "make_hlds_passes.m"
                }
#line 598 "make_hlds_passes.m"
                break;
#line 598 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 597 "make_hlds_passes.m"
                {
#line 597 "make_hlds_passes.m"
                  hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_14, hlds__make_hlds__make_hlds_passes__Status_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
                }
#line 598 "make_hlds_passes.m"
                break;
#line 598 "make_hlds_passes.m"
            }
#line 521 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 521 "make_hlds_passes.m"
            {
#line 521 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_15;
#line 521 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 521 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 521 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 521 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 521 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 521 "make_hlds_passes.m"
            }
#line 521 "make_hlds_passes.m"
            continue;
#line 519 "make_hlds_passes.m"
          }
#line 517 "make_hlds_passes.m"
      }
#line 517 "make_hlds_passes.m"
      break;
#line 517 "make_hlds_passes.m"
    }
#line 513 "make_hlds_passes.m"
}

#line 485 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_type_defn_6_p_0(
#line 485 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7,
#line 485 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 485 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 485 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 485 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22,
#line 485 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23)
#line 485 "make_hlds_passes.m"
{
#line 489 "make_hlds_passes.m"
  {
#line 489 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 0)));
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 1)));
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 2)));
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 3)));
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 4)));
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26;
#line 489 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 499 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 5)));
#line 507 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17;
#line 501 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18;

#line 501 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 501 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 501 "make_hlds_passes.m"
      {
#line 501 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 1)));
#line 501 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 2)));
#line 503 "make_hlds_passes.m"
        {
#line 503 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_19;
#line 503 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24;
#line 503 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25;
#line 504 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_30_30;
#line 504 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_31_31;
#line 504 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 504 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_33_33;

#line 502 "make_hlds_passes.m"
          {
#line 502 "make_hlds_passes.m"
            hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_10_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_14, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__TypeParams_12, hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, hlds__make_hlds__make_hlds_passes__Context_15, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25);
          }
#line 504 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 0)));
#line 504 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 1)));
#line 504 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 2)));
#line 504 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 3)));
#line 504 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__MutableItems_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 4)));
#line 505 "make_hlds_passes.m"
          {
#line 505 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_19, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
          }
#line 503 "make_hlds_passes.m"
        }
#line 501 "make_hlds_passes.m"
      }
#line 501 "make_hlds_passes.m"
    else
#line 508 "make_hlds_passes.m"
      {
#line 508 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22;
#line 508 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20;
#line 508 "make_hlds_passes.m"
      }
#line 510 "make_hlds_passes.m"
    {
#line 510 "make_hlds_passes.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_14, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__TypeParams_12, hlds__make_hlds__make_hlds_passes__TypeDefn_13, hlds__make_hlds__make_hlds_passes__Context_15, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23);
#line 510 "make_hlds_passes.m"
      return;
    }
#line 489 "make_hlds_passes.m"
  }
#line 485 "make_hlds_passes.m"
}

#line 459 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_pass_1_4_p_0(
#line 459 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_5,
#line 459 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Avail_6,
#line 459 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_10,
#line 459 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_11)
#line 459 "make_hlds_passes.m"
{
#line 462 "make_hlds_passes.m"
  {
#line 462 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 462 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_8;
#line 462 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedInThisModule_9;

#line 463 "make_hlds_passes.m"
    {
#line 463 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__ModuleName_8 = parse_tree__prog_item__item_avail_module_name_1_f_0(hlds__make_hlds__make_hlds_passes__Avail_6);
    }
#line 464 "make_hlds_passes.m"
    {
#line 464 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedInThisModule_9 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_5);
    }
#line 468 "make_hlds_passes.m"
#line 468 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedInThisModule_9) {
#line 468 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 468 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 478 "make_hlds_passes.m"
        {
#line 471 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_12_12;

#line 472 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Status_5)) == (MR_mktag((MR_Integer) 2)));
#line 472 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 472 "make_hlds_passes.m"
            {
#line 472 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__Status_5, (MR_Integer) 0)));
#line 472 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_12_12 == (MR_Integer) 3);
#line 472 "make_hlds_passes.m"
            }
#line 478 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 474 "make_hlds_passes.m"
            {
#line 474 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_13_13;

#line 474 "make_hlds_passes.m"
              {
#line 474 "make_hlds_passes.m"
                hlds__hlds_module__module_add_imported_module_name_4_p_0(hlds__make_hlds__make_hlds_passes__Status_5, hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_13_13);
              }
#line 477 "make_hlds_passes.m"
              {
#line 477 "make_hlds_passes.m"
                hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_13_13, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_11);
#line 477 "make_hlds_passes.m"
                return;
              }
#line 474 "make_hlds_passes.m"
            }
#line 478 "make_hlds_passes.m"
          else
#line 479 "make_hlds_passes.m"
            {
#line 479 "make_hlds_passes.m"
              hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_11);
#line 479 "make_hlds_passes.m"
              return;
            }
#line 478 "make_hlds_passes.m"
        }
#line 468 "make_hlds_passes.m"
        break;
#line 468 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 467 "make_hlds_passes.m"
        {
#line 467 "make_hlds_passes.m"
          hlds__hlds_module__module_add_imported_module_name_4_p_0(hlds__make_hlds__make_hlds_passes__Status_5, hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_11);
#line 467 "make_hlds_passes.m"
          return;
        }
#line 468 "make_hlds_passes.m"
        break;
#line 468 "make_hlds_passes.m"
    }
#line 462 "make_hlds_passes.m"
  }
#line 459 "make_hlds_passes.m"
}

#line 401 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_8_p_0(
#line 401 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_9,
#line 401 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_10,
#line 401 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29,
#line 401 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30,
#line 401 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31,
#line 401 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32,
#line 401 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33,
#line 401 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34)
#line 401 "make_hlds_passes.m"
{
#line 409 "make_hlds_passes.m"
  {
#line 409 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 409 "make_hlds_passes.m"
#line 409 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10)) {
#line 409 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 409 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 440 "make_hlds_passes.m"
        {
#line 440 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 440 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 440 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 440 "make_hlds_passes.m"
        }
#line 409 "make_hlds_passes.m"
        break;
#line 409 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 409 "make_hlds_passes.m"
        {
#line 409 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_14 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 1);

#line 410 "make_hlds_passes.m"
          {
#line 410 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_1_type_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_14, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
          }
#line 409 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 409 "make_hlds_passes.m"
        }
#line 409 "make_hlds_passes.m"
        break;
#line 409 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 420 "make_hlds_passes.m"
        {
#line 420 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 2);
#line 420 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__FoundError_16;

#line 414 "make_hlds_passes.m"
          {
#line 414 "make_hlds_passes.m"
            hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_15, &hlds__make_hlds__make_hlds_passes__FoundError_16, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
          }
#line 424 "make_hlds_passes.m"
#line 424 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__FoundError_16) {
#line 424 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 424 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 425 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 424 "make_hlds_passes.m"
              break;
#line 424 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 423 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = (MR_Integer) 1;
#line 424 "make_hlds_passes.m"
              break;
#line 424 "make_hlds_passes.m"
          }
#line 420 "make_hlds_passes.m"
        }
#line 409 "make_hlds_passes.m"
        break;
#line 409 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 409 "make_hlds_passes.m"
#line 409 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 0)))) {
#line 409 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 420 "make_hlds_passes.m"
            {
#line 420 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 420 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__FoundError_50;

#line 418 "make_hlds_passes.m"
              {
#line 418 "make_hlds_passes.m"
                hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_17, &hlds__make_hlds__make_hlds_passes__FoundError_50, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
              }
#line 424 "make_hlds_passes.m"
#line 424 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__FoundError_50) {
#line 424 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 424 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 425 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 424 "make_hlds_passes.m"
                  break;
#line 424 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 423 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = (MR_Integer) 1;
#line 424 "make_hlds_passes.m"
                  break;
#line 424 "make_hlds_passes.m"
              }
#line 420 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 428 "make_hlds_passes.m"
            {
#line 428 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 429 "make_hlds_passes.m"
              {
#line 429 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_18, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
              }
#line 428 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 428 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 431 "make_hlds_passes.m"
            {
#line 431 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 432 "make_hlds_passes.m"
              {
#line 432 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_mode_decl_6_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDecl_19, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
              }
#line 431 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 431 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 441 "make_hlds_passes.m"
            {
#line 441 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 441 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 441 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 441 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 442 "make_hlds_passes.m"
            {
#line 442 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 442 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 442 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 442 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 434 "make_hlds_passes.m"
            {
#line 434 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeClass_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 435 "make_hlds_passes.m"
              {
#line 435 "make_hlds_passes.m"
                hlds__make_hlds__add_class__module_add_class_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeClass_20, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
              }
#line 434 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 434 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 443 "make_hlds_passes.m"
            {
#line 443 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 443 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 443 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 443 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 444 "make_hlds_passes.m"
            {
#line 444 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 444 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 444 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 444 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 445 "make_hlds_passes.m"
            {
#line 445 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 445 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 445 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 445 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 437 "make_hlds_passes.m"
            {
#line 437 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 437 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_9, (MR_Integer) 0)));
#line 437 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_61;
#line 593 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_9, (MR_Integer) 1)));

#line 594 "make_hlds_passes.m"
              {
#line 594 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__DefinedThisModule_61 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_59);
              }
#line 598 "make_hlds_passes.m"
#line 598 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_61) {
#line 598 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 598 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 599 "make_hlds_passes.m"
                  {
#line 599 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 599 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 599 "make_hlds_passes.m"
                  }
#line 598 "make_hlds_passes.m"
                  break;
#line 598 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 597 "make_hlds_passes.m"
                  {
#line 597 "make_hlds_passes.m"
                    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_21, hlds__make_hlds__make_hlds_passes__Status_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34);
                  }
#line 598 "make_hlds_passes.m"
                  break;
#line 598 "make_hlds_passes.m"
              }
#line 437 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 437 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 446 "make_hlds_passes.m"
            {
#line 446 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_30 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_29;
#line 446 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_31;
#line 446 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_33;
#line 446 "make_hlds_passes.m"
            }
#line 409 "make_hlds_passes.m"
            break;
#line 409 "make_hlds_passes.m"
        }
#line 409 "make_hlds_passes.m"
        break;
#line 409 "make_hlds_passes.m"
    }
#line 409 "make_hlds_passes.m"
  }
#line 401 "make_hlds_passes.m"
}

#line 387 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(
#line 387 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_1,
#line 387 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 387 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 387 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 387 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 387 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 387 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 387 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 387 "make_hlds_passes.m"
{
#line 391 "make_hlds_passes.m"
  while (MR_TRUE)
#line 391 "make_hlds_passes.m"
    {
#line 391 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 391 "make_hlds_passes.m"
      {
#line 391 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 391 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "make_hlds_passes.m"
          {
#line 391 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 391 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 391 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 391 "make_hlds_passes.m"
          }
#line 391 "make_hlds_passes.m"
        else
#line 392 "make_hlds_passes.m"
          {
#line 392 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 392 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 392 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 393 "make_hlds_passes.m"
            {
#line 393 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__Status_1, hlds__make_hlds__make_hlds_passes__Item_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
            }
#line 394 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 394 "make_hlds_passes.m"
            {
#line 394 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__Items_21;
#line 394 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 394 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 394 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 394 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 394 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 394 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 394 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 394 "make_hlds_passes.m"
            }
#line 394 "make_hlds_passes.m"
            continue;
#line 392 "make_hlds_passes.m"
          }
#line 391 "make_hlds_passes.m"
      }
#line 391 "make_hlds_passes.m"
      break;
#line 391 "make_hlds_passes.m"
    }
#line 387 "make_hlds_passes.m"
}

#line 373 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_blocks_pass_3_8_p_0(
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_for_MS_45,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 373 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 373 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 373 "make_hlds_passes.m"
{
#line 378 "make_hlds_passes.m"
  while (MR_TRUE)
#line 378 "make_hlds_passes.m"
    {
#line 378 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 378 "make_hlds_passes.m"
      {
#line 378 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 378 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "make_hlds_passes.m"
          {
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 378 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 378 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
        else
#line 380 "make_hlds_passes.m"
          {
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__Section_25 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 0));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 380 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 381 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 382 "make_hlds_passes.m"
            void MR_CALL (* hlds__make_hlds__make_hlds_passes__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_Status_30;
#line 383 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___NeedQualifier_32;

#line 382 "make_hlds_passes.m"
            {
#line 382 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__func_0(((MR_Box) hlds__make_hlds__make_hlds_passes__HeadVar__2_2), hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__conv1_Status_30);
            }
#line 382 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Status_30 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_Status_30);
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 383 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes___NeedQualifier_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 384 "make_hlds_passes.m"
            {
#line 384 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_items_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_31, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41);
            }
#line 385 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 385 "make_hlds_passes.m"
            {
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_39_39;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_40_40;
#line 385 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_41_41;

#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 385 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 385 "make_hlds_passes.m"
            }
#line 385 "make_hlds_passes.m"
            continue;
#line 380 "make_hlds_passes.m"
          }
#line 378 "make_hlds_passes.m"
      }
#line 378 "make_hlds_passes.m"
      break;
#line 378 "make_hlds_passes.m"
    }
#line 373 "make_hlds_passes.m"
}

#line 362 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(
#line 362 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_1,
#line 362 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 362 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 362 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 362 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 362 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 362 "make_hlds_passes.m"
{
#line 366 "make_hlds_passes.m"
  while (MR_TRUE)
#line 366 "make_hlds_passes.m"
    {
#line 366 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 366 "make_hlds_passes.m"
      {
#line 366 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 366 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "make_hlds_passes.m"
          {
#line 366 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 366 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 366 "make_hlds_passes.m"
          }
#line 366 "make_hlds_passes.m"
        else
#line 367 "make_hlds_passes.m"
          {
#line 367 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 367 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 368 "make_hlds_passes.m"
            {
#line 368 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_1, hlds__make_hlds__make_hlds_passes__Item_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
            }
#line 369 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 369 "make_hlds_passes.m"
            {
#line 369 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__Items_16;
#line 369 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 369 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 369 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 369 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 369 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 369 "make_hlds_passes.m"
            }
#line 369 "make_hlds_passes.m"
            continue;
#line 367 "make_hlds_passes.m"
          }
#line 366 "make_hlds_passes.m"
      }
#line 366 "make_hlds_passes.m"
      break;
#line 366 "make_hlds_passes.m"
    }
#line 362 "make_hlds_passes.m"
}

#line 349 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_2_6_p_0(
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_for_MS_33,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 349 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 349 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 349 "make_hlds_passes.m"
{
#line 354 "make_hlds_passes.m"
  while (MR_TRUE)
#line 354 "make_hlds_passes.m"
    {
#line 354 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 354 "make_hlds_passes.m"
      {
#line 354 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 354 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "make_hlds_passes.m"
          {
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 354 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 354 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
        else
#line 356 "make_hlds_passes.m"
          {
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__Section_19 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 0));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 4)));
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_24;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 356 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 1)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 2)));
#line 357 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_14, (MR_Integer) 3)));
#line 358 "make_hlds_passes.m"
            void MR_CALL (* hlds__make_hlds__make_hlds_passes__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_Status_24;

#line 358 "make_hlds_passes.m"
            {
#line 358 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__func_0(((MR_Box) hlds__make_hlds__make_hlds_passes__HeadVar__2_2), hlds__make_hlds__make_hlds_passes__Section_19, &hlds__make_hlds__make_hlds_passes__conv1_Status_24);
            }
#line 358 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Status_24 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_Status_24);
#line 359 "make_hlds_passes.m"
            {
#line 359 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Status_24, hlds__make_hlds__make_hlds_passes__Items_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30);
            }
#line 360 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 360 "make_hlds_passes.m"
            {
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_15;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29_29;
#line 360 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_30_30;

#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 360 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 360 "make_hlds_passes.m"
            }
#line 360 "make_hlds_passes.m"
            continue;
#line 356 "make_hlds_passes.m"
          }
#line 354 "make_hlds_passes.m"
      }
#line 354 "make_hlds_passes.m"
      break;
#line 354 "make_hlds_passes.m"
    }
#line 349 "make_hlds_passes.m"
}

#line 333 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(
#line 333 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_1,
#line 333 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 333 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 333 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 333 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 333 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 333 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 333 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 333 "make_hlds_passes.m"
{
#line 338 "make_hlds_passes.m"
  while (MR_TRUE)
#line 338 "make_hlds_passes.m"
    {
#line 338 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 338 "make_hlds_passes.m"
      {
#line 338 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 338 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "make_hlds_passes.m"
          {
#line 339 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 339 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 339 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 338 "make_hlds_passes.m"
          }
#line 338 "make_hlds_passes.m"
        else
#line 341 "make_hlds_passes.m"
          {
#line 341 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31_31;
#line 341 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32_32;
#line 341 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 342 "make_hlds_passes.m"
            {
#line 342 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_1, hlds__make_hlds__make_hlds_passes__Item_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
            }
#line 344 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 344 "make_hlds_passes.m"
            {
#line 344 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__Items_21;
#line 344 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_31_31;
#line 344 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_32_32;
#line 344 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 344 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 344 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 344 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 344 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 344 "make_hlds_passes.m"
            }
#line 344 "make_hlds_passes.m"
            continue;
#line 341 "make_hlds_passes.m"
          }
#line 338 "make_hlds_passes.m"
      }
#line 338 "make_hlds_passes.m"
      break;
#line 338 "make_hlds_passes.m"
    }
#line 333 "make_hlds_passes.m"
}

#line 327 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1_8_p_0_1(
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 327 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 327 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 327 "make_hlds_passes.m"
{
#line 327 "make_hlds_passes.m"
  {
#line 327 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 327 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_ModuleInfo_11;

#line 327 "make_hlds_passes.m"
    {
#line 327 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_pass_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_ModuleInfo_11);
    }
#line 327 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_ModuleInfo_11));
#line 327 "make_hlds_passes.m"
  }
#line 327 "make_hlds_passes.m"
}

#line 314 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1_8_p_0(
#line 314 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_for_MS_47,
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
            MR_Word hlds__make_hlds__make_hlds_passes__Avails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 3)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 4)));
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Status_30;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_31;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 323 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 1)));
#line 324 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___Incls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemBlock_19, (MR_Integer) 2)));
#line 325 "make_hlds_passes.m"
            void MR_CALL (* hlds__make_hlds__make_hlds_passes__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv1_Status_30;
#line 326 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 327 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_ModuleInfo_40_40;

#line 325 "make_hlds_passes.m"
            {
#line 325 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__func_0(((MR_Box) hlds__make_hlds__make_hlds_passes__HeadVar__2_2), hlds__make_hlds__make_hlds_passes__Section_25, &hlds__make_hlds__make_hlds_passes__conv1_Status_30);
            }
#line 325 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Status_30 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_Status_30);
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ImportStatus_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 0)));
#line 326 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_30, (MR_Integer) 1)));
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_block_decls_pass_1_8_p_0_1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "make_hlds_passes.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_39_39, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ImportStatus_31));
#line 327 "make_hlds_passes.m"
            }
#line 327 "make_hlds_passes.m"
            {
#line 327 "make_hlds_passes.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__Avails_28, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5)), &hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_ModuleInfo_40_40);
            }
#line 327 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_ModuleInfo_40_40);
#line 328 "make_hlds_passes.m"
            {
#line 328 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Status_30, hlds__make_hlds__make_hlds_passes__Items_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40_40, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43);
            }
#line 330 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 330 "make_hlds_passes.m"
            {
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__ItemBlocks_20;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_41_41;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 330 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_43_43;

#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 330 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 330 "make_hlds_passes.m"
            }
#line 330 "make_hlds_passes.m"
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
