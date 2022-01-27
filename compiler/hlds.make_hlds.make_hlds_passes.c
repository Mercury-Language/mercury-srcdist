/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
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



#line 1201 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s {
#line 1205 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded;
#line 1239 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214;
#line 1239 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23;
#line 1239 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24;
#line 1239 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26;
#line 1249 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215;
#line 1249 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216;
#line 1252 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32;
#line 1276 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1;
#line 1276 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170;
#line 1276 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171;
#line 1276 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172;
#line 1276 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173;
#line 1276 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174;
#line 1276 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175;
#line 1277 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170;
#line 1201 "make_hlds_passes.m"
};

#line 1082 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s {
#line 1086 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24;
#line 1125 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195;
#line 1125 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196;
#line 1128 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30;
#line 1152 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1;
#line 1152 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150;
#line 1152 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151;
#line 1152 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152;
#line 1152 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153;
#line 1152 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154;
#line 1152 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155;
#line 1153 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150;
#line 1082 "make_hlds_passes.m"
};


#line 278 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 281 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 284 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 287 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 290 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 293 "hlds.make_hlds.make_hlds_passes.c"
static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__field_types_item_status_0_0[2];

#line 296 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0;

#line 299 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_stag_ordered_item_status_0_0[1];

#line 302 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuPtagLayout hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_ptag_ordered_item_status_0[1];

#line 305 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_name_ordered_item_status_0[1];

#line 308 "hlds.make_hlds.make_hlds_passes.c"
static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_item_status_0[1];

#line 311 "hlds.make_hlds.make_hlds_passes.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____item_status_0_0_10001(
#line 314 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 316 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

#line 319 "hlds.make_hlds.make_hlds_passes.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____item_status_0_0_10001(
#line 322 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 324 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 326 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 528 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__528__1_2_p_0(
#line 528 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15,
#line 528 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_45);

#line 527 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__527__1_2_p_0(
#line 527 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_14,
#line 527 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_40);

#line 1249 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(
#line 1249 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1252 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3(
#line 1252 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1249 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(
#line 1249 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1249 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(
#line 1249 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1276 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(
#line 1276 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1277 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7(
#line 1277 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1276 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(
#line 1276 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1276 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(
#line 1276 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1125 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(
#line 1125 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1128 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3(
#line 1128 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1125 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(
#line 1125 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1125 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(
#line 1125 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1152 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(
#line 1152 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1153 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7(
#line 1153 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1152 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(
#line 1152 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1152 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(
#line 1152 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 884 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_module_defn_9_p_0_1(
#line 884 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 884 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 884 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

#line 528 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2(
#line 528 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 527 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1(
#line 527 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 149 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
#line 149 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 149 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 149 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 149 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 134 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 134 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 134 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 134 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8);

#line 126 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 126 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[63][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][8];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[2][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[1][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][7];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[63][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: declaration not yet implemented."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration requires arity."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__make_hlds_passes_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[13])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[13])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[13])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has invalid signature."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "used in initialise declaration"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "matches multiple pred declarations."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration has invalid signature."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[4])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[6])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[11])))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[1][6] = {
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][7] = {
  /* row 0 */
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



#line 975 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 984 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 993 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1001 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1009 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1017 "hlds.make_hlds.make_hlds_passes.c"
static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__field_types_item_status_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

#line 1023 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0 = {
  (MR_String) "item_status",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__field_types_item_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1038 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_stag_ordered_item_status_0_0[1] = {
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0
};

#line 1043 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuPtagLayout hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_ptag_ordered_item_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_stag_ordered_item_status_0_0
  }
};

#line 1052 "hlds.make_hlds.make_hlds_passes.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_name_ordered_item_status_0[1] = {
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_functor_desc_item_status_0_0
};

#line 1057 "hlds.make_hlds.make_hlds_passes.c"
static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_item_status_0[1] = {
  (MR_Integer) 0
};

#line 1062 "hlds.make_hlds.make_hlds_passes.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes____Unify____item_status_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes____Compare____item_status_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes",
  (MR_String) "item_status",
  {     hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_name_ordered_item_status_0 },
  {     hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__du_ptag_ordered_item_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_item_status_0
};

#line 1079 "hlds.make_hlds.make_hlds_passes.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____item_status_0_0_10001(
#line 1082 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1084 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
#line 1086 "hlds.make_hlds.make_hlds_passes.c"
{
#line 1088 "hlds.make_hlds.make_hlds_passes.c"
  {
#line 1090 "hlds.make_hlds.make_hlds_passes.c"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 1093 "hlds.make_hlds.make_hlds_passes.c"
    {
#line 1095 "hlds.make_hlds.make_hlds_passes.c"
      hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes____Unify____item_status_0_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2));
    }
#line 1098 "hlds.make_hlds.make_hlds_passes.c"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 1100 "hlds.make_hlds.make_hlds_passes.c"
  }
#line 1102 "hlds.make_hlds.make_hlds_passes.c"
}

#line 1105 "hlds.make_hlds.make_hlds_passes.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____item_status_0_0_10001(
#line 1108 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1110 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 1112 "hlds.make_hlds.make_hlds_passes.c"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 1114 "hlds.make_hlds.make_hlds_passes.c"
{
#line 1116 "hlds.make_hlds.make_hlds_passes.c"
  {
#line 1118 "hlds.make_hlds.make_hlds_passes.c"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_HeadVar__1_1;

#line 1121 "hlds.make_hlds.make_hlds_passes.c"
    {
#line 1123 "hlds.make_hlds.make_hlds_passes.c"
      hlds__make_hlds__make_hlds_passes____Compare____item_status_0_0(&hlds__make_hlds__make_hlds_passes__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3));
    }
#line 1126 "hlds.make_hlds.make_hlds_passes.c"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_HeadVar__1_1));
#line 1128 "hlds.make_hlds.make_hlds_passes.c"
  }
#line 1130 "hlds.make_hlds.make_hlds_passes.c"
}

#line 1064 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_9,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 1064 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22,
#line 1064 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 1064 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 1064 "make_hlds_passes.m"
{
#line 1070 "make_hlds_passes.m"
  {
#line 1070 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1070 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 0)));
#line 1070 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 1)));
#line 1070 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 2)));
#line 1070 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 3)));
#line 1071 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_9, (MR_Integer) 4)));

#line 1077 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Origin_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1075 "make_hlds_passes.m"
      {
#line 1075 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__Arity_15, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
      }
#line 1077 "make_hlds_passes.m"
    else
#line 1078 "make_hlds_passes.m"
      {
#line 1079 "make_hlds_passes.m"
        {
#line 1079 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_initialise\'/8", (MR_String) "bad introduced initialise declaration");
#line 1079 "make_hlds_passes.m"
          return;
        }
#line 1078 "make_hlds_passes.m"
      }
#line 1070 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22;
#line 1070 "make_hlds_passes.m"
  }
#line 1064 "make_hlds_passes.m"
}

#line 675 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 675 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36,
#line 675 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37)
#line 675 "make_hlds_passes.m"
{
#line 679 "make_hlds_passes.m"
  {
#line 679 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 679 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 679 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 679 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Origin_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___InstVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeDet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ClassContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 680 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 680 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));

#line 686 "make_hlds_passes.m"
#line 686 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_12) {
#line 686 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 686 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 687 "make_hlds_passes.m"
        {
#line 687 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__Arity_25;
#line 687 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_26;
#line 687 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__PredTable0_27;
#line 687 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__PredIds_28;

#line 688 "make_hlds_passes.m"
          {
#line 688 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_13, &hlds__make_hlds__make_hlds_passes__Arity_25);
          }
#line 689 "make_hlds_passes.m"
          {
#line 689 "make_hlds_passes.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_26, hlds__make_hlds__make_hlds_passes__Arity_25);
          }
#line 690 "make_hlds_passes.m"
          {
#line 690 "make_hlds_passes.m"
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__make_hlds_passes__PredTable0_27);
          }
#line 691 "make_hlds_passes.m"
          {
#line 691 "make_hlds_passes.m"
            hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_27, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__FuncArity_26, &hlds__make_hlds__make_hlds_passes__PredIds_28);
          }
#line 699 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__PredIds_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "make_hlds_passes.m"
            {
#line 701 "make_hlds_passes.m"
              {
#line 701 "make_hlds_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_pred_decl\'/6", (MR_String) "can\'t find func declaration");
#line 701 "make_hlds_passes.m"
                return;
              }
#line 700 "make_hlds_passes.m"
            }
#line 699 "make_hlds_passes.m"
          else
#line 694 "make_hlds_passes.m"
            {
#line 694 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Preds0_31;
#line 694 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Preds_32;
#line 694 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__PredTable_33;

#line 695 "make_hlds_passes.m"
              {
#line 695 "make_hlds_passes.m"
                hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_27, &hlds__make_hlds__make_hlds_passes__Preds0_31);
              }
#line 696 "make_hlds_passes.m"
              {
#line 696 "make_hlds_passes.m"
                check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(hlds__make_hlds__make_hlds_passes__PredIds_28, hlds__make_hlds__make_hlds_passes__Preds0_31, &hlds__make_hlds__make_hlds_passes__Preds_32);
              }
#line 697 "make_hlds_passes.m"
              {
#line 697 "make_hlds_passes.m"
                hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_32, hlds__make_hlds__make_hlds_passes__PredTable0_27, &hlds__make_hlds__make_hlds_passes__PredTable_33);
              }
#line 698 "make_hlds_passes.m"
              {
#line 698 "make_hlds_passes.m"
                hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__make_hlds_passes__PredTable_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35);
              }
#line 694 "make_hlds_passes.m"
            }
#line 687 "make_hlds_passes.m"
        }
#line 686 "make_hlds_passes.m"
        break;
#line 686 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 685 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 686 "make_hlds_passes.m"
        break;
#line 686 "make_hlds_passes.m"
    }
#line 679 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36;
#line 679 "make_hlds_passes.m"
  }
#line 675 "make_hlds_passes.m"
}

#line 528 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__528__1_2_p_0(
#line 528 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15,
#line 528 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_45)
#line 528 "make_hlds_passes.m"
{
#line 528 "make_hlds_passes.m"
  {
#line 528 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 528 "make_hlds_passes.m"
    {
#line 528 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_15)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_45)));
    }
#line 528 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 528 "make_hlds_passes.m"
  }
#line 528 "make_hlds_passes.m"
}

#line 527 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__527__1_2_p_0(
#line 527 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_14,
#line 527 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_40)
#line 527 "make_hlds_passes.m"
{
#line 527 "make_hlds_passes.m"
  {
#line 527 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 527 "make_hlds_passes.m"
    {
#line 527 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_14)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_40)));
    }
#line 527 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 527 "make_hlds_passes.m"
  }
#line 527 "make_hlds_passes.m"
}

#line 28 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____item_status_0_0(
#line 28 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 28 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 28 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__3_3)
#line 28 "make_hlds_passes.m"
{
#line 28 "make_hlds_passes.m"
  {
#line 28 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 28 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__CastX_9 = (MR_Integer) hlds__make_hlds__make_hlds_passes__HeadVar__2_2;
#line 28 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__CastY_10 = (MR_Integer) hlds__make_hlds__make_hlds_passes__HeadVar__3_3;

#line 28 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__CastX_9 == hlds__make_hlds__make_hlds_passes__CastY_10);
#line 28 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 1421 "hlds.make_hlds.make_hlds_passes.c"
      *hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "make_hlds_passes.m"
    else
#line 28 "make_hlds_passes.m"
      {
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__3_3, (MR_Integer) 0)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__3_3, (MR_Integer) 1)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_8_8;

#line 28 "make_hlds_passes.m"
        {
#line 28 "make_hlds_passes.m"
          hlds__hlds_pred____Compare____import_status_0_0(&hlds__make_hlds__make_hlds_passes__V_8_8, hlds__make_hlds__make_hlds_passes__V_4_4, hlds__make_hlds__make_hlds_passes__V_6_6);
        }
#line 1443 "hlds.make_hlds.make_hlds_passes.c"
        hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_8_8 == (MR_Integer) 0);
#line 28 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = !(hlds__make_hlds__make_hlds_passes__succeeded);
#line 28 "make_hlds_passes.m"
        if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 28 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__V_8_8;
#line 28 "make_hlds_passes.m"
        else
#line 28 "make_hlds_passes.m"
          {
#line 28 "make_hlds_passes.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__V_13_13 = (MR_Integer) hlds__make_hlds__make_hlds_passes__V_5_5;
#line 28 "make_hlds_passes.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__V_14_14 = (MR_Integer) hlds__make_hlds__make_hlds_passes__V_7_7;

#line 28 "make_hlds_passes.m"
            {
#line 28 "make_hlds_passes.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__make_hlds_passes__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__V_13_13, hlds__make_hlds__make_hlds_passes__V_14_14);
#line 28 "make_hlds_passes.m"
              return;
            }
#line 28 "make_hlds_passes.m"
          }
#line 28 "make_hlds_passes.m"
      }
#line 28 "make_hlds_passes.m"
  }
#line 28 "make_hlds_passes.m"
}

#line 28 "make_hlds_passes.m"
MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____item_status_0_0(
#line 28 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 28 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2)
#line 28 "make_hlds_passes.m"
{
#line 28 "make_hlds_passes.m"
  {
#line 28 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 28 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__CastX_7 = (MR_Integer) hlds__make_hlds__make_hlds_passes__HeadVar__1_1;
#line 28 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__CastY_8 = (MR_Integer) hlds__make_hlds__make_hlds_passes__HeadVar__2_2;

#line 28 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__CastX_7 == hlds__make_hlds__make_hlds_passes__CastY_8);
#line 28 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 28 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 28 "make_hlds_passes.m"
    else
#line 28 "make_hlds_passes.m"
      {
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__2_2, (MR_Integer) 1)));

#line 1513 "hlds.make_hlds.make_hlds_passes.c"
        {
#line 1515 "hlds.make_hlds.make_hlds_passes.c"
          hlds__make_hlds__make_hlds_passes__succeeded = hlds__hlds_pred____Unify____import_status_0_0(hlds__make_hlds__make_hlds_passes__V_3_3, hlds__make_hlds__make_hlds_passes__V_5_5);
        }
#line 28 "make_hlds_passes.m"
        if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 1520 "hlds.make_hlds.make_hlds_passes.c"
          hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_4_4 == hlds__make_hlds__make_hlds_passes__V_6_6);
#line 28 "make_hlds_passes.m"
      }
#line 28 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 28 "make_hlds_passes.m"
  }
#line 28 "make_hlds_passes.m"
}

#line 1348 "make_hlds_passes.m"
MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_p_0(
#line 1348 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleDefn_3,
#line 1348 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__Status_4)
#line 1348 "make_hlds_passes.m"
{
#line 1353 "make_hlds_passes.m"
  {
#line 1353 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 1353 "make_hlds_passes.m"
#line 1353 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ModuleDefn_3)) {
#line 1353 "make_hlds_passes.m"
      default:
#line 1353 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = MR_FALSE;
#line 1353 "make_hlds_passes.m"
        break;
#line 1353 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 1353 "make_hlds_passes.m"
#line 1353 "make_hlds_passes.m"
        switch (MR_unmkbody(hlds__make_hlds__make_hlds_passes__ModuleDefn_3)) {
#line 1353 "make_hlds_passes.m"
          default:
#line 1353 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__succeeded = MR_FALSE;
#line 1353 "make_hlds_passes.m"
            break;
#line 1353 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 1353 "make_hlds_passes.m"
            {
#line 1354 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__Status_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[61];
#line 1353 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1353 "make_hlds_passes.m"
            }
#line 1353 "make_hlds_passes.m"
            break;
#line 1353 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 1356 "make_hlds_passes.m"
            {
#line 1357 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__Status_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[53];
#line 1356 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1356 "make_hlds_passes.m"
            }
#line 1353 "make_hlds_passes.m"
            break;
#line 1353 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 1359 "make_hlds_passes.m"
            {
#line 1360 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__Status_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[60];
#line 1359 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1359 "make_hlds_passes.m"
            }
#line 1353 "make_hlds_passes.m"
            break;
#line 1353 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 1371 "make_hlds_passes.m"
            {
#line 1372 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__Status_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[59];
#line 1371 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1371 "make_hlds_passes.m"
            }
#line 1353 "make_hlds_passes.m"
            break;
#line 1353 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 1368 "make_hlds_passes.m"
            {
#line 1369 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__Status_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[62];
#line 1368 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1368 "make_hlds_passes.m"
            }
#line 1353 "make_hlds_passes.m"
            break;
#line 1353 "make_hlds_passes.m"
        }
#line 1353 "make_hlds_passes.m"
        break;
#line 1353 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 1362 "make_hlds_passes.m"
        {
#line 1362 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Section_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__ModuleDefn_3, (MR_Integer) 0)));
#line 1362 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_12_12;

#line 1363 "make_hlds_passes.m"
          {
#line 1363 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Section_5));
#line 1363 "make_hlds_passes.m"
          }
#line 1363 "make_hlds_passes.m"
          {
#line 1363 "make_hlds_passes.m"
            MR_Word base;
#line 1363 "make_hlds_passes.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1363 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__Status_4 = base;
#line 1363 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_12_12));
#line 1363 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1363 "make_hlds_passes.m"
          }
#line 1362 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1362 "make_hlds_passes.m"
        }
#line 1353 "make_hlds_passes.m"
        break;
#line 1353 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 1365 "make_hlds_passes.m"
        {
#line 1365 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_10_10;
#line 1365 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Section_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__ModuleDefn_3, (MR_Integer) 0)));

#line 1366 "make_hlds_passes.m"
          {
#line 1366 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__V_10_10, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Section_20));
#line 1366 "make_hlds_passes.m"
          }
#line 1366 "make_hlds_passes.m"
          {
#line 1366 "make_hlds_passes.m"
            MR_Word base;
#line 1366 "make_hlds_passes.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__Status_4 = base;
#line 1366 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_10_10));
#line 1366 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1366 "make_hlds_passes.m"
          }
#line 1365 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 1365 "make_hlds_passes.m"
        }
#line 1353 "make_hlds_passes.m"
        break;
#line 1353 "make_hlds_passes.m"
    }
#line 1353 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 1353 "make_hlds_passes.m"
  }
#line 1348 "make_hlds_passes.m"
}

#line 1323 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_mutable_8_p_0(
#line 1323 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_9,
#line 1323 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 1323 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15,
#line 1323 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16,
#line 1323 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17,
#line 1323 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18,
#line 1323 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19,
#line 1323 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20)
#line 1323 "make_hlds_passes.m"
{
#line 1328 "make_hlds_passes.m"
  {
#line 1328 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1328 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_14;

#line 1332 "make_hlds_passes.m"
    {
#line 1332 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_14 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_10);
    }
#line 1337 "make_hlds_passes.m"
#line 1337 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_14) {
#line 1337 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 1338 "make_hlds_passes.m"
        {
#line 1338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15;
#line 1338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17;
#line 1338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19;
#line 1338 "make_hlds_passes.m"
        }
#line 1337 "make_hlds_passes.m"
        break;
#line 1337 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 1335 "make_hlds_passes.m"
        {
#line 1335 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_9, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20);
#line 1335 "make_hlds_passes.m"
          return;
        }
#line 1337 "make_hlds_passes.m"
        break;
#line 1337 "make_hlds_passes.m"
    }
#line 1328 "make_hlds_passes.m"
  }
