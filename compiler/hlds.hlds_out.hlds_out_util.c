/*
** Automatically generated from `hlds_out_util.m'
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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




#line 135 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 138 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 141 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 147 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 153 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 156 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

#line 159 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

#line 162 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

#line 165 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

#line 168 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

#line 171 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

#line 174 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

#line 177 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

#line 180 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

#line 183 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

#line 186 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

#line 189 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

#line 192 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

#line 195 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

#line 198 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

#line 201 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

#line 204 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

#line 207 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

#line 210 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

#line 213 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

#line 216 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

#line 219 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

#line 222 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0;

#line 225 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1;

#line 228 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0[2];

#line 231 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0[2];

#line 234 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0[2];

#line 237 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 240 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 242 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 245 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 248 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 250 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 252 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 255 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 258 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 260 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 263 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 266 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 268 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 270 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 273 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 276 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 278 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 281 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 284 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 286 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 288 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 291 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 294 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 296 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 299 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 302 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 304 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 306 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 309 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001(
#line 312 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 314 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 317 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001(
#line 320 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 322 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 324 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 850 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__850__1_3_p_0(
#line 850 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_103,
#line 850 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_104,
#line 850 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_105);

#line 748 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__748__1_3_p_0(
#line 748 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_84,
#line 748 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_85,
#line 748 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_86);

#line 1024 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1024 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1024 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

#line 966 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 966 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 966 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 966 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 966 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4);

#line 448 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 448 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 448 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 448 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7);

#line 428 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 428 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 428 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 428 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 428 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13);

#line 404 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 404 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 404 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 404 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9);

#line 385 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 385 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 385 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 385 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 385 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 385 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5);

#line 344 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 344 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 344 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 344 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 344 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 344 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19);

#line 996 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 996 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 996 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

#line 963 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0_1(
#line 963 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 963 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 963 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 963 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 847 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 847 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 847 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 847 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 847 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 745 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1(
#line 745 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 745 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 745 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 745 "hlds_out_util.m"
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



#line 682 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 690 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 699 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 707 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 715 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 723 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 732 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 740 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0
};

#line 749 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

#line 758 "hlds.hlds_out.hlds_out_util.c"
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

#line 773 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 778 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

#line 787 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 792 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 797 "hlds.hlds_out.hlds_out_util.c"
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

#line 818 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

#line 824 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

#line 830 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 836 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 842 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 848 "hlds.hlds_out.hlds_out_util.c"
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

#line 869 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

#line 875 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

#line 881 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 887 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 893 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 899 "hlds.hlds_out.hlds_out_util.c"
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

#line 920 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

#line 926 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

#line 932 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

#line 938 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

#line 944 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 950 "hlds.hlds_out.hlds_out_util.c"
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

#line 971 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0 = {
  (MR_String) "output_mercury",
  (MR_Integer) 0
};

#line 977 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1 = {
  (MR_String) "output_debug",
  (MR_Integer) 1
};

#line 983 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_output_lang_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1
};

#line 989 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_output_lang_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_output_lang_0_0
};

#line 995 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_output_lang_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1001 "hlds.hlds_out.hlds_out_util.c"
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

#line 1022 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 1025 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1027 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1029 "hlds.hlds_out.hlds_out_util.c"
{
#line 1031 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1033 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1036 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1038 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1041 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1043 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1045 "hlds.hlds_out.hlds_out_util.c"
}

#line 1048 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 1051 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1053 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1055 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1057 "hlds.hlds_out.hlds_out_util.c"
{
#line 1059 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1061 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1064 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1066 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1069 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1071 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1073 "hlds.hlds_out.hlds_out_util.c"
}

#line 1076 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 1079 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1081 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1083 "hlds.hlds_out.hlds_out_util.c"
{
#line 1085 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1087 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1090 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1092 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1095 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1097 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1099 "hlds.hlds_out.hlds_out_util.c"
}

#line 1102 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 1105 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1107 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1109 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1111 "hlds.hlds_out.hlds_out_util.c"
{
#line 1113 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1115 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1118 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1120 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1123 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1125 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1127 "hlds.hlds_out.hlds_out_util.c"
}

#line 1130 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 1133 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1135 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1137 "hlds.hlds_out.hlds_out_util.c"
{
#line 1139 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1141 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1144 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1146 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1149 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1151 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1153 "hlds.hlds_out.hlds_out_util.c"
}

#line 1156 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 1159 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1161 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1163 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1165 "hlds.hlds_out.hlds_out_util.c"
{
#line 1167 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1169 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1172 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1174 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1177 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1179 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1181 "hlds.hlds_out.hlds_out_util.c"
}

#line 1184 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 1187 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1189 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1191 "hlds.hlds_out.hlds_out_util.c"
{
#line 1193 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1195 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1198 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1200 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1203 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1205 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1207 "hlds.hlds_out.hlds_out_util.c"
}

#line 1210 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 1213 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1215 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1217 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1219 "hlds.hlds_out.hlds_out_util.c"
{
#line 1221 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1223 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1226 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1228 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1231 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1233 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1235 "hlds.hlds_out.hlds_out_util.c"
}

#line 1238 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0_10001(
#line 1241 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1243 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1245 "hlds.hlds_out.hlds_out_util.c"
{
#line 1247 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1249 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1252 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1254 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____output_lang_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1257 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1259 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1261 "hlds.hlds_out.hlds_out_util.c"
}

#line 1264 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0_10001(
#line 1267 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1269 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1271 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1273 "hlds.hlds_out.hlds_out_util.c"
{
#line 1275 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1277 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1280 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1282 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____output_lang_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1285 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1287 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1289 "hlds.hlds_out.hlds_out_util.c"
}

#line 850 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__850__1_3_p_0(
#line 850 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_103,
#line 850 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_104,
#line 850 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_105)
#line 850 "hlds_out_util.m"
{
#line 850 "hlds_out_util.m"
  {
#line 850 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_103 == (MR_Char) 42);

#line 850 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 849 "hlds_out_util.m"
      {
#line 849 "hlds_out_util.m"
        {
#line 849 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_104, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_105);
#line 849 "hlds_out_util.m"
          return;
        }
#line 849 "hlds_out_util.m"
      }
#line 850 "hlds_out_util.m"
    else
#line 851 "hlds_out_util.m"
      {
#line 851 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

#line 851 "hlds_out_util.m"
        {
#line 851 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_103, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
#line 852 "hlds_out_util.m"
        {
#line 852 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_104, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__HeadVar__3_105);
#line 852 "hlds_out_util.m"
          return;
        }
#line 851 "hlds_out_util.m"
      }
#line 850 "hlds_out_util.m"
  }
#line 850 "hlds_out_util.m"
}

#line 748 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__748__1_3_p_0(
#line 748 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_84,
#line 748 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_85,
#line 748 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_86)
#line 748 "hlds_out_util.m"
{
#line 748 "hlds_out_util.m"
  {
#line 748 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_84 == (MR_Char) 42);

#line 748 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 747 "hlds_out_util.m"
      {
#line 747 "hlds_out_util.m"
        {
#line 747 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_85, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_86);
#line 747 "hlds_out_util.m"
          return;
        }
#line 747 "hlds_out_util.m"
      }
#line 748 "hlds_out_util.m"
    else
#line 749 "hlds_out_util.m"
      {
#line 749 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_13;

#line 749 "hlds_out_util.m"
        {
#line 749 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_84, &hlds__hlds_out__hlds_out_util__CharStr_13);
        }
#line 750 "hlds_out_util.m"
        {
#line 750 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_85, hlds__hlds_out__hlds_out_util__CharStr_13, hlds__hlds_out__hlds_out_util__HeadVar__3_86);
#line 750 "hlds_out_util.m"
          return;
        }
#line 749 "hlds_out_util.m"
      }
#line 748 "hlds_out_util.m"
  }
#line 748 "hlds_out_util.m"
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
#line 1443 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1445 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1448 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1450 "hlds.hlds_out.hlds_out_util.c"
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
#line 1496 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1498 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1501 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1503 "hlds.hlds_out.hlds_out_util.c"
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
#line 1549 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1551 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1554 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1556 "hlds.hlds_out.hlds_out_util.c"
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
#line 1602 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1604 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1607 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1609 "hlds.hlds_out.hlds_out_util.c"
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
#line 1638 "hlds.hlds_out.hlds_out_util.c"
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
#line 1672 "hlds.hlds_out.hlds_out_util.c"
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
#line 1692 "hlds.hlds_out.hlds_out_util.c"
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
#line 1712 "hlds.hlds_out.hlds_out_util.c"
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
#line 1732 "hlds.hlds_out.hlds_out_util.c"
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

#line 1815 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
#line 36 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
          {
#line 1821 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
#line 36 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
              {
#line 1827 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1829 "hlds.hlds_out.hlds_out_util.c"
                {
#line 1831 "hlds.hlds_out.hlds_out_util.c"
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
#line 36 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 36 "hlds_out_util.m"
                  {
#line 1838 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1840 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 1842 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
#line 36 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1847 "hlds.hlds_out.hlds_out_util.c"
                      {
#line 1849 "hlds.hlds_out.hlds_out_util.c"
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

#line 1024 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1024 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1024 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
#line 1024 "hlds_out_util.m"
{
#line 1027 "hlds_out_util.m"
  while (MR_TRUE)
#line 1027 "hlds_out_util.m"
    {
#line 1027 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1027 "hlds_out_util.m"
      {
#line 1027 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1028 "hlds_out_util.m"
        {
#line 1028 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
#line 1033 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "hlds_out_util.m"
          {
#line 1034 "hlds_out_util.m"
          }
#line 1033 "hlds_out_util.m"
        else
#line 1030 "hlds_out_util.m"
          {
#line 1030 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
#line 1030 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

#line 1031 "hlds_out_util.m"
            {
#line 1031 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1032 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1032 "hlds_out_util.m"
            {
#line 1032 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
#line 1032 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

#line 1032 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
#line 1032 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
#line 1032 "hlds_out_util.m"
            }
#line 1032 "hlds_out_util.m"
            continue;
#line 1030 "hlds_out_util.m"
          }
#line 1027 "hlds_out_util.m"
      }
#line 1027 "hlds_out_util.m"
      break;
#line 1027 "hlds_out_util.m"
    }
#line 1024 "hlds_out_util.m"
}

#line 966 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 966 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_7,
#line 966 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 966 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__AppendVarNums_9,
#line 966 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 966 "hlds_out_util.m"
{
#line 970 "hlds_out_util.m"
  {
#line 970 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 970 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 970 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

#line 971 "hlds_out_util.m"
    {
#line 971 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_7);
    }
#line 972 "hlds_out_util.m"
    {
#line 972 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 973 "hlds_out_util.m"
    {
#line 973 "hlds_out_util.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
#line 974 "hlds_out_util.m"
    {
#line 974 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 979 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
#line 976 "hlds_out_util.m"
      {
#line 976 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 977 "hlds_out_util.m"
        {
#line 977 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
#line 978 "hlds_out_util.m"
        {
#line 978 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
#line 978 "hlds_out_util.m"
          return;
        }
#line 976 "hlds_out_util.m"
      }
#line 979 "hlds_out_util.m"
    else
#line 980 "hlds_out_util.m"
      {
#line 980 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 981 "hlds_out_util.m"
        {
#line 981 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
#line 982 "hlds_out_util.m"
        {
#line 982 "hlds_out_util.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Super_14);
#line 982 "hlds_out_util.m"
          return;
        }
#line 980 "hlds_out_util.m"
      }
#line 970 "hlds_out_util.m"
  }
#line 966 "hlds_out_util.m"
}

#line 448 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 448 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 448 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 448 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7)
#line 448 "hlds_out_util.m"
{
#line 453 "hlds_out_util.m"
  {
#line 453 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 453 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__First_4 == (MR_Integer) 0))
#line 453 "hlds_out_util.m"
      {
#line 456 "hlds_out_util.m"
        {
#line 456 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
        }
#line 453 "hlds_out_util.m"
      }
#line 453 "hlds_out_util.m"
    else
#line 458 "hlds_out_util.m"
      {
#line 459 "hlds_out_util.m"
        {
#line 459 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
        }
#line 458 "hlds_out_util.m"
      }
#line 453 "hlds_out_util.m"
  }
#line 448 "hlds_out_util.m"
}

#line 428 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 428 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 428 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 428 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 428 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13)
#line 428 "hlds_out_util.m"
{
#line 431 "hlds_out_util.m"
  {
#line 431 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ConsId_8;
#line 431 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9;
#line 431 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 431 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ConsIdStr_11;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_16_16;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_20_20;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_21_21;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_24_24;
#line 431 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_25_25;

#line 453 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__First_5 == (MR_Integer) 0))
#line 453 "hlds_out_util.m"
      {
#line 456 "hlds_out_util.m"
        {
#line 456 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
        }
#line 453 "hlds_out_util.m"
      }
#line 453 "hlds_out_util.m"
    else
#line 458 "hlds_out_util.m"
      {
#line 459 "hlds_out_util.m"
        {
#line 459 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
        }
#line 458 "hlds_out_util.m"
      }
#line 433 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 0)));
#line 433 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 1)));
#line 434 "hlds_out_util.m"
    {
#line 434 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
    }
#line 435 "hlds_out_util.m"
    {
#line 435 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
#line 436 "hlds_out_util.m"
    {
#line 436 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 436 "hlds_out_util.m"
    }
#line 437 "hlds_out_util.m"
    {
#line 437 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 437 "hlds_out_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
#line 437 "hlds_out_util.m"
    }
#line 437 "hlds_out_util.m"
    {
#line 437 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_25_25));
#line 437 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 437 "hlds_out_util.m"
    }
#line 436 "hlds_out_util.m"
    {
#line 436 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[17])));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_24_24));
#line 436 "hlds_out_util.m"
    }
#line 436 "hlds_out_util.m"
    {
#line 436 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_20_20));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_21_21));
#line 436 "hlds_out_util.m"
    }
#line 436 "hlds_out_util.m"
    {
#line 436 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 436 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_19_19));
#line 436 "hlds_out_util.m"
    }
#line 436 "hlds_out_util.m"
    {
#line 436 "hlds_out_util.m"
      *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 431 "hlds_out_util.m"
  }
#line 428 "hlds_out_util.m"
}

#line 404 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 404 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 404 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 404 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9)
#line 404 "hlds_out_util.m"
{
#line 408 "hlds_out_util.m"
  while (MR_TRUE)
#line 408 "hlds_out_util.m"
    {
#line 408 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 408 "hlds_out_util.m"
      {
#line 408 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 408 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContext_5;
#line 408 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 408 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__ConsId_10;
#line 408 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_11;
#line 408 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Functor_12;
#line 408 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__V_15_15;
#line 410 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13;

#line 408 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 408 "hlds_out_util.m"
          {
#line 408 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 409 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 0)));
#line 409 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 1)));
#line 410 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 410 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 410 "hlds_out_util.m"
              {
#line 410 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 410 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 410 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 410 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 2);
#line 408 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 408 "hlds_out_util.m"
                  {
#line 414 "hlds_out_util.m"
                    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Functor_12)) == (MR_mktag((MR_Integer) 1))))
#line 415 "hlds_out_util.m"
                      {
#line 415 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ModuleSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));
#line 415 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 1)));
#line 415 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_17_17;
#line 415 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_21_21;

#line 415 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_16_16, (MR_String) "[|]") == 0);
#line 415 "hlds_out_util.m"
                        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 415 "hlds_out_util.m"
                          {
#line 416 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_17_17 = (MR_String) "list";
#line 416 "hlds_out_util.m"
                            {
#line 416 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = mdbcomp__prim_data__is_std_lib_module_name_2_p_0(hlds__hlds_out__hlds_out_util__ModuleSymName_14, &hlds__hlds_out__hlds_out_util__V_21_21);
                            }
#line 415 "hlds_out_util.m"
                            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 416 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_17_17, hlds__hlds_out__hlds_out_util__V_21_21) == 0);
#line 415 "hlds_out_util.m"
                          }
#line 415 "hlds_out_util.m"
                      }
#line 414 "hlds_out_util.m"
                    else
#line 413 "hlds_out_util.m"
                      {
#line 413 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));

#line 413 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_18_18, (MR_String) "[|]") == 0);
#line 413 "hlds_out_util.m"
                      }
#line 408 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 422 "hlds_out_util.m"
                      {
#line 422 "hlds_out_util.m"
                        if ((hlds__hlds_out__hlds_out_util__ArgNum_11 == (MR_Integer) 1))
#line 419 "hlds_out_util.m"
                          {
#line 420 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__ElementNum_8 = hlds__hlds_out__hlds_out_util__NumElementsBefore_7;
#line 421 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__AfterContexts_9 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 419 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 419 "hlds_out_util.m"
                          }
#line 422 "hlds_out_util.m"
                        else
#line 422 "hlds_out_util.m"
                          if ((hlds__hlds_out__hlds_out_util__ArgNum_11 == (MR_Integer) 2))
#line 423 "hlds_out_util.m"
                            {
#line 423 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__V_19_19 = (hlds__hlds_out__hlds_out_util__NumElementsBefore_7 + (MR_Integer) 1);

#line 424 "hlds_out_util.m"
                              /* direct tailcall eliminated */
