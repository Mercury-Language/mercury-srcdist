/*
** Automatically generated from `hlds_code_util.m'
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


/* :- module hlds.hlds_code_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_code_util__init
ENDINIT
*/

#include "hlds.hlds_code_util.mih"


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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "hlds.hlds_code_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 147 "hlds.hlds_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 150 "hlds.hlds_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 153 "hlds.hlds_code_util.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 156 "hlds.hlds_code_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 159 "hlds.hlds_code_util.c"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
#line 162 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 164 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2);

#line 167 "hlds.hlds_code_util.c"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
#line 170 "hlds.hlds_code_util.c"
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
#line 172 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 174 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_3);

#line 177 "hlds.hlds_code_util.c"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001(
#line 180 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 182 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2);

#line 185 "hlds.hlds_code_util.c"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001(
#line 188 "hlds.hlds_code_util.c"
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
#line 190 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 192 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_3);

#line 275 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0(
#line 275 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3);

#line 275 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0(
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2);

#line 274 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
#line 274 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3);

#line 274 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2);

#line 461 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
#line 461 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__A_4,
#line 461 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__A_2,
#line 461 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__A_3);

#line 459 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 459 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

#line 455 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
#line 455 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__RenamingA_4,
#line 455 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__RenamingB_5,
#line 455 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Result_6);

#line 432 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(
#line 432 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
#line 432 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstNameA_6,
#line 432 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstNameB_7,
#line 432 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Renaming_8);

#line 293 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0_1(
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 293 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

#line 415 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0(
#line 415 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
#line 415 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HOInstInfoA_6,
#line 415 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HOInstInfoB_7,
#line 415 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Renaming_8);

#line 343 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
#line 343 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
#line 343 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstA_6,
#line 343 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstB_7,
#line 343 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Renaming_8);

#line 459 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1(
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 459 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

#line 328 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
#line 328 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5);

#line 459 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 459 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

#line 316 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
#line 316 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5);

#line 295 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
#line 295 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__HeadVar__4_4,
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5);

#line 293 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 293 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3);

#line 259 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
#line 259 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 259 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Modes_7,
#line 259 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
#line 259 "hlds_code_util.m"
  MR_Integer * hlds__hlds_code_util__OurProcId_9);

#line 238 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
#line 238 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 238 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 238 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_3);

#line 226 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(
#line 226 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 226 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Modes_7,
#line 226 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
#line 226 "hlds_code_util.m"
  MR_Integer * hlds__hlds_code_util__OurProcId_9);

#line 194 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__type_to_string_2_p_0(
#line 194 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Type_3,
#line 194 "hlds_code_util.m"
  MR_String * hlds__hlds_code_util__String_4);

#line 255 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
#line 255 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 255 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 255 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);

#line 223 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1(
#line 223 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 223 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 223 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);

#line 191 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1(
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 191 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);

#line 191 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0_1(
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 191 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2);


static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[10][3];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[2][6];




static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_code_util__make_instance_string_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 623 "hlds.hlds_code_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 631 "hlds.hlds_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 640 "hlds.hlds_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 648 "hlds.hlds_code_util.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 657 "hlds.hlds_code_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 674 "hlds.hlds_code_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 682 "hlds.hlds_code_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renamings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_code_util__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 699 "hlds.hlds_code_util.c"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
#line 702 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 704 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2)
#line 706 "hlds.hlds_code_util.c"
{
#line 708 "hlds.hlds_code_util.c"
  {
#line 710 "hlds.hlds_code_util.c"
    MR_bool hlds__hlds_code_util__succeeded;

#line 713 "hlds.hlds_code_util.c"
    {
#line 715 "hlds.hlds_code_util.c"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util____Unify____inst_var_renaming_0_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2));
    }
#line 718 "hlds.hlds_code_util.c"
    return hlds__hlds_code_util__succeeded;
#line 720 "hlds.hlds_code_util.c"
  }
#line 722 "hlds.hlds_code_util.c"
}

#line 725 "hlds.hlds_code_util.c"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
#line 728 "hlds.hlds_code_util.c"
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
#line 730 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 732 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_3)
#line 734 "hlds.hlds_code_util.c"
{
#line 736 "hlds.hlds_code_util.c"
  {
#line 738 "hlds.hlds_code_util.c"
    MR_Word hlds__hlds_code_util__conv0_HeadVar__1_1;

#line 741 "hlds.hlds_code_util.c"
    {
#line 743 "hlds.hlds_code_util.c"
      hlds__hlds_code_util____Compare____inst_var_renaming_0_0(&hlds__hlds_code_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), ((MR_Word) hlds__hlds_code_util__wrapper_arg_3));
    }
#line 746 "hlds.hlds_code_util.c"
    *hlds__hlds_code_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__1_1));
#line 748 "hlds.hlds_code_util.c"
  }
#line 750 "hlds.hlds_code_util.c"
}

#line 753 "hlds.hlds_code_util.c"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0_10001(
#line 756 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 758 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2)
#line 760 "hlds.hlds_code_util.c"
{
#line 762 "hlds.hlds_code_util.c"
  {
#line 764 "hlds.hlds_code_util.c"
    MR_bool hlds__hlds_code_util__succeeded;

#line 767 "hlds.hlds_code_util.c"
    {
#line 769 "hlds.hlds_code_util.c"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util____Unify____inst_var_renamings_0_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2));
    }
#line 772 "hlds.hlds_code_util.c"
    return hlds__hlds_code_util__succeeded;
#line 774 "hlds.hlds_code_util.c"
  }
#line 776 "hlds.hlds_code_util.c"
}

#line 779 "hlds.hlds_code_util.c"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0_10001(
#line 782 "hlds.hlds_code_util.c"
  MR_Box * hlds__hlds_code_util__wrapper_arg_1,
#line 784 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 786 "hlds.hlds_code_util.c"
  MR_Box hlds__hlds_code_util__wrapper_arg_3)
#line 788 "hlds.hlds_code_util.c"
{
#line 790 "hlds.hlds_code_util.c"
  {
#line 792 "hlds.hlds_code_util.c"
    MR_Word hlds__hlds_code_util__conv0_HeadVar__1_1;

#line 795 "hlds.hlds_code_util.c"
    {
#line 797 "hlds.hlds_code_util.c"
      hlds__hlds_code_util____Compare____inst_var_renamings_0_0(&hlds__hlds_code_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), ((MR_Word) hlds__hlds_code_util__wrapper_arg_3));
    }
#line 800 "hlds.hlds_code_util.c"
    *hlds__hlds_code_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__1_1));
#line 802 "hlds.hlds_code_util.c"
  }
#line 804 "hlds.hlds_code_util.c"
}

#line 275 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renamings_0_0(
#line 275 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3)
#line 275 "hlds_code_util.m"
{
#line 275 "hlds_code_util.m"
  {
#line 275 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 275 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_4 = hlds__hlds_code_util__HeadVar__2_2;
#line 275 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_5 = hlds__hlds_code_util__HeadVar__3_3;

#line 275 "hlds_code_util.m"
    {
#line 275 "hlds_code_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[2], hlds__hlds_code_util__HeadVar__1_1, ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_5)));
    }
#line 275 "hlds_code_util.m"
  }
#line 275 "hlds_code_util.m"
}

#line 275 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renamings_0_0(
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 275 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2)
#line 275 "hlds_code_util.m"
{
#line 275 "hlds_code_util.m"
  {
#line 275 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 275 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_3 = hlds__hlds_code_util__HeadVar__1_1;
#line 275 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_4 = hlds__hlds_code_util__HeadVar__2_2;

#line 275 "hlds_code_util.m"
    {
#line 275 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[2], ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_4)));
    }
#line 275 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 275 "hlds_code_util.m"
  }
#line 275 "hlds_code_util.m"
}

#line 274 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
#line 274 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__HeadVar__1_1,
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3)
#line 274 "hlds_code_util.m"
{
#line 274 "hlds_code_util.m"
  {
#line 274 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 274 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_4 = hlds__hlds_code_util__HeadVar__2_2;
#line 274 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_5 = hlds__hlds_code_util__HeadVar__3_3;

#line 274 "hlds_code_util.m"
    {
#line 274 "hlds_code_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_2[0], hlds__hlds_code_util__HeadVar__1_1, ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_5)));
    }
#line 274 "hlds_code_util.m"
  }
#line 274 "hlds_code_util.m"
}

#line 274 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 274 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2)
#line 274 "hlds_code_util.m"
{
#line 274 "hlds_code_util.m"
  {
#line 274 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 274 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar1_3 = hlds__hlds_code_util__HeadVar__1_1;
#line 274 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Cast_HeadVar2_4 = hlds__hlds_code_util__HeadVar__2_2;

#line 274 "hlds_code_util.m"
    {
#line 274 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_2[0], ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_code_util__Cast_HeadVar2_4)));
    }
#line 274 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 274 "hlds_code_util.m"
  }
#line 274 "hlds_code_util.m"
}

#line 461 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
#line 461 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__A_4,
#line 461 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__A_2,
#line 461 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__A_3)
#line 461 "hlds_code_util.m"
{
#line 464 "hlds_code_util.m"
  {
#line 464 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;

#line 464 "hlds_code_util.m"
    {
#line 464 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[1], ((MR_Box) (hlds__hlds_code_util__A_2)), ((MR_Box) (hlds__hlds_code_util__A_4)));
    }
#line 464 "hlds_code_util.m"
    if (hlds__hlds_code_util__succeeded)
#line 464 "hlds_code_util.m"
      {
#line 464 "hlds_code_util.m"
        *hlds__hlds_code_util__A_3 = hlds__hlds_code_util__A_4;
#line 464 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_TRUE;
#line 464 "hlds_code_util.m"
      }
#line 464 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 464 "hlds_code_util.m"
  }
#line 461 "hlds_code_util.m"
}

#line 459 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 459 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
#line 459 "hlds_code_util.m"
{
#line 459 "hlds_code_util.m"
  {
#line 459 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 459 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 459 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_A_3;

#line 459 "hlds_code_util.m"
    {
#line 459 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_A_3);
    }
#line 459 "hlds_code_util.m"
    if (hlds__hlds_code_util__succeeded)
#line 459 "hlds_code_util.m"
      {
#line 459 "hlds_code_util.m"
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_A_3));
#line 459 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_TRUE;
#line 459 "hlds_code_util.m"
      }
#line 459 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 459 "hlds_code_util.m"
  }
#line 459 "hlds_code_util.m"
}

#line 455 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
#line 455 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__RenamingA_4,
#line 455 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__RenamingB_5,
#line 455 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Result_6)
#line 455 "hlds_code_util.m"
{
#line 458 "hlds_code_util.m"
  {
#line 458 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 458 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__TypeInfo_11_11 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];

#line 459 "hlds_code_util.m"
    {
#line 459 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = mercury__map__union_4_p_0(hlds__hlds_code_util__TypeInfo_11_11, hlds__hlds_code_util__TypeInfo_11_11, (MR_Word) &hlds__hlds_code_util_scalar_common_2[9], hlds__hlds_code_util__RenamingA_4, hlds__hlds_code_util__RenamingB_5, hlds__hlds_code_util__Result_6);
    }
#line 458 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 458 "hlds_code_util.m"
  }
#line 455 "hlds_code_util.m"
}

#line 432 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(
#line 432 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
#line 432 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstNameA_6,
#line 432 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstNameB_7,
#line 432 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Renaming_8)
#line 432 "hlds_code_util.m"
{
#line 437 "hlds_code_util.m"
  {
#line 437 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;

#line 437 "hlds_code_util.m"
#line 437 "hlds_code_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_code_util__InstNameA_6)) {
#line 437 "hlds_code_util.m"
      default:
#line 437 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_FALSE;
#line 437 "hlds_code_util.m"
        break;
#line 437 "hlds_code_util.m"
      case (MR_Integer) 0:
#line 437 "hlds_code_util.m"
        {
#line 437 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__TypeInfo_29_29;
#line 437 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameA_6, (MR_Integer) 0)));
#line 437 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameA_6, (MR_Integer) 1)));
#line 437 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__ArgsB_11;
#line 437 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__V_28_28;
#line 437 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__V_31_31;

#line 438 "hlds_code_util.m"
          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__InstNameB_7)) == (MR_mktag((MR_Integer) 0)));
#line 438 "hlds_code_util.m"
          if (hlds__hlds_code_util__succeeded)
#line 438 "hlds_code_util.m"
            {
#line 438 "hlds_code_util.m"
              hlds__hlds_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameB_7, (MR_Integer) 0)));
#line 438 "hlds_code_util.m"
              hlds__hlds_code_util__ArgsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstNameB_7, (MR_Integer) 1)));
#line 438 "hlds_code_util.m"
              {
#line 438 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_code_util__Name_9, hlds__hlds_code_util__V_31_31);
              }