#line 1323 "make_hlds_passes.m"
}

#line 1249 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(
#line 1249 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1249 "make_hlds_passes.m"
{
#line 1249 "make_hlds_passes.m"
  {
#line 1249 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1249 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0, 1);
#line 1249 "make_hlds_passes.m"
  }
#line 1249 "make_hlds_passes.m"
}

#line 1252 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3(
#line 1252 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1252 "make_hlds_passes.m"
{
#line 1252 "make_hlds_passes.m"
  {
#line 1252 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1252 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32);
#line 1252 "make_hlds_passes.m"
    {
#line 1252 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1252 "make_hlds_passes.m"
      return;
    }
#line 1252 "make_hlds_passes.m"
  }
#line 1252 "make_hlds_passes.m"
}

#line 1249 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_2(
#line 1249 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1249 "make_hlds_passes.m"
{
#line 1249 "make_hlds_passes.m"
  {
#line 1249 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1253 "make_hlds_passes.m"
    {
#line 1253 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33);
    }
#line 1255 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33)) == (MR_mktag((MR_Integer) 1)));
#line 1255 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1255 "make_hlds_passes.m"
      {
#line 1255 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_33, (MR_Integer) 0)));
#line 1249 "make_hlds_passes.m"
        {
#line 1256 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34)) == (MR_mktag((MR_Integer) 1)));
#line 1256 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1256 "make_hlds_passes.m"
            {
#line 1256 "make_hlds_passes.m"
              {
#line 1256 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34, (MR_Integer) 0)));
#line 1256 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_34, (MR_Integer) 1)));
#line 1256 "make_hlds_passes.m"
              }
#line 1249 "make_hlds_passes.m"
              {
#line 1256 "make_hlds_passes.m"
                {
#line 1256 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1256 "make_hlds_passes.m"
                {
#line 1256 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_89_89, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_215_215);
                }
#line 1249 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                  {
#line 1256 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90)) == (MR_mktag((MR_Integer) 1)));
#line 1256 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1256 "make_hlds_passes.m"
                      {
#line 1256 "make_hlds_passes.m"
                        {
#line 1256 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90, (MR_Integer) 0)));
#line 1256 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_90_90, (MR_Integer) 1)));
#line 1256 "make_hlds_passes.m"
                        }
#line 1249 "make_hlds_passes.m"
                        {
#line 1256 "make_hlds_passes.m"
                          {
#line 1256 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1256 "make_hlds_passes.m"
                          {
#line 1256 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_91_91, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_216_216);
                          }
#line 1249 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                            {
#line 1256 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                                {
#line 1257 "make_hlds_passes.m"
                                  {
#line 1257 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_32, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35);
                                  }
#line 1258 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35)) == (MR_mktag((MR_Integer) 1)));
#line 1258 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1258 "make_hlds_passes.m"
                                    {
#line 1258 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_35, (MR_Integer) 0)));
#line 1249 "make_hlds_passes.m"
                                      {
#line 1259 "make_hlds_passes.m"
#line 1259 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_36) {
#line 1259 "make_hlds_passes.m"
                                          default:
#line 1259 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1259 "make_hlds_passes.m"
                                            break;
#line 1259 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1259 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1259 "make_hlds_passes.m"
                                            break;
#line 1259 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1259 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1259 "make_hlds_passes.m"
                                            break;
#line 1259 "make_hlds_passes.m"
                                        }
#line 1249 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                                          {
#line 1260 "make_hlds_passes.m"
                                            {
#line 1260 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37);
                                            }
#line 1261 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_37 == (MR_Integer) 0);
#line 1261 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1261 "make_hlds_passes.m"
                                              {
#line 1261 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1261 "make_hlds_passes.m"
                                                return;
                                              }
#line 1249 "make_hlds_passes.m"
                                          }
#line 1249 "make_hlds_passes.m"
                                      }
#line 1258 "make_hlds_passes.m"
                                    }
#line 1249 "make_hlds_passes.m"
                                }
#line 1249 "make_hlds_passes.m"
                            }
#line 1249 "make_hlds_passes.m"
                        }
#line 1256 "make_hlds_passes.m"
                      }
#line 1249 "make_hlds_passes.m"
                  }
#line 1249 "make_hlds_passes.m"
              }
#line 1256 "make_hlds_passes.m"
            }
#line 1249 "make_hlds_passes.m"
        }
#line 1255 "make_hlds_passes.m"
      }
#line 1249 "make_hlds_passes.m"
  }
#line 1249 "make_hlds_passes.m"
}

#line 1249 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(
#line 1249 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1249 "make_hlds_passes.m"
{
#line 1249 "make_hlds_passes.m"
  {
#line 1249 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1249 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_0) == 0)
#line 1249 "make_hlds_passes.m"
      {
#line 1249 "make_hlds_passes.m"
        {
#line 1249 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_30;
#line 1249 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_31;
#line 1249 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_87_87;
#line 1249 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_88_88;

#line 1249 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24)) == (MR_mktag((MR_Integer) 1)));
#line 1249 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
            {
#line 1249 "make_hlds_passes.m"
              {
#line 1249 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24, (MR_Integer) 0)));
#line 1249 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24, (MR_Integer) 1)));
#line 1249 "make_hlds_passes.m"
              }
#line 1249 "make_hlds_passes.m"
              {
#line 1249 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 1249 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                  {
#line 1249 "make_hlds_passes.m"
                    {
#line 1249 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_87_87, (MR_Integer) 0)));
#line 1249 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_87_87, (MR_Integer) 1)));
#line 1249 "make_hlds_passes.m"
                    }
#line 1249 "make_hlds_passes.m"
                    {
#line 1249 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                        {
#line 1250 "make_hlds_passes.m"
                          {
#line 1250 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_30);
                          }
#line 1249 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1249 "make_hlds_passes.m"
                            {
#line 1251 "make_hlds_passes.m"
                              {
#line 1251 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_31);
                              }
#line 1249 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1252 "make_hlds_passes.m"
                                {
#line 1252 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv0_ProcInfo_32, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26, hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1249 "make_hlds_passes.m"
                            }
#line 1249 "make_hlds_passes.m"
                        }
#line 1249 "make_hlds_passes.m"
                    }
#line 1249 "make_hlds_passes.m"
                  }
#line 1249 "make_hlds_passes.m"
              }
#line 1249 "make_hlds_passes.m"
            }
#line 1249 "make_hlds_passes.m"
        }
#line 1249 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1249 "make_hlds_passes.m"
      }
#line 1249 "make_hlds_passes.m"
    else
#line 1249 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1249 "make_hlds_passes.m"
  }
#line 1249 "make_hlds_passes.m"
}

#line 1276 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(
#line 1276 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1276 "make_hlds_passes.m"
{
#line 1276 "make_hlds_passes.m"
  {
#line 1276 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1276 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1, 1);
#line 1276 "make_hlds_passes.m"
  }
#line 1276 "make_hlds_passes.m"
}

#line 1277 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7(
#line 1277 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1277 "make_hlds_passes.m"
{
#line 1277 "make_hlds_passes.m"
  {
#line 1277 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1277 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170);
#line 1277 "make_hlds_passes.m"
    {
#line 1277 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1277 "make_hlds_passes.m"
      return;
    }
#line 1277 "make_hlds_passes.m"
  }
#line 1277 "make_hlds_passes.m"
}

#line 1276 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_6(
#line 1276 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1276 "make_hlds_passes.m"
{
#line 1276 "make_hlds_passes.m"
  {
#line 1276 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1278 "make_hlds_passes.m"
    {
#line 1278 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171);
    }
#line 1280 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171)) == (MR_mktag((MR_Integer) 1)));
#line 1280 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1280 "make_hlds_passes.m"
      {
#line 1280 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeHeadModes_171, (MR_Integer) 0)));
#line 1276 "make_hlds_passes.m"
        {
#line 1281 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__HeadModes_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1276 "make_hlds_passes.m"
            {
#line 1282 "make_hlds_passes.m"
              {
#line 1282 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfo_170, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173);
              }
#line 1283 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173)) == (MR_mktag((MR_Integer) 1)));
#line 1283 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1283 "make_hlds_passes.m"
                {
#line 1283 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__MaybeDetism_173, (MR_Integer) 0)));
#line 1276 "make_hlds_passes.m"
                  {
#line 1284 "make_hlds_passes.m"
#line 1284 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Detism_174) {
#line 1284 "make_hlds_passes.m"
                      default:
#line 1284 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1284 "make_hlds_passes.m"
                        break;
#line 1284 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1284 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1284 "make_hlds_passes.m"
                        break;
#line 1284 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1284 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1284 "make_hlds_passes.m"
                        break;
#line 1284 "make_hlds_passes.m"
                    }
#line 1276 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1276 "make_hlds_passes.m"
                      {
#line 1285 "make_hlds_passes.m"
                        {
#line 1285 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175);
                        }
#line 1286 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__Purity_175 == (MR_Integer) 2);
#line 1286 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1286 "make_hlds_passes.m"
                          {
#line 1286 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1286 "make_hlds_passes.m"
                            return;
                          }
#line 1276 "make_hlds_passes.m"
                      }
#line 1276 "make_hlds_passes.m"
                  }
#line 1283 "make_hlds_passes.m"
                }
#line 1276 "make_hlds_passes.m"
            }
#line 1276 "make_hlds_passes.m"
        }
#line 1280 "make_hlds_passes.m"
      }
#line 1276 "make_hlds_passes.m"
  }
#line 1276 "make_hlds_passes.m"
}

#line 1276 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(
#line 1276 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1276 "make_hlds_passes.m"
{
#line 1276 "make_hlds_passes.m"
  {
#line 1276 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1276 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__commit_1) == 0)
#line 1276 "make_hlds_passes.m"
      {
#line 1276 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1277 "make_hlds_passes.m"
          {
#line 1277 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__conv1_ProcInfo_170, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26, hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1276 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_FALSE;
#line 1276 "make_hlds_passes.m"
      }
#line 1276 "make_hlds_passes.m"
    else
#line 1276 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded = MR_TRUE;
#line 1276 "make_hlds_passes.m"
  }
#line 1276 "make_hlds_passes.m"
}

#line 1201 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0(
#line 1201 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_6,
#line 1201 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45,
#line 1201 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46,
#line 1201 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47,
#line 1201 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48)
#line 1201 "make_hlds_passes.m"
{
#line 1201 "make_hlds_passes.m"
  {
#line 1201 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1205 "make_hlds_passes.m"
    {
#line 1205 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 0)));
#line 1205 "make_hlds_passes.m"
      MR_Integer hlds__make_hlds__make_hlds_passes__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 1)));
#line 1205 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__Origin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 2)));
#line 1205 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 3)));
#line 1205 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_15;
#line 1205 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_16;
#line 1216 "make_hlds_passes.m"
      MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_6, (MR_Integer) 4)));

#line 1221 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1222 "make_hlds_passes.m"
        {
#line 1222 "make_hlds_passes.m"
        }
#line 1221 "make_hlds_passes.m"
      else
#line 1219 "make_hlds_passes.m"
        {
#line 1220 "make_hlds_passes.m"
          {
#line 1220 "make_hlds_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_finalise\'/5", (MR_String) "bad introduced finalise declaration");
#line 1220 "make_hlds_passes.m"
            return;
          }
#line 1219 "make_hlds_passes.m"
        }
#line 1224 "make_hlds_passes.m"
      {
#line 1224 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__PredTable_15);
      }
#line 1225 "make_hlds_passes.m"
      {
#line 1225 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_15, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__PredIds_16);
      }
#line 1236 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "make_hlds_passes.m"
        {
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_17;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_18;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_19;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_138_138;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_139_139;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_140_140;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_162_162;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_163_163;
#line 1228 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_167_167;

#line 1229 "make_hlds_passes.m"
          {
#line 1229 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1229 "make_hlds_passes.m"
          }
#line 1229 "make_hlds_passes.m"
          {
#line 1229 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_140_140));
#line 1229 "make_hlds_passes.m"
          }
#line 1229 "make_hlds_passes.m"
          {
#line 1229 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_139_139));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40])));
#line 1229 "make_hlds_passes.m"
          }
#line 1229 "make_hlds_passes.m"
          {
#line 1229 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])));
#line 1229 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_138_138));
#line 1229 "make_hlds_passes.m"
          }
#line 1233 "make_hlds_passes.m"
          {
#line 1233 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_17));
#line 1233 "make_hlds_passes.m"
          }
#line 1233 "make_hlds_passes.m"
          {
#line 1233 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_163_163));
#line 1233 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "make_hlds_passes.m"
          }
#line 1233 "make_hlds_passes.m"
          {
#line 1233 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_18, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1233 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_162_162));
#line 1233 "make_hlds_passes.m"
          }
#line 1234 "make_hlds_passes.m"
          {
#line 1234 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_18));
#line 1234 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "make_hlds_passes.m"
          }
#line 1234 "make_hlds_passes.m"
          {
#line 1234 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1234 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_19, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_167_167));
#line 1234 "make_hlds_passes.m"
          }
#line 1235 "make_hlds_passes.m"
          {
#line 1235 "make_hlds_passes.m"
            MR_Word base;
#line 1235 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1235 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_19));
#line 1235 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1235 "make_hlds_passes.m"
          }
#line 1228 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1228 "make_hlds_passes.m"
        }
#line 1236 "make_hlds_passes.m"
      else
