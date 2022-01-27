/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2014-09-30
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


/* :- module hlds.hlds_out.hlds_out_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_util__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_util.mih"


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
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 141 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 144 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 150 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 156 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 159 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

#line 162 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

#line 165 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

#line 168 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

#line 171 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

#line 174 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

#line 177 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

#line 180 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

#line 183 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

#line 186 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

#line 189 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

#line 192 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

#line 195 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

#line 198 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

#line 201 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

#line 204 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

#line 207 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

#line 210 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

#line 213 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

#line 216 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

#line 219 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

#line 222 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

#line 225 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0;

#line 228 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1;

#line 231 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0[2];

#line 234 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0[2];

#line 237 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0[2];

#line 240 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 243 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 245 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 248 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 251 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 253 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 255 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 258 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 261 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 263 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 266 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 269 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 271 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 273 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 276 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 279 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 281 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 284 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 287 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 289 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 291 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 294 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 297 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 299 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 302 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 305 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 307 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 309 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 312 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001(
#line 315 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 317 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 320 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001(
#line 323 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 325 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 327 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 854 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__854__1_3_p_0(
#line 854 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_103,
#line 854 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_104,
#line 854 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_105);

#line 752 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__752__1_3_p_0(
#line 752 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_84,
#line 752 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_85,
#line 752 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_86);

#line 1028 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1028 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1028 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

#line 970 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 970 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 970 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 970 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 970 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4);

#line 452 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 452 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 452 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 452 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7);

#line 430 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 430 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 430 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 430 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 430 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13);

#line 406 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 406 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 406 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 406 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 406 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9);

#line 387 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 387 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 387 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 387 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 387 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 387 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5);

#line 346 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 346 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 346 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 346 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 346 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 346 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19);

#line 1000 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 1000 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 1000 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

#line 968 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0_1(
#line 968 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 968 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 968 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 968 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 851 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 851 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 851 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 851 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 851 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 749 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1(
#line 749 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 749 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 749 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 749 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of clause head:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function result term of clause head:"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ")\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "list element"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "#"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of functor"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "type_info_cell_constructor"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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



#line 685 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 693 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 702 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 710 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 718 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 726 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 735 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 743 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0
};

#line 752 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

#line 761 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0 = {
  (MR_String) "hlds_out_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0,
  NULL,
  NULL
};

#line 776 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 781 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

#line 790 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 795 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 800 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_out_info",
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0
  },
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0
};

#line 821 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

#line 827 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

#line 833 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 839 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 845 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 851 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_first",
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0
  },
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0
};

#line 872 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

#line 878 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

#line 884 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 890 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 896 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 902 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_last",
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0
  },
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0
};

#line 923 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

#line 929 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

#line 935 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

#line 941 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

#line 947 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 953 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "maybe_qualify_cons_id",
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0
  },
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0
};

#line 974 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  (MR_Integer) 0
};

#line 980 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  (MR_Integer) 1
};

#line 986 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1
};

#line 992 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0
};

#line 998 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1004 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "output_lang",
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0
  },
  {
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0
};

#line 1025 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 1028 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1030 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1032 "hlds.hlds_out.hlds_out_util.c"
{
#line 1034 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1036 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1039 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1041 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1044 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1046 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1048 "hlds.hlds_out.hlds_out_util.c"
}

#line 1051 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 1054 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1056 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1058 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1060 "hlds.hlds_out.hlds_out_util.c"
{
#line 1062 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1064 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1067 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1069 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1072 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1074 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1076 "hlds.hlds_out.hlds_out_util.c"
}

#line 1079 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 1082 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1084 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1086 "hlds.hlds_out.hlds_out_util.c"
{
#line 1088 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1090 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1093 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1095 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1098 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1100 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1102 "hlds.hlds_out.hlds_out_util.c"
}

#line 1105 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 1108 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1110 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1112 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1114 "hlds.hlds_out.hlds_out_util.c"
{
#line 1116 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1118 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1121 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1123 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1126 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1128 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1130 "hlds.hlds_out.hlds_out_util.c"
}

#line 1133 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 1136 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1138 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1140 "hlds.hlds_out.hlds_out_util.c"
{
#line 1142 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1144 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1147 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1149 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1152 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1154 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1156 "hlds.hlds_out.hlds_out_util.c"
}

#line 1159 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 1162 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1164 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1166 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1168 "hlds.hlds_out.hlds_out_util.c"
{
#line 1170 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1172 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1175 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1177 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1180 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1182 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1184 "hlds.hlds_out.hlds_out_util.c"
}

#line 1187 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 1190 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1192 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1194 "hlds.hlds_out.hlds_out_util.c"
{
#line 1196 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1198 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1201 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1203 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1206 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1208 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1210 "hlds.hlds_out.hlds_out_util.c"
}

#line 1213 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 1216 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1218 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1220 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1222 "hlds.hlds_out.hlds_out_util.c"
{
#line 1224 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1226 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1229 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1231 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1234 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1236 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1238 "hlds.hlds_out.hlds_out_util.c"
}

#line 1241 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001(
#line 1244 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1246 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1248 "hlds.hlds_out.hlds_out_util.c"
{
#line 1250 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1252 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1255 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1257 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1260 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1262 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1264 "hlds.hlds_out.hlds_out_util.c"
}

#line 1267 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001(
#line 1270 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1272 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1274 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1276 "hlds.hlds_out.hlds_out_util.c"
{
#line 1278 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1280 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1283 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1285 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1288 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1290 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1292 "hlds.hlds_out.hlds_out_util.c"
}

#line 854 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__854__1_3_p_0(
#line 854 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_103,
#line 854 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_104,
#line 854 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_105)
#line 854 "hlds_out_util.m"
{
#line 854 "hlds_out_util.m"
  {
#line 854 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_103 == (MR_Char) 42);

#line 854 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 853 "hlds_out_util.m"
      {
#line 853 "hlds_out_util.m"
        {
#line 853 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_104, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_105);
#line 853 "hlds_out_util.m"
          return;
        }
#line 853 "hlds_out_util.m"
      }
#line 854 "hlds_out_util.m"
    else
#line 855 "hlds_out_util.m"
      {
#line 855 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

#line 855 "hlds_out_util.m"
        {
#line 855 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_103, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
#line 856 "hlds_out_util.m"
        {
#line 856 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_104, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__HeadVar__3_105);
#line 856 "hlds_out_util.m"
          return;
        }
#line 855 "hlds_out_util.m"
      }
#line 854 "hlds_out_util.m"
  }
#line 854 "hlds_out_util.m"
}

#line 752 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__752__1_3_p_0(
#line 752 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_84,
#line 752 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_85,
#line 752 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_86)
#line 752 "hlds_out_util.m"
{
#line 752 "hlds_out_util.m"
  {
#line 752 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_84 == (MR_Char) 42);

#line 752 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 751 "hlds_out_util.m"
      {
#line 751 "hlds_out_util.m"
        {
#line 751 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_85, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_86);
#line 751 "hlds_out_util.m"
          return;
        }
#line 751 "hlds_out_util.m"
      }
#line 752 "hlds_out_util.m"
    else
#line 753 "hlds_out_util.m"
      {
#line 753 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_13;

#line 753 "hlds_out_util.m"
        {
#line 753 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_84, &hlds__hlds_out__hlds_out_util__CharStr_13);
        }
#line 754 "hlds_out_util.m"
        {
#line 754 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_85, hlds__hlds_out__hlds_out_util__CharStr_13, hlds__hlds_out__hlds_out_util__HeadVar__3_86);
#line 754 "hlds_out_util.m"
          return;
        }
#line 753 "hlds_out_util.m"
      }
#line 752 "hlds_out_util.m"
  }
#line 752 "hlds_out_util.m"
}

#line 59 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0(
#line 59 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 59 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 59 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 59 "hlds_out_util.m"
{
#line 59 "hlds_out_util.m"
  {
#line 59 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 59 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 59 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 59 "hlds_out_util.m"
    {
#line 59 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 59 "hlds_out_util.m"
      return;
    }
#line 59 "hlds_out_util.m"
  }
#line 59 "hlds_out_util.m"
}

#line 59 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0(
#line 59 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 59 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 59 "hlds_out_util.m"
{
#line 1446 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1448 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1451 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1453 "hlds.hlds_out.hlds_out_util.c"
  }
#line 59 "hlds_out_util.m"
}

#line 164 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
#line 164 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 164 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 164 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 164 "hlds_out_util.m"
{
#line 164 "hlds_out_util.m"
  {
#line 164 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 164 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 164 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 164 "hlds_out_util.m"
    {
#line 164 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 164 "hlds_out_util.m"
      return;
    }
#line 164 "hlds_out_util.m"
  }
#line 164 "hlds_out_util.m"
}

#line 164 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
#line 164 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 164 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 164 "hlds_out_util.m"
{
#line 1499 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1501 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1504 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1506 "hlds.hlds_out.hlds_out_util.c"
  }
#line 164 "hlds_out_util.m"
}

#line 53 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
#line 53 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 53 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 53 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 53 "hlds_out_util.m"
{
#line 53 "hlds_out_util.m"
  {
#line 53 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 53 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 53 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 53 "hlds_out_util.m"
    {
#line 53 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 53 "hlds_out_util.m"
      return;
    }
#line 53 "hlds_out_util.m"
  }
#line 53 "hlds_out_util.m"
}

#line 53 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
#line 53 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 53 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 53 "hlds_out_util.m"
{
#line 1552 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1554 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1557 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1559 "hlds.hlds_out.hlds_out_util.c"
  }
#line 53 "hlds_out_util.m"
}

#line 49 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
#line 49 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 49 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 49 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 49 "hlds_out_util.m"
{
#line 49 "hlds_out_util.m"
  {
#line 49 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 49 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 49 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 49 "hlds_out_util.m"
    {
#line 49 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 49 "hlds_out_util.m"
      return;
    }
#line 49 "hlds_out_util.m"
  }
#line 49 "hlds_out_util.m"
}

#line 49 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
#line 49 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 49 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 49 "hlds_out_util.m"
{
#line 1605 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1607 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1610 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1612 "hlds.hlds_out.hlds_out_util.c"
  }
#line 49 "hlds_out_util.m"
}

#line 36 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
#line 36 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 36 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 36 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 36 "hlds_out_util.m"
{
#line 36 "hlds_out_util.m"
  {
#line 36 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 36 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_18 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 36 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_19 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 36 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_18 == hlds__hlds_out__hlds_out_util__CastY_19);
#line 36 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1641 "hlds.hlds_out.hlds_out_util.c"
      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "hlds_out_util.m"
    else
#line 36 "hlds_out_util.m"
      {
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_14_14;

#line 36 "hlds_out_util.m"
        {
#line 36 "hlds_out_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_14_14, hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9);
        }
#line 1675 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_14_14 == (MR_Integer) 0);
#line 36 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 36 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_14_14;
#line 36 "hlds_out_util.m"
        else
#line 36 "hlds_out_util.m"
          {
#line 36 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 36 "hlds_out_util.m"
            {
#line 36 "hlds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_10_10);
            }
#line 1695 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 0);
#line 36 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 36 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_15_15;
#line 36 "hlds_out_util.m"
            else
#line 36 "hlds_out_util.m"
              {
#line 36 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_16_16;

#line 36 "hlds_out_util.m"
                {
#line 36 "hlds_out_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                }
#line 1715 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_16_16 == (MR_Integer) 0);
#line 36 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 36 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
                  *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_16_16;
#line 36 "hlds_out_util.m"
                else
#line 36 "hlds_out_util.m"
                  {
#line 36 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__V_17_17;

#line 36 "hlds_out_util.m"
                    {
#line 36 "hlds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_17_17, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_7_7)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_12_12)));
                    }
#line 1735 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_17_17 == (MR_Integer) 0);
#line 36 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 36 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
                      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_17_17;
#line 36 "hlds_out_util.m"
                    else
#line 36 "hlds_out_util.m"
                      {
#line 36 "hlds_out_util.m"
                        parse_tree__mercury_to_mercury____Compare____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_13_13);
#line 36 "hlds_out_util.m"
                        return;
                      }
#line 36 "hlds_out_util.m"
                  }
#line 36 "hlds_out_util.m"
              }
#line 36 "hlds_out_util.m"
          }
#line 36 "hlds_out_util.m"
      }
#line 36 "hlds_out_util.m"
  }
#line 36 "hlds_out_util.m"
}

#line 36 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
#line 36 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 36 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 36 "hlds_out_util.m"
{
#line 36 "hlds_out_util.m"
  {
#line 36 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 36 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_13 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__1_1;
#line 36 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_14 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 36 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_13 == hlds__hlds_out__hlds_out_util__CastY_14);
#line 36 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 36 "hlds_out_util.m"
    else
#line 36 "hlds_out_util.m"
      {
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_15_15;
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_16_16;
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 36 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));

#line 1818 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
#line 36 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
          {
#line 1824 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
#line 36 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
              {
#line 1830 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1832 "hlds.hlds_out.hlds_out_util.c"
                {
#line 1834 "hlds.hlds_out.hlds_out_util.c"
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
#line 36 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
                  {
#line 1841 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1843 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 1845 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
#line 36 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1850 "hlds.hlds_out.hlds_out_util.c"
                      {
#line 1852 "hlds.hlds_out.hlds_out_util.c"
                        return hlds__hlds_out__hlds_out_util__succeeded = parse_tree__mercury_to_mercury____Unify____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__V_7_7, hlds__hlds_out__hlds_out_util__V_12_12);
                      }
#line 36 "hlds_out_util.m"
                  }
#line 36 "hlds_out_util.m"
              }
#line 36 "hlds_out_util.m"
          }
#line 36 "hlds_out_util.m"
      }
#line 36 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 36 "hlds_out_util.m"
  }
#line 36 "hlds_out_util.m"
}

#line 1028 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1028 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1028 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
#line 1028 "hlds_out_util.m"
{
#line 1031 "hlds_out_util.m"
  while (MR_TRUE)
#line 1031 "hlds_out_util.m"
    {
#line 1031 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1031 "hlds_out_util.m"
      {
#line 1031 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1032 "hlds_out_util.m"
        {
#line 1032 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
#line 1037 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1038 "hlds_out_util.m"
          {
#line 1038 "hlds_out_util.m"
          }
#line 1037 "hlds_out_util.m"
        else
#line 1034 "hlds_out_util.m"
          {
#line 1034 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
#line 1034 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

#line 1035 "hlds_out_util.m"
            {
#line 1035 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1036 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1036 "hlds_out_util.m"
            {
#line 1036 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
#line 1036 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

#line 1036 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
#line 1036 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
#line 1036 "hlds_out_util.m"
            }
#line 1036 "hlds_out_util.m"
            continue;
#line 1034 "hlds_out_util.m"
          }
#line 1031 "hlds_out_util.m"
      }
#line 1031 "hlds_out_util.m"
      break;
#line 1031 "hlds_out_util.m"
    }
#line 1028 "hlds_out_util.m"
}

#line 970 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 970 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 970 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 970 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 970 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 970 "hlds_out_util.m"
{
#line 974 "hlds_out_util.m"
  {
#line 974 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 974 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 974 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

#line 975 "hlds_out_util.m"
    {
#line 975 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_7);
    }
#line 976 "hlds_out_util.m"
    {
#line 976 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 977 "hlds_out_util.m"
    {
#line 977 "hlds_out_util.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
#line 978 "hlds_out_util.m"
    {
#line 978 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 983 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
#line 980 "hlds_out_util.m"
      {
#line 980 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 981 "hlds_out_util.m"
        {
#line 981 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
#line 982 "hlds_out_util.m"
        {
#line 982 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
#line 982 "hlds_out_util.m"
          return;
        }
#line 980 "hlds_out_util.m"
      }
#line 983 "hlds_out_util.m"
    else
#line 984 "hlds_out_util.m"
      {
#line 984 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 985 "hlds_out_util.m"
        {
#line 985 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
#line 986 "hlds_out_util.m"
        {
#line 986 "hlds_out_util.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Super_14);
#line 986 "hlds_out_util.m"
          return;
        }
#line 984 "hlds_out_util.m"
      }
#line 974 "hlds_out_util.m"
  }
#line 970 "hlds_out_util.m"
}

#line 452 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 452 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 452 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 452 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7)
#line 452 "hlds_out_util.m"
{
#line 457 "hlds_out_util.m"
  {
#line 457 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 457 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__First_4 == (MR_Integer) 0))
#line 457 "hlds_out_util.m"
      {
#line 460 "hlds_out_util.m"
        {
#line 460 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
        }
#line 457 "hlds_out_util.m"
      }
#line 457 "hlds_out_util.m"
    else
#line 462 "hlds_out_util.m"
      {
#line 463 "hlds_out_util.m"
        {
#line 463 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
        }
#line 462 "hlds_out_util.m"
      }
#line 457 "hlds_out_util.m"
  }
#line 452 "hlds_out_util.m"
}

#line 430 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 430 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 430 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 430 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 430 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13)
#line 430 "hlds_out_util.m"
{
#line 433 "hlds_out_util.m"
  {
#line 433 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ConsId_8;
#line 433 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9;
#line 433 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 433 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ConsIdStr_11;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_16_16;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_20_20;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_21_21;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_24_24;
#line 433 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_25_25;

#line 457 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__First_5 == (MR_Integer) 0))
#line 457 "hlds_out_util.m"
      {
#line 460 "hlds_out_util.m"
        {
#line 460 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
        }
#line 457 "hlds_out_util.m"
      }
#line 457 "hlds_out_util.m"
    else
#line 462 "hlds_out_util.m"
      {
#line 463 "hlds_out_util.m"
        {
#line 463 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
        }
#line 462 "hlds_out_util.m"
      }
#line 435 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 0)));
#line 435 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 1)));
#line 436 "hlds_out_util.m"
    {
#line 436 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
    }
#line 439 "hlds_out_util.m"
    {
#line 439 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
#line 440 "hlds_out_util.m"
    {
#line 440 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 440 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 440 "hlds_out_util.m"
    }
#line 441 "hlds_out_util.m"
    {
#line 441 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
#line 441 "hlds_out_util.m"
    }
#line 441 "hlds_out_util.m"
    {
#line 441 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_25_25));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 441 "hlds_out_util.m"
    }
#line 441 "hlds_out_util.m"
    {
#line 441 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[17])));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_24_24));
#line 441 "hlds_out_util.m"
    }
#line 440 "hlds_out_util.m"
    {
#line 440 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_20_20));
#line 440 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_21_21));
#line 440 "hlds_out_util.m"
    }
#line 440 "hlds_out_util.m"
    {
#line 440 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 440 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_19_19));
#line 440 "hlds_out_util.m"
    }
#line 440 "hlds_out_util.m"
    {
#line 440 "hlds_out_util.m"
      *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 433 "hlds_out_util.m"
  }
#line 430 "hlds_out_util.m"
}

#line 406 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 406 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 406 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 406 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 406 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9)
#line 406 "hlds_out_util.m"
{
#line 410 "hlds_out_util.m"
  while (MR_TRUE)
#line 410 "hlds_out_util.m"
    {
#line 410 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 410 "hlds_out_util.m"
      {
#line 410 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 410 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContext_5;
#line 410 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 410 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__ConsId_10;
#line 410 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_11;
#line 410 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Functor_12;
#line 410 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__V_15_15;
#line 412 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13;

#line 409 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 409 "hlds_out_util.m"
          {
#line 409 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 409 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 411 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 0)));
#line 411 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 1)));
#line 412 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 412 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 412 "hlds_out_util.m"
              {
#line 412 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 412 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 412 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 412 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 2);
#line 410 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 410 "hlds_out_util.m"
                  {
#line 416 "hlds_out_util.m"
                    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Functor_12)) == (MR_mktag((MR_Integer) 1))))
#line 417 "hlds_out_util.m"
                      {
#line 417 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ModuleSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));
#line 417 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 1)));
#line 417 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_17_17;
#line 417 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_21_21;

#line 417 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_16_16, (MR_String) "[|]") == 0);
#line 417 "hlds_out_util.m"
                        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 417 "hlds_out_util.m"
                          {
#line 418 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_17_17 = (MR_String) "list";
#line 418 "hlds_out_util.m"
                            {
#line 418 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(hlds__hlds_out__hlds_out_util__ModuleSymName_14, &hlds__hlds_out__hlds_out_util__V_21_21);
                            }
#line 417 "hlds_out_util.m"
                            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 418 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_17_17, hlds__hlds_out__hlds_out_util__V_21_21) == 0);
#line 417 "hlds_out_util.m"
                          }
#line 417 "hlds_out_util.m"
                      }
#line 416 "hlds_out_util.m"
                    else
#line 415 "hlds_out_util.m"
                      {
#line 415 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));

#line 415 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_18_18, (MR_String) "[|]") == 0);
#line 415 "hlds_out_util.m"
                      }
#line 410 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 424 "hlds_out_util.m"
                      {
#line 424 "hlds_out_util.m"
                        if ((hlds__hlds_out__hlds_out_util__ArgNum_11 == (MR_Integer) 1))
#line 421 "hlds_out_util.m"
                          {
#line 422 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__ElementNum_8 = hlds__hlds_out__hlds_out_util__NumElementsBefore_7;
#line 423 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__AfterContexts_9 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 421 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 421 "hlds_out_util.m"
                          }
#line 424 "hlds_out_util.m"
                        else
#line 424 "hlds_out_util.m"
                          if ((hlds__hlds_out__hlds_out_util__ArgNum_11 == (MR_Integer) 2))
#line 425 "hlds_out_util.m"
                            {
#line 425 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__V_19_19 = (hlds__hlds_out__hlds_out_util__NumElementsBefore_7 + (MR_Integer) 1);

#line 426 "hlds_out_util.m"
                              /* direct tailcall eliminated */