#line 437 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 437 "hlds_code_util.m"
                {
#line 1102 "hlds.hlds_code_util.c"
                  hlds__hlds_code_util__TypeInfo_29_29 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 440 "hlds_code_util.m"
                  {
#line 440 "hlds_code_util.m"
                    hlds__hlds_code_util__V_28_28 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_29_29, hlds__hlds_code_util__TypeInfo_29_29);
                  }
#line 439 "hlds_code_util.m"
                  {
#line 439 "hlds_code_util.m"
                    hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ArgsA_10, hlds__hlds_code_util__ArgsB_11, hlds__hlds_code_util__V_28_28, hlds__hlds_code_util__Renaming_8);
                  }
#line 437 "hlds_code_util.m"
                }
#line 438 "hlds_code_util.m"
            }
#line 437 "hlds_code_util.m"
        }
#line 437 "hlds_code_util.m"
        break;
#line 437 "hlds_code_util.m"
      case (MR_Integer) 1:
#line 437 "hlds_code_util.m"
      case (MR_Integer) 2:
#line 450 "hlds_code_util.m"
        {
#line 450 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__TypeInfo_30_30;

#line 451 "hlds_code_util.m"
          {
#line 451 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__hlds_code_util__InstNameB_7, hlds__hlds_code_util__InstNameA_6);
          }
#line 450 "hlds_code_util.m"
          if (hlds__hlds_code_util__succeeded)
#line 450 "hlds_code_util.m"
            {
#line 1140 "hlds.hlds_code_util.c"
              hlds__hlds_code_util__TypeInfo_30_30 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 452 "hlds_code_util.m"
              {
#line 452 "hlds_code_util.m"
                *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_30_30, hlds__hlds_code_util__TypeInfo_30_30);
              }
#line 452 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = MR_TRUE;
#line 450 "hlds_code_util.m"
            }
#line 450 "hlds_code_util.m"
        }
#line 437 "hlds_code_util.m"
        break;
#line 437 "hlds_code_util.m"
      case (MR_Integer) 3:
#line 437 "hlds_code_util.m"
#line 437 "hlds_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstNameA_6, (MR_Integer) 0)))) {
#line 437 "hlds_code_util.m"
          default:
#line 437 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = MR_FALSE;
#line 437 "hlds_code_util.m"
            break;
#line 437 "hlds_code_util.m"
          case (MR_Integer) 0:
#line 437 "hlds_code_util.m"
          case (MR_Integer) 1:
#line 437 "hlds_code_util.m"
          case (MR_Integer) 2:
#line 437 "hlds_code_util.m"
          case (MR_Integer) 3:
#line 450 "hlds_code_util.m"
            {
#line 450 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_30_30;

#line 451 "hlds_code_util.m"
              {
#line 451 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__hlds_code_util__InstNameB_7, hlds__hlds_code_util__InstNameA_6);
              }
#line 450 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 450 "hlds_code_util.m"
                {
#line 1188 "hlds.hlds_code_util.c"
                  hlds__hlds_code_util__TypeInfo_30_30 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 452 "hlds_code_util.m"
                  {
#line 452 "hlds_code_util.m"
                    *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_30_30, hlds__hlds_code_util__TypeInfo_30_30);
                  }
#line 452 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = MR_TRUE;
#line 450 "hlds_code_util.m"
                }
#line 450 "hlds_code_util.m"
            }
#line 437 "hlds_code_util.m"
            break;
#line 437 "hlds_code_util.m"
        }
#line 437 "hlds_code_util.m"
        break;
#line 437 "hlds_code_util.m"
    }
#line 437 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 437 "hlds_code_util.m"
  }
#line 432 "hlds_code_util.m"
}

#line 293 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0_1(
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 293 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
#line 293 "hlds_code_util.m"
{
#line 293 "hlds_code_util.m"
  {
#line 293 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 293 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 293 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_Result_6;

#line 293 "hlds_code_util.m"
    {
#line 293 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_Result_6);
    }
#line 293 "hlds_code_util.m"
    if (hlds__hlds_code_util__succeeded)
#line 293 "hlds_code_util.m"
      {
#line 293 "hlds_code_util.m"
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_Result_6));
#line 293 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_TRUE;
#line 293 "hlds_code_util.m"
      }
#line 293 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 293 "hlds_code_util.m"
  }
#line 293 "hlds_code_util.m"
}

#line 415 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0(
#line 415 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
#line 415 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HOInstInfoA_6,
#line 415 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HOInstInfoB_7,
#line 415 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Renaming_8)
#line 415 "hlds_code_util.m"
{
#line 421 "hlds_code_util.m"
  {
#line 421 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;

#line 421 "hlds_code_util.m"
    if ((hlds__hlds_code_util__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "hlds_code_util.m"
      {
#line 421 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__TypeInfo_17_17;

#line 422 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "hlds_code_util.m"
        if (hlds__hlds_code_util__succeeded)
#line 421 "hlds_code_util.m"
          {
#line 1291 "hlds.hlds_code_util.c"
            hlds__hlds_code_util__TypeInfo_17_17 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 423 "hlds_code_util.m"
            {
#line 423 "hlds_code_util.m"
              *hlds__hlds_code_util__Renaming_8 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_17_17, hlds__hlds_code_util__TypeInfo_17_17);
            }
#line 423 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = MR_TRUE;
#line 421 "hlds_code_util.m"
          }
#line 421 "hlds_code_util.m"
      }
#line 421 "hlds_code_util.m"
    else
#line 425 "hlds_code_util.m"
      {
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__TypeInfo_16_31;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__TypeInfo_17_32;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__PredInstInfoA_9 = (MR_Word) MR_body(((MR_Word) hlds__hlds_code_util__HOInstInfoA_6), (MR_Integer) 1);
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__PredInstInfoB_10;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__PredOrFunc_11;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__ModesA_12;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__Detism_14;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__ModesB_15;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_18_18;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_19_19;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__Renamings_24;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_25_25;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_26_26;
#line 425 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_27_27;
#line 427 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_13_13;
#line 428 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_16_16;
#line 293 "hlds_code_util.m"
        MR_Box hlds__hlds_code_util__conv1_Renaming_8;

#line 426 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HOInstInfoB_7)) == (MR_mktag((MR_Integer) 1)));
#line 426 "hlds_code_util.m"
        if (hlds__hlds_code_util__succeeded)
#line 426 "hlds_code_util.m"
          {
#line 426 "hlds_code_util.m"
            hlds__hlds_code_util__PredInstInfoB_10 = (MR_Word) MR_body(((MR_Word) hlds__hlds_code_util__HOInstInfoB_7), (MR_Integer) 1);
#line 427 "hlds_code_util.m"
            hlds__hlds_code_util__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_9, (MR_Integer) 0)));
#line 427 "hlds_code_util.m"
            hlds__hlds_code_util__ModesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_9, (MR_Integer) 1)));
#line 427 "hlds_code_util.m"
            hlds__hlds_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_9, (MR_Integer) 2)));
#line 427 "hlds_code_util.m"
            hlds__hlds_code_util__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoA_9, (MR_Integer) 3)));
#line 428 "hlds_code_util.m"
            hlds__hlds_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_10, (MR_Integer) 0)));
#line 428 "hlds_code_util.m"
            hlds__hlds_code_util__ModesB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_10, (MR_Integer) 1)));
#line 428 "hlds_code_util.m"
            hlds__hlds_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_10, (MR_Integer) 2)));
#line 428 "hlds_code_util.m"
            hlds__hlds_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__PredInstInfoB_10, (MR_Integer) 3)));
#line 428 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__PredOrFunc_11 == hlds__hlds_code_util__V_18_18);
#line 425 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 425 "hlds_code_util.m"
              {
#line 428 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Detism_14 == hlds__hlds_code_util__V_19_19);
#line 425 "hlds_code_util.m"
                if (hlds__hlds_code_util__succeeded)
#line 425 "hlds_code_util.m"
                  {
#line 291 "hlds_code_util.m"
                    hlds__hlds_code_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "hlds_code_util.m"
                    {
#line 291 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(hlds__hlds_code_util__ModesA_12, hlds__hlds_code_util__ModesB_15, hlds__hlds_code_util__V_25_25, &hlds__hlds_code_util__Renamings_24, hlds__hlds_code_util__ModuleInfo_5);
                    }
#line 425 "hlds_code_util.m"
                    if (hlds__hlds_code_util__succeeded)
#line 425 "hlds_code_util.m"
                      {
#line 293 "hlds_code_util.m"
                        hlds__hlds_code_util__V_26_26 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[8];
#line 1392 "hlds.hlds_code_util.c"
                        hlds__hlds_code_util__TypeInfo_16_31 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 293 "hlds_code_util.m"
                        {
#line 293 "hlds_code_util.m"
                          hlds__hlds_code_util__V_27_27 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_16_31, hlds__hlds_code_util__TypeInfo_16_31);
                        }
#line 1399 "hlds.hlds_code_util.c"
                        hlds__hlds_code_util__TypeInfo_17_32 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[0];
#line 293 "hlds_code_util.m"
                        {
#line 293 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = mercury__list__foldl_4_p_3(hlds__hlds_code_util__TypeInfo_17_32, hlds__hlds_code_util__TypeInfo_17_32, hlds__hlds_code_util__V_26_26, hlds__hlds_code_util__Renamings_24, ((MR_Box) (hlds__hlds_code_util__V_27_27)), &hlds__hlds_code_util__conv1_Renaming_8);
                        }
#line 293 "hlds_code_util.m"
                        if (hlds__hlds_code_util__succeeded)
#line 293 "hlds_code_util.m"
                          {
#line 293 "hlds_code_util.m"
                            *hlds__hlds_code_util__Renaming_8 = ((MR_Word) hlds__hlds_code_util__conv1_Renaming_8);
#line 293 "hlds_code_util.m"
                            hlds__hlds_code_util__succeeded = MR_TRUE;
#line 293 "hlds_code_util.m"
                          }
#line 425 "hlds_code_util.m"
                      }
#line 425 "hlds_code_util.m"
                  }
#line 425 "hlds_code_util.m"
              }
#line 426 "hlds_code_util.m"
          }
#line 425 "hlds_code_util.m"
      }
#line 421 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 421 "hlds_code_util.m"
  }
#line 415 "hlds_code_util.m"
}

#line 343 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
#line 343 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5,
#line 343 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstA_6,
#line 343 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstB_7,
#line 343 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__Renaming_8)
#line 343 "hlds_code_util.m"
{
#line 348 "hlds_code_util.m"
  {
#line 348 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;

#line 348 "hlds_code_util.m"
#line 348 "hlds_code_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_code_util__InstA_6)) {
#line 348 "hlds_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 348 "hlds_code_util.m"
      case (MR_Integer) 0:
#line 348 "hlds_code_util.m"
#line 348 "hlds_code_util.m"
        switch (MR_unmkbody(hlds__hlds_code_util__InstA_6)) {
#line 348 "hlds_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 348 "hlds_code_util.m"
          case (MR_Integer) 0:
#line 352 "hlds_code_util.m"
            {
#line 352 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_48_48;

#line 353 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 352 "hlds_code_util.m"
                {
#line 1476 "hlds.hlds_code_util.c"
                  hlds__hlds_code_util__TypeInfo_48_48 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 354 "hlds_code_util.m"
                  {
#line 354 "hlds_code_util.m"
                    mercury__map__init_1_p_0(hlds__hlds_code_util__TypeInfo_48_48, hlds__hlds_code_util__TypeInfo_48_48, hlds__hlds_code_util__Renaming_8);
                  }
#line 354 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = MR_TRUE;
#line 352 "hlds_code_util.m"
                }
#line 352 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
          case (MR_Integer) 1:
#line 348 "hlds_code_util.m"
            {
#line 348 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_47_47;

#line 349 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 348 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 348 "hlds_code_util.m"
                {
#line 1504 "hlds.hlds_code_util.c"
                  hlds__hlds_code_util__TypeInfo_47_47 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 350 "hlds_code_util.m"
                  {
#line 350 "hlds_code_util.m"
                    mercury__map__init_1_p_0(hlds__hlds_code_util__TypeInfo_47_47, hlds__hlds_code_util__TypeInfo_47_47, hlds__hlds_code_util__Renaming_8);
                  }
#line 350 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = MR_TRUE;
#line 348 "hlds_code_util.m"
                }
#line 348 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
        }
#line 348 "hlds_code_util.m"
        break;
#line 348 "hlds_code_util.m"
      case (MR_Integer) 1:
#line 356 "hlds_code_util.m"
        {
#line 356 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__TypeInfo_49_49;
#line 356 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__InstA_6, (MR_Integer) 0)));
#line 356 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__V_54_54;

#line 357 "hlds_code_util.m"
          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 1)));
#line 357 "hlds_code_util.m"
          if (hlds__hlds_code_util__succeeded)
#line 357 "hlds_code_util.m"
            {
#line 357 "hlds_code_util.m"
              hlds__hlds_code_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)));
