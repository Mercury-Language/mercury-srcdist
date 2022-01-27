/*
** Automatically generated from `hlds_out_util.m'
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


/* :- module hlds.hlds_out.hlds_out_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_util__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_util.mih"


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
#include "term_io.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 151 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 157 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 163 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 169 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 172 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

#line 175 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

#line 178 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

#line 181 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

#line 184 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

#line 187 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

#line 190 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

#line 193 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

#line 196 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

#line 199 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

#line 202 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

#line 205 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

#line 208 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

#line 211 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

#line 214 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

#line 217 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

#line 220 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

#line 223 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

#line 226 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

#line 229 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

#line 232 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

#line 235 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

#line 238 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 241 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 243 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 246 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 249 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 251 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 253 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 256 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 259 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 261 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 264 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 267 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 269 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 271 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 274 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 277 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 279 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 282 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 285 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 287 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 289 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 292 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 295 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 297 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 300 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 303 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 305 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 307 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 776 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__776__1_3_p_0(
#line 776 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_102,
#line 776 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_103,
#line 776 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_104);

#line 1044 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1044 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1044 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

#line 996 "hlds_out_util.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
#line 996 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1);

#line 894 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 894 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 894 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 894 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 894 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4);

#line 469 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 469 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 469 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 469 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7);

#line 447 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 447 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 447 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 447 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 447 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13);

#line 423 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 423 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 423 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 423 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 423 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9);

#line 404 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 404 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 404 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5);

#line 363 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 363 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 363 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 363 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 363 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 363 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19);

#line 925 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 925 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 925 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

#line 892 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 892 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 892 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 892 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 892 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 775 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 775 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 775 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 775 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 775 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8];


#line 503 "hlds_out_util.m"
/* sealed */ struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s {
#line 503 "hlds_out_util.m"
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 503 "hlds_out_util.m"
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[12];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of clause head:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "list element"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "#"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of functor"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3] = {
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_5[0])),
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
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "type_info_cell_constructor"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[12] = {
  /* row 0 */   {     (MR_String) "unsafe_type_cast" },
  /* row 1 */   {     (MR_String) "unsafe_type_inst_cast" },
  /* row 2 */   {     (MR_String) "equiv_type_cast" },
  /* row 3 */   {     (MR_String) "exists_cast" },
  /* row 4 */   {     (MR_String) "unsafe_type_cast" },
  /* row 5 */   {     (MR_String) "unsafe_type_inst_cast" },
  /* row 6 */   {     (MR_String) "equiv_type_cast" },
  /* row 7 */   {     (MR_String) "exists_cast" },
  /* row 8 */   {     (MR_String) "imported in the implementation" },
  /* row 9 */   {     (MR_String) "imported in the interface" },
  /* row 10 */   {     (MR_String) "imported by an ancestor" },
  /* row 11 */   {     (MR_String) "imported from an ancestor\'s private interface" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 663 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 671 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 680 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 688 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 696 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 704 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 713 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 721 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0
};

#line 730 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

#line 739 "hlds.hlds_out.hlds_out_util.c"
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

#line 754 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 759 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

#line 768 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 773 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 778 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_out_info",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0
};

#line 795 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

#line 801 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

#line 807 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 813 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 819 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 825 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_first",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0
};

#line 842 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

#line 848 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

#line 854 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 860 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 866 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 872 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "is_last",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0
};

#line 889 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

#line 895 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

#line 901 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

#line 907 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

#line 913 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 919 "hlds.hlds_out.hlds_out_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "maybe_qualify_cons_id",
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0 },
  {     hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0
};

#line 936 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 939 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 941 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 943 "hlds.hlds_out.hlds_out_util.c"
{
#line 945 "hlds.hlds_out.hlds_out_util.c"
  {
#line 947 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 950 "hlds.hlds_out.hlds_out_util.c"
    {
#line 952 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 955 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 957 "hlds.hlds_out.hlds_out_util.c"
  }
#line 959 "hlds.hlds_out.hlds_out_util.c"
}

#line 962 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 965 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 967 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 969 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 971 "hlds.hlds_out.hlds_out_util.c"
{
#line 973 "hlds.hlds_out.hlds_out_util.c"
  {
#line 975 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 978 "hlds.hlds_out.hlds_out_util.c"
    {
#line 980 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 983 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 985 "hlds.hlds_out.hlds_out_util.c"
  }
#line 987 "hlds.hlds_out.hlds_out_util.c"
}

#line 990 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 993 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 995 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 997 "hlds.hlds_out.hlds_out_util.c"
{
#line 999 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1001 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1004 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1006 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1009 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1011 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1013 "hlds.hlds_out.hlds_out_util.c"
}

#line 1016 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 1019 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1021 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1023 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1025 "hlds.hlds_out.hlds_out_util.c"
{
#line 1027 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1029 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1032 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1034 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1037 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1039 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1041 "hlds.hlds_out.hlds_out_util.c"
}

#line 1044 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 1047 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1049 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1051 "hlds.hlds_out.hlds_out_util.c"
{
#line 1053 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1055 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1058 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1060 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1063 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1065 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1067 "hlds.hlds_out.hlds_out_util.c"
}

#line 1070 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 1073 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1075 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1077 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1079 "hlds.hlds_out.hlds_out_util.c"
{
#line 1081 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1083 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1086 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1088 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1091 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1093 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1095 "hlds.hlds_out.hlds_out_util.c"
}

#line 1098 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 1101 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1103 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1105 "hlds.hlds_out.hlds_out_util.c"
{
#line 1107 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1109 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1112 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1114 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1117 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1119 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1121 "hlds.hlds_out.hlds_out_util.c"
}

#line 1124 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 1127 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1129 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1131 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1133 "hlds.hlds_out.hlds_out_util.c"
{
#line 1135 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1137 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1140 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1142 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1145 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1147 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1149 "hlds.hlds_out.hlds_out_util.c"
}

#line 776 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__776__1_3_p_0(
#line 776 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_102,
#line 776 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_103,
#line 776 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_104)
#line 776 "hlds_out_util.m"
{
#line 776 "hlds_out_util.m"
  {
#line 776 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_102 == (MR_Char) 42);

#line 776 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 777 "hlds_out_util.m"
      {
#line 777 "hlds_out_util.m"
        {
#line 777 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_103, (MR_String) "star", hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_104);
        }
#line 777 "hlds_out_util.m"
      }
#line 776 "hlds_out_util.m"
    else
#line 779 "hlds_out_util.m"
      {
#line 779 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

#line 779 "hlds_out_util.m"
        {
#line 779 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__LambdaHeadVar__1_102, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
#line 780 "hlds_out_util.m"
        {
#line 780 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__LambdaHeadVar__2_103, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__LambdaHeadVar__3_104);
        }
#line 779 "hlds_out_util.m"
      }
#line 776 "hlds_out_util.m"
  }
#line 776 "hlds_out_util.m"
}

#line 156 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
#line 156 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 156 "hlds_out_util.m"
{
#line 156 "hlds_out_util.m"
  {
#line 156 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 156 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 156 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 156 "hlds_out_util.m"
    {
#line 156 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
    }
#line 156 "hlds_out_util.m"
  }
#line 156 "hlds_out_util.m"
}

#line 156 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 156 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 156 "hlds_out_util.m"
{
#line 1242 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1244 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1247 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1249 "hlds.hlds_out.hlds_out_util.c"
  }
#line 156 "hlds_out_util.m"
}

#line 57 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
#line 57 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 57 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 57 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 57 "hlds_out_util.m"
{
#line 57 "hlds_out_util.m"
  {
#line 57 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 57 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 57 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 57 "hlds_out_util.m"
    {
#line 57 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
    }
#line 57 "hlds_out_util.m"
  }
#line 57 "hlds_out_util.m"
}

#line 57 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
#line 57 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 57 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 57 "hlds_out_util.m"
{
#line 1293 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1295 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1298 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1300 "hlds.hlds_out.hlds_out_util.c"
  }
#line 57 "hlds_out_util.m"
}

#line 53 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
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
    }
#line 53 "hlds_out_util.m"
  }
#line 53 "hlds_out_util.m"
}

#line 53 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
#line 53 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 53 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 53 "hlds_out_util.m"
{
#line 1344 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1346 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1349 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1351 "hlds.hlds_out.hlds_out_util.c"
  }
#line 53 "hlds_out_util.m"
}

#line 40 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
#line 40 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 40 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 40 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 40 "hlds_out_util.m"
{
#line 40 "hlds_out_util.m"
  {
#line 40 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 40 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_18 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 40 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_19 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 40 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_18 == hlds__hlds_out__hlds_out_util__CastY_19);
#line 40 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1380 "hlds.hlds_out.hlds_out_util.c"
      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "hlds_out_util.m"
    else
#line 40 "hlds_out_util.m"
      {
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_14_14;

#line 40 "hlds_out_util.m"
        {
#line 40 "hlds_out_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_14_14, hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9);
        }
#line 1414 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_14_14 == (MR_Integer) 0);
#line 40 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 40 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_14_14;
#line 40 "hlds_out_util.m"
        else
#line 40 "hlds_out_util.m"
          {
#line 40 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 40 "hlds_out_util.m"
            {
#line 40 "hlds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_10_10);
            }
#line 1434 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 0);
#line 40 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 40 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_15_15;
#line 40 "hlds_out_util.m"
            else
#line 40 "hlds_out_util.m"
              {
#line 40 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_16_16;

#line 40 "hlds_out_util.m"
                {
#line 40 "hlds_out_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                }
#line 1454 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_16_16 == (MR_Integer) 0);
#line 40 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 40 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
                  *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_16_16;
#line 40 "hlds_out_util.m"
                else
#line 40 "hlds_out_util.m"
                  {
#line 40 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__V_17_17;

#line 40 "hlds_out_util.m"
                    {
#line 40 "hlds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_17_17, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_7_7)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_12_12)));
                    }
#line 1474 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_17_17 == (MR_Integer) 0);
#line 40 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 40 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
                      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_17_17;
#line 40 "hlds_out_util.m"
                    else
#line 40 "hlds_out_util.m"
                      {
#line 40 "hlds_out_util.m"
                        parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_13_13);
                      }
#line 40 "hlds_out_util.m"
                  }
#line 40 "hlds_out_util.m"
              }
#line 40 "hlds_out_util.m"
          }
#line 40 "hlds_out_util.m"
      }
#line 40 "hlds_out_util.m"
  }
#line 40 "hlds_out_util.m"
}

#line 40 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
#line 40 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 40 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 40 "hlds_out_util.m"
{
#line 40 "hlds_out_util.m"
  {
#line 40 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 40 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_13 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__1_1;
#line 40 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_14 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 40 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_13 == hlds__hlds_out__hlds_out_util__CastY_14);
#line 40 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 40 "hlds_out_util.m"
    else
#line 40 "hlds_out_util.m"
      {
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_15_15;
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_16_16;
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));

#line 1555 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
#line 40 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
          {
#line 1561 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
#line 40 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
              {
#line 1567 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1569 "hlds.hlds_out.hlds_out_util.c"
                {
#line 1571 "hlds.hlds_out.hlds_out_util.c"
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
#line 40 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 40 "hlds_out_util.m"
                  {
#line 1578 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1580 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 1582 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
#line 40 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1587 "hlds.hlds_out.hlds_out_util.c"
                      {
#line 1589 "hlds.hlds_out.hlds_out_util.c"
                        hlds__hlds_out__hlds_out_util__succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__V_7_7, hlds__hlds_out__hlds_out_util__V_12_12);
                      }
#line 40 "hlds_out_util.m"
                  }
#line 40 "hlds_out_util.m"
              }
#line 40 "hlds_out_util.m"
          }
#line 40 "hlds_out_util.m"
      }
#line 40 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 40 "hlds_out_util.m"
  }
#line 40 "hlds_out_util.m"
}