#line 424 "hlds_out_util.m"
                              {
#line 424 "hlds_out_util.m"
                                MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 424 "hlds_out_util.m"
                                MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7 = hlds__hlds_out__hlds_out_util__V_19_19;

#line 424 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__NumElementsBefore_7 = hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7;
#line 424 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1;
#line 424 "hlds_out_util.m"
                              }
#line 424 "hlds_out_util.m"
                              continue;
#line 423 "hlds_out_util.m"
                            }
#line 422 "hlds_out_util.m"
                          else
#line 422 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
#line 422 "hlds_out_util.m"
                      }
#line 408 "hlds_out_util.m"
                  }
#line 410 "hlds_out_util.m"
              }
#line 408 "hlds_out_util.m"
          }
#line 408 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__succeeded;
#line 408 "hlds_out_util.m"
      }
#line 408 "hlds_out_util.m"
      break;
#line 408 "hlds_out_util.m"
    }
#line 404 "hlds_out_util.m"
}

#line 385 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 385 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 385 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 385 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 385 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 385 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5)
#line 385 "hlds_out_util.m"
{
#line 389 "hlds_out_util.m"
  while (MR_TRUE)
#line 389 "hlds_out_util.m"
    {
#line 389 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 389 "hlds_out_util.m"
      {
#line 389 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 389 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "hlds_out_util.m"
          {
#line 389 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4;
#line 389 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1;
#line 389 "hlds_out_util.m"
          }
#line 389 "hlds_out_util.m"
        else
#line 390 "hlds_out_util.m"
          {
#line 390 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 390 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ElementNum_16;
#line 398 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__AfterContexts_17;

#line 392 "hlds_out_util.m"
            {
#line 392 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0, &hlds__hlds_out__hlds_out_util__ElementNum_16, &hlds__hlds_out__hlds_out_util__AfterContexts_17);
            }
#line 398 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 395 "hlds_out_util.m"
              {
#line 395 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;
#line 395 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__ElementNumStr_37;
#line 395 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38;
#line 395 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_40_40;
#line 395 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;
#line 395 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_46_46;
#line 395 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_47_47;

#line 453 "hlds_out_util.m"
                if ((hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 == (MR_Integer) 0))
#line 453 "hlds_out_util.m"
                  {
#line 456 "hlds_out_util.m"
                    {
#line 456 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                    }
#line 453 "hlds_out_util.m"
                  }
#line 453 "hlds_out_util.m"
                else
#line 458 "hlds_out_util.m"
                  {
#line 459 "hlds_out_util.m"
                    {
#line 459 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                    }
#line 458 "hlds_out_util.m"
                  }
#line 444 "hlds_out_util.m"
                {
#line 444 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
#line 446 "hlds_out_util.m"
                {
#line 446 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
#line 446 "hlds_out_util.m"
                }
#line 446 "hlds_out_util.m"
                {
#line 446 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_47_47));
#line 446 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 446 "hlds_out_util.m"
                }
#line 445 "hlds_out_util.m"
                {
#line 445 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
#line 445 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_46_46));
#line 445 "hlds_out_util.m"
                }
#line 445 "hlds_out_util.m"
                {
#line 445 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
#line 445 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_43_43));
#line 445 "hlds_out_util.m"
                }
#line 445 "hlds_out_util.m"
                {
#line 445 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38, hlds__hlds_out__hlds_out_util__V_40_40);
                }
#line 397 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 397 "hlds_out_util.m"
                {
#line 397 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__AfterContexts_17;
#line 397 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;

#line 397 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 397 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 397 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 397 "hlds_out_util.m"
                }
#line 397 "hlds_out_util.m"
                continue;
#line 395 "hlds_out_util.m"
              }
#line 398 "hlds_out_util.m"
            else
#line 399 "hlds_out_util.m"
              {
#line 399 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 399 "hlds_out_util.m"
                {
#line 399 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1, hlds__hlds_out__hlds_out_util__SubContext_13, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28);
                }
#line 401 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 401 "hlds_out_util.m"
                {
#line 401 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__SubContexts_14;
#line 401 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 401 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 401 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 401 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 401 "hlds_out_util.m"
                }
#line 401 "hlds_out_util.m"
                continue;
#line 399 "hlds_out_util.m"
              }
#line 390 "hlds_out_util.m"
          }
#line 389 "hlds_out_util.m"
      }
#line 389 "hlds_out_util.m"
      break;
#line 389 "hlds_out_util.m"
    }
#line 385 "hlds_out_util.m"
}

#line 344 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 344 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 344 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 344 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 344 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 344 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19)
#line 344 "hlds_out_util.m"
{
#line 350 "hlds_out_util.m"
  {
#line 350 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 350 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__MainContext_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 350 "hlds_out_util.m"
      {
#line 350 "hlds_out_util.m"
        *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 350 "hlds_out_util.m"
        *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
#line 350 "hlds_out_util.m"
      }
#line 350 "hlds_out_util.m"
    else
#line 350 "hlds_out_util.m"
      if ((hlds__hlds_out__hlds_out_util__MainContext_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 359 "hlds_out_util.m"
        {
#line 359 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42;

#line 360 "hlds_out_util.m"
          {
#line 360 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42);
          }
#line 361 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 362 "hlds_out_util.m"
          {
#line 362 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8]));
          }
#line 359 "hlds_out_util.m"
        }
#line 350 "hlds_out_util.m"
      else
#line 350 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) == (MR_mktag((MR_Integer) 2))))
#line 365 "hlds_out_util.m"
          {
#line 365 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 365 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__Markers_12;
#line 365 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__ArgIdStr_13;
#line 365 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31;
#line 365 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_34_34;
#line 365 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_35_35;
#line 365 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 1)));

#line 453 "hlds_out_util.m"
            if ((hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16 == (MR_Integer) 0))
#line 453 "hlds_out_util.m"
              {
#line 456 "hlds_out_util.m"
                {
#line 456 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                }
#line 453 "hlds_out_util.m"
              }
#line 453 "hlds_out_util.m"
            else
#line 458 "hlds_out_util.m"
              {
#line 459 "hlds_out_util.m"
                {
#line 459 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
#line 458 "hlds_out_util.m"
              }
#line 367 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 375 "hlds_out_util.m"
            {
#line 375 "hlds_out_util.m"
              hlds__hlds_pred__init_markers_1_p_0(&hlds__hlds_out__hlds_out_util__Markers_12);
            }
#line 376 "hlds_out_util.m"
            {
#line 376 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__CallId_11, hlds__hlds_out__hlds_out_util__ArgNum_65, hlds__hlds_out__hlds_out_util__Markers_12);
            }
#line 377 "hlds_out_util.m"
            {
#line 377 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "hlds_out_util.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 377 "hlds_out_util.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgIdStr_13));
#line 377 "hlds_out_util.m"
            }
#line 377 "hlds_out_util.m"
            {
#line 377 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_35_35));
#line 377 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 377 "hlds_out_util.m"
            }
#line 377 "hlds_out_util.m"
            {
#line 377 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31, hlds__hlds_out__hlds_out_util__V_34_34);
            }
#line 365 "hlds_out_util.m"
          }
#line 350 "hlds_out_util.m"
        else
#line 350 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) == (MR_mktag((MR_Integer) 1))))
#line 352 "hlds_out_util.m"
            {
#line 352 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 352 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 352 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51;
#line 352 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
#line 352 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 352 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_58_58;

#line 353 "hlds_out_util.m"
              {
#line 353 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51);
              }
#line 354 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 355 "hlds_out_util.m"
              {
#line 355 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
              }
#line 357 "hlds_out_util.m"
              {
#line 357 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 357 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 357 "hlds_out_util.m"
              }
#line 357 "hlds_out_util.m"
              {
#line 357 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_58_58));
#line 357 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
#line 357 "hlds_out_util.m"
              }
#line 356 "hlds_out_util.m"
              {
#line 356 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 356 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_57_57));
#line 356 "hlds_out_util.m"
              }
#line 356 "hlds_out_util.m"
              {
#line 356 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51, hlds__hlds_out__hlds_out_util__V_54_54);
              }
#line 352 "hlds_out_util.m"
            }
#line 350 "hlds_out_util.m"
          else
#line 379 "hlds_out_util.m"
            {
#line 379 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Source_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 379 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Msg_15;
#line 379 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20;
#line 379 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_26_26;
#line 379 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_27_27;
#line 379 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_71_71;

#line 380 "hlds_out_util.m"
              {
#line 380 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
              }
#line 2825 "hlds.hlds_out.hlds_out_util.c"
              {
#line 2827 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Source_14, (MR_String) " unification:\n");
              }
#line 2830 "hlds.hlds_out.hlds_out_util.c"
              {
#line 2832 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_71_71);
              }
#line 382 "hlds_out_util.m"
              {
#line 382 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "hlds_out_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 382 "hlds_out_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Msg_15));
#line 382 "hlds_out_util.m"
              }
#line 382 "hlds_out_util.m"
              {
#line 382 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_27_27));
#line 382 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
#line 382 "hlds_out_util.m"
              }
#line 382 "hlds_out_util.m"
              {
#line 382 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20, hlds__hlds_out__hlds_out_util__V_26_26);
              }
#line 382 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 379 "hlds_out_util.m"
            }
#line 350 "hlds_out_util.m"
  }
#line 344 "hlds_out_util.m"
}

#line 206 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
#line 206 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
#line 206 "hlds_out_util.m"
{
#line 1045 "hlds_out_util.m"
  while (MR_TRUE)
#line 1045 "hlds_out_util.m"
    {
#line 1045 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1045 "hlds_out_util.m"
      {
#line 1045 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

#line 1045 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1043 "hlds_out_util.m"
          {
#line 1043 "hlds_out_util.m"
          }
#line 1045 "hlds_out_util.m"
        else
#line 1046 "hlds_out_util.m"
          {
#line 1046 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

#line 1046 "hlds_out_util.m"
            {
#line 1046 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1047 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
#line 1047 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1047 "hlds_out_util.m"
            {
#line 1047 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

#line 1047 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
#line 1047 "hlds_out_util.m"
            }
#line 1047 "hlds_out_util.m"
            continue;
#line 1046 "hlds_out_util.m"
          }
#line 1045 "hlds_out_util.m"
      }
#line 1045 "hlds_out_util.m"
      break;
#line 1045 "hlds_out_util.m"
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
#line 1015 "hlds_out_util.m"
  {
#line 1015 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1015 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "hlds_out_util.m"
      {
#line 1016 "hlds_out_util.m"
        {
#line 1016 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[]");
#line 1016 "hlds_out_util.m"
          return;
        }
#line 1015 "hlds_out_util.m"
      }
#line 1015 "hlds_out_util.m"
    else
#line 1018 "hlds_out_util.m"
      {
#line 1018 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
#line 1018 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

#line 1019 "hlds_out_util.m"
        {
#line 1019 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
#line 1020 "hlds_out_util.m"
        {
#line 1020 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
#line 1021 "hlds_out_util.m"
        {
#line 1021 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
#line 1021 "hlds_out_util.m"
          return;
        }
#line 1018 "hlds_out_util.m"
      }
#line 1015 "hlds_out_util.m"
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
#line 1004 "hlds_out_util.m"
  {
#line 1004 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 1004 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1004 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 1004 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__AppendVarNums_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__mercury_to_mercury__mercury_mode_to_string_2_f_0(hlds__hlds_out__hlds_out_util__Mode_10, hlds__hlds_out__hlds_out_util__InstVarSet_7);
    }
#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 1004 "hlds_out_util.m"
    {
#line 1004 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 1004 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 1004 "hlds_out_util.m"
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
#line 1000 "hlds_out_util.m"
  {
#line 1000 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 1000 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;
#line 1000 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 1000 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 1000 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_23_23;
#line 1000 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 1000 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;

#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_23_23 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__AppendVarNums_9, hlds__hlds_out__hlds_out_util__Var_21);
    }
#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = parse_tree__mercury_to_mercury__mercury_mode_to_string_2_f_0(hlds__hlds_out__hlds_out_util__Mode_22, hlds__hlds_out__hlds_out_util__InstVarSet_8);
    }
#line 1006 "hlds_out_util.m"
    {
#line 1006 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 1004 "hlds_out_util.m"
    {
#line 1004 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_23_23, hlds__hlds_out__hlds_out_util__V_24_24);
    }
#line 1001 "hlds_out_util.m"
    {
#line 1001 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
#line 1001 "hlds_out_util.m"
      return;
    }
#line 1000 "hlds_out_util.m"
  }
#line 191 "hlds_out_util.m"
}

#line 996 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 996 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 996 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
#line 996 "hlds_out_util.m"
{
#line 996 "hlds_out_util.m"
  {
#line 996 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 996 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 996 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

#line 996 "hlds_out_util.m"
    {
#line 996 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 996 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
#line 996 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 996 "hlds_out_util.m"
  }
#line 996 "hlds_out_util.m"
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
#line 994 "hlds_out_util.m"
  {
#line 994 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 994 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 994 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
#line 994 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
#line 994 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 995 "hlds_out_util.m"
    {
#line 995 "hlds_out_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_7, hlds__hlds_out__hlds_out_util__Modes_8, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 996 "hlds_out_util.m"
    {
#line 996 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 996 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
#line 996 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
#line 996 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 996 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_9));
#line 996 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_10));
#line 996 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__AppendVarNums_11));
#line 996 "hlds_out_util.m"
    }
#line 996 "hlds_out_util.m"
    {
#line 996 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 998 "hlds_out_util.m"
    {
#line 998 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
#line 994 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 994 "hlds_out_util.m"
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
#line 990 "hlds_out_util.m"
  {
#line 990 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 990 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 991 "hlds_out_util.m"
    {
#line 991 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__Vars_8, hlds__hlds_out__hlds_out_util__Modes_9, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__InstVarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 991 "hlds_out_util.m"
    {
#line 991 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 991 "hlds_out_util.m"
      return;
    }
#line 990 "hlds_out_util.m"
  }
#line 186 "hlds_out_util.m"
}

#line 963 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0_1(
#line 963 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 963 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 963 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 963 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 963 "hlds_out_util.m"
{
#line 963 "hlds_out_util.m"
  {
#line 963 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

#line 963 "hlds_out_util.m"
    {
#line 963 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
#line 963 "hlds_out_util.m"
      return;
    }
#line 963 "hlds_out_util.m"
  }
#line 963 "hlds_out_util.m"
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
#line 959 "hlds_out_util.m"
  {
#line 959 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 959 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
#line 959 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

#line 960 "hlds_out_util.m"
    {
#line 960 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_7);
    }
#line 961 "hlds_out_util.m"
    {
#line 961 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
#line 962 "hlds_out_util.m"
    {
#line 962 "hlds_out_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__Proofs_9, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
#line 963 "hlds_out_util.m"
    {
#line 963 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 963 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_5[0]));
#line 963 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0_1));
#line 963 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 963 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_7));
#line 963 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_8));
#line 963 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__AppendVarNums_10));
#line 963 "hlds_out_util.m"
    }
#line 963 "hlds_out_util.m"
    {
#line 963 "hlds_out_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
#line 963 "hlds_out_util.m"
      return;
    }
#line 959 "hlds_out_util.m"
  }
#line 176 "hlds_out_util.m"
}

#line 847 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 847 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 847 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 847 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 847 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 847 "hlds_out_util.m"
{
#line 847 "hlds_out_util.m"
  {
#line 847 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 847 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105;

#line 847 "hlds_out_util.m"
    {
#line 847 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__850__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105);
    }
#line 847 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_105));
#line 847 "hlds_out_util.m"
  }
#line 847 "hlds_out_util.m"
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
#line 836 "hlds_out_util.m"
  {
#line 836 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 836 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_10;

#line 836 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__ConsId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 924 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
#line 836 "hlds_out_util.m"
    else
#line 836 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 2))))
#line 935 "hlds_out_util.m"
        {
#line 935 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 935 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 935 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 935 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 935 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 935 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
#line 935 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_132, (MR_Integer) 0)));
#line 935 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_132, (MR_Integer) 1)));

#line 938 "hlds_out_util.m"
          {
#line 938 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_133);
          }
#line 939 "hlds_out_util.m"
          {
#line 939 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_134);
          }
#line 939 "hlds_out_util.m"
          {
#line 939 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) ">");
          }
#line 938 "hlds_out_util.m"
          {
#line 938 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_70_70);
          }
#line 938 "hlds_out_util.m"
          {
#line 938 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_67_67, hlds__hlds_out__hlds_out_util__V_68_68);
          }
#line 937 "hlds_out_util.m"
          {
#line 937 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_66_66);
          }
#line 935 "hlds_out_util.m"
        }
#line 836 "hlds_out_util.m"
      else
#line 836 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 1))))
#line 921 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
#line 836 "hlds_out_util.m"
        else
#line 836 "hlds_out_util.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 918 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
#line 836 "hlds_out_util.m"
          else
#line 836 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 897 "hlds_out_util.m"
              {
#line 897 "hlds_out_util.m"
                MR_Char hlds__hlds_out__hlds_out_util__CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 898 "hlds_out_util.m"
                {
#line 898 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_31);
                }
#line 897 "hlds_out_util.m"
              }
#line 836 "hlds_out_util.m"
            else
#line 836 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 906 "hlds_out_util.m"
                {
#line 906 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 906 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 0)));
#line 906 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 1)));
#line 906 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;
#line 906 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 906 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 906 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 906 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 909 "hlds_out_util.m"
                  {
#line 909 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_36);
                  }
#line 910 "hlds_out_util.m"
                  {
#line 910 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_37);
                  }
#line 910 "hlds_out_util.m"
                  {
#line 910 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_90_90, (MR_String) ">");
                  }
#line 909 "hlds_out_util.m"
                  {
#line 909 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_89_89);
                  }
#line 909 "hlds_out_util.m"
                  {
#line 909 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, hlds__hlds_out__hlds_out_util__V_87_87);
                  }
#line 908 "hlds_out_util.m"
                  {
#line 908 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_85_85);
                  }
#line 906 "hlds_out_util.m"
                }
#line 836 "hlds_out_util.m"
              else
#line 836 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 836 "hlds_out_util.m"
                  {
#line 836 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 836 "hlds_out_util.m"
                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 836 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
#line 836 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 836 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
#line 836 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
#line 836 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 840 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__Qual_6 == (MR_Integer) 1))
#line 841 "hlds_out_util.m"
                      {
#line 841 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_101_101;

#line 842 "hlds_out_util.m"
                        {
#line 842 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_101_101 = mdbcomp__prim_data__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                        }
#line 842 "hlds_out_util.m"
                        {
#line 842 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 842 "hlds_out_util.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_101_101));
#line 842 "hlds_out_util.m"
                        }
#line 841 "hlds_out_util.m"
                      }
#line 840 "hlds_out_util.m"
                    else
#line 839 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
#line 844 "hlds_out_util.m"
                    {
#line 844 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
                    }
#line 845 "hlds_out_util.m"
                    {
#line 845 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
                    }
#line 856 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 854 "hlds_out_util.m"
                      {
#line 855 "hlds_out_util.m"
                        MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

#line 855 "hlds_out_util.m"
                        {
#line 855 "hlds_out_util.m"
                          mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[3], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                        }
#line 855 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
#line 854 "hlds_out_util.m"
                      }
#line 856 "hlds_out_util.m"
                    else
#line 857 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 859 "hlds_out_util.m"
                    {
#line 859 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
                    }
#line 863 "hlds_out_util.m"
                    if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 861 "hlds_out_util.m"
                      {
#line 861 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 861 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_118_118;

#line 862 "hlds_out_util.m"
                        {
#line 862 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                        }
#line 862 "hlds_out_util.m"
                        {
#line 862 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_118_118);
                        }
#line 862 "hlds_out_util.m"
                        {
#line 862 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_116_116);
                        }
#line 861 "hlds_out_util.m"
                      }
#line 863 "hlds_out_util.m"
                    else
#line 864 "hlds_out_util.m"
                      {
#line 864 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 868 "hlds_out_util.m"
                        if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "hlds_out_util.m"
                          {
#line 866 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 866 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_115_115;

#line 867 "hlds_out_util.m"
                            {
#line 867 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                            }
#line 867 "hlds_out_util.m"
                            {
#line 867 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_115_115);
                            }
#line 867 "hlds_out_util.m"
                            {
#line 867 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_113_113);
                            }
#line 866 "hlds_out_util.m"
                          }
#line 868 "hlds_out_util.m"
                        else
#line 869 "hlds_out_util.m"
                          {
#line 869 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
#line 869 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_109_109;
#line 869 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__V_111_111;

#line 870 "hlds_out_util.m"
                            {
#line 870 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__ArgVars_23);
                            }
#line 871 "hlds_out_util.m"
                            {
#line 871 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                            }
#line 871 "hlds_out_util.m"
                            {
#line 871 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_111_111);
                            }
#line 871 "hlds_out_util.m"
                            {
#line 871 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_109_109);
                            }
#line 869 "hlds_out_util.m"
                          }
#line 864 "hlds_out_util.m"
                      }
#line 836 "hlds_out_util.m"
                  }
#line 836 "hlds_out_util.m"
                else
#line 836 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 947 "hlds_out_util.m"
                    {
#line 947 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 947 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 947 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_52_52;
#line 947 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 947 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 947 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredProcId_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 947 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__PredId_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_138, (MR_Integer) 0)));
#line 947 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_138, (MR_Integer) 1)));

#line 950 "hlds_out_util.m"
                      {
#line 950 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_139);
                      }
#line 951 "hlds_out_util.m"
                      {
#line 951 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_140);
                      }
#line 950 "hlds_out_util.m"
                      {
#line 950 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, (MR_String) ">");
                      }
#line 950 "hlds_out_util.m"
                      {
#line 950 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_54_54);
                      }
#line 950 "hlds_out_util.m"
                      {
#line 950 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, hlds__hlds_out__hlds_out_util__V_52_52);
                      }
#line 949 "hlds_out_util.m"
                      {
#line 949 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_50_50);
                      }
#line 947 "hlds_out_util.m"
                    }
#line 836 "hlds_out_util.m"
                  else
#line 836 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 894 "hlds_out_util.m"
                      {
#line 894 "hlds_out_util.m"
                        MR_Float hlds__hlds_out__hlds_out_util__Float_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 895 "hlds_out_util.m"
                        {
#line 895 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_30);
                        }
#line 894 "hlds_out_util.m"
                      }
#line 836 "hlds_out_util.m"
                    else
#line 836 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 933 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
#line 836 "hlds_out_util.m"
                      else
#line 836 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 903 "hlds_out_util.m"
                          {
#line 903 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 904 "hlds_out_util.m"
                            {
#line 904 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_33);
                            }
#line 903 "hlds_out_util.m"
                          }
#line 836 "hlds_out_util.m"
                        else
#line 836 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 891 "hlds_out_util.m"
                            {
#line 891 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 892 "hlds_out_util.m"
                              {
#line 892 "hlds_out_util.m"
                                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
                              }
#line 891 "hlds_out_util.m"
                            }
#line 836 "hlds_out_util.m"
                          else
#line 836 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 900 "hlds_out_util.m"
                              {
#line 900 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__StringConst_32 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 901 "hlds_out_util.m"
                                {
#line 901 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_32);
                                }
#line 900 "hlds_out_util.m"
                              }
#line 836 "hlds_out_util.m"
                            else
#line 836 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 941 "hlds_out_util.m"
                                {
#line 941 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 941 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 941 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 941 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 941 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 941 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 941 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_135, (MR_Integer) 0)));
#line 941 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_135, (MR_Integer) 1)));

#line 944 "hlds_out_util.m"
                                  {
#line 944 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_136);
                                  }
#line 945 "hlds_out_util.m"
                                  {
#line 945 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_137);
                                  }
#line 944 "hlds_out_util.m"
                                  {
#line 944 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, (MR_String) ">");
                                  }
#line 944 "hlds_out_util.m"
                                  {
#line 944 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_62_62);
                                  }
#line 944 "hlds_out_util.m"
                                  {
#line 944 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_60_60);
                                  }
#line 943 "hlds_out_util.m"
                                  {
#line 943 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_decl ", hlds__hlds_out__hlds_out_util__V_58_58);
                                  }
#line 941 "hlds_out_util.m"
                                }
#line 836 "hlds_out_util.m"
                              else
#line 836 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 875 "hlds_out_util.m"
                                  {
#line 875 "hlds_out_util.m"
                                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 879 "hlds_out_util.m"
                                    if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "hlds_out_util.m"
                                      {
#line 877 "hlds_out_util.m"
                                        MR_String hlds__hlds_out__hlds_out_util__V_100_100;

#line 878 "hlds_out_util.m"
                                        {
#line 878 "hlds_out_util.m"
                                          hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_128);
                                        }
#line 878 "hlds_out_util.m"
                                        {
#line 878 "hlds_out_util.m"
                                          return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_100_100);
                                        }
#line 877 "hlds_out_util.m"
                                      }
#line 879 "hlds_out_util.m"
                                    else
#line 880 "hlds_out_util.m"
                                      {
#line 880 "hlds_out_util.m"
                                        MR_Word hlds__hlds_out__hlds_out_util__ArgVars_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 884 "hlds_out_util.m"
                                        if ((hlds__hlds_out__hlds_out_util__ArgVars_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "hlds_out_util.m"
                                          {
#line 882 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_98_98;

#line 883 "hlds_out_util.m"
                                            {
#line 883 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_128);
                                            }
#line 883 "hlds_out_util.m"
                                            {
#line 883 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_98_98);
                                            }
#line 882 "hlds_out_util.m"
                                          }
#line 884 "hlds_out_util.m"
                                        else
#line 885 "hlds_out_util.m"
                                          {
#line 885 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 885 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__ArgStr_122;

#line 886 "hlds_out_util.m"
                                            {
#line 886 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__ArgStr_122 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__ArgVars_124);
                                            }
#line 887 "hlds_out_util.m"
                                            {
#line 887 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_122, (MR_String) "}");
                                            }
#line 887 "hlds_out_util.m"
                                            {
#line 887 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_95_95);
                                            }
#line 885 "hlds_out_util.m"
                                          }
#line 880 "hlds_out_util.m"
                                      }
#line 875 "hlds_out_util.m"
                                  }
#line 836 "hlds_out_util.m"
                                else
#line 836 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 912 "hlds_out_util.m"
                                    {
#line 912 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__Ctor_39 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_76_76;
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 912 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 912 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__Arity_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 914 "hlds_out_util.m"
                                      {
#line 914 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_75_75 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_38);
                                      }
#line 915 "hlds_out_util.m"
                                      {
#line 915 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_131);
                                      }
#line 915 "hlds_out_util.m"
                                      {
#line 915 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ">");
                                      }
#line 915 "hlds_out_util.m"
                                      {
#line 915 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_81_81);
                                      }
#line 914 "hlds_out_util.m"
                                      {
#line 914 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_39, hlds__hlds_out__hlds_out_util__V_79_79);
                                      }
#line 914 "hlds_out_util.m"
                                      {
#line 914 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_78_78);
                                      }
#line 914 "hlds_out_util.m"
                                      {
#line 914 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
                                      }
#line 913 "hlds_out_util.m"
                                      {
#line 913 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_74_74);
                                      }
#line 912 "hlds_out_util.m"
                                    }
#line 836 "hlds_out_util.m"
                                  else
#line 836 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 927 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
#line 836 "hlds_out_util.m"
                                    else
#line 930 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
#line 836 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_10;
#line 836 "hlds_out_util.m"
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
#line 827 "hlds_out_util.m"
  {
#line 827 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 827 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 828 "hlds_out_util.m"
    {
#line 828 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
#line 828 "hlds_out_util.m"
    {
#line 828 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
#line 828 "hlds_out_util.m"
      return;
    }
#line 827 "hlds_out_util.m"
  }
#line 168 "hlds_out_util.m"
}

#line 745 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0_1(
#line 745 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 745 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 745 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 745 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 745 "hlds_out_util.m"
{
#line 745 "hlds_out_util.m"
  {
#line 745 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 745 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86;

#line 745 "hlds_out_util.m"
    {
#line 745 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__748__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86);
    }
#line 745 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_86));
#line 745 "hlds_out_util.m"
  }
#line 745 "hlds_out_util.m"
}

#line 162 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(
#line 162 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_3)
#line 162 "hlds_out_util.m"
{
#line 741 "hlds_out_util.m"
  {
#line 741 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 741 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_4;

#line 741 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__ConsId_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<typeclass_info_cell_constructor>";
#line 741 "hlds_out_util.m"
    else
#line 741 "hlds_out_util.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 2))))
#line 808 "hlds_out_util.m"
        {
#line 808 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 808 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 808 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 808 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 808 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 808 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)));
#line 808 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_96, (MR_Integer) 0)));
#line 808 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_96, (MR_Integer) 1)));

#line 811 "hlds_out_util.m"
          {
#line 811 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_97);
          }
#line 812 "hlds_out_util.m"
          {
#line 812 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_98);
          }
#line 812 "hlds_out_util.m"
          {
#line 812 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, (MR_String) ">");
          }
#line 811 "hlds_out_util.m"
          {
#line 811 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_58_58);
          }
#line 811 "hlds_out_util.m"
          {
#line 811 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, hlds__hlds_out__hlds_out_util__V_56_56);
          }
#line 810 "hlds_out_util.m"
          {
#line 810 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_54_54);
          }
#line 808 "hlds_out_util.m"
        }
#line 741 "hlds_out_util.m"
      else
#line 741 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 1))))
#line 794 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<type_info_cell_constructor>";
#line 741 "hlds_out_util.m"
        else
#line 741 "hlds_out_util.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 791 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<base_typeclass_info>";
#line 741 "hlds_out_util.m"
          else
#line 741 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 770 "hlds_out_util.m"
              {
#line 770 "hlds_out_util.m"
                MR_Char hlds__hlds_out__hlds_out_util__CharConst_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 771 "hlds_out_util.m"
                {
#line 771 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__String_4 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_19);
                }
#line 770 "hlds_out_util.m"
              }
#line 741 "hlds_out_util.m"
            else
#line 741 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 779 "hlds_out_util.m"
                {
#line 779 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 779 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_22, (MR_Integer) 0)));
#line 779 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_22, (MR_Integer) 1)));
#line 779 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 779 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 779 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 779 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_77_77;
#line 779 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 782 "hlds_out_util.m"
                  {
#line 782 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_24);
                  }
#line 783 "hlds_out_util.m"
                  {
#line 783 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_25);
                  }
#line 783 "hlds_out_util.m"
                  {
#line 783 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_78_78, (MR_String) ">");
                  }
#line 782 "hlds_out_util.m"
                  {
#line 782 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_77_77);
                  }
#line 782 "hlds_out_util.m"
                  {
#line 782 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                  }
#line 781 "hlds_out_util.m"
                  {
#line 781 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_73_73);
                  }
#line 779 "hlds_out_util.m"
                }
#line 741 "hlds_out_util.m"
              else
#line 741 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 741 "hlds_out_util.m"
                  {
#line 741 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 741 "hlds_out_util.m"
                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 2)));
#line 741 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString0_8;
#line 741 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString1_14;
#line 741 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__SymNameString_15;
#line 741 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__ArityString_16;
#line 741 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 741 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 3)));

#line 742 "hlds_out_util.m"
                    {
#line 742 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString0_8 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_5);
                    }
#line 743 "hlds_out_util.m"
                    {
#line 743 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_8, (MR_Char) 42);
                    }
#line 754 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 752 "hlds_out_util.m"
                      {
#line 753 "hlds_out_util.m"
                        MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14;

#line 753 "hlds_out_util.m"
                        {
#line 753 "hlds_out_util.m"
                          mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_8, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14);
                        }
#line 753 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__SymNameString1_14 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_14);
#line 752 "hlds_out_util.m"
                      }
#line 754 "hlds_out_util.m"
                    else
#line 755 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString1_14 = hlds__hlds_out__hlds_out_util__SymNameString0_8;
#line 757 "hlds_out_util.m"
                    {
#line 757 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymNameString_15 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_14);
                    }
#line 758 "hlds_out_util.m"
                    {
#line 758 "hlds_out_util.m"
                      mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Arity_6, &hlds__hlds_out__hlds_out_util__ArityString_16);
                    }
#line 759 "hlds_out_util.m"
                    {
#line 759 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__ArityString_16);
                    }
#line 759 "hlds_out_util.m"
                    {
#line 759 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_15, hlds__hlds_out__hlds_out_util__V_89_89);
                    }
#line 741 "hlds_out_util.m"
                  }
#line 741 "hlds_out_util.m"
                else
#line 741 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 820 "hlds_out_util.m"
                    {
#line 820 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 820 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_39_39;
#line 820 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_40_40;
#line 820 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_42_42;
#line 820 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 820 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredProcId_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 820 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__PredId_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_102, (MR_Integer) 0)));
#line 820 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_102, (MR_Integer) 1)));

#line 823 "hlds_out_util.m"
                      {
#line 823 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_39_39 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_103);
                      }
#line 824 "hlds_out_util.m"
                      {
#line 824 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_104);
                      }
#line 823 "hlds_out_util.m"
                      {
#line 823 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_42_42 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_43_43, (MR_String) ">");
                      }
#line 823 "hlds_out_util.m"
                      {
#line 823 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_42_42);
                      }
#line 823 "hlds_out_util.m"
                      {
#line 823 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_39_39, hlds__hlds_out__hlds_out_util__V_40_40);
                      }
#line 822 "hlds_out_util.m"
                      {
#line 822 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
#line 820 "hlds_out_util.m"
                    }
#line 741 "hlds_out_util.m"
                  else
#line 741 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 767 "hlds_out_util.m"
                      {
#line 767 "hlds_out_util.m"
                        MR_Float hlds__hlds_out__hlds_out_util__Float_18 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 768 "hlds_out_util.m"
                        {
#line 768 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_18);
                        }
#line 767 "hlds_out_util.m"
                      }
#line 741 "hlds_out_util.m"
                    else
#line 741 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 806 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<ground_term_const>";
#line 741 "hlds_out_util.m"
                      else
#line 741 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 776 "hlds_out_util.m"
                          {
#line 776 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 777 "hlds_out_util.m"
                            {
#line 777 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_21);
                            }
#line 776 "hlds_out_util.m"
                          }
#line 741 "hlds_out_util.m"
                        else
#line 741 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 764 "hlds_out_util.m"
                            {
#line 764 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__Int_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 765 "hlds_out_util.m"
                              {
#line 765 "hlds_out_util.m"
                                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_17, &hlds__hlds_out__hlds_out_util__String_4);
                              }
#line 764 "hlds_out_util.m"
                            }
#line 741 "hlds_out_util.m"
                          else
#line 741 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 773 "hlds_out_util.m"
                              {
#line 773 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__StringConst_20 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 774 "hlds_out_util.m"
                                {
#line 774 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__String_4 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_20);
                                }
#line 773 "hlds_out_util.m"
                              }
#line 741 "hlds_out_util.m"
                            else
#line 741 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 814 "hlds_out_util.m"
                                {
#line 814 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 814 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 814 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 814 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 814 "hlds_out_util.m"
                                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 814 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__PredProcId_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 814 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__PredId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_99, (MR_Integer) 0)));
#line 814 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_99, (MR_Integer) 1)));

#line 817 "hlds_out_util.m"
                                  {
#line 817 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_100);
                                  }
#line 818 "hlds_out_util.m"
                                  {
#line 818 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_101);
                                  }
#line 817 "hlds_out_util.m"
                                  {
#line 817 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) ">");
                                  }
#line 817 "hlds_out_util.m"
                                  {
#line 817 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_50_50);
                                  }
#line 817 "hlds_out_util.m"
                                  {
#line 817 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                                  }
#line 816 "hlds_out_util.m"
                                  {
#line 816 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_decl ", hlds__hlds_out__hlds_out_util__V_46_46);
                                  }
#line 814 "hlds_out_util.m"
                                }
#line 741 "hlds_out_util.m"
                              else
#line 741 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 761 "hlds_out_util.m"
                                  {
#line 761 "hlds_out_util.m"
                                    MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 761 "hlds_out_util.m"
                                    MR_Integer hlds__hlds_out__hlds_out_util__Arity_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));

#line 762 "hlds_out_util.m"
                                    {
#line 762 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_94);
                                    }
#line 762 "hlds_out_util.m"
                                    {
#line 762 "hlds_out_util.m"
                                      return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_82_82);
                                    }
#line 761 "hlds_out_util.m"
                                  }
#line 741 "hlds_out_util.m"
                                else
#line 741 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 785 "hlds_out_util.m"
                                    {
#line 785 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__Module_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 1)));
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__Ctor_27 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 2)));
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 785 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 785 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__Arity_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 3)));

#line 787 "hlds_out_util.m"
                                      {
#line 787 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_63_63 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_26);
                                      }
#line 788 "hlds_out_util.m"
                                      {
#line 788 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_95);
                                      }
#line 788 "hlds_out_util.m"
                                      {
#line 788 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_70_70, (MR_String) ">");
                                      }
#line 788 "hlds_out_util.m"
                                      {
#line 788 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_69_69);
                                      }
#line 787 "hlds_out_util.m"
                                      {
#line 787 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_27, hlds__hlds_out__hlds_out_util__V_67_67);
                                      }
#line 787 "hlds_out_util.m"
                                      {
#line 787 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_66_66);
                                      }
#line 787 "hlds_out_util.m"
                                      {
#line 787 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, hlds__hlds_out__hlds_out_util__V_64_64);
                                      }
#line 786 "hlds_out_util.m"
                                      {
#line 786 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_62_62);
                                      }
#line 785 "hlds_out_util.m"
                                    }
#line 741 "hlds_out_util.m"
                                  else
#line 741 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 800 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<type_info_const>";
#line 741 "hlds_out_util.m"
                                    else
#line 803 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__String_4 = (MR_String) "<typeclass_info_const>";
#line 741 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_4;
#line 741 "hlds_out_util.m"
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
#line 736 "hlds_out_util.m"
  {
#line 736 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 736 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_8_8;

#line 737 "hlds_out_util.m"
    {
#line 737 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_8_8 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_4);
    }
#line 737 "hlds_out_util.m"
    {
#line 737 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_8_8);
#line 737 "hlds_out_util.m"
      return;
    }
#line 736 "hlds_out_util.m"
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
#line 630 "hlds_out_util.m"
  while (MR_TRUE)
#line 630 "hlds_out_util.m"
    {
#line 630 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 630 "hlds_out_util.m"
      {
#line 630 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 630 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

#line 630 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__ConsId_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "hlds_out_util.m"
          {
#line 698 "hlds_out_util.m"
            {
#line 698 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
            }
#line 697 "hlds_out_util.m"
          }
#line 630 "hlds_out_util.m"
        else
#line 630 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 2))))
#line 714 "hlds_out_util.m"
            {
#line 714 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_42;
#line 714 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_43;
#line 714 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 714 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 714 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
#line 714 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 714 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 714 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 714 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)));
#line 714 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredId_146;

#line 715 "hlds_out_util.m"
              {
#line 715 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145);
              }
#line 715 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__PredId_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 0)));
#line 715 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 1)));
#line 716 "hlds_out_util.m"
              {
#line 716 "hlds_out_util.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_42, &hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 719 "hlds_out_util.m"
              {
#line 719 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_65_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_146);
              }
#line 719 "hlds_out_util.m"
              {
#line 719 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 719 "hlds_out_util.m"
              {
#line 719 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_69_69, (MR_String) ")");
              }
#line 719 "hlds_out_util.m"
              {
#line 719 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_68_68);
              }
#line 718 "hlds_out_util.m"
              {
#line 718 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__V_66_66);
              }
#line 717 "hlds_out_util.m"
              {
#line 717 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_64_64);
              }
#line 714 "hlds_out_util.m"
            }
#line 630 "hlds_out_util.m"
          else
#line 630 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 1))))
#line 692 "hlds_out_util.m"
              {
#line 693 "hlds_out_util.m"
                {
#line 693 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                }
#line 692 "hlds_out_util.m"
              }
#line 630 "hlds_out_util.m"
            else
#line 630 "hlds_out_util.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 685 "hlds_out_util.m"
                {
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 4)));
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_98_98;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_108_108;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 0)));
#line 685 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 1)));
#line 685 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));

#line 688 "hlds_out_util.m"
                  {
#line 688 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_95_95 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_142);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_101_101 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_143);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_144);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_35, (MR_String) ")");
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_108_108);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_106_106);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_104_104);
                  }
#line 689 "hlds_out_util.m"
                  {
#line 689 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_102_102);
                  }
#line 689 "hlds_out_util.m"
                  {
#line 689 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
#line 688 "hlds_out_util.m"
                  {
#line 688 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_98_98);
                  }
#line 688 "hlds_out_util.m"
                  {
#line 688 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, hlds__hlds_out__hlds_out_util__V_96_96);
                  }
#line 687 "hlds_out_util.m"
                  {
#line 687 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_94_94);
                  }
#line 685 "hlds_out_util.m"
                }
#line 630 "hlds_out_util.m"
              else
#line 630 "hlds_out_util.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 653 "hlds_out_util.m"
                  {
#line 653 "hlds_out_util.m"
                    MR_Char hlds__hlds_out__hlds_out_util__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 653 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_127_127;
#line 653 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_128_128;

#line 660 "hlds_out_util.m"
                    {
#line 660 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_128_128 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_21);
                    }
#line 660 "hlds_out_util.m"
                    {
#line 660 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_127_127 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_128_128, (MR_String) ")");
                    }
#line 660 "hlds_out_util.m"
                    {
#line 660 "hlds_out_util.m"
                      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_127_127);
                    }
#line 653 "hlds_out_util.m"
                  }
#line 630 "hlds_out_util.m"
                else
#line 630 "hlds_out_util.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 669 "hlds_out_util.m"
                    {
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredId_25;
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredInfo_27;
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredModule_28;
#line 669 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__PredName_29;
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredSymName_30;
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__PredConsId_31;
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_121_121;
#line 669 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__V_122_122;
#line 669 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_123_123;
#line 670 "hlds_out_util.m"
                      MR_Integer hlds__hlds_out__hlds_out_util__V_26_26;

#line 670 "hlds_out_util.m"
                      {
#line 670 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_121_121 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23);
                      }
#line 670 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 0)));
#line 670 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 1)));
#line 671 "hlds_out_util.m"
                      {
#line 671 "hlds_out_util.m"
                        hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_25, &hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 672 "hlds_out_util.m"
                      {
#line 672 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 673 "hlds_out_util.m"
                      {
#line 673 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                      }
#line 674 "hlds_out_util.m"
                      {
#line 674 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_28));
#line 674 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_29));
#line 674 "hlds_out_util.m"
                      }
#line 675 "hlds_out_util.m"
                      {
#line 675 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_122_122 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_8);
                      }
#line 675 "hlds_out_util.m"
                      {
#line 675 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_123_123 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                      }
#line 675 "hlds_out_util.m"
                      {
#line 675 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 675 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 675 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_30));
#line 675 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_122_122));
#line 675 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
#line 675 "hlds_out_util.m"
                      }
#line 677 "hlds_out_util.m"
                      /* direct tailcall eliminated */
#line 677 "hlds_out_util.m"
                      {
#line 677 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_7 = hlds__hlds_out__hlds_out_util__PredConsId_31;

#line 677 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ConsId_7 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_7;
#line 677 "hlds_out_util.m"
                      }
#line 677 "hlds_out_util.m"
                      continue;
#line 669 "hlds_out_util.m"
                    }
#line 630 "hlds_out_util.m"
                  else
#line 630 "hlds_out_util.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 630 "hlds_out_util.m"
                      {
#line 630 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 630 "hlds_out_util.m"
                        MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 630 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));

#line 635 "hlds_out_util.m"
                        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 632 "hlds_out_util.m"
                          {
#line 632 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
#line 632 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
#line 632 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_137_137;

#line 633 "hlds_out_util.m"
                            {
#line 633 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
#line 633 "hlds_out_util.m"
                            }
#line 633 "hlds_out_util.m"
                            {
#line 633 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                            }
#line 632 "hlds_out_util.m"
                          }
#line 635 "hlds_out_util.m"
                        else
#line 636 "hlds_out_util.m"
                          {
#line 636 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_135_135;
#line 636 "hlds_out_util.m"
                            MR_String hlds__hlds_out__hlds_out_util__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

#line 637 "hlds_out_util.m"
                            {
#line 637 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_135_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_138));
#line 637 "hlds_out_util.m"
                            }
#line 637 "hlds_out_util.m"
                            {
#line 637 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__V_135_135, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                            }
#line 636 "hlds_out_util.m"
                          }
#line 630 "hlds_out_util.m"
                      }
#line 630 "hlds_out_util.m"
                    else
#line 630 "hlds_out_util.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 728 "hlds_out_util.m"
                        {
#line 728 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__V_44_44;
#line 728 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 728 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 728 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 728 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 728 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 728 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 728 "hlds_out_util.m"
                          MR_Word hlds__hlds_out__hlds_out_util__PredId_152;
#line 728 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_153;
#line 728 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_154;

#line 729 "hlds_out_util.m"
                          {
#line 729 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_44_44 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151);
                          }
#line 729 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__PredId_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 0)));
#line 729 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__ProcId_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 1)));
#line 730 "hlds_out_util.m"
                          {
#line 730 "hlds_out_util.m"
                            hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_153, &hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                          }
#line 733 "hlds_out_util.m"
                          {
#line 733 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_47_47 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_152);
                          }
#line 733 "hlds_out_util.m"
                          {
#line 733 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                          }
#line 733 "hlds_out_util.m"
                          {
#line 733 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) "))");
                          }
#line 733 "hlds_out_util.m"
                          {
#line 733 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_50_50);
                          }
#line 732 "hlds_out_util.m"
                          {
#line 732 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                          }
#line 731 "hlds_out_util.m"
                          {
#line 731 "hlds_out_util.m"
                            return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_46_46);
                          }
#line 728 "hlds_out_util.m"
                        }
#line 630 "hlds_out_util.m"
                      else
#line 630 "hlds_out_util.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 649 "hlds_out_util.m"
                          {
#line 649 "hlds_out_util.m"
                            MR_Float hlds__hlds_out__hlds_out_util__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 649 "hlds_out_util.m"
                            MR_Word hlds__hlds_out__hlds_out_util__V_130_130;

#line 650 "hlds_out_util.m"
                            {
#line 650 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 650 "hlds_out_util.m"
                              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_20);
#line 650 "hlds_out_util.m"
                            }
#line 650 "hlds_out_util.m"
                            {
#line 650 "hlds_out_util.m"
                              return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_130_130, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                            }
#line 649 "hlds_out_util.m"
                          }
#line 630 "hlds_out_util.m"
                        else
#line 630 "hlds_out_util.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 708 "hlds_out_util.m"
                            {
#line 708 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 708 "hlds_out_util.m"
                              MR_Word hlds__hlds_out__hlds_out_util__SubConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));
#line 708 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__SubStr_41;
#line 708 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 708 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 708 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 708 "hlds_out_util.m"
                              MR_String hlds__hlds_out__hlds_out_util__V_77_77;

#line 709 "hlds_out_util.m"
                              {
#line 709 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__SubStr_41 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__SubConsId_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                              }
#line 711 "hlds_out_util.m"
                              {
#line 711 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_39);
                              }
#line 711 "hlds_out_util.m"
                              {
#line 711 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_41, (MR_String) ")");
                              }
#line 711 "hlds_out_util.m"
                              {
#line 711 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_77_77);
                              }
#line 711 "hlds_out_util.m"
                              {
#line 711 "hlds_out_util.m"
                                hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                              }
#line 711 "hlds_out_util.m"
                              {
#line 711 "hlds_out_util.m"
                                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_73_73);
                              }
#line 708 "hlds_out_util.m"
                            }
#line 630 "hlds_out_util.m"
                          else
#line 630 "hlds_out_util.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 666 "hlds_out_util.m"
                              {
#line 666 "hlds_out_util.m"
                                MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));

#line 667 "hlds_out_util.m"
                                {
#line 667 "hlds_out_util.m"
                                  return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_139);
                                }
#line 666 "hlds_out_util.m"
                              }
#line 630 "hlds_out_util.m"
                            else
#line 630 "hlds_out_util.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 645 "hlds_out_util.m"
                                {
#line 645 "hlds_out_util.m"
                                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 645 "hlds_out_util.m"
                                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

#line 646 "hlds_out_util.m"
                                  {
#line 646 "hlds_out_util.m"
                                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "hlds_out_util.m"
                                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
#line 646 "hlds_out_util.m"
                                  }
#line 646 "hlds_out_util.m"
                                  {
#line 646 "hlds_out_util.m"
                                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                                  }
#line 645 "hlds_out_util.m"
                                }
#line 630 "hlds_out_util.m"
                              else
#line 630 "hlds_out_util.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 662 "hlds_out_util.m"
                                  {
#line 662 "hlds_out_util.m"
                                    MR_String hlds__hlds_out__hlds_out_util__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 662 "hlds_out_util.m"
                                    MR_Word hlds__hlds_out__hlds_out_util__V_125_125;

#line 663 "hlds_out_util.m"
                                    {
#line 663 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__V_125_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "hlds_out_util.m"
                                      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_125_125, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_22));
#line 663 "hlds_out_util.m"
                                    }
#line 663 "hlds_out_util.m"
                                    {
#line 663 "hlds_out_util.m"
                                      return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__V_125_125, hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11);
                                    }
#line 662 "hlds_out_util.m"
                                  }
#line 630 "hlds_out_util.m"
                                else
#line 630 "hlds_out_util.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 721 "hlds_out_util.m"
                                    {
#line 721 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__V_53_53;
#line 721 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 721 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 721 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_57_57;
#line 721 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 721 "hlds_out_util.m"
                                      MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 721 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 721 "hlds_out_util.m"
                                      MR_Word hlds__hlds_out__hlds_out_util__PredId_148;
#line 721 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__ProcId_149;
#line 721 "hlds_out_util.m"
                                      MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_150;

#line 722 "hlds_out_util.m"
                                      {
#line 722 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_53_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147);
                                      }
#line 722 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__PredId_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 722 "hlds_out_util.m"
                                      hlds__hlds_out__hlds_out_util__ProcId_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 723 "hlds_out_util.m"
                                      {
#line 723 "hlds_out_util.m"
                                        hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_149, &hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                                      }
#line 726 "hlds_out_util.m"
                                      {
#line 726 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_56_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_10, hlds__hlds_out__hlds_out_util__PredId_148);
                                      }
#line 726 "hlds_out_util.m"
                                      {
#line 726 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                                      }
#line 726 "hlds_out_util.m"
                                      {
#line 726 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, (MR_String) "))");
                                      }
#line 726 "hlds_out_util.m"
                                      {
#line 726 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_59_59);
                                      }
#line 725 "hlds_out_util.m"
                                      {
#line 725 "hlds_out_util.m"
                                        hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__V_57_57);
                                      }
#line 724 "hlds_out_util.m"
                                      {
#line 724 "hlds_out_util.m"
                                        return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_decl(", hlds__hlds_out__hlds_out_util__V_55_55);
                                      }
#line 721 "hlds_out_util.m"
                                    }
#line 630 "hlds_out_util.m"
                                  else
#line 630 "hlds_out_util.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 641 "hlds_out_util.m"
                                      {
#line 642 "hlds_out_util.m"
                                        {
#line 642 "hlds_out_util.m"
                                          return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0);
                                        }
#line 641 "hlds_out_util.m"
                                      }
#line 630 "hlds_out_util.m"
                                    else
#line 630 "hlds_out_util.m"
                                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 680 "hlds_out_util.m"
                                        {
#line 680 "hlds_out_util.m"
                                          MR_Integer hlds__hlds_out__hlds_out_util__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 3)));
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_118_118;
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__V_119_119;
#line 680 "hlds_out_util.m"
                                          MR_Word hlds__hlds_out__hlds_out_util__Module_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 680 "hlds_out_util.m"
                                          MR_String hlds__hlds_out__hlds_out_util__Name_141 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 2)));

#line 683 "hlds_out_util.m"
                                          {
#line 683 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_112_112 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_140);
                                          }
#line 683 "hlds_out_util.m"
                                          {
#line 683 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_32);
                                          }
#line 683 "hlds_out_util.m"
                                          {
#line 683 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_119_119, (MR_String) ")");
                                          }
#line 683 "hlds_out_util.m"
                                          {
#line 683 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_118_118);
                                          }
#line 683 "hlds_out_util.m"
                                          {
#line 683 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_141, hlds__hlds_out__hlds_out_util__V_116_116);
                                          }
#line 683 "hlds_out_util.m"
                                          {
#line 683 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_115_115);
                                          }
#line 682 "hlds_out_util.m"
                                          {
#line 682 "hlds_out_util.m"
                                            hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_112_112, hlds__hlds_out__hlds_out_util__V_113_113);
                                          }