#line 357 "hlds_code_util.m"
              {
#line 357 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_code_util__Type_9, hlds__hlds_code_util__V_54_54);
              }
#line 356 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 356 "hlds_code_util.m"
                {
#line 1551 "hlds.hlds_code_util.c"
                  hlds__hlds_code_util__TypeInfo_49_49 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 358 "hlds_code_util.m"
                  {
#line 358 "hlds_code_util.m"
                    mercury__map__init_1_p_0(hlds__hlds_code_util__TypeInfo_49_49, hlds__hlds_code_util__TypeInfo_49_49, hlds__hlds_code_util__Renaming_8);
                  }
#line 358 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = MR_TRUE;
#line 356 "hlds_code_util.m"
                }
#line 357 "hlds_code_util.m"
            }
#line 356 "hlds_code_util.m"
        }
#line 348 "hlds_code_util.m"
        break;
#line 348 "hlds_code_util.m"
      case (MR_Integer) 2:
#line 360 "hlds_code_util.m"
        {
#line 360 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstA_6, (MR_Integer) 0)));
#line 360 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__HOInstInfoA_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 360 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__HOInstInfoB_12;
#line 360 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__V_55_55;

#line 361 "hlds_code_util.m"
          hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 2)));
#line 361 "hlds_code_util.m"
          if (hlds__hlds_code_util__succeeded)
#line 361 "hlds_code_util.m"
            {
#line 361 "hlds_code_util.m"
              hlds__hlds_code_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)));
#line 361 "hlds_code_util.m"
              hlds__hlds_code_util__HOInstInfoB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 361 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Uniq_10 == hlds__hlds_code_util__V_55_55);
#line 360 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 362 "hlds_code_util.m"
                {
#line 362 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__HOInstInfoA_11, hlds__hlds_code_util__HOInstInfoB_12, hlds__hlds_code_util__Renaming_8);
                }
#line 361 "hlds_code_util.m"
            }
#line 360 "hlds_code_util.m"
        }
#line 348 "hlds_code_util.m"
        break;
#line 348 "hlds_code_util.m"
      case (MR_Integer) 3:
#line 348 "hlds_code_util.m"
#line 348 "hlds_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 0)))) {
#line 348 "hlds_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 348 "hlds_code_util.m"
          case (MR_Integer) 0:
#line 370 "hlds_code_util.m"
            {
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_50_50;
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__BoundInstsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 3)));
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__BoundInstsB_16;
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_40_40;
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__Uniq_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_57_57;
#line 370 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
#line 371 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_15_15;

#line 371 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 371 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 371 "hlds_code_util.m"
                {
#line 371 "hlds_code_util.m"
                  hlds__hlds_code_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 371 "hlds_code_util.m"
                  hlds__hlds_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
#line 371 "hlds_code_util.m"
                  hlds__hlds_code_util__BoundInstsB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 3)));
#line 371 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Uniq_44 == hlds__hlds_code_util__V_57_57);
#line 370 "hlds_code_util.m"
                  if (hlds__hlds_code_util__succeeded)
#line 370 "hlds_code_util.m"
                    {
#line 1652 "hlds.hlds_code_util.c"
                      hlds__hlds_code_util__TypeInfo_50_50 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 373 "hlds_code_util.m"
                      {
#line 373 "hlds_code_util.m"
                        hlds__hlds_code_util__V_40_40 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_50_50, hlds__hlds_code_util__TypeInfo_50_50);
                      }
#line 372 "hlds_code_util.m"
                      {
#line 372 "hlds_code_util.m"
                        hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__BoundInstsA_14, hlds__hlds_code_util__BoundInstsB_16, hlds__hlds_code_util__V_40_40, hlds__hlds_code_util__Renaming_8);
                      }
#line 370 "hlds_code_util.m"
                    }
#line 371 "hlds_code_util.m"
                }
#line 370 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
          case (MR_Integer) 1:
#line 365 "hlds_code_util.m"
            {
#line 365 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__Uniq_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 365 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__HOInstInfoA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
#line 365 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__HOInstInfoB_43;
#line 365 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_56_56;

#line 366 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 366 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 366 "hlds_code_util.m"
                {
#line 366 "hlds_code_util.m"
                  hlds__hlds_code_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 366 "hlds_code_util.m"
                  hlds__hlds_code_util__HOInstInfoB_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
#line 366 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Uniq_41 == hlds__hlds_code_util__V_56_56);
#line 365 "hlds_code_util.m"
                  if (hlds__hlds_code_util__succeeded)
#line 367 "hlds_code_util.m"
                    {
#line 367 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_ho_inst_infos_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__HOInstInfoA_42, hlds__hlds_code_util__HOInstInfoB_43, hlds__hlds_code_util__Renaming_8);
                    }
#line 366 "hlds_code_util.m"
                }
#line 365 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
          case (MR_Integer) 2:
#line 375 "hlds_code_util.m"
            {
#line 375 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_51_51;
#line 375 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__VarA_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 375 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__VarB_18;

#line 376 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 376 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 376 "hlds_code_util.m"
                {
#line 376 "hlds_code_util.m"
                  hlds__hlds_code_util__VarB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 1729 "hlds.hlds_code_util.c"
                  hlds__hlds_code_util__TypeInfo_51_51 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 377 "hlds_code_util.m"
                  {
#line 377 "hlds_code_util.m"
                    *hlds__hlds_code_util__Renaming_8 = mercury__map__singleton_2_f_0(hlds__hlds_code_util__TypeInfo_51_51, hlds__hlds_code_util__TypeInfo_51_51, ((MR_Box) (hlds__hlds_code_util__VarA_17)), ((MR_Box) (hlds__hlds_code_util__VarB_18)));
                  }
#line 377 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = MR_TRUE;
#line 376 "hlds_code_util.m"
                }
#line 375 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
          case (MR_Integer) 3:
#line 379 "hlds_code_util.m"
            {
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_52_52;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__InstVarSetA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__SpecInstA_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__InstVarSetB_21;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__SpecInstB_22;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__Renaming0_23;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ListVarA_24;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ListVarB_25;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__VarA_45;
#line 379 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__VarB_46;
#line 386 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__VarA0_26;
#line 386 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__VarB0_27;
#line 387 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_35_35;
#line 387 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_36_36;
#line 395 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__SpecVarB_28;
#line 395 "hlds_code_util.m"
              MR_Box hlds__hlds_code_util__conv0_SpecVarB_28;

#line 380 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 380 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 380 "hlds_code_util.m"
                {
#line 380 "hlds_code_util.m"
                  hlds__hlds_code_util__InstVarSetB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 380 "hlds_code_util.m"
                  hlds__hlds_code_util__SpecInstB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
#line 383 "hlds_code_util.m"
                  {
#line 383 "hlds_code_util.m"
                    hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__SpecInstA_20, hlds__hlds_code_util__SpecInstB_22, &hlds__hlds_code_util__Renaming0_23);
                  }
#line 379 "hlds_code_util.m"
                  if (hlds__hlds_code_util__succeeded)
#line 379 "hlds_code_util.m"
                    {
#line 1800 "hlds.hlds_code_util.c"
                      hlds__hlds_code_util__TypeInfo_52_52 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 384 "hlds_code_util.m"
                      {
#line 384 "hlds_code_util.m"
                        hlds__hlds_code_util__ListVarA_24 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__InstVarSetA_19);
                      }
#line 385 "hlds_code_util.m"
                      {
#line 385 "hlds_code_util.m"
                        hlds__hlds_code_util__ListVarB_25 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__InstVarSetB_21);
                      }
#line 387 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__ListVarA_24)) == (MR_mktag((MR_Integer) 1)));
#line 387 "hlds_code_util.m"
                      if (hlds__hlds_code_util__succeeded)
#line 387 "hlds_code_util.m"
                        {
#line 387 "hlds_code_util.m"
                          hlds__hlds_code_util__VarA0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarA_24, (MR_Integer) 0)));
#line 387 "hlds_code_util.m"
                          hlds__hlds_code_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarA_24, (MR_Integer) 1)));
#line 387 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "hlds_code_util.m"
                          if (hlds__hlds_code_util__succeeded)
#line 387 "hlds_code_util.m"
                            {
#line 388 "hlds_code_util.m"
                              hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__ListVarB_25)) == (MR_mktag((MR_Integer) 1)));
#line 388 "hlds_code_util.m"
                              if (hlds__hlds_code_util__succeeded)
#line 388 "hlds_code_util.m"
                                {
#line 388 "hlds_code_util.m"
                                  hlds__hlds_code_util__VarB0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarB_25, (MR_Integer) 0)));
#line 388 "hlds_code_util.m"
                                  hlds__hlds_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__ListVarB_25, (MR_Integer) 1)));
#line 388 "hlds_code_util.m"
                                  hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "hlds_code_util.m"
                                }
#line 387 "hlds_code_util.m"
                            }
#line 387 "hlds_code_util.m"
                        }
#line 386 "hlds_code_util.m"
                      if (hlds__hlds_code_util__succeeded)
#line 390 "hlds_code_util.m"
                        {
#line 390 "hlds_code_util.m"
                          hlds__hlds_code_util__VarA_45 = hlds__hlds_code_util__VarA0_26;
#line 391 "hlds_code_util.m"
                          hlds__hlds_code_util__VarB_46 = hlds__hlds_code_util__VarB0_27;
#line 390 "hlds_code_util.m"
                        }
#line 386 "hlds_code_util.m"
                      else
#line 393 "hlds_code_util.m"
                        {
#line 393 "hlds_code_util.m"
                          {
#line 393 "hlds_code_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "predicate \140hlds.hlds_code_util.match_insts_with_renaming\'/4", (MR_String) "non-singleton sets");
                          }
#line 393 "hlds_code_util.m"
                        }
#line 395 "hlds_code_util.m"
                      {
#line 395 "hlds_code_util.m"
                        hlds__hlds_code_util__succeeded = mercury__map__search_3_p_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__Renaming0_23, ((MR_Box) (hlds__hlds_code_util__VarA_45)), &hlds__hlds_code_util__conv0_SpecVarB_28);
                      }
#line 395 "hlds_code_util.m"
                      if (hlds__hlds_code_util__succeeded)
#line 395 "hlds_code_util.m"
                        {
#line 395 "hlds_code_util.m"
                          hlds__hlds_code_util__SpecVarB_28 = ((MR_Word) hlds__hlds_code_util__conv0_SpecVarB_28);
#line 395 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = MR_TRUE;
#line 395 "hlds_code_util.m"
                        }
#line 395 "hlds_code_util.m"
                      if (hlds__hlds_code_util__succeeded)
#line 398 "hlds_code_util.m"
                        {
#line 398 "hlds_code_util.m"
                          {
#line 398 "hlds_code_util.m"
                            hlds__hlds_code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_code_util_scalar_common_1[1], ((MR_Box) (hlds__hlds_code_util__VarB_46)), ((MR_Box) (hlds__hlds_code_util__SpecVarB_28)));
                          }
#line 398 "hlds_code_util.m"
                          if (hlds__hlds_code_util__succeeded)
#line 398 "hlds_code_util.m"
                            {
#line 399 "hlds_code_util.m"
                              *hlds__hlds_code_util__Renaming_8 = hlds__hlds_code_util__Renaming0_23;
#line 399 "hlds_code_util.m"
                              hlds__hlds_code_util__succeeded = MR_TRUE;
#line 398 "hlds_code_util.m"
                            }
#line 398 "hlds_code_util.m"
                        }
#line 395 "hlds_code_util.m"
                      else
#line 401 "hlds_code_util.m"
                        {
#line 401 "hlds_code_util.m"
                          {
#line 401 "hlds_code_util.m"
                            mercury__map__det_insert_4_p_0(hlds__hlds_code_util__TypeInfo_52_52, hlds__hlds_code_util__TypeInfo_52_52, ((MR_Box) (hlds__hlds_code_util__VarA_45)), ((MR_Box) (hlds__hlds_code_util__VarB_46)), hlds__hlds_code_util__Renaming0_23, hlds__hlds_code_util__Renaming_8);
                          }
#line 401 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = MR_TRUE;
#line 401 "hlds_code_util.m"
                        }
#line 379 "hlds_code_util.m"
                    }
#line 380 "hlds_code_util.m"
                }
#line 379 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
          case (MR_Integer) 4:
#line 404 "hlds_code_util.m"
            {
#line 404 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__InstNameA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 404 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__InstNameB_30;

#line 405 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 405 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 405 "hlds_code_util.m"
                {
#line 405 "hlds_code_util.m"
                  hlds__hlds_code_util__InstNameB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 406 "hlds_code_util.m"
                  {
#line 406 "hlds_code_util.m"
                    hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_inst_names_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__InstNameA_29, hlds__hlds_code_util__InstNameB_30, hlds__hlds_code_util__Renaming_8);
                  }
#line 405 "hlds_code_util.m"
                }