#line 1237 "make_hlds_passes.m"
        {
#line 1237 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_16, (MR_Integer) 0)));
#line 1237 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_16, (MR_Integer) 1)));

#line 1309 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1239 "make_hlds_passes.m"
            {
#line 1239 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_25;
#line 1239 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_27;
#line 1239 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_28;
#line 1239 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_29;

#line 1241 "make_hlds_passes.m"
              {
#line 1241 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__make_hlds_passes__HeadPredId_20, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23);
              }
#line 1242 "make_hlds_passes.m"
              {
#line 1242 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ArgTypes_24);
              }
#line 1243 "make_hlds_passes.m"
              {
#line 1243 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__PredInfo_23, &hlds__make_hlds__make_hlds_passes__ProcTable_25);
              }
#line 2545 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1244 "make_hlds_passes.m"
              {
#line 1244 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__ProcInfos_26 = mercury__map__values_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__TypeCtorInfo_214_214, hlds__make_hlds__make_hlds_passes__ProcTable_25);
              }
#line 1245 "make_hlds_passes.m"
              {
#line 1245 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__Globals_27);
              }
#line 1246 "make_hlds_passes.m"
              {
#line 1246 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_27, &hlds__make_hlds__make_hlds_passes__CompilationTarget_28);
              }
#line 1247 "make_hlds_passes.m"
              {
#line 1247 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_29 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_28);
              }
#line 1249 "make_hlds_passes.m"
              {
#line 1249 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1275 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1264 "make_hlds_passes.m"
                {
#line 1264 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_38;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_39;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_40;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_94_94;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_95_95;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1264 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;

#line 1263 "make_hlds_passes.m"
                  {
#line 1263 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__CName_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93);
                  }
#line 1266 "make_hlds_passes.m"
                  {
#line 1266 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_95_95 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1266 "make_hlds_passes.m"
                  {
#line 1266 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_97_97 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1266 "make_hlds_passes.m"
                  {
#line 1266 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1266 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "make_hlds_passes.m"
                  }
#line 1266 "make_hlds_passes.m"
                  {
#line 1266 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_95_95));
#line 1266 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1266 "make_hlds_passes.m"
                  }
#line 1265 "make_hlds_passes.m"
                  {
#line 1265 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1265 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_94_94));
#line 1265 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_39, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1265 "make_hlds_passes.m"
                  }
#line 1267 "make_hlds_passes.m"
                  {
#line 1267 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_29));
#line 1267 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_39));
#line 1267 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_40, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_38));
#line 1267 "make_hlds_passes.m"
                  }
#line 1273 "make_hlds_passes.m"
                  {
#line 1273 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[58]))), hlds__make_hlds__make_hlds_passes__FPEInfo_40, hlds__make_hlds__make_hlds_passes__Context_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48);
#line 1273 "make_hlds_passes.m"
                    return;
                  }
#line 1264 "make_hlds_passes.m"
                }
#line 1275 "make_hlds_passes.m"
              else
#line 1300 "make_hlds_passes.m"
                {
#line 1276 "make_hlds_passes.m"
                  {
#line 1276 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1300 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0_env_0__succeeded)
#line 1289 "make_hlds_passes.m"
                    {
#line 1289 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104;
#line 1289 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_176;
#line 1289 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_177;
#line 1289 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_178;

#line 1288 "make_hlds_passes.m"
                      {
#line 1288 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_9, hlds__make_hlds__make_hlds_passes__Arity_10, &hlds__make_hlds__make_hlds_passes__CName_176, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104);
                      }
#line 1290 "make_hlds_passes.m"
                      {
#line 1290 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1290 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_177, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1290 "make_hlds_passes.m"
                      }
#line 1292 "make_hlds_passes.m"
                      {
#line 1292 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_29));
#line 1292 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_177));
#line 1292 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_178, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_176));
#line 1292 "make_hlds_passes.m"
                      }
#line 1298 "make_hlds_passes.m"
                      {
#line 1298 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[58]))), hlds__make_hlds__make_hlds_passes__FPEInfo_178, hlds__make_hlds__make_hlds_passes__Context_12, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48);
#line 1298 "make_hlds_passes.m"
                        return;
                      }
#line 1289 "make_hlds_passes.m"
                    }
#line 1300 "make_hlds_passes.m"
                  else
#line 1303 "make_hlds_passes.m"
                    {
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_114_114;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_115_115;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_128_128;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_129_129;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_133_133;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_181;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_182;
#line 1303 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_183;

#line 1301 "make_hlds_passes.m"
                      {
#line 1301 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1301 "make_hlds_passes.m"
                      }
#line 1301 "make_hlds_passes.m"
                      {
#line 1301 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_115_115));
#line 1301 "make_hlds_passes.m"
                      }
#line 1301 "make_hlds_passes.m"
                      {
#line 1301 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_114_114));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44])));
#line 1301 "make_hlds_passes.m"
                      }
#line 1301 "make_hlds_passes.m"
                      {
#line 1301 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])));
#line 1301 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_181, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1301 "make_hlds_passes.m"
                      }
#line 1304 "make_hlds_passes.m"
                      {
#line 1304 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_181));
#line 1304 "make_hlds_passes.m"
                      }
#line 1304 "make_hlds_passes.m"
                      {
#line 1304 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_129_129));
#line 1304 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1304 "make_hlds_passes.m"
                      }
#line 1304 "make_hlds_passes.m"
                      {
#line 1304 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_182, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1304 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_182, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_128_128));
#line 1304 "make_hlds_passes.m"
                      }
#line 1306 "make_hlds_passes.m"
                      {
#line 1306 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_182));
#line 1306 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "make_hlds_passes.m"
                      }
#line 1305 "make_hlds_passes.m"
                      {
#line 1305 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1305 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_183, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_133_133));
#line 1305 "make_hlds_passes.m"
                      }
#line 1307 "make_hlds_passes.m"
                      {
#line 1307 "make_hlds_passes.m"
                        MR_Word base;
#line 1307 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1307 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_183));
#line 1307 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1307 "make_hlds_passes.m"
                      }
#line 1303 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1303 "make_hlds_passes.m"
                    }
#line 1300 "make_hlds_passes.m"
                }
#line 1239 "make_hlds_passes.m"
            }
#line 1309 "make_hlds_passes.m"
          else
#line 1310 "make_hlds_passes.m"
            {
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_55_55;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_56_56;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_57_57;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_84_84;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_204;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_205;
#line 1310 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_206;

#line 1311 "make_hlds_passes.m"
              {
#line 1311 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_9));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_10));
#line 1311 "make_hlds_passes.m"
              }
#line 1311 "make_hlds_passes.m"
              {
#line 1311 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_57_57));
#line 1311 "make_hlds_passes.m"
              }
#line 1311 "make_hlds_passes.m"
              {
#line 1311 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_56_56));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[52])));
#line 1311 "make_hlds_passes.m"
              }
#line 1311 "make_hlds_passes.m"
              {
#line 1311 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])));
#line 1311 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_204, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_55_55));
#line 1311 "make_hlds_passes.m"
              }
#line 1315 "make_hlds_passes.m"
              {
#line 1315 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1315 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_204));
#line 1315 "make_hlds_passes.m"
              }
#line 1315 "make_hlds_passes.m"
              {
#line 1315 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 1315 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1315 "make_hlds_passes.m"
              }
#line 1315 "make_hlds_passes.m"
              {
#line 1315 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1315 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_205, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_12));
#line 1315 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_205, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1315 "make_hlds_passes.m"
              }
#line 1316 "make_hlds_passes.m"
              {
#line 1316 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_205));
#line 1316 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1316 "make_hlds_passes.m"
              }
#line 1316 "make_hlds_passes.m"
              {
#line 1316 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1316 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1316 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_206, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_84_84));
#line 1316 "make_hlds_passes.m"
              }
#line 1317 "make_hlds_passes.m"
              {
#line 1317 "make_hlds_passes.m"
                MR_Word base;
#line 1317 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_48 = base;
#line 1317 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_206));
#line 1317 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_47));
#line 1317 "make_hlds_passes.m"
              }
#line 1310 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45;
#line 1310 "make_hlds_passes.m"
            }
#line 1237 "make_hlds_passes.m"
        }
#line 1205 "make_hlds_passes.m"
    }
#line 1201 "make_hlds_passes.m"
  }
#line 1201 "make_hlds_passes.m"
}

#line 1125 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(
#line 1125 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1125 "make_hlds_passes.m"
{
#line 1125 "make_hlds_passes.m"
  {
#line 1125 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1125 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0, 1);
#line 1125 "make_hlds_passes.m"
  }
#line 1125 "make_hlds_passes.m"
}

#line 1128 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3(
#line 1128 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1128 "make_hlds_passes.m"
{
#line 1128 "make_hlds_passes.m"
  {
#line 1128 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1128 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30);
#line 1128 "make_hlds_passes.m"
    {
#line 1128 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1128 "make_hlds_passes.m"
      return;
    }
#line 1128 "make_hlds_passes.m"
  }
#line 1128 "make_hlds_passes.m"
}

#line 1125 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_2(
#line 1125 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1125 "make_hlds_passes.m"
{
#line 1125 "make_hlds_passes.m"
  {
#line 1125 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1129 "make_hlds_passes.m"
    {
#line 1129 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31);
    }
#line 1131 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
#line 1131 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1131 "make_hlds_passes.m"
      {
#line 1131 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
#line 1125 "make_hlds_passes.m"
        {
#line 1132 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
#line 1132 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1132 "make_hlds_passes.m"
            {
#line 1132 "make_hlds_passes.m"
              {
#line 1132 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
#line 1132 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
#line 1132 "make_hlds_passes.m"
              }
#line 1125 "make_hlds_passes.m"
              {
#line 1132 "make_hlds_passes.m"
                {
#line 1132 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1132 "make_hlds_passes.m"
                {
#line 1132 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_72_72, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_195_195);
                }
#line 1125 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                  {
#line 1132 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 1132 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1132 "make_hlds_passes.m"
                      {
#line 1132 "make_hlds_passes.m"
                        {
#line 1132 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73, (MR_Integer) 0)));
#line 1132 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_73_73, (MR_Integer) 1)));
#line 1132 "make_hlds_passes.m"
                        }
#line 1125 "make_hlds_passes.m"
                        {
#line 1132 "make_hlds_passes.m"
                          {
#line 1132 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1132 "make_hlds_passes.m"
                          {
#line 1132 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_74_74, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_196_196);
                          }
#line 1125 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                            {
#line 1132 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1125 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                                {
#line 1133 "make_hlds_passes.m"
                                  {
#line 1133 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33);
                                  }
#line 1134 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
#line 1134 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1134 "make_hlds_passes.m"
                                    {
#line 1134 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
#line 1125 "make_hlds_passes.m"
                                      {
#line 1135 "make_hlds_passes.m"
#line 1135 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_34) {
#line 1135 "make_hlds_passes.m"
                                          default:
#line 1135 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1135 "make_hlds_passes.m"
                                            break;
#line 1135 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1135 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1135 "make_hlds_passes.m"
                                            break;
#line 1135 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1135 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1135 "make_hlds_passes.m"
                                            break;
#line 1135 "make_hlds_passes.m"
                                        }
#line 1125 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                                          {
#line 1136 "make_hlds_passes.m"
                                            {
#line 1136 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35);
                                            }
#line 1137 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
#line 1137 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1137 "make_hlds_passes.m"
                                              {
#line 1137 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1137 "make_hlds_passes.m"
                                                return;
                                              }
#line 1125 "make_hlds_passes.m"
                                          }
#line 1125 "make_hlds_passes.m"
                                      }
#line 1134 "make_hlds_passes.m"
                                    }
#line 1125 "make_hlds_passes.m"
                                }
#line 1125 "make_hlds_passes.m"
                            }
#line 1125 "make_hlds_passes.m"
                        }
#line 1132 "make_hlds_passes.m"
                      }
#line 1125 "make_hlds_passes.m"
                  }
#line 1125 "make_hlds_passes.m"
              }
#line 1132 "make_hlds_passes.m"
            }
#line 1125 "make_hlds_passes.m"
        }
#line 1131 "make_hlds_passes.m"
      }
#line 1125 "make_hlds_passes.m"
  }
#line 1125 "make_hlds_passes.m"
}

#line 1125 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(
#line 1125 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1125 "make_hlds_passes.m"
{
#line 1125 "make_hlds_passes.m"
  {
#line 1125 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1125 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_0) == 0)
#line 1125 "make_hlds_passes.m"
      {
#line 1125 "make_hlds_passes.m"
        {
#line 1125 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
#line 1125 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
#line 1125 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_70_70;
#line 1125 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_71_71;

#line 1125 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
#line 1125 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
            {
#line 1125 "make_hlds_passes.m"
              {
#line 1125 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
#line 1125 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
#line 1125 "make_hlds_passes.m"
              }
#line 1125 "make_hlds_passes.m"
              {
#line 1125 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 1125 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                  {
#line 1125 "make_hlds_passes.m"
                    {
#line 1125 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 0)));
#line 1125 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 1)));
#line 1125 "make_hlds_passes.m"
                    }
#line 1125 "make_hlds_passes.m"
                    {
#line 1125 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1125 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                        {
#line 1126 "make_hlds_passes.m"
                          {
#line 1126 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
#line 1125 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1125 "make_hlds_passes.m"
                            {
#line 1127 "make_hlds_passes.m"
                              {
#line 1127 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
#line 1125 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1128 "make_hlds_passes.m"
                                {
#line 1128 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1125 "make_hlds_passes.m"
                            }
#line 1125 "make_hlds_passes.m"
                        }
#line 1125 "make_hlds_passes.m"
                    }
#line 1125 "make_hlds_passes.m"
                  }
#line 1125 "make_hlds_passes.m"
              }
#line 1125 "make_hlds_passes.m"
            }
#line 1125 "make_hlds_passes.m"
        }
#line 1125 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1125 "make_hlds_passes.m"
      }
#line 1125 "make_hlds_passes.m"
    else
#line 1125 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1125 "make_hlds_passes.m"
  }
#line 1125 "make_hlds_passes.m"
}

#line 1152 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(
#line 1152 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1152 "make_hlds_passes.m"
{
#line 1152 "make_hlds_passes.m"
  {
#line 1152 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1152 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1, 1);
#line 1152 "make_hlds_passes.m"
  }
#line 1152 "make_hlds_passes.m"
}

#line 1153 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7(
#line 1153 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1153 "make_hlds_passes.m"
{
#line 1153 "make_hlds_passes.m"
  {
#line 1153 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1153 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150);
#line 1153 "make_hlds_passes.m"
    {
#line 1153 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1153 "make_hlds_passes.m"
      return;
    }
#line 1153 "make_hlds_passes.m"
  }
#line 1153 "make_hlds_passes.m"
}

#line 1152 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_6(
#line 1152 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1152 "make_hlds_passes.m"
{
#line 1152 "make_hlds_passes.m"
  {
#line 1152 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1154 "make_hlds_passes.m"
    {
#line 1154 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151);
    }
#line 1156 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151)) == (MR_mktag((MR_Integer) 1)));
#line 1156 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1156 "make_hlds_passes.m"
      {
#line 1156 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeHeadModes_151, (MR_Integer) 0)));
#line 1152 "make_hlds_passes.m"
        {
#line 1157 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__HeadModes_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1152 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1152 "make_hlds_passes.m"
            {
#line 1158 "make_hlds_passes.m"
              {
#line 1158 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153);
              }
#line 1159 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153)) == (MR_mktag((MR_Integer) 1)));
#line 1159 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1159 "make_hlds_passes.m"
                {
#line 1159 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__MaybeDetism_153, (MR_Integer) 0)));
#line 1152 "make_hlds_passes.m"
                  {
#line 1160 "make_hlds_passes.m"
#line 1160 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Detism_154) {
#line 1160 "make_hlds_passes.m"
                      default:
#line 1160 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1160 "make_hlds_passes.m"
                        break;
#line 1160 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1160 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1160 "make_hlds_passes.m"
                        break;
#line 1160 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1160 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1160 "make_hlds_passes.m"
                        break;
#line 1160 "make_hlds_passes.m"
                    }
#line 1152 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1152 "make_hlds_passes.m"
                      {
#line 1161 "make_hlds_passes.m"
                        {
#line 1161 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155);
                        }
#line 1162 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__Purity_155 == (MR_Integer) 2);
#line 1162 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1162 "make_hlds_passes.m"
                          {
#line 1162 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
#line 1162 "make_hlds_passes.m"
                            return;
                          }
#line 1152 "make_hlds_passes.m"
                      }
#line 1152 "make_hlds_passes.m"
                  }
#line 1159 "make_hlds_passes.m"
                }
#line 1152 "make_hlds_passes.m"
            }
#line 1152 "make_hlds_passes.m"
        }
#line 1156 "make_hlds_passes.m"
      }
#line 1152 "make_hlds_passes.m"
  }
#line 1152 "make_hlds_passes.m"
}

