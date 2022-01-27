/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 145 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 148 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 154 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 160 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 163 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

#line 166 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

#line 169 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

#line 172 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

#line 175 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

#line 178 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

#line 181 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

#line 184 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

#line 187 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

#line 190 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

#line 193 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

#line 196 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

#line 199 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

#line 202 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

#line 205 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

#line 208 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

#line 211 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

#line 214 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

#line 217 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

#line 220 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

#line 223 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

#line 226 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

#line 229 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0;

#line 232 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1;

#line 235 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0[2];

#line 238 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0[2];

#line 241 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0[2];

#line 244 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 247 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 249 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 252 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 255 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 257 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 259 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 262 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 265 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 267 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 270 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 273 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 275 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 277 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 280 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 283 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 285 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 288 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 291 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 293 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 295 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 298 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 301 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 303 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 306 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 309 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 311 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 313 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 316 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001(
#line 319 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 321 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 324 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001(
#line 327 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 329 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 331 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 883 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__883__1_3_p_0(
#line 883 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_103,
#line 883 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_104,
#line 883 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_105);

#line 781 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__781__1_3_p_0(
#line 781 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_84,
#line 781 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_85,
#line 781 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_86);

#line 1057 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1057 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1057 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

#line 999 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 999 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 999 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 999 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 999 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4);

#line 483 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 483 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 483 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 483 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7);

#line 461 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 461 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 461 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 461 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 461 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13);

#line 437 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 437 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 437 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 437 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 437 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9);

#line 418 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 418 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 418 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 418 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 418 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 418 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5);

#line 377 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 377 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 377 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 377 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 377 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 377 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19);

#line 1029 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 1029 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 1029 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

#line 997 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 997 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 997 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 997 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 997 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 880 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 880 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 880 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 880 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 880 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 778 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1(
#line 778 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 778 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 778 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 778 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "type_info_cell_constructor"))
  },
  /* row 3 */
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



#line 693 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 701 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 710 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 718 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 726 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 734 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 743 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 751 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0
};

#line 760 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

#line 769 "hlds.hlds_out.hlds_out_util.c"
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

#line 784 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 789 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

#line 798 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 803 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 808 "hlds.hlds_out.hlds_out_util.c"
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

#line 829 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

#line 835 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

#line 841 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 847 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 853 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 859 "hlds.hlds_out.hlds_out_util.c"
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

#line 880 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

#line 886 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

#line 892 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 898 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 904 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 910 "hlds.hlds_out.hlds_out_util.c"
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

#line 931 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

#line 937 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

#line 943 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

#line 949 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

#line 955 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 961 "hlds.hlds_out.hlds_out_util.c"
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

#line 982 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  (MR_Integer) 0
};

#line 988 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  (MR_Integer) 1
};

#line 994 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1
};

#line 1000 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0
};

#line 1006 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1012 "hlds.hlds_out.hlds_out_util.c"
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

#line 1033 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 1036 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1038 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1040 "hlds.hlds_out.hlds_out_util.c"
{
#line 1042 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1044 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1047 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1049 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1052 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1054 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1056 "hlds.hlds_out.hlds_out_util.c"
}

#line 1059 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 1062 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1064 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1066 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1068 "hlds.hlds_out.hlds_out_util.c"
{
#line 1070 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1072 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1075 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1077 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1080 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1082 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1084 "hlds.hlds_out.hlds_out_util.c"
}

#line 1087 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 1090 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1092 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1094 "hlds.hlds_out.hlds_out_util.c"
{
#line 1096 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1098 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1101 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1103 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1106 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1108 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1110 "hlds.hlds_out.hlds_out_util.c"
}

#line 1113 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 1116 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1118 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1120 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1122 "hlds.hlds_out.hlds_out_util.c"
{
#line 1124 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1126 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1129 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1131 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1134 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1136 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1138 "hlds.hlds_out.hlds_out_util.c"
}

#line 1141 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 1144 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1146 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1148 "hlds.hlds_out.hlds_out_util.c"
{
#line 1150 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1152 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1155 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1157 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1160 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1162 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1164 "hlds.hlds_out.hlds_out_util.c"
}

#line 1167 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 1170 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1172 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1174 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1176 "hlds.hlds_out.hlds_out_util.c"
{
#line 1178 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1180 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1183 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1185 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1188 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1190 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1192 "hlds.hlds_out.hlds_out_util.c"
}

#line 1195 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 1198 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1200 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1202 "hlds.hlds_out.hlds_out_util.c"
{
#line 1204 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1206 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1209 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1211 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1214 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1216 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1218 "hlds.hlds_out.hlds_out_util.c"
}

#line 1221 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 1224 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1226 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1228 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1230 "hlds.hlds_out.hlds_out_util.c"
{
#line 1232 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1234 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1237 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1239 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1242 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1244 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1246 "hlds.hlds_out.hlds_out_util.c"
}

#line 1249 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001(
#line 1252 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1254 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1256 "hlds.hlds_out.hlds_out_util.c"
{
#line 1258 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1260 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1263 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1265 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1268 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1270 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1272 "hlds.hlds_out.hlds_out_util.c"
}

#line 1275 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001(
#line 1278 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1280 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1282 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1284 "hlds.hlds_out.hlds_out_util.c"
{
#line 1286 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1288 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1291 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1293 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1296 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1298 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1300 "hlds.hlds_out.hlds_out_util.c"
}

#line 883 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__883__1_3_p_0(
#line 883 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_103,
#line 883 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_104,
#line 883 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_105)
#line 883 "hlds_out_util.m"
{
#line 883 "hlds_out_util.m"
  {
#line 883 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_103 == (MR_Char) 42);

#line 883 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 882 "hlds_out_util.m"
      {
#line 882 "hlds_out_util.m"
        {
#line 882 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_104, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_105);
#line 882 "hlds_out_util.m"
          return;
        }
#line 882 "hlds_out_util.m"
      }
#line 883 "hlds_out_util.m"
    else
#line 884 "hlds_out_util.m"
      {
#line 884 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

#line 884 "hlds_out_util.m"
        {
#line 884 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_103, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
#line 885 "hlds_out_util.m"
        {
#line 885 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_104, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__HeadVar__3_105);
#line 885 "hlds_out_util.m"
          return;
        }
#line 884 "hlds_out_util.m"
      }
#line 883 "hlds_out_util.m"
  }
#line 883 "hlds_out_util.m"
}

#line 781 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__781__1_3_p_0(
#line 781 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_84,
#line 781 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_85,
#line 781 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_86)
#line 781 "hlds_out_util.m"
{
#line 781 "hlds_out_util.m"
  {
#line 781 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_84 == (MR_Char) 42);

#line 781 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 780 "hlds_out_util.m"
      {
#line 780 "hlds_out_util.m"
        {
#line 780 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_85, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_86);
#line 780 "hlds_out_util.m"
          return;
        }
#line 780 "hlds_out_util.m"
      }
#line 781 "hlds_out_util.m"
    else
#line 782 "hlds_out_util.m"
      {
#line 782 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_13;

#line 782 "hlds_out_util.m"
        {
#line 782 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_84, &hlds__hlds_out__hlds_out_util__CharStr_13);
        }
#line 783 "hlds_out_util.m"
        {
#line 783 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_85, hlds__hlds_out__hlds_out_util__CharStr_13, hlds__hlds_out__hlds_out_util__HeadVar__3_86);
#line 783 "hlds_out_util.m"
          return;
        }
#line 782 "hlds_out_util.m"
      }
#line 781 "hlds_out_util.m"
  }
#line 781 "hlds_out_util.m"
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
#line 1454 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1456 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1459 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1461 "hlds.hlds_out.hlds_out_util.c"
  }
#line 59 "hlds_out_util.m"
}

#line 166 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
#line 166 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 166 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 166 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 166 "hlds_out_util.m"
{
#line 166 "hlds_out_util.m"
  {
#line 166 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 166 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 166 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 166 "hlds_out_util.m"
    {
#line 166 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 166 "hlds_out_util.m"
      return;
    }
#line 166 "hlds_out_util.m"
  }
#line 166 "hlds_out_util.m"
}

#line 166 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
#line 166 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 166 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 166 "hlds_out_util.m"
{
#line 1507 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1509 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1512 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1514 "hlds.hlds_out.hlds_out_util.c"
  }
#line 166 "hlds_out_util.m"
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
#line 1560 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1562 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1565 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1567 "hlds.hlds_out.hlds_out_util.c"
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
#line 1613 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1615 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1618 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1620 "hlds.hlds_out.hlds_out_util.c"
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
#line 1649 "hlds.hlds_out.hlds_out_util.c"
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
#line 1683 "hlds.hlds_out.hlds_out_util.c"
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
#line 1703 "hlds.hlds_out.hlds_out_util.c"
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
#line 1723 "hlds.hlds_out.hlds_out_util.c"
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
#line 1743 "hlds.hlds_out.hlds_out_util.c"
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