#line 404 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
          case (MR_Integer) 5:
#line 409 "hlds_code_util.m"
            {
#line 409 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeInfo_53_53;
#line 409 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 1)));
#line 409 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ArgsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstA_6, (MR_Integer) 2)));
#line 409 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ArgsB_33;
#line 409 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_34_34;
#line 409 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_58_58;

#line 410 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_code_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 410 "hlds_code_util.m"
              if (hlds__hlds_code_util__succeeded)
#line 410 "hlds_code_util.m"
                {
#line 410 "hlds_code_util.m"
                  hlds__hlds_code_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 1)));
#line 410 "hlds_code_util.m"
                  hlds__hlds_code_util__ArgsB_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__InstB_7, (MR_Integer) 2)));
#line 410 "hlds_code_util.m"
                  {
#line 410 "hlds_code_util.m"
                    hlds__hlds_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_code_util__Name_31, hlds__hlds_code_util__V_58_58);
                  }
#line 409 "hlds_code_util.m"
                  if (hlds__hlds_code_util__succeeded)
#line 409 "hlds_code_util.m"
                    {
#line 1988 "hlds.hlds_code_util.c"
                      hlds__hlds_code_util__TypeInfo_53_53 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 412 "hlds_code_util.m"
                      {
#line 412 "hlds_code_util.m"
                        hlds__hlds_code_util__V_34_34 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_53_53, hlds__hlds_code_util__TypeInfo_53_53);
                      }
#line 411 "hlds_code_util.m"
                      {
#line 411 "hlds_code_util.m"
                        hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ArgsA_32, hlds__hlds_code_util__ArgsB_33, hlds__hlds_code_util__V_34_34, hlds__hlds_code_util__Renaming_8);
                      }
#line 409 "hlds_code_util.m"
                    }
#line 410 "hlds_code_util.m"
                }
#line 409 "hlds_code_util.m"
            }
#line 348 "hlds_code_util.m"
            break;
#line 348 "hlds_code_util.m"
        }
#line 348 "hlds_code_util.m"
        break;
#line 348 "hlds_code_util.m"
    }
#line 348 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 348 "hlds_code_util.m"
  }
#line 343 "hlds_code_util.m"
}

#line 459 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0_1(
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 459 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
#line 459 "hlds_code_util.m"
{
#line 459 "hlds_code_util.m"
  {
#line 459 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 459 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 459 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_A_3;

#line 459 "hlds_code_util.m"
    {
#line 459 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_A_3);
    }
#line 459 "hlds_code_util.m"
    if (hlds__hlds_code_util__succeeded)
#line 459 "hlds_code_util.m"
      {
#line 459 "hlds_code_util.m"
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_A_3));
#line 459 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_TRUE;
#line 459 "hlds_code_util.m"
      }
#line 459 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 459 "hlds_code_util.m"
  }
#line 459 "hlds_code_util.m"
}

#line 328 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_inst_lists_with_renaming_5_p_0(
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
#line 328 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
#line 328 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5)
#line 328 "hlds_code_util.m"
{
#line 332 "hlds_code_util.m"
  while (MR_TRUE)
#line 332 "hlds_code_util.m"
    {
#line 332 "hlds_code_util.m"
      /* tailcall optimized into a loop */
#line 332 "hlds_code_util.m"
      {
#line 332 "hlds_code_util.m"
        MR_bool hlds__hlds_code_util__succeeded;

#line 332 "hlds_code_util.m"
        if ((hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "hlds_code_util.m"
          {
#line 332 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 332 "hlds_code_util.m"
              {
#line 332 "hlds_code_util.m"
                *hlds__hlds_code_util__STATE_VARIABLE_Renaming_5 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4;
#line 332 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = MR_TRUE;
#line 332 "hlds_code_util.m"
              }
#line 332 "hlds_code_util.m"
          }
#line 332 "hlds_code_util.m"
        else
#line 334 "hlds_code_util.m"
          {
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__TypeInfo_25_25;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__TypeInfo_11_35;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__A_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__B_13;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Bs_14;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ConsId_16;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ArgsA_17;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ArgsB_18;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Renaming0_19;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_22_22;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_23_23;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_26_26;
#line 334 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_31_31;

#line 334 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 334 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 334 "hlds_code_util.m"
              {
#line 334 "hlds_code_util.m"
                hlds__hlds_code_util__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 0)));
#line 334 "hlds_code_util.m"
                hlds__hlds_code_util__Bs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 1)));
#line 335 "hlds_code_util.m"
                hlds__hlds_code_util__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__A_11, (MR_Integer) 0)));
#line 335 "hlds_code_util.m"
                hlds__hlds_code_util__ArgsA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__A_11, (MR_Integer) 1)));
#line 336 "hlds_code_util.m"
                hlds__hlds_code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__B_13, (MR_Integer) 0)));
#line 336 "hlds_code_util.m"
                hlds__hlds_code_util__ArgsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__B_13, (MR_Integer) 1)));
#line 336 "hlds_code_util.m"
                {
#line 336 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__hlds_code_util__ConsId_16, hlds__hlds_code_util__V_26_26);
                }
#line 334 "hlds_code_util.m"
                if (hlds__hlds_code_util__succeeded)
#line 334 "hlds_code_util.m"
                  {
#line 2169 "hlds.hlds_code_util.c"
                    hlds__hlds_code_util__TypeInfo_25_25 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 338 "hlds_code_util.m"
                    {
#line 338 "hlds_code_util.m"
                      hlds__hlds_code_util__V_22_22 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_25_25, hlds__hlds_code_util__TypeInfo_25_25);
                    }
#line 337 "hlds_code_util.m"
                    {
#line 337 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(hlds__hlds_code_util__ModuleInfo_1, hlds__hlds_code_util__ArgsA_17, hlds__hlds_code_util__ArgsB_18, hlds__hlds_code_util__V_22_22, &hlds__hlds_code_util__Renaming0_19);
                    }
#line 334 "hlds_code_util.m"
                    if (hlds__hlds_code_util__succeeded)
#line 334 "hlds_code_util.m"
                      {
#line 459 "hlds_code_util.m"
                        hlds__hlds_code_util__V_31_31 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[7];
#line 2187 "hlds.hlds_code_util.c"
                        hlds__hlds_code_util__TypeInfo_11_35 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 459 "hlds_code_util.m"
                        {
#line 459 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = mercury__map__union_4_p_0(hlds__hlds_code_util__TypeInfo_11_35, hlds__hlds_code_util__TypeInfo_11_35, hlds__hlds_code_util__V_31_31, hlds__hlds_code_util__Renaming0_19, hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4, &hlds__hlds_code_util__STATE_VARIABLE_Renaming_23_23);
                        }
#line 334 "hlds_code_util.m"
                        if (hlds__hlds_code_util__succeeded)
#line 340 "hlds_code_util.m"
                          {
#line 340 "hlds_code_util.m"
                            /* direct tailcall eliminated */
#line 340 "hlds_code_util.m"
                            {
#line 340 "hlds_code_util.m"
                              MR_Word hlds__hlds_code_util__HeadVar__2__tmp_copy_2 = hlds__hlds_code_util__As_12;
#line 340 "hlds_code_util.m"
                              MR_Word hlds__hlds_code_util__HeadVar__3__tmp_copy_3 = hlds__hlds_code_util__Bs_14;
#line 340 "hlds_code_util.m"
                              MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0__tmp_copy_4 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_23_23;

#line 340 "hlds_code_util.m"
                              hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_0__tmp_copy_4;
#line 340 "hlds_code_util.m"
                              hlds__hlds_code_util__HeadVar__3_3 = hlds__hlds_code_util__HeadVar__3__tmp_copy_3;
#line 340 "hlds_code_util.m"
                              hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__HeadVar__2__tmp_copy_2;
#line 340 "hlds_code_util.m"
                            }
#line 340 "hlds_code_util.m"
                            continue;
#line 340 "hlds_code_util.m"
                          }
#line 334 "hlds_code_util.m"
                      }
#line 334 "hlds_code_util.m"
                  }
#line 334 "hlds_code_util.m"
              }
#line 334 "hlds_code_util.m"
          }
#line 332 "hlds_code_util.m"
        return hlds__hlds_code_util__succeeded;
#line 332 "hlds_code_util.m"
      }
#line 332 "hlds_code_util.m"
      break;
#line 332 "hlds_code_util.m"
    }
#line 328 "hlds_code_util.m"
}

#line 459 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 459 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 459 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
#line 459 "hlds_code_util.m"
{
#line 459 "hlds_code_util.m"
  {
#line 459 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 459 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 459 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_A_3;

#line 459 "hlds_code_util.m"
    {
#line 459 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_A_3);
    }
#line 459 "hlds_code_util.m"
    if (hlds__hlds_code_util__succeeded)
#line 459 "hlds_code_util.m"
      {
#line 459 "hlds_code_util.m"
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_A_3));
#line 459 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_TRUE;
#line 459 "hlds_code_util.m"
      }
#line 459 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 459 "hlds_code_util.m"
  }
#line 459 "hlds_code_util.m"
}

#line 316 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_1,
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
#line 316 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4,
#line 316 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__STATE_VARIABLE_Renaming_5)
#line 316 "hlds_code_util.m"
{
#line 320 "hlds_code_util.m"
  while (MR_TRUE)
#line 320 "hlds_code_util.m"
    {
#line 320 "hlds_code_util.m"
      /* tailcall optimized into a loop */
#line 320 "hlds_code_util.m"
      {
#line 320 "hlds_code_util.m"
        MR_bool hlds__hlds_code_util__succeeded;

#line 320 "hlds_code_util.m"
        if ((hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "hlds_code_util.m"
          {
#line 320 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 320 "hlds_code_util.m"
              {
#line 320 "hlds_code_util.m"
                *hlds__hlds_code_util__STATE_VARIABLE_Renaming_5 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4;
#line 320 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = MR_TRUE;
#line 320 "hlds_code_util.m"
              }
#line 320 "hlds_code_util.m"
          }
#line 320 "hlds_code_util.m"
        else
#line 322 "hlds_code_util.m"
          {
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__TypeInfo_11_28;
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__A_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__B_13;
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Bs_14;
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Renaming0_16;
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_19_19;
#line 322 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_24_24;

#line 321 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 321 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 321 "hlds_code_util.m"
              {
#line 321 "hlds_code_util.m"
                hlds__hlds_code_util__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 0)));
#line 321 "hlds_code_util.m"
                hlds__hlds_code_util__Bs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__3_3, (MR_Integer) 1)));
#line 323 "hlds_code_util.m"
                {
#line 323 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_1, hlds__hlds_code_util__A_11, hlds__hlds_code_util__B_13, &hlds__hlds_code_util__Renaming0_16);
                }
#line 322 "hlds_code_util.m"
                if (hlds__hlds_code_util__succeeded)
#line 322 "hlds_code_util.m"
                  {
#line 459 "hlds_code_util.m"
                    hlds__hlds_code_util__V_24_24 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[6];
#line 2370 "hlds.hlds_code_util.c"
                    hlds__hlds_code_util__TypeInfo_11_28 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 459 "hlds_code_util.m"
                    {
#line 459 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = mercury__map__union_4_p_0(hlds__hlds_code_util__TypeInfo_11_28, hlds__hlds_code_util__TypeInfo_11_28, hlds__hlds_code_util__V_24_24, hlds__hlds_code_util__Renaming0_16, hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4, &hlds__hlds_code_util__STATE_VARIABLE_Renaming_19_19);
                    }
#line 322 "hlds_code_util.m"
                    if (hlds__hlds_code_util__succeeded)
#line 325 "hlds_code_util.m"
                      {
#line 325 "hlds_code_util.m"
                        /* direct tailcall eliminated */
#line 325 "hlds_code_util.m"
                        {
#line 325 "hlds_code_util.m"
                          MR_Word hlds__hlds_code_util__HeadVar__2__tmp_copy_2 = hlds__hlds_code_util__As_12;
#line 325 "hlds_code_util.m"
                          MR_Word hlds__hlds_code_util__HeadVar__3__tmp_copy_3 = hlds__hlds_code_util__Bs_14;
#line 325 "hlds_code_util.m"
                          MR_Word hlds__hlds_code_util__STATE_VARIABLE_Renaming_0__tmp_copy_4 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_19_19;

#line 325 "hlds_code_util.m"
                          hlds__hlds_code_util__STATE_VARIABLE_Renaming_0_4 = hlds__hlds_code_util__STATE_VARIABLE_Renaming_0__tmp_copy_4;
#line 325 "hlds_code_util.m"
                          hlds__hlds_code_util__HeadVar__3_3 = hlds__hlds_code_util__HeadVar__3__tmp_copy_3;
#line 325 "hlds_code_util.m"
                          hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__HeadVar__2__tmp_copy_2;
#line 325 "hlds_code_util.m"
                        }
#line 325 "hlds_code_util.m"
                        continue;
#line 325 "hlds_code_util.m"
                      }
#line 322 "hlds_code_util.m"
                  }
#line 321 "hlds_code_util.m"
              }