#line 1152 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(
#line 1152 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1152 "make_hlds_passes.m"
{
#line 1152 "make_hlds_passes.m"
  {
#line 1152 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1152 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__commit_1) == 0)
#line 1152 "make_hlds_passes.m"
      {
#line 1152 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1152 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1153 "make_hlds_passes.m"
          {
#line 1153 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__conv1_ProcInfo_150, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1152 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_FALSE;
#line 1152 "make_hlds_passes.m"
      }
#line 1152 "make_hlds_passes.m"
    else
#line 1152 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded = MR_TRUE;
#line 1152 "make_hlds_passes.m"
  }
#line 1152 "make_hlds_passes.m"
}

#line 1082 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0(
#line 1082 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
#line 1082 "make_hlds_passes.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
#line 1082 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
#line 1082 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
#line 1082 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
#line 1082 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
#line 1082 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
#line 1082 "make_hlds_passes.m"
{
#line 1082 "make_hlds_passes.m"
  {
#line 1082 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1086 "make_hlds_passes.m"
    {
#line 1086 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
#line 1086 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

#line 1099 "make_hlds_passes.m"
      {
#line 1099 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
#line 1100 "make_hlds_passes.m"
      {
#line 1100 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
#line 1111 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "make_hlds_passes.m"
        {
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_118_118;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_119_119;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_120_120;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_142_142;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_143_143;
#line 1103 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_147_147;

#line 1104 "make_hlds_passes.m"
          {
#line 1104 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1104 "make_hlds_passes.m"
          }
#line 1104 "make_hlds_passes.m"
          {
#line 1104 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_120_120));
#line 1104 "make_hlds_passes.m"
          }
#line 1104 "make_hlds_passes.m"
          {
#line 1104 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_119_119));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31])));
#line 1104 "make_hlds_passes.m"
          }
#line 1104 "make_hlds_passes.m"
          {
#line 1104 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])));
#line 1104 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_118_118));
#line 1104 "make_hlds_passes.m"
          }
#line 1108 "make_hlds_passes.m"
          {
#line 1108 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
#line 1108 "make_hlds_passes.m"
          }
#line 1108 "make_hlds_passes.m"
          {
#line 1108 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_143_143));
#line 1108 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1108 "make_hlds_passes.m"
          }
#line 1108 "make_hlds_passes.m"
          {
#line 1108 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1108 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_142_142));
#line 1108 "make_hlds_passes.m"
          }
#line 1109 "make_hlds_passes.m"
          {
#line 1109 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
#line 1109 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "make_hlds_passes.m"
          }
#line 1109 "make_hlds_passes.m"
          {
#line 1109 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1109 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_147_147));
#line 1109 "make_hlds_passes.m"
          }
#line 1110 "make_hlds_passes.m"
          {
#line 1110 "make_hlds_passes.m"
            MR_Word base;
#line 1110 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1110 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
#line 1110 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1110 "make_hlds_passes.m"
          }
#line 1103 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1103 "make_hlds_passes.m"
        }
#line 1111 "make_hlds_passes.m"
      else
#line 1112 "make_hlds_passes.m"
        {
#line 1112 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
#line 1112 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

#line 1187 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "make_hlds_passes.m"
            {
#line 1114 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
#line 1114 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
#line 1114 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
#line 1114 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

#line 1116 "make_hlds_passes.m"
              {
#line 1116 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21);
              }
#line 1117 "make_hlds_passes.m"
              {
#line 1117 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ArgTypes_22);
              }
#line 1118 "make_hlds_passes.m"
              {
#line 1118 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 3734 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1119 "make_hlds_passes.m"
              {
#line 1119 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__TypeCtorInfo_194_194, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 1120 "make_hlds_passes.m"
              {
#line 1120 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
#line 1121 "make_hlds_passes.m"
              {
#line 1121 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1122 "make_hlds_passes.m"
              {
#line 1122 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1125 "make_hlds_passes.m"
              {
#line 1125 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1151 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1140 "make_hlds_passes.m"
                {
#line 1140 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_77_77;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_78_78;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1140 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;

#line 1139 "make_hlds_passes.m"
                  {
#line 1139 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76);
                  }
#line 1142 "make_hlds_passes.m"
                  {
#line 1142 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_78_78 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1142 "make_hlds_passes.m"
                  {
#line 1142 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_80_80 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1142 "make_hlds_passes.m"
                  {
#line 1142 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 1142 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "make_hlds_passes.m"
                  }
#line 1142 "make_hlds_passes.m"
                  {
#line 1142 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_78_78));
#line 1142 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1142 "make_hlds_passes.m"
                  }
#line 1141 "make_hlds_passes.m"
                  {
#line 1141 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1141 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_77_77));
#line 1141 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1141 "make_hlds_passes.m"
                  }
#line 1143 "make_hlds_passes.m"
                  {
#line 1143 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1143 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
#line 1143 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
#line 1143 "make_hlds_passes.m"
                  }
#line 1149 "make_hlds_passes.m"
                  {
#line 1149 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[58]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
#line 1149 "make_hlds_passes.m"
                    return;
                  }
#line 1140 "make_hlds_passes.m"
                }
#line 1151 "make_hlds_passes.m"
              else
#line 1176 "make_hlds_passes.m"
                {
#line 1152 "make_hlds_passes.m"
                  {
#line 1152 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1176 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_user_7_p_0_env_0__succeeded)
#line 1165 "make_hlds_passes.m"
                    {
#line 1165 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87;
#line 1165 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_156;
#line 1165 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_157;
#line 1165 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_158;

#line 1164 "make_hlds_passes.m"
                      {
#line 1164 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_156, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87);
                      }
#line 1166 "make_hlds_passes.m"
                      {
#line 1166 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1166 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1166 "make_hlds_passes.m"
                      }
#line 1168 "make_hlds_passes.m"
                      {
#line 1168 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1168 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_157));
#line 1168 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_156));
#line 1168 "make_hlds_passes.m"
                      }
#line 1174 "make_hlds_passes.m"
                      {
#line 1174 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[58]))), hlds__make_hlds__make_hlds_passes__FPEInfo_158, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
#line 1174 "make_hlds_passes.m"
                        return;
                      }
#line 1165 "make_hlds_passes.m"
                    }
#line 1176 "make_hlds_passes.m"
                  else
#line 1180 "make_hlds_passes.m"
                    {
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_98_98;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_108_108;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_109_109;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_161;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_162;
#line 1180 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_163;

#line 1178 "make_hlds_passes.m"
                      {
#line 1178 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1178 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1178 "make_hlds_passes.m"
                      }
#line 1178 "make_hlds_passes.m"
                      {
#line 1178 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1178 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_98_98));
#line 1178 "make_hlds_passes.m"
                      }
#line 1178 "make_hlds_passes.m"
                      {
#line 1178 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1178 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35])));
#line 1178 "make_hlds_passes.m"
                      }
#line 1177 "make_hlds_passes.m"
                      {
#line 1177 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])));
#line 1177 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1177 "make_hlds_passes.m"
                      }
#line 1182 "make_hlds_passes.m"
                      {
#line 1182 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_161));
#line 1182 "make_hlds_passes.m"
                      }
#line 1182 "make_hlds_passes.m"
                      {
#line 1182 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_109_109));
#line 1182 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1182 "make_hlds_passes.m"
                      }
#line 1182 "make_hlds_passes.m"
                      {
#line 1182 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1182 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_108_108));
#line 1182 "make_hlds_passes.m"
                      }
#line 1184 "make_hlds_passes.m"
                      {
#line 1184 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_162));
#line 1184 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1184 "make_hlds_passes.m"
                      }
#line 1183 "make_hlds_passes.m"
                      {
#line 1183 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1183 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1183 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1183 "make_hlds_passes.m"
                      }
#line 1185 "make_hlds_passes.m"
                      {
#line 1185 "make_hlds_passes.m"
                        MR_Word base;
#line 1185 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1185 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_163));
#line 1185 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1185 "make_hlds_passes.m"
                      }
#line 1180 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1180 "make_hlds_passes.m"
                    }
#line 1176 "make_hlds_passes.m"
                }
#line 1114 "make_hlds_passes.m"
            }
#line 1187 "make_hlds_passes.m"
          else
#line 1188 "make_hlds_passes.m"
            {
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_50_50;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_51_51;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_62_62;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_63_63;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_67_67;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_184;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_185;
#line 1188 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_186;

#line 1189 "make_hlds_passes.m"
              {
#line 1189 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1189 "make_hlds_passes.m"
              }
#line 1189 "make_hlds_passes.m"
              {
#line 1189 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 1189 "make_hlds_passes.m"
              }
#line 1189 "make_hlds_passes.m"
              {
#line 1189 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_51_51));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[38])));
#line 1189 "make_hlds_passes.m"
              }
#line 1189 "make_hlds_passes.m"
              {
#line 1189 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])));
#line 1189 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_50_50));
#line 1189 "make_hlds_passes.m"
              }
#line 1192 "make_hlds_passes.m"
              {
#line 1192 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_184));
#line 1192 "make_hlds_passes.m"
              }
#line 1192 "make_hlds_passes.m"
              {
#line 1192 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_63_63));
#line 1192 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "make_hlds_passes.m"
              }
#line 1192 "make_hlds_passes.m"
              {
#line 1192 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1192 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_62_62));
#line 1192 "make_hlds_passes.m"
              }
#line 1194 "make_hlds_passes.m"
              {
#line 1194 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_185));
#line 1194 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "make_hlds_passes.m"
              }
#line 1193 "make_hlds_passes.m"
              {
#line 1193 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1193 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_67_67));
#line 1193 "make_hlds_passes.m"
              }
#line 1195 "make_hlds_passes.m"
              {
#line 1195 "make_hlds_passes.m"
                MR_Word base;
#line 1195 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1195 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_186));
#line 1195 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1195 "make_hlds_passes.m"
              }
#line 1188 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1188 "make_hlds_passes.m"
            }
#line 1112 "make_hlds_passes.m"
        }
#line 1086 "make_hlds_passes.m"
    }
#line 1082 "make_hlds_passes.m"
  }
#line 1082 "make_hlds_passes.m"
}

#line 1064 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_initialise_8_p_0(
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_9,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes___Status_10,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 1064 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22,
#line 1064 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23,
#line 1064 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 1064 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 1064 "make_hlds_passes.m"
{
#line 1070 "make_hlds_passes.m"
  {
#line 1070 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 1070 "make_hlds_passes.m"
    {
#line 1070 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_9, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
#line 1070 "make_hlds_passes.m"
      return;
    }
#line 1070 "make_hlds_passes.m"
  }
#line 1064 "make_hlds_passes.m"
}

#line 1033 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_13,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_14,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VarSet_15,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Goal_16,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_17,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_18,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 1033 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28,
#line 1033 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29,
#line 1033 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30,
#line 1033 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31)
#line 1033 "make_hlds_passes.m"
{
#line 1039 "make_hlds_passes.m"
  {
#line 1039 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1039 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Line_22;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__File_23;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__Name_24;
#line 1039 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_25;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_35_35;
#line 1039 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_42_42;
#line 1039 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_44_44;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_48_48;
#line 1039 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_54_54;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_56_56;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_57_57;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_64_64;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_66_66;
#line 1039 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_67_67;

#line 1040 "make_hlds_passes.m"
    {
#line 1040 "make_hlds_passes.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__Line_22);
    }
#line 1041 "make_hlds_passes.m"
    {
#line 1041 "make_hlds_passes.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__File_23);
    }
#line 1043 "make_hlds_passes.m"
    {
#line 1043 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_35_35 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_passes__PromiseType_13);
    }
#line 4300 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__V_54_54 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[3];
#line 1043 "make_hlds_passes.m"
    {
#line 1043 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__File_23, &hlds__make_hlds__make_hlds_passes__V_48_48);
    }
#line 1042 "make_hlds_passes.m"
    {
#line 1042 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_48_48);
    }
#line 1043 "make_hlds_passes.m"
    {
#line 1043 "make_hlds_passes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__Line_22, &hlds__make_hlds__make_hlds_passes__V_57_57);
    }
#line 1042 "make_hlds_passes.m"
    {
#line 1042 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_57_57, hlds__make_hlds__make_hlds_passes__V_56_56);
    }
#line 1042 "make_hlds_passes.m"
    {
#line 1042 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_64_64);
    }
#line 1043 "make_hlds_passes.m"
    {
#line 1043 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_54_54, hlds__make_hlds__make_hlds_passes__V_35_35, &hlds__make_hlds__make_hlds_passes__V_67_67);
    }
#line 1042 "make_hlds_passes.m"
    {
#line 1042 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Name_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_67_67, hlds__make_hlds__make_hlds_passes__V_66_66);
    }
#line 1057 "make_hlds_passes.m"
    {
#line 1057 "make_hlds_passes.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__make_hlds_passes__ModuleName_25);
    }
#line 1058 "make_hlds_passes.m"
    {
#line 1058 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_25));
#line 1058 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Name_24));
#line 1058 "make_hlds_passes.m"
    }
#line 1059 "make_hlds_passes.m"
    {
#line 1059 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PromiseType_13));
#line 1059 "make_hlds_passes.m"
    }
#line 1058 "make_hlds_passes.m"
    {
#line 1058 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_15, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__V_42_42, hlds__make_hlds__make_hlds_passes__HeadVars_14, hlds__make_hlds__make_hlds_passes__Goal_16, hlds__make_hlds__make_hlds_passes__Status_18, hlds__make_hlds__make_hlds_passes__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__V_44_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31);
#line 1058 "make_hlds_passes.m"
      return;
    }
#line 1039 "make_hlds_passes.m"
  }
#line 1033 "make_hlds_passes.m"
}

#line 1006 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_promise_8_p_0(
#line 1006 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPromise_9,
#line 1006 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 1006 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21,
#line 1006 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22,
#line 1006 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_23,
#line 1006 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_24,
#line 1006 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25,
#line 1006 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26)
#line 1006 "make_hlds_passes.m"
{
#line 1011 "make_hlds_passes.m"
  {
#line 1011 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 0)));
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 1)));
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 2)));
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 3)));
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 4)));
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_20;
#line 1011 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 1012 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromise_9, (MR_Integer) 5)));

#line 1018 "make_hlds_passes.m"
    {
#line 1018 "make_hlds_passes.m"
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_passes__UnivVars_17, &hlds__make_hlds__make_hlds_passes__HeadVars_20);
    }
#line 1026 "make_hlds_passes.m"
#line 1026 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PromiseType_14) {
#line 1026 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 1026 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 1026 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 1025 "make_hlds_passes.m"
        {
#line 1025 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(hlds__make_hlds__make_hlds_passes__UnivVars_17, hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
        }
#line 1026 "make_hlds_passes.m"
        break;
#line 1026 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 1027 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_25;
#line 1026 "make_hlds_passes.m"
        break;
#line 1026 "make_hlds_passes.m"
    }
#line 1030 "make_hlds_passes.m"
    {
#line 1030 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__HeadVars_20, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26);
#line 1030 "make_hlds_passes.m"
      return;
    }
#line 1011 "make_hlds_passes.m"
  }
#line 1006 "make_hlds_passes.m"
}

#line 986 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_pred_decl_8_p_0(
#line 986 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_9,
#line 986 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 986 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30,
#line 986 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31,
#line 986 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_32,
#line 986 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_33,
#line 986 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 986 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 986 "make_hlds_passes.m"
{
#line 991 "make_hlds_passes.m"
  {
#line 991 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 991 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 0)));
#line 991 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 1)));
#line 991 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 2)));
#line 991 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 12)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 3)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 4)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 5)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 6)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 7)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 8)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 9)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 10)));
#line 992 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 11)));
#line 992 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_9, (MR_Integer) 13)));

#line 996 "make_hlds_passes.m"
#line 996 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_15) {
#line 996 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 996 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 997 "make_hlds_passes.m"
        {
#line 997 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__PredArity_28;
#line 997 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_29;

#line 998 "make_hlds_passes.m"
          {
#line 998 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_16, &hlds__make_hlds__make_hlds_passes__PredArity_28);
          }
#line 999 "make_hlds_passes.m"
          {
#line 999 "make_hlds_passes.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_29, hlds__make_hlds__make_hlds_passes__PredArity_28);
          }
#line 1000 "make_hlds_passes.m"
          {
#line 1000 "make_hlds_passes.m"
            hlds__make_hlds__add_pred__maybe_check_field_access_function_7_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30, hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__FuncArity_29, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__Context_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
          }
#line 997 "make_hlds_passes.m"
        }
#line 996 "make_hlds_passes.m"
        break;
#line 996 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 995 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34;
#line 996 "make_hlds_passes.m"
        break;
#line 996 "make_hlds_passes.m"
    }
#line 991 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_32;
#line 991 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_30;
#line 991 "make_hlds_passes.m"
  }
#line 986 "make_hlds_passes.m"
}

#line 971 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_8_p_0(
#line 971 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 971 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 971 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 971 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 971 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 971 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 971 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 971 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 971 "make_hlds_passes.m"
{
#line 976 "make_hlds_passes.m"
  while (MR_TRUE)
#line 976 "make_hlds_passes.m"
    {
#line 976 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 976 "make_hlds_passes.m"
      {
#line 976 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 976 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "make_hlds_passes.m"
          {
#line 977 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 977 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 977 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 976 "make_hlds_passes.m"
          }
#line 976 "make_hlds_passes.m"
        else
#line 979 "make_hlds_passes.m"
          {
#line 979 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 979 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 979 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 979 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 979 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;
#line 979 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_48;

#line 1332 "make_hlds_passes.m"
            {
#line 1332 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__DefinedThisModule_48 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__HeadVar__2_2);
            }
#line 1337 "make_hlds_passes.m"
#line 1337 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_48) {
#line 1337 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 1338 "make_hlds_passes.m"
                {
#line 1338 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 1338 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 1338 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 1338 "make_hlds_passes.m"
                }
#line 1337 "make_hlds_passes.m"
                break;
#line 1337 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 1335 "make_hlds_passes.m"
                {
#line 1335 "make_hlds_passes.m"
                  hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_19, hlds__make_hlds__make_hlds_passes__HeadVar__2_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33);
                }
#line 1337 "make_hlds_passes.m"
                break;
#line 1337 "make_hlds_passes.m"
            }
#line 981 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 981 "make_hlds_passes.m"
            {
#line 981 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_20;
#line 981 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_31_31;
#line 981 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_32_32;
#line 981 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33_33;

#line 981 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 981 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 981 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 981 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 981 "make_hlds_passes.m"
            }
#line 981 "make_hlds_passes.m"
            continue;
#line 979 "make_hlds_passes.m"
          }
#line 976 "make_hlds_passes.m"
      }
#line 976 "make_hlds_passes.m"
      break;
#line 976 "make_hlds_passes.m"
    }
#line 971 "make_hlds_passes.m"
}

#line 946 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_type_defn_8_p_0(
#line 946 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9,
#line 946 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 946 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23,
#line 946 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24,
#line 946 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25,
#line 946 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26,
#line 946 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27,
#line 946 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28)
#line 946 "make_hlds_passes.m"
{
#line 951 "make_hlds_passes.m"
  {
#line 951 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 951 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 0)));
#line 951 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 1)));
#line 951 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 2)));
#line 951 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 4)));
#line 952 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 3)));
#line 952 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefn_9, (MR_Integer) 5)));
#line 967 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20;
#line 959 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_29_29;
#line 959 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_21;

#line 959 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 959 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 959 "make_hlds_passes.m"
      {
#line 959 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 1)));
#line 959 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_16, (MR_Integer) 2)));
#line 960 "make_hlds_passes.m"
        {
#line 960 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_29_29 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__Status_10);
        }
#line 960 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_29_29 == (MR_Integer) 1);
#line 959 "make_hlds_passes.m"
      }
#line 967 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 963 "make_hlds_passes.m"
      {
#line 963 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_22;
#line 963 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30;
#line 963 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31;
#line 963 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32;
#line 964 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_36_36;
#line 964 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_37_37;
#line 964 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;
#line 964 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;

#line 962 "make_hlds_passes.m"
        {
#line 962 "make_hlds_passes.m"
          hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_11_p_0(hlds__make_hlds__make_hlds_passes__SymName_14, hlds__make_hlds__make_hlds_passes__TypeParams_15, hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32);
        }
#line 964 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 0)));
#line 964 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 1)));
#line 964 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 2)));
#line 964 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 3)));
#line 964 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__MutableItems_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_20, (MR_Integer) 4)));
#line 965 "make_hlds_passes.m"
        {
#line 965 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_clauses_8_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_22, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28);
#line 965 "make_hlds_passes.m"
          return;
        }
#line 963 "make_hlds_passes.m"
      }
#line 967 "make_hlds_passes.m"
    else
#line 968 "make_hlds_passes.m"
      {
#line 968 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_27;
#line 968 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_25;
#line 968 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_23;
#line 968 "make_hlds_passes.m"
      }
#line 951 "make_hlds_passes.m"
  }
#line 946 "make_hlds_passes.m"
}

#line 907 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_clause_8_p_0(
#line 907 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemClause_9,
#line 907 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_10,
#line 907 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28,
#line 907 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29,
#line 907 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30,
#line 907 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31,
#line 907 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32,
#line 907 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33)
#line 907 "make_hlds_passes.m"
{
#line 912 "make_hlds_passes.m"
  {
#line 912 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 0)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 1)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 2)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 3)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 4)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Body_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 5)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 6)));
#line 912 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClause_9, (MR_Integer) 7)));
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40;
#line 912 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_45_45;

#line 937 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 927 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "make_hlds_passes.m"
        {
#line 917 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes__Arity_22;
#line 917 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23;
#line 917 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__ClauseId_24;
#line 917 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_37_37;
#line 917 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;
#line 917 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_39_39;
#line 917 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_41_41;
#line 917 "make_hlds_passes.m"
          MR_String hlds__make_hlds__make_hlds_passes__V_42_42;

#line 918 "make_hlds_passes.m"
          {
#line 918 "make_hlds_passes.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3], hlds__make_hlds__make_hlds_passes__Args_16, &hlds__make_hlds__make_hlds_passes__Arity_22);
          }
#line 922 "make_hlds_passes.m"
          {
#line 922 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredName_14);
          }
#line 924 "make_hlds_passes.m"
          {
#line 924 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 924 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__UnqualifiedPredName_23));
#line 924 "make_hlds_passes.m"
          }
#line 924 "make_hlds_passes.m"
          {
#line 924 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 924 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_38_38));
#line 924 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_22));
#line 924 "make_hlds_passes.m"
          }
#line 923 "make_hlds_passes.m"
          {
#line 923 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__ClauseId_24 = parse_tree__prog_out__simple_call_id_to_string_2_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__V_37_37);
          }
#line 925 "make_hlds_passes.m"
          {
#line 925 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "clause for ", hlds__make_hlds__make_hlds_passes__ClauseId_24);
          }
#line 925 "make_hlds_passes.m"
          {
#line 925 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 925 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_42_42));
#line 925 "make_hlds_passes.m"
          }
#line 925 "make_hlds_passes.m"
          {
#line 925 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_41_41));
#line 925 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "make_hlds_passes.m"
          }
#line 925 "make_hlds_passes.m"
          {
#line 925 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_39_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40);
          }
#line 917 "make_hlds_passes.m"
        }
#line 927 "make_hlds_passes.m"
      else
#line 928 "make_hlds_passes.m"
        {
#line 928 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_25 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 928 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__AllowExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_25, (MR_Integer) 0)));
#line 929 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___IsMutable_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_25, (MR_Integer) 1)));

#line 932 "make_hlds_passes.m"
#line 932 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__AllowExport_26) {
#line 932 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 932 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 931 "make_hlds_passes.m"
              {
#line 931 "make_hlds_passes.m"
              }
#line 932 "make_hlds_passes.m"
              break;
#line 932 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 933 "make_hlds_passes.m"
              {
#line 934 "make_hlds_passes.m"
                {
#line 934 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_3_clause\'/8", (MR_String) "bad introduced clause");
#line 934 "make_hlds_passes.m"
                  return;
                }
#line 933 "make_hlds_passes.m"
              }
#line 932 "make_hlds_passes.m"
              break;
#line 932 "make_hlds_passes.m"
          }
#line 928 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 928 "make_hlds_passes.m"
        }
#line 937 "make_hlds_passes.m"
    else
#line 937 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_32;
#line 942 "make_hlds_passes.m"
    {
#line 942 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SeqNum_21));
#line 942 "make_hlds_passes.m"
    }
#line 941 "make_hlds_passes.m"
    {
#line 941 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_18, hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__PredName_14, hlds__make_hlds__make_hlds_passes__Args_16, hlds__make_hlds__make_hlds_passes__Body_19, hlds__make_hlds__make_hlds_passes__Status_10, hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_33);
#line 941 "make_hlds_passes.m"
      return;
    }
#line 912 "make_hlds_passes.m"
  }
#line 907 "make_hlds_passes.m"
}

#line 895 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
#line 895 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 895 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6,
#line 895 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10,
#line 895 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11)
#line 895 "make_hlds_passes.m"
{
#line 899 "make_hlds_passes.m"
  {
#line 899 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 899 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 899 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9;
#line 900 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 900 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 900 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 903 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_16_16;
#line 903 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17;
#line 903 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18;
#line 903 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19;

#line 901 "make_hlds_passes.m"
    {
#line 901 "make_hlds_passes.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6)), hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8, &hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9);
    }
#line 903 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 903 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 903 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 903 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 903 "make_hlds_passes.m"
    {
#line 903 "make_hlds_passes.m"
      MR_Word base;
#line 903 "make_hlds_passes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 903 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11 = base;
#line 903 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_16_16));
#line 903 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_17_17));
#line 903 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_18_18));
#line 903 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9));
#line 903 "make_hlds_passes.m"
    }
#line 899 "make_hlds_passes.m"
  }
#line 895 "make_hlds_passes.m"
}