#line 1826 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
#line 36 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
          {
#line 1832 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
#line 36 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
              {
#line 1838 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1840 "hlds.hlds_out.hlds_out_util.c"
                {
#line 1842 "hlds.hlds_out.hlds_out_util.c"
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
#line 36 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
                  {
#line 1849 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1851 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 1853 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
#line 36 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1858 "hlds.hlds_out.hlds_out_util.c"
                      {
#line 1860 "hlds.hlds_out.hlds_out_util.c"
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

#line 1057 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1057 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1057 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
#line 1057 "hlds_out_util.m"
{
#line 1060 "hlds_out_util.m"
  while (MR_TRUE)
#line 1060 "hlds_out_util.m"
    {
#line 1060 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1060 "hlds_out_util.m"
      {
#line 1060 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1061 "hlds_out_util.m"
        {
#line 1061 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
#line 1066 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "hlds_out_util.m"
          {
#line 1067 "hlds_out_util.m"
          }
#line 1066 "hlds_out_util.m"
        else
#line 1063 "hlds_out_util.m"
          {
#line 1063 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
#line 1063 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

#line 1064 "hlds_out_util.m"
            {
#line 1064 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1065 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1065 "hlds_out_util.m"
            {
#line 1065 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
#line 1065 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

#line 1065 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
#line 1065 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
#line 1065 "hlds_out_util.m"
            }
#line 1065 "hlds_out_util.m"
            continue;
#line 1063 "hlds_out_util.m"
          }
#line 1060 "hlds_out_util.m"
      }
#line 1060 "hlds_out_util.m"
      break;
#line 1060 "hlds_out_util.m"
    }
#line 1057 "hlds_out_util.m"
}

#line 999 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 999 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 999 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 999 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 999 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 999 "hlds_out_util.m"
{
#line 1003 "hlds_out_util.m"
  {
#line 1003 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1003 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1003 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

#line 1004 "hlds_out_util.m"
    {
#line 1004 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_7);
    }
#line 1005 "hlds_out_util.m"
    {
#line 1005 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
#line 1007 "hlds_out_util.m"
    {
#line 1007 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1012 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
#line 1009 "hlds_out_util.m"
      {
#line 1009 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 1010 "hlds_out_util.m"
        {
#line 1010 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
#line 1011 "hlds_out_util.m"
        {
#line 1011 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
#line 1011 "hlds_out_util.m"
          return;
        }
#line 1009 "hlds_out_util.m"
      }
#line 1012 "hlds_out_util.m"
    else
#line 1013 "hlds_out_util.m"
      {
#line 1013 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 1014 "hlds_out_util.m"
        {
#line 1014 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
#line 1015 "hlds_out_util.m"
        {
#line 1015 "hlds_out_util.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Super_14);
#line 1015 "hlds_out_util.m"
          return;
        }
#line 1013 "hlds_out_util.m"
      }
#line 1003 "hlds_out_util.m"
  }
#line 999 "hlds_out_util.m"
}

#line 483 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 483 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 483 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 483 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7)
#line 483 "hlds_out_util.m"
{
#line 488 "hlds_out_util.m"
  {
#line 488 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 488 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__First_4 == (MR_Integer) 0))
#line 488 "hlds_out_util.m"
      {
#line 491 "hlds_out_util.m"
        {
#line 491 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
        }
#line 488 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
    else
#line 493 "hlds_out_util.m"
      {
#line 494 "hlds_out_util.m"
        {
#line 494 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
        }
#line 493 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
  }
#line 483 "hlds_out_util.m"
}

#line 461 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 461 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 461 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 461 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 461 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13)
#line 461 "hlds_out_util.m"
{
#line 464 "hlds_out_util.m"
  {
#line 464 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ConsId_8;
#line 464 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9;
#line 464 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 464 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ConsIdStr_11;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_16_16;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_20_20;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_21_21;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_24_24;
#line 464 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_25_25;

#line 488 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__First_5 == (MR_Integer) 0))
#line 488 "hlds_out_util.m"
      {
#line 491 "hlds_out_util.m"
        {
#line 491 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
        }
#line 488 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
    else
#line 493 "hlds_out_util.m"
      {
#line 494 "hlds_out_util.m"
        {
#line 494 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
        }
#line 493 "hlds_out_util.m"
      }
#line 466 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 0)));
#line 466 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 1)));
#line 467 "hlds_out_util.m"
    {
#line 467 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
    }
#line 470 "hlds_out_util.m"
    {
#line 470 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
#line 471 "hlds_out_util.m"
    {
#line 471 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 471 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 471 "hlds_out_util.m"
    }
#line 472 "hlds_out_util.m"
    {
#line 472 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "hlds_out_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
#line 472 "hlds_out_util.m"
    }
#line 472 "hlds_out_util.m"
    {
#line 472 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_25_25));
#line 472 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 472 "hlds_out_util.m"
    }
#line 472 "hlds_out_util.m"
    {
#line 472 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[17])));
#line 472 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_24_24));
#line 472 "hlds_out_util.m"
    }
#line 471 "hlds_out_util.m"
    {
#line 471 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_20_20));
#line 471 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_21_21));
#line 471 "hlds_out_util.m"
    }
#line 471 "hlds_out_util.m"
    {
#line 471 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 471 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_19_19));
#line 471 "hlds_out_util.m"
    }
#line 471 "hlds_out_util.m"
    {
#line 471 "hlds_out_util.m"
      *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 464 "hlds_out_util.m"
  }
#line 461 "hlds_out_util.m"
}

#line 437 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 437 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 437 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 437 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 437 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9)
#line 437 "hlds_out_util.m"
{
#line 441 "hlds_out_util.m"
  while (MR_TRUE)
#line 441 "hlds_out_util.m"
    {
#line 441 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 441 "hlds_out_util.m"
      {
#line 441 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 441 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContext_5;
#line 441 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 441 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__ConsId_10;
#line 441 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_11;
#line 441 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Functor_12;
#line 441 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__V_15_15;
#line 443 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13;

#line 440 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 440 "hlds_out_util.m"
          {
#line 440 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 0)));
#line 442 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 1)));
#line 443 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 443 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 443 "hlds_out_util.m"
              {
#line 443 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 443 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 443 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 443 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 2);
#line 441 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 441 "hlds_out_util.m"
                  {
#line 447 "hlds_out_util.m"
                    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Functor_12)) == (MR_mktag((MR_Integer) 1))))
#line 448 "hlds_out_util.m"
                      {
#line 448 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ModuleSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));
#line 448 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 1)));
#line 448 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_17_17;
#line 448 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_21_21;

#line 448 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_16_16, (MR_String) "[|]") == 0);
#line 448 "hlds_out_util.m"
                        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 448 "hlds_out_util.m"
                          {
#line 449 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_17_17 = (MR_String) "list";
#line 449 "hlds_out_util.m"
                            {
#line 449 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(hlds__hlds_out__hlds_out_util__ModuleSymName_14, &hlds__hlds_out__hlds_out_util__V_21_21);
                            }
#line 448 "hlds_out_util.m"
                            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 449 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_17_17, hlds__hlds_out__hlds_out_util__V_21_21) == 0);
#line 448 "hlds_out_util.m"
                          }
#line 448 "hlds_out_util.m"
                      }
#line 447 "hlds_out_util.m"
                    else
#line 446 "hlds_out_util.m"
                      {
#line 446 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));

#line 446 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_18_18, (MR_String) "[|]") == 0);
#line 446 "hlds_out_util.m"
                      }
#line 441 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 455 "hlds_out_util.m"
                      {
#line 455 "hlds_out_util.m"
                        if ((hlds__hlds_out__hlds_out_util__ArgNum_11 == (MR_Integer) 1))
#line 452 "hlds_out_util.m"
                          {
#line 453 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__ElementNum_8 = hlds__hlds_out__hlds_out_util__NumElementsBefore_7;
#line 454 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__AfterContexts_9 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 452 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 452 "hlds_out_util.m"
                          }
#line 455 "hlds_out_util.m"
                        else
#line 455 "hlds_out_util.m"
                          if ((hlds__hlds_out__hlds_out_util__ArgNum_11 == (MR_Integer) 2))
#line 456 "hlds_out_util.m"
                            {
#line 456 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__V_19_19 = (hlds__hlds_out__hlds_out_util__NumElementsBefore_7 + (MR_Integer) 1);

#line 457 "hlds_out_util.m"
                              /* direct tailcall eliminated */
#line 457 "hlds_out_util.m"
                              {
#line 457 "hlds_out_util.m"
                                MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 457 "hlds_out_util.m"
                                MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7 = hlds__hlds_out__hlds_out_util__V_19_19;

#line 457 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__NumElementsBefore_7 = hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7;
#line 457 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1;
#line 457 "hlds_out_util.m"
                              }
#line 457 "hlds_out_util.m"
                              continue;
#line 456 "hlds_out_util.m"
                            }
#line 455 "hlds_out_util.m"
                          else
#line 455 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
#line 455 "hlds_out_util.m"
                      }
#line 441 "hlds_out_util.m"
                  }
#line 443 "hlds_out_util.m"
              }
#line 440 "hlds_out_util.m"
          }
#line 441 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__succeeded;
#line 441 "hlds_out_util.m"
      }
#line 441 "hlds_out_util.m"
      break;
#line 441 "hlds_out_util.m"
    }
#line 437 "hlds_out_util.m"
}

#line 418 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 418 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 418 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 418 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 418 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 418 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5)
#line 418 "hlds_out_util.m"
{
#line 422 "hlds_out_util.m"
  while (MR_TRUE)
#line 422 "hlds_out_util.m"
    {
#line 422 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 422 "hlds_out_util.m"
      {
#line 422 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 422 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "hlds_out_util.m"
          {
#line 422 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4;
#line 422 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1;
#line 422 "hlds_out_util.m"
          }
#line 422 "hlds_out_util.m"
        else
#line 423 "hlds_out_util.m"
          {
#line 423 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 423 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 431 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ElementNum_16;
#line 431 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__AfterContexts_17;

#line 425 "hlds_out_util.m"
            {
#line 425 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0, &hlds__hlds_out__hlds_out_util__ElementNum_16, &hlds__hlds_out__hlds_out_util__AfterContexts_17);
            }
#line 431 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 428 "hlds_out_util.m"
              {
#line 428 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;
#line 428 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__ElementNumStr_37;
#line 428 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38;
#line 428 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_40_40;
#line 428 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;
#line 428 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_46_46;
#line 428 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_47_47;

#line 488 "hlds_out_util.m"
                if ((hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 == (MR_Integer) 0))
#line 488 "hlds_out_util.m"
                  {
#line 491 "hlds_out_util.m"
                    {
#line 491 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                    }
#line 488 "hlds_out_util.m"
                  }
#line 488 "hlds_out_util.m"
                else
#line 493 "hlds_out_util.m"
                  {
#line 494 "hlds_out_util.m"
                    {
#line 494 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                    }
#line 493 "hlds_out_util.m"
                  }
#line 479 "hlds_out_util.m"
                {
#line 479 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
#line 481 "hlds_out_util.m"
                {
#line 481 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
#line 481 "hlds_out_util.m"
                }
#line 481 "hlds_out_util.m"
                {
#line 481 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_47_47));
#line 481 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 481 "hlds_out_util.m"
                }
#line 481 "hlds_out_util.m"
                {
#line 481 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
#line 481 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_46_46));
#line 481 "hlds_out_util.m"
                }
#line 480 "hlds_out_util.m"
                {
#line 480 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
#line 480 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_43_43));
#line 480 "hlds_out_util.m"
                }
#line 480 "hlds_out_util.m"
                {
#line 480 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38, hlds__hlds_out__hlds_out_util__V_40_40);
                }
#line 430 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 430 "hlds_out_util.m"
                {
#line 430 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__AfterContexts_17;
#line 430 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;

#line 430 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 430 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 430 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 430 "hlds_out_util.m"
                }
#line 430 "hlds_out_util.m"
                continue;
#line 428 "hlds_out_util.m"
              }
#line 431 "hlds_out_util.m"
            else
#line 432 "hlds_out_util.m"
              {
#line 432 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 432 "hlds_out_util.m"
                {
#line 432 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1, hlds__hlds_out__hlds_out_util__SubContext_13, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28);
                }
#line 434 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 434 "hlds_out_util.m"
                {
#line 434 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__SubContexts_14;
#line 434 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 434 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 434 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 434 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 434 "hlds_out_util.m"
                }
#line 434 "hlds_out_util.m"
                continue;
#line 432 "hlds_out_util.m"
              }
#line 423 "hlds_out_util.m"
          }
#line 422 "hlds_out_util.m"
      }
#line 422 "hlds_out_util.m"
      break;
#line 422 "hlds_out_util.m"
    }
#line 418 "hlds_out_util.m"
}

#line 377 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 377 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 377 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 377 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 377 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 377 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19)
#line 377 "hlds_out_util.m"
{
#line 383 "hlds_out_util.m"
  {
#line 383 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 383 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__MainContext_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "hlds_out_util.m"
      {
#line 383 "hlds_out_util.m"
        *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 383 "hlds_out_util.m"
        *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
#line 383 "hlds_out_util.m"
      }
#line 383 "hlds_out_util.m"
    else
#line 383 "hlds_out_util.m"
      if ((hlds__hlds_out__hlds_out_util__MainContext_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 392 "hlds_out_util.m"
        {
#line 392 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42;

#line 393 "hlds_out_util.m"
          {
#line 393 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42);
          }
#line 394 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 395 "hlds_out_util.m"
          {
#line 395 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8]));
          }
#line 392 "hlds_out_util.m"
        }
#line 383 "hlds_out_util.m"
      else
#line 383 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) == (MR_mktag((MR_Integer) 2))))
#line 398 "hlds_out_util.m"
          {
#line 398 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 398 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__Markers_12;
#line 398 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__ArgIdStr_13;
#line 398 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31;
#line 398 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_34_34;
#line 398 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_35_35;
#line 398 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 1)));

#line 488 "hlds_out_util.m"
            if ((hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16 == (MR_Integer) 0))
#line 488 "hlds_out_util.m"
              {
#line 491 "hlds_out_util.m"
                {
#line 491 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                }
#line 488 "hlds_out_util.m"
              }
#line 488 "hlds_out_util.m"
            else
#line 493 "hlds_out_util.m"
              {
#line 494 "hlds_out_util.m"
                {
#line 494 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
#line 493 "hlds_out_util.m"
              }
#line 400 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 408 "hlds_out_util.m"
            {
#line 408 "hlds_out_util.m"
              hlds__hlds_pred__init_markers_1_p_0(&hlds__hlds_out__hlds_out_util__Markers_12);
            }
#line 409 "hlds_out_util.m"
            {
#line 409 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__CallId_11, hlds__hlds_out__hlds_out_util__ArgNum_65, hlds__hlds_out__hlds_out_util__Markers_12);
            }
#line 410 "hlds_out_util.m"
            {
#line 410 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "hlds_out_util.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 410 "hlds_out_util.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgIdStr_13));
#line 410 "hlds_out_util.m"
            }
#line 410 "hlds_out_util.m"
            {
#line 410 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_35_35));
#line 410 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 410 "hlds_out_util.m"
            }
#line 410 "hlds_out_util.m"
            {
#line 410 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31, hlds__hlds_out__hlds_out_util__V_34_34);
            }
#line 398 "hlds_out_util.m"
          }
#line 383 "hlds_out_util.m"
        else
#line 383 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) == (MR_mktag((MR_Integer) 1))))
#line 385 "hlds_out_util.m"
            {
#line 385 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 385 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 385 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51;
#line 385 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
#line 385 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 385 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_58_58;

#line 386 "hlds_out_util.m"
              {
#line 386 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51);
              }
#line 387 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 388 "hlds_out_util.m"
              {
#line 388 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
              }
#line 390 "hlds_out_util.m"
              {
#line 390 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 390 "hlds_out_util.m"
              }
#line 390 "hlds_out_util.m"
              {
#line 390 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_58_58));
#line 390 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
#line 390 "hlds_out_util.m"
              }
#line 390 "hlds_out_util.m"
              {
#line 390 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 390 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_57_57));
#line 390 "hlds_out_util.m"
              }
#line 389 "hlds_out_util.m"
              {
#line 389 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51, hlds__hlds_out__hlds_out_util__V_54_54);
              }
#line 385 "hlds_out_util.m"
            }
#line 383 "hlds_out_util.m"
          else
#line 412 "hlds_out_util.m"
            {
#line 412 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Source_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 412 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Msg_15;
#line 412 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20;
#line 412 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_26_26;
#line 412 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_27_27;
#line 412 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 412 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 413 "hlds_out_util.m"
              {
#line 413 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
              }
#line 414 "hlds_out_util.m"
              {
#line 414 "hlds_out_util.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__Source_14, &hlds__hlds_out__hlds_out_util__V_71_71);
              }
#line 414 "hlds_out_util.m"
              {
#line 414 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) " unification:\n");
              }
#line 414 "hlds_out_util.m"
              {
#line 414 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_78_78);
              }
#line 415 "hlds_out_util.m"
              {
#line 415 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_out_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 415 "hlds_out_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Msg_15));
#line 415 "hlds_out_util.m"
              }
#line 415 "hlds_out_util.m"
              {
#line 415 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_27_27));
#line 415 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
#line 415 "hlds_out_util.m"
              }
#line 415 "hlds_out_util.m"
              {
#line 415 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20, hlds__hlds_out__hlds_out_util__V_26_26);
              }
#line 412 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 412 "hlds_out_util.m"
            }
#line 383 "hlds_out_util.m"
  }
#line 377 "hlds_out_util.m"
}

#line 208 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
#line 208 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
#line 208 "hlds_out_util.m"
{
#line 1078 "hlds_out_util.m"
  while (MR_TRUE)
#line 1078 "hlds_out_util.m"
    {
#line 1078 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1078 "hlds_out_util.m"
      {
#line 1078 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

#line 1078 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1078 "hlds_out_util.m"
          {
#line 1078 "hlds_out_util.m"
          }
#line 1078 "hlds_out_util.m"
        else
#line 1079 "hlds_out_util.m"
          {
#line 1079 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

#line 1079 "hlds_out_util.m"
            {
#line 1079 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1080 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
#line 1080 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1080 "hlds_out_util.m"
            {
#line 1080 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

#line 1080 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
#line 1080 "hlds_out_util.m"
            }
#line 1080 "hlds_out_util.m"
            continue;
#line 1079 "hlds_out_util.m"
          }
#line 1078 "hlds_out_util.m"
      }
#line 1078 "hlds_out_util.m"
      break;
#line 1078 "hlds_out_util.m"
    }
#line 208 "hlds_out_util.m"
}

#line 202 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
#line 202 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__IntList_4)
#line 202 "hlds_out_util.m"
{
#line 1048 "hlds_out_util.m"
  {
#line 1048 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1048 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "hlds_out_util.m"
      {
#line 1049 "hlds_out_util.m"
        {
#line 1049 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[]");
#line 1049 "hlds_out_util.m"
          return;
        }
#line 1048 "hlds_out_util.m"
      }
#line 1048 "hlds_out_util.m"
    else
#line 1051 "hlds_out_util.m"
      {
#line 1051 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
#line 1051 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

#line 1052 "hlds_out_util.m"
        {
#line 1052 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
#line 1053 "hlds_out_util.m"
        {
#line 1053 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
#line 1054 "hlds_out_util.m"
        {
#line 1054 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
#line 1054 "hlds_out_util.m"
          return;
        }
#line 1051 "hlds_out_util.m"
      }
#line 1048 "hlds_out_util.m"
  }
#line 202 "hlds_out_util.m"
}

#line 195 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
#line 195 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 195 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_7,
#line 195 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_8,
#line 195 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 195 "hlds_out_util.m"
{
#line 1037 "hlds_out_util.m"
  {
#line 1037 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1037 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 1037 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1037 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1037 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 1037 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 1037 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 1038 "hlds_out_util.m"
    {
#line 1038 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__AppendVarNums_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
#line 1039 "hlds_out_util.m"
    {
#line 1039 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__mercury_to_mercury__mercury_mode_to_string_2_f_0(hlds__hlds_out__hlds_out_util__Mode_10, hlds__hlds_out__hlds_out_util__InstVarSet_7);
    }
#line 1039 "hlds_out_util.m"
    {
#line 1039 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 1039 "hlds_out_util.m"
    {
#line 1039 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 1037 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 1037 "hlds_out_util.m"
  }
#line 195 "hlds_out_util.m"
}

#line 193 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 193 "hlds_out_util.m"
{
#line 1033 "hlds_out_util.m"
  {
#line 1033 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1033 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;
#line 1033 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1033 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1033 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_23_23;
#line 1033 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 1033 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;

#line 1038 "hlds_out_util.m"
    {
#line 1038 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_23_23 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Var_21);
    }
#line 1039 "hlds_out_util.m"
    {
#line 1039 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = parse_tree__mercury_to_mercury__mercury_mode_to_string_2_f_0(hlds__hlds_out__hlds_out_util__Mode_22, hlds__hlds_out__hlds_out_util__InstVarSet_8);
    }
#line 1039 "hlds_out_util.m"
    {
#line 1039 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 1039 "hlds_out_util.m"
    {
#line 1039 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_23_23, hlds__hlds_out__hlds_out_util__V_24_24);
    }
#line 1034 "hlds_out_util.m"
    {
#line 1034 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
#line 1034 "hlds_out_util.m"
      return;
    }
#line 1033 "hlds_out_util.m"
  }
#line 193 "hlds_out_util.m"
}

#line 1029 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 1029 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 1029 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
#line 1029 "hlds_out_util.m"
{
#line 1029 "hlds_out_util.m"
  {
#line 1029 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 1029 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 1029 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

#line 1029 "hlds_out_util.m"
    {
#line 1029 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 1029 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
#line 1029 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 1029 "hlds_out_util.m"
  }
#line 1029 "hlds_out_util.m"
}

#line 190 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_7,
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_8,
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_10,
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 190 "hlds_out_util.m"
{
#line 1027 "hlds_out_util.m"
  {
#line 1027 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1027 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 1027 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
#line 1027 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
#line 1027 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 1028 "hlds_out_util.m"
    {
#line 1028 "hlds_out_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_7, hlds__hlds_out__hlds_out_util__Modes_8, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 1029 "hlds_out_util.m"
    {
#line 1029 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
#line 1029 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
#line 1029 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1029 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_9));
#line 1029 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_10));
#line 1029 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__AppendVarNums_11));
#line 1029 "hlds_out_util.m"
    }
#line 1029 "hlds_out_util.m"
    {
#line 1029 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 1031 "hlds_out_util.m"
    {
#line 1031 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
#line 1027 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 1027 "hlds_out_util.m"
  }
#line 190 "hlds_out_util.m"
}

#line 188 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_8,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_9,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_11,
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 188 "hlds_out_util.m"
{
#line 1023 "hlds_out_util.m"
  {
#line 1023 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1023 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 1024 "hlds_out_util.m"
    {
#line 1024 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__Vars_8, hlds__hlds_out__hlds_out_util__Modes_9, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__InstVarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 1024 "hlds_out_util.m"
    {
#line 1024 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 1024 "hlds_out_util.m"
      return;
    }
#line 1023 "hlds_out_util.m"
  }
#line 188 "hlds_out_util.m"
}

#line 997 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 997 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 997 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 997 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 997 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 997 "hlds_out_util.m"
{
#line 997 "hlds_out_util.m"
  {
#line 997 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

#line 997 "hlds_out_util.m"
    {
#line 997 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
#line 997 "hlds_out_util.m"
      return;
    }
#line 997 "hlds_out_util.m"
  }
#line 997 "hlds_out_util.m"
}

#line 178 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(
#line 178 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ProofMap_9,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_10)
#line 178 "hlds_out_util.m"
{
#line 992 "hlds_out_util.m"
  {
#line 992 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 992 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
#line 992 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

#line 993 "hlds_out_util.m"
    {
#line 993 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_7);
    }
#line 994 "hlds_out_util.m"
    {
#line 994 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
#line 995 "hlds_out_util.m"
    {
#line 995 "hlds_out_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__ProofMap_9, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
#line 997 "hlds_out_util.m"
    {
#line 997 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 997 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_5[0]));
#line 997 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1));
#line 997 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 997 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_7));
#line 997 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_8));
#line 997 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__AppendVarNums_10));
#line 997 "hlds_out_util.m"
    }
#line 996 "hlds_out_util.m"
    {
#line 996 "hlds_out_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
#line 996 "hlds_out_util.m"
      return;
    }
#line 992 "hlds_out_util.m"
  }
#line 178 "hlds_out_util.m"
}

#line 880 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 880 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 880 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 880 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 880 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 880 "hlds_out_util.m"
{
#line 880 "hlds_out_util.m"
  {
#line 880 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 880 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105;

#line 880 "hlds_out_util.m"
    {
#line 880 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__883__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105);
    }
#line 880 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105));
#line 880 "hlds_out_util.m"
  }
#line 880 "hlds_out_util.m"
}

#line 173 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_6,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_9)
#line 173 "hlds_out_util.m"
{
#line 869 "hlds_out_util.m"
  {
#line 869 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 869 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_10;

#line 869 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__ConsId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
#line 869 "hlds_out_util.m"
    else
#line 869 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 2))))
#line 968 "hlds_out_util.m"
        {
#line 968 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 968 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 968 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 968 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 968 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 968 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
#line 968 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_132, (MR_Integer) 0)));
#line 968 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_132, (MR_Integer) 1)));

#line 971 "hlds_out_util.m"
          {
#line 971 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_133);
          }
#line 972 "hlds_out_util.m"
          {
#line 972 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_134);
          }
#line 972 "hlds_out_util.m"
          {
#line 972 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) ">");
          }
#line 972 "hlds_out_util.m"
          {
#line 972 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_70_70);
          }
#line 971 "hlds_out_util.m"
          {
#line 971 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_67_67, hlds__hlds_out__hlds_out_util__V_68_68);
          }
#line 971 "hlds_out_util.m"
          {
#line 971 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_66_66);
          }
#line 968 "hlds_out_util.m"
        }
#line 869 "hlds_out_util.m"
      else
#line 869 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 1))))
#line 954 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
#line 869 "hlds_out_util.m"
        else
#line 869 "hlds_out_util.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 951 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
#line 869 "hlds_out_util.m"
          else
#line 869 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 930 "hlds_out_util.m"
              {
#line 930 "hlds_out_util.m"
                MR_Char hlds__hlds_out__hlds_out_util__CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 931 "hlds_out_util.m"
                {
#line 931 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_31);
                }
#line 930 "hlds_out_util.m"
              }
#line 869 "hlds_out_util.m"
            else
#line 869 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 939 "hlds_out_util.m"
                {
#line 939 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 939 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 0)));
#line 939 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 1)));
#line 939 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;
#line 939 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 939 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 939 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 939 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 942 "hlds_out_util.m"
                  {
#line 942 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_36);
                  }
#line 943 "hlds_out_util.m"
                  {
#line 943 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_37);
                  }
#line 943 "hlds_out_util.m"
                  {
#line 943 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_90_90, (MR_String) ">");
                  }
#line 943 "hlds_out_util.m"
                  {
#line 943 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_89_89);
                  }
#line 942 "hlds_out_util.m"
                  {
#line 942 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, hlds__hlds_out__hlds_out_util__V_87_87);
                  }
#line 942 "hlds_out_util.m"
                  {
#line 942 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_85_85);
                  }
#line 939 "hlds_out_util.m"
                }
#line 869 "hlds_out_util.m"
              else
#line 869 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 869 "hlds_out_util.m"
                  {
#line 869 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 869 "hlds_out_util.m"
                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 869 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
#line 869 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 869 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
#line 869 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
#line 869 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 873 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__Qual_6 == (MR_Integer) 1))
#line 874 "hlds_out_util.m"
                      {
#line 874 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_101_101;

#line 875 "hlds_out_util.m"
                        {
#line 875 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_101_101 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                        }
#line 875 "hlds_out_util.m"
                        {
#line 875 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 875 "hlds_out_util.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_101_101));
#line 875 "hlds_out_util.m"
                        }
#line 874 "hlds_out_util.m"
                      }
#line 873 "hlds_out_util.m"
                    else
#line 872 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
#line 877 "hlds_out_util.m"
                    {
#line 877 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
                    }
#line 878 "hlds_out_util.m"
                    {
#line 878 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
                    }
#line 889 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 887 "hlds_out_util.m"
                      {
#line 888 "hlds_out_util.m"
                        MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

#line 888 "hlds_out_util.m"
                        {
#line 888 "hlds_out_util.m"
                          mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[3], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                        }
#line 888 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
#line 887 "hlds_out_util.m"
                      }
#line 889 "hlds_out_util.m"
                    else
#line 890 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 892 "hlds_out_util.m"
                    {
#line 892 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
                    }
#line 896 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "hlds_out_util.m"
                      {
#line 894 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 894 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_118_118;

#line 895 "hlds_out_util.m"
                        {
#line 895 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                        }
#line 895 "hlds_out_util.m"
                        {
#line 895 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_118_118);
                        }
#line 895 "hlds_out_util.m"
                        {
#line 895 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_116_116);
                        }
#line 894 "hlds_out_util.m"
                      }
#line 896 "hlds_out_util.m"
                    else
#line 897 "hlds_out_util.m"
                      {
#line 897 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 901 "hlds_out_util.m"
                        if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "hlds_out_util.m"
                          {
#line 899 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 899 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_115_115;

#line 900 "hlds_out_util.m"
                            {
#line 900 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                            }
#line 900 "hlds_out_util.m"
                            {
#line 900 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_115_115);
                            }
#line 900 "hlds_out_util.m"
                            {
#line 900 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_113_113);
                            }
#line 899 "hlds_out_util.m"
                          }
#line 901 "hlds_out_util.m"
                        else
#line 902 "hlds_out_util.m"
                          {
#line 902 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
#line 902 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_109_109;
#line 902 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_111_111;

#line 903 "hlds_out_util.m"
                            {
#line 903 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__ArgVars_23);
                            }
#line 904 "hlds_out_util.m"
                            {
#line 904 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                            }
#line 904 "hlds_out_util.m"
                            {
#line 904 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_111_111);
                            }
#line 904 "hlds_out_util.m"
                            {
#line 904 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_109_109);
                            }
#line 902 "hlds_out_util.m"
                          }
#line 897 "hlds_out_util.m"
                      }
#line 869 "hlds_out_util.m"
                  }
#line 869 "hlds_out_util.m"
                else
#line 869 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 980 "hlds_out_util.m"
                    {
#line 980 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 980 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 980 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_52_52;
#line 980 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 980 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 980 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredProcId_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 980 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__PredId_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_138, (MR_Integer) 0)));
#line 980 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_138, (MR_Integer) 1)));

#line 983 "hlds_out_util.m"
                      {
#line 983 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_139);
                      }
#line 984 "hlds_out_util.m"
                      {
#line 984 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_140);
                      }
#line 984 "hlds_out_util.m"
                      {
#line 984 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, (MR_String) ">");
                      }
#line 983 "hlds_out_util.m"
                      {
#line 983 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_54_54);
                      }
#line 983 "hlds_out_util.m"
                      {
#line 983 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, hlds__hlds_out__hlds_out_util__V_52_52);
                      }
#line 983 "hlds_out_util.m"
                      {
#line 983 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_50_50);
                      }
#line 980 "hlds_out_util.m"
                    }
#line 869 "hlds_out_util.m"
                  else
#line 869 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 927 "hlds_out_util.m"
                      {
#line 927 "hlds_out_util.m"
                        MR_Float hlds__hlds_out__hlds_out_util__Float_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 928 "hlds_out_util.m"
                        {
#line 928 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_30);
                        }
#line 927 "hlds_out_util.m"
                      }
#line 869 "hlds_out_util.m"
                    else
#line 869 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 966 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
#line 869 "hlds_out_util.m"
                      else
#line 869 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 936 "hlds_out_util.m"
                          {
#line 936 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 937 "hlds_out_util.m"
                            {
#line 937 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_33);
                            }
#line 936 "hlds_out_util.m"
                          }
#line 869 "hlds_out_util.m"
                        else
#line 869 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 924 "hlds_out_util.m"
                            {
#line 924 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 925 "hlds_out_util.m"
                              {
#line 925 "hlds_out_util.m"
                                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
                              }
#line 924 "hlds_out_util.m"
                            }
#line 869 "hlds_out_util.m"
                          else
#line 869 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 933 "hlds_out_util.m"
                              {
#line 933 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__StringConst_32 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 934 "hlds_out_util.m"
                                {
#line 934 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_32);
                                }
#line 933 "hlds_out_util.m"
                              }
#line 869 "hlds_out_util.m"
                            else
#line 869 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 974 "hlds_out_util.m"
                                {
#line 974 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 974 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 974 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 974 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 974 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 974 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 974 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_135, (MR_Integer) 0)));
#line 974 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_135, (MR_Integer) 1)));

#line 977 "hlds_out_util.m"
                                  {
#line 977 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_136);
                                  }
#line 978 "hlds_out_util.m"
                                  {
#line 978 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_137);
                                  }
#line 978 "hlds_out_util.m"
                                  {
#line 978 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, (MR_String) ">");
                                  }
#line 977 "hlds_out_util.m"
                                  {
#line 977 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_62_62);
                                  }
#line 977 "hlds_out_util.m"
                                  {
#line 977 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_60_60);
                                  }
#line 977 "hlds_out_util.m"
                                  {
#line 977 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_58_58);
                                  }
#line 974 "hlds_out_util.m"
                                }
#line 869 "hlds_out_util.m"
                              else
#line 869 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 908 "hlds_out_util.m"
                                  {
#line 908 "hlds_out_util.m"
                                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 912 "hlds_out_util.m"
                                    if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "hlds_out_util.m"
                                      {
#line 910 "hlds_out_util.m"
                                        MR_String hlds__hlds_out__hlds_out_util__V_100_100;

#line 911 "hlds_out_util.m"
                                        {
#line 911 "hlds_out_util.m"
                                          hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_128);
                                        }
#line 911 "hlds_out_util.m"
                                        {
#line 911 "hlds_out_util.m"
                                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_100_100);
                                        }
#line 910 "hlds_out_util.m"
                                      }
#line 912 "hlds_out_util.m"
                                    else
#line 913 "hlds_out_util.m"
                                      {
#line 913 "hlds_out_util.m"
                                        MR_Word hlds__hlds_out__hlds_out_util__ArgVars_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 917 "hlds_out_util.m"
                                        if ((hlds__hlds_out__hlds_out_util__ArgVars_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "hlds_out_util.m"
                                          {
#line 915 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_98_98;

#line 916 "hlds_out_util.m"
                                            {
#line 916 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_128);
                                            }
#line 916 "hlds_out_util.m"
                                            {
#line 916 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_98_98);
                                            }
#line 915 "hlds_out_util.m"
                                          }
#line 917 "hlds_out_util.m"
                                        else
#line 918 "hlds_out_util.m"
                                          {
#line 918 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 918 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__ArgStr_122;

#line 919 "hlds_out_util.m"
                                            {
#line 919 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__ArgStr_122 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__ArgVars_124);
                                            }
#line 920 "hlds_out_util.m"
                                            {
#line 920 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_122, (MR_String) "}");
                                            }
#line 920 "hlds_out_util.m"
                                            {
#line 920 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_95_95);
                                            }
#line 918 "hlds_out_util.m"
                                          }
#line 913 "hlds_out_util.m"
                                      }
#line 908 "hlds_out_util.m"
                                  }
#line 869 "hlds_out_util.m"
                                else
#line 869 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 945 "hlds_out_util.m"
                                    {
#line 945 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__Ctor_39 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_76_76;
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 945 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 945 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__Arity_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 947 "hlds_out_util.m"
                                      {
#line 947 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_75_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_38);
                                      }
#line 948 "hlds_out_util.m"
                                      {
#line 948 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_131);
                                      }
#line 948 "hlds_out_util.m"
                                      {
#line 948 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ">");
                                      }
#line 948 "hlds_out_util.m"
                                      {
#line 948 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_81_81);
                                      }
#line 948 "hlds_out_util.m"
                                      {
#line 948 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_39, hlds__hlds_out__hlds_out_util__V_79_79);
                                      }
#line 947 "hlds_out_util.m"
                                      {
#line 947 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_78_78);
                                      }
#line 947 "hlds_out_util.m"
                                      {
#line 947 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
                                      }
#line 947 "hlds_out_util.m"
                                      {
#line 947 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_74_74);
                                      }
#line 945 "hlds_out_util.m"
                                    }
#line 869 "hlds_out_util.m"
                                  else
#line 869 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 960 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
#line 869 "hlds_out_util.m"
                                    else
#line 963 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
#line 869 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_10;
#line 869 "hlds_out_util.m"
  }
#line 173 "hlds_out_util.m"
}

#line 170 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
#line 170 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 170 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 170 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_9,
#line 170 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_10)
#line 170 "hlds_out_util.m"
{
#line 860 "hlds_out_util.m"
  {
#line 860 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 860 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 862 "hlds_out_util.m"
    {
#line 862 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
#line 861 "hlds_out_util.m"
    {
#line 861 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
#line 861 "hlds_out_util.m"
      return;
    }
#line 860 "hlds_out_util.m"
  }
#line 170 "hlds_out_util.m"
}

#line 778 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1(
#line 778 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 778 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 778 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 778 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 778 "hlds_out_util.m"
{
#line 778 "hlds_out_util.m"
  {
#line 778 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 778 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86;

#line 778 "hlds_out_util.m"
    {
#line 778 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__781__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86);
    }
#line 778 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86));
#line 778 "hlds_out_util.m"
  }
#line 778 "hlds_out_util.m"
}

#line 164 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(
#line 164 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_3)
#line 164 "hlds_out_util.m"
{
#line 774 "hlds_out_util.m"
  {
#line 774 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 774 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_4;

#line 774 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__ConsId_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<typeclass_info_cell_constructor>";
#line 774 "hlds_out_util.m"
    else
#line 774 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 2))))
#line 841 "hlds_out_util.m"
        {
#line 841 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 841 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 841 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 841 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 841 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 841 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)));
#line 841 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_96, (MR_Integer) 0)));
#line 841 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_96, (MR_Integer) 1)));

#line 844 "hlds_out_util.m"
          {
#line 844 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_97);
          }
#line 845 "hlds_out_util.m"
          {
#line 845 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_98);
          }
#line 845 "hlds_out_util.m"
          {
#line 845 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, (MR_String) ">");
          }
#line 845 "hlds_out_util.m"
          {
#line 845 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_58_58);
          }
#line 844 "hlds_out_util.m"
          {
#line 844 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, hlds__hlds_out__hlds_out_util__V_56_56);
          }
#line 844 "hlds_out_util.m"
          {
#line 844 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_54_54);
          }
#line 841 "hlds_out_util.m"
        }
#line 774 "hlds_out_util.m"
      else
#line 774 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 1))))
#line 827 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<type_info_cell_constructor>";
#line 774 "hlds_out_util.m"
        else
#line 774 "hlds_out_util.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 824 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<base_typeclass_info>";
#line 774 "hlds_out_util.m"
          else
#line 774 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 803 "hlds_out_util.m"
              {
#line 803 "hlds_out_util.m"
                MR_Char hlds__hlds_out__hlds_out_util__CharConst_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 804 "hlds_out_util.m"
                {
#line 804 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__String_4 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_19);
                }
#line 803 "hlds_out_util.m"
              }
#line 774 "hlds_out_util.m"
            else
#line 774 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 812 "hlds_out_util.m"
                {
#line 812 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 812 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_22, (MR_Integer) 0)));
#line 812 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_22, (MR_Integer) 1)));
#line 812 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 812 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 812 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 812 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_77_77;
#line 812 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 815 "hlds_out_util.m"
                  {
#line 815 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_24);
                  }
#line 816 "hlds_out_util.m"
                  {
#line 816 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_25);
                  }
#line 816 "hlds_out_util.m"
                  {
#line 816 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_78_78, (MR_String) ">");
                  }
#line 816 "hlds_out_util.m"
                  {
#line 816 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_77_77);
                  }
#line 815 "hlds_out_util.m"
                  {
#line 815 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                  }
#line 815 "hlds_out_util.m"
                  {
#line 815 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_73_73);
                  }
#line 812 "hlds_out_util.m"
                }
#line 774 "hlds_out_util.m"
              else
#line 774 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 774 "hlds_out_util.m"
                  {
#line 774 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 774 "hlds_out_util.m"
                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 2)));
#line 774 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString0_8;
#line 774 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString1_14;
#line 774 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString_15;
#line 774 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__ArityString_16;
#line 774 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 774 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 3)));

#line 775 "hlds_out_util.m"
                    {
#line 775 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString0_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_5);
                    }
#line 776 "hlds_out_util.m"
                    {
#line 776 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_8, (MR_Char) 42);
                    }
#line 787 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 785 "hlds_out_util.m"
                      {
#line 786 "hlds_out_util.m"
                        MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14;

#line 786 "hlds_out_util.m"
                        {
#line 786 "hlds_out_util.m"
                          mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_8, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14);
                        }
#line 786 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__SymNameString1_14 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14);
#line 785 "hlds_out_util.m"
                      }
#line 787 "hlds_out_util.m"
                    else
#line 788 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString1_14 = hlds__hlds_out__hlds_out_util__SymNameString0_8;
#line 790 "hlds_out_util.m"
                    {
#line 790 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString_15 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_14);
                    }
#line 791 "hlds_out_util.m"
                    {
#line 791 "hlds_out_util.m"
                      mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Arity_6, &hlds__hlds_out__hlds_out_util__ArityString_16);
                    }
#line 792 "hlds_out_util.m"
                    {
#line 792 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__ArityString_16);
                    }
#line 792 "hlds_out_util.m"
                    {
#line 792 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_15, hlds__hlds_out__hlds_out_util__V_89_89);
                    }
#line 774 "hlds_out_util.m"
                  }
#line 774 "hlds_out_util.m"
                else
#line 774 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 853 "hlds_out_util.m"
                    {
#line 853 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 853 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_39_39;
#line 853 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_40_40;
#line 853 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_42_42;
#line 853 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 853 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredProcId_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 853 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__PredId_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_102, (MR_Integer) 0)));
#line 853 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_102, (MR_Integer) 1)));

#line 856 "hlds_out_util.m"
                      {
#line 856 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_39_39 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_103);
                      }
#line 857 "hlds_out_util.m"
                      {
#line 857 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_104);
                      }
#line 857 "hlds_out_util.m"
                      {
#line 857 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_42_42 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_43_43, (MR_String) ">");
                      }
#line 856 "hlds_out_util.m"
                      {
#line 856 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_42_42);
                      }
#line 856 "hlds_out_util.m"
                      {
#line 856 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_39_39, hlds__hlds_out__hlds_out_util__V_40_40);
                      }
#line 856 "hlds_out_util.m"
                      {
#line 856 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
#line 853 "hlds_out_util.m"
                    }
#line 774 "hlds_out_util.m"
                  else
#line 774 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 800 "hlds_out_util.m"
                      {
#line 800 "hlds_out_util.m"
                        MR_Float hlds__hlds_out__hlds_out_util__Float_18 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 801 "hlds_out_util.m"
                        {
#line 801 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_18);
                        }
#line 800 "hlds_out_util.m"
                      }
#line 774 "hlds_out_util.m"
                    else
#line 774 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 839 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<ground_term_const>";
#line 774 "hlds_out_util.m"
                      else
#line 774 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 809 "hlds_out_util.m"
                          {
#line 809 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 810 "hlds_out_util.m"
                            {
#line 810 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_21);
                            }
#line 809 "hlds_out_util.m"
                          }
#line 774 "hlds_out_util.m"
                        else
#line 774 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 797 "hlds_out_util.m"
                            {
#line 797 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__Int_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 798 "hlds_out_util.m"
                              {
#line 798 "hlds_out_util.m"
                                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_17, &hlds__hlds_out__hlds_out_util__String_4);
                              }
#line 797 "hlds_out_util.m"
                            }
#line 774 "hlds_out_util.m"
                          else
#line 774 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 806 "hlds_out_util.m"
                              {
#line 806 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__StringConst_20 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 807 "hlds_out_util.m"
                                {
#line 807 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__String_4 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_20);
                                }
#line 806 "hlds_out_util.m"
                              }
#line 774 "hlds_out_util.m"
                            else
#line 774 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 847 "hlds_out_util.m"
                                {
#line 847 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 847 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 847 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 847 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 847 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 847 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 847 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_99, (MR_Integer) 0)));
#line 847 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_99, (MR_Integer) 1)));

#line 850 "hlds_out_util.m"
                                  {
#line 850 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_100);
                                  }
#line 851 "hlds_out_util.m"
                                  {
#line 851 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_101);
                                  }
#line 851 "hlds_out_util.m"
                                  {
#line 851 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) ">");
                                  }
#line 850 "hlds_out_util.m"
                                  {
#line 850 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_50_50);
                                  }
#line 850 "hlds_out_util.m"
                                  {
#line 850 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                                  }
#line 850 "hlds_out_util.m"
                                  {
#line 850 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_46_46);
                                  }
#line 847 "hlds_out_util.m"
                                }
#line 774 "hlds_out_util.m"
                              else
#line 774 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 794 "hlds_out_util.m"
                                  {
#line 794 "hlds_out_util.m"
                                    MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 794 "hlds_out_util.m"
                                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 795 "hlds_out_util.m"
                                    {
#line 795 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_94);
                                    }
#line 795 "hlds_out_util.m"
                                    {
#line 795 "hlds_out_util.m"
                                      return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_82_82);
                                    }
#line 794 "hlds_out_util.m"
                                  }
#line 774 "hlds_out_util.m"
                                else
#line 774 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 818 "hlds_out_util.m"
                                    {
#line 818 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__Module_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__Ctor_27 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 2)));
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 818 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 818 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__Arity_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 3)));

#line 820 "hlds_out_util.m"
                                      {
#line 820 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_63_63 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_26);
                                      }
#line 821 "hlds_out_util.m"
                                      {
#line 821 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_95);
                                      }
#line 821 "hlds_out_util.m"
                                      {
#line 821 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_70_70, (MR_String) ">");
                                      }
#line 821 "hlds_out_util.m"
                                      {
#line 821 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_69_69);
                                      }
#line 821 "hlds_out_util.m"
                                      {
#line 821 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_27, hlds__hlds_out__hlds_out_util__V_67_67);
                                      }
#line 820 "hlds_out_util.m"
                                      {
#line 820 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_66_66);
                                      }
#line 820 "hlds_out_util.m"
                                      {
#line 820 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, hlds__hlds_out__hlds_out_util__V_64_64);
                                      }
#line 820 "hlds_out_util.m"
                                      {
#line 820 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_62_62);
                                      }
#line 818 "hlds_out_util.m"
                                    }
#line 774 "hlds_out_util.m"
                                  else
#line 774 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 833 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<type_info_const>";
#line 774 "hlds_out_util.m"
                                    else
#line 836 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<typeclass_info_const>";
#line 774 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_4;
#line 774 "hlds_out_util.m"
  }
#line 164 "hlds_out_util.m"
}

#line 163 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_4)
#line 163 "hlds_out_util.m"
{
#line 769 "hlds_out_util.m"
  {
#line 769 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 769 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_8_8;

#line 770 "hlds_out_util.m"
    {
#line 770 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_8_8 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_4);
    }
#line 770 "hlds_out_util.m"
    {
#line 770 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_8_8);
#line 770 "hlds_out_util.m"
      return;
    }
#line 769 "hlds_out_util.m"
  }
#line 163 "hlds_out_util.m"
}

#line 160 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_7,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_8,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_10,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 160 "hlds_out_util.m"
{
#line 663 "hlds_out_util.m"
  while (MR_TRUE)
#line 663 "hlds_out_util.m"
    {
#line 663 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 663 "hlds_out_util.m"
      {
#line 663 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 663 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

#line 663 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__ConsId_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "hlds_out_util.m"
          {
#line 731 "hlds_out_util.m"
            {
#line 731 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
            }
#line 730 "hlds_out_util.m"
          }
#line 663 "hlds_out_util.m"
        else
#line 663 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 2))))
#line 747 "hlds_out_util.m"
            {
#line 747 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_42;
#line 747 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_43;
#line 747 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 747 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)));
#line 747 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredId_146;

#line 748 "hlds_out_util.m"
              {
#line 748 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145);
              }
#line 748 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__PredId_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 0)));
#line 748 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 1)));
#line 749 "hlds_out_util.m"
              {
#line 749 "hlds_out_util.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_42, &hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 751 "hlds_out_util.m"
              {
#line 751 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_65_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_146);
              }
#line 752 "hlds_out_util.m"
              {
#line 752 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 752 "hlds_out_util.m"
              {
#line 752 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_69_69, (MR_String) ")");
              }
#line 752 "hlds_out_util.m"
              {
#line 752 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_68_68);
              }
#line 752 "hlds_out_util.m"
              {
#line 752 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__V_66_66);
              }
#line 751 "hlds_out_util.m"
              {
#line 751 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_64_64);
              }
#line 747 "hlds_out_util.m"
            }
#line 663 "hlds_out_util.m"
          else
#line 663 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 1))))
#line 725 "hlds_out_util.m"
              {
#line 726 "hlds_out_util.m"
                {
#line 726 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                }
#line 725 "hlds_out_util.m"
              }
#line 663 "hlds_out_util.m"
            else
#line 663 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 718 "hlds_out_util.m"
                {
#line 718 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 4)));
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_98_98;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_108_108;
#line 718 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 718 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 0)));
#line 718 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 1)));
#line 718 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));

#line 721 "hlds_out_util.m"
                  {
#line 721 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_95_95 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_142);
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_101_101 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_143);
                  }
#line 723 "hlds_out_util.m"
                  {
#line 723 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_144);
                  }
#line 723 "hlds_out_util.m"
                  {
#line 723 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_35, (MR_String) ")");
                  }
#line 723 "hlds_out_util.m"
                  {
#line 723 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_108_108);
                  }
#line 723 "hlds_out_util.m"
                  {
#line 723 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_106_106);
                  }
#line 723 "hlds_out_util.m"
                  {
#line 723 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_104_104);
                  }
#line 723 "hlds_out_util.m"
                  {
#line 723 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_102_102);
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_98_98);
                  }
#line 721 "hlds_out_util.m"
                  {
#line 721 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, hlds__hlds_out__hlds_out_util__V_96_96);
                  }
#line 721 "hlds_out_util.m"
                  {
#line 721 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_94_94);
                  }
#line 718 "hlds_out_util.m"
                }
#line 663 "hlds_out_util.m"
              else
#line 663 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 686 "hlds_out_util.m"
                  {
#line 686 "hlds_out_util.m"
                    MR_Char hlds__hlds_out__hlds_out_util__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 686 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_127_127;
#line 686 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_128_128;

#line 693 "hlds_out_util.m"
                    {
#line 693 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_128_128 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_21);
                    }
#line 693 "hlds_out_util.m"
                    {
#line 693 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_127_127 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_128_128, (MR_String) ")");
                    }
#line 693 "hlds_out_util.m"
                    {
#line 693 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_127_127);
                    }
#line 686 "hlds_out_util.m"
                  }
#line 663 "hlds_out_util.m"
                else
#line 663 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 702 "hlds_out_util.m"
                    {
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredId_25;
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredInfo_27;
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredModule_28;
#line 702 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__PredName_29;
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredSymName_30;
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredConsId_31;
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_121_121;
#line 702 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__V_122_122;
#line 702 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_123_123;
#line 703 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__V_26_26;

#line 703 "hlds_out_util.m"
                      {
#line 703 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_121_121 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23);
                      }
#line 703 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 0)));
#line 703 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 1)));
#line 704 "hlds_out_util.m"
                      {
#line 704 "hlds_out_util.m"
                        hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_25, &hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 705 "hlds_out_util.m"
                      {
#line 705 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 706 "hlds_out_util.m"
                      {
#line 706 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 707 "hlds_out_util.m"
                      {
#line 707 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_28));
#line 707 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_29));
#line 707 "hlds_out_util.m"
                      }
#line 708 "hlds_out_util.m"
                      {
#line 708 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_122_122 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_8);
                      }
#line 709 "hlds_out_util.m"
                      {
#line 709 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_123_123 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                      }
#line 708 "hlds_out_util.m"
                      {
#line 708 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 708 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 708 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_30));
#line 708 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_122_122));
#line 708 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
#line 708 "hlds_out_util.m"
                      }
#line 710 "hlds_out_util.m"
                      /* direct tailcall eliminated */
#line 710 "hlds_out_util.m"
                      {
#line 710 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_7 = hlds__hlds_out__hlds_out_util__PredConsId_31;

#line 710 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ConsId_7 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_7;
#line 710 "hlds_out_util.m"
                      }
#line 710 "hlds_out_util.m"
                      continue;
#line 702 "hlds_out_util.m"
                    }
#line 663 "hlds_out_util.m"
                  else
#line 663 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 663 "hlds_out_util.m"
                      {
#line 663 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 663 "hlds_out_util.m"
                        MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 663 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));

#line 668 "hlds_out_util.m"
                        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 665 "hlds_out_util.m"
                          {
#line 665 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
#line 665 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
#line 665 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_137_137;

#line 666 "hlds_out_util.m"
                            {
#line 666 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 666 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
#line 666 "hlds_out_util.m"
                            }
#line 666 "hlds_out_util.m"
                            {
#line 666 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                            }
#line 665 "hlds_out_util.m"
                          }
#line 668 "hlds_out_util.m"
                        else
#line 669 "hlds_out_util.m"
                          {
#line 669 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_135_135;
#line 669 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

#line 670 "hlds_out_util.m"
                            {
#line 670 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 670 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_135_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_138));
#line 670 "hlds_out_util.m"
                            }
#line 670 "hlds_out_util.m"
                            {
#line 670 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__V_135_135, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                            }
#line 669 "hlds_out_util.m"
                          }
#line 663 "hlds_out_util.m"
                      }
#line 663 "hlds_out_util.m"
                    else
#line 663 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 761 "hlds_out_util.m"
                        {
#line 761 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__V_44_44;
#line 761 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 761 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 761 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 761 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 761 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 761 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 761 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__PredId_152;
#line 761 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_153;
#line 761 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_154;

#line 762 "hlds_out_util.m"
                          {
#line 762 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_44_44 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151);
                          }
#line 762 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__PredId_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 0)));
#line 762 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__ProcId_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 1)));
#line 763 "hlds_out_util.m"
                          {
#line 763 "hlds_out_util.m"
                            hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_153, &hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                          }
#line 765 "hlds_out_util.m"
                          {
#line 765 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_47_47 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_152);
                          }
#line 766 "hlds_out_util.m"
                          {
#line 766 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                          }
#line 766 "hlds_out_util.m"
                          {
#line 766 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) "))");
                          }
#line 766 "hlds_out_util.m"
                          {
#line 766 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_50_50);
                          }
#line 766 "hlds_out_util.m"
                          {
#line 766 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                          }
#line 765 "hlds_out_util.m"
                          {
#line 765 "hlds_out_util.m"
                            return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_46_46);
                          }
#line 761 "hlds_out_util.m"
                        }
#line 663 "hlds_out_util.m"
                      else
#line 663 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 682 "hlds_out_util.m"
                          {
#line 682 "hlds_out_util.m"
                            MR_Float hlds__hlds_out__hlds_out_util__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 682 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_130_130;

#line 683 "hlds_out_util.m"
                            {
#line 683 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 683 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_20);
#line 683 "hlds_out_util.m"
                            }
#line 683 "hlds_out_util.m"
                            {
#line 683 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_130_130, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                            }
#line 682 "hlds_out_util.m"
                          }
#line 663 "hlds_out_util.m"
                        else
#line 663 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 741 "hlds_out_util.m"
                            {
#line 741 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 741 "hlds_out_util.m"
                              MR_Word hlds__hlds_out__hlds_out_util__SubConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 741 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__SubStr_41;
#line 741 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 741 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 741 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 741 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_77_77;

#line 742 "hlds_out_util.m"
                              {
#line 742 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__SubStr_41 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__SubConsId_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                              }
#line 744 "hlds_out_util.m"
                              {
#line 744 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_39);
                              }
#line 745 "hlds_out_util.m"
                              {
#line 745 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_41, (MR_String) ")");
                              }
#line 744 "hlds_out_util.m"
                              {
#line 744 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_77_77);
                              }
#line 744 "hlds_out_util.m"
                              {
#line 744 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                              }
#line 744 "hlds_out_util.m"
                              {
#line 744 "hlds_out_util.m"
                                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_73_73);
                              }
#line 741 "hlds_out_util.m"
                            }
#line 663 "hlds_out_util.m"
                          else
#line 663 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 699 "hlds_out_util.m"
                              {
#line 699 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));

#line 700 "hlds_out_util.m"
                                {
#line 700 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_139);
                                }
#line 699 "hlds_out_util.m"
                              }
#line 663 "hlds_out_util.m"
                            else
#line 663 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 678 "hlds_out_util.m"
                                {
#line 678 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 678 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

#line 679 "hlds_out_util.m"
                                  {
#line 679 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "hlds_out_util.m"
                                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
#line 679 "hlds_out_util.m"
                                  }
#line 679 "hlds_out_util.m"
                                  {
#line 679 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                                  }
#line 678 "hlds_out_util.m"
                                }
#line 663 "hlds_out_util.m"
                              else
#line 663 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 695 "hlds_out_util.m"
                                  {
#line 695 "hlds_out_util.m"
                                    MR_String hlds__hlds_out__hlds_out_util__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 695 "hlds_out_util.m"
                                    MR_Word hlds__hlds_out__hlds_out_util__V_125_125;

#line 696 "hlds_out_util.m"
                                    {
#line 696 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__V_125_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "hlds_out_util.m"
                                      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_125_125, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_22));
#line 696 "hlds_out_util.m"
                                    }
#line 696 "hlds_out_util.m"
                                    {
#line 696 "hlds_out_util.m"
                                      return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_125_125, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                                    }
#line 695 "hlds_out_util.m"
                                  }
#line 663 "hlds_out_util.m"
                                else
#line 663 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 754 "hlds_out_util.m"
                                    {
#line 754 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__V_53_53;
#line 754 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 754 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 754 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_57_57;
#line 754 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 754 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 754 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 754 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__PredId_148;
#line 754 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_149;
#line 754 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_150;

#line 755 "hlds_out_util.m"
                                      {
#line 755 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_53_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147);
                                      }
#line 755 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__PredId_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 755 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__ProcId_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 756 "hlds_out_util.m"
                                      {
#line 756 "hlds_out_util.m"
                                        hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_149, &hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                                      }
#line 758 "hlds_out_util.m"
                                      {
#line 758 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_56_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_148);
                                      }
#line 759 "hlds_out_util.m"
                                      {
#line 759 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                                      }
#line 759 "hlds_out_util.m"
                                      {
#line 759 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, (MR_String) "))");
                                      }
#line 759 "hlds_out_util.m"
                                      {
#line 759 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_59_59);
                                      }
#line 759 "hlds_out_util.m"
                                      {
#line 759 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__V_57_57);
                                      }
#line 758 "hlds_out_util.m"
                                      {
#line 758 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", hlds__hlds_out__hlds_out_util__V_55_55);
                                      }
#line 754 "hlds_out_util.m"
                                    }
#line 663 "hlds_out_util.m"
                                  else
#line 663 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 674 "hlds_out_util.m"
                                      {
#line 675 "hlds_out_util.m"
                                        {
#line 675 "hlds_out_util.m"
                                          return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[3], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                                        }
#line 674 "hlds_out_util.m"
                                      }
#line 663 "hlds_out_util.m"
                                    else
#line 663 "hlds_out_util.m"
                                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 713 "hlds_out_util.m"
                                        {
#line 713 "hlds_out_util.m"
                                          MR_Integer hlds__hlds_out__hlds_out_util__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_118_118;
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_119_119;
#line 713 "hlds_out_util.m"
                                          MR_Word hlds__hlds_out__hlds_out_util__Module_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 713 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__Name_141 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));

#line 715 "hlds_out_util.m"
                                          {
#line 715 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_112_112 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_140);
                                          }
#line 716 "hlds_out_util.m"
                                          {
#line 716 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_32);
                                          }
#line 716 "hlds_out_util.m"
                                          {
#line 716 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_119_119, (MR_String) ")");
                                          }
#line 716 "hlds_out_util.m"
                                          {
#line 716 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_118_118);
                                          }
#line 716 "hlds_out_util.m"
                                          {
#line 716 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_141, hlds__hlds_out__hlds_out_util__V_116_116);
                                          }
#line 716 "hlds_out_util.m"
                                          {
#line 716 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_115_115);
                                          }
#line 716 "hlds_out_util.m"
                                          {
#line 716 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_112_112, hlds__hlds_out__hlds_out_util__V_113_113);
                                          }
#line 715 "hlds_out_util.m"
                                          {
#line 715 "hlds_out_util.m"
                                            return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_111_111);
                                          }
#line 713 "hlds_out_util.m"
                                        }
#line 663 "hlds_out_util.m"
                                      else
#line 663 "hlds_out_util.m"
                                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 735 "hlds_out_util.m"
                                          {
#line 735 "hlds_out_util.m"
                                            MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 735 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 735 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 736 "hlds_out_util.m"
                                            {
#line 736 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_37);
                                            }
#line 736 "hlds_out_util.m"
                                            {
#line 736 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_85_85, (MR_String) ")");
                                            }
#line 736 "hlds_out_util.m"
                                            {
#line 736 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_84_84);
                                            }
#line 735 "hlds_out_util.m"
                                          }
#line 663 "hlds_out_util.m"
                                        else
#line 738 "hlds_out_util.m"
                                          {
#line 738 "hlds_out_util.m"
                                            MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 738 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_80_80;
#line 738 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_81_81;

#line 739 "hlds_out_util.m"
                                            {
#line 739 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_38);
                                            }
#line 739 "hlds_out_util.m"
                                            {
#line 739 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_81_81, (MR_String) ")");
                                            }
#line 739 "hlds_out_util.m"
                                            {
#line 739 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_80_80);
                                            }
#line 738 "hlds_out_util.m"
                                          }
#line 663 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__Str_12;
#line 663 "hlds_out_util.m"
      }
#line 663 "hlds_out_util.m"
      break;
#line 663 "hlds_out_util.m"
    }
#line 160 "hlds_out_util.m"
}

#line 158 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_11,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 158 "hlds_out_util.m"
{
#line 656 "hlds_out_util.m"
  {
#line 656 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 656 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 657 "hlds_out_util.m"
    {
#line 657 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ConsId_8, hlds__hlds_out__hlds_out_util__ArgVars_9, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__ModuleInfo_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 657 "hlds_out_util.m"
    {
#line 657 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 657 "hlds_out_util.m"
      return;
    }
#line 656 "hlds_out_util.m"
  }
#line 158 "hlds_out_util.m"
}

#line 151 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_7,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_9,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 151 "hlds_out_util.m"
{
#line 647 "hlds_out_util.m"
  {
#line 647 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 647 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 647 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 647 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
#line 647 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
#line 647 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
#line 647 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

#line 648 "hlds_out_util.m"
    {
#line 648 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_7);
    }
#line 649 "hlds_out_util.m"
    {
#line 649 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
#line 650 "hlds_out_util.m"
    {
#line 650 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 650 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_9));
#line 650 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
#line 650 "hlds_out_util.m"
    }
#line 651 "hlds_out_util.m"
    {
#line 651 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 653 "hlds_out_util.m"
    {
#line 653 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
#line 653 "hlds_out_util.m"
    {
#line 653 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 647 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 647 "hlds_out_util.m"
  }
#line 151 "hlds_out_util.m"
}

#line 149 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_8,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_10,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_11,
#line 149 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 149 "hlds_out_util.m"
{
#line 642 "hlds_out_util.m"
  {
#line 642 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 642 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 643 "hlds_out_util.m"
    {
#line 643 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleName_8, hlds__hlds_out__hlds_out_util__Functor_9, hlds__hlds_out__hlds_out_util__ArgTerms_10, hlds__hlds_out__hlds_out_util__VarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 643 "hlds_out_util.m"
    {
#line 643 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 643 "hlds_out_util.m"
      return;
    }
#line 642 "hlds_out_util.m"
  }
#line 149 "hlds_out_util.m"
}

#line 146 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
#line 146 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_7,
#line 146 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 146 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9,
#line 146 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 146 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11)
#line 146 "hlds_out_util.m"
{
#line 635 "hlds_out_util.m"
  {
#line 635 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 635 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 635 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 635 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 635 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
#line 635 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 635 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 635 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 635 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 636 "hlds_out_util.m"
    {
#line 636 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_7);
    }
#line 623 "hlds_out_util.m"
    {
#line 623 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5775 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 625 "hlds_out_util.m"
    }
#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 639 "hlds_out_util.m"
    {
#line 639 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
#line 639 "hlds_out_util.m"
    {
#line 639 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 635 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 635 "hlds_out_util.m"
  }
#line 146 "hlds_out_util.m"
}

#line 144 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_8,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_10,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_11,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_12)
#line 144 "hlds_out_util.m"
{
#line 630 "hlds_out_util.m"
  {
#line 630 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 630 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 631 "hlds_out_util.m"
    {
#line 631 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleName_8, hlds__hlds_out__hlds_out_util__Functor_9, hlds__hlds_out__hlds_out_util__ArgVars_10, hlds__hlds_out__hlds_out_util__VarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 631 "hlds_out_util.m"
    {
#line 631 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 631 "hlds_out_util.m"
      return;
    }
#line 630 "hlds_out_util.m"
  }
#line 144 "hlds_out_util.m"
}

#line 141 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_7,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_8,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_10,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_11)
#line 141 "hlds_out_util.m"
{
#line 622 "hlds_out_util.m"
  {
#line 622 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 622 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 622 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
#line 622 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
#line 622 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
#line 622 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

#line 623 "hlds_out_util.m"
    {
#line 623 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
#line 5890 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_8, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_7));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
#line 625 "hlds_out_util.m"
    }
#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_10, hlds__hlds_out__hlds_out_util__NextToGraphicToken_11, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 622 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 622 "hlds_out_util.m"
  }
#line 141 "hlds_out_util.m"
}

#line 139 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_10,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_11,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_12)
#line 139 "hlds_out_util.m"
{
#line 617 "hlds_out_util.m"
  {
#line 617 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 617 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 617 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 617 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 617 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 617 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 623 "hlds_out_util.m"
    {
#line 623 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5956 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 625 "hlds_out_util.m"
    }
#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, hlds__hlds_out__hlds_out_util__NextToGraphicToken_12, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 618 "hlds_out_util.m"
    {
#line 618 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 618 "hlds_out_util.m"
      return;
    }
#line 617 "hlds_out_util.m"
  }
#line 139 "hlds_out_util.m"
}

#line 137 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_6,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_7,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 137 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9)
#line 137 "hlds_out_util.m"
{
#line 612 "hlds_out_util.m"
  {
#line 612 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 612 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 612 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
#line 612 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
#line 612 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
#line 612 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

#line 623 "hlds_out_util.m"
    {
#line 623 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
#line 6025 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_7, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_6));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
#line 625 "hlds_out_util.m"
    }
#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
#line 612 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 612 "hlds_out_util.m"
  }
#line 137 "hlds_out_util.m"
}

#line 135 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_7,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_8,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_10)
#line 135 "hlds_out_util.m"
{
#line 608 "hlds_out_util.m"
  {
#line 608 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
#line 608 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

#line 623 "hlds_out_util.m"
    {
#line 623 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
#line 6089 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_8, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_7));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
#line 625 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
#line 625 "hlds_out_util.m"
    }
#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_10, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
#line 618 "hlds_out_util.m"
    {
#line 618 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
#line 618 "hlds_out_util.m"
      return;
    }
#line 608 "hlds_out_util.m"
  }
#line 135 "hlds_out_util.m"
}

#line 127 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
#line 127 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__CallId_5,
#line 127 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_6,
#line 127 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredMarkers_7)
#line 127 "hlds_out_util.m"
{
#line 522 "hlds_out_util.m"
  {
#line 522 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
#line 522 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 522 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
#line 522 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
#line 522 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

#line 533 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 532 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
#line 533 "hlds_out_util.m"
    else
#line 534 "hlds_out_util.m"
      {
#line 534 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 563 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 573 "hlds_out_util.m"
          {
#line 573 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 594 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) == (MR_mktag((MR_Integer) 0))))
#line 575 "hlds_out_util.m"
              {
#line 575 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 575 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
#line 575 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 577 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
#line 577 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 578 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
#line 581 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 580 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 581 "hlds_out_util.m"
                else
#line 584 "hlds_out_util.m"
                  {
#line 584 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__Main_28;
#line 584 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
#line 584 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__Expl_30;
#line 584 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 584 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_49_49;
#line 584 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_51_51;

#line 584 "hlds_out_util.m"
                    {
#line 584 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                    }
#line 584 "hlds_out_util.m"
                    {
#line 584 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                    }
#line 585 "hlds_out_util.m"
                    {
#line 585 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                    }
#line 586 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
#line 588 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 587 "hlds_out_util.m"
                      {
#line 587 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_40_40;

#line 587 "hlds_out_util.m"
                        {
#line 587 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                        }
#line 587 "hlds_out_util.m"
                        {
#line 587 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                        }
#line 587 "hlds_out_util.m"
                      }
#line 588 "hlds_out_util.m"
                    else
#line 589 "hlds_out_util.m"
                      {
#line 589 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 589 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_44_44;
#line 589 "hlds_out_util.m"
                        MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
#line 589 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_47_47;

#line 589 "hlds_out_util.m"
                        {
#line 589 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                        }
#line 590 "hlds_out_util.m"
                        {
#line 590 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                        }
#line 590 "hlds_out_util.m"
                        {
#line 590 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                        }
#line 589 "hlds_out_util.m"
                        {
#line 589 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                        }
#line 589 "hlds_out_util.m"
                      }
#line 592 "hlds_out_util.m"
                    {
#line 592 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                    }
#line 592 "hlds_out_util.m"
                    {
#line 592 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                    }
#line 592 "hlds_out_util.m"
                    {
#line 592 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                    }
#line 584 "hlds_out_util.m"
                  }
#line 575 "hlds_out_util.m"
              }
#line 594 "hlds_out_util.m"
            else
#line 598 "hlds_out_util.m"
              {
#line 598 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_36_36;

#line 599 "hlds_out_util.m"
                {
#line 599 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 599 "hlds_out_util.m"
                {
#line 599 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                }
#line 598 "hlds_out_util.m"
              }
#line 573 "hlds_out_util.m"
          }
#line 563 "hlds_out_util.m"
        else
#line 563 "hlds_out_util.m"
          {
#line 563 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
#line 563 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
#line 563 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 563 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

#line 563 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 563 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 563 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
#line 565 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
#line 565 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 566 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
#line 569 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 568 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 569 "hlds_out_util.m"
            else
#line 570 "hlds_out_util.m"
              {
#line 570 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

#line 570 "hlds_out_util.m"
                {
#line 570 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 570 "hlds_out_util.m"
                {
#line 570 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
#line 570 "hlds_out_util.m"
              }
#line 563 "hlds_out_util.m"
          }
#line 534 "hlds_out_util.m"
        {
#line 534 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
#line 534 "hlds_out_util.m"
      }
#line 542 "hlds_out_util.m"
    {
#line 542 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
#line 543 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
#line 543 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

#line 542 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
#line 542 "hlds_out_util.m"
      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 542 "hlds_out_util.m"
        {
#line 542 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 543 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
#line 543 "hlds_out_util.m"
          if (hlds__hlds_out__hlds_out_util__succeeded)
#line 543 "hlds_out_util.m"
            {
#line 543 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
#line 543 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
#line 543 "hlds_out_util.m"
            }
#line 543 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 542 "hlds_out_util.m"
        }
#line 542 "hlds_out_util.m"
    }
#line 544 "hlds_out_util.m"
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
#line 550 "hlds_out_util.m"
      {
#line 550 "hlds_out_util.m"
        {
#line 550 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 11);
        }
#line 550 "hlds_out_util.m"
      }
#line 554 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 553 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
#line 554 "hlds_out_util.m"
    else
#line 555 "hlds_out_util.m"
      {
#line 555 "hlds_out_util.m"
        {
#line 555 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
#line 555 "hlds_out_util.m"
      }
#line 502 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 504 "hlds_out_util.m"
      {
#line 504 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 505 "hlds_out_util.m"
        {
#line 505 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_63);
        }
#line 504 "hlds_out_util.m"
      }
#line 502 "hlds_out_util.m"
    else
#line 502 "hlds_out_util.m"
      {
#line 502 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 503 "hlds_out_util.m"
        {
#line 503 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_62);
        }
#line 502 "hlds_out_util.m"
      }
#line 557 "hlds_out_util.m"
    {
#line 557 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 522 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 522 "hlds_out_util.m"
  }
#line 127 "hlds_out_util.m"
}

#line 120 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
#line 120 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 120 "hlds_out_util.m"
{
#line 517 "hlds_out_util.m"
  {
#line 517 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 517 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 517 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 2))
#line 519 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "equiv_type_cast";
#line 517 "hlds_out_util.m"
    else
#line 517 "hlds_out_util.m"
      if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 3))
#line 520 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exists_cast";
#line 517 "hlds_out_util.m"
      else
#line 517 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 0))
#line 517 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_cast";
#line 517 "hlds_out_util.m"
        else
#line 518 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_inst_cast";
#line 517 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 517 "hlds_out_util.m"
  }
#line 120 "hlds_out_util.m"
}

#line 118 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
#line 118 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 118 "hlds_out_util.m"
{
#line 507 "hlds_out_util.m"
  {
#line 507 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 507 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 507 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 514 "hlds_out_util.m"
      {
#line 514 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__CastType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 517 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__CastType_16 == (MR_Integer) 2))
#line 519 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "equiv_type_cast";
#line 517 "hlds_out_util.m"
        else
#line 517 "hlds_out_util.m"
          if ((hlds__hlds_out__hlds_out_util__CastType_16 == (MR_Integer) 3))
#line 520 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exists_cast";
#line 517 "hlds_out_util.m"
          else
#line 517 "hlds_out_util.m"
            if ((hlds__hlds_out__hlds_out_util__CastType_16 == (MR_Integer) 0))
#line 517 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_cast";
#line 517 "hlds_out_util.m"
            else
#line 518 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_inst_cast";
#line 514 "hlds_out_util.m"
      }
#line 507 "hlds_out_util.m"
    else
#line 507 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 510 "hlds_out_util.m"
        {
#line 510 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__MethodId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 510 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util___ClassId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 511 "hlds_out_util.m"
          {
#line 511 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_13);
          }
#line 510 "hlds_out_util.m"
        }
#line 507 "hlds_out_util.m"
      else
#line 507 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 512 "hlds_out_util.m"
          {
#line 512 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__EventName_14 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 513 "hlds_out_util.m"
            {
#line 513 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_14);
            }
#line 512 "hlds_out_util.m"
          }
#line 507 "hlds_out_util.m"
        else
#line 507 "hlds_out_util.m"
          {
#line 507 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__Purity_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 507 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 507 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__V_6_6;
#line 507 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__V_7_7;
#line 507 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 507 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 507 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));

#line 508 "hlds_out_util.m"
            {
#line 508 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_6_6 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_3);
            }
#line 509 "hlds_out_util.m"
            {
#line 509 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_10_10 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_4);
            }
#line 509 "hlds_out_util.m"
            {
#line 509 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) " call");
            }
#line 509 "hlds_out_util.m"
            {
#line 509 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_9_9);
            }
#line 508 "hlds_out_util.m"
            {
#line 508 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__V_7_7);
            }
#line 507 "hlds_out_util.m"
          }
#line 507 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 507 "hlds_out_util.m"
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
#line 502 "hlds_out_util.m"
  {
#line 502 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 502 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 502 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 504 "hlds_out_util.m"
      {
#line 504 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 505 "hlds_out_util.m"
        {
#line 505 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_4);
        }
#line 504 "hlds_out_util.m"
      }
#line 502 "hlds_out_util.m"
    else
#line 502 "hlds_out_util.m"
      {
#line 502 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 503 "hlds_out_util.m"
        {
#line 503 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_3);
        }
#line 502 "hlds_out_util.m"
      }
#line 502 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 502 "hlds_out_util.m"
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
#line 371 "hlds_out_util.m"
  {
#line 371 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 371 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 0)));
#line 371 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 1)));
#line 371 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_11;
#line 371 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16;
#line 371 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17;

#line 373 "hlds_out_util.m"
    {
#line 373 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_10, &hlds__hlds_out__hlds_out_util__SubContexts_11);
    }
#line 374 "hlds_out_util.m"
    {
#line 374 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__MainContext_9, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17);
    }
#line 375 "hlds_out_util.m"
    {
#line 375 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13, hlds__hlds_out__hlds_out_util__SubContexts_11, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15);
#line 375 "hlds_out_util.m"
      return;
    }
#line 371 "hlds_out_util.m"
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
#line 368 "hlds_out_util.m"
  {
#line 368 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 368 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 0)));
#line 368 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 1)));
#line 368 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_20;
#line 368 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21;
#line 368 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22;
#line 375 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_6_6;

#line 373 "hlds_out_util.m"
    {
#line 373 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_19, &hlds__hlds_out__hlds_out_util__SubContexts_20);
    }
#line 374 "hlds_out_util.m"
    {
#line 374 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, hlds__hlds_out__hlds_out_util__MainContext_18, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22);
    }
#line 375 "hlds_out_util.m"
    {
#line 375 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, &hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__SubContexts_20, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8);
    }
#line 368 "hlds_out_util.m"
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
#line 358 "hlds_out_util.m"
  {
#line 358 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 358 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 358 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_9;
#line 358 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 358 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 358 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;

#line 359 "hlds_out_util.m"
    {
#line 359 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 360 "hlds_out_util.m"
    {
#line 360 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, hlds__hlds_out__hlds_out_util__V_11_11);
    }
#line 358 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 358 "hlds_out_util.m"
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
#line 354 "hlds_out_util.m"
  {
#line 354 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 354 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 354 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_18;
#line 354 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;
#line 354 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_20_20;
#line 354 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_22_22;

#line 359 "hlds_out_util.m"
    {
#line 359 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_8, &hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 360 "hlds_out_util.m"
    {
#line 360 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_6, hlds__hlds_out__hlds_out_util__PredId_7);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_22_22);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_19_19, hlds__hlds_out__hlds_out_util__V_20_20);
    }
#line 355 "hlds_out_util.m"
    {
#line 355 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_12_12);
#line 355 "hlds_out_util.m"
      return;
    }
#line 354 "hlds_out_util.m"
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
#line 351 "hlds_out_util.m"
  {
#line 351 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 351 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 351 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 351 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 351 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_11;
#line 351 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 351 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;
#line 351 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 359 "hlds_out_util.m"
    {
#line 359 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_6, &hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 360 "hlds_out_util.m"
    {
#line 360 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, hlds__hlds_out__hlds_out_util__PredId_5);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_15_15);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 351 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 351 "hlds_out_util.m"
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
#line 348 "hlds_out_util.m"
  {
#line 348 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 348 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 348 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;
#line 348 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_24;
#line 348 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_25_25;
#line 348 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;
#line 348 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_28_28;

#line 359 "hlds_out_util.m"
    {
#line 359 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 360 "hlds_out_util.m"
    {
#line 360 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_28_28 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_28_28);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_25_25, hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 355 "hlds_out_util.m"
    {
#line 355 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_18_18);
#line 355 "hlds_out_util.m"
      return;
    }
#line 348 "hlds_out_util.m"
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
#line 264 "hlds_out_util.m"
  {
#line 264 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 264 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
#line 264 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
#line 342 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
#line 266 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

#line 265 "hlds_out_util.m"
    {
#line 265 "hlds_out_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
#line 266 "hlds_out_util.m"
    {
#line 266 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
#line 266 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 266 "hlds_out_util.m"
      {
#line 266 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
#line 266 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 266 "hlds_out_util.m"
      }
#line 342 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 267 "hlds_out_util.m"
      {
#line 267 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Module_9;
#line 267 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Name_10;
#line 267 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Arity_11;
#line 267 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_12;
#line 267 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Origin_13;

#line 267 "hlds_out_util.m"
        {
#line 267 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Module_9 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 268 "hlds_out_util.m"
        {
#line 268 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 269 "hlds_out_util.m"
        {
#line 269 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 270 "hlds_out_util.m"
        {
#line 270 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 271 "hlds_out_util.m"
        {
#line 271 "hlds_out_util.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__Origin_13);
        }
#line 282 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 1))))
#line 283 "hlds_out_util.m"
          {
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__MethodName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__ClassId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 0)));
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 1)));
#line 283 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__MethodStr_26;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__ClassName_27;
#line 283 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__ClassStr_29;
#line 283 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__TypeStrs_30;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_73_73;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_74_74;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_76_76;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_77_77;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_79_79;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_80_80;
#line 283 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_82_82;
#line 284 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 2)));
#line 284 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 3)));
#line 288 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_28_28;

#line 286 "hlds_out_util.m"
            {
#line 286 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__MethodStr_26 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__MethodName_20, hlds__hlds_out__hlds_out_util__Arity_11);
            }
#line 288 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 0)));
#line 288 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 1)));
#line 289 "hlds_out_util.m"
            {
#line 289 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ClassStr_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_27);
            }
#line 290 "hlds_out_util.m"
            {
#line 290 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_73_73 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
#line 290 "hlds_out_util.m"
            {
#line 290 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeStrs_30 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_73_73, hlds__hlds_out__hlds_out_util__InstanceTypes_23);
            }
#line 293 "hlds_out_util.m"
            {
#line 293 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_30));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
#line 293 "hlds_out_util.m"
            }
#line 293 "hlds_out_util.m"
            {
#line 293 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 0) = ((MR_Box) ((MR_String) "("));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_82_82));
#line 293 "hlds_out_util.m"
            }
#line 293 "hlds_out_util.m"
            {
#line 293 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_29));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_80_80));
#line 293 "hlds_out_util.m"
            }
#line 293 "hlds_out_util.m"
            {
#line 293 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 0) = ((MR_Box) ((MR_String) " for \140"));
#line 293 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_79_79));
#line 293 "hlds_out_util.m"
            }
#line 292 "hlds_out_util.m"
            {
#line 292 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_26));
#line 292 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_77_77));
#line 292 "hlds_out_util.m"
            }
#line 292 "hlds_out_util.m"
            {
#line 292 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 0) = ((MR_Box) ((MR_String) "instance method "));
#line 292 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_76_76));
#line 292 "hlds_out_util.m"
            }
#line 291 "hlds_out_util.m"
            {
#line 291 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_74_74);
            }
#line 283 "hlds_out_util.m"
          }
#line 282 "hlds_out_util.m"
        else
#line 282 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 0))))
#line 273 "hlds_out_util.m"
            {
#line 273 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SpecialId_14;
#line 273 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_15;
#line 273 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Descr_16;
#line 273 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_18;
#line 273 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ForStr_19;
#line 273 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 273 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 273 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_88_88;
#line 275 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_17;

#line 273 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_86_86, (MR_Integer) 0)));
#line 273 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_86_86, (MR_Integer) 1)));
#line 274 "hlds_out_util.m"
              {
#line 274 "hlds_out_util.m"
                hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_14, &hlds__hlds_out__hlds_out_util__Descr_16);
              }
#line 275 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util___TypeSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 0)));
#line 275 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 1)));
#line 276 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_18 == (MR_Integer) 0);
#line 278 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 277 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type ";
#line 278 "hlds_out_util.m"
              else
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type constructor ";
#line 281 "hlds_out_util.m"
              {
#line 281 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_88_88 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_15);
              }
#line 281 "hlds_out_util.m"
              {
#line 281 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_19, hlds__hlds_out__hlds_out_util__V_88_88);
              }
#line 281 "hlds_out_util.m"
              {
#line 281 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_16, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 273 "hlds_out_util.m"
            }
#line 282 "hlds_out_util.m"
          else
#line 282 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 296 "hlds_out_util.m"
              {
#line 296 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__FileName_31 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 296 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 301 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PromiseType_33;

#line 297 "hlds_out_util.m"
                {
#line 297 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__PromiseType_33);
                }
#line 301 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 298 "hlds_out_util.m"
                  {
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 298 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__V_101_101;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 298 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_122_122;

#line 299 "hlds_out_util.m"
                    {
#line 299 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_64_64 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_33);
                    }
#line 7367 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__V_101_101 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0];
#line 300 "hlds_out_util.m"
                    {
#line 300 "hlds_out_util.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__LineNumber_32, &hlds__hlds_out__hlds_out_util__V_95_95);
                    }
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, (MR_String) ")");
                    }
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_102_102);
                    }
#line 300 "hlds_out_util.m"
                    {
#line 300 "hlds_out_util.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__FileName_31, &hlds__hlds_out__hlds_out_util__V_105_105);
                    }
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_112_112 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_104_104);
                    }
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_112_112);
                    }
#line 299 "hlds_out_util.m"
                    {
#line 299 "hlds_out_util.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_64_64, &hlds__hlds_out__hlds_out_util__V_115_115);
                    }
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_122_122 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_115_115, hlds__hlds_out__hlds_out_util__V_114_114);
                    }
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_122_122);
                    }
#line 298 "hlds_out_util.m"
                  }
#line 301 "hlds_out_util.m"
                else
#line 302 "hlds_out_util.m"
                  {
#line 302 "hlds_out_util.m"
                    {
#line 302 "hlds_out_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_util", (MR_String) "function \140hlds.hlds_out.hlds_out_util.pred_id_to_string\'/2", (MR_String) "origin_assertion");
                    }
#line 302 "hlds_out_util.m"
                  }
#line 296 "hlds_out_util.m"
              }
#line 282 "hlds_out_util.m"
            else
#line 282 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 316 "hlds_out_util.m"
                {
#line 316 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TypeCtorSymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 316 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TypeCtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 316 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 3)));
#line 316 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__TypeStr_40;
#line 316 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_54_54;

#line 318 "hlds_out_util.m"
                  {
#line 318 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorSymName_37));
#line 318 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorArity_38));
#line 318 "hlds_out_util.m"
                  }
#line 318 "hlds_out_util.m"
                  {
#line 318 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__TypeStr_40 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_54_54);
                  }
#line 322 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 == (MR_Integer) 3))
#line 329 "hlds_out_util.m"
                    {
#line 330 "hlds_out_util.m"
                      {
#line 330 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                      }
#line 329 "hlds_out_util.m"
                    }
#line 322 "hlds_out_util.m"
                  else
#line 322 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 == (MR_Integer) 2))
#line 326 "hlds_out_util.m"
                      {
#line 327 "hlds_out_util.m"
                        {
#line 327 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 326 "hlds_out_util.m"
                      }
#line 322 "hlds_out_util.m"
                    else
#line 322 "hlds_out_util.m"
                      if ((hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 == (MR_Integer) 1))
#line 323 "hlds_out_util.m"
                        {
#line 324 "hlds_out_util.m"
                          {
#line 324 "hlds_out_util.m"
                            return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                          }
#line 323 "hlds_out_util.m"
                        }
#line 322 "hlds_out_util.m"
                      else
#line 320 "hlds_out_util.m"
                        {
#line 321 "hlds_out_util.m"
                          {
#line 321 "hlds_out_util.m"
                            return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                          }
#line 320 "hlds_out_util.m"
                        }
#line 316 "hlds_out_util.m"
                }
#line 282 "hlds_out_util.m"
              else
#line 282 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 305 "hlds_out_util.m"
                  {
#line 305 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__BasePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 305 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 305 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__BasePredIdStr_36;

#line 306 "hlds_out_util.m"
                    {
#line 306 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__BasePredIdStr_36 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__BasePredId_34);
                    }
#line 310 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35 == (MR_Integer) 1))
#line 311 "hlds_out_util.m"
                      {
#line 312 "hlds_out_util.m"
                        {
#line 312 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 311 "hlds_out_util.m"
                      }
#line 310 "hlds_out_util.m"
                    else
#line 308 "hlds_out_util.m"
                      {
#line 309 "hlds_out_util.m"
                        {
#line 309 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 308 "hlds_out_util.m"
                      }
#line 305 "hlds_out_util.m"
                  }
#line 282 "hlds_out_util.m"
                else
#line 338 "hlds_out_util.m"
                  {
#line 338 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 339 "hlds_out_util.m"
                    {
#line 339 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "hlds_out_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 339 "hlds_out_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 339 "hlds_out_util.m"
                    }
#line 340 "hlds_out_util.m"
                    {
#line 340 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
                    }
#line 338 "hlds_out_util.m"
                  }
#line 267 "hlds_out_util.m"
      }
#line 342 "hlds_out_util.m"
    else
#line 344 "hlds_out_util.m"
      {
#line 344 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_53;
#line 344 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 344 "hlds_out_util.m"
        {
#line 344 "hlds_out_util.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 345 "hlds_out_util.m"
        {
#line 345 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 345 "hlds_out_util.m"
        {
#line 345 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_90_90);
        }
#line 344 "hlds_out_util.m"
      }
#line 264 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_6;
#line 264 "hlds_out_util.m"
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
#line 258 "hlds_out_util.m"
  {
#line 258 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 258 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 262 "hlds_out_util.m"
    {
#line 262 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 262 "hlds_out_util.m"
    {
#line 262 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
#line 262 "hlds_out_util.m"
      return;
    }
#line 258 "hlds_out_util.m"
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
#line 250 "hlds_out_util.m"
  {
#line 250 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 250 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_9_9;

#line 251 "hlds_out_util.m"
    {
#line 251 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_4));
#line 251 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_5));
#line 251 "hlds_out_util.m"
    }
#line 251 "hlds_out_util.m"
    {
#line 251 "hlds_out_util.m"
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__hlds_out__hlds_out_util__V_9_9);
#line 251 "hlds_out_util.m"
      return;
    }
#line 250 "hlds_out_util.m"
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
#line 247 "hlds_out_util.m"
  {
#line 247 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 247 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 247 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_5_5;

#line 248 "hlds_out_util.m"
    {
#line 248 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_5_5, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_3));
#line 248 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_5_5, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_4));
#line 248 "hlds_out_util.m"
    }
#line 248 "hlds_out_util.m"
    {
#line 248 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_5_5);
    }
#line 247 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 247 "hlds_out_util.m"
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
#line 244 "hlds_out_util.m"
  {
#line 244 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 244 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 244 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_9_9;

#line 245 "hlds_out_util.m"
    {
#line 245 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_4));
#line 245 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_5));
#line 245 "hlds_out_util.m"
    }
#line 245 "hlds_out_util.m"
    {
#line 245 "hlds_out_util.m"
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__hlds_out__hlds_out_util__V_9_9);
#line 245 "hlds_out_util.m"
      return;
    }
#line 244 "hlds_out_util.m"
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
#line 232 "hlds_out_util.m"
  {
#line 232 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Info_4;
#line 232 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_5;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Ids_6;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Names_7;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_8;

#line 233 "hlds_out_util.m"
    {
#line 233 "hlds_out_util.m"
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 148, &hlds__hlds_out__hlds_out_util__DumpOptions_5);
    }
#line 234 "hlds_out_util.m"
    {
#line 234 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 145, &hlds__hlds_out__hlds_out_util__Ids_6);
    }
#line 235 "hlds_out_util.m"
    {
#line 235 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 146, &hlds__hlds_out__hlds_out_util__Names_7);
    }
#line 236 "hlds_out_util.m"
    {
#line 236 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__MercInfo_8 = parse_tree__mercury_to_mercury__init_merc_out_info_for_hlds_dump_1_f_0(hlds__hlds_out__hlds_out_util__Globals_3);
    }
#line 237 "hlds_out_util.m"
    {
#line 237 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_5));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_5));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_6));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_7));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_8));
#line 237 "hlds_out_util.m"
    }
#line 232 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Info_4;
#line 232 "hlds_out_util.m"
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