#line 322 "hlds_code_util.m"
          }
#line 320 "hlds_code_util.m"
        return hlds__hlds_code_util__succeeded;
#line 320 "hlds_code_util.m"
      }
#line 320 "hlds_code_util.m"
      break;
#line 320 "hlds_code_util.m"
    }
#line 316 "hlds_code_util.m"
}

#line 295 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__3_3,
#line 295 "hlds_code_util.m"
  MR_Word * hlds__hlds_code_util__HeadVar__4_4,
#line 295 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_5)
#line 295 "hlds_code_util.m"
{
#line 300 "hlds_code_util.m"
  while (MR_TRUE)
#line 300 "hlds_code_util.m"
    {
#line 300 "hlds_code_util.m"
      /* tailcall optimized into a loop */
#line 300 "hlds_code_util.m"
      {
#line 300 "hlds_code_util.m"
        MR_bool hlds__hlds_code_util__succeeded;

#line 300 "hlds_code_util.m"
        if ((hlds__hlds_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "hlds_code_util.m"
          {
#line 300 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 300 "hlds_code_util.m"
              {
#line 300 "hlds_code_util.m"
                *hlds__hlds_code_util__HeadVar__4_4 = hlds__hlds_code_util__HeadVar__3_3;
#line 300 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = MR_TRUE;
#line 300 "hlds_code_util.m"
              }
#line 300 "hlds_code_util.m"
          }
#line 300 "hlds_code_util.m"
        else
#line 302 "hlds_code_util.m"
          {
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__TypeInfo_29_29;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ModeA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ModesA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ModeB_12;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__ModesB_13;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__InstAInitial_16;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__InstAFinal_17;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__InstBInitial_18;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__InstBFinal_19;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__InitialSubst_20;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__FinalSubst_21;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_24_24;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__STATE_VARIABLE_Substs_25_25;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_26_26;
#line 302 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_27_27;

#line 301 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 301 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 301 "hlds_code_util.m"
              {
#line 301 "hlds_code_util.m"
                hlds__hlds_code_util__ModeB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 301 "hlds_code_util.m"
                hlds__hlds_code_util__ModesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 307 "hlds_code_util.m"
                {
#line 307 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ModeA_10, &hlds__hlds_code_util__InstAInitial_16, &hlds__hlds_code_util__InstAFinal_17);
                }
#line 302 "hlds_code_util.m"
                if (hlds__hlds_code_util__succeeded)
#line 302 "hlds_code_util.m"
                  {
#line 308 "hlds_code_util.m"
                    {
#line 308 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__ModeB_12, &hlds__hlds_code_util__InstBInitial_18, &hlds__hlds_code_util__InstBFinal_19);
                    }
#line 302 "hlds_code_util.m"
                    if (hlds__hlds_code_util__succeeded)
#line 302 "hlds_code_util.m"
                      {
#line 309 "hlds_code_util.m"
                        {
#line 309 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__InstAInitial_16, hlds__hlds_code_util__InstBInitial_18, &hlds__hlds_code_util__InitialSubst_20);
                        }
#line 302 "hlds_code_util.m"
                        if (hlds__hlds_code_util__succeeded)
#line 302 "hlds_code_util.m"
                          {
#line 311 "hlds_code_util.m"
                            {
#line 311 "hlds_code_util.m"
                              hlds__hlds_code_util__succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(hlds__hlds_code_util__ModuleInfo_5, hlds__hlds_code_util__InstAFinal_17, hlds__hlds_code_util__InstBFinal_19, &hlds__hlds_code_util__FinalSubst_21);
                            }
#line 302 "hlds_code_util.m"
                            if (hlds__hlds_code_util__succeeded)
#line 302 "hlds_code_util.m"
                              {
#line 313 "hlds_code_util.m"
                                hlds__hlds_code_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2548 "hlds.hlds_code_util.c"
                                hlds__hlds_code_util__TypeInfo_29_29 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[0];
#line 313 "hlds_code_util.m"
                                {
#line 313 "hlds_code_util.m"
                                  hlds__hlds_code_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "hlds_code_util.m"
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_code_util__FinalSubst_21));
#line 313 "hlds_code_util.m"
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__V_26_26, 1) = ((MR_Box) (hlds__hlds_code_util__V_27_27));
#line 313 "hlds_code_util.m"
                                }
#line 313 "hlds_code_util.m"
                                {
#line 313 "hlds_code_util.m"
                                  hlds__hlds_code_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "hlds_code_util.m"
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_code_util__InitialSubst_20));
#line 313 "hlds_code_util.m"
                                  MR_hl_field(MR_mktag(1), hlds__hlds_code_util__V_24_24, 1) = ((MR_Box) (hlds__hlds_code_util__V_26_26));
#line 313 "hlds_code_util.m"
                                }
#line 313 "hlds_code_util.m"
                                {
#line 313 "hlds_code_util.m"
                                  mercury__list__append_3_p_1(hlds__hlds_code_util__TypeInfo_29_29, hlds__hlds_code_util__V_24_24, hlds__hlds_code_util__HeadVar__3_3, &hlds__hlds_code_util__STATE_VARIABLE_Substs_25_25);
                                }
#line 314 "hlds_code_util.m"
                                /* direct tailcall eliminated */
#line 314 "hlds_code_util.m"
                                {
#line 314 "hlds_code_util.m"
                                  MR_Word hlds__hlds_code_util__HeadVar__1__tmp_copy_1 = hlds__hlds_code_util__ModesA_11;
#line 314 "hlds_code_util.m"
                                  MR_Word hlds__hlds_code_util__HeadVar__2__tmp_copy_2 = hlds__hlds_code_util__ModesB_13;
#line 314 "hlds_code_util.m"
                                  MR_Word hlds__hlds_code_util__HeadVar__3__tmp_copy_3 = hlds__hlds_code_util__STATE_VARIABLE_Substs_25_25;

#line 314 "hlds_code_util.m"
                                  hlds__hlds_code_util__HeadVar__3_3 = hlds__hlds_code_util__HeadVar__3__tmp_copy_3;
#line 314 "hlds_code_util.m"
                                  hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__HeadVar__2__tmp_copy_2;
#line 314 "hlds_code_util.m"
                                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__HeadVar__1__tmp_copy_1;
#line 314 "hlds_code_util.m"
                                }
#line 314 "hlds_code_util.m"
                                continue;
#line 302 "hlds_code_util.m"
                              }
#line 302 "hlds_code_util.m"
                          }
#line 302 "hlds_code_util.m"
                      }
#line 302 "hlds_code_util.m"
                  }
#line 301 "hlds_code_util.m"
              }
#line 302 "hlds_code_util.m"
          }
#line 300 "hlds_code_util.m"
        return hlds__hlds_code_util__succeeded;
#line 300 "hlds_code_util.m"
      }
#line 300 "hlds_code_util.m"
      break;
#line 300 "hlds_code_util.m"
    }
#line 295 "hlds_code_util.m"
}

#line 293 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 293 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_2,
#line 293 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_3)
#line 293 "hlds_code_util.m"
{
#line 293 "hlds_code_util.m"
  {
#line 293 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 293 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 293 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_Result_6;

#line 293 "hlds_code_util.m"
    {
#line 293 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), ((MR_Word) hlds__hlds_code_util__wrapper_arg_2), &hlds__hlds_code_util__conv0_Result_6);
    }
#line 293 "hlds_code_util.m"
    if (hlds__hlds_code_util__succeeded)
#line 293 "hlds_code_util.m"
      {
#line 293 "hlds_code_util.m"
        *hlds__hlds_code_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_code_util__conv0_Result_6));
#line 293 "hlds_code_util.m"
        hlds__hlds_code_util__succeeded = MR_TRUE;
#line 293 "hlds_code_util.m"
      }
#line 293 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 293 "hlds_code_util.m"
  }
#line 293 "hlds_code_util.m"
}

#line 259 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
#line 259 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 259 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Modes_7,
#line 259 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
#line 259 "hlds_code_util.m"
  MR_Integer * hlds__hlds_code_util__OurProcId_9)
#line 259 "hlds_code_util.m"
{
#line 264 "hlds_code_util.m"
  while (MR_TRUE)
#line 264 "hlds_code_util.m"
    {
#line 264 "hlds_code_util.m"
      /* tailcall optimized into a loop */
#line 264 "hlds_code_util.m"
      {
#line 264 "hlds_code_util.m"
        MR_bool hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 264 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__P_5;
#line 264 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__Procs_6;
#line 264 "hlds_code_util.m"
        MR_Integer hlds__hlds_code_util__ProcId_10;
#line 264 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__ProcInfo_11;
#line 264 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__ArgModes_12;
#line 290 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__TypeInfo_16_28;
#line 290 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__TypeInfo_17_29;
#line 290 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__Renamings_21;
#line 290 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_22_22;
#line 290 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_23_23;
#line 290 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_24_24;
#line 293 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__V_16_16;
#line 293 "hlds_code_util.m"
        MR_Box hlds__hlds_code_util__conv1_V_16_16;

#line 263 "hlds_code_util.m"
        if (hlds__hlds_code_util__succeeded)
#line 263 "hlds_code_util.m"
          {
#line 263 "hlds_code_util.m"
            hlds__hlds_code_util__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "hlds_code_util.m"
            hlds__hlds_code_util__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "hlds_code_util.m"
            hlds__hlds_code_util__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 0)));
#line 265 "hlds_code_util.m"
            hlds__hlds_code_util__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 1)));
#line 266 "hlds_code_util.m"
            {
#line 266 "hlds_code_util.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(hlds__hlds_code_util__ProcInfo_11, &hlds__hlds_code_util__ArgModes_12);
            }
#line 291 "hlds_code_util.m"
            hlds__hlds_code_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "hlds_code_util.m"
            {
#line 291 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(hlds__hlds_code_util__Modes_7, hlds__hlds_code_util__ArgModes_12, hlds__hlds_code_util__V_22_22, &hlds__hlds_code_util__Renamings_21, hlds__hlds_code_util__ModuleInfo_8);
            }
#line 290 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 290 "hlds_code_util.m"
              {
#line 293 "hlds_code_util.m"
                hlds__hlds_code_util__V_23_23 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[5];
#line 2743 "hlds.hlds_code_util.c"
                hlds__hlds_code_util__TypeInfo_16_28 = (MR_Word) &hlds__hlds_code_util_scalar_common_1[1];
#line 293 "hlds_code_util.m"
                {
#line 293 "hlds_code_util.m"
                  hlds__hlds_code_util__V_24_24 = mercury__map__init_0_f_0(hlds__hlds_code_util__TypeInfo_16_28, hlds__hlds_code_util__TypeInfo_16_28);
                }
#line 2750 "hlds.hlds_code_util.c"
                hlds__hlds_code_util__TypeInfo_17_29 = (MR_Word) &hlds__hlds_code_util_scalar_common_2[0];
#line 293 "hlds_code_util.m"
                {
#line 293 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = mercury__list__foldl_4_p_3(hlds__hlds_code_util__TypeInfo_17_29, hlds__hlds_code_util__TypeInfo_17_29, hlds__hlds_code_util__V_23_23, hlds__hlds_code_util__Renamings_21, ((MR_Box) (hlds__hlds_code_util__V_24_24)), &hlds__hlds_code_util__conv1_V_16_16);
                }
#line 293 "hlds_code_util.m"
                if (hlds__hlds_code_util__succeeded)
#line 293 "hlds_code_util.m"
                  {
#line 293 "hlds_code_util.m"
                    hlds__hlds_code_util__V_16_16 = ((MR_Word) hlds__hlds_code_util__conv1_V_16_16);
#line 293 "hlds_code_util.m"
                    hlds__hlds_code_util__succeeded = MR_TRUE;
#line 293 "hlds_code_util.m"
                  }
#line 290 "hlds_code_util.m"
              }
#line 267 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 268 "hlds_code_util.m"
              {
#line 268 "hlds_code_util.m"
                *hlds__hlds_code_util__OurProcId_9 = hlds__hlds_code_util__ProcId_10;
#line 268 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = MR_TRUE;
#line 268 "hlds_code_util.m"
              }
#line 267 "hlds_code_util.m"
            else