#line 426 "hlds_out_util.m"
                              {
#line 426 "hlds_out_util.m"
                                MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 426 "hlds_out_util.m"
                                MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7 = hlds__hlds_out__hlds_out_util__V_19_19;

#line 426 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__NumElementsBefore_7 = hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7;
#line 426 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1;
#line 426 "hlds_out_util.m"
                              }
#line 426 "hlds_out_util.m"
                              continue;
#line 425 "hlds_out_util.m"
                            }
#line 424 "hlds_out_util.m"
                          else
#line 424 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
#line 424 "hlds_out_util.m"
                      }
#line 410 "hlds_out_util.m"
                  }
#line 412 "hlds_out_util.m"
              }
#line 409 "hlds_out_util.m"
          }
#line 410 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__succeeded;
#line 410 "hlds_out_util.m"
      }
#line 410 "hlds_out_util.m"
      break;
#line 410 "hlds_out_util.m"
    }
#line 406 "hlds_out_util.m"
}

#line 387 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 387 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 387 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 387 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 387 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 387 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5)
#line 387 "hlds_out_util.m"
{
#line 391 "hlds_out_util.m"
  while (MR_TRUE)
#line 391 "hlds_out_util.m"
    {
#line 391 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 391 "hlds_out_util.m"
      {
#line 391 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 391 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "hlds_out_util.m"
          {
#line 391 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4;
#line 391 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1;
#line 391 "hlds_out_util.m"
          }
#line 391 "hlds_out_util.m"
        else
#line 392 "hlds_out_util.m"
          {
#line 392 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 392 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 400 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ElementNum_16;
#line 400 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__AfterContexts_17;

#line 394 "hlds_out_util.m"
            {
#line 394 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0, &hlds__hlds_out__hlds_out_util__ElementNum_16, &hlds__hlds_out__hlds_out_util__AfterContexts_17);
            }
#line 400 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 397 "hlds_out_util.m"
              {
#line 397 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;
#line 397 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__ElementNumStr_37;
#line 397 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38;
#line 397 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_40_40;
#line 397 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;
#line 397 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_46_46;
#line 397 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_47_47;

#line 457 "hlds_out_util.m"
                if ((hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 == (MR_Integer) 0))
#line 457 "hlds_out_util.m"
                  {
#line 460 "hlds_out_util.m"
                    {
#line 460 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                    }
#line 457 "hlds_out_util.m"
                  }
#line 457 "hlds_out_util.m"
                else
#line 462 "hlds_out_util.m"
                  {
#line 463 "hlds_out_util.m"
                    {
#line 463 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                    }
#line 462 "hlds_out_util.m"
                  }
#line 448 "hlds_out_util.m"
                {
#line 448 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
#line 450 "hlds_out_util.m"
                {
#line 450 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
#line 450 "hlds_out_util.m"
                }
#line 450 "hlds_out_util.m"
                {
#line 450 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_47_47));
#line 450 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 450 "hlds_out_util.m"
                }
#line 450 "hlds_out_util.m"
                {
#line 450 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
#line 450 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_46_46));
#line 450 "hlds_out_util.m"
                }
#line 449 "hlds_out_util.m"
                {
#line 449 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
#line 449 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_43_43));
#line 449 "hlds_out_util.m"
                }
#line 449 "hlds_out_util.m"
                {
#line 449 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38, hlds__hlds_out__hlds_out_util__V_40_40);
                }
#line 399 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 399 "hlds_out_util.m"
                {
#line 399 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__AfterContexts_17;
#line 399 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;

#line 399 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 399 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 399 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 399 "hlds_out_util.m"
                }
#line 399 "hlds_out_util.m"
                continue;
#line 397 "hlds_out_util.m"
              }
#line 400 "hlds_out_util.m"
            else
#line 401 "hlds_out_util.m"
              {
#line 401 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 401 "hlds_out_util.m"
                {
#line 401 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1, hlds__hlds_out__hlds_out_util__SubContext_13, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28);
                }
#line 403 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 403 "hlds_out_util.m"
                {
#line 403 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__SubContexts_14;
#line 403 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 403 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 403 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 403 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 403 "hlds_out_util.m"
                }
#line 403 "hlds_out_util.m"
                continue;
#line 401 "hlds_out_util.m"
              }
#line 392 "hlds_out_util.m"
          }
#line 391 "hlds_out_util.m"
      }
#line 391 "hlds_out_util.m"
      break;
#line 391 "hlds_out_util.m"
    }
#line 387 "hlds_out_util.m"
}

#line 346 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 346 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 346 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 346 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 346 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 346 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19)
#line 346 "hlds_out_util.m"
{
#line 352 "hlds_out_util.m"
  {
#line 352 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 352 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__MainContext_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "hlds_out_util.m"
      {
#line 352 "hlds_out_util.m"
        *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 352 "hlds_out_util.m"
        *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
#line 352 "hlds_out_util.m"
      }
#line 352 "hlds_out_util.m"
    else
#line 352 "hlds_out_util.m"
      if ((hlds__hlds_out__hlds_out_util__MainContext_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 361 "hlds_out_util.m"
        {
#line 361 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42;

#line 362 "hlds_out_util.m"
          {
#line 362 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42);
          }
#line 363 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 364 "hlds_out_util.m"
          {
#line 364 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8]));
          }
#line 361 "hlds_out_util.m"
        }
#line 352 "hlds_out_util.m"
      else
#line 352 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) == (MR_mktag((MR_Integer) 2))))
#line 367 "hlds_out_util.m"
          {
#line 367 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 367 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__Markers_12;
#line 367 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__ArgIdStr_13;
#line 367 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31;
#line 367 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_34_34;
#line 367 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_35_35;
#line 367 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 1)));

#line 457 "hlds_out_util.m"
            if ((hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16 == (MR_Integer) 0))
#line 457 "hlds_out_util.m"
              {
#line 460 "hlds_out_util.m"
                {
#line 460 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                }
#line 457 "hlds_out_util.m"
              }
#line 457 "hlds_out_util.m"
            else
#line 462 "hlds_out_util.m"
              {
#line 463 "hlds_out_util.m"
                {
#line 463 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
#line 462 "hlds_out_util.m"
              }
#line 369 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 377 "hlds_out_util.m"
            {
#line 377 "hlds_out_util.m"
              hlds__hlds_pred__init_markers_1_p_0(&hlds__hlds_out__hlds_out_util__Markers_12);
            }
#line 378 "hlds_out_util.m"
            {
#line 378 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__CallId_11, hlds__hlds_out__hlds_out_util__ArgNum_65, hlds__hlds_out__hlds_out_util__Markers_12);
            }
#line 379 "hlds_out_util.m"
            {
#line 379 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "hlds_out_util.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 379 "hlds_out_util.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgIdStr_13));
#line 379 "hlds_out_util.m"
            }
#line 379 "hlds_out_util.m"
            {
#line 379 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_35_35));
#line 379 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 379 "hlds_out_util.m"
            }
#line 379 "hlds_out_util.m"
            {
#line 379 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31, hlds__hlds_out__hlds_out_util__V_34_34);
            }
#line 367 "hlds_out_util.m"
          }
#line 352 "hlds_out_util.m"
        else
#line 352 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) == (MR_mktag((MR_Integer) 1))))
#line 354 "hlds_out_util.m"
            {
#line 354 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 354 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 354 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51;
#line 354 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
#line 354 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 354 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_58_58;

#line 355 "hlds_out_util.m"
              {
#line 355 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51);
              }
#line 356 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 357 "hlds_out_util.m"
              {
#line 357 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
              }
#line 359 "hlds_out_util.m"
              {
#line 359 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 359 "hlds_out_util.m"
              }
#line 359 "hlds_out_util.m"
              {
#line 359 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_58_58));
#line 359 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
#line 359 "hlds_out_util.m"
              }
#line 359 "hlds_out_util.m"
              {
#line 359 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 359 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_57_57));
#line 359 "hlds_out_util.m"
              }
#line 358 "hlds_out_util.m"
              {
#line 358 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51, hlds__hlds_out__hlds_out_util__V_54_54);
              }
#line 354 "hlds_out_util.m"
            }
#line 352 "hlds_out_util.m"
          else
#line 381 "hlds_out_util.m"
            {
#line 381 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Source_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 381 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Msg_15;
#line 381 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20;
#line 381 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_26_26;
#line 381 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_27_27;
#line 381 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_71_71;

#line 382 "hlds_out_util.m"
              {
#line 382 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
              }
#line 2828 "hlds.hlds_out.hlds_out_util.c"
              {
#line 2830 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Source_14, (MR_String) " unification:\n");
              }
#line 2833 "hlds.hlds_out.hlds_out_util.c"
              {
#line 2835 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_71_71);
              }
#line 384 "hlds_out_util.m"
              {
#line 384 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "hlds_out_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 384 "hlds_out_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Msg_15));
#line 384 "hlds_out_util.m"
              }
#line 384 "hlds_out_util.m"
              {
#line 384 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_27_27));
#line 384 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
#line 384 "hlds_out_util.m"
              }
#line 384 "hlds_out_util.m"
              {
#line 384 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20, hlds__hlds_out__hlds_out_util__V_26_26);
              }
#line 384 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 381 "hlds_out_util.m"
            }
#line 352 "hlds_out_util.m"
  }
#line 346 "hlds_out_util.m"
}

#line 206 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
#line 206 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
#line 206 "hlds_out_util.m"
{
#line 1049 "hlds_out_util.m"
  while (MR_TRUE)
#line 1049 "hlds_out_util.m"
    {
#line 1049 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1049 "hlds_out_util.m"
      {
#line 1049 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

#line 1049 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1047 "hlds_out_util.m"
          {
#line 1047 "hlds_out_util.m"
          }
#line 1049 "hlds_out_util.m"
        else
#line 1050 "hlds_out_util.m"
          {
#line 1050 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

#line 1050 "hlds_out_util.m"
            {
#line 1050 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1051 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
#line 1051 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1051 "hlds_out_util.m"
            {
#line 1051 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

#line 1051 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
#line 1051 "hlds_out_util.m"
            }
#line 1051 "hlds_out_util.m"
            continue;
#line 1050 "hlds_out_util.m"
          }
#line 1049 "hlds_out_util.m"
      }
#line 1049 "hlds_out_util.m"
      break;
#line 1049 "hlds_out_util.m"
    }
#line 206 "hlds_out_util.m"
}

#line 200 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
#line 200 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__IntList_4)
#line 200 "hlds_out_util.m"
{
#line 1019 "hlds_out_util.m"
  {
#line 1019 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1019 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "hlds_out_util.m"
      {
#line 1020 "hlds_out_util.m"
        {
#line 1020 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[]");
#line 1020 "hlds_out_util.m"
          return;
        }
#line 1019 "hlds_out_util.m"
      }
#line 1019 "hlds_out_util.m"
    else
#line 1022 "hlds_out_util.m"
      {
#line 1022 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
#line 1022 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

#line 1023 "hlds_out_util.m"
        {
#line 1023 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
#line 1024 "hlds_out_util.m"
        {
#line 1024 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
#line 1025 "hlds_out_util.m"
        {
#line 1025 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
#line 1025 "hlds_out_util.m"
          return;
        }
#line 1022 "hlds_out_util.m"
      }
#line 1019 "hlds_out_util.m"
  }
#line 200 "hlds_out_util.m"
}

#line 193 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_7,
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_8,
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 193 "hlds_out_util.m"
{
#line 1008 "hlds_out_util.m"
  {
#line 1008 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1008 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 1008 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1008 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1008 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 1008 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 1008 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 1009 "hlds_out_util.m"
    {
#line 1009 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__AppendVarNums_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
#line 1010 "hlds_out_util.m"
    {
#line 1010 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__mercury_to_mercury__mercury_mode_to_string_2_f_0(hlds__hlds_out__hlds_out_util__Mode_10, hlds__hlds_out__hlds_out_util__InstVarSet_7);
    }
#line 1010 "hlds_out_util.m"
    {
#line 1010 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 1010 "hlds_out_util.m"
    {
#line 1010 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 1008 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 1008 "hlds_out_util.m"
  }
#line 193 "hlds_out_util.m"
}

#line 191 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
#line 191 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 191 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 191 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 191 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 191 "hlds_out_util.m"
{
#line 1004 "hlds_out_util.m"
  {
#line 1004 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;
#line 1004 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1004 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_23_23;
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;

#line 1009 "hlds_out_util.m"
    {
#line 1009 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_23_23 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Var_21);
    }
#line 1010 "hlds_out_util.m"
    {
#line 1010 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = parse_tree__mercury_to_mercury__mercury_mode_to_string_2_f_0(hlds__hlds_out__hlds_out_util__Mode_22, hlds__hlds_out__hlds_out_util__InstVarSet_8);
    }
#line 1010 "hlds_out_util.m"
    {
#line 1010 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 1010 "hlds_out_util.m"
    {
#line 1010 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_23_23, hlds__hlds_out__hlds_out_util__V_24_24);
    }
#line 1005 "hlds_out_util.m"
    {
#line 1005 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
#line 1005 "hlds_out_util.m"
      return;
    }
#line 1004 "hlds_out_util.m"
  }
#line 191 "hlds_out_util.m"
}

#line 1000 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 1000 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 1000 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
#line 1000 "hlds_out_util.m"
{
#line 1000 "hlds_out_util.m"
  {
#line 1000 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 1000 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 1000 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

#line 1000 "hlds_out_util.m"
    {
#line 1000 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 1000 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
#line 1000 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 1000 "hlds_out_util.m"
  }
#line 1000 "hlds_out_util.m"
}

#line 188 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_7,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_8,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_10,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 188 "hlds_out_util.m"
{
#line 998 "hlds_out_util.m"
  {
#line 998 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 998 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 998 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
#line 998 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
#line 998 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 999 "hlds_out_util.m"
    {
#line 999 "hlds_out_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_7, hlds__hlds_out__hlds_out_util__Modes_8, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 1000 "hlds_out_util.m"
    {
#line 1000 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
#line 1000 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
#line 1000 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1000 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_9));
#line 1000 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_10));
#line 1000 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__AppendVarNums_11));
#line 1000 "hlds_out_util.m"
    }
#line 1000 "hlds_out_util.m"
    {
#line 1000 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 1002 "hlds_out_util.m"
    {
#line 1002 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
#line 998 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 998 "hlds_out_util.m"
  }
#line 188 "hlds_out_util.m"
}

#line 186 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
#line 186 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_8,
#line 186 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_9,
#line 186 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 186 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_11,
#line 186 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 186 "hlds_out_util.m"
{
#line 994 "hlds_out_util.m"
  {
#line 994 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 994 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 995 "hlds_out_util.m"
    {
#line 995 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__Vars_8, hlds__hlds_out__hlds_out_util__Modes_9, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__InstVarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 995 "hlds_out_util.m"
    {
#line 995 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 995 "hlds_out_util.m"
      return;
    }
#line 994 "hlds_out_util.m"
  }
#line 186 "hlds_out_util.m"
}

#line 968 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0_1(
#line 968 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 968 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 968 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 968 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 968 "hlds_out_util.m"
{
#line 968 "hlds_out_util.m"
  {
#line 968 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

#line 968 "hlds_out_util.m"
    {
#line 968 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
#line 968 "hlds_out_util.m"
      return;
    }
#line 968 "hlds_out_util.m"
  }
#line 968 "hlds_out_util.m"
}

#line 176 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0(
#line 176 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Proofs_9,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_10)
#line 176 "hlds_out_util.m"
{
#line 963 "hlds_out_util.m"
  {
#line 963 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 963 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
#line 963 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

#line 964 "hlds_out_util.m"
    {
#line 964 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_7);
    }
#line 965 "hlds_out_util.m"
    {
#line 965 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
#line 966 "hlds_out_util.m"
    {
#line 966 "hlds_out_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__Proofs_9, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
#line 968 "hlds_out_util.m"
    {
#line 968 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 968 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_5[0]));
#line 968 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0_1));
#line 968 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 968 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_7));
#line 968 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_8));
#line 968 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__AppendVarNums_10));
#line 968 "hlds_out_util.m"
    }
#line 967 "hlds_out_util.m"
    {
#line 967 "hlds_out_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
#line 967 "hlds_out_util.m"
      return;
    }
#line 963 "hlds_out_util.m"
  }
#line 176 "hlds_out_util.m"
}

#line 851 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 851 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 851 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 851 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 851 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 851 "hlds_out_util.m"
{
#line 851 "hlds_out_util.m"
  {
#line 851 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 851 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105;

#line 851 "hlds_out_util.m"
    {
#line 851 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__854__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105);
    }
#line 851 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105));
#line 851 "hlds_out_util.m"
  }
#line 851 "hlds_out_util.m"
}

#line 171 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_6,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_9)
#line 171 "hlds_out_util.m"
{
#line 840 "hlds_out_util.m"
  {
#line 840 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 840 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_10;

#line 840 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__ConsId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
#line 840 "hlds_out_util.m"
    else
#line 840 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 2))))
#line 939 "hlds_out_util.m"
        {
#line 939 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 939 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 939 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 939 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 939 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 939 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
#line 939 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_132, (MR_Integer) 0)));
#line 939 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_132, (MR_Integer) 1)));

#line 942 "hlds_out_util.m"
          {
#line 942 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_133);
          }
#line 943 "hlds_out_util.m"
          {
#line 943 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_134);
          }
#line 943 "hlds_out_util.m"
          {
#line 943 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) ">");
          }
#line 943 "hlds_out_util.m"
          {
#line 943 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_70_70);
          }
#line 942 "hlds_out_util.m"
          {
#line 942 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_67_67, hlds__hlds_out__hlds_out_util__V_68_68);
          }
#line 942 "hlds_out_util.m"
          {
#line 942 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_66_66);
          }
#line 939 "hlds_out_util.m"
        }
#line 840 "hlds_out_util.m"
      else
#line 840 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 1))))
#line 925 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
#line 840 "hlds_out_util.m"
        else
#line 840 "hlds_out_util.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 922 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
#line 840 "hlds_out_util.m"
          else
#line 840 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 901 "hlds_out_util.m"
              {
#line 901 "hlds_out_util.m"
                MR_Char hlds__hlds_out__hlds_out_util__CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 902 "hlds_out_util.m"
                {
#line 902 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_31);
                }
#line 901 "hlds_out_util.m"
              }
#line 840 "hlds_out_util.m"
            else
#line 840 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 910 "hlds_out_util.m"
                {
#line 910 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 910 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 0)));
#line 910 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 1)));
#line 910 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;
#line 910 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 910 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 910 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 910 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 913 "hlds_out_util.m"
                  {
#line 913 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_36);
                  }
#line 914 "hlds_out_util.m"
                  {
#line 914 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_37);
                  }
#line 914 "hlds_out_util.m"
                  {
#line 914 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_90_90, (MR_String) ">");
                  }
#line 914 "hlds_out_util.m"
                  {
#line 914 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_89_89);
                  }
#line 913 "hlds_out_util.m"
                  {
#line 913 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, hlds__hlds_out__hlds_out_util__V_87_87);
                  }
#line 913 "hlds_out_util.m"
                  {
#line 913 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_85_85);
                  }
#line 910 "hlds_out_util.m"
                }
#line 840 "hlds_out_util.m"
              else
#line 840 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 840 "hlds_out_util.m"
                  {
#line 840 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 840 "hlds_out_util.m"
                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 840 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
#line 840 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 840 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
#line 840 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
#line 840 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 844 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__Qual_6 == (MR_Integer) 1))
#line 845 "hlds_out_util.m"
                      {
#line 845 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_101_101;

#line 846 "hlds_out_util.m"
                        {
#line 846 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_101_101 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                        }
#line 846 "hlds_out_util.m"
                        {
#line 846 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 846 "hlds_out_util.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_101_101));
#line 846 "hlds_out_util.m"
                        }
#line 845 "hlds_out_util.m"
                      }
#line 844 "hlds_out_util.m"
                    else
#line 843 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
#line 848 "hlds_out_util.m"
                    {
#line 848 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
                    }
#line 849 "hlds_out_util.m"
                    {
#line 849 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
                    }
#line 860 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 858 "hlds_out_util.m"
                      {
#line 859 "hlds_out_util.m"
                        MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

#line 859 "hlds_out_util.m"
                        {
#line 859 "hlds_out_util.m"
                          mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[3], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                        }
#line 859 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
#line 858 "hlds_out_util.m"
                      }
#line 860 "hlds_out_util.m"
                    else
#line 861 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 863 "hlds_out_util.m"
                    {
#line 863 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
                    }
#line 867 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "hlds_out_util.m"
                      {
#line 865 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 865 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_118_118;

#line 866 "hlds_out_util.m"
                        {
#line 866 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                        }
#line 866 "hlds_out_util.m"
                        {
#line 866 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_118_118);
                        }
#line 866 "hlds_out_util.m"
                        {
#line 866 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_116_116);
                        }
#line 865 "hlds_out_util.m"
                      }
#line 867 "hlds_out_util.m"
                    else
#line 868 "hlds_out_util.m"
                      {
#line 868 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 872 "hlds_out_util.m"
                        if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "hlds_out_util.m"
                          {
#line 870 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 870 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_115_115;

#line 871 "hlds_out_util.m"
                            {
#line 871 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                            }
#line 871 "hlds_out_util.m"
                            {
#line 871 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_115_115);
                            }
#line 871 "hlds_out_util.m"
                            {
#line 871 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_113_113);
                            }
#line 870 "hlds_out_util.m"
                          }
#line 872 "hlds_out_util.m"
                        else
#line 873 "hlds_out_util.m"
                          {
#line 873 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
#line 873 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_109_109;
#line 873 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_111_111;

#line 874 "hlds_out_util.m"
                            {
#line 874 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__ArgVars_23);
                            }
#line 875 "hlds_out_util.m"
                            {
#line 875 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                            }
#line 875 "hlds_out_util.m"
                            {
#line 875 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_111_111);
                            }
#line 875 "hlds_out_util.m"
                            {
#line 875 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_109_109);
                            }
#line 873 "hlds_out_util.m"
                          }
#line 868 "hlds_out_util.m"
                      }
#line 840 "hlds_out_util.m"
                  }
#line 840 "hlds_out_util.m"
                else
#line 840 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 951 "hlds_out_util.m"
                    {
#line 951 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 951 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 951 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_52_52;
#line 951 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 951 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 951 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredProcId_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 951 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__PredId_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_138, (MR_Integer) 0)));
#line 951 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_138, (MR_Integer) 1)));

#line 954 "hlds_out_util.m"
                      {
#line 954 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_139);
                      }
#line 955 "hlds_out_util.m"
                      {
#line 955 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_140);
                      }
#line 955 "hlds_out_util.m"
                      {
#line 955 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, (MR_String) ">");
                      }
#line 954 "hlds_out_util.m"
                      {
#line 954 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_54_54);
                      }
#line 954 "hlds_out_util.m"
                      {
#line 954 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, hlds__hlds_out__hlds_out_util__V_52_52);
                      }
#line 954 "hlds_out_util.m"
                      {
#line 954 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_50_50);
                      }
#line 951 "hlds_out_util.m"
                    }
#line 840 "hlds_out_util.m"
                  else
#line 840 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 898 "hlds_out_util.m"
                      {
#line 898 "hlds_out_util.m"
                        MR_Float hlds__hlds_out__hlds_out_util__Float_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 899 "hlds_out_util.m"
                        {
#line 899 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_30);
                        }
#line 898 "hlds_out_util.m"
                      }
#line 840 "hlds_out_util.m"
                    else
#line 840 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 937 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
#line 840 "hlds_out_util.m"
                      else
#line 840 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 907 "hlds_out_util.m"
                          {
#line 907 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 908 "hlds_out_util.m"
                            {
#line 908 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_33);
                            }
#line 907 "hlds_out_util.m"
                          }
#line 840 "hlds_out_util.m"
                        else
#line 840 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 895 "hlds_out_util.m"
                            {
#line 895 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 896 "hlds_out_util.m"
                              {
#line 896 "hlds_out_util.m"
                                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
                              }
#line 895 "hlds_out_util.m"
                            }
#line 840 "hlds_out_util.m"
                          else
#line 840 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 904 "hlds_out_util.m"
                              {
#line 904 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__StringConst_32 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 905 "hlds_out_util.m"
                                {
#line 905 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_32);
                                }
#line 904 "hlds_out_util.m"
                              }
#line 840 "hlds_out_util.m"
                            else
#line 840 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 945 "hlds_out_util.m"
                                {
#line 945 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 945 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 945 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 945 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 945 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 945 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 945 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_135, (MR_Integer) 0)));
#line 945 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_135, (MR_Integer) 1)));

#line 948 "hlds_out_util.m"
                                  {
#line 948 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_136);
                                  }
#line 949 "hlds_out_util.m"
                                  {
#line 949 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_137);
                                  }
#line 949 "hlds_out_util.m"
                                  {
#line 949 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, (MR_String) ">");
                                  }
#line 948 "hlds_out_util.m"
                                  {
#line 948 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_62_62);
                                  }
#line 948 "hlds_out_util.m"
                                  {
#line 948 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_60_60);
                                  }
#line 948 "hlds_out_util.m"
                                  {
#line 948 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_58_58);
                                  }
#line 945 "hlds_out_util.m"
                                }
#line 840 "hlds_out_util.m"
                              else
#line 840 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 879 "hlds_out_util.m"
                                  {
#line 879 "hlds_out_util.m"
                                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 883 "hlds_out_util.m"
                                    if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 881 "hlds_out_util.m"
                                      {
#line 881 "hlds_out_util.m"
                                        MR_String hlds__hlds_out__hlds_out_util__V_100_100;

#line 882 "hlds_out_util.m"
                                        {
#line 882 "hlds_out_util.m"
                                          hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_128);
                                        }
#line 882 "hlds_out_util.m"
                                        {
#line 882 "hlds_out_util.m"
                                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_100_100);
                                        }
#line 881 "hlds_out_util.m"
                                      }
#line 883 "hlds_out_util.m"
                                    else
#line 884 "hlds_out_util.m"
                                      {
#line 884 "hlds_out_util.m"
                                        MR_Word hlds__hlds_out__hlds_out_util__ArgVars_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 888 "hlds_out_util.m"
                                        if ((hlds__hlds_out__hlds_out_util__ArgVars_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "hlds_out_util.m"
                                          {
#line 886 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_98_98;

#line 887 "hlds_out_util.m"
                                            {
#line 887 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_128);
                                            }
#line 887 "hlds_out_util.m"
                                            {
#line 887 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_98_98);
                                            }
#line 886 "hlds_out_util.m"
                                          }
#line 888 "hlds_out_util.m"
                                        else
#line 889 "hlds_out_util.m"
                                          {
#line 889 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 889 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__ArgStr_122;

#line 890 "hlds_out_util.m"
                                            {
#line 890 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__ArgStr_122 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__ArgVars_124);
                                            }
#line 891 "hlds_out_util.m"
                                            {
#line 891 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_122, (MR_String) "}");
                                            }
#line 891 "hlds_out_util.m"
                                            {
#line 891 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_95_95);
                                            }
#line 889 "hlds_out_util.m"
                                          }
#line 884 "hlds_out_util.m"
                                      }
#line 879 "hlds_out_util.m"
                                  }
#line 840 "hlds_out_util.m"
                                else
#line 840 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 916 "hlds_out_util.m"
                                    {
#line 916 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__Ctor_39 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_76_76;
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 916 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 916 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__Arity_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 918 "hlds_out_util.m"
                                      {
#line 918 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_75_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_38);
                                      }
#line 919 "hlds_out_util.m"
                                      {
#line 919 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_131);
                                      }
#line 919 "hlds_out_util.m"
                                      {
#line 919 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ">");
                                      }
#line 919 "hlds_out_util.m"
                                      {
#line 919 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_81_81);
                                      }
#line 919 "hlds_out_util.m"
                                      {
#line 919 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_39, hlds__hlds_out__hlds_out_util__V_79_79);
                                      }
#line 918 "hlds_out_util.m"
                                      {
#line 918 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_78_78);
                                      }
#line 918 "hlds_out_util.m"
                                      {
#line 918 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
                                      }
#line 918 "hlds_out_util.m"
                                      {
#line 918 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_74_74);
                                      }
#line 916 "hlds_out_util.m"
                                    }
#line 840 "hlds_out_util.m"
                                  else
#line 840 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 931 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
#line 840 "hlds_out_util.m"
                                    else
#line 934 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
#line 840 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_10;
#line 840 "hlds_out_util.m"
  }
#line 171 "hlds_out_util.m"
}

#line 168 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_9,
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_10)
#line 168 "hlds_out_util.m"
{
#line 831 "hlds_out_util.m"
  {
#line 831 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 831 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 833 "hlds_out_util.m"
    {
#line 833 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
#line 832 "hlds_out_util.m"
    {
#line 832 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
#line 832 "hlds_out_util.m"
      return;
    }
#line 831 "hlds_out_util.m"
  }
#line 168 "hlds_out_util.m"
}

#line 749 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1(
#line 749 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 749 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 749 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 749 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 749 "hlds_out_util.m"
{
#line 749 "hlds_out_util.m"
  {
#line 749 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 749 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86;

#line 749 "hlds_out_util.m"
    {
#line 749 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__752__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86);
    }
#line 749 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86));
#line 749 "hlds_out_util.m"
  }
#line 749 "hlds_out_util.m"
}

#line 162 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(
#line 162 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_3)
#line 162 "hlds_out_util.m"
{
#line 745 "hlds_out_util.m"
  {
#line 745 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 745 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_4;

#line 745 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__ConsId_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<typeclass_info_cell_constructor>";
#line 745 "hlds_out_util.m"
    else
#line 745 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 2))))
#line 812 "hlds_out_util.m"
        {
#line 812 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 812 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 812 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 812 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 812 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 812 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)));
#line 812 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_96, (MR_Integer) 0)));
#line 812 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_96, (MR_Integer) 1)));

#line 815 "hlds_out_util.m"
          {
#line 815 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_97);
          }
#line 816 "hlds_out_util.m"
          {
#line 816 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_98);
          }
#line 816 "hlds_out_util.m"
          {
#line 816 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, (MR_String) ">");
          }
#line 816 "hlds_out_util.m"
          {
#line 816 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_58_58);
          }
#line 815 "hlds_out_util.m"
          {
#line 815 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, hlds__hlds_out__hlds_out_util__V_56_56);
          }
#line 815 "hlds_out_util.m"
          {
#line 815 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_54_54);
          }
#line 812 "hlds_out_util.m"
        }
#line 745 "hlds_out_util.m"
      else
#line 745 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 1))))
#line 798 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<type_info_cell_constructor>";
#line 745 "hlds_out_util.m"
        else
#line 745 "hlds_out_util.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 795 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<base_typeclass_info>";
#line 745 "hlds_out_util.m"
          else
#line 745 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 774 "hlds_out_util.m"
              {
#line 774 "hlds_out_util.m"
                MR_Char hlds__hlds_out__hlds_out_util__CharConst_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 775 "hlds_out_util.m"
                {
#line 775 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__String_4 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_19);
                }
#line 774 "hlds_out_util.m"
              }
#line 745 "hlds_out_util.m"
            else
#line 745 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 783 "hlds_out_util.m"
                {
#line 783 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 783 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_22, (MR_Integer) 0)));
#line 783 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_22, (MR_Integer) 1)));
#line 783 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 783 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 783 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 783 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_77_77;
#line 783 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 786 "hlds_out_util.m"
                  {
#line 786 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_24);
                  }
#line 787 "hlds_out_util.m"
                  {
#line 787 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_25);
                  }
#line 787 "hlds_out_util.m"
                  {
#line 787 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_78_78, (MR_String) ">");
                  }
#line 787 "hlds_out_util.m"
                  {
#line 787 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_77_77);
                  }
#line 786 "hlds_out_util.m"
                  {
#line 786 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                  }
#line 786 "hlds_out_util.m"
                  {
#line 786 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_73_73);
                  }
#line 783 "hlds_out_util.m"
                }
#line 745 "hlds_out_util.m"
              else
#line 745 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 745 "hlds_out_util.m"
                  {
#line 745 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 745 "hlds_out_util.m"
                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 2)));
#line 745 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString0_8;
#line 745 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString1_14;
#line 745 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString_15;
#line 745 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__ArityString_16;
#line 745 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 745 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 3)));

#line 746 "hlds_out_util.m"
                    {
#line 746 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString0_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_5);
                    }
#line 747 "hlds_out_util.m"
                    {
#line 747 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_8, (MR_Char) 42);
                    }
#line 758 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 756 "hlds_out_util.m"
                      {
#line 757 "hlds_out_util.m"
                        MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14;

#line 757 "hlds_out_util.m"
                        {
#line 757 "hlds_out_util.m"
                          mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_8, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14);
                        }
#line 757 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__SymNameString1_14 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14);
#line 756 "hlds_out_util.m"
                      }
#line 758 "hlds_out_util.m"
                    else
#line 759 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString1_14 = hlds__hlds_out__hlds_out_util__SymNameString0_8;
#line 761 "hlds_out_util.m"
                    {
#line 761 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString_15 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_14);
                    }
#line 762 "hlds_out_util.m"
                    {
#line 762 "hlds_out_util.m"
                      mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Arity_6, &hlds__hlds_out__hlds_out_util__ArityString_16);
                    }
#line 763 "hlds_out_util.m"
                    {
#line 763 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__ArityString_16);
                    }
#line 763 "hlds_out_util.m"
                    {
#line 763 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_15, hlds__hlds_out__hlds_out_util__V_89_89);
                    }
#line 745 "hlds_out_util.m"
                  }
#line 745 "hlds_out_util.m"
                else
#line 745 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 824 "hlds_out_util.m"
                    {
#line 824 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 824 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_39_39;
#line 824 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_40_40;
#line 824 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_42_42;
#line 824 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 824 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredProcId_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 824 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__PredId_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_102, (MR_Integer) 0)));
#line 824 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_102, (MR_Integer) 1)));

#line 827 "hlds_out_util.m"
                      {
#line 827 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_39_39 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_103);
                      }
#line 828 "hlds_out_util.m"
                      {
#line 828 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_104);
                      }
#line 828 "hlds_out_util.m"
                      {
#line 828 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_42_42 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_43_43, (MR_String) ">");
                      }
#line 827 "hlds_out_util.m"
                      {
#line 827 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_42_42);
                      }
#line 827 "hlds_out_util.m"
                      {
#line 827 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_39_39, hlds__hlds_out__hlds_out_util__V_40_40);
                      }
#line 827 "hlds_out_util.m"
                      {
#line 827 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
#line 824 "hlds_out_util.m"
                    }
#line 745 "hlds_out_util.m"
                  else
#line 745 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 771 "hlds_out_util.m"
                      {
#line 771 "hlds_out_util.m"
                        MR_Float hlds__hlds_out__hlds_out_util__Float_18 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 772 "hlds_out_util.m"
                        {
#line 772 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_18);
                        }
#line 771 "hlds_out_util.m"
                      }
#line 745 "hlds_out_util.m"
                    else
#line 745 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 810 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<ground_term_const>";
#line 745 "hlds_out_util.m"
                      else
#line 745 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 780 "hlds_out_util.m"
                          {
#line 780 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 781 "hlds_out_util.m"
                            {
#line 781 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_21);
                            }
#line 780 "hlds_out_util.m"
                          }
#line 745 "hlds_out_util.m"
                        else
#line 745 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 768 "hlds_out_util.m"
                            {
#line 768 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__Int_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 769 "hlds_out_util.m"
                              {
#line 769 "hlds_out_util.m"
                                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_17, &hlds__hlds_out__hlds_out_util__String_4);
                              }
#line 768 "hlds_out_util.m"
                            }
#line 745 "hlds_out_util.m"
                          else
#line 745 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 777 "hlds_out_util.m"
                              {
#line 777 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__StringConst_20 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 778 "hlds_out_util.m"
                                {
#line 778 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__String_4 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_20);
                                }
#line 777 "hlds_out_util.m"
                              }
#line 745 "hlds_out_util.m"
                            else
#line 745 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 818 "hlds_out_util.m"
                                {
#line 818 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 818 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 818 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 818 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 818 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 818 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 818 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_99, (MR_Integer) 0)));
#line 818 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_99, (MR_Integer) 1)));

#line 821 "hlds_out_util.m"
                                  {
#line 821 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_100);
                                  }
#line 822 "hlds_out_util.m"
                                  {
#line 822 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_101);
                                  }
#line 822 "hlds_out_util.m"
                                  {
#line 822 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) ">");
                                  }
#line 821 "hlds_out_util.m"
                                  {
#line 821 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_50_50);
                                  }
#line 821 "hlds_out_util.m"
                                  {
#line 821 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                                  }
#line 821 "hlds_out_util.m"
                                  {
#line 821 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_46_46);
                                  }
#line 818 "hlds_out_util.m"
                                }
#line 745 "hlds_out_util.m"
                              else
#line 745 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 765 "hlds_out_util.m"
                                  {
#line 765 "hlds_out_util.m"
                                    MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 765 "hlds_out_util.m"
                                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 766 "hlds_out_util.m"
                                    {
#line 766 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_94);
                                    }
#line 766 "hlds_out_util.m"
                                    {
#line 766 "hlds_out_util.m"
                                      return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_82_82);
                                    }
#line 765 "hlds_out_util.m"
                                  }
#line 745 "hlds_out_util.m"
                                else
#line 745 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 789 "hlds_out_util.m"
                                    {
#line 789 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__Module_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__Ctor_27 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 2)));
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 789 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 789 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__Arity_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 3)));

#line 791 "hlds_out_util.m"
                                      {
#line 791 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_63_63 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_26);
                                      }
#line 792 "hlds_out_util.m"
                                      {
#line 792 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_95);
                                      }
#line 792 "hlds_out_util.m"
                                      {
#line 792 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_70_70, (MR_String) ">");
                                      }
#line 792 "hlds_out_util.m"
                                      {
#line 792 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_69_69);
                                      }
#line 792 "hlds_out_util.m"
                                      {
#line 792 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_27, hlds__hlds_out__hlds_out_util__V_67_67);
                                      }
#line 791 "hlds_out_util.m"
                                      {
#line 791 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_66_66);
                                      }
#line 791 "hlds_out_util.m"
                                      {
#line 791 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, hlds__hlds_out__hlds_out_util__V_64_64);
                                      }
#line 791 "hlds_out_util.m"
                                      {
#line 791 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_62_62);
                                      }
#line 789 "hlds_out_util.m"
                                    }
#line 745 "hlds_out_util.m"
                                  else
#line 745 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 804 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<type_info_const>";
#line 745 "hlds_out_util.m"
                                    else
#line 807 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<typeclass_info_const>";
#line 745 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_4;
#line 745 "hlds_out_util.m"
  }
#line 162 "hlds_out_util.m"
}

#line 161 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(
#line 161 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_4)
#line 161 "hlds_out_util.m"
{
#line 740 "hlds_out_util.m"
  {
#line 740 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 740 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_8_8;

#line 741 "hlds_out_util.m"
    {
#line 741 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_8_8 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_4);
    }
#line 741 "hlds_out_util.m"
    {
#line 741 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_8_8);
#line 741 "hlds_out_util.m"
      return;
    }
#line 740 "hlds_out_util.m"
  }
#line 161 "hlds_out_util.m"
}

#line 158 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_7,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_8,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_10,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 158 "hlds_out_util.m"
{
#line 634 "hlds_out_util.m"
  while (MR_TRUE)
#line 634 "hlds_out_util.m"
    {
#line 634 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 634 "hlds_out_util.m"
      {
#line 634 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 634 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

#line 634 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__ConsId_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "hlds_out_util.m"
          {
#line 702 "hlds_out_util.m"
            {
#line 702 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
            }
#line 701 "hlds_out_util.m"
          }
#line 634 "hlds_out_util.m"
        else
#line 634 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 2))))
#line 718 "hlds_out_util.m"
            {
#line 718 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_42;
#line 718 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_43;
#line 718 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 718 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 718 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
#line 718 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 718 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 718 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 718 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)));
#line 718 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredId_146;

#line 719 "hlds_out_util.m"
              {
#line 719 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145);
              }
#line 719 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__PredId_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 0)));
#line 719 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 1)));
#line 720 "hlds_out_util.m"
              {
#line 720 "hlds_out_util.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_42, &hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 722 "hlds_out_util.m"
              {
#line 722 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_65_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_146);
              }
#line 723 "hlds_out_util.m"
              {
#line 723 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 723 "hlds_out_util.m"
              {
#line 723 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_69_69, (MR_String) ")");
              }
#line 723 "hlds_out_util.m"
              {
#line 723 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_68_68);
              }
#line 723 "hlds_out_util.m"
              {
#line 723 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__V_66_66);
              }
#line 722 "hlds_out_util.m"
              {
#line 722 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_64_64);
              }
#line 718 "hlds_out_util.m"
            }
#line 634 "hlds_out_util.m"
          else
#line 634 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 1))))
#line 696 "hlds_out_util.m"
              {
#line 697 "hlds_out_util.m"
                {
#line 697 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                }
#line 696 "hlds_out_util.m"
              }
#line 634 "hlds_out_util.m"
            else
#line 634 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 689 "hlds_out_util.m"
                {
#line 689 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 4)));
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_98_98;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
#line 689 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_108_108;
#line 689 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 689 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 0)));
#line 689 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 1)));
#line 689 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));

#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_95_95 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_142);
                  }
#line 693 "hlds_out_util.m"
                  {
#line 693 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_101_101 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_143);
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_144);
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_35, (MR_String) ")");
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_108_108);
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_106_106);
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_104_104);
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_102_102);
                  }
#line 693 "hlds_out_util.m"
                  {
#line 693 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
#line 693 "hlds_out_util.m"
                  {
#line 693 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_98_98);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, hlds__hlds_out__hlds_out_util__V_96_96);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_94_94);
                  }
#line 689 "hlds_out_util.m"
                }
#line 634 "hlds_out_util.m"
              else
#line 634 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 657 "hlds_out_util.m"
                  {
#line 657 "hlds_out_util.m"
                    MR_Char hlds__hlds_out__hlds_out_util__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 657 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_127_127;
#line 657 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_128_128;

#line 664 "hlds_out_util.m"
                    {
#line 664 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_128_128 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_21);
                    }
#line 664 "hlds_out_util.m"
                    {
#line 664 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_127_127 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_128_128, (MR_String) ")");
                    }
#line 664 "hlds_out_util.m"
                    {
#line 664 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_127_127);
                    }
#line 657 "hlds_out_util.m"
                  }
#line 634 "hlds_out_util.m"
                else
#line 634 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 673 "hlds_out_util.m"
                    {
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredId_25;
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredInfo_27;
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredModule_28;
#line 673 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__PredName_29;
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredSymName_30;
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredConsId_31;
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_121_121;
#line 673 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__V_122_122;
#line 673 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_123_123;
#line 674 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__V_26_26;

#line 674 "hlds_out_util.m"
                      {
#line 674 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_121_121 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23);
                      }
#line 674 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 0)));
#line 674 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 1)));
#line 675 "hlds_out_util.m"
                      {
#line 675 "hlds_out_util.m"
                        hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_25, &hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 676 "hlds_out_util.m"
                      {
#line 676 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 677 "hlds_out_util.m"
                      {
#line 677 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 678 "hlds_out_util.m"
                      {
#line 678 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_28));
#line 678 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_29));
#line 678 "hlds_out_util.m"
                      }
#line 679 "hlds_out_util.m"
                      {
#line 679 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_122_122 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_8);
                      }
#line 680 "hlds_out_util.m"
                      {
#line 680 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_123_123 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                      }
#line 679 "hlds_out_util.m"
                      {
#line 679 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 679 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 679 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_30));
#line 679 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_122_122));
#line 679 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
#line 679 "hlds_out_util.m"
                      }
#line 681 "hlds_out_util.m"
                      /* direct tailcall eliminated */
#line 681 "hlds_out_util.m"
                      {
#line 681 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_7 = hlds__hlds_out__hlds_out_util__PredConsId_31;

#line 681 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ConsId_7 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_7;
#line 681 "hlds_out_util.m"
                      }
#line 681 "hlds_out_util.m"
                      continue;
#line 673 "hlds_out_util.m"
                    }
#line 634 "hlds_out_util.m"
                  else
#line 634 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 634 "hlds_out_util.m"
                      {
#line 634 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 634 "hlds_out_util.m"
                        MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 634 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));

#line 639 "hlds_out_util.m"
                        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 636 "hlds_out_util.m"
                          {
#line 636 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
#line 636 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
#line 636 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_137_137;

#line 637 "hlds_out_util.m"
                            {
#line 637 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
#line 637 "hlds_out_util.m"
                            }
#line 637 "hlds_out_util.m"
                            {
#line 637 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                            }
#line 636 "hlds_out_util.m"
                          }
#line 639 "hlds_out_util.m"
                        else
#line 640 "hlds_out_util.m"
                          {
#line 640 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_135_135;
#line 640 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

#line 641 "hlds_out_util.m"
                            {
#line 641 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 641 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_135_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_138));
#line 641 "hlds_out_util.m"
                            }
#line 641 "hlds_out_util.m"
                            {
#line 641 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__V_135_135, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                            }
#line 640 "hlds_out_util.m"
                          }
#line 634 "hlds_out_util.m"
                      }
#line 634 "hlds_out_util.m"
                    else
#line 634 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 732 "hlds_out_util.m"
                        {
#line 732 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__V_44_44;
#line 732 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 732 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 732 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 732 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 732 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 732 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 732 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__PredId_152;
#line 732 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_153;
#line 732 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_154;

#line 733 "hlds_out_util.m"
                          {
#line 733 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_44_44 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151);
                          }
#line 733 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__PredId_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 0)));
#line 733 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__ProcId_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 1)));
#line 734 "hlds_out_util.m"
                          {
#line 734 "hlds_out_util.m"
                            hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_153, &hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                          }
#line 736 "hlds_out_util.m"
                          {
#line 736 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_47_47 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_152);
                          }
#line 737 "hlds_out_util.m"
                          {
#line 737 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                          }
#line 737 "hlds_out_util.m"
                          {
#line 737 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) "))");
                          }
#line 737 "hlds_out_util.m"
                          {
#line 737 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_50_50);
                          }
#line 737 "hlds_out_util.m"
                          {
#line 737 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                          }
#line 736 "hlds_out_util.m"
                          {
#line 736 "hlds_out_util.m"
                            return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_46_46);
                          }
#line 732 "hlds_out_util.m"
                        }
#line 634 "hlds_out_util.m"
                      else
#line 634 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 653 "hlds_out_util.m"
                          {
#line 653 "hlds_out_util.m"
                            MR_Float hlds__hlds_out__hlds_out_util__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 653 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_130_130;

#line 654 "hlds_out_util.m"
                            {
#line 654 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 654 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_20);
#line 654 "hlds_out_util.m"
                            }
#line 654 "hlds_out_util.m"
                            {
#line 654 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_130_130, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                            }
#line 653 "hlds_out_util.m"
                          }
#line 634 "hlds_out_util.m"
                        else
#line 634 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 712 "hlds_out_util.m"
                            {
#line 712 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 712 "hlds_out_util.m"
                              MR_Word hlds__hlds_out__hlds_out_util__SubConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 712 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__SubStr_41;
#line 712 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 712 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 712 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 712 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_77_77;

#line 713 "hlds_out_util.m"
                              {
#line 713 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__SubStr_41 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__SubConsId_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                              }
#line 715 "hlds_out_util.m"
                              {
#line 715 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_39);
                              }
#line 716 "hlds_out_util.m"
                              {
#line 716 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_41, (MR_String) ")");
                              }
#line 715 "hlds_out_util.m"
                              {
#line 715 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_77_77);
                              }
#line 715 "hlds_out_util.m"
                              {
#line 715 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                              }
#line 715 "hlds_out_util.m"
                              {
#line 715 "hlds_out_util.m"
                                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_73_73);
                              }
#line 712 "hlds_out_util.m"
                            }
#line 634 "hlds_out_util.m"
                          else
#line 634 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 670 "hlds_out_util.m"
                              {
#line 670 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));

#line 671 "hlds_out_util.m"
                                {
#line 671 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_139);
                                }
#line 670 "hlds_out_util.m"
                              }
#line 634 "hlds_out_util.m"
                            else
#line 634 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 649 "hlds_out_util.m"
                                {
#line 649 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 649 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

#line 650 "hlds_out_util.m"
                                  {
#line 650 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 650 "hlds_out_util.m"
                                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
#line 650 "hlds_out_util.m"
                                  }
#line 650 "hlds_out_util.m"
                                  {
#line 650 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                                  }
#line 649 "hlds_out_util.m"
                                }
#line 634 "hlds_out_util.m"
                              else
#line 634 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 666 "hlds_out_util.m"
                                  {
#line 666 "hlds_out_util.m"
                                    MR_String hlds__hlds_out__hlds_out_util__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 666 "hlds_out_util.m"
                                    MR_Word hlds__hlds_out__hlds_out_util__V_125_125;

#line 667 "hlds_out_util.m"
                                    {
#line 667 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__V_125_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 667 "hlds_out_util.m"
                                      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_125_125, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_22));
#line 667 "hlds_out_util.m"
                                    }
#line 667 "hlds_out_util.m"
                                    {
#line 667 "hlds_out_util.m"
                                      return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_125_125, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                                    }
#line 666 "hlds_out_util.m"
                                  }
#line 634 "hlds_out_util.m"
                                else
#line 634 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 725 "hlds_out_util.m"
                                    {
#line 725 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__V_53_53;
#line 725 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 725 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 725 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_57_57;
#line 725 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 725 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 725 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 725 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__PredId_148;
#line 725 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_149;
#line 725 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_150;

#line 726 "hlds_out_util.m"
                                      {
#line 726 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_53_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147);
                                      }
#line 726 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__PredId_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 726 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__ProcId_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 727 "hlds_out_util.m"
                                      {
#line 727 "hlds_out_util.m"
                                        hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_149, &hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                                      }
#line 729 "hlds_out_util.m"
                                      {
#line 729 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_56_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_148);
                                      }
#line 730 "hlds_out_util.m"
                                      {
#line 730 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                                      }
#line 730 "hlds_out_util.m"
                                      {
#line 730 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, (MR_String) "))");
                                      }
#line 730 "hlds_out_util.m"
                                      {
#line 730 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_59_59);
                                      }
#line 730 "hlds_out_util.m"
                                      {
#line 730 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__V_57_57);
                                      }
#line 729 "hlds_out_util.m"
                                      {
#line 729 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", hlds__hlds_out__hlds_out_util__V_55_55);
                                      }
#line 725 "hlds_out_util.m"
                                    }
#line 634 "hlds_out_util.m"
                                  else
#line 634 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 645 "hlds_out_util.m"
                                      {
#line 646 "hlds_out_util.m"
                                        {
#line 646 "hlds_out_util.m"
                                          return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                                        }
#line 645 "hlds_out_util.m"
                                      }
#line 634 "hlds_out_util.m"
                                    else
#line 634 "hlds_out_util.m"
                                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 684 "hlds_out_util.m"
                                        {
#line 684 "hlds_out_util.m"
                                          MR_Integer hlds__hlds_out__hlds_out_util__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_118_118;
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_119_119;
#line 684 "hlds_out_util.m"
                                          MR_Word hlds__hlds_out__hlds_out_util__Module_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 684 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__Name_141 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));

#line 686 "hlds_out_util.m"
                                          {
#line 686 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_112_112 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_140);
                                          }
#line 687 "hlds_out_util.m"
                                          {
#line 687 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_32);
                                          }
#line 687 "hlds_out_util.m"
                                          {
#line 687 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_119_119, (MR_String) ")");
                                          }
#line 687 "hlds_out_util.m"
                                          {
#line 687 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_118_118);
                                          }
#line 687 "hlds_out_util.m"
                                          {
#line 687 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_141, hlds__hlds_out__hlds_out_util__V_116_116);
                                          }
#line 687 "hlds_out_util.m"
                                          {
#line 687 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_115_115);
                                          }
#line 687 "hlds_out_util.m"
                                          {
#line 687 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_112_112, hlds__hlds_out__hlds_out_util__V_113_113);
                                          }
#line 686 "hlds_out_util.m"
                                          {
#line 686 "hlds_out_util.m"
                                            return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_111_111);
                                          }
#line 684 "hlds_out_util.m"
                                        }
#line 634 "hlds_out_util.m"
                                      else
#line 634 "hlds_out_util.m"
                                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 706 "hlds_out_util.m"
                                          {
#line 706 "hlds_out_util.m"
                                            MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 706 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 706 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 707 "hlds_out_util.m"
                                            {
#line 707 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_37);
                                            }
#line 707 "hlds_out_util.m"
                                            {
#line 707 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_85_85, (MR_String) ")");
                                            }
#line 707 "hlds_out_util.m"
                                            {
#line 707 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_84_84);
                                            }
#line 706 "hlds_out_util.m"
                                          }
#line 634 "hlds_out_util.m"
                                        else
#line 709 "hlds_out_util.m"
                                          {
#line 709 "hlds_out_util.m"
                                            MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 709 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_80_80;
#line 709 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_81_81;

#line 710 "hlds_out_util.m"
                                            {
#line 710 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_38);
                                            }
#line 710 "hlds_out_util.m"
                                            {
#line 710 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_81_81, (MR_String) ")");
                                            }
#line 710 "hlds_out_util.m"
                                            {
#line 710 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_80_80);
                                            }
#line 709 "hlds_out_util.m"
                                          }
#line 634 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__Str_12;
#line 634 "hlds_out_util.m"
      }
#line 634 "hlds_out_util.m"
      break;
#line 634 "hlds_out_util.m"
    }
#line 158 "hlds_out_util.m"
}

#line 156 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_11,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 156 "hlds_out_util.m"
{
#line 627 "hlds_out_util.m"
  {
#line 627 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 627 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 628 "hlds_out_util.m"
    {
#line 628 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ConsId_8, hlds__hlds_out__hlds_out_util__ArgVars_9, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__ModuleInfo_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 628 "hlds_out_util.m"
    {
#line 628 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 628 "hlds_out_util.m"
      return;
    }
#line 627 "hlds_out_util.m"
  }
#line 156 "hlds_out_util.m"
}

#line 149 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_7,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_9,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 149 "hlds_out_util.m"
{
#line 618 "hlds_out_util.m"
  {
#line 618 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 618 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
#line 618 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

#line 619 "hlds_out_util.m"
    {
#line 619 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_7);
    }
#line 620 "hlds_out_util.m"
    {
#line 620 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
#line 621 "hlds_out_util.m"
    {
#line 621 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 621 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_9));
#line 621 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
#line 621 "hlds_out_util.m"
    }
#line 622 "hlds_out_util.m"
    {
#line 622 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 618 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 618 "hlds_out_util.m"
  }
#line 149 "hlds_out_util.m"
}

#line 147 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_8,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_10,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_11,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 147 "hlds_out_util.m"
{
#line 613 "hlds_out_util.m"
  {
#line 613 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 613 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 614 "hlds_out_util.m"
    {
#line 614 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleName_8, hlds__hlds_out__hlds_out_util__Functor_9, hlds__hlds_out__hlds_out_util__ArgTerms_10, hlds__hlds_out__hlds_out_util__VarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 614 "hlds_out_util.m"
    {
#line 614 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 614 "hlds_out_util.m"
      return;
    }
#line 613 "hlds_out_util.m"
  }
#line 147 "hlds_out_util.m"
}

#line 144 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_7,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 144 "hlds_out_util.m"
{
#line 606 "hlds_out_util.m"
  {
#line 606 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 606 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 606 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 606 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 606 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
#line 606 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 606 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 606 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 606 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 607 "hlds_out_util.m"
    {
#line 607 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_7);
    }
#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5760 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 596 "hlds_out_util.m"
    {
#line 596 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 596 "hlds_out_util.m"
    }
#line 597 "hlds_out_util.m"
    {
#line 597 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 606 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 606 "hlds_out_util.m"
  }
#line 144 "hlds_out_util.m"
}

#line 142 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
#line 142 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_8,
#line 142 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 142 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_10,
#line 142 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_11,
#line 142 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 142 "hlds_out_util.m"
{
#line 601 "hlds_out_util.m"
  {
#line 601 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 601 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 602 "hlds_out_util.m"
    {
#line 602 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleName_8, hlds__hlds_out__hlds_out_util__Functor_9, hlds__hlds_out__hlds_out_util__ArgVars_10, hlds__hlds_out__hlds_out_util__VarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 602 "hlds_out_util.m"
    {
#line 602 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 602 "hlds_out_util.m"
      return;
    }
#line 601 "hlds_out_util.m"
  }
#line 142 "hlds_out_util.m"
}

#line 139 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_7,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_8,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_10,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_11)
#line 139 "hlds_out_util.m"
{
#line 593 "hlds_out_util.m"
  {
#line 593 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 593 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 593 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
#line 593 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
#line 593 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
#line 593 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
#line 5875 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_8, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
#line 596 "hlds_out_util.m"
    {
#line 596 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_7));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
#line 596 "hlds_out_util.m"
    }
#line 597 "hlds_out_util.m"
    {
#line 597 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_10, hlds__hlds_out__hlds_out_util__NextToGraphicToken_11, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 593 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 593 "hlds_out_util.m"
  }
#line 139 "hlds_out_util.m"
}

#line 137 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_12)
#line 137 "hlds_out_util.m"
{
#line 588 "hlds_out_util.m"
  {
#line 588 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 588 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 588 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 588 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 588 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 588 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5941 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 596 "hlds_out_util.m"
    {
#line 596 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 596 "hlds_out_util.m"
    }
#line 597 "hlds_out_util.m"
    {
#line 597 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, hlds__hlds_out__hlds_out_util__NextToGraphicToken_12, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 589 "hlds_out_util.m"
    {
#line 589 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 589 "hlds_out_util.m"
      return;
    }
#line 588 "hlds_out_util.m"
  }
#line 137 "hlds_out_util.m"
}

#line 135 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_6,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_7,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9)
#line 135 "hlds_out_util.m"
{
#line 583 "hlds_out_util.m"
  {
#line 583 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 583 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 583 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
#line 583 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
#line 583 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
#line 583 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
#line 6010 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_7, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
#line 596 "hlds_out_util.m"
    {
#line 596 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_6));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
#line 596 "hlds_out_util.m"
    }
#line 597 "hlds_out_util.m"
    {
#line 597 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
#line 583 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 583 "hlds_out_util.m"
  }
#line 135 "hlds_out_util.m"
}

#line 133 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_7,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_8,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_10)
#line 133 "hlds_out_util.m"
{
#line 579 "hlds_out_util.m"
  {
#line 579 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
#line 579 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
#line 6074 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_8, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
#line 596 "hlds_out_util.m"
    {
#line 596 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_7));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
#line 596 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
#line 596 "hlds_out_util.m"
    }
#line 597 "hlds_out_util.m"
    {
#line 597 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_10, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
#line 589 "hlds_out_util.m"
    {
#line 589 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
#line 589 "hlds_out_util.m"
      return;
    }
#line 579 "hlds_out_util.m"
  }
#line 133 "hlds_out_util.m"
}

#line 125 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
#line 125 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__CallId_5,
#line 125 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_6,
#line 125 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredMarkers_7)
#line 125 "hlds_out_util.m"
{
#line 493 "hlds_out_util.m"
  {
#line 493 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
#line 493 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 493 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
#line 493 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
#line 493 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

#line 504 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 503 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
#line 504 "hlds_out_util.m"
    else
#line 505 "hlds_out_util.m"
      {
#line 505 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 534 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 544 "hlds_out_util.m"
          {
#line 544 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 565 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) == (MR_mktag((MR_Integer) 0))))
#line 546 "hlds_out_util.m"
              {
#line 546 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 546 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
#line 546 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 548 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
#line 548 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 549 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
#line 552 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 551 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 552 "hlds_out_util.m"
                else
#line 555 "hlds_out_util.m"
                  {
#line 555 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__Main_28;
#line 555 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
#line 555 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__Expl_30;
#line 555 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 555 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_49_49;
#line 555 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_51_51;

#line 555 "hlds_out_util.m"
                    {
#line 555 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                    }
#line 555 "hlds_out_util.m"
                    {
#line 555 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                    }
#line 556 "hlds_out_util.m"
                    {
#line 556 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                    }
#line 557 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
#line 559 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 558 "hlds_out_util.m"
                      {
#line 558 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_40_40;

#line 558 "hlds_out_util.m"
                        {
#line 558 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                        }
#line 558 "hlds_out_util.m"
                        {
#line 558 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                        }
#line 558 "hlds_out_util.m"
                      }
#line 559 "hlds_out_util.m"
                    else
#line 560 "hlds_out_util.m"
                      {
#line 560 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 560 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_44_44;
#line 560 "hlds_out_util.m"
                        MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
#line 560 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_47_47;

#line 560 "hlds_out_util.m"
                        {
#line 560 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                        }
#line 561 "hlds_out_util.m"
                        {
#line 561 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                        }
#line 561 "hlds_out_util.m"
                        {
#line 561 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                        }
#line 560 "hlds_out_util.m"
                        {
#line 560 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                        }
#line 560 "hlds_out_util.m"
                      }
#line 563 "hlds_out_util.m"
                    {
#line 563 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                    }
#line 563 "hlds_out_util.m"
                    {
#line 563 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                    }
#line 563 "hlds_out_util.m"
                    {
#line 563 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                    }
#line 555 "hlds_out_util.m"
                  }
#line 546 "hlds_out_util.m"
              }
#line 565 "hlds_out_util.m"
            else
#line 569 "hlds_out_util.m"
              {
#line 569 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_36_36;

#line 570 "hlds_out_util.m"
                {
#line 570 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 570 "hlds_out_util.m"
                {
#line 570 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                }
#line 569 "hlds_out_util.m"
              }
#line 544 "hlds_out_util.m"
          }
#line 534 "hlds_out_util.m"
        else
#line 534 "hlds_out_util.m"
          {
#line 534 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
#line 534 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
#line 534 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 534 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

#line 534 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 534 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 534 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
#line 536 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
#line 536 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 537 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
#line 540 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 539 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 540 "hlds_out_util.m"
            else
#line 541 "hlds_out_util.m"
              {
#line 541 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

#line 541 "hlds_out_util.m"
                {
#line 541 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 541 "hlds_out_util.m"
                {
#line 541 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
#line 541 "hlds_out_util.m"
              }
#line 534 "hlds_out_util.m"
          }
#line 505 "hlds_out_util.m"
        {
#line 505 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
#line 505 "hlds_out_util.m"
      }
#line 513 "hlds_out_util.m"
    {
#line 513 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
#line 514 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
#line 514 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

#line 513 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
#line 513 "hlds_out_util.m"
      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 513 "hlds_out_util.m"
        {
#line 513 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 514 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
#line 514 "hlds_out_util.m"
          if (hlds__hlds_out__hlds_out_util__succeeded)
#line 514 "hlds_out_util.m"
            {
#line 514 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
#line 514 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
#line 514 "hlds_out_util.m"
            }
#line 514 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 513 "hlds_out_util.m"
        }
#line 513 "hlds_out_util.m"
    }
#line 515 "hlds_out_util.m"
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
#line 521 "hlds_out_util.m"
      {
#line 521 "hlds_out_util.m"
        {
#line 521 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 11);
        }
#line 521 "hlds_out_util.m"
      }
#line 525 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 524 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
#line 525 "hlds_out_util.m"
    else
#line 526 "hlds_out_util.m"
      {
#line 526 "hlds_out_util.m"
        {
#line 526 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
#line 526 "hlds_out_util.m"
      }
#line 528 "hlds_out_util.m"
    {
#line 528 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__CallId_5);
    }
#line 528 "hlds_out_util.m"
    {
#line 528 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 493 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 493 "hlds_out_util.m"
  }
#line 125 "hlds_out_util.m"
}

#line 118 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
#line 118 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 118 "hlds_out_util.m"
{
#line 488 "hlds_out_util.m"
  {
#line 488 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 488 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 488 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 2))
#line 490 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "equiv_type_cast";
#line 488 "hlds_out_util.m"
    else
#line 488 "hlds_out_util.m"
      if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 3))
#line 491 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exists_cast";
#line 488 "hlds_out_util.m"
      else
#line 488 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 0))
#line 488 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_cast";
#line 488 "hlds_out_util.m"
        else
#line 489 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_inst_cast";
#line 488 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 488 "hlds_out_util.m"
  }
#line 118 "hlds_out_util.m"
}

#line 116 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
#line 116 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 116 "hlds_out_util.m"
{
#line 471 "hlds_out_util.m"
  {
#line 471 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 471 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 471 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 473 "hlds_out_util.m"
      {
#line 473 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 478 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_4)) == (MR_mktag((MR_Integer) 3))))
#line 485 "hlds_out_util.m"
          {
#line 485 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__CastType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)));

#line 488 "hlds_out_util.m"
            if ((hlds__hlds_out__hlds_out_util__CastType_18 == (MR_Integer) 2))
#line 490 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "equiv_type_cast";
#line 488 "hlds_out_util.m"
            else
#line 488 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__CastType_18 == (MR_Integer) 3))
#line 491 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exists_cast";
#line 488 "hlds_out_util.m"
              else
#line 488 "hlds_out_util.m"
                if ((hlds__hlds_out__hlds_out_util__CastType_18 == (MR_Integer) 0))
#line 488 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_cast";
#line 488 "hlds_out_util.m"
                else
#line 489 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_inst_cast";
#line 485 "hlds_out_util.m"
          }
#line 478 "hlds_out_util.m"
        else
#line 478 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_4)) == (MR_mktag((MR_Integer) 1))))
#line 481 "hlds_out_util.m"
            {
#line 481 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 1)));
#line 481 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___ClassId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)));

#line 482 "hlds_out_util.m"
              {
#line 482 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_15);
              }
#line 481 "hlds_out_util.m"
            }
#line 478 "hlds_out_util.m"
          else
#line 478 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_4)) == (MR_mktag((MR_Integer) 2))))
#line 483 "hlds_out_util.m"
              {
#line 483 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__EventName_16 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)));

#line 484 "hlds_out_util.m"
                {
#line 484 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_16);
                }
#line 483 "hlds_out_util.m"
              }
#line 478 "hlds_out_util.m"
            else
#line 478 "hlds_out_util.m"
              {
#line 478 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__Purity_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 478 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 478 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_8_8;
#line 478 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 478 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 478 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 478 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 1)));

#line 479 "hlds_out_util.m"
                {
#line 479 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_8_8 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_5);
                }
#line 480 "hlds_out_util.m"
                {
#line 480 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_12_12 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_6);
                }
#line 480 "hlds_out_util.m"
                {
#line 480 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, (MR_String) " call");
                }
#line 480 "hlds_out_util.m"
                {
#line 480 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_11_11);
                }
#line 479 "hlds_out_util.m"
                {
#line 479 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_9_9);
                }
#line 478 "hlds_out_util.m"
              }
#line 473 "hlds_out_util.m"
      }
#line 471 "hlds_out_util.m"
    else
#line 471 "hlds_out_util.m"
      {
#line 471 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 472 "hlds_out_util.m"
        {
#line 472 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_3);
        }
#line 471 "hlds_out_util.m"
      }
#line 471 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 471 "hlds_out_util.m"
  }
#line 116 "hlds_out_util.m"
}

#line 110 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
#line 110 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12,
#line 110 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13,
#line 110 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_7,
#line 110 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14,
#line 110 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15)
#line 110 "hlds_out_util.m"
{
#line 340 "hlds_out_util.m"
  {
#line 340 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 340 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 0)));
#line 340 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 1)));
#line 340 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_11;
#line 340 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16;
#line 340 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17;

#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_10, &hlds__hlds_out__hlds_out_util__SubContexts_11);
    }
#line 343 "hlds_out_util.m"
    {
#line 343 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__MainContext_9, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13, hlds__hlds_out__hlds_out_util__SubContexts_11, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15);
#line 344 "hlds_out_util.m"
      return;
    }
#line 340 "hlds_out_util.m"
  }
#line 110 "hlds_out_util.m"
}

#line 97 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
#line 97 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_4,
#line 97 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7,
#line 97 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8)
#line 97 "hlds_out_util.m"
{
#line 337 "hlds_out_util.m"
  {
#line 337 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 337 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 0)));
#line 337 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 1)));
#line 337 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_20;
#line 337 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21;
#line 337 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22;
#line 344 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_6_6;

#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_19, &hlds__hlds_out__hlds_out_util__SubContexts_20);
    }
#line 343 "hlds_out_util.m"
    {
#line 343 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, hlds__hlds_out__hlds_out_util__MainContext_18, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, &hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__SubContexts_20, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8);
    }
#line 337 "hlds_out_util.m"
  }
#line 97 "hlds_out_util.m"
}

#line 88 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(
#line 88 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 88 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6,
#line 88 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7)
#line 88 "hlds_out_util.m"
{
#line 327 "hlds_out_util.m"
  {
#line 327 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 327 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 327 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_9;
#line 327 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 327 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 327 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;

#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 329 "hlds_out_util.m"
    {
#line 329 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, hlds__hlds_out__hlds_out_util__V_11_11);
    }
#line 327 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 327 "hlds_out_util.m"
  }
#line 88 "hlds_out_util.m"
}

#line 86 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(
#line 86 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_6,
#line 86 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_7,
#line 86 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_8)
#line 86 "hlds_out_util.m"
{
#line 323 "hlds_out_util.m"
  {
#line 323 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 323 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 323 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_18;
#line 323 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;
#line 323 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_20_20;
#line 323 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_22_22;

#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_8, &hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 329 "hlds_out_util.m"
    {
#line 329 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_6, hlds__hlds_out__hlds_out_util__PredId_7);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_22_22);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_19_19, hlds__hlds_out__hlds_out_util__V_20_20);
    }
#line 324 "hlds_out_util.m"
    {
#line 324 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_12_12);
#line 324 "hlds_out_util.m"
      return;
    }
#line 323 "hlds_out_util.m"
  }
#line 86 "hlds_out_util.m"
}

#line 84 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(
#line 84 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 84 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 84 "hlds_out_util.m"
{
#line 320 "hlds_out_util.m"
  {
#line 320 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 320 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 320 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_11;
#line 320 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 320 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;
#line 320 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_6, &hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 329 "hlds_out_util.m"
    {
#line 329 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, hlds__hlds_out__hlds_out_util__PredId_5);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_15_15);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 320 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 320 "hlds_out_util.m"
  }
#line 84 "hlds_out_util.m"
}

#line 82 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(
#line 82 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 82 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 82 "hlds_out_util.m"
{
#line 317 "hlds_out_util.m"
  {
#line 317 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 317 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 317 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 317 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;
#line 317 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_24;
#line 317 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_25_25;
#line 317 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;
#line 317 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_28_28;

#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 329 "hlds_out_util.m"
    {
#line 329 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_28_28 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_28_28);
    }
#line 330 "hlds_out_util.m"
    {
#line 330 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_25_25, hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 324 "hlds_out_util.m"
    {
#line 324 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_18_18);
#line 324 "hlds_out_util.m"
      return;
    }
#line 317 "hlds_out_util.m"
  }
#line 82 "hlds_out_util.m"
}

#line 80 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(
#line 80 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 80 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_5)
#line 80 "hlds_out_util.m"
{
#line 262 "hlds_out_util.m"
  {
#line 262 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 262 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
#line 262 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
#line 311 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
#line 264 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

#line 263 "hlds_out_util.m"
    {
#line 263 "hlds_out_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
#line 264 "hlds_out_util.m"
    {
#line 264 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
#line 264 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 264 "hlds_out_util.m"
      {
#line 264 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
#line 264 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 264 "hlds_out_util.m"
      }
#line 311 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 265 "hlds_out_util.m"
      {
#line 265 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Module_9;
#line 265 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Name_10;
#line 265 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Arity_11;
#line 265 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_12;
#line 265 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Origin_13;

#line 265 "hlds_out_util.m"
        {
#line 265 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Module_9 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 266 "hlds_out_util.m"
        {
#line 266 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 267 "hlds_out_util.m"
        {
#line 267 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 268 "hlds_out_util.m"
        {
#line 268 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 269 "hlds_out_util.m"
        {
#line 269 "hlds_out_util.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__Origin_13);
        }
#line 280 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 1))))
#line 281 "hlds_out_util.m"
          {
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__MethodName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__ClassId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 0)));
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 1)));
#line 281 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__MethodStr_26;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__ClassName_27;
#line 281 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__ClassStr_29;
#line 281 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__TypeStrs_30;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_56_56;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_59_59;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_60_60;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_63_63;
#line 281 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_65_65;
#line 282 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 2)));
#line 282 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 3)));
#line 286 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_28_28;

#line 284 "hlds_out_util.m"
            {
#line 284 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__MethodStr_26 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__MethodName_20, hlds__hlds_out__hlds_out_util__Arity_11);
            }
#line 286 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 0)));
#line 286 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 1)));
#line 287 "hlds_out_util.m"
            {
#line 287 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ClassStr_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_27);
            }
#line 288 "hlds_out_util.m"
            {
#line 288 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_56_56 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
#line 288 "hlds_out_util.m"
            {
#line 288 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeStrs_30 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__InstanceTypes_23);
            }
#line 291 "hlds_out_util.m"
            {
#line 291 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_30));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
#line 291 "hlds_out_util.m"
            }
#line 291 "hlds_out_util.m"
            {
#line 291 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_63_63, 0) = ((MR_Box) ((MR_String) "("));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_65_65));
#line 291 "hlds_out_util.m"
            }
#line 291 "hlds_out_util.m"
            {
#line 291 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_29));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_62_62, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_63_63));
#line 291 "hlds_out_util.m"
            }
#line 291 "hlds_out_util.m"
            {
#line 291 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_60_60, 0) = ((MR_Box) ((MR_String) " for \140"));
#line 291 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_60_60, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_62_62));
#line 291 "hlds_out_util.m"
            }
#line 290 "hlds_out_util.m"
            {
#line 290 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_59_59, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_26));
#line 290 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_60_60));
#line 290 "hlds_out_util.m"
            }
#line 290 "hlds_out_util.m"
            {
#line 290 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) ((MR_String) "instance method "));
#line 290 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_59_59));
#line 290 "hlds_out_util.m"
            }
#line 289 "hlds_out_util.m"
            {
#line 289 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_57_57);
            }
#line 281 "hlds_out_util.m"
          }
#line 280 "hlds_out_util.m"
        else
#line 280 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 0))))
#line 271 "hlds_out_util.m"
            {
#line 271 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SpecialId_14;
#line 271 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_15;
#line 271 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Descr_16;
#line 271 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_18;
#line 271 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ForStr_19;
#line 271 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 271 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 271 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 273 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_17;

#line 271 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_69_69, (MR_Integer) 0)));
#line 271 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_69_69, (MR_Integer) 1)));
#line 272 "hlds_out_util.m"
              {
#line 272 "hlds_out_util.m"
                hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_14, &hlds__hlds_out__hlds_out_util__Descr_16);
              }
#line 273 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util___TypeSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 0)));
#line 273 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 1)));
#line 274 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_18 == (MR_Integer) 0);
#line 276 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 275 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type ";
#line 276 "hlds_out_util.m"
              else
#line 277 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type constructor ";
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_71_71 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_15);
              }
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_19, hlds__hlds_out__hlds_out_util__V_71_71);
              }
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_16, hlds__hlds_out__hlds_out_util__V_70_70);
              }
#line 271 "hlds_out_util.m"
            }
#line 280 "hlds_out_util.m"
          else
#line 280 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 294 "hlds_out_util.m"
              {
#line 294 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__FileName_31 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 294 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 299 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PromiseType_33;

#line 295 "hlds_out_util.m"
                {
#line 295 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__PromiseType_33);
                }
#line 299 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 296 "hlds_out_util.m"
                  {
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 296 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 297 "hlds_out_util.m"
                    {
#line 297 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_47_47 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_33);
                    }
#line 7297 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7299 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__LineNumber_32);
                    }
#line 7302 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7304 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_78_78, (MR_String) ")");
                    }
#line 7307 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7309 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_79_79);
                    }
#line 7312 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7314 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__FileName_31, hlds__hlds_out__hlds_out_util__V_81_81);
                    }
#line 7317 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7319 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_82_82);
                    }
#line 7322 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7324 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_84_84);
                    }
#line 7327 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7329 "hlds.hlds_out.hlds_out_util.c"
                      return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_85_85);
                    }
#line 296 "hlds_out_util.m"
                  }
#line 299 "hlds_out_util.m"
                else
#line 300 "hlds_out_util.m"
                  {
#line 300 "hlds_out_util.m"
                    {
#line 300 "hlds_out_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_util", (MR_String) "function \140hlds.hlds_out.hlds_out_util.pred_id_to_string\'/2", (MR_String) "origin_assertion");
                    }
#line 300 "hlds_out_util.m"
                  }
#line 294 "hlds_out_util.m"
              }
#line 280 "hlds_out_util.m"
            else
#line 307 "hlds_out_util.m"
              {
#line 307 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;

#line 309 "hlds_out_util.m"
                {
#line 309 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 309 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 309 "hlds_out_util.m"
                }
#line 308 "hlds_out_util.m"
                {
#line 308 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__V_43_43, hlds__hlds_out__hlds_out_util__Arity_11);
                }
#line 307 "hlds_out_util.m"
              }
#line 265 "hlds_out_util.m"
      }
#line 311 "hlds_out_util.m"
    else
#line 313 "hlds_out_util.m"
      {
#line 313 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_42;
#line 313 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_73_73;

#line 313 "hlds_out_util.m"
        {
#line 313 "hlds_out_util.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_42);
        }
#line 314 "hlds_out_util.m"
        {
#line 314 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_42);
        }
#line 314 "hlds_out_util.m"
        {
#line 314 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_73_73);
        }
#line 313 "hlds_out_util.m"
      }
#line 262 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_6;
#line 262 "hlds_out_util.m"
  }
#line 80 "hlds_out_util.m"
}

#line 79 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(
#line 79 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 79 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6)
#line 79 "hlds_out_util.m"
{
#line 256 "hlds_out_util.m"
  {
#line 256 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 256 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 260 "hlds_out_util.m"
    {
#line 260 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 260 "hlds_out_util.m"
    {
#line 260 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
#line 260 "hlds_out_util.m"
      return;
    }
#line 256 "hlds_out_util.m"
  }
#line 79 "hlds_out_util.m"
}

#line 68 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_class_id_3_p_0(
#line 68 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 68 "hlds_out_util.m"
{
#line 248 "hlds_out_util.m"
  {
#line 248 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 248 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_9_9;

#line 249 "hlds_out_util.m"
    {
#line 249 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_4));
#line 249 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_5));
#line 249 "hlds_out_util.m"
    }
#line 249 "hlds_out_util.m"
    {
#line 249 "hlds_out_util.m"
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__hlds_out__hlds_out_util__V_9_9);
#line 249 "hlds_out_util.m"
      return;
    }
#line 248 "hlds_out_util.m"
  }
#line 68 "hlds_out_util.m"
}

#line 66 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_f_0(
#line 66 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 66 "hlds_out_util.m"
{
#line 245 "hlds_out_util.m"
  {
#line 245 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 245 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 245 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_5_5;

#line 246 "hlds_out_util.m"
    {
#line 246 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_5_5, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_3));
#line 246 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_5_5, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_4));
#line 246 "hlds_out_util.m"
    }
#line 246 "hlds_out_util.m"
    {
#line 246 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_5_5);
    }
#line 245 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 245 "hlds_out_util.m"
  }
#line 66 "hlds_out_util.m"
}

#line 65 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_type_ctor_3_p_0(
#line 65 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 65 "hlds_out_util.m"
{
#line 242 "hlds_out_util.m"
  {
#line 242 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 242 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_9_9;

#line 243 "hlds_out_util.m"
    {
#line 243 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_4));
#line 243 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_5));
#line 243 "hlds_out_util.m"
    }
#line 243 "hlds_out_util.m"
    {
#line 243 "hlds_out_util.m"
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__hlds_out__hlds_out_util__V_9_9);
#line 243 "hlds_out_util.m"
      return;
    }
#line 242 "hlds_out_util.m"
  }
#line 65 "hlds_out_util.m"
}

#line 45 "hlds_out_util.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(
#line 45 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Globals_3)
#line 45 "hlds_out_util.m"
{
#line 230 "hlds_out_util.m"
  {
#line 230 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 230 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Info_4;
#line 230 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_5;
#line 230 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Ids_6;
#line 230 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Names_7;
#line 230 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_8;

#line 231 "hlds_out_util.m"
    {
#line 231 "hlds_out_util.m"
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 144, &hlds__hlds_out__hlds_out_util__DumpOptions_5);
    }
#line 232 "hlds_out_util.m"
    {
#line 232 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 141, &hlds__hlds_out__hlds_out_util__Ids_6);
    }
#line 233 "hlds_out_util.m"
    {
#line 233 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 142, &hlds__hlds_out__hlds_out_util__Names_7);
    }
#line 234 "hlds_out_util.m"
    {
#line 234 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__MercInfo_8 = parse_tree__mercury_to_mercury__init_merc_out_info_for_hlds_dump_1_f_0(hlds__hlds_out__hlds_out_util__Globals_3);
    }
#line 235 "hlds_out_util.m"
    {
#line 235 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 235 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_5));
#line 235 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_5));
#line 235 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_6));
#line 235 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_7));
#line 235 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_8));
#line 235 "hlds_out_util.m"
    }
#line 230 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Info_4;
#line 230 "hlds_out_util.m"
  }
#line 45 "hlds_out_util.m"
}

void mercury__hlds__hlds_out__hlds_out_util__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0);
}

void mercury__hlds__hlds_out__hlds_out_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_util. */