#line 681 "hlds_out_util.m"
                                          {
#line 681 "hlds_out_util.m"
                                            return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_111_111);
                                          }
#line 680 "hlds_out_util.m"
                                        }
#line 630 "hlds_out_util.m"
                                      else
#line 630 "hlds_out_util.m"
                                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 702 "hlds_out_util.m"
                                          {
#line 702 "hlds_out_util.m"
                                            MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 702 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 702 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 703 "hlds_out_util.m"
                                            {
#line 703 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_37);
                                            }
#line 703 "hlds_out_util.m"
                                            {
#line 703 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_85_85, (MR_String) ")");
                                            }
#line 703 "hlds_out_util.m"
                                            {
#line 703 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_84_84);
                                            }
#line 702 "hlds_out_util.m"
                                          }
#line 630 "hlds_out_util.m"
                                        else
#line 705 "hlds_out_util.m"
                                          {
#line 705 "hlds_out_util.m"
                                            MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_7, (MR_Integer) 1)));
#line 705 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_80_80;
#line 705 "hlds_out_util.m"
                                            MR_String hlds__hlds_out__hlds_out_util__V_81_81;

#line 706 "hlds_out_util.m"
                                            {
#line 706 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_38);
                                            }
#line 706 "hlds_out_util.m"
                                            {
#line 706 "hlds_out_util.m"
                                              hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_81_81, (MR_String) ")");
                                            }