#line 270 "hlds_code_util.m"
              {
#line 270 "hlds_code_util.m"
                /* direct tailcall eliminated */
#line 270 "hlds_code_util.m"
                {
#line 270 "hlds_code_util.m"
                  MR_Word hlds__hlds_code_util__HeadVar__1__tmp_copy_1 = hlds__hlds_code_util__Procs_6;

#line 270 "hlds_code_util.m"
                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__HeadVar__1__tmp_copy_1;
#line 270 "hlds_code_util.m"
                }
#line 270 "hlds_code_util.m"
                continue;
#line 270 "hlds_code_util.m"
              }
#line 263 "hlds_code_util.m"
          }
#line 264 "hlds_code_util.m"
        return hlds__hlds_code_util__succeeded;
#line 264 "hlds_code_util.m"
      }
#line 264 "hlds_code_util.m"
      break;
#line 264 "hlds_code_util.m"
    }
#line 259 "hlds_code_util.m"
}

#line 238 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
#line 238 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 238 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__2_2,
#line 238 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_3)
#line 238 "hlds_code_util.m"
{
#line 241 "hlds_code_util.m"
  while (MR_TRUE)
#line 241 "hlds_code_util.m"
    {
#line 241 "hlds_code_util.m"
      /* tailcall optimized into a loop */
#line 241 "hlds_code_util.m"
      {
#line 241 "hlds_code_util.m"
        MR_bool hlds__hlds_code_util__succeeded;

#line 241 "hlds_code_util.m"
        if ((hlds__hlds_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "hlds_code_util.m"
          hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "hlds_code_util.m"
        else
#line 242 "hlds_code_util.m"
          {
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Mode1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Modes1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Mode2_7;
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Modes2_8;
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Inst1_10;
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__Inst2_11;
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_12_12;
#line 242 "hlds_code_util.m"
            MR_Word hlds__hlds_code_util__V_13_13;

#line 242 "hlds_code_util.m"
            hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 242 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 242 "hlds_code_util.m"
              {
#line 242 "hlds_code_util.m"
                hlds__hlds_code_util__Mode2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "hlds_code_util.m"
                hlds__hlds_code_util__Modes2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "hlds_code_util.m"
                {
#line 246 "hlds_code_util.m"
                  hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_3, hlds__hlds_code_util__Mode1_5, &hlds__hlds_code_util__Inst1_10, &hlds__hlds_code_util__Inst2_11);
                }
#line 242 "hlds_code_util.m"
                if (hlds__hlds_code_util__succeeded)
#line 242 "hlds_code_util.m"
                  {
#line 247 "hlds_code_util.m"
                    {
#line 247 "hlds_code_util.m"
                      hlds__hlds_code_util__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(hlds__hlds_code_util__ModuleInfo_3, hlds__hlds_code_util__Mode2_7, &hlds__hlds_code_util__V_12_12, &hlds__hlds_code_util__V_13_13);
                    }
#line 242 "hlds_code_util.m"
                    if (hlds__hlds_code_util__succeeded)
#line 242 "hlds_code_util.m"
                      {
#line 247 "hlds_code_util.m"
                        {
#line 247 "hlds_code_util.m"
                          hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_code_util__Inst1_10, hlds__hlds_code_util__V_12_12);
                        }
#line 242 "hlds_code_util.m"
                        if (hlds__hlds_code_util__succeeded)
#line 242 "hlds_code_util.m"
                          {
#line 247 "hlds_code_util.m"
                            {
#line 247 "hlds_code_util.m"
                              hlds__hlds_code_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_code_util__Inst2_11, hlds__hlds_code_util__V_13_13);
                            }
#line 242 "hlds_code_util.m"
                            if (hlds__hlds_code_util__succeeded)
#line 248 "hlds_code_util.m"
                              {
#line 248 "hlds_code_util.m"
                                /* direct tailcall eliminated */
#line 248 "hlds_code_util.m"
                                {
#line 248 "hlds_code_util.m"
                                  MR_Word hlds__hlds_code_util__HeadVar__1__tmp_copy_1 = hlds__hlds_code_util__Modes1_6;
#line 248 "hlds_code_util.m"
                                  MR_Word hlds__hlds_code_util__HeadVar__2__tmp_copy_2 = hlds__hlds_code_util__Modes2_8;

#line 248 "hlds_code_util.m"
                                  hlds__hlds_code_util__HeadVar__2_2 = hlds__hlds_code_util__HeadVar__2__tmp_copy_2;
#line 248 "hlds_code_util.m"
                                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__HeadVar__1__tmp_copy_1;
#line 248 "hlds_code_util.m"
                                }
#line 248 "hlds_code_util.m"
                                continue;
#line 248 "hlds_code_util.m"
                              }
#line 242 "hlds_code_util.m"
                          }
#line 242 "hlds_code_util.m"
                      }
#line 242 "hlds_code_util.m"
                  }
#line 242 "hlds_code_util.m"
              }
#line 242 "hlds_code_util.m"
          }
#line 241 "hlds_code_util.m"
        return hlds__hlds_code_util__succeeded;
#line 241 "hlds_code_util.m"
      }
#line 241 "hlds_code_util.m"
      break;
#line 241 "hlds_code_util.m"
    }
#line 238 "hlds_code_util.m"
}

#line 226 "hlds_code_util.m"
static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(
#line 226 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__HeadVar__1_1,
#line 226 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Modes_7,
#line 226 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_8,
#line 226 "hlds_code_util.m"
  MR_Integer * hlds__hlds_code_util__OurProcId_9)
#line 226 "hlds_code_util.m"
{
#line 229 "hlds_code_util.m"
  while (MR_TRUE)
#line 229 "hlds_code_util.m"
    {
#line 229 "hlds_code_util.m"
      /* tailcall optimized into a loop */
#line 229 "hlds_code_util.m"
      {
#line 229 "hlds_code_util.m"
        MR_bool hlds__hlds_code_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 229 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__P_5;
#line 229 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__Procs_6;
#line 229 "hlds_code_util.m"
        MR_Integer hlds__hlds_code_util__ProcId_10;
#line 229 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__ProcInfo_11;
#line 229 "hlds_code_util.m"
        MR_Word hlds__hlds_code_util__ArgModes_12;

#line 229 "hlds_code_util.m"
        if (hlds__hlds_code_util__succeeded)
#line 229 "hlds_code_util.m"
          {
#line 229 "hlds_code_util.m"
            hlds__hlds_code_util__P_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "hlds_code_util.m"
            hlds__hlds_code_util__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 230 "hlds_code_util.m"
            hlds__hlds_code_util__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 0)));
#line 230 "hlds_code_util.m"
            hlds__hlds_code_util__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__P_5, (MR_Integer) 1)));
#line 231 "hlds_code_util.m"
            {
#line 231 "hlds_code_util.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_code_util__ProcInfo_11, &hlds__hlds_code_util__ArgModes_12);
            }
#line 232 "hlds_code_util.m"
            {
#line 232 "hlds_code_util.m"
              hlds__hlds_code_util__succeeded = hlds__hlds_code_util__mode_list_matches_3_p_0(hlds__hlds_code_util__Modes_7, hlds__hlds_code_util__ArgModes_12, hlds__hlds_code_util__ModuleInfo_8);
            }
#line 232 "hlds_code_util.m"
            if (hlds__hlds_code_util__succeeded)
#line 233 "hlds_code_util.m"
              {
#line 233 "hlds_code_util.m"
                *hlds__hlds_code_util__OurProcId_9 = hlds__hlds_code_util__ProcId_10;
#line 233 "hlds_code_util.m"
                hlds__hlds_code_util__succeeded = MR_TRUE;
#line 233 "hlds_code_util.m"
              }
#line 232 "hlds_code_util.m"
            else
#line 235 "hlds_code_util.m"
              {
#line 235 "hlds_code_util.m"
                /* direct tailcall eliminated */
#line 235 "hlds_code_util.m"
                {
#line 235 "hlds_code_util.m"
                  MR_Word hlds__hlds_code_util__HeadVar__1__tmp_copy_1 = hlds__hlds_code_util__Procs_6;

#line 235 "hlds_code_util.m"
                  hlds__hlds_code_util__HeadVar__1_1 = hlds__hlds_code_util__HeadVar__1__tmp_copy_1;
#line 235 "hlds_code_util.m"
                }
#line 235 "hlds_code_util.m"
                continue;
#line 235 "hlds_code_util.m"
              }
#line 229 "hlds_code_util.m"
          }
#line 229 "hlds_code_util.m"
        return hlds__hlds_code_util__succeeded;
#line 229 "hlds_code_util.m"
      }
#line 229 "hlds_code_util.m"
      break;
#line 229 "hlds_code_util.m"
    }
#line 226 "hlds_code_util.m"
}

#line 194 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__type_to_string_2_p_0(
#line 194 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Type_3,
#line 194 "hlds_code_util.m"
  MR_String * hlds__hlds_code_util__String_4)
#line 194 "hlds_code_util.m"
{
#line 196 "hlds_code_util.m"
  {
#line 196 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 196 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__TypeCtor_5;
#line 196 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__TypeName_6;
#line 196 "hlds_code_util.m"
    MR_Integer hlds__hlds_code_util__TypeArity_7;
#line 196 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__TypeNameString_8;
#line 196 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__TypeArityString_9;
#line 196 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__V_11_11;
#line 196 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__V_13_13;

#line 197 "hlds_code_util.m"
    {
#line 197 "hlds_code_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(hlds__hlds_code_util__Type_3, &hlds__hlds_code_util__TypeCtor_5);
    }
#line 198 "hlds_code_util.m"
    hlds__hlds_code_util__TypeName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__TypeCtor_5, (MR_Integer) 0)));
#line 198 "hlds_code_util.m"
    hlds__hlds_code_util__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__TypeCtor_5, (MR_Integer) 1)));
#line 199 "hlds_code_util.m"
    {
#line 199 "hlds_code_util.m"
      hlds__hlds_code_util__TypeNameString_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(hlds__hlds_code_util__TypeName_6, (MR_String) "__");
    }
#line 200 "hlds_code_util.m"
    {
#line 200 "hlds_code_util.m"
      mercury__string__int_to_string_2_p_0(hlds__hlds_code_util__TypeArity_7, &hlds__hlds_code_util__TypeArityString_9);
    }
#line 201 "hlds_code_util.m"
    {
#line 201 "hlds_code_util.m"
      hlds__hlds_code_util__V_13_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_code_util__TypeArityString_9, (MR_String) "__");
    }
#line 201 "hlds_code_util.m"
    {
#line 201 "hlds_code_util.m"
      hlds__hlds_code_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", hlds__hlds_code_util__V_13_13);
    }
#line 201 "hlds_code_util.m"
    {
#line 201 "hlds_code_util.m"
      *hlds__hlds_code_util__String_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_code_util__TypeNameString_8, hlds__hlds_code_util__V_11_11);
    }
#line 196 "hlds_code_util.m"
  }
#line 194 "hlds_code_util.m"
}

#line 255 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
#line 255 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 255 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 255 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
#line 255 "hlds_code_util.m"
{
#line 255 "hlds_code_util.m"
  {
#line 255 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 255 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_HeadVar__2_2;

#line 255 "hlds_code_util.m"
    {
#line 255 "hlds_code_util.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv0_HeadVar__2_2);
    }
#line 255 "hlds_code_util.m"
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__2_2));
#line 255 "hlds_code_util.m"
  }
#line 255 "hlds_code_util.m"
}

#line 61 "hlds_code_util.m"
MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(
#line 61 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Procs_5,
#line 61 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Modes0_6,
#line 61 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_7,
#line 61 "hlds_code_util.m"
  MR_Integer * hlds__hlds_code_util__ProcId_8)
#line 61 "hlds_code_util.m"
{
#line 254 "hlds_code_util.m"
  {
#line 254 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 254 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 254 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Modes_9;

#line 255 "hlds_code_util.m"
    {
#line 255 "hlds_code_util.m"
      mercury__list__map_3_p_0(hlds__hlds_code_util__TypeCtorInfo_13_13, hlds__hlds_code_util__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_code_util_scalar_common_2[4], hlds__hlds_code_util__Modes0_6, &hlds__hlds_code_util__Modes_9);
    }
#line 256 "hlds_code_util.m"
    {
#line 256 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(hlds__hlds_code_util__Procs_5, hlds__hlds_code_util__Modes_9, hlds__hlds_code_util__ModuleInfo_7, hlds__hlds_code_util__ProcId_8);
    }
#line 254 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 254 "hlds_code_util.m"
  }
#line 61 "hlds_code_util.m"
}

#line 223 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0_1(
#line 223 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 223 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 223 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
#line 223 "hlds_code_util.m"
{
#line 223 "hlds_code_util.m"
  {
#line 223 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 223 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__conv0_HeadVar__2_2;

#line 223 "hlds_code_util.m"
    {
#line 223 "hlds_code_util.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv0_HeadVar__2_2);
    }
#line 223 "hlds_code_util.m"
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv0_HeadVar__2_2));
#line 223 "hlds_code_util.m"
  }