#line 884 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_module_defn_9_p_0_1(
#line 884 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 884 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 884 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
#line 884 "make_hlds_passes.m"
{
#line 884 "make_hlds_passes.m"
  {
#line 884 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 884 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11;

#line 884 "make_hlds_passes.m"
    {
#line 884 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11);
    }
#line 884 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11));
#line 884 "make_hlds_passes.m"
  }
#line 884 "make_hlds_passes.m"
}

#line 872 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_3_module_defn_9_p_0(
#line 872 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_10,
#line 872 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_24,
#line 872 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_25,
#line 872 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 872 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 872 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28,
#line 872 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29,
#line 872 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30,
#line 872 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31)
#line 872 "make_hlds_passes.m"
{
#line 878 "make_hlds_passes.m"
  {
#line 878 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 878 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_10, (MR_Integer) 0)));
#line 879 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_10, (MR_Integer) 1)));
#line 879 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_10, (MR_Integer) 2)));
#line 886 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_18;
#line 886 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_19;

#line 880 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ModuleDefn_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 880 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 880 "make_hlds_passes.m"
      {
#line 880 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_15, (MR_Integer) 1)));
#line 880 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_15, (MR_Integer) 2)));
#line 883 "make_hlds_passes.m"
        {
#line 883 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;

#line 884 "make_hlds_passes.m"
          {
#line 884 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 884 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_32_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0]));
#line 884 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_3_module_defn_9_p_0_1));
#line 884 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 884 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_32_32, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_18));
#line 884 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_32_32, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_19));
#line 884 "make_hlds_passes.m"
          }
#line 883 "make_hlds_passes.m"
          {
#line 883 "make_hlds_passes.m"
            hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__make_hlds_passes__V_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29);
          }
#line 883 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_25 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_24;
#line 883 "make_hlds_passes.m"
        }
#line 880 "make_hlds_passes.m"
      }
#line 880 "make_hlds_passes.m"
    else
#line 891 "make_hlds_passes.m"
      {
#line 891 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ItemStatus1_20;

#line 886 "make_hlds_passes.m"
        {
#line 886 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_p_0(hlds__make_hlds__make_hlds_passes__ModuleDefn_15, &hlds__make_hlds__make_hlds_passes__ItemStatus1_20);
        }
#line 891 "make_hlds_passes.m"
        if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 887 "make_hlds_passes.m"
          {
#line 887 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__NeedQual_21;
#line 887 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_22;
#line 887 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_23;

#line 887 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemStatus1_20, (MR_Integer) 0)));
#line 887 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__NeedQual_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemStatus1_20, (MR_Integer) 1)));
#line 888 "make_hlds_passes.m"
            {
#line 888 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, &hlds__make_hlds__make_hlds_passes__MQInfo0_22);
            }
#line 889 "make_hlds_passes.m"
            {
#line 889 "make_hlds_passes.m"
              parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0(hlds__make_hlds__make_hlds_passes__NeedQual_21, hlds__make_hlds__make_hlds_passes__MQInfo0_22, &hlds__make_hlds__make_hlds_passes__MQInfo_23);
            }
#line 890 "make_hlds_passes.m"
            {
#line 890 "make_hlds_passes.m"
              hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29);
            }
#line 887 "make_hlds_passes.m"
          }
#line 891 "make_hlds_passes.m"
        else
#line 892 "make_hlds_passes.m"
          {
#line 892 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28;
#line 892 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_25 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_24;
#line 892 "make_hlds_passes.m"
          }
#line 891 "make_hlds_passes.m"
      }
#line 878 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30;
#line 878 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 878 "make_hlds_passes.m"
  }
#line 872 "make_hlds_passes.m"
}

#line 819 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_p_0(
#line 819 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_10,
#line 819 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32,
#line 819 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33,
#line 819 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 819 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 819 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36,
#line 819 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37,
#line 819 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38,
#line 819 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39)
#line 819 "make_hlds_passes.m"
{
#line 825 "make_hlds_passes.m"
  {
#line 825 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 825 "make_hlds_passes.m"
#line 825 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10)) {
#line 825 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 858 "make_hlds_passes.m"
        {
#line 858 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 858 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 858 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 858 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 858 "make_hlds_passes.m"
        }
#line 825 "make_hlds_passes.m"
        break;
#line 825 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 859 "make_hlds_passes.m"
        {
#line 859 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 859 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 859 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 859 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 859 "make_hlds_passes.m"
        }
#line 825 "make_hlds_passes.m"
        break;
#line 825 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 825 "make_hlds_passes.m"
        {
#line 825 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 2);

#line 826 "make_hlds_passes.m"
          {
#line 826 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_3_module_defn_9_p_0(hlds__make_hlds__make_hlds_passes__ItemModuleDefn_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
#line 826 "make_hlds_passes.m"
            return;
          }
#line 825 "make_hlds_passes.m"
        }
#line 825 "make_hlds_passes.m"
        break;
#line 825 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 825 "make_hlds_passes.m"
#line 825 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 0)))) {
#line 825 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 829 "make_hlds_passes.m"
            {
#line 829 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemClause_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 830 "make_hlds_passes.m"
              {
#line 830 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_clause_8_p_0(hlds__make_hlds__make_hlds_passes__ItemClause_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 829 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 829 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 832 "make_hlds_passes.m"
            {
#line 832 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 833 "make_hlds_passes.m"
              {
#line 833 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_type_defn_8_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefn_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 832 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 832 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 860 "make_hlds_passes.m"
            {
#line 860 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 860 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 860 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 860 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 860 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 861 "make_hlds_passes.m"
            {
#line 861 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 861 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 861 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 861 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 861 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 836 "make_hlds_passes.m"
            {
#line 836 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 837 "make_hlds_passes.m"
              {
#line 837 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_pred_decl_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 836 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 836 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 862 "make_hlds_passes.m"
            {
#line 862 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 862 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 862 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 862 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 862 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 840 "make_hlds_passes.m"
            {
#line 840 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 841 "make_hlds_passes.m"
              {
#line 841 "make_hlds_passes.m"
                hlds__make_hlds__add_pragma__add_pass_3_pragma_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPragma_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 840 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 840 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 843 "make_hlds_passes.m"
            {
#line 843 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPromise_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 844 "make_hlds_passes.m"
              {
#line 844 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_promise_8_p_0(hlds__make_hlds__make_hlds_passes__ItemPromise_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 843 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 843 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 863 "make_hlds_passes.m"
            {
#line 863 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 863 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 863 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 863 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 863 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 864 "make_hlds_passes.m"
            {
#line 864 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 864 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 864 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 864 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 864 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 847 "make_hlds_passes.m"
            {
#line 847 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 848 "make_hlds_passes.m"
              {
#line 848 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_95_91_50_93_95_48_8_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 847 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 847 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 11:
#line 851 "make_hlds_passes.m"
            {
#line 851 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 852 "make_hlds_passes.m"
              {
#line 852 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_3_finalise_5_p_0(hlds__make_hlds__make_hlds_passes__ItemFinalise_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
              }
#line 851 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 851 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 851 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 12:
#line 854 "make_hlds_passes.m"
            {
#line 854 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 854 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_78;

#line 1332 "make_hlds_passes.m"
              {
#line 1332 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__DefinedThisModule_78 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32);
              }
#line 1337 "make_hlds_passes.m"
#line 1337 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_78) {
#line 1337 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 1338 "make_hlds_passes.m"
                  {
#line 1338 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 1338 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 1338 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 1338 "make_hlds_passes.m"
                  }
#line 1337 "make_hlds_passes.m"
                  break;
#line 1337 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 1335 "make_hlds_passes.m"
                  {
#line 1335 "make_hlds_passes.m"
                    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
                  }
#line 1337 "make_hlds_passes.m"
                  break;
#line 1337 "make_hlds_passes.m"
              }
#line 854 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 854 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
          case (MR_Integer) 13:
#line 865 "make_hlds_passes.m"
            {
#line 865 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_32;
#line 865 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 865 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 865 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 865 "make_hlds_passes.m"
            }
#line 825 "make_hlds_passes.m"
            break;
#line 825 "make_hlds_passes.m"
        }
#line 825 "make_hlds_passes.m"
        break;
#line 825 "make_hlds_passes.m"
    }
#line 825 "make_hlds_passes.m"
  }
#line 819 "make_hlds_passes.m"
}

#line 787 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(
#line 787 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_7,
#line 787 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 787 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22,
#line 787 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23,
#line 787 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24,
#line 787 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25)
#line 787 "make_hlds_passes.m"
{
#line 791 "make_hlds_passes.m"
  {
#line 791 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 791 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 791 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_21;
#line 791 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 792 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 793 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 798 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 795 "make_hlds_passes.m"
      {
#line 795 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 6)));
#line 794 "make_hlds_passes.m"
        MR_String hlds__make_hlds__make_hlds_passes___Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 0)));
#line 794 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 1)));
#line 794 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___InitTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 2)));
#line 794 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 3)));
#line 794 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___MutAttrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 4)));
#line 794 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 5)));
#line 794 "make_hlds_passes.m"
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMutable_7, (MR_Integer) 7)));

#line 796 "make_hlds_passes.m"
        {
#line 796 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[21]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
        }
#line 795 "make_hlds_passes.m"
      }
#line 798 "make_hlds_passes.m"
    else
#line 798 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_24;
#line 808 "make_hlds_passes.m"
    {
#line 808 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_21 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_11);
    }
#line 812 "make_hlds_passes.m"
#line 812 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_21) {
#line 812 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 812 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 813 "make_hlds_passes.m"
        {
#line 813 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22;
#line 813 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 813 "make_hlds_passes.m"
        }
#line 812 "make_hlds_passes.m"
        break;
#line 812 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 811 "make_hlds_passes.m"
        {
#line 811 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_7, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25);
#line 811 "make_hlds_passes.m"
          return;
        }
#line 812 "make_hlds_passes.m"
        break;
#line 812 "make_hlds_passes.m"
    }
#line 791 "make_hlds_passes.m"
  }
#line 787 "make_hlds_passes.m"
}

#line 761 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_finalise_6_p_0(
#line 761 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_7,
#line 761 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 761 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
#line 761 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
#line 761 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
#line 761 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
#line 761 "make_hlds_passes.m"
{
#line 765 "make_hlds_passes.m"
  {
#line 765 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 765 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 2)));
#line 765 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 3)));
#line 765 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 768 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 0)));
#line 768 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 1)));
#line 768 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinalise_7, (MR_Integer) 4)));
#line 769 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 770 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 781 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 775 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "make_hlds_passes.m"
        {
#line 773 "make_hlds_passes.m"
          {
#line 773 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[19]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
#line 772 "make_hlds_passes.m"
        }
#line 775 "make_hlds_passes.m"
      else
#line 778 "make_hlds_passes.m"
        {
#line 779 "make_hlds_passes.m"
          {
#line 779 "make_hlds_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_finalise\'/6", (MR_String) "bad introduced finalise declaration");
#line 779 "make_hlds_passes.m"
            return;
          }
#line 778 "make_hlds_passes.m"
        }
#line 781 "make_hlds_passes.m"
    else
#line 781 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 765 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
#line 765 "make_hlds_passes.m"
  }
#line 761 "make_hlds_passes.m"
}

#line 728 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_initialise_6_p_0(
#line 728 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_7,
#line 728 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 728 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21,
#line 728 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22,
#line 728 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23,
#line 728 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24)
#line 728 "make_hlds_passes.m"
{
#line 732 "make_hlds_passes.m"
  {
#line 732 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 732 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 2)));
#line 732 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 3)));
#line 732 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 735 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 0)));
#line 735 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 1)));
#line 735 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_7, (MR_Integer) 4)));
#line 736 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 737 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 755 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 742 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "make_hlds_passes.m"
        {
#line 740 "make_hlds_passes.m"
          {
#line 740 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24);
          }
#line 739 "make_hlds_passes.m"
        }
#line 742 "make_hlds_passes.m"
      else
#line 743 "make_hlds_passes.m"
        {
#line 743 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_18 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_13), (MR_Integer) 1);
#line 743 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_18, (MR_Integer) 1)));
#line 744 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_18, (MR_Integer) 0)));

#line 749 "make_hlds_passes.m"
#line 749 "make_hlds_passes.m"
          switch (hlds__make_hlds__make_hlds_passes__IsMutable_20) {
#line 749 "make_hlds_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 749 "make_hlds_passes.m"
            case (MR_Integer) 1:
#line 748 "make_hlds_passes.m"
              {
#line 748 "make_hlds_passes.m"
              }
#line 749 "make_hlds_passes.m"
              break;
#line 749 "make_hlds_passes.m"
            case (MR_Integer) 0:
#line 750 "make_hlds_passes.m"
              {
#line 751 "make_hlds_passes.m"
                {
#line 751 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_2_initialise\'/6", (MR_String) "bad introduced initialise declaration");
#line 751 "make_hlds_passes.m"
                  return;
                }
#line 750 "make_hlds_passes.m"
              }
#line 749 "make_hlds_passes.m"
              break;
#line 749 "make_hlds_passes.m"
          }
#line 743 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23;
#line 743 "make_hlds_passes.m"
        }
#line 755 "make_hlds_passes.m"
    else
#line 755 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_23;
#line 732 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_21;
#line 732 "make_hlds_passes.m"
  }
#line 728 "make_hlds_passes.m"
}

#line 707 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_instance_6_p_0(
#line 707 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemInstance_7,
#line 707 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 707 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24,
#line 707 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25,
#line 707 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26,
#line 707 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27)
#line 707 "make_hlds_passes.m"
{
#line 711 "make_hlds_passes.m"
  {
#line 711 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 0)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 1)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 2)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 3)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 4)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 5)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstanceModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 6)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 7)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 711 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__BodyStatus_22;
#line 712 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_7, (MR_Integer) 8)));
#line 714 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 718 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Body_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "make_hlds_passes.m"
      {
#line 717 "make_hlds_passes.m"
        hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_20, &hlds__make_hlds__make_hlds_passes__BodyStatus_22);
      }
#line 718 "make_hlds_passes.m"
    else
#line 720 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__BodyStatus_22 = hlds__make_hlds__make_hlds_passes__ImportStatus_20;
#line 722 "make_hlds_passes.m"
    {
#line 722 "make_hlds_passes.m"
      hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(hlds__make_hlds__make_hlds_passes__InstanceModuleName_17, hlds__make_hlds__make_hlds_passes__Constraints_14, hlds__make_hlds__make_hlds_passes__Name_11, hlds__make_hlds__make_hlds_passes__Types_12, hlds__make_hlds__make_hlds_passes__OriginalTypes_13, hlds__make_hlds__make_hlds_passes__Body_15, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__BodyStatus_22, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27);
#line 722 "make_hlds_passes.m"
      return;
    }
#line 711 "make_hlds_passes.m"
  }
#line 707 "make_hlds_passes.m"
}

#line 675 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_pred_decl_6_p_0(
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes___Status_8,
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 675 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 675 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36,
#line 675 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37)
#line 675 "make_hlds_passes.m"
{
#line 679 "make_hlds_passes.m"
  {
#line 679 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 679 "make_hlds_passes.m"
    {
#line 679 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_37);
#line 679 "make_hlds_passes.m"
      return;
    }
#line 679 "make_hlds_passes.m"
  }
#line 675 "make_hlds_passes.m"
}

#line 662 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(
#line 662 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 662 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_2,
#line 662 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 662 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 662 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 662 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 662 "make_hlds_passes.m"
{
#line 666 "make_hlds_passes.m"
  while (MR_TRUE)
#line 666 "make_hlds_passes.m"
    {
#line 666 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 666 "make_hlds_passes.m"
      {
#line 666 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 666 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "make_hlds_passes.m"
          {
#line 666 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 666 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 666 "make_hlds_passes.m"
          }
#line 666 "make_hlds_passes.m"
        else
#line 668 "make_hlds_passes.m"
          {
#line 668 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 668 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 668 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 669 "make_hlds_passes.m"
            {
#line 669 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_14, hlds__make_hlds__make_hlds_passes__Status_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
            }
#line 670 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 670 "make_hlds_passes.m"
            {
#line 670 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_15;
#line 670 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 670 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 670 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 670 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 670 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 670 "make_hlds_passes.m"
            }
#line 670 "make_hlds_passes.m"
            continue;
#line 668 "make_hlds_passes.m"
          }
#line 666 "make_hlds_passes.m"
      }
#line 666 "make_hlds_passes.m"
      break;
#line 666 "make_hlds_passes.m"
    }
#line 662 "make_hlds_passes.m"
}

#line 647 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_2_type_defn_6_p_0(
#line 647 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7,
#line 647 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 647 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 647 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 647 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22,
#line 647 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23)
#line 647 "make_hlds_passes.m"
{
#line 651 "make_hlds_passes.m"
  {
#line 651 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 651 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 2)));
#line 652 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 0)));
#line 652 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 1)));
#line 652 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 3)));
#line 652 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 4)));
#line 652 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 5)));
#line 658 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17;
#line 654 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18;

#line 654 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 654 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 654 "make_hlds_passes.m"
      {
#line 654 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 1)));
#line 654 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 2)));
#line 655 "make_hlds_passes.m"
        {
#line 655 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 4)));
#line 655 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 0)));
#line 655 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 1)));
#line 655 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 2)));
#line 655 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 3)));

#line 656 "make_hlds_passes.m"
          {
#line 656 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_19, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23);
#line 656 "make_hlds_passes.m"
            return;
          }
#line 655 "make_hlds_passes.m"
        }
#line 654 "make_hlds_passes.m"
      }
#line 654 "make_hlds_passes.m"
    else
#line 659 "make_hlds_passes.m"
      {
#line 659 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22;
#line 659 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20;
#line 659 "make_hlds_passes.m"
      }
#line 651 "make_hlds_passes.m"
  }
#line 647 "make_hlds_passes.m"
}

#line 597 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_7_p_0(
#line 597 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_8,
#line 597 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33,
#line 597 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34,
#line 597 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35,
#line 597 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36,
#line 597 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37,
#line 597 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38)
#line 597 "make_hlds_passes.m"
{
#line 603 "make_hlds_passes.m"
  {
#line 603 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 603 "make_hlds_passes.m"
#line 603 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_8)) {
#line 603 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 632 "make_hlds_passes.m"
        {
#line 632 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 632 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 632 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 632 "make_hlds_passes.m"
        }
#line 603 "make_hlds_passes.m"
        break;
#line 603 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 633 "make_hlds_passes.m"
        {
#line 633 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 633 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 633 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 633 "make_hlds_passes.m"
        }
#line 603 "make_hlds_passes.m"
        break;
#line 603 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 603 "make_hlds_passes.m"
        {
#line 603 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_12 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_8), (MR_Integer) 2);
#line 603 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ModuleDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_12, (MR_Integer) 0)));
#line 604 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_12, (MR_Integer) 1)));
#line 604 "make_hlds_passes.m"
          MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_12, (MR_Integer) 2)));
#line 607 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__NewStatus_16;

#line 605 "make_hlds_passes.m"
          {
#line 605 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_p_0(hlds__make_hlds__make_hlds_passes__ModuleDefn_13, &hlds__make_hlds__make_hlds_passes__NewStatus_16);
          }
#line 607 "make_hlds_passes.m"
          if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 606 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__NewStatus_16;
#line 607 "make_hlds_passes.m"
          else
#line 607 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 603 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 603 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 603 "make_hlds_passes.m"
        }
#line 603 "make_hlds_passes.m"
        break;
#line 603 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 603 "make_hlds_passes.m"
#line 603 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 0)))) {
#line 603 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 634 "make_hlds_passes.m"
            {
#line 634 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 634 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 634 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 634 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 611 "make_hlds_passes.m"
            {
#line 611 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 612 "make_hlds_passes.m"
              {
#line 612 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_type_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefn_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 611 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 611 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 635 "make_hlds_passes.m"
            {
#line 635 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 635 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 635 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 635 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 636 "make_hlds_passes.m"
            {
#line 636 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 636 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 636 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 636 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 614 "make_hlds_passes.m"
            {
#line 614 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 615 "make_hlds_passes.m"
              {
#line 615 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_50_95_112_114_101_100_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 614 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 614 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 637 "make_hlds_passes.m"
            {
#line 637 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 637 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 637 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 637 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 617 "make_hlds_passes.m"
            {
#line 617 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 618 "make_hlds_passes.m"
              {
#line 618 "make_hlds_passes.m"
                hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPragma_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 617 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 617 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 638 "make_hlds_passes.m"
            {
#line 638 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 638 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 638 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 638 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 639 "make_hlds_passes.m"
            {
#line 639 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 639 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 639 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 639 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 620 "make_hlds_passes.m"
            {
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInstance_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Name_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 0)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Types_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 1)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__OriginalTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 2)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Constraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 3)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Body_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 4)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__VarSet_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 5)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__InstanceModuleName_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 6)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Context_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 7)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, (MR_Integer) 0)));
#line 620 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__BodyStatus_73;
#line 712 "make_hlds_passes.m"
              MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInstance_20, (MR_Integer) 8)));
#line 714 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, (MR_Integer) 1)));

#line 718 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__Body_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "make_hlds_passes.m"
                {
#line 717 "make_hlds_passes.m"
                  hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__make_hlds_passes__ImportStatus_71, &hlds__make_hlds__make_hlds_passes__BodyStatus_73);
                }
#line 718 "make_hlds_passes.m"
              else
#line 720 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__BodyStatus_73 = hlds__make_hlds__make_hlds_passes__ImportStatus_71;
#line 722 "make_hlds_passes.m"
              {
#line 722 "make_hlds_passes.m"
                hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(hlds__make_hlds__make_hlds_passes__InstanceModuleName_68, hlds__make_hlds__make_hlds_passes__Constraints_65, hlds__make_hlds__make_hlds_passes__Name_62, hlds__make_hlds__make_hlds_passes__Types_63, hlds__make_hlds__make_hlds_passes__OriginalTypes_64, hlds__make_hlds__make_hlds_passes__Body_66, hlds__make_hlds__make_hlds_passes__VarSet_67, hlds__make_hlds__make_hlds_passes__BodyStatus_73, hlds__make_hlds__make_hlds_passes__Context_69, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 620 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 620 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 623 "make_hlds_passes.m"
            {
#line 623 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 624 "make_hlds_passes.m"
              {
#line 624 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_initialise_6_p_0(hlds__make_hlds__make_hlds_passes__ItemInitialise_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 623 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 623 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 11:
#line 626 "make_hlds_passes.m"
            {
#line 626 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalise_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 627 "make_hlds_passes.m"
              {
#line 627 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_finalise_6_p_0(hlds__make_hlds__make_hlds_passes__ItemFinalise_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 626 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 626 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 12:
#line 629 "make_hlds_passes.m"
            {
#line 629 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_8, (MR_Integer) 1)));

#line 630 "make_hlds_passes.m"
              {
#line 630 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_2_mutable_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38);
              }
#line 629 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 629 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
          case (MR_Integer) 13:
#line 640 "make_hlds_passes.m"
            {
#line 640 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 640 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_35;
#line 640 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_37;
#line 640 "make_hlds_passes.m"
            }
#line 603 "make_hlds_passes.m"
            break;
#line 603 "make_hlds_passes.m"
        }
#line 603 "make_hlds_passes.m"
        break;
#line 603 "make_hlds_passes.m"
    }
#line 603 "make_hlds_passes.m"
  }
#line 597 "make_hlds_passes.m"
}

#line 578 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_mutable_6_p_0(
#line 578 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_7,
#line 578 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 578 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14,
#line 578 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15,
#line 578 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16,
#line 578 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17)
#line 578 "make_hlds_passes.m"
{
#line 582 "make_hlds_passes.m"
  {
#line 582 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 582 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 582 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_13;
#line 585 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));

#line 586 "make_hlds_passes.m"
    {
#line 586 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__DefinedThisModule_13 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_11);
    }
#line 590 "make_hlds_passes.m"
#line 590 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_13) {
#line 590 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 590 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 591 "make_hlds_passes.m"
        {
#line 591 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14;
#line 591 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16;
#line 591 "make_hlds_passes.m"
        }
#line 590 "make_hlds_passes.m"
        break;
#line 590 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 589 "make_hlds_passes.m"
        {
#line 589 "make_hlds_passes.m"
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_7, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_17);
#line 589 "make_hlds_passes.m"
          return;
        }
#line 590 "make_hlds_passes.m"
        break;
#line 590 "make_hlds_passes.m"
    }
#line 582 "make_hlds_passes.m"
  }
#line 578 "make_hlds_passes.m"
}

#line 556 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_mode_decl_6_p_0(
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_7,
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24,
#line 556 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25,
#line 556 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26,
#line 556 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27)
#line 556 "make_hlds_passes.m"
{
#line 560 "make_hlds_passes.m"
  {
#line 560 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 560 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 0)));
#line 560 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 1)));
#line 560 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 2)));
#line 560 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 4)));
#line 560 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 5)));
#line 560 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 6)));
#line 561 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 3)));
#line 561 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_7, (MR_Integer) 7)));

#line 569 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "make_hlds_passes.m"
      {
#line 573 "make_hlds_passes.m"
        {
#line 573 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_mode_decl\'/6", (MR_String) "no pred_or_func on mode declaration");
#line 573 "make_hlds_passes.m"
          return;
        }
#line 570 "make_hlds_passes.m"
      }
#line 569 "make_hlds_passes.m"
    else
#line 564 "make_hlds_passes.m"
      {
#line 564 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12, (MR_Integer) 0)));
#line 564 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 0)));
#line 565 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_8, (MR_Integer) 1)));
#line 567 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_23_23;

#line 567 "make_hlds_passes.m"
        {
#line 567 "make_hlds_passes.m"
          hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__PredName_11, hlds__make_hlds__make_hlds_passes__Modes_13, hlds__make_hlds__make_hlds_passes__MaybeDet_15, hlds__make_hlds__make_hlds_passes__ImportStatus_20, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__PredOrFunc_19, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__V_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27);
        }
#line 564 "make_hlds_passes.m"
      }
#line 560 "make_hlds_passes.m"
  }
#line 556 "make_hlds_passes.m"
}

#line 528 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2(
#line 528 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 528 "make_hlds_passes.m"
{
#line 528 "make_hlds_passes.m"
  {
#line 528 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 528 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 528 "make_hlds_passes.m"
    {
#line 528 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__528__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 528 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 528 "make_hlds_passes.m"
  }
#line 528 "make_hlds_passes.m"
}

#line 527 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1(
#line 527 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 527 "make_hlds_passes.m"
{
#line 527 "make_hlds_passes.m"
  {
#line 527 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 527 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 527 "make_hlds_passes.m"
    {
#line 527 "make_hlds_passes.m"
      return hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pass_1_pred_decl__527__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 527 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 527 "make_hlds_passes.m"
  }
#line 527 "make_hlds_passes.m"
}

#line 517 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0(
#line 517 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7,
#line 517 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 517 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32,
#line 517 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33,
#line 517 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34,
#line 517 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35)
#line 517 "make_hlds_passes.m"
{
#line 521 "make_hlds_passes.m"
  {
#line 521 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDetism_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Purity_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ClassContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Markers_29;
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrigin_30;
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_36_36;
#line 521 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_41_41;
#line 522 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));
#line 550 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_31_31;

#line 527 "make_hlds_passes.m"
    {
#line 527 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 527 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0]));
#line 527 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_1));
#line 527 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 527 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_14));
#line 527 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "make_hlds_passes.m"
    }
#line 527 "make_hlds_passes.m"
    {
#line 527 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_36_36, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_pred_decl\'/6", (MR_String) "WithType != no");
    }
#line 528 "make_hlds_passes.m"
    {
#line 528 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[1]));
#line 528 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0_2));
#line 528 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_15));
#line 528 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "make_hlds_passes.m"
    }
#line 528 "make_hlds_passes.m"
    {
#line 528 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_41_41, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_pred_decl\'/6", (MR_String) "WithInst != no");
    }
#line 533 "make_hlds_passes.m"
    {
#line 533 "make_hlds_passes.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__make_hlds_passes__Markers0_25);
    }
#line 544 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Markers_29 = hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 544 "make_hlds_passes.m"
    else
#line 535 "make_hlds_passes.m"
      {
#line 535 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_26 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 535 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_26, (MR_Integer) 1)));
#line 536 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_26, (MR_Integer) 0)));

#line 540 "make_hlds_passes.m"
#line 540 "make_hlds_passes.m"
        switch (hlds__make_hlds__make_hlds_passes__IsMutable_28) {
#line 540 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 540 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 538 "make_hlds_passes.m"
            {
#line 539 "make_hlds_passes.m"
              {
#line 539 "make_hlds_passes.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, hlds__make_hlds__make_hlds_passes__Markers0_25, &hlds__make_hlds__make_hlds_passes__Markers_29);
              }
#line 538 "make_hlds_passes.m"
            }
#line 540 "make_hlds_passes.m"
            break;
#line 540 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 542 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Markers_29 = hlds__make_hlds__make_hlds_passes__Markers0_25;
#line 540 "make_hlds_passes.m"
            break;
#line 540 "make_hlds_passes.m"
        }
#line 535 "make_hlds_passes.m"
      }
#line 549 "make_hlds_passes.m"
    {
#line 549 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredOrigin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 549 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredName_11));
#line 549 "make_hlds_passes.m"
    }
#line 550 "make_hlds_passes.m"
    {
#line 550 "make_hlds_passes.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__make_hlds_passes__PredOrigin_30, hlds__make_hlds__make_hlds_passes__TypeVarSet_18, hlds__make_hlds__make_hlds_passes__InstVarSet_19, hlds__make_hlds__make_hlds_passes__ExistQVars_20, hlds__make_hlds__make_hlds_passes__PredOrFunc_12, hlds__make_hlds__make_hlds_passes__PredName_11, hlds__make_hlds__make_hlds_passes__TypesAndModes_13, hlds__make_hlds__make_hlds_passes__MaybeDetism_16, hlds__make_hlds__make_hlds_passes__Purity_21, hlds__make_hlds__make_hlds_passes__ClassContext_22, hlds__make_hlds__make_hlds_passes__Markers_29, hlds__make_hlds__make_hlds_passes__Context_23, hlds__make_hlds__make_hlds_passes__Status_8, &hlds__make_hlds__make_hlds_passes__V_31_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35);
    }
#line 521 "make_hlds_passes.m"
  }
#line 517 "make_hlds_passes.m"
}

#line 504 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_6_p_0(
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_2,
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 504 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 504 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 504 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 504 "make_hlds_passes.m"
{
#line 508 "make_hlds_passes.m"
  while (MR_TRUE)
#line 508 "make_hlds_passes.m"
    {
#line 508 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 508 "make_hlds_passes.m"
      {
#line 508 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 508 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "make_hlds_passes.m"
          {
#line 508 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 508 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 508 "make_hlds_passes.m"
          }
#line 508 "make_hlds_passes.m"
        else
#line 510 "make_hlds_passes.m"
          {
#line 510 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 510 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__MutableInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 510 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 510 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;
#line 510 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_2, (MR_Integer) 0)));
#line 510 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_37;
#line 585 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Status_2, (MR_Integer) 1)));

#line 586 "make_hlds_passes.m"
            {
#line 586 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__DefinedThisModule_37 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_35);
            }
#line 590 "make_hlds_passes.m"
#line 590 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_37) {
#line 590 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 590 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 591 "make_hlds_passes.m"
                {
#line 591 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 591 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 591 "make_hlds_passes.m"
                }
#line 590 "make_hlds_passes.m"
                break;
#line 590 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 589 "make_hlds_passes.m"
                {
#line 589 "make_hlds_passes.m"
                  hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__MutableInfo_14, hlds__make_hlds__make_hlds_passes__Status_2, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
                }
#line 590 "make_hlds_passes.m"
                break;
#line 590 "make_hlds_passes.m"
            }
#line 512 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 512 "make_hlds_passes.m"
            {
#line 512 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__MutableInfos_15;
#line 512 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23_23;
#line 512 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 512 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 512 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 512 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 512 "make_hlds_passes.m"
            }
#line 512 "make_hlds_passes.m"
            continue;
#line 510 "make_hlds_passes.m"
          }
#line 508 "make_hlds_passes.m"
      }
#line 508 "make_hlds_passes.m"
      break;
#line 508 "make_hlds_passes.m"
    }
#line 504 "make_hlds_passes.m"
}

#line 476 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_type_defn_6_p_0(
#line 476 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7,
#line 476 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_8,
#line 476 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20,
#line 476 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21,
#line 476 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22,
#line 476 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23)
#line 476 "make_hlds_passes.m"
{
#line 480 "make_hlds_passes.m"
  {
#line 480 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 0)));
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 1)));
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 2)));
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 3)));
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 4)));
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26;
#line 480 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27;
#line 490 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_7, (MR_Integer) 5)));
#line 498 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17;
#line 492 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18;