#line 706 "hlds_out_util.m"
                                            {
#line 706 "hlds_out_util.m"
                                              return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_80_80);
                                            }
#line 705 "hlds_out_util.m"
                                          }
#line 630 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__Str_12;
#line 630 "hlds_out_util.m"
      }
#line 630 "hlds_out_util.m"
      break;
#line 630 "hlds_out_util.m"
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
#line 623 "hlds_out_util.m"
  {
#line 623 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 623 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ConsId_8, hlds__hlds_out__hlds_out_util__ArgVars_9, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__ModuleInfo_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 624 "hlds_out_util.m"
    {
#line 624 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 624 "hlds_out_util.m"
      return;
    }
#line 623 "hlds_out_util.m"
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
#line 614 "hlds_out_util.m"
  {
#line 614 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 614 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 614 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 614 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
#line 614 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
#line 614 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
#line 614 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

#line 615 "hlds_out_util.m"
    {
#line 615 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_7);
    }
#line 616 "hlds_out_util.m"
    {
#line 616 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
#line 617 "hlds_out_util.m"
    {
#line 617 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 617 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 617 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_9));
#line 617 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
#line 617 "hlds_out_util.m"
    }
#line 618 "hlds_out_util.m"
    {
#line 618 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 620 "hlds_out_util.m"
    {
#line 620 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
#line 620 "hlds_out_util.m"
    {
#line 620 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 614 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 614 "hlds_out_util.m"
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
#line 609 "hlds_out_util.m"
  {
#line 609 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 609 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleName_8, hlds__hlds_out__hlds_out_util__Functor_9, hlds__hlds_out__hlds_out_util__ArgTerms_10, hlds__hlds_out__hlds_out_util__VarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 610 "hlds_out_util.m"
      return;
    }
#line 609 "hlds_out_util.m"
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
#line 602 "hlds_out_util.m"
  {
#line 602 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 602 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 602 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 602 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 602 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
#line 602 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 602 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 602 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 602 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 603 "hlds_out_util.m"
    {
#line 603 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_7);
    }
#line 590 "hlds_out_util.m"
    {
#line 590 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5757 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 591 "hlds_out_util.m"
    {
#line 591 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 592 "hlds_out_util.m"
    }
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 602 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 602 "hlds_out_util.m"
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
#line 597 "hlds_out_util.m"
  {
#line 597 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 597 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 598 "hlds_out_util.m"
    {
#line 598 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleName_8, hlds__hlds_out__hlds_out_util__Functor_9, hlds__hlds_out__hlds_out_util__ArgVars_10, hlds__hlds_out__hlds_out_util__VarSet_11, hlds__hlds_out__hlds_out_util__AppendVarNums_12);
    }
#line 598 "hlds_out_util.m"
    {
#line 598 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 598 "hlds_out_util.m"
      return;
    }
#line 597 "hlds_out_util.m"
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
#line 589 "hlds_out_util.m"
  {
#line 589 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 589 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 589 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
#line 589 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
#line 589 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
#line 589 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

#line 590 "hlds_out_util.m"
    {
#line 590 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
#line 5872 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 591 "hlds_out_util.m"
    {
#line 591 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_8, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_7));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
#line 592 "hlds_out_util.m"
    }
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_10, hlds__hlds_out__hlds_out_util__NextToGraphicToken_11, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 589 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 589 "hlds_out_util.m"
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
#line 584 "hlds_out_util.m"
  {
#line 584 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 584 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 584 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 584 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 584 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 584 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 590 "hlds_out_util.m"
    {
#line 590 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5938 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 591 "hlds_out_util.m"
    {
#line 591 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 592 "hlds_out_util.m"
    }
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_10, hlds__hlds_out__hlds_out_util__AppendVarNums_11, hlds__hlds_out__hlds_out_util__NextToGraphicToken_12, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 585 "hlds_out_util.m"
    {
#line 585 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 585 "hlds_out_util.m"
      return;
    }
#line 584 "hlds_out_util.m"
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
#line 579 "hlds_out_util.m"
  {
#line 579 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 579 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
#line 579 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

#line 590 "hlds_out_util.m"
    {
#line 590 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
#line 6007 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 591 "hlds_out_util.m"
    {
#line 591 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_7, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_6));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
#line 592 "hlds_out_util.m"
    }
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__AppendVarNums_9, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
#line 579 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 579 "hlds_out_util.m"
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
#line 575 "hlds_out_util.m"
  {
#line 575 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 575 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
#line 575 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 575 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
#line 575 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
#line 575 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

#line 590 "hlds_out_util.m"
    {
#line 590 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
#line 6071 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 591 "hlds_out_util.m"
    {
#line 591 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_8, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_7));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
#line 592 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
#line 592 "hlds_out_util.m"
    }
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__AppendVarNums_10, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
#line 585 "hlds_out_util.m"
    {
#line 585 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
#line 585 "hlds_out_util.m"
      return;
    }
#line 575 "hlds_out_util.m"
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
#line 489 "hlds_out_util.m"
  {
#line 489 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
#line 489 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 489 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
#line 489 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
#line 489 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

#line 500 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 499 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
#line 500 "hlds_out_util.m"
    else
#line 501 "hlds_out_util.m"
      {
#line 501 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 530 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 540 "hlds_out_util.m"
          {
#line 540 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 561 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) == (MR_mktag((MR_Integer) 0))))
#line 542 "hlds_out_util.m"
              {
#line 542 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 542 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
#line 542 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 544 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
#line 544 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 545 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
#line 548 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 547 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 548 "hlds_out_util.m"
                else
#line 551 "hlds_out_util.m"
                  {
#line 551 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__Main_28;
#line 551 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
#line 551 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__Expl_30;
#line 551 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 551 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_49_49;
#line 551 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_51_51;

#line 551 "hlds_out_util.m"
                    {
#line 551 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                    }
#line 551 "hlds_out_util.m"
                    {
#line 551 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                    }
#line 552 "hlds_out_util.m"
                    {
#line 552 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                    }
#line 553 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
#line 555 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 554 "hlds_out_util.m"
                      {
#line 554 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_40_40;

#line 554 "hlds_out_util.m"
                        {
#line 554 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                        }
#line 554 "hlds_out_util.m"
                        {
#line 554 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                        }
#line 554 "hlds_out_util.m"
                      }
#line 555 "hlds_out_util.m"
                    else
#line 556 "hlds_out_util.m"
                      {
#line 556 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 556 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_44_44;
#line 556 "hlds_out_util.m"
                        MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
#line 556 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_47_47;

#line 557 "hlds_out_util.m"
                        {
#line 557 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                        }
#line 557 "hlds_out_util.m"
                        {
#line 557 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                        }
#line 556 "hlds_out_util.m"
                        {
#line 556 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                        }
#line 556 "hlds_out_util.m"
                        {
#line 556 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                        }
#line 556 "hlds_out_util.m"
                      }
#line 559 "hlds_out_util.m"
                    {
#line 559 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                    }
#line 559 "hlds_out_util.m"
                    {
#line 559 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                    }
#line 559 "hlds_out_util.m"
                    {
#line 559 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                    }
#line 551 "hlds_out_util.m"
                  }
#line 542 "hlds_out_util.m"
              }
#line 561 "hlds_out_util.m"
            else
#line 565 "hlds_out_util.m"
              {
#line 565 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_36_36;

#line 566 "hlds_out_util.m"
                {
#line 566 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 566 "hlds_out_util.m"
                {
#line 566 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                }
#line 565 "hlds_out_util.m"
              }
#line 540 "hlds_out_util.m"
          }
#line 530 "hlds_out_util.m"
        else
#line 530 "hlds_out_util.m"
          {
#line 530 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
#line 530 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
#line 530 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 530 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

#line 530 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 530 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 530 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
#line 532 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
#line 532 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 533 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
#line 536 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 535 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 536 "hlds_out_util.m"
            else
#line 537 "hlds_out_util.m"
              {
#line 537 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

#line 537 "hlds_out_util.m"
                {
#line 537 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 537 "hlds_out_util.m"
                {
#line 537 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
#line 537 "hlds_out_util.m"
              }
#line 530 "hlds_out_util.m"
          }
#line 501 "hlds_out_util.m"
        {
#line 501 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
#line 501 "hlds_out_util.m"
      }
#line 509 "hlds_out_util.m"
    {
#line 509 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
#line 510 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
#line 510 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

#line 509 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
#line 509 "hlds_out_util.m"
      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 509 "hlds_out_util.m"
        {
#line 509 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 510 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
#line 510 "hlds_out_util.m"
          if (hlds__hlds_out__hlds_out_util__succeeded)
#line 510 "hlds_out_util.m"
            {
#line 510 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
#line 510 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
#line 510 "hlds_out_util.m"
            }
#line 510 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 509 "hlds_out_util.m"
        }
#line 509 "hlds_out_util.m"
    }
#line 511 "hlds_out_util.m"
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
#line 517 "hlds_out_util.m"
      {
#line 517 "hlds_out_util.m"
        {
#line 517 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 11);
        }
#line 517 "hlds_out_util.m"
      }
#line 521 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 520 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
#line 521 "hlds_out_util.m"
    else
#line 522 "hlds_out_util.m"
      {
#line 522 "hlds_out_util.m"
        {
#line 522 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
#line 522 "hlds_out_util.m"
      }
#line 524 "hlds_out_util.m"
    {
#line 524 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__CallId_5);
    }
#line 524 "hlds_out_util.m"
    {
#line 524 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 489 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 489 "hlds_out_util.m"
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
#line 484 "hlds_out_util.m"
  {
#line 484 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 484 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 484 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 2))
#line 486 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "equiv_type_cast";
#line 484 "hlds_out_util.m"
    else
#line 484 "hlds_out_util.m"
      if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 3))
#line 487 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exists_cast";
#line 484 "hlds_out_util.m"
      else
#line 484 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__1_1 == (MR_Integer) 0))
#line 484 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_cast";
#line 484 "hlds_out_util.m"
        else
#line 485 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_inst_cast";
#line 484 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 484 "hlds_out_util.m"
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
#line 467 "hlds_out_util.m"
  {
#line 467 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 467 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 467 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 469 "hlds_out_util.m"
      {
#line 469 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 474 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_4)) == (MR_mktag((MR_Integer) 3))))
#line 481 "hlds_out_util.m"
          {
#line 481 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__CastType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)));

#line 484 "hlds_out_util.m"
            if ((hlds__hlds_out__hlds_out_util__CastType_18 == (MR_Integer) 2))
#line 486 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "equiv_type_cast";
#line 484 "hlds_out_util.m"
            else
#line 484 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__CastType_18 == (MR_Integer) 3))
#line 487 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exists_cast";
#line 484 "hlds_out_util.m"
              else
#line 484 "hlds_out_util.m"
                if ((hlds__hlds_out__hlds_out_util__CastType_18 == (MR_Integer) 0))
#line 484 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_cast";
#line 484 "hlds_out_util.m"
                else
#line 485 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "unsafe_type_inst_cast";
#line 481 "hlds_out_util.m"
          }
#line 474 "hlds_out_util.m"
        else
#line 474 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_4)) == (MR_mktag((MR_Integer) 1))))
#line 477 "hlds_out_util.m"
            {
#line 477 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 1)));
#line 477 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___ClassId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)));

#line 477 "hlds_out_util.m"
              {
#line 477 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_15);
              }
#line 477 "hlds_out_util.m"
            }
#line 474 "hlds_out_util.m"
          else
#line 474 "hlds_out_util.m"
            if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_4)) == (MR_mktag((MR_Integer) 2))))
#line 479 "hlds_out_util.m"
              {
#line 479 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__EventName_16 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)));

#line 479 "hlds_out_util.m"
                {
#line 479 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_16);
                }
#line 479 "hlds_out_util.m"
              }
#line 474 "hlds_out_util.m"
            else
#line 474 "hlds_out_util.m"
              {
#line 474 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__Purity_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 474 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 474 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_8_8;
#line 474 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 474 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 474 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 474 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_4, (MR_Integer) 1)));

#line 475 "hlds_out_util.m"
                {
#line 475 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_8_8 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_5);
                }
#line 476 "hlds_out_util.m"
                {
#line 476 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_12_12 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_6);
                }
#line 476 "hlds_out_util.m"
                {
#line 476 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, (MR_String) " call");
                }
#line 475 "hlds_out_util.m"
                {
#line 475 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_11_11);
                }
#line 474 "hlds_out_util.m"
                {
#line 474 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_9_9);
                }
#line 474 "hlds_out_util.m"
              }
#line 469 "hlds_out_util.m"
      }
#line 467 "hlds_out_util.m"
    else
#line 467 "hlds_out_util.m"
      {
#line 467 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 467 "hlds_out_util.m"
        {
#line 467 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_3);
        }
#line 467 "hlds_out_util.m"
      }
#line 467 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 467 "hlds_out_util.m"
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
#line 338 "hlds_out_util.m"
  {
#line 338 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 338 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 0)));
#line 338 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 1)));
#line 338 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_11;
#line 338 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16;
#line 338 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17;

#line 340 "hlds_out_util.m"
    {
#line 340 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_10, &hlds__hlds_out__hlds_out_util__SubContexts_11);
    }
#line 341 "hlds_out_util.m"
    {
#line 341 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__MainContext_9, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17);
    }
#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13, hlds__hlds_out__hlds_out_util__SubContexts_11, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15);
#line 342 "hlds_out_util.m"
      return;
    }
#line 338 "hlds_out_util.m"
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
#line 335 "hlds_out_util.m"
  {
#line 335 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 335 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 0)));
#line 335 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 1)));
#line 335 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_20;
#line 335 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21;
#line 335 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22;
#line 342 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_6_6;

#line 340 "hlds_out_util.m"
    {
#line 340 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_19, &hlds__hlds_out__hlds_out_util__SubContexts_20);
    }
#line 341 "hlds_out_util.m"
    {
#line 341 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, hlds__hlds_out__hlds_out_util__MainContext_18, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22);
    }
#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, &hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__SubContexts_20, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8);
    }
#line 335 "hlds_out_util.m"
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
#line 325 "hlds_out_util.m"
  {
#line 325 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 325 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 325 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_9;
#line 325 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 325 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 325 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;

#line 326 "hlds_out_util.m"
    {
#line 326 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 327 "hlds_out_util.m"
    {
#line 327 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, hlds__hlds_out__hlds_out_util__V_11_11);
    }
#line 325 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 325 "hlds_out_util.m"
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
#line 321 "hlds_out_util.m"
  {
#line 321 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 321 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 321 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_18;
#line 321 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;
#line 321 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_20_20;
#line 321 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_22_22;

#line 326 "hlds_out_util.m"
    {
#line 326 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_8, &hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_6, hlds__hlds_out__hlds_out_util__PredId_7);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_22_22);
    }
#line 327 "hlds_out_util.m"
    {
#line 327 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_19_19, hlds__hlds_out__hlds_out_util__V_20_20);
    }
#line 322 "hlds_out_util.m"
    {
#line 322 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_12_12);
#line 322 "hlds_out_util.m"
      return;
    }
#line 321 "hlds_out_util.m"
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
#line 318 "hlds_out_util.m"
  {
#line 318 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 318 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 318 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_11;
#line 318 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 318 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;
#line 318 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 326 "hlds_out_util.m"
    {
#line 326 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_6, &hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, hlds__hlds_out__hlds_out_util__PredId_5);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_15_15);
    }
#line 327 "hlds_out_util.m"
    {
#line 327 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 318 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 318 "hlds_out_util.m"
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
#line 315 "hlds_out_util.m"
  {
#line 315 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 315 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;
#line 315 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_24;
#line 315 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_25_25;
#line 315 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;
#line 315 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_28_28;

#line 326 "hlds_out_util.m"
    {
#line 326 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_28_28 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 328 "hlds_out_util.m"
    {
#line 328 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_28_28);
    }
#line 327 "hlds_out_util.m"
    {
#line 327 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_25_25, hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 322 "hlds_out_util.m"
    {
#line 322 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_18_18);
#line 322 "hlds_out_util.m"
      return;
    }
#line 315 "hlds_out_util.m"
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
#line 260 "hlds_out_util.m"
  {
#line 260 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 260 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
#line 260 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
#line 309 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
#line 262 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

#line 261 "hlds_out_util.m"
    {
#line 261 "hlds_out_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
#line 262 "hlds_out_util.m"
    {
#line 262 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
#line 262 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 262 "hlds_out_util.m"
      {
#line 262 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
#line 262 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 262 "hlds_out_util.m"
      }
#line 309 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 263 "hlds_out_util.m"
      {
#line 263 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Module_9;
#line 263 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Name_10;
#line 263 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Arity_11;
#line 263 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_12;
#line 263 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Origin_13;

#line 263 "hlds_out_util.m"
        {
#line 263 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Module_9 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 264 "hlds_out_util.m"
        {
#line 264 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 265 "hlds_out_util.m"
        {
#line 265 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 266 "hlds_out_util.m"
        {
#line 266 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 267 "hlds_out_util.m"
        {
#line 267 "hlds_out_util.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__Origin_13);
        }
#line 278 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 1))))
#line 279 "hlds_out_util.m"
          {
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__MethodName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__ClassId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 0)));
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 1)));
#line 279 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__MethodStr_26;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__ClassName_27;
#line 279 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__ClassStr_29;
#line 279 "hlds_out_util.m"
            MR_String hlds__hlds_out__hlds_out_util__TypeStrs_30;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_56_56;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_59_59;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_60_60;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_63_63;
#line 279 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_65_65;
#line 280 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 2)));
#line 280 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 3)));
#line 284 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_28_28;

#line 282 "hlds_out_util.m"
            {
#line 282 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__MethodStr_26 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__MethodName_20, hlds__hlds_out__hlds_out_util__Arity_11);
            }
#line 284 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 0)));
#line 284 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 1)));
#line 285 "hlds_out_util.m"
            {
#line 285 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ClassStr_29 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_27);
            }
#line 286 "hlds_out_util.m"
            {
#line 286 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_56_56 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
#line 286 "hlds_out_util.m"
            {
#line 286 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeStrs_30 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__InstanceTypes_23);
            }
#line 289 "hlds_out_util.m"
            {
#line 289 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_30));
#line 289 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
#line 289 "hlds_out_util.m"
            }
#line 289 "hlds_out_util.m"
            {
#line 289 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_63_63, 0) = ((MR_Box) ((MR_String) "("));
#line 289 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_65_65));
#line 289 "hlds_out_util.m"
            }
#line 289 "hlds_out_util.m"
            {
#line 289 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_29));
#line 289 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_62_62, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_63_63));
#line 289 "hlds_out_util.m"
            }
#line 288 "hlds_out_util.m"
            {
#line 288 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_60_60, 0) = ((MR_Box) ((MR_String) " for \140"));
#line 288 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_60_60, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_62_62));
#line 288 "hlds_out_util.m"
            }
#line 288 "hlds_out_util.m"
            {
#line 288 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_59_59, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_26));
#line 288 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_60_60));
#line 288 "hlds_out_util.m"
            }
#line 287 "hlds_out_util.m"
            {
#line 287 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) ((MR_String) "instance method "));
#line 287 "hlds_out_util.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_59_59));
#line 287 "hlds_out_util.m"
            }
#line 287 "hlds_out_util.m"
            {
#line 287 "hlds_out_util.m"
              return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_57_57);
            }
#line 279 "hlds_out_util.m"
          }
#line 278 "hlds_out_util.m"
        else
#line 278 "hlds_out_util.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 0))))
#line 269 "hlds_out_util.m"
            {
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SpecialId_14;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_15;
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Descr_16;
#line 269 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_18;
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ForStr_19;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 271 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_17;

#line 269 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_69_69, (MR_Integer) 0)));
#line 269 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_69_69, (MR_Integer) 1)));
#line 270 "hlds_out_util.m"
              {
#line 270 "hlds_out_util.m"
                hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_14, &hlds__hlds_out__hlds_out_util__Descr_16);
              }
#line 271 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util___TypeSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 0)));
#line 271 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 1)));
#line 272 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_18 == (MR_Integer) 0);
#line 274 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 273 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type ";
#line 274 "hlds_out_util.m"
              else
#line 275 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type constructor ";
#line 277 "hlds_out_util.m"
              {
#line 277 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_71_71 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_15);
              }
#line 277 "hlds_out_util.m"
              {
#line 277 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_19, hlds__hlds_out__hlds_out_util__V_71_71);
              }
#line 277 "hlds_out_util.m"
              {
#line 277 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_16, hlds__hlds_out__hlds_out_util__V_70_70);
              }
#line 269 "hlds_out_util.m"
            }
#line 278 "hlds_out_util.m"
          else
#line 278 "hlds_out_util.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 292 "hlds_out_util.m"
              {
#line 292 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__FileName_31 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 292 "hlds_out_util.m"
                MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 297 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__PromiseType_33;

#line 293 "hlds_out_util.m"
                {
#line 293 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__PromiseType_33);
                }
#line 297 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 294 "hlds_out_util.m"
                  {
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 294 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 295 "hlds_out_util.m"
                    {
#line 295 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_47_47 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_33);
                    }
#line 7294 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7296 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__LineNumber_32);
                    }
#line 7299 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7301 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_78_78, (MR_String) ")");
                    }
#line 7304 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7306 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_79_79);
                    }
#line 7309 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7311 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__FileName_31, hlds__hlds_out__hlds_out_util__V_81_81);
                    }
#line 7314 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7316 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_82_82);
                    }
#line 7319 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7321 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_84_84);
                    }
#line 7324 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 7326 "hlds.hlds_out.hlds_out_util.c"
                      return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_85_85);
                    }
#line 294 "hlds_out_util.m"
                  }
#line 297 "hlds_out_util.m"
                else
#line 298 "hlds_out_util.m"
                  {
#line 298 "hlds_out_util.m"
                    {
#line 298 "hlds_out_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_util", (MR_String) "function \140hlds.hlds_out.hlds_out_util.pred_id_to_string\'/2", (MR_String) "origin_assertion");
                    }
#line 298 "hlds_out_util.m"
                  }
#line 292 "hlds_out_util.m"
              }
#line 278 "hlds_out_util.m"
            else
#line 305 "hlds_out_util.m"
              {
#line 305 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;

#line 306 "hlds_out_util.m"
                {
#line 306 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 306 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 306 "hlds_out_util.m"
                }
#line 306 "hlds_out_util.m"
                {
#line 306 "hlds_out_util.m"
                  return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__V_43_43, hlds__hlds_out__hlds_out_util__Arity_11);
                }
#line 305 "hlds_out_util.m"
              }
#line 263 "hlds_out_util.m"
      }
#line 309 "hlds_out_util.m"
    else
#line 311 "hlds_out_util.m"
      {
#line 311 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_42;
#line 311 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_73_73;

#line 311 "hlds_out_util.m"
        {
#line 311 "hlds_out_util.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_42);
        }
#line 312 "hlds_out_util.m"
        {
#line 312 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_42);
        }
#line 312 "hlds_out_util.m"
        {
#line 312 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_73_73);
        }
#line 311 "hlds_out_util.m"
      }
#line 260 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_6;
#line 260 "hlds_out_util.m"
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
#line 254 "hlds_out_util.m"
  {
#line 254 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 254 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 258 "hlds_out_util.m"
    {
#line 258 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 258 "hlds_out_util.m"
    {
#line 258 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
#line 258 "hlds_out_util.m"
      return;
    }
#line 254 "hlds_out_util.m"
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
#line 246 "hlds_out_util.m"
  {
#line 246 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 246 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_9_9;

#line 247 "hlds_out_util.m"
    {
#line 247 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_4));
#line 247 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_5));
#line 247 "hlds_out_util.m"
    }
#line 247 "hlds_out_util.m"
    {
#line 247 "hlds_out_util.m"
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__hlds_out__hlds_out_util__V_9_9);
#line 247 "hlds_out_util.m"
      return;
    }
#line 246 "hlds_out_util.m"
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
#line 243 "hlds_out_util.m"
  {
#line 243 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 243 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 243 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_5_5;

#line 244 "hlds_out_util.m"
    {
#line 244 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_5_5, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_3));
#line 244 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_5_5, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_4));
#line 244 "hlds_out_util.m"
    }
#line 243 "hlds_out_util.m"
    {
#line 243 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_5_5);
    }
#line 243 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 243 "hlds_out_util.m"
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
#line 240 "hlds_out_util.m"
  {
#line 240 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 240 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 240 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 240 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_9_9;

#line 241 "hlds_out_util.m"
    {
#line 241 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_4));
#line 241 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Arity_5));
#line 241 "hlds_out_util.m"
    }
#line 241 "hlds_out_util.m"
    {
#line 241 "hlds_out_util.m"
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(hlds__hlds_out__hlds_out_util__V_9_9);
#line 241 "hlds_out_util.m"
      return;
    }
#line 240 "hlds_out_util.m"
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
#line 228 "hlds_out_util.m"
  {
#line 228 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 228 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Info_4;
#line 228 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_5;
#line 228 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Ids_6;
#line 228 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Names_7;
#line 228 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_8;

#line 229 "hlds_out_util.m"
    {
#line 229 "hlds_out_util.m"
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 144, &hlds__hlds_out__hlds_out_util__DumpOptions_5);
    }
#line 230 "hlds_out_util.m"
    {
#line 230 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 141, &hlds__hlds_out__hlds_out_util__Ids_6);
    }
#line 231 "hlds_out_util.m"
    {
#line 231 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_3, (MR_Integer) 142, &hlds__hlds_out__hlds_out_util__Names_7);
    }
#line 232 "hlds_out_util.m"
    {
#line 232 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__MercInfo_8 = parse_tree__mercury_to_mercury__init_merc_out_info_for_hlds_dump_1_f_0(hlds__hlds_out__hlds_out_util__Globals_3);
    }
#line 233 "hlds_out_util.m"
    {
#line 233 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 233 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_5));
#line 233 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_5));
#line 233 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_6));
#line 233 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_7));
#line 233 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_4, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_8));
#line 233 "hlds_out_util.m"
    }
#line 228 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Info_4;
#line 228 "hlds_out_util.m"
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