#line 223 "hlds_code_util.m"
}

#line 54 "hlds_code_util.m"
MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(
#line 54 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Procs_5,
#line 54 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Modes0_6,
#line 54 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_7,
#line 54 "hlds_code_util.m"
  MR_Integer * hlds__hlds_code_util__ProcId_8)
#line 54 "hlds_code_util.m"
{
#line 222 "hlds_code_util.m"
  {
#line 222 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 222 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 222 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Modes_9;

#line 223 "hlds_code_util.m"
    {
#line 223 "hlds_code_util.m"
      mercury__list__map_3_p_0(hlds__hlds_code_util__TypeCtorInfo_13_13, hlds__hlds_code_util__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_code_util_scalar_common_2[3], hlds__hlds_code_util__Modes0_6, &hlds__hlds_code_util__Modes_9);
    }
#line 224 "hlds_code_util.m"
    {
#line 224 "hlds_code_util.m"
      hlds__hlds_code_util__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_2_4_p_0(hlds__hlds_code_util__Procs_5, hlds__hlds_code_util__Modes_9, hlds__hlds_code_util__ModuleInfo_7, hlds__hlds_code_util__ProcId_8);
    }
#line 222 "hlds_code_util.m"
    return hlds__hlds_code_util__succeeded;
#line 222 "hlds_code_util.m"
  }
#line 54 "hlds_code_util.m"
}

#line 191 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0_1(
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 191 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
#line 191 "hlds_code_util.m"
{
#line 191 "hlds_code_util.m"
  {
#line 191 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 191 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__conv2_String_4;

#line 191 "hlds_code_util.m"
    {
#line 191 "hlds_code_util.m"
      hlds__hlds_code_util__type_to_string_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv2_String_4);
    }
#line 191 "hlds_code_util.m"
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv2_String_4));
#line 191 "hlds_code_util.m"
  }
#line 191 "hlds_code_util.m"
}

#line 47 "hlds_code_util.m"
MR_Word MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(
#line 47 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstanceTable_6,
#line 47 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__Constraint_7,
#line 47 "hlds_code_util.m"
  MR_Integer hlds__hlds_code_util__InstanceNum_8,
#line 47 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstanceTypes_9)
#line 47 "hlds_code_util.m"
{
#line 210 "hlds_code_util.m"
  {
#line 210 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__ConsId_10;
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Constraint_7, (MR_Integer) 0)));
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__ConstraintArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__Constraint_7, (MR_Integer) 1)));
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__ClassId_13;
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__InstanceList_14;
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__InstanceDefn_15;
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__InstanceModuleName_16;
#line 210 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__InstanceString_17;
#line 210 "hlds_code_util.m"
    MR_Integer hlds__hlds_code_util__V_18_18;
#line 210 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__InstanceStrings_34;
#line 213 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__conv0_InstanceList_14;
#line 214 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__conv1_InstanceDefn_15;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_19_19;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_20_20;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_21_21;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_22_22;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_23_23;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_24_24;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_25_25;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_26_26;
#line 215 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__V_27_27;

#line 212 "hlds_code_util.m"
    {
#line 212 "hlds_code_util.m"
      hlds__hlds_code_util__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_code_util__ConstraintArgTypes_12);
    }
#line 212 "hlds_code_util.m"
    {
#line 212 "hlds_code_util.m"
      hlds__hlds_code_util__ClassId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "hlds_code_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_code_util__ClassId_13, 0) = ((MR_Box) (hlds__hlds_code_util__ClassName_11));
#line 212 "hlds_code_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_code_util__ClassId_13, 1) = ((MR_Box) (hlds__hlds_code_util__V_18_18));
#line 212 "hlds_code_util.m"
    }
#line 213 "hlds_code_util.m"
    {
#line 213 "hlds_code_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_code_util_scalar_common_1[0], hlds__hlds_code_util__InstanceTable_6, ((MR_Box) (hlds__hlds_code_util__ClassId_13)), &hlds__hlds_code_util__conv0_InstanceList_14);
    }
#line 213 "hlds_code_util.m"
    hlds__hlds_code_util__InstanceList_14 = ((MR_Word) hlds__hlds_code_util__conv0_InstanceList_14);
#line 214 "hlds_code_util.m"
    {
#line 214 "hlds_code_util.m"
      mercury__list__det_index1_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, hlds__hlds_code_util__InstanceList_14, hlds__hlds_code_util__InstanceNum_8, &hlds__hlds_code_util__conv1_InstanceDefn_15);
    }
#line 214 "hlds_code_util.m"
    hlds__hlds_code_util__InstanceDefn_15 = ((MR_Word) hlds__hlds_code_util__conv1_InstanceDefn_15);
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__InstanceModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 0)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 1)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 2)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 3)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 4)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 5)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 6)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 7)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 8)));
#line 215 "hlds_code_util.m"
    hlds__hlds_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__InstanceDefn_15, (MR_Integer) 9)));
#line 191 "hlds_code_util.m"
    {
#line 191 "hlds_code_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_code_util_scalar_common_2[2], hlds__hlds_code_util__InstanceTypes_9, &hlds__hlds_code_util__InstanceStrings_34);
    }
#line 192 "hlds_code_util.m"
    {
#line 192 "hlds_code_util.m"
      mercury__string__append_list_2_p_0(hlds__hlds_code_util__InstanceStrings_34, &hlds__hlds_code_util__InstanceString_17);
    }
#line 217 "hlds_code_util.m"
    {
#line 217 "hlds_code_util.m"
      hlds__hlds_code_util__ConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 217 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 217 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 1) = ((MR_Box) (hlds__hlds_code_util__InstanceModuleName_16));
#line 217 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 2) = ((MR_Box) (hlds__hlds_code_util__ClassId_13));
#line 217 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 3) = ((MR_Box) (hlds__hlds_code_util__InstanceNum_8));
#line 217 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_10, 4) = ((MR_Box) (hlds__hlds_code_util__InstanceString_17));
#line 217 "hlds_code_util.m"
    }
#line 210 "hlds_code_util.m"
    return hlds__hlds_code_util__ConsId_10;
#line 210 "hlds_code_util.m"
  }
#line 47 "hlds_code_util.m"
}

#line 43 "hlds_code_util.m"
MR_Word MR_CALL 
hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(
#line 43 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__TypeCtor_3)
#line 43 "hlds_code_util.m"
{
#line 205 "hlds_code_util.m"
  {
#line 205 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 205 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__ConsId_4;
#line 205 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__ModuleName_5;
#line 205 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__Name_6;
#line 205 "hlds_code_util.m"
    MR_Integer hlds__hlds_code_util__Arity_7;

#line 206 "hlds_code_util.m"
    {
#line 206 "hlds_code_util.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(hlds__hlds_code_util__TypeCtor_3, &hlds__hlds_code_util__ModuleName_5, &hlds__hlds_code_util__Name_6, &hlds__hlds_code_util__Arity_7);
    }
#line 207 "hlds_code_util.m"
    {
#line 207 "hlds_code_util.m"
      hlds__hlds_code_util__ConsId_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 207 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 207 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 1) = ((MR_Box) (hlds__hlds_code_util__ModuleName_5));
#line 207 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 2) = ((MR_Box) (hlds__hlds_code_util__Name_6));
#line 207 "hlds_code_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_4, 3) = ((MR_Box) (hlds__hlds_code_util__Arity_7));
#line 207 "hlds_code_util.m"
    }
#line 205 "hlds_code_util.m"
    return hlds__hlds_code_util__ConsId_4;
#line 205 "hlds_code_util.m"
  }
#line 43 "hlds_code_util.m"
}

#line 191 "hlds_code_util.m"
static void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0_1(
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__closure_arg,
#line 191 "hlds_code_util.m"
  MR_Box hlds__hlds_code_util__wrapper_arg_1,
#line 191 "hlds_code_util.m"
  MR_Box * hlds__hlds_code_util__wrapper_arg_2)
#line 191 "hlds_code_util.m"
{
#line 191 "hlds_code_util.m"
  {
#line 191 "hlds_code_util.m"
    MR_Box hlds__hlds_code_util__closure = hlds__hlds_code_util__closure_arg;
#line 191 "hlds_code_util.m"
    MR_String hlds__hlds_code_util__conv0_String_4;

#line 191 "hlds_code_util.m"
    {
#line 191 "hlds_code_util.m"
      hlds__hlds_code_util__type_to_string_2_p_0(((MR_Word) hlds__hlds_code_util__wrapper_arg_1), &hlds__hlds_code_util__conv0_String_4);
    }
#line 191 "hlds_code_util.m"
    *hlds__hlds_code_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_code_util__conv0_String_4));
#line 191 "hlds_code_util.m"
  }
#line 191 "hlds_code_util.m"
}

#line 39 "hlds_code_util.m"
void MR_CALL 
hlds__hlds_code_util__make_instance_string_2_p_0(
#line 39 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__InstanceTypes_3,
#line 39 "hlds_code_util.m"
  MR_String * hlds__hlds_code_util__InstanceString_4)
#line 39 "hlds_code_util.m"
{
#line 187 "hlds_code_util.m"
  {
#line 187 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 187 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__InstanceStrings_5;

#line 191 "hlds_code_util.m"
    {
#line 191 "hlds_code_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_code_util_scalar_common_2[1], hlds__hlds_code_util__InstanceTypes_3, &hlds__hlds_code_util__InstanceStrings_5);
    }
#line 192 "hlds_code_util.m"
    {
#line 192 "hlds_code_util.m"
      mercury__string__append_list_2_p_0(hlds__hlds_code_util__InstanceStrings_5, hlds__hlds_code_util__InstanceString_4);
    }
#line 187 "hlds_code_util.m"
  }
#line 39 "hlds_code_util.m"
}

#line 33 "hlds_code_util.m"
MR_Word MR_CALL 
hlds__hlds_code_util__cons_id_to_tag_2_f_0(
#line 33 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ModuleInfo_4,
#line 33 "hlds_code_util.m"
  MR_Word hlds__hlds_code_util__ConsId_5)
#line 33 "hlds_code_util.m"
{
#line 90 "hlds_code_util.m"
  {
#line 90 "hlds_code_util.m"
    MR_bool hlds__hlds_code_util__succeeded;
#line 90 "hlds_code_util.m"
    MR_Word hlds__hlds_code_util__Tag_6;

#line 90 "hlds_code_util.m"
#line 90 "hlds_code_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_code_util__ConsId_5)) {
#line 90 "hlds_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 90 "hlds_code_util.m"
      case (MR_Integer) 0:
#line 119 "hlds_code_util.m"
        {
#line 120 "hlds_code_util.m"
          hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[4]);
#line 119 "hlds_code_util.m"
        }
#line 90 "hlds_code_util.m"
        break;
#line 90 "hlds_code_util.m"
      case (MR_Integer) 1:
#line 119 "hlds_code_util.m"
        {
#line 120 "hlds_code_util.m"
          hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[4]);
#line 119 "hlds_code_util.m"
        }
#line 90 "hlds_code_util.m"
        break;
#line 90 "hlds_code_util.m"
      case (MR_Integer) 2:
#line 132 "hlds_code_util.m"
        {
#line 132 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__V_57_57;
#line 132 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__ShroudedPredProcId_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_code_util__ConsId_5, (MR_Integer) 0)));
#line 132 "hlds_code_util.m"
          MR_Word hlds__hlds_code_util__PredId_65;
#line 132 "hlds_code_util.m"
          MR_Integer hlds__hlds_code_util__ProcId_66;

#line 133 "hlds_code_util.m"
          {
#line 133 "hlds_code_util.m"
            hlds__hlds_code_util__V_57_57 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_64);
          }
#line 133 "hlds_code_util.m"
          hlds__hlds_code_util__PredId_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_57_57, (MR_Integer) 0)));
#line 133 "hlds_code_util.m"
          hlds__hlds_code_util__ProcId_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_57_57, (MR_Integer) 1)));
#line 134 "hlds_code_util.m"
          {
#line 134 "hlds_code_util.m"
            hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 134 "hlds_code_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 134 "hlds_code_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_65));
#line 134 "hlds_code_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_66));
#line 134 "hlds_code_util.m"
          }
#line 132 "hlds_code_util.m"
        }
#line 90 "hlds_code_util.m"
        break;
#line 90 "hlds_code_util.m"
      case (MR_Integer) 3:
#line 90 "hlds_code_util.m"
#line 90 "hlds_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 0)))) {
#line 90 "hlds_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 90 "hlds_code_util.m"
          case (MR_Integer) 0:
#line 140 "hlds_code_util.m"
            {
#line 140 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_55_55;
#line 140 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ShroudedPredProcId_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 140 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__PredId_71;
#line 140 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__ProcId_72;

#line 141 "hlds_code_util.m"
              {
#line 141 "hlds_code_util.m"
                hlds__hlds_code_util__V_55_55 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_70);
              }