#line 492 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 492 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 492 "make_hlds_passes.m"
      {
#line 492 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 1)));
#line 492 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_13, (MR_Integer) 2)));
#line 494 "make_hlds_passes.m"
        {
#line 494 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_19;
#line 494 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24;
#line 494 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25;
#line 495 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_30_30;
#line 495 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_31_31;
#line 495 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_32_32;
#line 495 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_33_33;

#line 493 "make_hlds_passes.m"
          {
#line 493 "make_hlds_passes.m"
            hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_10_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_14, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__TypeParams_12, hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, hlds__make_hlds__make_hlds_passes__Context_15, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25);
          }
#line 495 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 0)));
#line 495 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 1)));
#line 495 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 2)));
#line 495 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 3)));
#line 495 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__MutableItems_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_17, (MR_Integer) 4)));
#line 496 "make_hlds_passes.m"
          {
#line 496 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_solver_type_mutable_items_pass_1_6_p_0(hlds__make_hlds__make_hlds_passes__MutableItems_19, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_25_25, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27);
          }
#line 494 "make_hlds_passes.m"
        }
#line 492 "make_hlds_passes.m"
      }
#line 492 "make_hlds_passes.m"
    else
#line 499 "make_hlds_passes.m"
      {
#line 499 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_22;
#line 499 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_20;
#line 499 "make_hlds_passes.m"
      }
#line 501 "make_hlds_passes.m"
    {
#line 501 "make_hlds_passes.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_14, hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__TypeParams_12, hlds__make_hlds__make_hlds_passes__TypeDefn_13, hlds__make_hlds__make_hlds_passes__Context_15, hlds__make_hlds__make_hlds_passes__Status_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_23);
#line 501 "make_hlds_passes.m"
      return;
    }
#line 480 "make_hlds_passes.m"
  }
#line 476 "make_hlds_passes.m"
}

#line 462 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_p_0(
#line 462 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 462 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_2,
#line 462 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_3)
#line 462 "make_hlds_passes.m"
{
#line 465 "make_hlds_passes.m"
  while (MR_TRUE)
#line 465 "make_hlds_passes.m"
    {
#line 465 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 465 "make_hlds_passes.m"
      {
#line 465 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 465 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_2;
#line 465 "make_hlds_passes.m"
        else
#line 466 "make_hlds_passes.m"
          {
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_18;
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_19;
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Preds0_10;
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__PredInfo0_11;
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__PredInfo_12;
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Preds_13;
#line 466 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16_16;
#line 468 "make_hlds_passes.m"
            MR_Box hlds__make_hlds__make_hlds_passes__conv0_PredInfo0_11;

#line 467 "make_hlds_passes.m"
            {
#line 467 "make_hlds_passes.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_2, &hlds__make_hlds__make_hlds_passes__Preds0_10);
            }
#line 7238 "hlds.make_hlds.make_hlds_passes.c"
            hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 7240 "hlds.make_hlds.make_hlds_passes.c"
            hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 468 "make_hlds_passes.m"
            {
#line 468 "make_hlds_passes.m"
              mercury__map__lookup_3_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_18, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_19, hlds__make_hlds__make_hlds_passes__Preds0_10, ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredId_7)), &hlds__make_hlds__make_hlds_passes__conv0_PredInfo0_11);
            }
#line 468 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__PredInfo0_11 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv0_PredInfo0_11);
#line 469 "make_hlds_passes.m"
            {
#line 469 "make_hlds_passes.m"
              hlds__hlds_pred__pred_info_mark_as_external_2_p_0(hlds__make_hlds__make_hlds_passes__PredInfo0_11, &hlds__make_hlds__make_hlds_passes__PredInfo_12);
            }
#line 470 "make_hlds_passes.m"
            {
#line 470 "make_hlds_passes.m"
              mercury__map__det_update_4_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_18, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_19, ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredId_7)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredInfo_12)), hlds__make_hlds__make_hlds_passes__Preds0_10, &hlds__make_hlds__make_hlds_passes__Preds_13);
            }
#line 471 "make_hlds_passes.m"
            {
#line 471 "make_hlds_passes.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_13, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_2, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16_16);
            }
#line 472 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 472 "make_hlds_passes.m"
            {
#line 472 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__PredIds_8;
#line 472 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16_16;

#line 472 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 472 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 472 "make_hlds_passes.m"
            }
#line 472 "make_hlds_passes.m"
            continue;
#line 466 "make_hlds_passes.m"
          }
#line 465 "make_hlds_passes.m"
      }
#line 465 "make_hlds_passes.m"
      break;
#line 465 "make_hlds_passes.m"
    }
#line 462 "make_hlds_passes.m"
}