#line 1044 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1044 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1044 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
#line 1044 "hlds_out_util.m"
{
#line 1047 "hlds_out_util.m"
  while (MR_TRUE)
#line 1047 "hlds_out_util.m"
    {
#line 1047 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1047 "hlds_out_util.m"
      {
#line 1047 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1048 "hlds_out_util.m"
        {
#line 1048 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
#line 1053 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "hlds_out_util.m"
          {
#line 1054 "hlds_out_util.m"
          }
#line 1053 "hlds_out_util.m"
        else
#line 1050 "hlds_out_util.m"
          {
#line 1050 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
#line 1050 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

#line 1051 "hlds_out_util.m"
            {
#line 1051 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1052 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1052 "hlds_out_util.m"
            {
#line 1052 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
#line 1052 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

#line 1052 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
#line 1052 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
#line 1052 "hlds_out_util.m"
            }
#line 1052 "hlds_out_util.m"
            continue;
#line 1050 "hlds_out_util.m"
          }
#line 1047 "hlds_out_util.m"
      }
#line 1047 "hlds_out_util.m"
      break;
#line 1047 "hlds_out_util.m"
    }
#line 1044 "hlds_out_util.m"
}

#line 996 "hlds_out_util.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
#line 996 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 996 "hlds_out_util.m"
{
#line 998 "hlds_out_util.m"
  {
#line 998 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 998 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 998 "hlds_out_util.m"
#line 998 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 998 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 998 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 998 "hlds_out_util.m"
#line 998 "hlds_out_util.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 998 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 998 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 1021 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "opt_imported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 1019 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "abstract_imported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 1023 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "pseudo_imported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 1000 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 4:
#line 1002 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "opt_exported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 5:
#line 1004 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "abstract_exported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 6:
#line 1006 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "pseudo_exported";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 7:
#line 1025 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exported_to_submodules";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
          case (MR_Integer) 8:
#line 998 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "local";
#line 998 "hlds_out_util.m"
            break;
#line 998 "hlds_out_util.m"
        }
#line 998 "hlds_out_util.m"
        break;
#line 998 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 1017 "hlds_out_util.m"
        {
#line 1017 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Status_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1017 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 1017 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 1018 "hlds_out_util.m"
          {
#line 1018 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Status_7);
          }
#line 1018 "hlds_out_util.m"
          {
#line 1018 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) ")");
          }
#line 1018 "hlds_out_util.m"
          {
#line 1018 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
#line 1017 "hlds_out_util.m"
        }
#line 998 "hlds_out_util.m"
        break;
#line 998 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 998 "hlds_out_util.m"
        {
#line 998 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 998 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[8 + hlds__hlds_out__hlds_out_util__V_12_12]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 998 "hlds_out_util.m"
        }
#line 998 "hlds_out_util.m"
        break;
#line 998 "hlds_out_util.m"
    }
#line 998 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 998 "hlds_out_util.m"
  }
#line 996 "hlds_out_util.m"
}

#line 894 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 894 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 894 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 894 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 894 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 894 "hlds_out_util.m"
{
#line 898 "hlds_out_util.m"
  {
#line 898 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 898 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 898 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

#line 899 "hlds_out_util.m"
    {
#line 899 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
#line 900 "hlds_out_util.m"
    {
#line 900 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 901 "hlds_out_util.m"
    {
#line 901 "hlds_out_util.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
#line 902 "hlds_out_util.m"
    {
#line 902 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 907 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
#line 904 "hlds_out_util.m"
      {
#line 904 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 905 "hlds_out_util.m"
        {
#line 905 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
#line 906 "hlds_out_util.m"
        {
#line 906 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
        }
#line 904 "hlds_out_util.m"
      }
#line 907 "hlds_out_util.m"
    else
#line 908 "hlds_out_util.m"
      {
#line 908 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 909 "hlds_out_util.m"
        {
#line 909 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
#line 910 "hlds_out_util.m"
        {
#line 910 "hlds_out_util.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Super_14);
        }
#line 908 "hlds_out_util.m"
      }
#line 898 "hlds_out_util.m"
  }
#line 894 "hlds_out_util.m"
}

#line 469 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 469 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 469 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 469 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7)
#line 469 "hlds_out_util.m"
{
#line 474 "hlds_out_util.m"
  {
#line 474 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 474 "hlds_out_util.m"
#line 474 "hlds_out_util.m"
    switch (hlds__hlds_out__hlds_out_util__First_4) {
#line 474 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 474 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 474 "hlds_out_util.m"
        {
#line 477 "hlds_out_util.m"
          {
#line 477 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
          }
#line 474 "hlds_out_util.m"
        }
#line 474 "hlds_out_util.m"
        break;
#line 474 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 479 "hlds_out_util.m"
        {
#line 480 "hlds_out_util.m"
          {
#line 480 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
#line 479 "hlds_out_util.m"
        }
#line 474 "hlds_out_util.m"
        break;
#line 474 "hlds_out_util.m"
    }
#line 474 "hlds_out_util.m"
  }
#line 469 "hlds_out_util.m"
}

#line 447 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 447 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 447 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 447 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 447 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13)
#line 447 "hlds_out_util.m"
{
#line 450 "hlds_out_util.m"
  {
#line 450 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ConsId_8;
#line 450 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9;
#line 450 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 450 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ConsIdStr_11;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_16_16;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_20_20;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_21_21;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_24_24;
#line 450 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_25_25;

#line 474 "hlds_out_util.m"
#line 474 "hlds_out_util.m"
    switch (hlds__hlds_out__hlds_out_util__First_5) {
#line 474 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 474 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 474 "hlds_out_util.m"
        {
#line 477 "hlds_out_util.m"
          {
#line 477 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
          }
#line 474 "hlds_out_util.m"
        }
#line 474 "hlds_out_util.m"
        break;
#line 474 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 479 "hlds_out_util.m"
        {
#line 480 "hlds_out_util.m"
          {
#line 480 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
#line 479 "hlds_out_util.m"
        }
#line 474 "hlds_out_util.m"
        break;
#line 474 "hlds_out_util.m"
    }
#line 452 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 0)));
#line 452 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 1)));
#line 453 "hlds_out_util.m"
    {
#line 453 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
    }
#line 456 "hlds_out_util.m"
    {
#line 456 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
#line 457 "hlds_out_util.m"
    {
#line 457 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 457 "hlds_out_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 457 "hlds_out_util.m"
    }
#line 458 "hlds_out_util.m"
    {
#line 458 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hlds_out_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 458 "hlds_out_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
#line 458 "hlds_out_util.m"
    }
#line 458 "hlds_out_util.m"
    {
#line 458 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_25_25));
#line 458 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 458 "hlds_out_util.m"
    }
#line 458 "hlds_out_util.m"
    {
#line 458 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[17])));
#line 458 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_24_24));
#line 458 "hlds_out_util.m"
    }
#line 457 "hlds_out_util.m"
    {
#line 457 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_20_20));
#line 457 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_21_21));
#line 457 "hlds_out_util.m"
    }
#line 457 "hlds_out_util.m"
    {
#line 457 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 457 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_19_19));
#line 457 "hlds_out_util.m"
    }
#line 457 "hlds_out_util.m"
    {
#line 457 "hlds_out_util.m"
      *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 450 "hlds_out_util.m"
  }
#line 447 "hlds_out_util.m"
}

#line 423 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 423 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 423 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 423 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 423 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9)
#line 423 "hlds_out_util.m"
{
#line 427 "hlds_out_util.m"
  while (MR_TRUE)
#line 427 "hlds_out_util.m"
    {
#line 427 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 427 "hlds_out_util.m"
      {
#line 427 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 427 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContext_5;
#line 427 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 427 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__ConsId_10;
#line 427 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_11;
#line 427 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Functor_12;
#line 427 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__V_15_15;
#line 429 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13;

#line 426 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 426 "hlds_out_util.m"
          {
#line 426 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 426 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 0)));
#line 428 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 1)));
#line 429 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 429 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 429 "hlds_out_util.m"
              {
#line 429 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 429 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 429 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 429 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 2);
#line 427 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 427 "hlds_out_util.m"
                  {
#line 433 "hlds_out_util.m"
                    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Functor_12)) == (MR_mktag((MR_Integer) 1))))
#line 434 "hlds_out_util.m"
                      {
#line 434 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ModuleSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));
#line 434 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 1)));
#line 434 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_17_17;
#line 434 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_21_21;

#line 434 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_16_16, (MR_String) "[|]") == 0);
#line 434 "hlds_out_util.m"
                        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 434 "hlds_out_util.m"
                          {
#line 435 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_17_17 = (MR_String) "list";
#line 435 "hlds_out_util.m"
                            {
#line 435 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(hlds__hlds_out__hlds_out_util__ModuleSymName_14, &hlds__hlds_out__hlds_out_util__V_21_21);
                            }
#line 434 "hlds_out_util.m"
                            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 435 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_17_17, hlds__hlds_out__hlds_out_util__V_21_21) == 0);
#line 434 "hlds_out_util.m"
                          }
#line 434 "hlds_out_util.m"
                      }
#line 433 "hlds_out_util.m"
                    else
#line 432 "hlds_out_util.m"
                      {
#line 432 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));

#line 432 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_18_18, (MR_String) "[|]") == 0);
#line 432 "hlds_out_util.m"
                      }
#line 427 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 441 "hlds_out_util.m"
#line 441 "hlds_out_util.m"
                      switch (hlds__hlds_out__hlds_out_util__ArgNum_11) {
#line 441 "hlds_out_util.m"
                        default:
#line 441 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
#line 441 "hlds_out_util.m"
                          break;
#line 441 "hlds_out_util.m"
                        case (MR_Integer) 1:
#line 438 "hlds_out_util.m"
                          {
#line 439 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__ElementNum_8 = hlds__hlds_out__hlds_out_util__NumElementsBefore_7;
#line 440 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__AfterContexts_9 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 438 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 438 "hlds_out_util.m"
                          }
#line 441 "hlds_out_util.m"
                          break;
#line 441 "hlds_out_util.m"
                        case (MR_Integer) 2:
#line 442 "hlds_out_util.m"
                          {
#line 442 "hlds_out_util.m"
                            MR_Integer hlds__hlds_out__hlds_out_util__V_19_19 = (hlds__hlds_out__hlds_out_util__NumElementsBefore_7 + (MR_Integer) 1);

#line 443 "hlds_out_util.m"
                            /* direct tailcall eliminated */
#line 443 "hlds_out_util.m"
                            {
#line 443 "hlds_out_util.m"
                              MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 443 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7 = hlds__hlds_out__hlds_out_util__V_19_19;

#line 443 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__NumElementsBefore_7 = hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7;
#line 443 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1;
#line 443 "hlds_out_util.m"
                            }
#line 443 "hlds_out_util.m"
                            continue;
#line 442 "hlds_out_util.m"
                          }
#line 441 "hlds_out_util.m"
                          break;
#line 441 "hlds_out_util.m"
                      }
#line 427 "hlds_out_util.m"
                  }
#line 429 "hlds_out_util.m"
              }
#line 426 "hlds_out_util.m"
          }
#line 427 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__succeeded;
#line 427 "hlds_out_util.m"
      }
#line 427 "hlds_out_util.m"
      break;
#line 427 "hlds_out_util.m"
    }
#line 423 "hlds_out_util.m"
}

#line 404 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 404 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 404 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 404 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5)
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
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 408 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 408 "hlds_out_util.m"
          {
#line 408 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4;
#line 408 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1;
#line 408 "hlds_out_util.m"
          }
#line 408 "hlds_out_util.m"
        else
#line 409 "hlds_out_util.m"
          {
#line 409 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 409 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 410 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ElementNum_16;
#line 410 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__AfterContexts_17;

#line 411 "hlds_out_util.m"
            {
#line 411 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0, &hlds__hlds_out__hlds_out_util__ElementNum_16, &hlds__hlds_out__hlds_out_util__AfterContexts_17);
            }
#line 410 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 414 "hlds_out_util.m"
              {
#line 414 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;
#line 414 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__ElementNumStr_37;
#line 414 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38;
#line 414 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_40_40;
#line 414 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;
#line 414 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_46_46;
#line 414 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_47_47;

#line 474 "hlds_out_util.m"
#line 474 "hlds_out_util.m"
                switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1) {
#line 474 "hlds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 474 "hlds_out_util.m"
                  case (MR_Integer) 0:
#line 474 "hlds_out_util.m"
                    {
#line 477 "hlds_out_util.m"
                      {
#line 477 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                      }
#line 474 "hlds_out_util.m"
                    }
#line 474 "hlds_out_util.m"
                    break;
#line 474 "hlds_out_util.m"
                  case (MR_Integer) 1:
#line 479 "hlds_out_util.m"
                    {
#line 480 "hlds_out_util.m"
                      {
#line 480 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                      }
#line 479 "hlds_out_util.m"
                    }
#line 474 "hlds_out_util.m"
                    break;
#line 474 "hlds_out_util.m"
                }
#line 465 "hlds_out_util.m"
                {
#line 465 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
#line 467 "hlds_out_util.m"
                {
#line 467 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
#line 467 "hlds_out_util.m"
                }
#line 467 "hlds_out_util.m"
                {
#line 467 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_47_47));
#line 467 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 467 "hlds_out_util.m"
                }
#line 467 "hlds_out_util.m"
                {
#line 467 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
#line 467 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_46_46));
#line 467 "hlds_out_util.m"
                }
#line 466 "hlds_out_util.m"
                {
#line 466 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
#line 466 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_43_43));
#line 466 "hlds_out_util.m"
                }
#line 466 "hlds_out_util.m"
                {
#line 466 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38, hlds__hlds_out__hlds_out_util__V_40_40);
                }
#line 416 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 416 "hlds_out_util.m"
                {
#line 416 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__AfterContexts_17;
#line 416 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;

#line 416 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 416 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 416 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 416 "hlds_out_util.m"
                }
#line 416 "hlds_out_util.m"
                continue;
#line 414 "hlds_out_util.m"
              }
#line 410 "hlds_out_util.m"
            else
#line 418 "hlds_out_util.m"
              {
#line 418 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 418 "hlds_out_util.m"
                {
#line 418 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1, hlds__hlds_out__hlds_out_util__SubContext_13, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28);
                }
#line 420 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 420 "hlds_out_util.m"
                {
#line 420 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__SubContexts_14;
#line 420 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 420 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 420 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 420 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 420 "hlds_out_util.m"
                }
#line 420 "hlds_out_util.m"
                continue;
#line 418 "hlds_out_util.m"
              }
#line 409 "hlds_out_util.m"
          }
#line 408 "hlds_out_util.m"
      }
#line 408 "hlds_out_util.m"
      break;
#line 408 "hlds_out_util.m"
    }
#line 404 "hlds_out_util.m"
}

#line 363 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 363 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 363 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 363 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 363 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 363 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19)
#line 363 "hlds_out_util.m"
{
#line 369 "hlds_out_util.m"
  {
#line 369 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 369 "hlds_out_util.m"
#line 369 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) {
#line 369 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 369 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 369 "hlds_out_util.m"
#line 369 "hlds_out_util.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__MainContext_7)) {
#line 369 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 369 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 369 "hlds_out_util.m"
            {
#line 369 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 369 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
#line 369 "hlds_out_util.m"
            }
#line 369 "hlds_out_util.m"
            break;
#line 369 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 378 "hlds_out_util.m"
            {
#line 378 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42;

#line 379 "hlds_out_util.m"
              {
#line 379 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42);
              }
#line 380 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 381 "hlds_out_util.m"
              {
#line 381 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8]));
              }
#line 378 "hlds_out_util.m"
            }
#line 369 "hlds_out_util.m"
            break;
#line 369 "hlds_out_util.m"
        }
#line 369 "hlds_out_util.m"
        break;
#line 369 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 371 "hlds_out_util.m"
        {
#line 371 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 371 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 371 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51;
#line 371 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
#line 371 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 371 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_58_58;

#line 372 "hlds_out_util.m"
          {
#line 372 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51);
          }
#line 373 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 374 "hlds_out_util.m"
          {
#line 374 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
          }
#line 376 "hlds_out_util.m"
          {
#line 376 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "hlds_out_util.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 376 "hlds_out_util.m"
          }
#line 376 "hlds_out_util.m"
          {
#line 376 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_58_58));
#line 376 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
#line 376 "hlds_out_util.m"
          }
#line 376 "hlds_out_util.m"
          {
#line 376 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 376 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_57_57));
#line 376 "hlds_out_util.m"
          }
#line 375 "hlds_out_util.m"
          {
#line 375 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51, hlds__hlds_out__hlds_out_util__V_54_54);
          }
#line 371 "hlds_out_util.m"
        }
#line 369 "hlds_out_util.m"
        break;
#line 369 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 384 "hlds_out_util.m"
        {
#line 384 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 384 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Markers_12;
#line 384 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__ArgIdStr_13;
#line 384 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31;
#line 384 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_34_34;
#line 384 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_35_35;
#line 384 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 1)));

#line 474 "hlds_out_util.m"
#line 474 "hlds_out_util.m"
          switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16) {
#line 474 "hlds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 474 "hlds_out_util.m"
            case (MR_Integer) 0:
#line 474 "hlds_out_util.m"
              {
#line 477 "hlds_out_util.m"
                {
#line 477 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                }
#line 474 "hlds_out_util.m"
              }
#line 474 "hlds_out_util.m"
              break;
#line 474 "hlds_out_util.m"
            case (MR_Integer) 1:
#line 479 "hlds_out_util.m"
              {
#line 480 "hlds_out_util.m"
                {
#line 480 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
#line 479 "hlds_out_util.m"
              }
#line 474 "hlds_out_util.m"
              break;
#line 474 "hlds_out_util.m"
          }
#line 386 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 394 "hlds_out_util.m"
          {
#line 394 "hlds_out_util.m"
            hlds__hlds_pred__init_markers_1_p_0(&hlds__hlds_out__hlds_out_util__Markers_12);
          }
#line 395 "hlds_out_util.m"
          {
#line 395 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__CallId_11, hlds__hlds_out__hlds_out_util__ArgNum_65, hlds__hlds_out__hlds_out_util__Markers_12);
          }
#line 396 "hlds_out_util.m"
          {
#line 396 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgIdStr_13));
#line 396 "hlds_out_util.m"
          }
#line 396 "hlds_out_util.m"
          {
#line 396 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_35_35));
#line 396 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 396 "hlds_out_util.m"
          }
#line 396 "hlds_out_util.m"
          {
#line 396 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31, hlds__hlds_out__hlds_out_util__V_34_34);
          }
#line 384 "hlds_out_util.m"
        }
#line 369 "hlds_out_util.m"
        break;
#line 369 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 398 "hlds_out_util.m"
        {
#line 398 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__Source_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 398 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__Msg_15;
#line 398 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20;
#line 398 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_26_26;
#line 398 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_27_27;
#line 398 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 398 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 399 "hlds_out_util.m"
          {
#line 399 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
          }
#line 400 "hlds_out_util.m"
          {
#line 400 "hlds_out_util.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__Source_14, &hlds__hlds_out__hlds_out_util__V_71_71);
          }
#line 400 "hlds_out_util.m"
          {
#line 400 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) " unification:\n");
          }
#line 400 "hlds_out_util.m"
          {
#line 400 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_78_78);
          }
#line 401 "hlds_out_util.m"
          {
#line 401 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 401 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Msg_15));
#line 401 "hlds_out_util.m"
          }
#line 401 "hlds_out_util.m"
          {
#line 401 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_27_27));
#line 401 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
#line 401 "hlds_out_util.m"
          }
#line 401 "hlds_out_util.m"
          {
#line 401 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20, hlds__hlds_out__hlds_out_util__V_26_26);
          }
#line 398 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 398 "hlds_out_util.m"
        }
#line 369 "hlds_out_util.m"
        break;
#line 369 "hlds_out_util.m"
    }
#line 369 "hlds_out_util.m"
  }
#line 363 "hlds_out_util.m"
}

#line 205 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
#line 205 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
#line 205 "hlds_out_util.m"
{
#line 1063 "hlds_out_util.m"
  while (MR_TRUE)
#line 1063 "hlds_out_util.m"
    {
#line 1063 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1063 "hlds_out_util.m"
      {
#line 1063 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

#line 1063 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1063 "hlds_out_util.m"
          {
#line 1063 "hlds_out_util.m"
          }
#line 1063 "hlds_out_util.m"
        else
#line 1066 "hlds_out_util.m"
          {
#line 1066 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

#line 1066 "hlds_out_util.m"
            {
#line 1066 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1067 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
#line 1067 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1067 "hlds_out_util.m"
            {
#line 1067 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

#line 1067 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
#line 1067 "hlds_out_util.m"
            }
#line 1067 "hlds_out_util.m"
            continue;
#line 1066 "hlds_out_util.m"
          }
#line 1063 "hlds_out_util.m"
      }
#line 1063 "hlds_out_util.m"
      break;
#line 1063 "hlds_out_util.m"
    }
#line 205 "hlds_out_util.m"
}

#line 199 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
#line 199 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__IntList_4)
#line 199 "hlds_out_util.m"
{
#line 1035 "hlds_out_util.m"
  {
#line 1035 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1035 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "hlds_out_util.m"
      {
#line 1036 "hlds_out_util.m"
        {
#line 1036 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[]");
        }
#line 1035 "hlds_out_util.m"
      }
#line 1035 "hlds_out_util.m"
    else
#line 1038 "hlds_out_util.m"
      {
#line 1038 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
#line 1038 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

#line 1039 "hlds_out_util.m"
        {
#line 1039 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
#line 1040 "hlds_out_util.m"
        {
#line 1040 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
#line 1041 "hlds_out_util.m"
        {
#line 1041 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
#line 1038 "hlds_out_util.m"
      }
#line 1035 "hlds_out_util.m"
  }
#line 199 "hlds_out_util.m"
}

#line 193 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(
#line 193 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 193 "hlds_out_util.m"
{
#line 954 "hlds_out_util.m"
  {
#line 954 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 954 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 954 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 955 "hlds_out_util.m"
    {
#line 955 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 954 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 954 "hlds_out_util.m"
  }
#line 193 "hlds_out_util.m"
}

#line 192 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(
#line 192 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 192 "hlds_out_util.m"
{
#line 952 "hlds_out_util.m"
  {
#line 952 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 952 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 952 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 953 "hlds_out_util.m"
    {
#line 953 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 952 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 952 "hlds_out_util.m"
  }
#line 192 "hlds_out_util.m"
}

#line 191 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__typeclass_import_status_to_string_1_f_0(
#line 191 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 191 "hlds_out_util.m"
{
#line 950 "hlds_out_util.m"
  {
#line 950 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 950 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 950 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 951 "hlds_out_util.m"
    {
#line 951 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 950 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 950 "hlds_out_util.m"
  }
#line 191 "hlds_out_util.m"
}

#line 190 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 190 "hlds_out_util.m"
{
#line 947 "hlds_out_util.m"
  {
#line 947 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 947 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 947 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 947 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__NewInstModeStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 947 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_5_5;
#line 947 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_6_6;
#line 947 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_8_8;
#line 947 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_9_9;

#line 961 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__NewInstModeStatus_4)) == (MR_mktag((MR_Integer) 1))))
#line 973 "hlds_out_util.m"
      {
#line 973 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__InstModeImport_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__NewInstModeStatus_4, (MR_Integer) 0)));

#line 987 "hlds_out_util.m"
#line 987 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__InstModeImport_14)) {
#line 987 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 987 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 987 "hlds_out_util.m"
#line 987 "hlds_out_util.m"
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__InstModeImport_14)) {
#line 987 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 987 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 989 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_abstract)";
#line 987 "hlds_out_util.m"
                break;
#line 987 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 992 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_opt)";
#line 987 "hlds_out_util.m"
                break;
#line 987 "hlds_out_util.m"
            }
#line 987 "hlds_out_util.m"
            break;
#line 987 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 975 "hlds_out_util.m"
            {
#line 975 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__InstModeImportLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__InstModeImport_14, (MR_Integer) 0)));

#line 979 "hlds_out_util.m"
#line 979 "hlds_out_util.m"
              switch (hlds__hlds_out__hlds_out_util__InstModeImportLocn_15) {
#line 979 "hlds_out_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 979 "hlds_out_util.m"
                case (MR_Integer) 2:
#line 985 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_plain(ancestors_priv_int_file))";
#line 979 "hlds_out_util.m"
                  break;
#line 979 "hlds_out_util.m"
                case (MR_Integer) 0:
#line 978 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_plain(imp))";
#line 979 "hlds_out_util.m"
                  break;
#line 979 "hlds_out_util.m"
                case (MR_Integer) 1:
#line 981 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_plain(int))";
#line 979 "hlds_out_util.m"
                  break;
#line 979 "hlds_out_util.m"
              }
#line 975 "hlds_out_util.m"
            }
#line 987 "hlds_out_util.m"
            break;
#line 987 "hlds_out_util.m"
        }
#line 973 "hlds_out_util.m"
      }
#line 961 "hlds_out_util.m"
    else
#line 961 "hlds_out_util.m"
      {
#line 961 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__InstModeExport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__NewInstModeStatus_4, (MR_Integer) 0)));

#line 965 "hlds_out_util.m"
#line 965 "hlds_out_util.m"
        switch (hlds__hlds_out__hlds_out_util__InstModeExport_13) {
#line 965 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 965 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 970 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "this_module(export_anywhere)";
#line 965 "hlds_out_util.m"
            break;
#line 965 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 964 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "this_module(export_nowhere)";
#line 965 "hlds_out_util.m"
            break;
#line 965 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 967 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "this_module(export_only_submodules)";
#line 965 "hlds_out_util.m"
            break;
#line 965 "hlds_out_util.m"
        }
#line 961 "hlds_out_util.m"
      }
#line 949 "hlds_out_util.m"
    {
#line 949 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 949 "hlds_out_util.m"
    {
#line 949 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_8_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_9_9, (MR_String) ")");
    }
#line 949 "hlds_out_util.m"
    {
#line 949 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) " (", hlds__hlds_out__hlds_out_util__V_8_8);
    }
#line 948 "hlds_out_util.m"
    {
#line 948 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_6_6);
    }
#line 947 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 947 "hlds_out_util.m"
  }
#line 190 "hlds_out_util.m"
}

#line 189 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(
#line 189 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 189 "hlds_out_util.m"
{
#line 944 "hlds_out_util.m"
  {
#line 944 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 944 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 944 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 944 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__NewInstModeStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 944 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_5_5;
#line 944 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_6_6;
#line 944 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_8_8;
#line 944 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_9_9;

#line 961 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__NewInstModeStatus_4)) == (MR_mktag((MR_Integer) 1))))
#line 973 "hlds_out_util.m"
      {
#line 973 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__InstModeImport_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__NewInstModeStatus_4, (MR_Integer) 0)));

#line 987 "hlds_out_util.m"
#line 987 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__InstModeImport_14)) {
#line 987 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 987 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 987 "hlds_out_util.m"
#line 987 "hlds_out_util.m"
            switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__InstModeImport_14)) {
#line 987 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 987 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 989 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_abstract)";
#line 987 "hlds_out_util.m"
                break;
#line 987 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 992 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_opt)";
#line 987 "hlds_out_util.m"
                break;
#line 987 "hlds_out_util.m"
            }
#line 987 "hlds_out_util.m"
            break;
#line 987 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 975 "hlds_out_util.m"
            {
#line 975 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__InstModeImportLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__InstModeImport_14, (MR_Integer) 0)));

#line 979 "hlds_out_util.m"
#line 979 "hlds_out_util.m"
              switch (hlds__hlds_out__hlds_out_util__InstModeImportLocn_15) {
#line 979 "hlds_out_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 979 "hlds_out_util.m"
                case (MR_Integer) 2:
#line 985 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_plain(ancestors_priv_int_file))";
#line 979 "hlds_out_util.m"
                  break;
#line 979 "hlds_out_util.m"
                case (MR_Integer) 0:
#line 978 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_plain(imp))";
#line 979 "hlds_out_util.m"
                  break;
#line 979 "hlds_out_util.m"
                case (MR_Integer) 1:
#line 981 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "other_module(import_plain(int))";
#line 979 "hlds_out_util.m"
                  break;
#line 979 "hlds_out_util.m"
              }
#line 975 "hlds_out_util.m"
            }
#line 987 "hlds_out_util.m"
            break;
#line 987 "hlds_out_util.m"
        }
#line 973 "hlds_out_util.m"
      }
#line 961 "hlds_out_util.m"
    else
#line 961 "hlds_out_util.m"
      {
#line 961 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__InstModeExport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__NewInstModeStatus_4, (MR_Integer) 0)));

#line 965 "hlds_out_util.m"
#line 965 "hlds_out_util.m"
        switch (hlds__hlds_out__hlds_out_util__InstModeExport_13) {
#line 965 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 965 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 970 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "this_module(export_anywhere)";
#line 965 "hlds_out_util.m"
            break;
#line 965 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 964 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "this_module(export_nowhere)";
#line 965 "hlds_out_util.m"
            break;
#line 965 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 967 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_5_5 = (MR_String) "this_module(export_only_submodules)";
#line 965 "hlds_out_util.m"
            break;
#line 965 "hlds_out_util.m"
        }
#line 961 "hlds_out_util.m"
      }
#line 946 "hlds_out_util.m"
    {
#line 946 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_9_9 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 946 "hlds_out_util.m"
    {
#line 946 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_8_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_9_9, (MR_String) ")");
    }
#line 946 "hlds_out_util.m"
    {
#line 946 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) " (", hlds__hlds_out__hlds_out_util__V_8_8);
    }
#line 945 "hlds_out_util.m"
    {
#line 945 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_6_6);
    }
#line 944 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 944 "hlds_out_util.m"
  }
#line 189 "hlds_out_util.m"
}

#line 188 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 188 "hlds_out_util.m"
{
#line 942 "hlds_out_util.m"
  {
#line 942 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 942 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 942 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 943 "hlds_out_util.m"
    {
#line 943 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 942 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 942 "hlds_out_util.m"
  }
#line 188 "hlds_out_util.m"
}

#line 183 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
#line 183 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 183 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_7,
#line 183 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 183 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 183 "hlds_out_util.m"
{
#line 933 "hlds_out_util.m"
  {
#line 933 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 933 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 933 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 933 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 933 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 933 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 933 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 934 "hlds_out_util.m"
    {
#line 934 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
#line 935 "hlds_out_util.m"
    {
#line 935 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, hlds__hlds_out__hlds_out_util__InstVarSet_7, hlds__hlds_out__hlds_out_util__Mode_10);
    }
#line 935 "hlds_out_util.m"
    {
#line 935 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 935 "hlds_out_util.m"
    {
#line 935 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 933 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 933 "hlds_out_util.m"
  }
#line 183 "hlds_out_util.m"
}

#line 181 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
#line 181 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 181 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 181 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 181 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 181 "hlds_out_util.m"
{
#line 929 "hlds_out_util.m"
  {
#line 929 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 929 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 930 "hlds_out_util.m"
    {
#line 930 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__InstVarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__HeadVar__4_4);
    }
#line 930 "hlds_out_util.m"
    {
#line 930 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
    }
#line 929 "hlds_out_util.m"
  }
#line 181 "hlds_out_util.m"
}

#line 925 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 925 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 925 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
#line 925 "hlds_out_util.m"
{
#line 925 "hlds_out_util.m"
  {
#line 925 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 925 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 925 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

#line 925 "hlds_out_util.m"
    {
#line 925 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 925 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
#line 925 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 925 "hlds_out_util.m"
  }
#line 925 "hlds_out_util.m"
}

#line 178 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_10,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_11)
#line 178 "hlds_out_util.m"
{
#line 923 "hlds_out_util.m"
  {
#line 923 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 923 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 923 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
#line 923 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
#line 923 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 924 "hlds_out_util.m"
    {
#line 924 "hlds_out_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_10, hlds__hlds_out__hlds_out_util__Modes_11, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 925 "hlds_out_util.m"
    {
#line 925 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 925 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0]));
#line 925 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
#line 925 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 925 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_7));
#line 925 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_8));
#line 925 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_9));
#line 925 "hlds_out_util.m"
    }
#line 925 "hlds_out_util.m"
    {
#line 925 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 927 "hlds_out_util.m"
    {
#line 927 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
#line 923 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 923 "hlds_out_util.m"
  }
#line 178 "hlds_out_util.m"
}

#line 176 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_9,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_11,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_12)
#line 176 "hlds_out_util.m"
{
#line 918 "hlds_out_util.m"
  {
#line 918 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 918 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 920 "hlds_out_util.m"
    {
#line 920 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__InstVarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__Vars_11, hlds__hlds_out__hlds_out_util__Modes_12);
    }
#line 919 "hlds_out_util.m"
    {
#line 919 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 918 "hlds_out_util.m"
  }
#line 176 "hlds_out_util.m"
}

#line 892 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 892 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 892 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 892 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 892 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 892 "hlds_out_util.m"
{
#line 892 "hlds_out_util.m"
  {
#line 892 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

#line 892 "hlds_out_util.m"
    {
#line 892 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 892 "hlds_out_util.m"
  }
#line 892 "hlds_out_util.m"
}

#line 168 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 168 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 168 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ProofMap_10)
#line 168 "hlds_out_util.m"
{
#line 887 "hlds_out_util.m"
  {
#line 887 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 887 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
#line 887 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

#line 888 "hlds_out_util.m"
    {
#line 888 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
#line 889 "hlds_out_util.m"
    {
#line 889 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
#line 890 "hlds_out_util.m"
    {
#line 890 "hlds_out_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__ProofMap_10, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
#line 892 "hlds_out_util.m"
    {
#line 892 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 892 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
#line 892 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1));
#line 892 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 892 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TVarSet_7));
#line 892 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_8));
#line 892 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_9));
#line 892 "hlds_out_util.m"
    }
#line 891 "hlds_out_util.m"
    {
#line 891 "hlds_out_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 887 "hlds_out_util.m"
  }
#line 168 "hlds_out_util.m"
}

#line 775 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 775 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 775 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 775 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 775 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 775 "hlds_out_util.m"
{
#line 775 "hlds_out_util.m"
  {
#line 775 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 775 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_LambdaHeadVar__3_104;

#line 775 "hlds_out_util.m"
    {
#line 775 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__776__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_LambdaHeadVar__3_104);
    }
#line 775 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_LambdaHeadVar__3_104));
#line 775 "hlds_out_util.m"
  }
#line 775 "hlds_out_util.m"
}

#line 163 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_9)
#line 163 "hlds_out_util.m"
{
#line 764 "hlds_out_util.m"
  {
#line 764 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 764 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_10;

#line 764 "hlds_out_util.m"
#line 764 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) {
#line 764 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 764 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 852 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
#line 764 "hlds_out_util.m"
        break;
#line 764 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 849 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
#line 764 "hlds_out_util.m"
        break;
#line 764 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 863 "hlds_out_util.m"
        {
#line 863 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 863 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 863 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 863 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 863 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 863 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
#line 863 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_130, (MR_Integer) 0)));
#line 863 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_130, (MR_Integer) 1)));

#line 866 "hlds_out_util.m"
          {
#line 866 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_131);
          }
#line 867 "hlds_out_util.m"
          {
#line 867 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_132);
          }
#line 867 "hlds_out_util.m"
          {
#line 867 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) ">");
          }
#line 867 "hlds_out_util.m"
          {
#line 867 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_70_70);
          }
#line 866 "hlds_out_util.m"
          {
#line 866 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_67_67, hlds__hlds_out__hlds_out_util__V_68_68);
          }
#line 866 "hlds_out_util.m"
          {
#line 866 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_66_66);
          }
#line 863 "hlds_out_util.m"
        }
#line 764 "hlds_out_util.m"
        break;
#line 764 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 764 "hlds_out_util.m"
#line 764 "hlds_out_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) {
#line 764 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 764 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 869 "hlds_out_util.m"
            {
#line 869 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 869 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 869 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 869 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 869 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 869 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 869 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_133, (MR_Integer) 0)));
#line 869 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_133, (MR_Integer) 1)));

#line 872 "hlds_out_util.m"
              {
#line 872 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_134);
              }
#line 873 "hlds_out_util.m"
              {
#line 873 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_135);
              }
#line 873 "hlds_out_util.m"
              {
#line 873 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, (MR_String) ">");
              }
#line 872 "hlds_out_util.m"
              {
#line 872 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_62_62);
              }
#line 872 "hlds_out_util.m"
              {
#line 872 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_60_60);
              }
#line 872 "hlds_out_util.m"
              {
#line 872 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_58_58);
              }
#line 869 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 875 "hlds_out_util.m"
            {
#line 875 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 875 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 875 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_52_52;
#line 875 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 875 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 875 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 875 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_136, (MR_Integer) 0)));
#line 875 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_136, (MR_Integer) 1)));

#line 878 "hlds_out_util.m"
              {
#line 878 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_137);
              }
#line 879 "hlds_out_util.m"
              {
#line 879 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_138);
              }
#line 879 "hlds_out_util.m"
              {
#line 879 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, (MR_String) ">");
              }
#line 878 "hlds_out_util.m"
              {
#line 878 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_54_54);
              }
#line 878 "hlds_out_util.m"
              {
#line 878 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, hlds__hlds_out__hlds_out_util__V_52_52);
              }
#line 878 "hlds_out_util.m"
              {
#line 878 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_50_50);
              }
#line 875 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 764 "hlds_out_util.m"
            {
#line 764 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 764 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 764 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
#line 764 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 764 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
#line 764 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
#line 764 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 768 "hlds_out_util.m"
#line 768 "hlds_out_util.m"
              switch (hlds__hlds_out__hlds_out_util__Qual_7) {
#line 768 "hlds_out_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hlds_out_util.m"
                case (MR_Integer) 1:
#line 769 "hlds_out_util.m"
                  {
#line 769 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_100_100;

#line 770 "hlds_out_util.m"
                    {
#line 770 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_100_100 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                    }
#line 770 "hlds_out_util.m"
                    {
#line 770 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 770 "hlds_out_util.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_100_100));
#line 770 "hlds_out_util.m"
                    }
#line 769 "hlds_out_util.m"
                  }
#line 768 "hlds_out_util.m"
                  break;
#line 768 "hlds_out_util.m"
                case (MR_Integer) 0:
#line 767 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
#line 768 "hlds_out_util.m"
                  break;
#line 768 "hlds_out_util.m"
              }
#line 772 "hlds_out_util.m"
              {
#line 772 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
              }
#line 773 "hlds_out_util.m"
              {
#line 773 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
              }
#line 773 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 782 "hlds_out_util.m"
                {
#line 783 "hlds_out_util.m"
                  MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

#line 783 "hlds_out_util.m"
                  {
#line 783 "hlds_out_util.m"
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                  }
#line 783 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
#line 782 "hlds_out_util.m"
                }
#line 773 "hlds_out_util.m"
              else
#line 785 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 787 "hlds_out_util.m"
              {
#line 787 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
              }
#line 791 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "hlds_out_util.m"
                {
#line 789 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 789 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;

#line 790 "hlds_out_util.m"
                  {
#line 790 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                  }
#line 790 "hlds_out_util.m"
                  {
#line 790 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_116_116);
                  }
#line 790 "hlds_out_util.m"
                  {
#line 790 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_114_114);
                  }
#line 789 "hlds_out_util.m"
                }
#line 791 "hlds_out_util.m"
              else
#line 792 "hlds_out_util.m"
                {
#line 792 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 796 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "hlds_out_util.m"
                    {
#line 794 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 794 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_113_113;

#line 795 "hlds_out_util.m"
                      {
#line 795 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                      }
#line 795 "hlds_out_util.m"
                      {
#line 795 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_113_113);
                      }
#line 795 "hlds_out_util.m"
                      {
#line 795 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_111_111);
                      }
#line 794 "hlds_out_util.m"
                    }
#line 796 "hlds_out_util.m"
                  else
#line 797 "hlds_out_util.m"
                    {
#line 797 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
#line 797 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_107_107;
#line 797 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_109_109;

#line 798 "hlds_out_util.m"
                      {
#line 798 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_23);
                      }
#line 799 "hlds_out_util.m"
                      {
#line 799 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                      }
#line 799 "hlds_out_util.m"
                      {
#line 799 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_109_109);
                      }
#line 799 "hlds_out_util.m"
                      {
#line 799 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_107_107);
                      }
#line 797 "hlds_out_util.m"
                    }
#line 792 "hlds_out_util.m"
                }
#line 764 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 803 "hlds_out_util.m"
            {
#line 803 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 807 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "hlds_out_util.m"
                {
#line 805 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_99_99;

#line 806 "hlds_out_util.m"
                  {
#line 806 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_99_99 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_126);
                  }
#line 806 "hlds_out_util.m"
                  {
#line 806 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_99_99);
                  }
#line 805 "hlds_out_util.m"
                }
#line 807 "hlds_out_util.m"
              else
#line 808 "hlds_out_util.m"
                {
#line 808 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 812 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__ArgVars_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "hlds_out_util.m"
                    {
#line 810 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_97_97;

#line 811 "hlds_out_util.m"
                      {
#line 811 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_97_97 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_126);
                      }
#line 811 "hlds_out_util.m"
                      {
#line 811 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_97_97);
                      }
#line 810 "hlds_out_util.m"
                    }
#line 812 "hlds_out_util.m"
                  else
#line 813 "hlds_out_util.m"
                    {
#line 813 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 813 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_120;

#line 814 "hlds_out_util.m"
                      {
#line 814 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ArgStr_120 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_122);
                      }
#line 815 "hlds_out_util.m"
                      {
#line 815 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_120, (MR_String) "}");
                      }
#line 815 "hlds_out_util.m"
                      {
#line 815 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_94_94);
                      }
#line 813 "hlds_out_util.m"
                    }
#line 808 "hlds_out_util.m"
                }
#line 803 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 4:
#line 834 "hlds_out_util.m"
            {
#line 834 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 834 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 0)));
#line 834 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 1)));
#line 834 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_85_85;
#line 834 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 834 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 834 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 834 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 837 "hlds_out_util.m"
              {
#line 837 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_36);
              }
#line 838 "hlds_out_util.m"
              {
#line 838 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_37);
              }
#line 838 "hlds_out_util.m"
              {
#line 838 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_90_90, (MR_String) ">");
              }
#line 838 "hlds_out_util.m"
              {
#line 838 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_89_89);
              }
#line 837 "hlds_out_util.m"
              {
#line 837 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 837 "hlds_out_util.m"
              {
#line 837 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_85_85);
              }
#line 834 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 5:
#line 819 "hlds_out_util.m"
            {
#line 819 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 820 "hlds_out_util.m"
              {
#line 820 "hlds_out_util.m"
                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
              }
#line 819 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 6:
#line 822 "hlds_out_util.m"
            {
#line 822 "hlds_out_util.m"
              MR_Float hlds__hlds_out__hlds_out_util__Float_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 823 "hlds_out_util.m"
              {
#line 823 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_30);
              }
#line 822 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 7:
#line 825 "hlds_out_util.m"
            {
#line 825 "hlds_out_util.m"
              MR_Char hlds__hlds_out__hlds_out_util__CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 826 "hlds_out_util.m"
              {
#line 826 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_31);
              }
#line 825 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 8:
#line 828 "hlds_out_util.m"
            {
#line 828 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__StringConst_32 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 829 "hlds_out_util.m"
              {
#line 829 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_32);
              }
#line 828 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 9:
#line 831 "hlds_out_util.m"
            {
#line 831 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 832 "hlds_out_util.m"
              {
#line 832 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_33);
              }
#line 831 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 10:
#line 840 "hlds_out_util.m"
            {
#line 840 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Ctor_39 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_76_76;
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 840 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 840 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 842 "hlds_out_util.m"
              {
#line 842 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_75_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_38);
              }
#line 843 "hlds_out_util.m"
              {
#line 843 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_129);
              }
#line 843 "hlds_out_util.m"
              {
#line 843 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ">");
              }
#line 843 "hlds_out_util.m"
              {
#line 843 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_81_81);
              }
#line 843 "hlds_out_util.m"
              {
#line 843 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_39, hlds__hlds_out__hlds_out_util__V_79_79);
              }
#line 842 "hlds_out_util.m"
              {
#line 842 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_78_78);
              }
#line 842 "hlds_out_util.m"
              {
#line 842 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
              }
#line 842 "hlds_out_util.m"
              {
#line 842 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_74_74);
              }
#line 840 "hlds_out_util.m"
            }
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 11:
#line 846 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 12:
#line 855 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 13:
#line 858 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
          case (MR_Integer) 14:
#line 861 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
#line 764 "hlds_out_util.m"
            break;
#line 764 "hlds_out_util.m"
        }
#line 764 "hlds_out_util.m"
        break;
#line 764 "hlds_out_util.m"
    }
#line 764 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_10;
#line 764 "hlds_out_util.m"
  }
#line 163 "hlds_out_util.m"
}

#line 160 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_9,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_10)
#line 160 "hlds_out_util.m"
{
#line 755 "hlds_out_util.m"
  {
#line 755 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 755 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 757 "hlds_out_util.m"
    {
#line 757 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
#line 756 "hlds_out_util.m"
    {
#line 756 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 755 "hlds_out_util.m"
  }
#line 160 "hlds_out_util.m"
}

#line 153 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_7,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_10,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 153 "hlds_out_util.m"
{
#line 649 "hlds_out_util.m"
  while (MR_TRUE)
#line 649 "hlds_out_util.m"
    {
#line 649 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 649 "hlds_out_util.m"
      {
#line 649 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 649 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

#line 649 "hlds_out_util.m"
#line 649 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) {
#line 649 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 649 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 716 "hlds_out_util.m"
            {
#line 717 "hlds_out_util.m"
              {
#line 717 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[3], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
#line 716 "hlds_out_util.m"
            }
#line 649 "hlds_out_util.m"
            break;
#line 649 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 711 "hlds_out_util.m"
            {
#line 712 "hlds_out_util.m"
              {
#line 712 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
#line 711 "hlds_out_util.m"
            }
#line 649 "hlds_out_util.m"
            break;
#line 649 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 733 "hlds_out_util.m"
            {
#line 733 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_42;
#line 733 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_43;
#line 733 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 733 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 733 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
#line 733 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 733 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 733 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 733 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)));
#line 733 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredId_146;

#line 734 "hlds_out_util.m"
              {
#line 734 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145);
              }
#line 734 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__PredId_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 0)));
#line 734 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 1)));
#line 735 "hlds_out_util.m"
              {
#line 735 "hlds_out_util.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_42, &hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 737 "hlds_out_util.m"
              {
#line 737 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_65_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_146);
              }
#line 738 "hlds_out_util.m"
              {
#line 738 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 738 "hlds_out_util.m"
              {
#line 738 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_69_69, (MR_String) ")");
              }
#line 738 "hlds_out_util.m"
              {
#line 738 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_68_68);
              }
#line 738 "hlds_out_util.m"
              {
#line 738 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__V_66_66);
              }
#line 737 "hlds_out_util.m"
              {
#line 737 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_64_64);
              }
#line 733 "hlds_out_util.m"
            }
#line 649 "hlds_out_util.m"
            break;
#line 649 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 649 "hlds_out_util.m"
#line 649 "hlds_out_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) {
#line 649 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 649 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 740 "hlds_out_util.m"
                {
#line 740 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_53_53;
#line 740 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 740 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 740 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_57_57;
#line 740 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 740 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 740 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 740 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_148;
#line 740 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_149;
#line 740 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_150;

#line 741 "hlds_out_util.m"
                  {
#line 741 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_53_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147);
                  }
#line 741 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 741 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ProcId_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 742 "hlds_out_util.m"
                  {
#line 742 "hlds_out_util.m"
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_149, &hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                  }
#line 744 "hlds_out_util.m"
                  {
#line 744 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_56_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_148);
                  }
#line 745 "hlds_out_util.m"
                  {
#line 745 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                  }
#line 745 "hlds_out_util.m"
                  {
#line 745 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, (MR_String) "))");
                  }
#line 745 "hlds_out_util.m"
                  {
#line 745 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_59_59);
                  }
#line 745 "hlds_out_util.m"
                  {
#line 745 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__V_57_57);
                  }
#line 744 "hlds_out_util.m"
                  {
#line 744 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", hlds__hlds_out__hlds_out_util__V_55_55);
                  }
#line 740 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 747 "hlds_out_util.m"
                {
#line 747 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_44_44;
#line 747 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 747 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 747 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 747 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 747 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 747 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 747 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_152;
#line 747 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_153;
#line 747 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_154;

#line 748 "hlds_out_util.m"
                  {
#line 748 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_44_44 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151);
                  }
#line 748 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 0)));
#line 748 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ProcId_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 1)));
#line 749 "hlds_out_util.m"
                  {
#line 749 "hlds_out_util.m"
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_153, &hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                  }
#line 751 "hlds_out_util.m"
                  {
#line 751 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_47_47 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_152);
                  }
#line 752 "hlds_out_util.m"
                  {
#line 752 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                  }
#line 752 "hlds_out_util.m"
                  {
#line 752 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) "))");
                  }
#line 752 "hlds_out_util.m"
                  {
#line 752 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_50_50);
                  }
#line 752 "hlds_out_util.m"
                  {
#line 752 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                  }
#line 751 "hlds_out_util.m"
                  {
#line 751 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_46_46);
                  }
#line 747 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 649 "hlds_out_util.m"
                {
#line 649 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 649 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 649 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

#line 654 "hlds_out_util.m"
                  if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 651 "hlds_out_util.m"
                    {
#line 651 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
#line 651 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
#line 651 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_137_137;

#line 653 "hlds_out_util.m"
                      {
#line 653 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 653 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
#line 653 "hlds_out_util.m"
                      }
#line 652 "hlds_out_util.m"
                      {
#line 652 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
#line 651 "hlds_out_util.m"
                    }
#line 654 "hlds_out_util.m"
                  else
#line 655 "hlds_out_util.m"
                    {
#line 655 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_136_136;
#line 655 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

#line 657 "hlds_out_util.m"
                      {
#line 657 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 657 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_136_136, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_138));
#line 657 "hlds_out_util.m"
                      }
#line 656 "hlds_out_util.m"
                      {
#line 656 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__V_136_136, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
#line 655 "hlds_out_util.m"
                    }
#line 649 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 660 "hlds_out_util.m"
                {
#line 661 "hlds_out_util.m"
                  {
#line 661 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 660 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 4:
#line 688 "hlds_out_util.m"
                {
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_25;
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredInfo_27;
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredModule_28;
#line 688 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__PredName_29;
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredSymName_30;
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredConsId_31;
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_121_121;
#line 688 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_122_122;
#line 688 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_123_123;
#line 689 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_26_26;

#line 689 "hlds_out_util.m"
                  {
#line 689 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_121_121 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23);
                  }
#line 689 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 0)));
#line 689 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 1)));
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_25, &hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 691 "hlds_out_util.m"
                  {
#line 691 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 693 "hlds_out_util.m"
                  {
#line 693 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_28));
#line 693 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_29));
#line 693 "hlds_out_util.m"
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_122_122 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 695 "hlds_out_util.m"
                  {
#line 695 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_123_123 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 694 "hlds_out_util.m"
                  {
#line 694 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 694 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 694 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_30));
#line 694 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_122_122));
#line 694 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
#line 694 "hlds_out_util.m"
                  }
#line 696 "hlds_out_util.m"
                  /* direct tailcall eliminated */
#line 696 "hlds_out_util.m"
                  {
#line 696 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10 = hlds__hlds_out__hlds_out_util__PredConsId_31;

#line 696 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__ConsId_10 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10;
#line 696 "hlds_out_util.m"
                  }
#line 696 "hlds_out_util.m"
                  continue;
#line 688 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 5:
#line 664 "hlds_out_util.m"
                {
#line 664 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 664 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

#line 666 "hlds_out_util.m"
                  {
#line 666 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
#line 666 "hlds_out_util.m"
                  }
#line 665 "hlds_out_util.m"
                  {
#line 665 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 664 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 6:
#line 668 "hlds_out_util.m"
                {
#line 668 "hlds_out_util.m"
                  MR_Float hlds__hlds_out__hlds_out_util__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 668 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_130_130;

#line 670 "hlds_out_util.m"
                  {
#line 670 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 670 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_20);
#line 670 "hlds_out_util.m"
                  }
#line 669 "hlds_out_util.m"
                  {
#line 669 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_130_130, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 668 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 7:
#line 672 "hlds_out_util.m"
                {
#line 672 "hlds_out_util.m"
                  MR_Char hlds__hlds_out__hlds_out_util__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 672 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_127_127;
#line 672 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_128_128;

#line 679 "hlds_out_util.m"
                  {
#line 679 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_128_128 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_21);
                  }
#line 679 "hlds_out_util.m"
                  {
#line 679 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_127_127 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_128_128, (MR_String) ")");
                  }
#line 679 "hlds_out_util.m"
                  {
#line 679 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_127_127);
                  }
#line 672 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 8:
#line 681 "hlds_out_util.m"
                {
#line 681 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 681 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_125_125;

#line 683 "hlds_out_util.m"
                  {
#line 683 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 683 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_125_125, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_22));
#line 683 "hlds_out_util.m"
                  }
#line 682 "hlds_out_util.m"
                  {
#line 682 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_125_125, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 681 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 9:
#line 685 "hlds_out_util.m"
                {
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));

#line 686 "hlds_out_util.m"
                  {
#line 686 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_139);
                  }
#line 685 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 10:
#line 699 "hlds_out_util.m"
                {
#line 699 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_118_118;
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_119_119;
#line 699 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 699 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Name_141 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));

#line 701 "hlds_out_util.m"
                  {
#line 701 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_112_112 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_140);
                  }
#line 702 "hlds_out_util.m"
                  {
#line 702 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_32);
                  }
#line 702 "hlds_out_util.m"
                  {
#line 702 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_119_119, (MR_String) ")");
                  }
#line 702 "hlds_out_util.m"
                  {
#line 702 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_118_118);
                  }
#line 702 "hlds_out_util.m"
                  {
#line 702 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_141, hlds__hlds_out__hlds_out_util__V_116_116);
                  }
#line 702 "hlds_out_util.m"
                  {
#line 702 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_115_115);
                  }
#line 702 "hlds_out_util.m"
                  {
#line 702 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_112_112, hlds__hlds_out__hlds_out_util__V_113_113);
                  }
#line 701 "hlds_out_util.m"
                  {
#line 701 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_111_111);
                  }
#line 699 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 11:
#line 704 "hlds_out_util.m"
                {
#line 704 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 4)));
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_98_98;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_108_108;
#line 704 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 704 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 0)));
#line 704 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 1)));
#line 704 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

#line 707 "hlds_out_util.m"
                  {
#line 707 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_95_95 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_142);
                  }
#line 708 "hlds_out_util.m"
                  {
#line 708 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_101_101 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_143);
                  }
#line 709 "hlds_out_util.m"
                  {
#line 709 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_144);
                  }
#line 709 "hlds_out_util.m"
                  {
#line 709 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_35, (MR_String) ")");
                  }
#line 709 "hlds_out_util.m"
                  {
#line 709 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_108_108);
                  }
#line 709 "hlds_out_util.m"
                  {
#line 709 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_106_106);
                  }
#line 709 "hlds_out_util.m"
                  {
#line 709 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_104_104);
                  }
#line 709 "hlds_out_util.m"
                  {
#line 709 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_102_102);
                  }
#line 708 "hlds_out_util.m"
                  {
#line 708 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
#line 708 "hlds_out_util.m"
                  {
#line 708 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_98_98);
                  }
#line 707 "hlds_out_util.m"
                  {
#line 707 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, hlds__hlds_out__hlds_out_util__V_96_96);
                  }
#line 707 "hlds_out_util.m"
                  {
#line 707 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_94_94);
                  }
#line 704 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 12:
#line 721 "hlds_out_util.m"
                {
#line 721 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 721 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 721 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_37);
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_85_85, (MR_String) ")");
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_84_84);
                  }
#line 721 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 13:
#line 724 "hlds_out_util.m"
                {
#line 724 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_80_80;
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_81_81;

#line 725 "hlds_out_util.m"
                  {
#line 725 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_38);
                  }
#line 725 "hlds_out_util.m"
                  {
#line 725 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_81_81, (MR_String) ")");
                  }
#line 725 "hlds_out_util.m"
                  {
#line 725 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_80_80);
                  }
#line 724 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
              case (MR_Integer) 14:
#line 727 "hlds_out_util.m"
                {
#line 727 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 727 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SubConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 727 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__SubStr_41;
#line 727 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 727 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 727 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 727 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_77_77;

#line 728 "hlds_out_util.m"
                  {
#line 728 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__SubStr_41 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__SubConsId_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 730 "hlds_out_util.m"
                  {
#line 730 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_39);
                  }
#line 731 "hlds_out_util.m"
                  {
#line 731 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_41, (MR_String) ")");
                  }
#line 730 "hlds_out_util.m"
                  {
#line 730 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_77_77);
                  }
#line 730 "hlds_out_util.m"
                  {
#line 730 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                  }
#line 730 "hlds_out_util.m"
                  {
#line 730 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_73_73);
                  }
#line 727 "hlds_out_util.m"
                }
#line 649 "hlds_out_util.m"
                break;
#line 649 "hlds_out_util.m"
            }
#line 649 "hlds_out_util.m"
            break;
#line 649 "hlds_out_util.m"
        }
#line 649 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__Str_12;
#line 649 "hlds_out_util.m"
      }
#line 649 "hlds_out_util.m"
      break;
#line 649 "hlds_out_util.m"
    }
#line 153 "hlds_out_util.m"
}

#line 150 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_8,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_11,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 150 "hlds_out_util.m"
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
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__ConsId_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
    }
#line 643 "hlds_out_util.m"
    {
#line 643 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 642 "hlds_out_util.m"
  }
#line 150 "hlds_out_util.m"
}

#line 144 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 144 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_11)
#line 144 "hlds_out_util.m"
{
#line 633 "hlds_out_util.m"
  {
#line 633 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 633 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 633 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 633 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
#line 633 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
#line 633 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
#line 633 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

#line 634 "hlds_out_util.m"
    {
#line 634 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
#line 635 "hlds_out_util.m"
    {
#line 635 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
#line 636 "hlds_out_util.m"
    {
#line 636 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 636 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_11));
#line 636 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
#line 636 "hlds_out_util.m"
    }
#line 637 "hlds_out_util.m"
    {
#line 637 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 639 "hlds_out_util.m"
    {
#line 639 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
#line 639 "hlds_out_util.m"
    {
#line 639 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 633 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 633 "hlds_out_util.m"
  }
#line 144 "hlds_out_util.m"
}

#line 141 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_12)
#line 141 "hlds_out_util.m"
{
#line 628 "hlds_out_util.m"
  {
#line 628 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 628 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 629 "hlds_out_util.m"
    {
#line 629 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgTerms_12);
    }
#line 629 "hlds_out_util.m"
    {
#line 629 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 628 "hlds_out_util.m"
  }
#line 141 "hlds_out_util.m"
}

#line 138 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 138 "hlds_out_util.m"
{
#line 621 "hlds_out_util.m"
  {
#line 621 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 621 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 621 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 621 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 621 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
#line 621 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 621 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 621 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 621 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 622 "hlds_out_util.m"
    {
#line 622 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5576 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 611 "hlds_out_util.m"
    {
#line 611 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 611 "hlds_out_util.m"
    }
#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
#line 625 "hlds_out_util.m"
    {
#line 625 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 621 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 621 "hlds_out_util.m"
  }
#line 138 "hlds_out_util.m"
}

#line 136 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 136 "hlds_out_util.m"
{
#line 616 "hlds_out_util.m"
  {
#line 616 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 616 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 617 "hlds_out_util.m"
    {
#line 617 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
    }
#line 617 "hlds_out_util.m"
    {
#line 617 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 616 "hlds_out_util.m"
  }
#line 136 "hlds_out_util.m"
}

#line 133 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_9,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 133 "hlds_out_util.m"
{
#line 608 "hlds_out_util.m"
  {
#line 608 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 608 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
#line 608 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
#line 5689 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
#line 611 "hlds_out_util.m"
    {
#line 611 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
#line 611 "hlds_out_util.m"
    }
#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__NextToGraphicToken_9, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 608 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 608 "hlds_out_util.m"
  }
#line 133 "hlds_out_util.m"
}

#line 131 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_10,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 131 "hlds_out_util.m"
{
#line 603 "hlds_out_util.m"
  {
#line 603 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 603 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 603 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 603 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 603 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 603 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5755 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_12, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 611 "hlds_out_util.m"
    {
#line 611 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_11));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 611 "hlds_out_util.m"
    }
#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__NextToGraphicToken_10, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 604 "hlds_out_util.m"
    {
#line 604 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 603 "hlds_out_util.m"
  }
#line 131 "hlds_out_util.m"
}

#line 128 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_7,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9)
#line 128 "hlds_out_util.m"
{
#line 598 "hlds_out_util.m"
  {
#line 598 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 598 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 598 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
#line 598 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
#line 598 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
#line 598 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
#line 5822 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
#line 611 "hlds_out_util.m"
    {
#line 611 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
#line 611 "hlds_out_util.m"
    }
#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
#line 598 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 598 "hlds_out_util.m"
  }
#line 128 "hlds_out_util.m"
}

#line 126 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_10)
#line 126 "hlds_out_util.m"
{
#line 594 "hlds_out_util.m"
  {
#line 594 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 594 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
#line 594 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 594 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
#line 594 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
#line 594 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
#line 5886 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 610 "hlds_out_util.m"
    {
#line 610 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_10, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
#line 611 "hlds_out_util.m"
    {
#line 611 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_9));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
#line 611 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
#line 611 "hlds_out_util.m"
    }
#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
#line 604 "hlds_out_util.m"
    {
#line 604 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
    }
#line 594 "hlds_out_util.m"
  }
#line 126 "hlds_out_util.m"
}

#line 119 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
#line 119 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__CallId_5,
#line 119 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_6,
#line 119 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredMarkers_7)
#line 119 "hlds_out_util.m"
{
#line 508 "hlds_out_util.m"
  {
#line 508 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
#line 508 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 508 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
#line 508 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
#line 508 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

#line 509 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 518 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
#line 509 "hlds_out_util.m"
    else
#line 520 "hlds_out_util.m"
      {
#line 520 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 549 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 559 "hlds_out_util.m"
          {
#line 559 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 580 "hlds_out_util.m"
#line 580 "hlds_out_util.m"
            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) {
#line 580 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 580 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 561 "hlds_out_util.m"
                {
#line 561 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 561 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
#line 561 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 563 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
#line 563 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 564 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
#line 562 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 566 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 562 "hlds_out_util.m"
                  else
#line 570 "hlds_out_util.m"
                    {
#line 570 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Main_28;
#line 570 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
#line 570 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Expl_30;
#line 570 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 570 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_49_49;
#line 570 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;

#line 570 "hlds_out_util.m"
                      {
#line 570 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                      }
#line 570 "hlds_out_util.m"
                      {
#line 570 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
#line 571 "hlds_out_util.m"
                      {
#line 571 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                      }
#line 572 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
#line 572 "hlds_out_util.m"
                      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 573 "hlds_out_util.m"
                        {
#line 573 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_40_40;

#line 573 "hlds_out_util.m"
                          {
#line 573 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                          }
#line 573 "hlds_out_util.m"
                          {
#line 573 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                          }
#line 573 "hlds_out_util.m"
                        }
#line 572 "hlds_out_util.m"
                      else
#line 575 "hlds_out_util.m"
                        {
#line 575 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 575 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_44_44;
#line 575 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
#line 575 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;

#line 575 "hlds_out_util.m"
                          {
#line 575 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                          }
#line 576 "hlds_out_util.m"
                          {
#line 576 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                          }
#line 576 "hlds_out_util.m"
                          {
#line 576 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                          }
#line 575 "hlds_out_util.m"
                          {
#line 575 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                          }
#line 575 "hlds_out_util.m"
                        }
#line 578 "hlds_out_util.m"
                      {
#line 578 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                      }
#line 578 "hlds_out_util.m"
                      {
#line 578 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                      }
#line 578 "hlds_out_util.m"
                      {
#line 578 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                      }
#line 570 "hlds_out_util.m"
                    }
#line 561 "hlds_out_util.m"
                }
#line 580 "hlds_out_util.m"
                break;
#line 580 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 580 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 580 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 584 "hlds_out_util.m"
                {
#line 584 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_36_36;

#line 585 "hlds_out_util.m"
                  {
#line 585 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                  }
#line 585 "hlds_out_util.m"
                  {
#line 585 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                  }
#line 584 "hlds_out_util.m"
                }
#line 580 "hlds_out_util.m"
                break;
#line 580 "hlds_out_util.m"
            }
#line 559 "hlds_out_util.m"
          }
#line 549 "hlds_out_util.m"
        else
#line 549 "hlds_out_util.m"
          {
#line 549 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
#line 549 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
#line 549 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 549 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

#line 549 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 549 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 549 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
#line 551 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
#line 551 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 552 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
#line 550 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 554 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 550 "hlds_out_util.m"
            else
#line 556 "hlds_out_util.m"
              {
#line 556 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

#line 556 "hlds_out_util.m"
                {
#line 556 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 556 "hlds_out_util.m"
                {
#line 556 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
#line 556 "hlds_out_util.m"
              }
#line 549 "hlds_out_util.m"
          }
#line 520 "hlds_out_util.m"
        {
#line 520 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
#line 520 "hlds_out_util.m"
      }
#line 528 "hlds_out_util.m"
    {
#line 528 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
#line 529 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
#line 529 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

#line 528 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
#line 528 "hlds_out_util.m"
      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 528 "hlds_out_util.m"
        {
#line 528 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 529 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
#line 529 "hlds_out_util.m"
          if (hlds__hlds_out__hlds_out_util__succeeded)
#line 529 "hlds_out_util.m"
            {
#line 529 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
#line 529 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
#line 529 "hlds_out_util.m"
            }
#line 529 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 528 "hlds_out_util.m"
        }
#line 528 "hlds_out_util.m"
    }
#line 530 "hlds_out_util.m"
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
#line 536 "hlds_out_util.m"
      {
#line 536 "hlds_out_util.m"
        {
#line 536 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 11);
        }
#line 536 "hlds_out_util.m"
      }
#line 522 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 539 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
#line 522 "hlds_out_util.m"
    else
#line 541 "hlds_out_util.m"
      {
#line 541 "hlds_out_util.m"
        {
#line 541 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
#line 541 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 490 "hlds_out_util.m"
      {
#line 490 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 491 "hlds_out_util.m"
        {
#line 491 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_63);
        }
#line 490 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
    else
#line 488 "hlds_out_util.m"
      {
#line 488 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 489 "hlds_out_util.m"
        {
#line 489 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_62);
        }
#line 488 "hlds_out_util.m"
      }
#line 543 "hlds_out_util.m"
    {
#line 543 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 508 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 508 "hlds_out_util.m"
  }
#line 119 "hlds_out_util.m"
}

#line 112 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
#line 112 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 112 "hlds_out_util.m"
{
#line 503 "hlds_out_util.m"
  {
#line 503 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 503 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[4 + hlds__hlds_out__hlds_out_util__HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;

#line 503 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 503 "hlds_out_util.m"
  }
#line 112 "hlds_out_util.m"
}

#line 110 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
#line 110 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 110 "hlds_out_util.m"
{
#line 493 "hlds_out_util.m"
  {
#line 493 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 493 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 493 "hlds_out_util.m"
#line 493 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 493 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 493 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 493 "hlds_out_util.m"
        {
#line 493 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Purity_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 493 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 493 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_6_6;
#line 493 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_7_7;
#line 493 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 493 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 493 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));

#line 494 "hlds_out_util.m"
          {
#line 494 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_6_6 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_3);
          }
#line 495 "hlds_out_util.m"
          {
#line 495 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_4);
          }
#line 495 "hlds_out_util.m"
          {
#line 495 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) " call");
          }
#line 495 "hlds_out_util.m"
          {
#line 495 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
#line 494 "hlds_out_util.m"
          {
#line 494 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__V_7_7);
          }
#line 493 "hlds_out_util.m"
        }
#line 493 "hlds_out_util.m"
        break;
#line 493 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 496 "hlds_out_util.m"
        {
#line 496 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__MethodId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util___ClassId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 497 "hlds_out_util.m"
          {
#line 497 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_13);
          }
#line 496 "hlds_out_util.m"
        }
#line 493 "hlds_out_util.m"
        break;
#line 493 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 498 "hlds_out_util.m"
        {
#line 498 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__EventName_14 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 499 "hlds_out_util.m"
          {
#line 499 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_14);
          }
#line 498 "hlds_out_util.m"
        }
#line 493 "hlds_out_util.m"
        break;
#line 493 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 500 "hlds_out_util.m"
        {
#line 500 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__CastType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 503 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[0 + hlds__hlds_out__hlds_out_util__CastType_16]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 500 "hlds_out_util.m"
        }
#line 493 "hlds_out_util.m"
        break;
#line 493 "hlds_out_util.m"
    }
#line 493 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 493 "hlds_out_util.m"
  }
#line 110 "hlds_out_util.m"
}

#line 108 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
#line 108 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 108 "hlds_out_util.m"
{
#line 488 "hlds_out_util.m"
  {
#line 488 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 488 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 488 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 490 "hlds_out_util.m"
      {
#line 490 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 491 "hlds_out_util.m"
        {
#line 491 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_4);
        }
#line 490 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
    else
#line 488 "hlds_out_util.m"
      {
#line 488 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 489 "hlds_out_util.m"
        {
#line 489 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_3);
        }
#line 488 "hlds_out_util.m"
      }
#line 488 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 488 "hlds_out_util.m"
  }
#line 108 "hlds_out_util.m"
}

#line 102 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
#line 102 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12,
#line 102 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13,
#line 102 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_7,
#line 102 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14,
#line 102 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15)
#line 102 "hlds_out_util.m"
{
#line 357 "hlds_out_util.m"
  {
#line 357 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 357 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 0)));
#line 357 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 1)));
#line 357 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_11;
#line 357 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16;
#line 357 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17;

#line 359 "hlds_out_util.m"
    {
#line 359 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_10, &hlds__hlds_out__hlds_out_util__SubContexts_11);
    }
#line 360 "hlds_out_util.m"
    {
#line 360 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__MainContext_9, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13, hlds__hlds_out__hlds_out_util__SubContexts_11, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15);
    }
#line 357 "hlds_out_util.m"
  }
#line 102 "hlds_out_util.m"
}

#line 88 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
#line 88 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_4,
#line 88 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7,
#line 88 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8)
#line 88 "hlds_out_util.m"
{
#line 354 "hlds_out_util.m"
  {
#line 354 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 0)));
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 1)));
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_20;
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21;
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22;
#line 361 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_6_6;

#line 359 "hlds_out_util.m"
    {
#line 359 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_19, &hlds__hlds_out__hlds_out_util__SubContexts_20);
    }
#line 360 "hlds_out_util.m"
    {
#line 360 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, hlds__hlds_out__hlds_out_util__MainContext_18, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22);
    }
#line 361 "hlds_out_util.m"
    {
#line 361 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, &hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__SubContexts_20, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8);
    }
#line 354 "hlds_out_util.m"
  }
#line 88 "hlds_out_util.m"
}

#line 79 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(
#line 79 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 79 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6,
#line 79 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7)
#line 79 "hlds_out_util.m"
{
#line 344 "hlds_out_util.m"
  {
#line 344 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 344 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 344 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_9;
#line 344 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 344 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 344 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;

#line 345 "hlds_out_util.m"
    {
#line 345 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 346 "hlds_out_util.m"
    {
#line 346 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, hlds__hlds_out__hlds_out_util__V_11_11);
    }
#line 344 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 344 "hlds_out_util.m"
  }
#line 79 "hlds_out_util.m"
}

#line 77 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(
#line 77 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_6,
#line 77 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_7,
#line 77 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_8)
#line 77 "hlds_out_util.m"
{
#line 340 "hlds_out_util.m"
  {
#line 340 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 340 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 340 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_18;
#line 340 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;
#line 340 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_20_20;
#line 340 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_22_22;

#line 345 "hlds_out_util.m"
    {
#line 345 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_8, &hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 346 "hlds_out_util.m"
    {
#line 346 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_6, hlds__hlds_out__hlds_out_util__PredId_7);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_22_22);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_19_19, hlds__hlds_out__hlds_out_util__V_20_20);
    }
#line 341 "hlds_out_util.m"
    {
#line 341 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 340 "hlds_out_util.m"
  }
#line 77 "hlds_out_util.m"
}

#line 75 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(
#line 75 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 75 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 75 "hlds_out_util.m"
{
#line 337 "hlds_out_util.m"
  {
#line 337 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 337 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 337 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_11;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 345 "hlds_out_util.m"
    {
#line 345 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_6, &hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 346 "hlds_out_util.m"
    {
#line 346 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, hlds__hlds_out__hlds_out_util__PredId_5);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_15_15);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 337 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 337 "hlds_out_util.m"
  }
#line 75 "hlds_out_util.m"
}

#line 73 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(
#line 73 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 73 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 73 "hlds_out_util.m"
{
#line 334 "hlds_out_util.m"
  {
#line 334 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 334 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;
#line 334 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_24;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_25_25;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_28_28;

#line 345 "hlds_out_util.m"
    {
#line 345 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 346 "hlds_out_util.m"
    {
#line 346 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_28_28 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_28_28);
    }
#line 347 "hlds_out_util.m"
    {
#line 347 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_25_25, hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 341 "hlds_out_util.m"
    {
#line 341 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 334 "hlds_out_util.m"
  }
#line 73 "hlds_out_util.m"
}

#line 71 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(
#line 71 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 71 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_5)
#line 71 "hlds_out_util.m"
{
#line 250 "hlds_out_util.m"
  {
#line 250 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 250 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
#line 250 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
#line 252 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
#line 252 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

#line 251 "hlds_out_util.m"
    {
#line 251 "hlds_out_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
#line 252 "hlds_out_util.m"
    {
#line 252 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
#line 252 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 252 "hlds_out_util.m"
      {
#line 252 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
#line 252 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 252 "hlds_out_util.m"
      }
#line 252 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 253 "hlds_out_util.m"
      {
#line 253 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Module_9;
#line 253 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Name_10;
#line 253 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Arity_11;
#line 253 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_12;
#line 253 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Origin_13;

#line 253 "hlds_out_util.m"
        {
#line 253 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Module_9 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 254 "hlds_out_util.m"
        {
#line 254 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 255 "hlds_out_util.m"
        {
#line 255 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 256 "hlds_out_util.m"
        {
#line 256 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 257 "hlds_out_util.m"
        {
#line 257 "hlds_out_util.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__Origin_13);
        }
#line 268 "hlds_out_util.m"
#line 268 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) {
#line 268 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 268 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 259 "hlds_out_util.m"
            {
#line 259 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 259 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 259 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Descr_16;
#line 259 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_18;
#line 259 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ForStr_19;
#line 259 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 259 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 261 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_17;

#line 260 "hlds_out_util.m"
              {
#line 260 "hlds_out_util.m"
                hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_14, &hlds__hlds_out__hlds_out_util__Descr_16);
              }
#line 261 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util___TypeSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 0)));
#line 261 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 1)));
#line 262 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_18 == (MR_Integer) 0);
#line 262 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 263 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type ";
#line 262 "hlds_out_util.m"
              else
#line 265 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type constructor ";
#line 267 "hlds_out_util.m"
              {
#line 267 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_15);
              }
#line 267 "hlds_out_util.m"
              {
#line 267 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_19, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 267 "hlds_out_util.m"
              {
#line 267 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_16, hlds__hlds_out__hlds_out_util__V_86_86);
              }
#line 259 "hlds_out_util.m"
            }
#line 268 "hlds_out_util.m"
            break;
#line 268 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 269 "hlds_out_util.m"
            {
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ClassId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 0)));
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 1)));
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__MethodStr_26;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ClassName_27;
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ClassStr_29;
#line 269 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__TypeStrs_30;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_73_73;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_74_74;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_76_76;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_77_77;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_79_79;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_80_80;
#line 269 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_82_82;
#line 270 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 2)));
#line 270 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 3)));
#line 274 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__V_28_28;

#line 272 "hlds_out_util.m"
              {
#line 272 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__MethodStr_26 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__MethodName_20, hlds__hlds_out__hlds_out_util__Arity_11);
              }
#line 274 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 0)));
#line 274 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 1)));
#line 275 "hlds_out_util.m"
              {
#line 275 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ClassStr_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_27);
              }
#line 276 "hlds_out_util.m"
              {
#line 276 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_73_73 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
#line 276 "hlds_out_util.m"
              {
#line 276 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__TypeStrs_30 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_73_73, hlds__hlds_out__hlds_out_util__InstanceTypes_23);
              }
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_30));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
#line 279 "hlds_out_util.m"
              }
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 0) = ((MR_Box) ((MR_String) "("));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_82_82));
#line 279 "hlds_out_util.m"
              }
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_29));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_80_80));
#line 279 "hlds_out_util.m"
              }
#line 279 "hlds_out_util.m"
              {
#line 279 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 0) = ((MR_Box) ((MR_String) " for \140"));
#line 279 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_79_79));
#line 279 "hlds_out_util.m"
              }
#line 278 "hlds_out_util.m"
              {
#line 278 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_26));
#line 278 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_77_77));
#line 278 "hlds_out_util.m"
              }
#line 278 "hlds_out_util.m"
              {
#line 278 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 0) = ((MR_Box) ((MR_String) "instance method "));
#line 278 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_76_76));
#line 278 "hlds_out_util.m"
              }
#line 277 "hlds_out_util.m"
              {
#line 277 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_74_74);
              }
#line 269 "hlds_out_util.m"
            }
#line 268 "hlds_out_util.m"
            break;
#line 268 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 324 "hlds_out_util.m"
            {
#line 324 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 325 "hlds_out_util.m"
              {
#line 325 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 325 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 325 "hlds_out_util.m"
              }
#line 326 "hlds_out_util.m"
              {
#line 326 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
              }
#line 324 "hlds_out_util.m"
            }
#line 268 "hlds_out_util.m"
            break;
#line 268 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 268 "hlds_out_util.m"
#line 268 "hlds_out_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) {
#line 268 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 268 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 268 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 268 "hlds_out_util.m"
              case (MR_Integer) 5:
#line 268 "hlds_out_util.m"
              case (MR_Integer) 6:
#line 324 "hlds_out_util.m"
                {
#line 324 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 325 "hlds_out_util.m"
                  {
#line 325 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 325 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 325 "hlds_out_util.m"
                  }
#line 326 "hlds_out_util.m"
                  {
#line 326 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
                  }
#line 324 "hlds_out_util.m"
                }
#line 268 "hlds_out_util.m"
                break;
#line 268 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 282 "hlds_out_util.m"
                {
#line 282 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__FileName_31 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 282 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 283 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PromiseType_33;

#line 283 "hlds_out_util.m"
                  {
#line 283 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__PromiseType_33);
                  }
#line 283 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 284 "hlds_out_util.m"
                    {
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 284 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_100_100;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_103_103;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 284 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_121_121;

#line 285 "hlds_out_util.m"
                      {
#line 285 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_64_64 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_33);
                      }
#line 7208 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_100_100 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0];
#line 286 "hlds_out_util.m"
                      {
#line 286 "hlds_out_util.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_100_100, hlds__hlds_out__hlds_out_util__LineNumber_32, &hlds__hlds_out__hlds_out_util__V_94_94);
                      }
#line 284 "hlds_out_util.m"
                      {
#line 284 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_101_101 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_94_94, (MR_String) ")");
                      }
#line 284 "hlds_out_util.m"
                      {
#line 284 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_103_103 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_101_101);
                      }
#line 286 "hlds_out_util.m"
                      {
#line 286 "hlds_out_util.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_100_100, hlds__hlds_out__hlds_out_util__FileName_31, &hlds__hlds_out__hlds_out_util__V_104_104);
                      }
#line 284 "hlds_out_util.m"
                      {
#line 284 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_104_104, hlds__hlds_out__hlds_out_util__V_103_103);
                      }
#line 284 "hlds_out_util.m"
                      {
#line 284 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_111_111);
                      }
#line 285 "hlds_out_util.m"
                      {
#line 285 "hlds_out_util.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_100_100, hlds__hlds_out__hlds_out_util__V_64_64, &hlds__hlds_out__hlds_out_util__V_114_114);
                      }
#line 284 "hlds_out_util.m"
                      {
#line 284 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_121_121 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_114_114, hlds__hlds_out__hlds_out_util__V_113_113);
                      }
#line 284 "hlds_out_util.m"
                      {
#line 284 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_121_121);
                      }
#line 284 "hlds_out_util.m"
                    }
#line 283 "hlds_out_util.m"
                  else
#line 288 "hlds_out_util.m"
                    {
#line 288 "hlds_out_util.m"
                      {
#line 288 "hlds_out_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_util", (MR_String) "function \140hlds.hlds_out.hlds_out_util.pred_id_to_string\'/2", (MR_String) "origin_assertion");
                      }
#line 288 "hlds_out_util.m"
                    }
#line 282 "hlds_out_util.m"
                }
#line 268 "hlds_out_util.m"
                break;
#line 268 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 302 "hlds_out_util.m"
                {
#line 302 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TypeCtorSymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 302 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TypeCtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 302 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 3)));
#line 302 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__TypeStr_40;
#line 302 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_54_54;

#line 304 "hlds_out_util.m"
                  {
#line 304 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorSymName_37));
#line 304 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorArity_38));
#line 304 "hlds_out_util.m"
                  }
#line 304 "hlds_out_util.m"
                  {
#line 304 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__TypeStr_40 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_54_54);
                  }
#line 308 "hlds_out_util.m"
#line 308 "hlds_out_util.m"
                  switch (hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39) {
#line 308 "hlds_out_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 308 "hlds_out_util.m"
                    case (MR_Integer) 3:
#line 315 "hlds_out_util.m"
                      {
#line 316 "hlds_out_util.m"
                        {
#line 316 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 315 "hlds_out_util.m"
                      }
#line 308 "hlds_out_util.m"
                      break;
#line 308 "hlds_out_util.m"
                    case (MR_Integer) 2:
#line 312 "hlds_out_util.m"
                      {
#line 313 "hlds_out_util.m"
                        {
#line 313 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 312 "hlds_out_util.m"
                      }
#line 308 "hlds_out_util.m"
                      break;
#line 308 "hlds_out_util.m"
                    case (MR_Integer) 1:
#line 309 "hlds_out_util.m"
                      {
#line 310 "hlds_out_util.m"
                        {
#line 310 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 309 "hlds_out_util.m"
                      }
#line 308 "hlds_out_util.m"
                      break;
#line 308 "hlds_out_util.m"
                    case (MR_Integer) 0:
#line 306 "hlds_out_util.m"
                      {
#line 307 "hlds_out_util.m"
                        {
#line 307 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 306 "hlds_out_util.m"
                      }
#line 308 "hlds_out_util.m"
                      break;
#line 308 "hlds_out_util.m"
                  }
#line 302 "hlds_out_util.m"
                }
#line 268 "hlds_out_util.m"
                break;
#line 268 "hlds_out_util.m"
              case (MR_Integer) 4:
#line 291 "hlds_out_util.m"
                {
#line 291 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__BasePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 291 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 291 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__BasePredIdStr_36;

#line 292 "hlds_out_util.m"
                  {
#line 292 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__BasePredIdStr_36 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__BasePredId_34);
                  }
#line 296 "hlds_out_util.m"
#line 296 "hlds_out_util.m"
                  switch (hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35) {
#line 296 "hlds_out_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 296 "hlds_out_util.m"
                    case (MR_Integer) 1:
#line 297 "hlds_out_util.m"
                      {
#line 298 "hlds_out_util.m"
                        {
#line 298 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 297 "hlds_out_util.m"
                      }
#line 296 "hlds_out_util.m"
                      break;
#line 296 "hlds_out_util.m"
                    case (MR_Integer) 0:
#line 294 "hlds_out_util.m"
                      {
#line 295 "hlds_out_util.m"
                        {
#line 295 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 294 "hlds_out_util.m"
                      }
#line 296 "hlds_out_util.m"
                      break;
#line 296 "hlds_out_util.m"
                  }
#line 291 "hlds_out_util.m"
                }
#line 268 "hlds_out_util.m"
                break;
#line 268 "hlds_out_util.m"
            }
#line 268 "hlds_out_util.m"
            break;
#line 268 "hlds_out_util.m"
        }
#line 253 "hlds_out_util.m"
      }
#line 252 "hlds_out_util.m"
    else
#line 330 "hlds_out_util.m"
      {
#line 330 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_53;
#line 330 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_89_89;

#line 330 "hlds_out_util.m"
        {
#line 330 "hlds_out_util.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 331 "hlds_out_util.m"
        {
#line 331 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 331 "hlds_out_util.m"
        {
#line 331 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_89_89);
        }
#line 330 "hlds_out_util.m"
      }
#line 250 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_6;
#line 250 "hlds_out_util.m"
  }
#line 71 "hlds_out_util.m"
}

#line 70 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(
#line 70 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 70 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6)
#line 70 "hlds_out_util.m"
{
#line 244 "hlds_out_util.m"
  {
#line 244 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 244 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 248 "hlds_out_util.m"
    {
#line 248 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 248 "hlds_out_util.m"
    {
#line 248 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
    }
#line 244 "hlds_out_util.m"
  }
#line 70 "hlds_out_util.m"
}

#line 49 "hlds_out_util.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
#line 49 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Globals_4,
#line 49 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Lang_5)
#line 49 "hlds_out_util.m"
{
#line 232 "hlds_out_util.m"
  {
#line 232 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Info_6;
#line 232 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_7;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Ids_8;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Names_9;
#line 232 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_10;

#line 233 "hlds_out_util.m"
    {
#line 233 "hlds_out_util.m"
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 152, &hlds__hlds_out__hlds_out_util__DumpOptions_7);
    }
#line 234 "hlds_out_util.m"
    {
#line 234 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 148, &hlds__hlds_out__hlds_out_util__Ids_8);
    }
#line 235 "hlds_out_util.m"
    {
#line 235 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 149, &hlds__hlds_out__hlds_out_util__Names_9);
    }
#line 236 "hlds_out_util.m"
    {
#line 236 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__MercInfo_10 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Lang_5);
    }
#line 237 "hlds_out_util.m"
    {
#line 237 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Info_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_8));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_9));
#line 237 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_10));
#line 237 "hlds_out_util.m"
    }
#line 232 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Info_6;
#line 232 "hlds_out_util.m"
  }
#line 49 "hlds_out_util.m"
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
}

void mercury__hlds__hlds_out__hlds_out_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_util. */