#line 141 "hlds_code_util.m"
              hlds__hlds_code_util__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_55_55, (MR_Integer) 0)));
#line 141 "hlds_code_util.m"
              hlds__hlds_code_util__ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_55_55, (MR_Integer) 1)));
#line 142 "hlds_code_util.m"
              {
#line 142 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 142 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 142 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_71));
#line 142 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_72));
#line 142 "hlds_code_util.m"
              }
#line 140 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 1:
#line 136 "hlds_code_util.m"
            {
#line 136 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_56_56;
#line 136 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ShroudedPredProcId_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 136 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__PredId_68;
#line 136 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__ProcId_69;

#line 137 "hlds_code_util.m"
              {
#line 137 "hlds_code_util.m"
                hlds__hlds_code_util__V_56_56 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_67);
              }
#line 137 "hlds_code_util.m"
              hlds__hlds_code_util__PredId_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_56_56, (MR_Integer) 0)));
#line 137 "hlds_code_util.m"
              hlds__hlds_code_util__ProcId_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_56_56, (MR_Integer) 1)));
#line 138 "hlds_code_util.m"
              {
#line 138 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 138 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 138 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_68));
#line 138 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_69));
#line 138 "hlds_code_util.m"
              }
#line 136 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 2:
#line 168 "hlds_code_util.m"
            {
#line 168 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 3)));
#line 168 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeTable_34;
#line 168 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeDefn_35;
#line 168 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TypeBody_36;
#line 168 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util___Name_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 168 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util___Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));

#line 169 "hlds_code_util.m"
              {
#line 169 "hlds_code_util.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_code_util__ModuleInfo_4, &hlds__hlds_code_util__TypeTable_34);
              }
#line 170 "hlds_code_util.m"
              {
#line 170 "hlds_code_util.m"
                hlds__hlds_data__lookup_type_ctor_defn_3_p_0(hlds__hlds_code_util__TypeTable_34, hlds__hlds_code_util__TypeCtor_33, &hlds__hlds_code_util__TypeDefn_35);
              }
#line 171 "hlds_code_util.m"
              {
#line 171 "hlds_code_util.m"
                hlds__hlds_data__get_type_defn_body_2_p_0(hlds__hlds_code_util__TypeDefn_35, &hlds__hlds_code_util__TypeBody_36);
              }
#line 175 "hlds_code_util.m"
#line 175 "hlds_code_util.m"
              switch (MR_tag((MR_Word) hlds__hlds_code_util__TypeBody_36)) {
#line 175 "hlds_code_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 175 "hlds_code_util.m"
                case (MR_Integer) 0:
#line 180 "hlds_code_util.m"
                  {
#line 181 "hlds_code_util.m"
                    {
#line 181 "hlds_code_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "type is not d.u. type");
                    }
#line 180 "hlds_code_util.m"
                  }
#line 175 "hlds_code_util.m"
                  break;
#line 175 "hlds_code_util.m"
                case (MR_Integer) 1:
#line 173 "hlds_code_util.m"
                  {
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__ConsTagTable_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 1)));
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 0)));
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 2)));
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 3)));
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 4)));
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 5)));
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 173 "hlds_code_util.m"
                    MR_Word hlds__hlds_code_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_code_util__TypeBody_36, (MR_Integer) 7)));
#line 174 "hlds_code_util.m"
                    MR_Box hlds__hlds_code_util__conv0_Tag_6;

#line 174 "hlds_code_util.m"
                    {
#line 174 "hlds_code_util.m"
                      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_code_util__ConsTagTable_38, ((MR_Box) (hlds__hlds_code_util__ConsId_5)), &hlds__hlds_code_util__conv0_Tag_6);
                    }
#line 174 "hlds_code_util.m"
                    hlds__hlds_code_util__Tag_6 = ((MR_Word) hlds__hlds_code_util__conv0_Tag_6);
#line 173 "hlds_code_util.m"
                  }
#line 175 "hlds_code_util.m"
                  break;
#line 175 "hlds_code_util.m"
                case (MR_Integer) 2:
#line 180 "hlds_code_util.m"
                  {
#line 181 "hlds_code_util.m"
                    {
#line 181 "hlds_code_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "type is not d.u. type");
                    }
#line 180 "hlds_code_util.m"
                  }
#line 175 "hlds_code_util.m"
                  break;
#line 175 "hlds_code_util.m"
                case (MR_Integer) 3:
#line 180 "hlds_code_util.m"
                  {
#line 181 "hlds_code_util.m"
                    {
#line 181 "hlds_code_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "type is not d.u. type");
                    }
#line 180 "hlds_code_util.m"
                  }
#line 175 "hlds_code_util.m"
                  break;
#line 175 "hlds_code_util.m"
              }
#line 168 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 3:
#line 144 "hlds_code_util.m"
            {
#line 144 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__Globals_29;
#line 144 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__TargetLang_30;
#line 144 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__Arity_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

#line 148 "hlds_code_util.m"
              {
#line 148 "hlds_code_util.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_code_util__ModuleInfo_4, &hlds__hlds_code_util__Globals_29);
              }
#line 149 "hlds_code_util.m"
              {
#line 149 "hlds_code_util.m"
                libs__globals__get_target_2_p_0(hlds__hlds_code_util__Globals_29, &hlds__hlds_code_util__TargetLang_30);
              }
#line 159 "hlds_code_util.m"
#line 159 "hlds_code_util.m"
              switch (hlds__hlds_code_util__TargetLang_30) {
#line 159 "hlds_code_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 159 "hlds_code_util.m"
                case (MR_Integer) 0:
#line 159 "hlds_code_util.m"
                case (MR_Integer) 3:
#line 154 "hlds_code_util.m"
                  {
#line 154 "hlds_code_util.m"
                    hlds__hlds_code_util__succeeded = (hlds__hlds_code_util__Arity_73 == (MR_Integer) 0);
#line 154 "hlds_code_util.m"
                    if (hlds__hlds_code_util__succeeded)
#line 155 "hlds_code_util.m"
                      {
#line 155 "hlds_code_util.m"
                        hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__hlds_code_util_scalar_common_1[3]);
#line 155 "hlds_code_util.m"
                      }
#line 154 "hlds_code_util.m"
                    else
#line 157 "hlds_code_util.m"
                      hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 154 "hlds_code_util.m"
                  }
#line 159 "hlds_code_util.m"
                  break;
#line 159 "hlds_code_util.m"
                case (MR_Integer) 1:
#line 159 "hlds_code_util.m"
                case (MR_Integer) 2:
#line 165 "hlds_code_util.m"
                  hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 159 "hlds_code_util.m"
                  break;
#line 159 "hlds_code_util.m"
              }
#line 144 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 4:
#line 106 "hlds_code_util.m"
            {
#line 106 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ShroudedPredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 106 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__PredId_15;
#line 106 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__ProcId_16;
#line 106 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__V_59_59;

#line 107 "hlds_code_util.m"
              {
#line 107 "hlds_code_util.m"
                hlds__hlds_code_util__V_59_59 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_code_util__ShroudedPredProcId_13);
              }
#line 107 "hlds_code_util.m"
              hlds__hlds_code_util__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_59_59, (MR_Integer) 0)));
#line 107 "hlds_code_util.m"
              hlds__hlds_code_util__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_code_util__V_59_59, (MR_Integer) 1)));
#line 108 "hlds_code_util.m"
              {
#line 108 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 108 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 108 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__PredId_15));
#line 108 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ProcId_16));
#line 108 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 3) = NULL;
#line 108 "hlds_code_util.m"
              }
#line 106 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 5:
#line 90 "hlds_code_util.m"
            {
#line 90 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

#line 91 "hlds_code_util.m"
              {
#line 91 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 91 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__Int_7));
#line 91 "hlds_code_util.m"
              }
#line 90 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 6:
#line 93 "hlds_code_util.m"
            {
#line 93 "hlds_code_util.m"
              MR_Float hlds__hlds_code_util__Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

#line 94 "hlds_code_util.m"
              {
#line 94 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 94 "hlds_code_util.m"
                MR_hl_field(MR_mktag(2), hlds__hlds_code_util__Tag_6, 0) = MR_box_float(hlds__hlds_code_util__Float_8);
#line 94 "hlds_code_util.m"
              }
#line 93 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 7:
#line 96 "hlds_code_util.m"
            {
#line 96 "hlds_code_util.m"
              MR_Char hlds__hlds_code_util__Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 96 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__CharCode_10;

#line 97 "hlds_code_util.m"
              {
#line 97 "hlds_code_util.m"
                mercury__char__to_int_2_p_0(hlds__hlds_code_util__Char_9, &hlds__hlds_code_util__CharCode_10);
              }
#line 98 "hlds_code_util.m"
              {
#line 98 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 98 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 98 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__CharCode_10));
#line 98 "hlds_code_util.m"
              }
#line 96 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 8:
#line 100 "hlds_code_util.m"
            {
#line 100 "hlds_code_util.m"
              MR_String hlds__hlds_code_util__String_11 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

#line 101 "hlds_code_util.m"
              {
#line 101 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 101 "hlds_code_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (hlds__hlds_code_util__String_11));
#line 101 "hlds_code_util.m"
              }
#line 100 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 9:
#line 103 "hlds_code_util.m"
            {
#line 104 "hlds_code_util.m"
              {
#line 104 "hlds_code_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_code_util", (MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "implementation_defined_const");
              }
#line 103 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 10:
#line 110 "hlds_code_util.m"
            {
#line 110 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 110 "hlds_code_util.m"
              MR_String hlds__hlds_code_util__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));
#line 110 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 3)));

#line 111 "hlds_code_util.m"
              {
#line 111 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 111 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 111 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__ModuleName_17));
#line 111 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__TypeName_18));
#line 111 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 3) = ((MR_Box) (hlds__hlds_code_util__Arity_19));
#line 111 "hlds_code_util.m"
              }
#line 110 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 11:
#line 114 "hlds_code_util.m"
            {
#line 114 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ClassName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));
#line 114 "hlds_code_util.m"
              MR_String hlds__hlds_code_util__EncodedArgs_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 4)));
#line 114 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__ModuleName_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 113 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util___Instance_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 3)));

#line 115 "hlds_code_util.m"
              {
#line 115 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 115 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 115 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__ModuleName_63));
#line 115 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__ClassName_20));
#line 115 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 3) = ((MR_Box) (hlds__hlds_code_util__EncodedArgs_22));
#line 115 "hlds_code_util.m"
              }
#line 114 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 12:
#line 122 "hlds_code_util.m"
            {
#line 122 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__TIConstNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

#line 123 "hlds_code_util.m"
              {
#line 123 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 123 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__TIConstNum_24));
#line 123 "hlds_code_util.m"
              }
#line 122 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 13:
#line 125 "hlds_code_util.m"
            {
#line 125 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__TCIConstNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));

#line 126 "hlds_code_util.m"
              {
#line 126 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 126 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__TCIConstNum_25));
#line 126 "hlds_code_util.m"
              }
#line 125 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
          case (MR_Integer) 14:
#line 128 "hlds_code_util.m"
            {
#line 128 "hlds_code_util.m"
              MR_Integer hlds__hlds_code_util__ConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 1)));
#line 128 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__SubConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_code_util__ConsId_5, (MR_Integer) 2)));
#line 128 "hlds_code_util.m"
              MR_Word hlds__hlds_code_util__SubConsTag_28;

#line 129 "hlds_code_util.m"
              {
#line 129 "hlds_code_util.m"
                hlds__hlds_code_util__SubConsTag_28 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(hlds__hlds_code_util__ModuleInfo_4, hlds__hlds_code_util__SubConsId_27);
              }
#line 130 "hlds_code_util.m"
              {
#line 130 "hlds_code_util.m"
                hlds__hlds_code_util__Tag_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 130 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 130 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 1) = ((MR_Box) (hlds__hlds_code_util__ConstNum_26));
#line 130 "hlds_code_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_code_util__Tag_6, 2) = ((MR_Box) (hlds__hlds_code_util__SubConsTag_28));
#line 130 "hlds_code_util.m"
              }
#line 128 "hlds_code_util.m"
            }
#line 90 "hlds_code_util.m"
            break;
#line 90 "hlds_code_util.m"
        }
#line 90 "hlds_code_util.m"
        break;
#line 90 "hlds_code_util.m"
    }
#line 90 "hlds_code_util.m"
    return hlds__hlds_code_util__Tag_6;
#line 90 "hlds_code_util.m"
  }
#line 33 "hlds_code_util.m"
}

void mercury__hlds__hlds_code_util__init(void)
{
}

void mercury__hlds__hlds_code_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0);
	MR_register_type_ctor_info(&hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renamings_0);
}

void mercury__hlds__hlds_code_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_code_util. */