#line 443 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_p_0(
#line 443 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__PredName_8,
#line 443 "make_hlds_passes.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
#line 443 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
#line 443 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_17,
#line 443 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_18,
#line 443 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19,
#line 443 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20)
#line 443 "make_hlds_passes.m"
{
#line 447 "make_hlds_passes.m"
  {
#line 447 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 447 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredicateTable0_13;
#line 447 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

#line 450 "make_hlds_passes.m"
    {
#line 450 "make_hlds_passes.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__make_hlds_passes__PredicateTable0_13);
    }
#line 451 "make_hlds_passes.m"
    {
#line 451 "make_hlds_passes.m"
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredicateTable0_13, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__PredName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
    }
#line 456 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "make_hlds_passes.m"
      {
#line 458 "make_hlds_passes.m"
        {
#line 458 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__make_hlds_passes__PredName_8, hlds__make_hlds__make_hlds_passes__Arity_9, hlds__make_hlds__make_hlds_passes__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[15]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20);
        }
#line 457 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_18 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_17;
#line 457 "make_hlds_passes.m"
      }
#line 456 "make_hlds_passes.m"
    else
#line 454 "make_hlds_passes.m"
      {
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_45;
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_46;
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Preds0_37;
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredInfo0_38;
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredInfo_39;
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Preds_40;
#line 454 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16_43;
#line 468 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv0_PredInfo0_38;

#line 467 "make_hlds_passes.m"
        {
#line 467 "make_hlds_passes.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__make_hlds_passes__Preds0_37);
        }
#line 7373 "hlds.make_hlds.make_hlds_passes.c"
        hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 7375 "hlds.make_hlds.make_hlds_passes.c"
        hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 468 "make_hlds_passes.m"
        {
#line 468 "make_hlds_passes.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_45, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_46, hlds__make_hlds__make_hlds_passes__Preds0_37, ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredId_34)), &hlds__make_hlds__make_hlds_passes__conv0_PredInfo0_38);
        }
#line 468 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__PredInfo0_38 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv0_PredInfo0_38);
#line 469 "make_hlds_passes.m"
        {
#line 469 "make_hlds_passes.m"
          hlds__hlds_pred__pred_info_mark_as_external_2_p_0(hlds__make_hlds__make_hlds_passes__PredInfo0_38, &hlds__make_hlds__make_hlds_passes__PredInfo_39);
        }
#line 470 "make_hlds_passes.m"
        {
#line 470 "make_hlds_passes.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_18_45, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_19_46, ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredId_34)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredInfo_39)), hlds__make_hlds__make_hlds_passes__Preds0_37, &hlds__make_hlds__make_hlds_passes__Preds_40);
        }
#line 471 "make_hlds_passes.m"
        {
#line 471 "make_hlds_passes.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16_43);
        }
#line 472 "make_hlds_passes.m"
        {
#line 472 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__module_mark_preds_as_external_3_p_0(hlds__make_hlds__make_hlds_passes__PredIds_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_16_43, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_18);
        }
#line 454 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_19;
#line 454 "make_hlds_passes.m"
      }
#line 447 "make_hlds_passes.m"
  }
#line 443 "make_hlds_passes.m"
}

#line 426 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_p_0(
#line 426 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Specifiers_5,
#line 426 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__IStat_6,
#line 426 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8,
#line 426 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9)
#line 426 "make_hlds_passes.m"
{
#line 432 "make_hlds_passes.m"
  {
#line 432 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 430 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_10_10;

#line 430 "make_hlds_passes.m"
    {
#line 430 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_10_10 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__IStat_6);
    }
#line 430 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_10_10 == (MR_Integer) 1);
#line 432 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 431 "make_hlds_passes.m"
      {
#line 431 "make_hlds_passes.m"
        hlds__hlds_module__module_add_imported_module_specifiers_4_p_0(hlds__make_hlds__make_hlds_passes__IStat_6, hlds__make_hlds__make_hlds_passes__Specifiers_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9);
#line 431 "make_hlds_passes.m"
        return;
      }
#line 432 "make_hlds_passes.m"
    else
#line 438 "make_hlds_passes.m"
      {
#line 432 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_12_12;

#line 432 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__IStat_6)) == (MR_mktag((MR_Integer) 2)));
#line 432 "make_hlds_passes.m"
        if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 432 "make_hlds_passes.m"
          {
#line 432 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__IStat_6, (MR_Integer) 0)));
#line 432 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__V_12_12 == (MR_Integer) 3);
#line 432 "make_hlds_passes.m"
          }
#line 438 "make_hlds_passes.m"
        if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 433 "make_hlds_passes.m"
          {
#line 433 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_13_13;

#line 433 "make_hlds_passes.m"
            {
#line 433 "make_hlds_passes.m"
              hlds__hlds_module__module_add_imported_module_specifiers_4_p_0(hlds__make_hlds__make_hlds_passes__IStat_6, hlds__make_hlds__make_hlds_passes__Specifiers_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_13_13);
            }
#line 437 "make_hlds_passes.m"
            {
#line 437 "make_hlds_passes.m"
              hlds__hlds_module__module_info_add_parents_to_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__Specifiers_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_13_13, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9);
#line 437 "make_hlds_passes.m"
              return;
            }
#line 433 "make_hlds_passes.m"
          }
#line 438 "make_hlds_passes.m"
        else
#line 439 "make_hlds_passes.m"
          {
#line 439 "make_hlds_passes.m"
            hlds__hlds_module__module_add_indirectly_imported_module_specifiers_3_p_0(hlds__make_hlds__make_hlds_passes__Specifiers_5, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9);
#line 439 "make_hlds_passes.m"
            return;
          }
#line 438 "make_hlds_passes.m"
      }
#line 432 "make_hlds_passes.m"
  }
#line 426 "make_hlds_passes.m"
}

#line 359 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pass_1_module_defn_7_p_0(
#line 359 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_8,
#line 359 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_35,
#line 359 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_36,
#line 359 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37,
#line 359 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38,
#line 359 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39,
#line 359 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40)
#line 359 "make_hlds_passes.m"
{
#line 363 "make_hlds_passes.m"
  {
#line 363 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 363 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_8, (MR_Integer) 0)));
#line 363 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_8, (MR_Integer) 1)));
#line 364 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModuleDefn_8, (MR_Integer) 2)));
#line 367 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__StatusPrime_15;

#line 365 "make_hlds_passes.m"
    {
#line 365 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__module_defn_update_import_status_2_p_0(hlds__make_hlds__make_hlds_passes__ModuleDefn_12, &hlds__make_hlds__make_hlds_passes__StatusPrime_15);
    }
#line 367 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 366 "make_hlds_passes.m"
      {
#line 366 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_36 = hlds__make_hlds__make_hlds_passes__StatusPrime_15;
#line 366 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 366 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 366 "make_hlds_passes.m"
      }
#line 367 "make_hlds_passes.m"
    else
#line 374 "make_hlds_passes.m"
      {
#line 374 "make_hlds_passes.m"
#line 374 "make_hlds_passes.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ModuleDefn_12)) {
#line 374 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 374 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 374 "make_hlds_passes.m"
#line 374 "make_hlds_passes.m"
            switch (MR_unmkbody(hlds__make_hlds__make_hlds_passes__ModuleDefn_12)) {
#line 374 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 2:
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 3:
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 4:
#line 413 "make_hlds_passes.m"
                {
#line 414 "make_hlds_passes.m"
                  {
#line 414 "make_hlds_passes.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_module_defn\'/7", (MR_String) "module_defn_update_import_status missed something");
#line 414 "make_hlds_passes.m"
                    return;
                  }
#line 413 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 5:
#line 403 "make_hlds_passes.m"
                {
#line 403 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 403 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 403 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
            }
#line 374 "make_hlds_passes.m"
            break;
#line 374 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 374 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 413 "make_hlds_passes.m"
            {
#line 414 "make_hlds_passes.m"
              {
#line 414 "make_hlds_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pass_1_module_defn\'/7", (MR_String) "module_defn_update_import_status missed something");
#line 414 "make_hlds_passes.m"
                return;
              }
#line 413 "make_hlds_passes.m"
            }
#line 374 "make_hlds_passes.m"
            break;
#line 374 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 374 "make_hlds_passes.m"
#line 374 "make_hlds_passes.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_12, (MR_Integer) 0)))) {
#line 374 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 375 "make_hlds_passes.m"
                {
#line 375 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__MaybeBackend_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_12, (MR_Integer) 1)));
#line 375 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__External_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_12, (MR_Integer) 2)));
#line 392 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__Name_21;
#line 392 "make_hlds_passes.m"
                  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_22;

#line 376 "make_hlds_passes.m"
                  hlds__make_hlds__make_hlds_passes__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__External_20)) == (MR_mktag((MR_Integer) 1)));
#line 376 "make_hlds_passes.m"
                  if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 376 "make_hlds_passes.m"
                    {
#line 376 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__External_20, (MR_Integer) 0)));
#line 376 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__External_20, (MR_Integer) 1)));
#line 377 "make_hlds_passes.m"
                      {
#line 377 "make_hlds_passes.m"
                        MR_Word hlds__make_hlds__make_hlds_passes__Globals_23;
#line 377 "make_hlds_passes.m"
                        MR_Word hlds__make_hlds__make_hlds_passes__CurrentBackend_24;

#line 377 "make_hlds_passes.m"
                        {
#line 377 "make_hlds_passes.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, &hlds__make_hlds__make_hlds_passes__Globals_23);
                        }
#line 378 "make_hlds_passes.m"
                        {
#line 378 "make_hlds_passes.m"
                          hlds__make_hlds__make_hlds_passes__CurrentBackend_24 = parse_tree__prog_data__lookup_current_backend_1_f_0(hlds__make_hlds__make_hlds_passes__Globals_23);
                        }
#line 382 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__MaybeBackend_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "make_hlds_passes.m"
                          hlds__make_hlds__make_hlds_passes__succeeded = MR_TRUE;
#line 382 "make_hlds_passes.m"
                        else
#line 383 "make_hlds_passes.m"
                          {
#line 383 "make_hlds_passes.m"
                            MR_Word hlds__make_hlds__make_hlds_passes__Backend_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__MaybeBackend_19, (MR_Integer) 0)));

#line 384 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__Backend_25 == hlds__make_hlds__make_hlds_passes__CurrentBackend_24);
#line 383 "make_hlds_passes.m"
                          }
#line 389 "make_hlds_passes.m"
                        if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 387 "make_hlds_passes.m"
                          {
#line 387 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__module_mark_as_external_7_p_0(hlds__make_hlds__make_hlds_passes__Name_21, hlds__make_hlds__make_hlds_passes__Arity_22, hlds__make_hlds__make_hlds_passes__Context_13, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
                          }
#line 389 "make_hlds_passes.m"
                        else
#line 390 "make_hlds_passes.m"
                          {
#line 390 "make_hlds_passes.m"
                            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 390 "make_hlds_passes.m"
                            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 390 "make_hlds_passes.m"
                          }
#line 377 "make_hlds_passes.m"
                      }
#line 376 "make_hlds_passes.m"
                    }
#line 376 "make_hlds_passes.m"
                  else
#line 394 "make_hlds_passes.m"
                    {
#line 394 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_27;
#line 394 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_28;
#line 394 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_76_76;

#line 395 "make_hlds_passes.m"
                      {
#line 395 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_13));
#line 395 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[56])));
#line 395 "make_hlds_passes.m"
                      }
#line 397 "make_hlds_passes.m"
                      {
#line 397 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_27));
#line 397 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "make_hlds_passes.m"
                      }
#line 396 "make_hlds_passes.m"
                      {
#line 396 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 396 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 396 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_76_76));
#line 396 "make_hlds_passes.m"
                      }
#line 398 "make_hlds_passes.m"
                      {
#line 398 "make_hlds_passes.m"
                        MR_Word base;
#line 398 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = base;
#line 398 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_28));
#line 398 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39));
#line 398 "make_hlds_passes.m"
                      }
#line 394 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 394 "make_hlds_passes.m"
                    }
#line 375 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 417 "make_hlds_passes.m"
                {
#line 417 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 417 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__Msg_81;
#line 417 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__Spec_82;

#line 419 "make_hlds_passes.m"
                  {
#line 419 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__Msg_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_81, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_13));
#line 419 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])));
#line 419 "make_hlds_passes.m"
                  }
#line 421 "make_hlds_passes.m"
                  {
#line 421 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_81));
#line 421 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "make_hlds_passes.m"
                  }
#line 420 "make_hlds_passes.m"
                  {
#line 420 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__Spec_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 420 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 420 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 420 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_82, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 420 "make_hlds_passes.m"
                  }
#line 422 "make_hlds_passes.m"
                  {
#line 422 "make_hlds_passes.m"
                    MR_Word base;
#line 422 "make_hlds_passes.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = base;
#line 422 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_82));
#line 422 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39));
#line 422 "make_hlds_passes.m"
                  }
#line 417 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 417 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 2:
#line 371 "make_hlds_passes.m"
                {
#line 371 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__ModuleSpecifiers_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_12, (MR_Integer) 1)));
#line 371 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__IStat_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_35, (MR_Integer) 0)));
#line 372 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_35, (MR_Integer) 1)));

#line 373 "make_hlds_passes.m"
                  {
#line 373 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_p_0(hlds__make_hlds__make_hlds_passes__ModuleSpecifiers_16, hlds__make_hlds__make_hlds_passes__IStat_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38);
                  }
#line 371 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 371 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 3:
#line 371 "make_hlds_passes.m"
                {
#line 371 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__ModuleSpecifiers_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__ModuleDefn_12, (MR_Integer) 1)));
#line 371 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__IStat_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_35, (MR_Integer) 0)));
#line 372 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_35, (MR_Integer) 1)));

#line 373 "make_hlds_passes.m"
                  {
#line 373 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__add_module_specifiers_4_p_0(hlds__make_hlds__make_hlds_passes__ModuleSpecifiers_84, hlds__make_hlds__make_hlds_passes__IStat_85, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38);
                  }
#line 371 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 371 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 4:
#line 401 "make_hlds_passes.m"
                {
#line 401 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 401 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 401 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
              case (MR_Integer) 5:
#line 402 "make_hlds_passes.m"
                {
#line 402 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 402 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 402 "make_hlds_passes.m"
                }
#line 374 "make_hlds_passes.m"
                break;
#line 374 "make_hlds_passes.m"
            }
#line 374 "make_hlds_passes.m"
            break;
#line 374 "make_hlds_passes.m"
        }
#line 374 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_35;
#line 374 "make_hlds_passes.m"
      }
#line 363 "make_hlds_passes.m"
  }
#line 359 "make_hlds_passes.m"
}

#line 296 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_p_0(
#line 296 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Item_10,
#line 296 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33,
#line 296 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34,
#line 296 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35,
#line 296 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36,
#line 296 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37,
#line 296 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38,
#line 296 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39,
#line 296 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40)
#line 296 "make_hlds_passes.m"
{
#line 304 "make_hlds_passes.m"
  {
#line 304 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 304 "make_hlds_passes.m"
#line 304 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10)) {
#line 304 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 304 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 338 "make_hlds_passes.m"
        {
#line 338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 338 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 338 "make_hlds_passes.m"
        }
#line 304 "make_hlds_passes.m"
        break;
#line 304 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 339 "make_hlds_passes.m"
        {
#line 339 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 339 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 339 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 339 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 339 "make_hlds_passes.m"
        }
#line 304 "make_hlds_passes.m"
        break;
#line 304 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 304 "make_hlds_passes.m"
        {
#line 304 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__ItemModuleDefn_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Item_10), (MR_Integer) 2);

#line 305 "make_hlds_passes.m"
          {
#line 305 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__add_pass_1_module_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemModuleDefn_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
          }
#line 304 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 304 "make_hlds_passes.m"
        }
#line 304 "make_hlds_passes.m"
        break;
#line 304 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 304 "make_hlds_passes.m"
#line 304 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 0)))) {
#line 304 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 340 "make_hlds_passes.m"
            {
#line 340 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 340 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 340 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 340 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 340 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 307 "make_hlds_passes.m"
            {
#line 307 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 308 "make_hlds_passes.m"
              {
#line 308 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_type_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
              }
#line 307 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 307 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 307 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 318 "make_hlds_passes.m"
            {
#line 318 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 318 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__FoundError_18;

#line 312 "make_hlds_passes.m"
              {
#line 312 "make_hlds_passes.m"
                hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_17, &hlds__make_hlds__make_hlds_passes__FoundError_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
              }
#line 322 "make_hlds_passes.m"
#line 322 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__FoundError_18) {
#line 322 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 322 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 323 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 322 "make_hlds_passes.m"
                  break;
#line 322 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 321 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = (MR_Integer) 1;
#line 322 "make_hlds_passes.m"
                  break;
#line 322 "make_hlds_passes.m"
              }
#line 318 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 318 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 3:
#line 318 "make_hlds_passes.m"
            {
#line 318 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 318 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__FoundError_59;

#line 316 "make_hlds_passes.m"
              {
#line 316 "make_hlds_passes.m"
                hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_19, &hlds__make_hlds__make_hlds_passes__FoundError_59, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
              }
#line 322 "make_hlds_passes.m"
#line 322 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__FoundError_59) {
#line 322 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 322 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 323 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 322 "make_hlds_passes.m"
                  break;
#line 322 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 321 "make_hlds_passes.m"
                  *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = (MR_Integer) 1;
#line 322 "make_hlds_passes.m"
                  break;
#line 322 "make_hlds_passes.m"
              }
#line 318 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 318 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 4:
#line 326 "make_hlds_passes.m"
            {
#line 326 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 327 "make_hlds_passes.m"
              {
#line 327 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_pred_decl_6_p_0(hlds__make_hlds__make_hlds_passes__ItemPredDecl_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
              }
#line 326 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 326 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 326 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 5:
#line 329 "make_hlds_passes.m"
            {
#line 329 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 330 "make_hlds_passes.m"
              {
#line 330 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__add_pass_1_mode_decl_6_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDecl_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
              }
#line 329 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 329 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 329 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 6:
#line 341 "make_hlds_passes.m"
            {
#line 341 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 341 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 341 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 341 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 341 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 7:
#line 342 "make_hlds_passes.m"
            {
#line 342 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 342 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 342 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 342 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 342 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 8:
#line 332 "make_hlds_passes.m"
            {
#line 332 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeClass_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));

#line 333 "make_hlds_passes.m"
              {
#line 333 "make_hlds_passes.m"
                hlds__make_hlds__add_class__module_add_class_defn_6_p_0(hlds__make_hlds__make_hlds_passes__ItemTypeClass_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
              }
#line 332 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 332 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 332 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 9:
#line 343 "make_hlds_passes.m"
            {
#line 343 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 343 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 343 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 343 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 343 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 10:
#line 344 "make_hlds_passes.m"
            {
#line 344 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 344 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 344 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 344 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 344 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 11:
#line 345 "make_hlds_passes.m"
            {
#line 345 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 345 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 345 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 345 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 345 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 12:
#line 335 "make_hlds_passes.m"
            {
#line 335 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ItemMutable_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Item_10, (MR_Integer) 1)));
#line 335 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportStatus_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, (MR_Integer) 0)));
#line 335 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__DefinedThisModule_70;
#line 585 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, (MR_Integer) 1)));

#line 586 "make_hlds_passes.m"
              {
#line 586 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__DefinedThisModule_70 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_passes__ImportStatus_68);
              }
#line 590 "make_hlds_passes.m"
#line 590 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__DefinedThisModule_70) {
#line 590 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 590 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 591 "make_hlds_passes.m"
                  {
#line 591 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 591 "make_hlds_passes.m"
                    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 591 "make_hlds_passes.m"
                  }
#line 590 "make_hlds_passes.m"
                  break;
#line 590 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 589 "make_hlds_passes.m"
                  {
#line 589 "make_hlds_passes.m"
                    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(hlds__make_hlds__make_hlds_passes__ItemMutable_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40);
                  }
#line 590 "make_hlds_passes.m"
                  break;
#line 590 "make_hlds_passes.m"
              }
#line 335 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 335 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 335 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
          case (MR_Integer) 13:
#line 346 "make_hlds_passes.m"
            {
#line 346 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_34 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_33;
#line 346 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_36 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_35;
#line 346 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_37;
#line 346 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_39;
#line 346 "make_hlds_passes.m"
            }
#line 304 "make_hlds_passes.m"
            break;
#line 304 "make_hlds_passes.m"
        }
#line 304 "make_hlds_passes.m"
        break;
#line 304 "make_hlds_passes.m"
    }
#line 304 "make_hlds_passes.m"
  }
#line 296 "make_hlds_passes.m"
}

#line 281 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_list_pass_3_8_p_0(
#line 281 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 281 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_2,
#line 281 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 281 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 281 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5,
#line 281 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6,
#line 281 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 281 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 281 "make_hlds_passes.m"
{
#line 285 "make_hlds_passes.m"
  while (MR_TRUE)
#line 285 "make_hlds_passes.m"
    {
#line 285 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 285 "make_hlds_passes.m"
      {
#line 285 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 285 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "make_hlds_passes.m"
          {
#line 285 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 285 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5;
#line 285 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 285 "make_hlds_passes.m"
          }
#line 285 "make_hlds_passes.m"
        else
#line 287 "make_hlds_passes.m"
          {
#line 287 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_32_32;
#line 287 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33_33;
#line 287 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_34_34;
#line 287 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35_35;

#line 288 "make_hlds_passes.m"
            {
#line 288 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_p_0(hlds__make_hlds__make_hlds_passes__Item_19, hlds__make_hlds__make_hlds_passes__HeadVar__2_2, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_34_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35_35);
            }
#line 289 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 289 "make_hlds_passes.m"
            {
#line 289 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__Items_20;
#line 289 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_32_32;
#line 289 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33_33;
#line 289 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_34_34;
#line 289 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35_35;

#line 289 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 289 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0__tmp_copy_5;
#line 289 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 289 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__2_2 = hlds__make_hlds__make_hlds_passes__HeadVar__2__tmp_copy_2;
#line 289 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 289 "make_hlds_passes.m"
            }
#line 289 "make_hlds_passes.m"
            continue;
#line 287 "make_hlds_passes.m"
          }
#line 285 "make_hlds_passes.m"
      }
#line 285 "make_hlds_passes.m"
      break;
#line 285 "make_hlds_passes.m"
    }
#line 281 "make_hlds_passes.m"
}

#line 259 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_p_0(
#line 259 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 259 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_2,
#line 259 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3,
#line 259 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4,
#line 259 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5,
#line 259 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6)
#line 259 "make_hlds_passes.m"
{
#line 263 "make_hlds_passes.m"
  while (MR_TRUE)
#line 263 "make_hlds_passes.m"
    {
#line 263 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 263 "make_hlds_passes.m"
      {
#line 263 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 263 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "make_hlds_passes.m"
          {
#line 263 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5;
#line 263 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3;
#line 263 "make_hlds_passes.m"
          }
#line 263 "make_hlds_passes.m"
        else
#line 264 "make_hlds_passes.m"
          {
#line 264 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_24_24;
#line 264 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25_25;
#line 264 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26_26;

#line 265 "make_hlds_passes.m"
            {
#line 265 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decl_pass_2_7_p_0(hlds__make_hlds__make_hlds_passes__Item_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_2, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26_26);
            }
#line 266 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 266 "make_hlds_passes.m"
            {
#line 266 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__Items_15;
#line 266 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_24_24;
#line 266 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_25_25;
#line 266 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_26_26;

#line 266 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 266 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 266 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0__tmp_copy_2;
#line 266 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 266 "make_hlds_passes.m"
            }
#line 266 "make_hlds_passes.m"
            continue;
#line 264 "make_hlds_passes.m"
          }
#line 263 "make_hlds_passes.m"
      }
#line 263 "make_hlds_passes.m"
      break;
#line 263 "make_hlds_passes.m"
    }
#line 259 "make_hlds_passes.m"
}

#line 227 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_p_0(
#line 227 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1_1,
#line 227 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_2,
#line 227 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3,
#line 227 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4,
#line 227 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5,
#line 227 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6,
#line 227 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7,
#line 227 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8)
#line 227 "make_hlds_passes.m"
{
#line 232 "make_hlds_passes.m"
  while (MR_TRUE)
#line 232 "make_hlds_passes.m"
    {
#line 232 "make_hlds_passes.m"
      /* tailcall optimized into a loop */
#line 232 "make_hlds_passes.m"
      {
#line 232 "make_hlds_passes.m"
        MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 232 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "make_hlds_passes.m"
          {
#line 233 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_8 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7;
#line 233 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_6 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5;
#line 232 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_4 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3;
#line 232 "make_hlds_passes.m"
          }
#line 232 "make_hlds_passes.m"
        else
#line 235 "make_hlds_passes.m"
          {
#line 235 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Item_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_32_32;
#line 235 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_33_33;
#line 235 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_34_34;
#line 235 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35_35;

#line 236 "make_hlds_passes.m"
            {
#line 236 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__add_item_decl_pass_1_9_p_0(hlds__make_hlds__make_hlds_passes__Item_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_2, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_32_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_33_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_34_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35_35);
            }
#line 238 "make_hlds_passes.m"
            /* direct tailcall eliminated */
#line 238 "make_hlds_passes.m"
            {
#line 238 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__Items_20;
#line 238 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_32_32;
#line 238 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_33_33;
#line 238 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_34_34;
#line 238 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_35_35;

#line 238 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_7 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 238 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_5 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0__tmp_copy_5;
#line 238 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_3 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0__tmp_copy_3;
#line 238 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0_2 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Status_0__tmp_copy_2;
#line 238 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__HeadVar__1__tmp_copy_1;
#line 238 "make_hlds_passes.m"
            }
#line 238 "make_hlds_passes.m"
            continue;
#line 235 "make_hlds_passes.m"
          }
#line 232 "make_hlds_passes.m"
      }
#line 232 "make_hlds_passes.m"
      break;
#line 232 "make_hlds_passes.m"
    }
#line 227 "make_hlds_passes.m"
}

#line 193 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_p_0(
#line 193 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeCtor_4,
#line 193 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11,
#line 193 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12)
#line 193 "make_hlds_passes.m"
{
#line 196 "make_hlds_passes.m"
  {
#line 196 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TVarSet_6;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_8;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Type_10;

#line 197 "make_hlds_passes.m"
    {
#line 197 "make_hlds_passes.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__make_hlds_passes__TVarSet_6);
    }
#line 199 "make_hlds_passes.m"
    {
#line 199 "make_hlds_passes.m"
      mercury__term__context_init_1_p_0(&hlds__make_hlds__make_hlds_passes__Context_8);
    }
#line 201 "make_hlds_passes.m"
    {
#line 201 "make_hlds_passes.m"
      parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__Type_10);
    }
#line 213 "make_hlds_passes.m"
    {
#line 213 "make_hlds_passes.m"
      hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__make_hlds_passes__TVarSet_6, hlds__make_hlds__make_hlds_passes__Type_10, hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[54]), hlds__make_hlds__make_hlds_passes__Context_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12);
#line 213 "make_hlds_passes.m"
      return;
    }
#line 196 "make_hlds_passes.m"
  }
#line 193 "make_hlds_passes.m"
}

#line 149 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
#line 149 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 149 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 149 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 149 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 149 "make_hlds_passes.m"
{
#line 149 "make_hlds_passes.m"
  {
#line 149 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 149 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_ModuleInfo_12;

#line 149 "make_hlds_passes.m"
    {
#line 149 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_ModuleInfo_12);
    }
#line 149 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_ModuleInfo_12));
#line 149 "make_hlds_passes.m"
  }
#line 149 "make_hlds_passes.m"
}

#line 134 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 134 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 134 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 134 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 134 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8)
#line 134 "make_hlds_passes.m"
{
#line 134 "make_hlds_passes.m"
  {
#line 134 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv4_HeadVar__4_4;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv3_HeadVar__6_6;
#line 134 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv2_HeadVar__8_8;

#line 134 "make_hlds_passes.m"
    {
#line 134 "make_hlds_passes.m"
      hlds__make_hlds__add_type__process_type_defn_8_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv4_HeadVar__4_4, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_5), &hlds__make_hlds__make_hlds_passes__conv3_HeadVar__6_6, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_7), &hlds__make_hlds__make_hlds_passes__conv2_HeadVar__8_8);
    }
#line 134 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv4_HeadVar__4_4));
#line 134 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv3_HeadVar__6_6));
#line 134 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv2_HeadVar__8_8));
#line 134 "make_hlds_passes.m"
  }
#line 134 "make_hlds_passes.m"
}

#line 126 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 126 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 126 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
#line 126 "make_hlds_passes.m"
{
#line 126 "make_hlds_passes.m"
  {
#line 126 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 126 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_HeadVar__5_5;

#line 126 "make_hlds_passes.m"
    {
#line 126 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv0_HeadVar__5_5);
    }
#line 126 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_HeadVar__5_5));
#line 126 "make_hlds_passes.m"
  }
#line 126 "make_hlds_passes.m"
}

#line 43 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(
#line 43 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Globals_12,
#line 43 "make_hlds_passes.m"
  MR_String hlds__make_hlds__make_hlds_passes__DumpBaseFileName_13,
#line 43 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__3_3,
#line 43 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_16,
#line 43 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__EqvMap_17,
#line 43 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__UsedModules_18,
#line 43 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__QualInfo_19,
#line 43 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__FoundInvalidType_20,
#line 43 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode_21,
#line 43 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38,
#line 43 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39)
#line 43 "make_hlds_passes.m"
{
#line 92 "make_hlds_passes.m"
  {
#line 92 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__3_3, (MR_Integer) 0)));
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Items_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__HeadVar__3_3, (MR_Integer) 1)));
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PQInfo_24;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode1_25;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Pass1Specs_26;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Statistics_27;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Pass2Specs_29;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__FoundInvalidType1_31;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__QualInfo0_34;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_35;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInvalidType_36;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInvalidInstOrMode_37;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_41_41;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_43_43;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_45_45;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_55_55;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_59_59;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_68_68;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_71_71;
#line 92 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_72_72;
#line 146 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_105_105;

#line 93 "make_hlds_passes.m"
    {
#line 93 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_16, &hlds__make_hlds__make_hlds_passes__PQInfo_24);
    }
#line 94 "make_hlds_passes.m"
    {
#line 94 "make_hlds_passes.m"
      hlds__hlds_module__module_info_init_7_p_0(hlds__make_hlds__make_hlds_passes__Name_14, hlds__make_hlds__make_hlds_passes__DumpBaseFileName_13, hlds__make_hlds__make_hlds_passes__Items_15, hlds__make_hlds__make_hlds_passes__Globals_12, hlds__make_hlds__make_hlds_passes__PQInfo_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 96 "make_hlds_passes.m"
    {
#line 96 "make_hlds_passes.m"
      hlds__hlds_module__module_info_set_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__UsedModules_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42);
    }
#line 98 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_43_43 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[53];
#line 97 "make_hlds_passes.m"
    {
#line 97 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_1_8_p_0(hlds__make_hlds__make_hlds_passes__Items_15, hlds__make_hlds__make_hlds_passes__V_43_43, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode1_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_42_42, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__Pass1Specs_26);
    }
#line 101 "make_hlds_passes.m"
    {
#line 101 "make_hlds_passes.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__Globals_12, (MR_Integer) 55, &hlds__make_hlds__make_hlds_passes__Statistics_27);
    }
#line 103 "make_hlds_passes.m"
    {
#line 103 "make_hlds_passes.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__make_hlds__make_hlds_passes__Statistics_27, (MR_String) "% Processed all items in pass 1\n");
    }
#line 105 "make_hlds_passes.m"
    {
#line 105 "make_hlds_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(hlds__make_hlds__make_hlds_passes__Statistics_27);
    }
#line 108 "make_hlds_passes.m"
    {
#line 108 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_list_decls_pass_2_6_p_0(hlds__make_hlds__make_hlds_passes__Items_15, hlds__make_hlds__make_hlds_passes__V_43_43, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_45_45, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__Pass2Specs_29);
    }
#line 111 "make_hlds_passes.m"
    {
#line 111 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__make_hlds_passes__Pass1Specs_26, hlds__make_hlds__make_hlds_passes__Pass2Specs_29);
    }
#line 138 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__Pass2Specs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "make_hlds_passes.m"
      {
#line 121 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_60_60;
#line 121 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_61_61;
#line 121 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_63_63;
#line 121 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_64_64;
#line 126 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_TypeTable_63_63;
#line 134 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv7_FoundInvalidType1_31;
#line 134 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_67_67;
#line 134 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_Specs_68_68;

#line 125 "make_hlds_passes.m"
        {
#line 125 "make_hlds_passes.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_55_55, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_60_60);
        }
#line 126 "make_hlds_passes.m"
        {
#line 126 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 126 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_61_61, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0]));
#line 126 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1));
#line 126 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 126 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_61_61, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_55_55));
#line 126 "make_hlds_passes.m"
        }
#line 126 "make_hlds_passes.m"
        {
#line 126 "make_hlds_passes.m"
          hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0, hlds__make_hlds__make_hlds_passes__V_61_61, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_60_60, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_60_60)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_TypeTable_63_63);
        }
#line 126 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_63_63 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_TypeTable_63_63);
#line 128 "make_hlds_passes.m"
        {
#line 128 "make_hlds_passes.m"
          hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_63_63, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_55_55, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_64_64);
        }
#line 134 "make_hlds_passes.m"
        {
#line 134 "make_hlds_passes.m"
          hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[0], (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_5[0], hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_63_63, ((MR_Box) ((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__conv7_FoundInvalidType1_31, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_64_64)), &hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_67_67, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_59_59)), &hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_Specs_68_68);
        }
#line 134 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__FoundInvalidType1_31 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv7_FoundInvalidType1_31);
#line 134 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_67_67);
#line 134 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_68_68 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_Specs_68_68);
#line 121 "make_hlds_passes.m"
      }
#line 138 "make_hlds_passes.m"
    else
#line 139 "make_hlds_passes.m"
      {
#line 140 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__FoundInvalidType1_31 = (MR_Integer) 1;
#line 139 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_55_55;
#line 139 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_68_68 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_59_59;
#line 139 "make_hlds_passes.m"
      }
#line 146 "make_hlds_passes.m"
    {
#line 146 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_105_105 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 146 "make_hlds_passes.m"
    {
#line 146 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__make_hlds_passes__Name_14, hlds__make_hlds__make_hlds_passes__V_105_105);
    }
#line 146 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 147 "make_hlds_passes.m"
      {
#line 147 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67);
      }
#line 151 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 149 "make_hlds_passes.m"
      {
#line 149 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_70_70;
#line 149 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_ModuleInfo_71_71;

#line 150 "make_hlds_passes.m"
        {
#line 150 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_70_70 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 149 "make_hlds_passes.m"
        {
#line 149 "make_hlds_passes.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_5[1], hlds__make_hlds__make_hlds_passes__V_70_70, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67)), &hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_ModuleInfo_71_71);
        }
#line 149 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_71_71 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_ModuleInfo_71_71);
#line 149 "make_hlds_passes.m"
      }
#line 151 "make_hlds_passes.m"
    else
#line 151 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_71_71 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67;
#line 156 "make_hlds_passes.m"
    {
#line 156 "make_hlds_passes.m"
      hlds__hlds_module__module_info_optimize_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_71_71, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 158 "make_hlds_passes.m"
    {
#line 158 "make_hlds_passes.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__make_hlds__make_hlds_passes__Statistics_27, (MR_String) "% Processed all items in pass 2\n");
    }
#line 160 "make_hlds_passes.m"
    {
#line 160 "make_hlds_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(hlds__make_hlds__make_hlds_passes__Statistics_27);
    }
#line 163 "make_hlds_passes.m"
    {
#line 163 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__init_qual_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_16, hlds__make_hlds__make_hlds_passes__EqvMap_17, &hlds__make_hlds__make_hlds_passes__QualInfo0_34);
    }
#line 164 "make_hlds_passes.m"
    {
#line 164 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_list_pass_3_8_p_0(hlds__make_hlds__make_hlds_passes__Items_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_72_72, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_38, hlds__make_hlds__make_hlds_passes__QualInfo0_34, hlds__make_hlds__make_hlds_passes__QualInfo_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_68_68, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
    }
#line 167 "make_hlds_passes.m"
    {
#line 167 "make_hlds_passes.m"
      libs__file_util__maybe_write_string_4_p_0(hlds__make_hlds__make_hlds_passes__Statistics_27, (MR_String) "% Processed all items in pass 3\n");
    }
#line 171 "make_hlds_passes.m"
    {
#line 171 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*hlds__make_hlds__make_hlds_passes__QualInfo_19, &hlds__make_hlds__make_hlds_passes__MQInfo_35);
    }
#line 172 "make_hlds_passes.m"
    {
#line 172 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_type_error_flag_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_35, &hlds__make_hlds__make_hlds_passes__MQInvalidType_36);
    }
#line 173 "make_hlds_passes.m"
    {
#line 173 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_mode_error_flag_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_35, &hlds__make_hlds__make_hlds_passes__MQInvalidInstOrMode_37);
    }
#line 175 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__FoundInvalidType1_31 == (MR_Integer) 0);
#line 175 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 176 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQInvalidType_36 == (MR_Integer) 0);
#line 179 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 178 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidType_20 = (MR_Integer) 0;
#line 179 "make_hlds_passes.m"
    else
#line 180 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidType_20 = (MR_Integer) 1;
#line 183 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode1_25 == (MR_Integer) 0);
#line 183 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 184 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQInvalidInstOrMode_37 == (MR_Integer) 0);
#line 187 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 186 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode_21 = (MR_Integer) 0;
#line 187 "make_hlds_passes.m"
    else
#line 188 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__FoundInvalidInstOrMode_21 = (MR_Integer) 1;
#line 92 "make_hlds_passes.m"
  }
#line 43 "make_hlds_passes.m"
}

void mercury__hlds__make_hlds__make_hlds_passes__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0);
}

void mercury__hlds__make_hlds__make_hlds_passes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.make_hlds_passes. */
