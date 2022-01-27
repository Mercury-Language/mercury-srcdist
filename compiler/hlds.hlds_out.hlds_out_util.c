/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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




#line 149 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 152 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 155 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 161 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 167 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 170 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

#line 173 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

#line 176 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

#line 179 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

#line 182 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

#line 185 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

#line 188 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

#line 191 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

#line 194 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

#line 197 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

#line 200 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

#line 203 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

#line 206 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

#line 209 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

#line 212 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

#line 215 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

#line 218 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

#line 221 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

#line 224 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

#line 227 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

#line 230 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

#line 233 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

#line 236 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 239 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 241 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 244 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 247 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 249 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 251 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 254 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 257 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 259 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 262 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 265 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 267 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 269 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 272 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 275 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 277 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 280 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 283 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 285 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 287 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 290 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 293 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 295 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 298 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 301 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 303 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 305 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 775 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__775__1_3_p_0(
#line 775 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_102,
#line 775 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_103,
#line 775 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_104);

#line 1000 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1000 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1000 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

#line 952 "hlds_out_util.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
#line 952 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1);

#line 891 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 891 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 891 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 891 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 891 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4);

#line 466 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 466 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 466 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 466 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7);

#line 444 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 444 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 444 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 444 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 444 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13);

#line 420 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 420 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 420 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 420 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 420 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9);

#line 401 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 401 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 401 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 401 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 401 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 401 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5);

#line 360 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 360 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 360 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 360 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 360 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 360 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19);

#line 922 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 922 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 922 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

#line 889 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 889 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 889 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 889 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 889 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 772 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 772 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 772 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 772 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 772 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8];


#line 500 "hlds_out_util.m"
/* sealed */ struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s {
#line 500 "hlds_out_util.m"
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 500 "hlds_out_util.m"
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



#line 661 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 669 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 678 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 686 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 694 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 702 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 711 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 719 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0
};

#line 728 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

#line 737 "hlds.hlds_out.hlds_out_util.c"
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

#line 752 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 757 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

#line 766 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 771 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 776 "hlds.hlds_out.hlds_out_util.c"
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

#line 793 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

#line 799 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

#line 805 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 811 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 817 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 823 "hlds.hlds_out.hlds_out_util.c"
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

#line 840 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

#line 846 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

#line 852 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 858 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 864 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 870 "hlds.hlds_out.hlds_out_util.c"
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

#line 887 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

#line 893 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

#line 899 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

#line 905 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

#line 911 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 917 "hlds.hlds_out.hlds_out_util.c"
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

#line 934 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 937 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 939 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 941 "hlds.hlds_out.hlds_out_util.c"
{
#line 943 "hlds.hlds_out.hlds_out_util.c"
  {
#line 945 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 948 "hlds.hlds_out.hlds_out_util.c"
    {
#line 950 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 953 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 955 "hlds.hlds_out.hlds_out_util.c"
  }
#line 957 "hlds.hlds_out.hlds_out_util.c"
}

#line 960 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 963 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 965 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 967 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 969 "hlds.hlds_out.hlds_out_util.c"
{
#line 971 "hlds.hlds_out.hlds_out_util.c"
  {
#line 973 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 976 "hlds.hlds_out.hlds_out_util.c"
    {
#line 978 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 981 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 983 "hlds.hlds_out.hlds_out_util.c"
  }
#line 985 "hlds.hlds_out.hlds_out_util.c"
}

#line 988 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 991 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 993 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 995 "hlds.hlds_out.hlds_out_util.c"
{
#line 997 "hlds.hlds_out.hlds_out_util.c"
  {
#line 999 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1002 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1004 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1007 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1009 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1011 "hlds.hlds_out.hlds_out_util.c"
}

#line 1014 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 1017 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1019 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1021 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1023 "hlds.hlds_out.hlds_out_util.c"
{
#line 1025 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1027 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1030 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1032 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1035 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1037 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1039 "hlds.hlds_out.hlds_out_util.c"
}

#line 1042 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 1045 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1047 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1049 "hlds.hlds_out.hlds_out_util.c"
{
#line 1051 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1053 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1056 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1058 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1061 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1063 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1065 "hlds.hlds_out.hlds_out_util.c"
}

#line 1068 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 1071 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1073 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1075 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1077 "hlds.hlds_out.hlds_out_util.c"
{
#line 1079 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1081 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1084 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1086 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1089 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1091 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1093 "hlds.hlds_out.hlds_out_util.c"
}

#line 1096 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 1099 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1101 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1103 "hlds.hlds_out.hlds_out_util.c"
{
#line 1105 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1107 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1110 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1112 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1115 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1117 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1119 "hlds.hlds_out.hlds_out_util.c"
}

#line 1122 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 1125 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1127 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1129 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1131 "hlds.hlds_out.hlds_out_util.c"
{
#line 1133 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1135 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1138 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1140 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1143 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1145 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1147 "hlds.hlds_out.hlds_out_util.c"
}

#line 775 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__775__1_3_p_0(
#line 775 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_102,
#line 775 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_103,
#line 775 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_104)
#line 775 "hlds_out_util.m"
{
#line 775 "hlds_out_util.m"
  {
#line 775 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_102 == (MR_Char) 42);

#line 775 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 774 "hlds_out_util.m"
      {
#line 774 "hlds_out_util.m"
        {
#line 774 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_103, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_104);
#line 774 "hlds_out_util.m"
          return;
        }
#line 774 "hlds_out_util.m"
      }
#line 775 "hlds_out_util.m"
    else
#line 776 "hlds_out_util.m"
      {
#line 776 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

#line 776 "hlds_out_util.m"
        {
#line 776 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_102, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
#line 777 "hlds_out_util.m"
        {
#line 777 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_103, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__HeadVar__3_104);
#line 777 "hlds_out_util.m"
          return;
        }
#line 776 "hlds_out_util.m"
      }
#line 775 "hlds_out_util.m"
  }
#line 775 "hlds_out_util.m"
}

#line 153 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
#line 153 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 153 "hlds_out_util.m"
{
#line 153 "hlds_out_util.m"
  {
#line 153 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 153 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 153 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 153 "hlds_out_util.m"
    {
#line 153 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 153 "hlds_out_util.m"
      return;
    }
#line 153 "hlds_out_util.m"
  }
#line 153 "hlds_out_util.m"
}

#line 153 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 153 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 153 "hlds_out_util.m"
{
#line 1246 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1248 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1251 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1253 "hlds.hlds_out.hlds_out_util.c"
  }
#line 153 "hlds_out_util.m"
}

#line 54 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
#line 54 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 54 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 54 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 54 "hlds_out_util.m"
{
#line 54 "hlds_out_util.m"
  {
#line 54 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 54 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 54 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 54 "hlds_out_util.m"
    {
#line 54 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 54 "hlds_out_util.m"
      return;
    }
#line 54 "hlds_out_util.m"
  }
#line 54 "hlds_out_util.m"
}

#line 54 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
#line 54 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 54 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 54 "hlds_out_util.m"
{
#line 1299 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1301 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1304 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1306 "hlds.hlds_out.hlds_out_util.c"
  }
#line 54 "hlds_out_util.m"
}

#line 50 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
#line 50 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 50 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 50 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 50 "hlds_out_util.m"
{
#line 50 "hlds_out_util.m"
  {
#line 50 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 50 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 50 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 50 "hlds_out_util.m"
    {
#line 50 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 50 "hlds_out_util.m"
      return;
    }
#line 50 "hlds_out_util.m"
  }
#line 50 "hlds_out_util.m"
}

#line 50 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
#line 50 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 50 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 50 "hlds_out_util.m"
{
#line 1352 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1354 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1357 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1359 "hlds.hlds_out.hlds_out_util.c"
  }
#line 50 "hlds_out_util.m"
}

#line 37 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
#line 37 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 37 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 37 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 37 "hlds_out_util.m"
{
#line 37 "hlds_out_util.m"
  {
#line 37 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 37 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_18 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 37 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_19 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 37 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_18 == hlds__hlds_out__hlds_out_util__CastY_19);
#line 37 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1388 "hlds.hlds_out.hlds_out_util.c"
      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "hlds_out_util.m"
    else
#line 37 "hlds_out_util.m"
      {
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_14_14;

#line 37 "hlds_out_util.m"
        {
#line 37 "hlds_out_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_14_14, hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9);
        }
#line 1422 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_14_14 == (MR_Integer) 0);
#line 37 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 37 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_14_14;
#line 37 "hlds_out_util.m"
        else
#line 37 "hlds_out_util.m"
          {
#line 37 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 37 "hlds_out_util.m"
            {
#line 37 "hlds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_10_10);
            }
#line 1442 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 0);
#line 37 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 37 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_15_15;
#line 37 "hlds_out_util.m"
            else
#line 37 "hlds_out_util.m"
              {
#line 37 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_16_16;

#line 37 "hlds_out_util.m"
                {
#line 37 "hlds_out_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                }
#line 1462 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_16_16 == (MR_Integer) 0);
#line 37 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 37 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
                  *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_16_16;
#line 37 "hlds_out_util.m"
                else
#line 37 "hlds_out_util.m"
                  {
#line 37 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__V_17_17;

#line 37 "hlds_out_util.m"
                    {
#line 37 "hlds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_17_17, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_7_7)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_12_12)));
                    }
#line 1482 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_17_17 == (MR_Integer) 0);
#line 37 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 37 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
                      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_17_17;
#line 37 "hlds_out_util.m"
                    else
#line 37 "hlds_out_util.m"
                      {
#line 37 "hlds_out_util.m"
                        parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_13_13);
#line 37 "hlds_out_util.m"
                        return;
                      }
#line 37 "hlds_out_util.m"
                  }
#line 37 "hlds_out_util.m"
              }
#line 37 "hlds_out_util.m"
          }
#line 37 "hlds_out_util.m"
      }
#line 37 "hlds_out_util.m"
  }
#line 37 "hlds_out_util.m"
}

#line 37 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
#line 37 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 37 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 37 "hlds_out_util.m"
{
#line 37 "hlds_out_util.m"
  {
#line 37 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 37 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_13 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__1_1;
#line 37 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_14 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 37 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_13 == hlds__hlds_out__hlds_out_util__CastY_14);
#line 37 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 37 "hlds_out_util.m"
    else
#line 37 "hlds_out_util.m"
      {
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_15_15;
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_16_16;
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 37 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));

#line 1565 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
#line 37 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
          {
#line 1571 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
#line 37 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
              {
#line 1577 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1579 "hlds.hlds_out.hlds_out_util.c"
                {
#line 1581 "hlds.hlds_out.hlds_out_util.c"
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
#line 37 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 37 "hlds_out_util.m"
                  {
#line 1588 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1590 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 1592 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
#line 37 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1597 "hlds.hlds_out.hlds_out_util.c"
                      {
#line 1599 "hlds.hlds_out.hlds_out_util.c"
                        return hlds__hlds_out__hlds_out_util__succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__V_7_7, hlds__hlds_out__hlds_out_util__V_12_12);
                      }
#line 37 "hlds_out_util.m"
                  }
#line 37 "hlds_out_util.m"
              }
#line 37 "hlds_out_util.m"
          }
#line 37 "hlds_out_util.m"
      }
#line 37 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 37 "hlds_out_util.m"
  }
#line 37 "hlds_out_util.m"
}

#line 1000 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 1000 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 1000 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
#line 1000 "hlds_out_util.m"
{
#line 1003 "hlds_out_util.m"
  while (MR_TRUE)
#line 1003 "hlds_out_util.m"
    {
#line 1003 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1003 "hlds_out_util.m"
      {
#line 1003 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1004 "hlds_out_util.m"
        {
#line 1004 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
#line 1009 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "hlds_out_util.m"
          {
#line 1010 "hlds_out_util.m"
          }
#line 1009 "hlds_out_util.m"
        else
#line 1006 "hlds_out_util.m"
          {
#line 1006 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
#line 1006 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

#line 1007 "hlds_out_util.m"
            {
#line 1007 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1008 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1008 "hlds_out_util.m"
            {
#line 1008 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
#line 1008 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

#line 1008 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
#line 1008 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
#line 1008 "hlds_out_util.m"
            }
#line 1008 "hlds_out_util.m"
            continue;
#line 1006 "hlds_out_util.m"
          }
#line 1003 "hlds_out_util.m"
      }
#line 1003 "hlds_out_util.m"
      break;
#line 1003 "hlds_out_util.m"
    }
#line 1000 "hlds_out_util.m"
}

#line 952 "hlds_out_util.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
#line 952 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 952 "hlds_out_util.m"
{
#line 954 "hlds_out_util.m"
  {
#line 954 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 954 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 954 "hlds_out_util.m"
#line 954 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 954 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 954 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 954 "hlds_out_util.m"
#line 954 "hlds_out_util.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 954 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 954 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 977 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "opt_imported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 975 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "abstract_imported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 979 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "pseudo_imported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 956 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 4:
#line 958 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "opt_exported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 5:
#line 960 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "abstract_exported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 6:
#line 962 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "pseudo_exported";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 7:
#line 981 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "exported_to_submodules";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
          case (MR_Integer) 8:
#line 954 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__HeadVar__2_2 = (MR_String) "local";
#line 954 "hlds_out_util.m"
            break;
#line 954 "hlds_out_util.m"
        }
#line 954 "hlds_out_util.m"
        break;
#line 954 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 973 "hlds_out_util.m"
        {
#line 973 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Status_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 973 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 973 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 974 "hlds_out_util.m"
          {
#line 974 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Status_7);
          }
#line 974 "hlds_out_util.m"
          {
#line 974 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) ")");
          }
#line 974 "hlds_out_util.m"
          {
#line 974 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
#line 973 "hlds_out_util.m"
        }
#line 954 "hlds_out_util.m"
        break;
#line 954 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 954 "hlds_out_util.m"
        {
#line 954 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 954 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[8 + hlds__hlds_out__hlds_out_util__V_12_12]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 954 "hlds_out_util.m"
        }
#line 954 "hlds_out_util.m"
        break;
#line 954 "hlds_out_util.m"
    }
#line 954 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 954 "hlds_out_util.m"
  }
#line 952 "hlds_out_util.m"
}

#line 891 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 891 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 891 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 891 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 891 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 891 "hlds_out_util.m"
{
#line 895 "hlds_out_util.m"
  {
#line 895 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 895 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 895 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

#line 896 "hlds_out_util.m"
    {
#line 896 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
#line 897 "hlds_out_util.m"
    {
#line 897 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 898 "hlds_out_util.m"
    {
#line 898 "hlds_out_util.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
#line 899 "hlds_out_util.m"
    {
#line 899 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 904 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
#line 901 "hlds_out_util.m"
      {
#line 901 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 902 "hlds_out_util.m"
        {
#line 902 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
#line 903 "hlds_out_util.m"
        {
#line 903 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
#line 903 "hlds_out_util.m"
          return;
        }
#line 901 "hlds_out_util.m"
      }
#line 904 "hlds_out_util.m"
    else
#line 905 "hlds_out_util.m"
      {
#line 905 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 906 "hlds_out_util.m"
        {
#line 906 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
#line 907 "hlds_out_util.m"
        {
#line 907 "hlds_out_util.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Super_14);
#line 907 "hlds_out_util.m"
          return;
        }
#line 905 "hlds_out_util.m"
      }
#line 895 "hlds_out_util.m"
  }
#line 891 "hlds_out_util.m"
}

#line 466 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(
#line 466 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_4,
#line 466 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6,
#line 466 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7)
#line 466 "hlds_out_util.m"
{
#line 471 "hlds_out_util.m"
  {
#line 471 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 471 "hlds_out_util.m"
#line 471 "hlds_out_util.m"
    switch (hlds__hlds_out__hlds_out_util__First_4) {
#line 471 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 471 "hlds_out_util.m"
        {
#line 474 "hlds_out_util.m"
          {
#line 474 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
          }
#line 471 "hlds_out_util.m"
        }
#line 471 "hlds_out_util.m"
        break;
#line 471 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 476 "hlds_out_util.m"
        {
#line 477 "hlds_out_util.m"
          {
#line 477 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
#line 476 "hlds_out_util.m"
        }
#line 471 "hlds_out_util.m"
        break;
#line 471 "hlds_out_util.m"
    }
#line 471 "hlds_out_util.m"
  }
#line 466 "hlds_out_util.m"
}

#line 444 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(
#line 444 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__First_5,
#line 444 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__SubContext_6,
#line 444 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12,
#line 444 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13)
#line 444 "hlds_out_util.m"
{
#line 447 "hlds_out_util.m"
  {
#line 447 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ConsId_8;
#line 447 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9;
#line 447 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 447 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ConsIdStr_11;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_16_16;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_20_20;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_21_21;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_24_24;
#line 447 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_25_25;

#line 471 "hlds_out_util.m"
#line 471 "hlds_out_util.m"
    switch (hlds__hlds_out__hlds_out_util__First_5) {
#line 471 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 471 "hlds_out_util.m"
        {
#line 474 "hlds_out_util.m"
          {
#line 474 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
          }
#line 471 "hlds_out_util.m"
        }
#line 471 "hlds_out_util.m"
        break;
#line 471 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 476 "hlds_out_util.m"
        {
#line 477 "hlds_out_util.m"
          {
#line 477 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
#line 476 "hlds_out_util.m"
        }
#line 471 "hlds_out_util.m"
        break;
#line 471 "hlds_out_util.m"
    }
#line 449 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 0)));
#line 449 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_6, (MR_Integer) 1)));
#line 450 "hlds_out_util.m"
    {
#line 450 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
    }
#line 453 "hlds_out_util.m"
    {
#line 453 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
#line 454 "hlds_out_util.m"
    {
#line 454 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 454 "hlds_out_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 454 "hlds_out_util.m"
    }
#line 455 "hlds_out_util.m"
    {
#line 455 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "hlds_out_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 455 "hlds_out_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
#line 455 "hlds_out_util.m"
    }
#line 455 "hlds_out_util.m"
    {
#line 455 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_25_25));
#line 455 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 455 "hlds_out_util.m"
    }
#line 455 "hlds_out_util.m"
    {
#line 455 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[17])));
#line 455 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_24_24));
#line 455 "hlds_out_util.m"
    }
#line 454 "hlds_out_util.m"
    {
#line 454 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_20_20));
#line 454 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_21_21));
#line 454 "hlds_out_util.m"
    }
#line 454 "hlds_out_util.m"
    {
#line 454 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 454 "hlds_out_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_19_19));
#line 454 "hlds_out_util.m"
    }
#line 454 "hlds_out_util.m"
    {
#line 454 "hlds_out_util.m"
      *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 447 "hlds_out_util.m"
  }
#line 444 "hlds_out_util.m"
}

#line 420 "hlds_out_util.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(
#line 420 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 420 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore_7,
#line 420 "hlds_out_util.m"
  MR_Integer * hlds__hlds_out__hlds_out_util__ElementNum_8,
#line 420 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__AfterContexts_9)
#line 420 "hlds_out_util.m"
{
#line 424 "hlds_out_util.m"
  while (MR_TRUE)
#line 424 "hlds_out_util.m"
    {
#line 424 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 424 "hlds_out_util.m"
      {
#line 424 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 424 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContext_5;
#line 424 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 424 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__ConsId_10;
#line 424 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_11;
#line 424 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Functor_12;
#line 424 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__V_15_15;
#line 426 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13;

#line 423 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 423 "hlds_out_util.m"
          {
#line 423 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__SubContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 425 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 0)));
#line 425 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SubContext_5, (MR_Integer) 1)));
#line 426 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 426 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 426 "hlds_out_util.m"
              {
#line 426 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 426 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 426 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 426 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 2);
#line 424 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 424 "hlds_out_util.m"
                  {
#line 430 "hlds_out_util.m"
                    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Functor_12)) == (MR_mktag((MR_Integer) 1))))
#line 431 "hlds_out_util.m"
                      {
#line 431 "hlds_out_util.m"
                        MR_Word hlds__hlds_out__hlds_out_util__ModuleSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));
#line 431 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 1)));
#line 431 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_17_17;
#line 431 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_21_21;

#line 431 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_16_16, (MR_String) "[|]") == 0);
#line 431 "hlds_out_util.m"
                        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 431 "hlds_out_util.m"
                          {
#line 432 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_17_17 = (MR_String) "list";
#line 432 "hlds_out_util.m"
                            {
#line 432 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(hlds__hlds_out__hlds_out_util__ModuleSymName_14, &hlds__hlds_out__hlds_out_util__V_21_21);
                            }
#line 431 "hlds_out_util.m"
                            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 432 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_17_17, hlds__hlds_out__hlds_out_util__V_21_21) == 0);
#line 431 "hlds_out_util.m"
                          }
#line 431 "hlds_out_util.m"
                      }
#line 430 "hlds_out_util.m"
                    else
#line 429 "hlds_out_util.m"
                      {
#line 429 "hlds_out_util.m"
                        MR_String hlds__hlds_out__hlds_out_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Functor_12, (MR_Integer) 0)));

#line 429 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_18_18, (MR_String) "[|]") == 0);
#line 429 "hlds_out_util.m"
                      }
#line 424 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 438 "hlds_out_util.m"
#line 438 "hlds_out_util.m"
                      switch (hlds__hlds_out__hlds_out_util__ArgNum_11) {
#line 438 "hlds_out_util.m"
                        default:
#line 438 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
#line 438 "hlds_out_util.m"
                          break;
#line 438 "hlds_out_util.m"
                        case (MR_Integer) 1:
#line 435 "hlds_out_util.m"
                          {
#line 436 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__ElementNum_8 = hlds__hlds_out__hlds_out_util__NumElementsBefore_7;
#line 437 "hlds_out_util.m"
                            *hlds__hlds_out__hlds_out_util__AfterContexts_9 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 435 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 435 "hlds_out_util.m"
                          }
#line 438 "hlds_out_util.m"
                          break;
#line 438 "hlds_out_util.m"
                        case (MR_Integer) 2:
#line 439 "hlds_out_util.m"
                          {
#line 439 "hlds_out_util.m"
                            MR_Integer hlds__hlds_out__hlds_out_util__V_19_19 = (hlds__hlds_out__hlds_out_util__NumElementsBefore_7 + (MR_Integer) 1);

#line 440 "hlds_out_util.m"
                            /* direct tailcall eliminated */
#line 440 "hlds_out_util.m"
                            {
#line 440 "hlds_out_util.m"
                              MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_util__SubContexts_6;
#line 440 "hlds_out_util.m"
                              MR_Integer hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7 = hlds__hlds_out__hlds_out_util__V_19_19;

#line 440 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__NumElementsBefore_7 = hlds__hlds_out__hlds_out_util__NumElementsBefore__tmp_copy_7;
#line 440 "hlds_out_util.m"
                              hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__HeadVar__1__tmp_copy_1;
#line 440 "hlds_out_util.m"
                            }
#line 440 "hlds_out_util.m"
                            continue;
#line 439 "hlds_out_util.m"
                          }
#line 438 "hlds_out_util.m"
                          break;
#line 438 "hlds_out_util.m"
                      }
#line 424 "hlds_out_util.m"
                  }
#line 426 "hlds_out_util.m"
              }
#line 423 "hlds_out_util.m"
          }
#line 424 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__succeeded;
#line 424 "hlds_out_util.m"
      }
#line 424 "hlds_out_util.m"
      break;
#line 424 "hlds_out_util.m"
    }
#line 420 "hlds_out_util.m"
}

#line 401 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(
#line 401 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1,
#line 401 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2,
#line 401 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3,
#line 401 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4,
#line 401 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5)
#line 401 "hlds_out_util.m"
{
#line 405 "hlds_out_util.m"
  while (MR_TRUE)
#line 405 "hlds_out_util.m"
    {
#line 405 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 405 "hlds_out_util.m"
      {
#line 405 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 405 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "hlds_out_util.m"
          {
#line 405 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_5 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4;
#line 405 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_2 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1;
#line 405 "hlds_out_util.m"
          }
#line 405 "hlds_out_util.m"
        else
#line 406 "hlds_out_util.m"
          {
#line 406 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 406 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__SubContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 414 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__ElementNum_16;
#line 414 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__AfterContexts_17;

#line 408 "hlds_out_util.m"
            {
#line 408 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_p_0(hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0, &hlds__hlds_out__hlds_out_util__ElementNum_16, &hlds__hlds_out__hlds_out_util__AfterContexts_17);
            }
#line 414 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 411 "hlds_out_util.m"
              {
#line 411 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;
#line 411 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__ElementNumStr_37;
#line 411 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38;
#line 411 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_40_40;
#line 411 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_43_43;
#line 411 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_46_46;
#line 411 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_47_47;

#line 471 "hlds_out_util.m"
#line 471 "hlds_out_util.m"
                switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1) {
#line 471 "hlds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 471 "hlds_out_util.m"
                  case (MR_Integer) 0:
#line 471 "hlds_out_util.m"
                    {
#line 474 "hlds_out_util.m"
                      {
#line 474 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                      }
#line 471 "hlds_out_util.m"
                    }
#line 471 "hlds_out_util.m"
                    break;
#line 471 "hlds_out_util.m"
                  case (MR_Integer) 1:
#line 476 "hlds_out_util.m"
                    {
#line 477 "hlds_out_util.m"
                      {
#line 477 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                      }
#line 476 "hlds_out_util.m"
                    }
#line 471 "hlds_out_util.m"
                    break;
#line 471 "hlds_out_util.m"
                }
#line 462 "hlds_out_util.m"
                {
#line 462 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
#line 464 "hlds_out_util.m"
                {
#line 464 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 464 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
#line 464 "hlds_out_util.m"
                }
#line 464 "hlds_out_util.m"
                {
#line 464 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_47_47));
#line 464 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 464 "hlds_out_util.m"
                }
#line 464 "hlds_out_util.m"
                {
#line 464 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[16])));
#line 464 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_46_46));
#line 464 "hlds_out_util.m"
                }
#line 463 "hlds_out_util.m"
                {
#line 463 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[15])));
#line 463 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_43_43));
#line 463 "hlds_out_util.m"
                }
#line 463 "hlds_out_util.m"
                {
#line 463 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38, hlds__hlds_out__hlds_out_util__V_40_40);
                }
#line 413 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 413 "hlds_out_util.m"
                {
#line 413 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__AfterContexts_17;
#line 413 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_24_24;

#line 413 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 413 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 413 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 413 "hlds_out_util.m"
                }
#line 413 "hlds_out_util.m"
                continue;
#line 411 "hlds_out_util.m"
              }
#line 414 "hlds_out_util.m"
            else
#line 415 "hlds_out_util.m"
              {
#line 415 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 415 "hlds_out_util.m"
                {
#line 415 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1, hlds__hlds_out__hlds_out_util__SubContext_13, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28);
                }
#line 417 "hlds_out_util.m"
                /* direct tailcall eliminated */
#line 417 "hlds_out_util.m"
                {
#line 417 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_util__SubContexts_14;
#line 417 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_28_28;

#line 417 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0__tmp_copy_4;
#line 417 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__HeadVar__3_3 = hlds__hlds_out__hlds_out_util__HeadVar__3__tmp_copy_3;
#line 417 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1 = (MR_Integer) 1;
#line 417 "hlds_out_util.m"
                }
#line 417 "hlds_out_util.m"
                continue;
#line 415 "hlds_out_util.m"
              }
#line 406 "hlds_out_util.m"
          }
#line 405 "hlds_out_util.m"
      }
#line 405 "hlds_out_util.m"
      break;
#line 405 "hlds_out_util.m"
    }
#line 401 "hlds_out_util.m"
}

#line 360 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(
#line 360 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16,
#line 360 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17,
#line 360 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MainContext_7,
#line 360 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18,
#line 360 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19)
#line 360 "hlds_out_util.m"
{
#line 366 "hlds_out_util.m"
  {
#line 366 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 366 "hlds_out_util.m"
#line 366 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) {
#line 366 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 366 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 366 "hlds_out_util.m"
#line 366 "hlds_out_util.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__MainContext_7)) {
#line 366 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 366 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 366 "hlds_out_util.m"
            {
#line 366 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 366 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
#line 366 "hlds_out_util.m"
            }
#line 366 "hlds_out_util.m"
            break;
#line 366 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 375 "hlds_out_util.m"
            {
#line 375 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42;

#line 376 "hlds_out_util.m"
              {
#line 376 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42);
              }
#line 377 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 378 "hlds_out_util.m"
              {
#line 378 "hlds_out_util.m"
                *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[8]));
              }
#line 375 "hlds_out_util.m"
            }
#line 366 "hlds_out_util.m"
            break;
#line 366 "hlds_out_util.m"
        }
#line 366 "hlds_out_util.m"
        break;
#line 366 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 368 "hlds_out_util.m"
        {
#line 368 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 368 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__ArgNumStr_10;
#line 368 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51;
#line 368 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_54_54;
#line 368 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_57_57;
#line 368 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_58_58;

#line 369 "hlds_out_util.m"
          {
#line 369 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51);
          }
#line 370 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 371 "hlds_out_util.m"
          {
#line 371 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgNumStr_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_9);
          }
#line 373 "hlds_out_util.m"
          {
#line 373 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "hlds_out_util.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 373 "hlds_out_util.m"
          }
#line 373 "hlds_out_util.m"
          {
#line 373 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_58_58));
#line 373 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[6])));
#line 373 "hlds_out_util.m"
          }
#line 373 "hlds_out_util.m"
          {
#line 373 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_util_scalar_common_1[14])));
#line 373 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_57_57));
#line 373 "hlds_out_util.m"
          }
#line 372 "hlds_out_util.m"
          {
#line 372 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_51_51, hlds__hlds_out__hlds_out_util__V_54_54);
          }
#line 368 "hlds_out_util.m"
        }
#line 366 "hlds_out_util.m"
        break;
#line 366 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 381 "hlds_out_util.m"
        {
#line 381 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 381 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Markers_12;
#line 381 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__ArgIdStr_13;
#line 381 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31;
#line 381 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_34_34;
#line 381 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_35_35;
#line 381 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 1)));

#line 471 "hlds_out_util.m"
#line 471 "hlds_out_util.m"
          switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16) {
#line 471 "hlds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 471 "hlds_out_util.m"
            case (MR_Integer) 0:
#line 471 "hlds_out_util.m"
              {
#line 474 "hlds_out_util.m"
                {
#line 474 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[11]));
                }
#line 471 "hlds_out_util.m"
              }
#line 471 "hlds_out_util.m"
              break;
#line 471 "hlds_out_util.m"
            case (MR_Integer) 1:
#line 476 "hlds_out_util.m"
              {
#line 477 "hlds_out_util.m"
                {
#line 477 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
#line 476 "hlds_out_util.m"
              }
#line 471 "hlds_out_util.m"
              break;
#line 471 "hlds_out_util.m"
          }
#line 383 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = (MR_Integer) 1;
#line 391 "hlds_out_util.m"
          {
#line 391 "hlds_out_util.m"
            hlds__hlds_pred__init_markers_1_p_0(&hlds__hlds_out__hlds_out_util__Markers_12);
          }
#line 392 "hlds_out_util.m"
          {
#line 392 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__ArgIdStr_13 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__CallId_11, hlds__hlds_out__hlds_out_util__ArgNum_65, hlds__hlds_out__hlds_out_util__Markers_12);
          }
#line 393 "hlds_out_util.m"
          {
#line 393 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgIdStr_13));
#line 393 "hlds_out_util.m"
          }
#line 393 "hlds_out_util.m"
          {
#line 393 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_35_35));
#line 393 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[4])));
#line 393 "hlds_out_util.m"
          }
#line 393 "hlds_out_util.m"
          {
#line 393 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31, hlds__hlds_out__hlds_out_util__V_34_34);
          }
#line 381 "hlds_out_util.m"
        }
#line 366 "hlds_out_util.m"
        break;
#line 366 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 395 "hlds_out_util.m"
        {
#line 395 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__Source_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__MainContext_7, (MR_Integer) 0)));
#line 395 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__Msg_15;
#line 395 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20;
#line 395 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_26_26;
#line 395 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__V_27_27;
#line 395 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 395 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 396 "hlds_out_util.m"
          {
#line 396 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
          }
#line 397 "hlds_out_util.m"
          {
#line 397 "hlds_out_util.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__Source_14, &hlds__hlds_out__hlds_out_util__V_71_71);
          }
#line 397 "hlds_out_util.m"
          {
#line 397 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) " unification:\n");
          }
#line 397 "hlds_out_util.m"
          {
#line 397 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_78_78);
          }
#line 398 "hlds_out_util.m"
          {
#line 398 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 398 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Msg_15));
#line 398 "hlds_out_util.m"
          }
#line 398 "hlds_out_util.m"
          {
#line 398 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_27_27));
#line 398 "hlds_out_util.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[2])));
#line 398 "hlds_out_util.m"
          }
#line 398 "hlds_out_util.m"
          {
#line 398 "hlds_out_util.m"
            *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20, hlds__hlds_out__hlds_out_util__V_26_26);
          }
#line 395 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 395 "hlds_out_util.m"
        }
#line 366 "hlds_out_util.m"
        break;
#line 366 "hlds_out_util.m"
    }
#line 366 "hlds_out_util.m"
  }
#line 360 "hlds_out_util.m"
}

#line 202 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
#line 202 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
#line 202 "hlds_out_util.m"
{
#line 1021 "hlds_out_util.m"
  while (MR_TRUE)
#line 1021 "hlds_out_util.m"
    {
#line 1021 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 1021 "hlds_out_util.m"
      {
#line 1021 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

#line 1021 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1021 "hlds_out_util.m"
          {
#line 1021 "hlds_out_util.m"
          }
#line 1021 "hlds_out_util.m"
        else
#line 1022 "hlds_out_util.m"
          {
#line 1022 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

#line 1022 "hlds_out_util.m"
            {
#line 1022 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1023 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
#line 1023 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 1023 "hlds_out_util.m"
            {
#line 1023 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

#line 1023 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
#line 1023 "hlds_out_util.m"
            }
#line 1023 "hlds_out_util.m"
            continue;
#line 1022 "hlds_out_util.m"
          }
#line 1021 "hlds_out_util.m"
      }
#line 1021 "hlds_out_util.m"
      break;
#line 1021 "hlds_out_util.m"
    }
#line 202 "hlds_out_util.m"
}

#line 196 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
#line 196 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__IntList_4)
#line 196 "hlds_out_util.m"
{
#line 991 "hlds_out_util.m"
  {
#line 991 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 991 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "hlds_out_util.m"
      {
#line 992 "hlds_out_util.m"
        {
#line 992 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[]");
#line 992 "hlds_out_util.m"
          return;
        }
#line 991 "hlds_out_util.m"
      }
#line 991 "hlds_out_util.m"
    else
#line 994 "hlds_out_util.m"
      {
#line 994 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
#line 994 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

#line 995 "hlds_out_util.m"
        {
#line 995 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
#line 996 "hlds_out_util.m"
        {
#line 996 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
#line 997 "hlds_out_util.m"
        {
#line 997 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
#line 997 "hlds_out_util.m"
          return;
        }
#line 994 "hlds_out_util.m"
      }
#line 991 "hlds_out_util.m"
  }
#line 196 "hlds_out_util.m"
}

#line 190 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(
#line 190 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 190 "hlds_out_util.m"
{
#line 949 "hlds_out_util.m"
  {
#line 949 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 949 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 949 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 950 "hlds_out_util.m"
    {
#line 950 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 949 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 949 "hlds_out_util.m"
  }
#line 190 "hlds_out_util.m"
}

#line 189 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(
#line 189 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 189 "hlds_out_util.m"
{
#line 947 "hlds_out_util.m"
  {
#line 947 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 947 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 947 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 948 "hlds_out_util.m"
    {
#line 948 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 947 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 947 "hlds_out_util.m"
  }
#line 189 "hlds_out_util.m"
}

#line 188 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__typeclass_import_status_to_string_1_f_0(
#line 188 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 188 "hlds_out_util.m"
{
#line 945 "hlds_out_util.m"
  {
#line 945 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 945 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 945 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 946 "hlds_out_util.m"
    {
#line 946 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 945 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 945 "hlds_out_util.m"
  }
#line 188 "hlds_out_util.m"
}

#line 187 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(
#line 187 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 187 "hlds_out_util.m"
{
#line 943 "hlds_out_util.m"
  {
#line 943 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 943 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 943 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 944 "hlds_out_util.m"
    {
#line 944 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 943 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 943 "hlds_out_util.m"
  }
#line 187 "hlds_out_util.m"
}

#line 186 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(
#line 186 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 186 "hlds_out_util.m"
{
#line 941 "hlds_out_util.m"
  {
#line 941 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 941 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 941 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 942 "hlds_out_util.m"
    {
#line 942 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 941 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 941 "hlds_out_util.m"
  }
#line 186 "hlds_out_util.m"
}

#line 185 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(
#line 185 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 185 "hlds_out_util.m"
{
#line 939 "hlds_out_util.m"
  {
#line 939 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 939 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 939 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__OldImportStatus_3 = (MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1;

#line 940 "hlds_out_util.m"
    {
#line 940 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_util__OldImportStatus_3);
    }
#line 939 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 939 "hlds_out_util.m"
  }
#line 185 "hlds_out_util.m"
}

#line 180 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
#line 180 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 180 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_7,
#line 180 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 180 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 180 "hlds_out_util.m"
{
#line 930 "hlds_out_util.m"
  {
#line 930 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 930 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 930 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 930 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 930 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 930 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 930 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 931 "hlds_out_util.m"
    {
#line 931 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
#line 932 "hlds_out_util.m"
    {
#line 932 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, hlds__hlds_out__hlds_out_util__InstVarSet_7, hlds__hlds_out__hlds_out_util__Mode_10);
    }
#line 932 "hlds_out_util.m"
    {
#line 932 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 932 "hlds_out_util.m"
    {
#line 932 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 930 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 930 "hlds_out_util.m"
  }
#line 180 "hlds_out_util.m"
}

#line 178 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 178 "hlds_out_util.m"
{
#line 926 "hlds_out_util.m"
  {
#line 926 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 926 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 927 "hlds_out_util.m"
    {
#line 927 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__InstVarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__HeadVar__4_4);
    }
#line 927 "hlds_out_util.m"
    {
#line 927 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
#line 927 "hlds_out_util.m"
      return;
    }
#line 926 "hlds_out_util.m"
  }
#line 178 "hlds_out_util.m"
}

#line 922 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 922 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 922 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
#line 922 "hlds_out_util.m"
{
#line 922 "hlds_out_util.m"
  {
#line 922 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 922 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 922 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

#line 922 "hlds_out_util.m"
    {
#line 922 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 922 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
#line 922 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 922 "hlds_out_util.m"
  }
#line 922 "hlds_out_util.m"
}

#line 175 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
#line 175 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 175 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 175 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 175 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_10,
#line 175 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_11)
#line 175 "hlds_out_util.m"
{
#line 920 "hlds_out_util.m"
  {
#line 920 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 920 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 920 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
#line 920 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
#line 920 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 921 "hlds_out_util.m"
    {
#line 921 "hlds_out_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_10, hlds__hlds_out__hlds_out_util__Modes_11, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 922 "hlds_out_util.m"
    {
#line 922 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 922 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0]));
#line 922 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
#line 922 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 922 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_7));
#line 922 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_8));
#line 922 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_9));
#line 922 "hlds_out_util.m"
    }
#line 922 "hlds_out_util.m"
    {
#line 922 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 924 "hlds_out_util.m"
    {
#line 924 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
#line 920 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 920 "hlds_out_util.m"
  }
#line 175 "hlds_out_util.m"
}

#line 173 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_9,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_11,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_12)
#line 173 "hlds_out_util.m"
{
#line 915 "hlds_out_util.m"
  {
#line 915 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 915 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 917 "hlds_out_util.m"
    {
#line 917 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__InstVarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__Vars_11, hlds__hlds_out__hlds_out_util__Modes_12);
    }
#line 916 "hlds_out_util.m"
    {
#line 916 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 916 "hlds_out_util.m"
      return;
    }
#line 915 "hlds_out_util.m"
  }
#line 173 "hlds_out_util.m"
}

#line 889 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 889 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 889 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 889 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 889 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 889 "hlds_out_util.m"
{
#line 889 "hlds_out_util.m"
  {
#line 889 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

#line 889 "hlds_out_util.m"
    {
#line 889 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
#line 889 "hlds_out_util.m"
      return;
    }
#line 889 "hlds_out_util.m"
  }
#line 889 "hlds_out_util.m"
}

#line 165 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(
#line 165 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 165 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 165 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 165 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ProofMap_10)
#line 165 "hlds_out_util.m"
{
#line 884 "hlds_out_util.m"
  {
#line 884 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 884 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
#line 884 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

#line 885 "hlds_out_util.m"
    {
#line 885 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
#line 886 "hlds_out_util.m"
    {
#line 886 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
#line 887 "hlds_out_util.m"
    {
#line 887 "hlds_out_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__ProofMap_10, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
#line 889 "hlds_out_util.m"
    {
#line 889 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 889 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
#line 889 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1));
#line 889 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 889 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TVarSet_7));
#line 889 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_8));
#line 889 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_9));
#line 889 "hlds_out_util.m"
    }
#line 888 "hlds_out_util.m"
    {
#line 888 "hlds_out_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
#line 888 "hlds_out_util.m"
      return;
    }
#line 884 "hlds_out_util.m"
  }
#line 165 "hlds_out_util.m"
}

#line 772 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 772 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 772 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 772 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 772 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 772 "hlds_out_util.m"
{
#line 772 "hlds_out_util.m"
  {
#line 772 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 772 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_104;

#line 772 "hlds_out_util.m"
    {
#line 772 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__775__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_104);
    }
#line 772 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_104));
#line 772 "hlds_out_util.m"
  }
#line 772 "hlds_out_util.m"
}

#line 160 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 160 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_9)
#line 160 "hlds_out_util.m"
{
#line 761 "hlds_out_util.m"
  {
#line 761 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 761 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_10;

#line 761 "hlds_out_util.m"
#line 761 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) {
#line 761 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 761 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 849 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
#line 761 "hlds_out_util.m"
        break;
#line 761 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 846 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
#line 761 "hlds_out_util.m"
        break;
#line 761 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 860 "hlds_out_util.m"
        {
#line 860 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 860 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 860 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 860 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 860 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 860 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
#line 860 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_130, (MR_Integer) 0)));
#line 860 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_130, (MR_Integer) 1)));

#line 863 "hlds_out_util.m"
          {
#line 863 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_131);
          }
#line 864 "hlds_out_util.m"
          {
#line 864 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_132);
          }
#line 864 "hlds_out_util.m"
          {
#line 864 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) ">");
          }
#line 864 "hlds_out_util.m"
          {
#line 864 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_70_70);
          }
#line 863 "hlds_out_util.m"
          {
#line 863 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_67_67, hlds__hlds_out__hlds_out_util__V_68_68);
          }
#line 863 "hlds_out_util.m"
          {
#line 863 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_66_66);
          }
#line 860 "hlds_out_util.m"
        }
#line 761 "hlds_out_util.m"
        break;
#line 761 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 761 "hlds_out_util.m"
#line 761 "hlds_out_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) {
#line 761 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 761 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 866 "hlds_out_util.m"
            {
#line 866 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 866 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 866 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 866 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 866 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 866 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 866 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_133, (MR_Integer) 0)));
#line 866 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_133, (MR_Integer) 1)));

#line 869 "hlds_out_util.m"
              {
#line 869 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_134);
              }
#line 870 "hlds_out_util.m"
              {
#line 870 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_135);
              }
#line 870 "hlds_out_util.m"
              {
#line 870 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, (MR_String) ">");
              }
#line 869 "hlds_out_util.m"
              {
#line 869 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_62_62);
              }
#line 869 "hlds_out_util.m"
              {
#line 869 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_60_60);
              }
#line 869 "hlds_out_util.m"
              {
#line 869 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_58_58);
              }
#line 866 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 872 "hlds_out_util.m"
            {
#line 872 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 872 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 872 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_52_52;
#line 872 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 872 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 872 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 872 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_136, (MR_Integer) 0)));
#line 872 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_136, (MR_Integer) 1)));

#line 875 "hlds_out_util.m"
              {
#line 875 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_137);
              }
#line 876 "hlds_out_util.m"
              {
#line 876 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_138);
              }
#line 876 "hlds_out_util.m"
              {
#line 876 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, (MR_String) ">");
              }
#line 875 "hlds_out_util.m"
              {
#line 875 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_54_54);
              }
#line 875 "hlds_out_util.m"
              {
#line 875 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, hlds__hlds_out__hlds_out_util__V_52_52);
              }
#line 875 "hlds_out_util.m"
              {
#line 875 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_50_50);
              }
#line 872 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 761 "hlds_out_util.m"
            {
#line 761 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 761 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 761 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
#line 761 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 761 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
#line 761 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
#line 761 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 765 "hlds_out_util.m"
#line 765 "hlds_out_util.m"
              switch (hlds__hlds_out__hlds_out_util__Qual_7) {
#line 765 "hlds_out_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 765 "hlds_out_util.m"
                case (MR_Integer) 1:
#line 766 "hlds_out_util.m"
                  {
#line 766 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_100_100;

#line 767 "hlds_out_util.m"
                    {
#line 767 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_100_100 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                    }
#line 767 "hlds_out_util.m"
                    {
#line 767 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "hlds_out_util.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_100_100));
#line 767 "hlds_out_util.m"
                    }
#line 766 "hlds_out_util.m"
                  }
#line 765 "hlds_out_util.m"
                  break;
#line 765 "hlds_out_util.m"
                case (MR_Integer) 0:
#line 764 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
#line 765 "hlds_out_util.m"
                  break;
#line 765 "hlds_out_util.m"
              }
#line 769 "hlds_out_util.m"
              {
#line 769 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
              }
#line 770 "hlds_out_util.m"
              {
#line 770 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
              }
#line 781 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 779 "hlds_out_util.m"
                {
#line 780 "hlds_out_util.m"
                  MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

#line 780 "hlds_out_util.m"
                  {
#line 780 "hlds_out_util.m"
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                  }
#line 780 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
#line 779 "hlds_out_util.m"
                }
#line 781 "hlds_out_util.m"
              else
#line 782 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 784 "hlds_out_util.m"
              {
#line 784 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
              }
#line 788 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "hlds_out_util.m"
                {
#line 786 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 786 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;

#line 787 "hlds_out_util.m"
                  {
#line 787 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                  }
#line 787 "hlds_out_util.m"
                  {
#line 787 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_116_116);
                  }
#line 787 "hlds_out_util.m"
                  {
#line 787 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_114_114);
                  }
#line 786 "hlds_out_util.m"
                }
#line 788 "hlds_out_util.m"
              else
#line 789 "hlds_out_util.m"
                {
#line 789 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 793 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "hlds_out_util.m"
                    {
#line 791 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 791 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_113_113;

#line 792 "hlds_out_util.m"
                      {
#line 792 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                      }
#line 792 "hlds_out_util.m"
                      {
#line 792 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_113_113);
                      }
#line 792 "hlds_out_util.m"
                      {
#line 792 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_111_111);
                      }
#line 791 "hlds_out_util.m"
                    }
#line 793 "hlds_out_util.m"
                  else
#line 794 "hlds_out_util.m"
                    {
#line 794 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
#line 794 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_107_107;
#line 794 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_109_109;

#line 795 "hlds_out_util.m"
                      {
#line 795 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_23);
                      }
#line 796 "hlds_out_util.m"
                      {
#line 796 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                      }
#line 796 "hlds_out_util.m"
                      {
#line 796 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_109_109);
                      }
#line 796 "hlds_out_util.m"
                      {
#line 796 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_107_107);
                      }
#line 794 "hlds_out_util.m"
                    }
#line 789 "hlds_out_util.m"
                }
#line 761 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 800 "hlds_out_util.m"
            {
#line 800 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 804 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "hlds_out_util.m"
                {
#line 802 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_99_99;

#line 803 "hlds_out_util.m"
                  {
#line 803 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_99_99 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_126);
                  }
#line 803 "hlds_out_util.m"
                  {
#line 803 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_99_99);
                  }
#line 802 "hlds_out_util.m"
                }
#line 804 "hlds_out_util.m"
              else
#line 805 "hlds_out_util.m"
                {
#line 805 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 809 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__ArgVars_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "hlds_out_util.m"
                    {
#line 807 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_97_97;

#line 808 "hlds_out_util.m"
                      {
#line 808 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_97_97 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_126);
                      }
#line 808 "hlds_out_util.m"
                      {
#line 808 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_97_97);
                      }
#line 807 "hlds_out_util.m"
                    }
#line 809 "hlds_out_util.m"
                  else
#line 810 "hlds_out_util.m"
                    {
#line 810 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 810 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_120;

#line 811 "hlds_out_util.m"
                      {
#line 811 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ArgStr_120 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_122);
                      }
#line 812 "hlds_out_util.m"
                      {
#line 812 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_120, (MR_String) "}");
                      }
#line 812 "hlds_out_util.m"
                      {
#line 812 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_94_94);
                      }
#line 810 "hlds_out_util.m"
                    }
#line 805 "hlds_out_util.m"
                }
#line 800 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 4:
#line 831 "hlds_out_util.m"
            {
#line 831 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 831 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 0)));
#line 831 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 1)));
#line 831 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_85_85;
#line 831 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 831 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 831 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 831 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 834 "hlds_out_util.m"
              {
#line 834 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_36);
              }
#line 835 "hlds_out_util.m"
              {
#line 835 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_37);
              }
#line 835 "hlds_out_util.m"
              {
#line 835 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_90_90, (MR_String) ">");
              }
#line 835 "hlds_out_util.m"
              {
#line 835 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_89_89);
              }
#line 834 "hlds_out_util.m"
              {
#line 834 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 834 "hlds_out_util.m"
              {
#line 834 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_85_85);
              }
#line 831 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 5:
#line 816 "hlds_out_util.m"
            {
#line 816 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 817 "hlds_out_util.m"
              {
#line 817 "hlds_out_util.m"
                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
              }
#line 816 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 6:
#line 819 "hlds_out_util.m"
            {
#line 819 "hlds_out_util.m"
              MR_Float hlds__hlds_out__hlds_out_util__Float_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 820 "hlds_out_util.m"
              {
#line 820 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_30);
              }
#line 819 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 7:
#line 822 "hlds_out_util.m"
            {
#line 822 "hlds_out_util.m"
              MR_Char hlds__hlds_out__hlds_out_util__CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 823 "hlds_out_util.m"
              {
#line 823 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_31);
              }
#line 822 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 8:
#line 825 "hlds_out_util.m"
            {
#line 825 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__StringConst_32 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 826 "hlds_out_util.m"
              {
#line 826 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_32);
              }
#line 825 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 9:
#line 828 "hlds_out_util.m"
            {
#line 828 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 829 "hlds_out_util.m"
              {
#line 829 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_33);
              }
#line 828 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 10:
#line 837 "hlds_out_util.m"
            {
#line 837 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Ctor_39 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_76_76;
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 837 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 837 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 839 "hlds_out_util.m"
              {
#line 839 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_75_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_38);
              }
#line 840 "hlds_out_util.m"
              {
#line 840 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_129);
              }
#line 840 "hlds_out_util.m"
              {
#line 840 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ">");
              }
#line 840 "hlds_out_util.m"
              {
#line 840 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_81_81);
              }
#line 840 "hlds_out_util.m"
              {
#line 840 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_39, hlds__hlds_out__hlds_out_util__V_79_79);
              }
#line 839 "hlds_out_util.m"
              {
#line 839 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_78_78);
              }
#line 839 "hlds_out_util.m"
              {
#line 839 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
              }
#line 839 "hlds_out_util.m"
              {
#line 839 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_74_74);
              }
#line 837 "hlds_out_util.m"
            }
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 11:
#line 843 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 12:
#line 852 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 13:
#line 855 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
          case (MR_Integer) 14:
#line 858 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
#line 761 "hlds_out_util.m"
            break;
#line 761 "hlds_out_util.m"
        }
#line 761 "hlds_out_util.m"
        break;
#line 761 "hlds_out_util.m"
    }
#line 761 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_10;
#line 761 "hlds_out_util.m"
  }
#line 160 "hlds_out_util.m"
}

#line 157 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
#line 157 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 157 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 157 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_9,
#line 157 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_10)
#line 157 "hlds_out_util.m"
{
#line 752 "hlds_out_util.m"
  {
#line 752 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 752 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 754 "hlds_out_util.m"
    {
#line 754 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
#line 753 "hlds_out_util.m"
    {
#line 753 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
#line 753 "hlds_out_util.m"
      return;
    }
#line 752 "hlds_out_util.m"
  }
#line 157 "hlds_out_util.m"
}

#line 150 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_7,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_10,
#line 150 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 150 "hlds_out_util.m"
{
#line 646 "hlds_out_util.m"
  while (MR_TRUE)
#line 646 "hlds_out_util.m"
    {
#line 646 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 646 "hlds_out_util.m"
      {
#line 646 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 646 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

#line 646 "hlds_out_util.m"
#line 646 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) {
#line 646 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 646 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 713 "hlds_out_util.m"
            {
#line 714 "hlds_out_util.m"
              {
#line 714 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[3], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
#line 713 "hlds_out_util.m"
            }
#line 646 "hlds_out_util.m"
            break;
#line 646 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 708 "hlds_out_util.m"
            {
#line 709 "hlds_out_util.m"
              {
#line 709 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
#line 708 "hlds_out_util.m"
            }
#line 646 "hlds_out_util.m"
            break;
#line 646 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 730 "hlds_out_util.m"
            {
#line 730 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_42;
#line 730 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_43;
#line 730 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 730 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 730 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
#line 730 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 730 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 730 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 730 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)));
#line 730 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredId_146;

#line 731 "hlds_out_util.m"
              {
#line 731 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145);
              }
#line 731 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__PredId_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 0)));
#line 731 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 1)));
#line 732 "hlds_out_util.m"
              {
#line 732 "hlds_out_util.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_42, &hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 734 "hlds_out_util.m"
              {
#line 734 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_65_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_146);
              }
#line 735 "hlds_out_util.m"
              {
#line 735 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 735 "hlds_out_util.m"
              {
#line 735 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_69_69, (MR_String) ")");
              }
#line 735 "hlds_out_util.m"
              {
#line 735 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_68_68);
              }
#line 735 "hlds_out_util.m"
              {
#line 735 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__V_66_66);
              }
#line 734 "hlds_out_util.m"
              {
#line 734 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_64_64);
              }
#line 730 "hlds_out_util.m"
            }
#line 646 "hlds_out_util.m"
            break;
#line 646 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 646 "hlds_out_util.m"
#line 646 "hlds_out_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) {
#line 646 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 646 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 737 "hlds_out_util.m"
                {
#line 737 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_53_53;
#line 737 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 737 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 737 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_57_57;
#line 737 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 737 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 737 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 737 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_148;
#line 737 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_149;
#line 737 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_150;

#line 738 "hlds_out_util.m"
                  {
#line 738 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_53_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147);
                  }
#line 738 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 738 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ProcId_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 739 "hlds_out_util.m"
                  {
#line 739 "hlds_out_util.m"
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_149, &hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                  }
#line 741 "hlds_out_util.m"
                  {
#line 741 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_56_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_148);
                  }
#line 742 "hlds_out_util.m"
                  {
#line 742 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                  }
#line 742 "hlds_out_util.m"
                  {
#line 742 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, (MR_String) "))");
                  }
#line 742 "hlds_out_util.m"
                  {
#line 742 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_59_59);
                  }
#line 742 "hlds_out_util.m"
                  {
#line 742 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__V_57_57);
                  }
#line 741 "hlds_out_util.m"
                  {
#line 741 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", hlds__hlds_out__hlds_out_util__V_55_55);
                  }
#line 737 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 744 "hlds_out_util.m"
                {
#line 744 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_44_44;
#line 744 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 744 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 744 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 744 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 744 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 744 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 744 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_152;
#line 744 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_153;
#line 744 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_154;

#line 745 "hlds_out_util.m"
                  {
#line 745 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_44_44 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151);
                  }
#line 745 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 0)));
#line 745 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ProcId_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 1)));
#line 746 "hlds_out_util.m"
                  {
#line 746 "hlds_out_util.m"
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_153, &hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                  }
#line 748 "hlds_out_util.m"
                  {
#line 748 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_47_47 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_152);
                  }
#line 749 "hlds_out_util.m"
                  {
#line 749 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                  }
#line 749 "hlds_out_util.m"
                  {
#line 749 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) "))");
                  }
#line 749 "hlds_out_util.m"
                  {
#line 749 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_50_50);
                  }
#line 749 "hlds_out_util.m"
                  {
#line 749 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                  }
#line 748 "hlds_out_util.m"
                  {
#line 748 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_46_46);
                  }
#line 744 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 646 "hlds_out_util.m"
                {
#line 646 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 646 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 646 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

#line 651 "hlds_out_util.m"
                  if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 648 "hlds_out_util.m"
                    {
#line 648 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
#line 648 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
#line 648 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_137_137;

#line 650 "hlds_out_util.m"
                      {
#line 650 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 650 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
#line 650 "hlds_out_util.m"
                      }
#line 649 "hlds_out_util.m"
                      {
#line 649 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
#line 648 "hlds_out_util.m"
                    }
#line 651 "hlds_out_util.m"
                  else
#line 652 "hlds_out_util.m"
                    {
#line 652 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_136_136;
#line 652 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

#line 654 "hlds_out_util.m"
                      {
#line 654 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 654 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_136_136, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_138));
#line 654 "hlds_out_util.m"
                      }
#line 653 "hlds_out_util.m"
                      {
#line 653 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__V_136_136, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
#line 652 "hlds_out_util.m"
                    }
#line 646 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 657 "hlds_out_util.m"
                {
#line 658 "hlds_out_util.m"
                  {
#line 658 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 657 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 4:
#line 685 "hlds_out_util.m"
                {
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_25;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredInfo_27;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredModule_28;
#line 685 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__PredName_29;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredSymName_30;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredConsId_31;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_121_121;
#line 685 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_122_122;
#line 685 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_123_123;
#line 686 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_26_26;

#line 686 "hlds_out_util.m"
                  {
#line 686 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_121_121 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23);
                  }
#line 686 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 0)));
#line 686 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 1)));
#line 687 "hlds_out_util.m"
                  {
#line 687 "hlds_out_util.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_25, &hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 688 "hlds_out_util.m"
                  {
#line 688 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 689 "hlds_out_util.m"
                  {
#line 689 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_28));
#line 690 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_29));
#line 690 "hlds_out_util.m"
                  }
#line 691 "hlds_out_util.m"
                  {
#line 691 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_122_122 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_123_123 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 691 "hlds_out_util.m"
                  {
#line 691 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 691 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 691 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_30));
#line 691 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_122_122));
#line 691 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
#line 691 "hlds_out_util.m"
                  }
#line 693 "hlds_out_util.m"
                  /* direct tailcall eliminated */
#line 693 "hlds_out_util.m"
                  {
#line 693 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10 = hlds__hlds_out__hlds_out_util__PredConsId_31;

#line 693 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__ConsId_10 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10;
#line 693 "hlds_out_util.m"
                  }
#line 693 "hlds_out_util.m"
                  continue;
#line 685 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 5:
#line 661 "hlds_out_util.m"
                {
#line 661 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 661 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

#line 663 "hlds_out_util.m"
                  {
#line 663 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
#line 663 "hlds_out_util.m"
                  }
#line 662 "hlds_out_util.m"
                  {
#line 662 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 661 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 6:
#line 665 "hlds_out_util.m"
                {
#line 665 "hlds_out_util.m"
                  MR_Float hlds__hlds_out__hlds_out_util__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 665 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_130_130;

#line 667 "hlds_out_util.m"
                  {
#line 667 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 667 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_20);
#line 667 "hlds_out_util.m"
                  }
#line 666 "hlds_out_util.m"
                  {
#line 666 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_130_130, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 665 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 7:
#line 669 "hlds_out_util.m"
                {
#line 669 "hlds_out_util.m"
                  MR_Char hlds__hlds_out__hlds_out_util__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 669 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_127_127;
#line 669 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_128_128;

#line 676 "hlds_out_util.m"
                  {
#line 676 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_128_128 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_21);
                  }
#line 676 "hlds_out_util.m"
                  {
#line 676 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_127_127 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_128_128, (MR_String) ")");
                  }
#line 676 "hlds_out_util.m"
                  {
#line 676 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_127_127);
                  }
#line 669 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 8:
#line 678 "hlds_out_util.m"
                {
#line 678 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 678 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_125_125;

#line 680 "hlds_out_util.m"
                  {
#line 680 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 680 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_125_125, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_22));
#line 680 "hlds_out_util.m"
                  }
#line 679 "hlds_out_util.m"
                  {
#line 679 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_125_125, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 678 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 9:
#line 682 "hlds_out_util.m"
                {
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));

#line 683 "hlds_out_util.m"
                  {
#line 683 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_139);
                  }
#line 682 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 10:
#line 696 "hlds_out_util.m"
                {
#line 696 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_118_118;
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_119_119;
#line 696 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 696 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Name_141 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));

#line 698 "hlds_out_util.m"
                  {
#line 698 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_112_112 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_140);
                  }
#line 699 "hlds_out_util.m"
                  {
#line 699 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_32);
                  }
#line 699 "hlds_out_util.m"
                  {
#line 699 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_119_119, (MR_String) ")");
                  }
#line 699 "hlds_out_util.m"
                  {
#line 699 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_118_118);
                  }
#line 699 "hlds_out_util.m"
                  {
#line 699 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_141, hlds__hlds_out__hlds_out_util__V_116_116);
                  }
#line 699 "hlds_out_util.m"
                  {
#line 699 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_115_115);
                  }
#line 699 "hlds_out_util.m"
                  {
#line 699 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_112_112, hlds__hlds_out__hlds_out_util__V_113_113);
                  }
#line 698 "hlds_out_util.m"
                  {
#line 698 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_111_111);
                  }
#line 696 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 11:
#line 701 "hlds_out_util.m"
                {
#line 701 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 4)));
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_98_98;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
#line 701 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_108_108;
#line 701 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 701 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 0)));
#line 701 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 1)));
#line 701 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

#line 704 "hlds_out_util.m"
                  {
#line 704 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_95_95 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_142);
                  }
#line 705 "hlds_out_util.m"
                  {
#line 705 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_101_101 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_143);
                  }
#line 706 "hlds_out_util.m"
                  {
#line 706 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_144);
                  }
#line 706 "hlds_out_util.m"
                  {
#line 706 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_35, (MR_String) ")");
                  }
#line 706 "hlds_out_util.m"
                  {
#line 706 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_108_108);
                  }
#line 706 "hlds_out_util.m"
                  {
#line 706 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_106_106);
                  }
#line 706 "hlds_out_util.m"
                  {
#line 706 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_104_104);
                  }
#line 706 "hlds_out_util.m"
                  {
#line 706 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_102_102);
                  }
#line 705 "hlds_out_util.m"
                  {
#line 705 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
#line 705 "hlds_out_util.m"
                  {
#line 705 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_98_98);
                  }
#line 704 "hlds_out_util.m"
                  {
#line 704 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, hlds__hlds_out__hlds_out_util__V_96_96);
                  }
#line 704 "hlds_out_util.m"
                  {
#line 704 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_94_94);
                  }
#line 701 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 12:
#line 718 "hlds_out_util.m"
                {
#line 718 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 718 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 719 "hlds_out_util.m"
                  {
#line 719 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_37);
                  }
#line 719 "hlds_out_util.m"
                  {
#line 719 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_85_85, (MR_String) ")");
                  }
#line 719 "hlds_out_util.m"
                  {
#line 719 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_84_84);
                  }
#line 718 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 13:
#line 721 "hlds_out_util.m"
                {
#line 721 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 721 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_80_80;
#line 721 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_81_81;

#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_38);
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_81_81, (MR_String) ")");
                  }
#line 722 "hlds_out_util.m"
                  {
#line 722 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_80_80);
                  }
#line 721 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
              case (MR_Integer) 14:
#line 724 "hlds_out_util.m"
                {
#line 724 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 724 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SubConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__SubStr_41;
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 724 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_77_77;

#line 725 "hlds_out_util.m"
                  {
#line 725 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__SubStr_41 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__SubConsId_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 727 "hlds_out_util.m"
                  {
#line 727 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_39);
                  }
#line 728 "hlds_out_util.m"
                  {
#line 728 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_41, (MR_String) ")");
                  }
#line 727 "hlds_out_util.m"
                  {
#line 727 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_77_77);
                  }
#line 727 "hlds_out_util.m"
                  {
#line 727 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                  }
#line 727 "hlds_out_util.m"
                  {
#line 727 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_73_73);
                  }
#line 724 "hlds_out_util.m"
                }
#line 646 "hlds_out_util.m"
                break;
#line 646 "hlds_out_util.m"
            }
#line 646 "hlds_out_util.m"
            break;
#line 646 "hlds_out_util.m"
        }
#line 646 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__Str_12;
#line 646 "hlds_out_util.m"
      }
#line 646 "hlds_out_util.m"
      break;
#line 646 "hlds_out_util.m"
    }
#line 150 "hlds_out_util.m"
}

#line 147 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_8,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_11,
#line 147 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 147 "hlds_out_util.m"
{
#line 639 "hlds_out_util.m"
  {
#line 639 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 639 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 640 "hlds_out_util.m"
    {
#line 640 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__ConsId_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
    }
#line 640 "hlds_out_util.m"
    {
#line 640 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 640 "hlds_out_util.m"
      return;
    }
#line 639 "hlds_out_util.m"
  }
#line 147 "hlds_out_util.m"
}

#line 141 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 141 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_11)
#line 141 "hlds_out_util.m"
{
#line 630 "hlds_out_util.m"
  {
#line 630 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 630 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 630 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 630 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
#line 630 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
#line 630 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
#line 630 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

#line 631 "hlds_out_util.m"
    {
#line 631 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
#line 632 "hlds_out_util.m"
    {
#line 632 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
#line 633 "hlds_out_util.m"
    {
#line 633 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 633 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_11));
#line 633 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
#line 633 "hlds_out_util.m"
    }
#line 634 "hlds_out_util.m"
    {
#line 634 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 636 "hlds_out_util.m"
    {
#line 636 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
#line 636 "hlds_out_util.m"
    {
#line 636 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 630 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 630 "hlds_out_util.m"
  }
#line 141 "hlds_out_util.m"
}

#line 138 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 138 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_12)
#line 138 "hlds_out_util.m"
{
#line 625 "hlds_out_util.m"
  {
#line 625 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 625 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgTerms_12);
    }
#line 626 "hlds_out_util.m"
    {
#line 626 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 626 "hlds_out_util.m"
      return;
    }
#line 625 "hlds_out_util.m"
  }
#line 138 "hlds_out_util.m"
}

#line 135 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 135 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 135 "hlds_out_util.m"
{
#line 618 "hlds_out_util.m"
  {
#line 618 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 618 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
#line 618 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 618 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 618 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 618 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 619 "hlds_out_util.m"
    {
#line 619 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5340 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 607 "hlds_out_util.m"
    {
#line 607 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 608 "hlds_out_util.m"
    }
#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 622 "hlds_out_util.m"
    {
#line 622 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
#line 622 "hlds_out_util.m"
    {
#line 622 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 618 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 618 "hlds_out_util.m"
  }
#line 135 "hlds_out_util.m"
}

#line 133 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 133 "hlds_out_util.m"
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
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
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
#line 133 "hlds_out_util.m"
}

#line 130 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
#line 130 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 130 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 130 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_9,
#line 130 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 130 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 130 "hlds_out_util.m"
{
#line 605 "hlds_out_util.m"
  {
#line 605 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 605 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 605 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
#line 605 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
#line 605 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
#line 605 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
#line 5455 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 607 "hlds_out_util.m"
    {
#line 607 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
#line 608 "hlds_out_util.m"
    }
#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__NextToGraphicToken_9, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 605 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 605 "hlds_out_util.m"
  }
#line 130 "hlds_out_util.m"
}

#line 128 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_10,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 128 "hlds_out_util.m"
{
#line 600 "hlds_out_util.m"
  {
#line 600 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 600 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 600 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 600 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 600 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 600 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5521 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 607 "hlds_out_util.m"
    {
#line 607 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_12, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_11));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 608 "hlds_out_util.m"
    }
#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__NextToGraphicToken_10, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 601 "hlds_out_util.m"
    {
#line 601 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 601 "hlds_out_util.m"
      return;
    }
#line 600 "hlds_out_util.m"
  }
#line 128 "hlds_out_util.m"
}

#line 125 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
#line 125 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 125 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_7,
#line 125 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 125 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9)
#line 125 "hlds_out_util.m"
{
#line 595 "hlds_out_util.m"
  {
#line 595 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 595 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 595 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
#line 595 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
#line 595 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
#line 595 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
#line 5590 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 607 "hlds_out_util.m"
    {
#line 607 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
#line 608 "hlds_out_util.m"
    }
#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
#line 595 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 595 "hlds_out_util.m"
  }
#line 125 "hlds_out_util.m"
}

#line 123 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_10)
#line 123 "hlds_out_util.m"
{
#line 591 "hlds_out_util.m"
  {
#line 591 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
#line 591 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

#line 606 "hlds_out_util.m"
    {
#line 606 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
#line 5654 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 607 "hlds_out_util.m"
    {
#line 607 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_10, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_9));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
#line 608 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
#line 608 "hlds_out_util.m"
    }
#line 609 "hlds_out_util.m"
    {
#line 609 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
#line 601 "hlds_out_util.m"
    {
#line 601 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
#line 601 "hlds_out_util.m"
      return;
    }
#line 591 "hlds_out_util.m"
  }
#line 123 "hlds_out_util.m"
}

#line 116 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
#line 116 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__CallId_5,
#line 116 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_6,
#line 116 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredMarkers_7)
#line 116 "hlds_out_util.m"
{
#line 505 "hlds_out_util.m"
  {
#line 505 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
#line 505 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 505 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
#line 505 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
#line 505 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

#line 516 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 515 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
#line 516 "hlds_out_util.m"
    else
#line 517 "hlds_out_util.m"
      {
#line 517 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 546 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 556 "hlds_out_util.m"
          {
#line 556 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 577 "hlds_out_util.m"
#line 577 "hlds_out_util.m"
            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) {
#line 577 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 577 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 558 "hlds_out_util.m"
                {
#line 558 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 558 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
#line 558 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 560 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
#line 560 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 561 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
#line 564 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 563 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 564 "hlds_out_util.m"
                  else
#line 567 "hlds_out_util.m"
                    {
#line 567 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Main_28;
#line 567 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
#line 567 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Expl_30;
#line 567 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 567 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_49_49;
#line 567 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;

#line 567 "hlds_out_util.m"
                      {
#line 567 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                      }
#line 567 "hlds_out_util.m"
                      {
#line 567 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
#line 568 "hlds_out_util.m"
                      {
#line 568 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                      }
#line 569 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
#line 571 "hlds_out_util.m"
                      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 570 "hlds_out_util.m"
                        {
#line 570 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_40_40;

#line 570 "hlds_out_util.m"
                          {
#line 570 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                          }
#line 570 "hlds_out_util.m"
                          {
#line 570 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                          }
#line 570 "hlds_out_util.m"
                        }
#line 571 "hlds_out_util.m"
                      else
#line 572 "hlds_out_util.m"
                        {
#line 572 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 572 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_44_44;
#line 572 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
#line 572 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;

#line 572 "hlds_out_util.m"
                          {
#line 572 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                          }
#line 573 "hlds_out_util.m"
                          {
#line 573 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                          }
#line 573 "hlds_out_util.m"
                          {
#line 573 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                          }
#line 572 "hlds_out_util.m"
                          {
#line 572 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                          }
#line 572 "hlds_out_util.m"
                        }
#line 575 "hlds_out_util.m"
                      {
#line 575 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                      }
#line 575 "hlds_out_util.m"
                      {
#line 575 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                      }
#line 575 "hlds_out_util.m"
                      {
#line 575 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                      }
#line 567 "hlds_out_util.m"
                    }
#line 558 "hlds_out_util.m"
                }
#line 577 "hlds_out_util.m"
                break;
#line 577 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 577 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 577 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 581 "hlds_out_util.m"
                {
#line 581 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_36_36;

#line 582 "hlds_out_util.m"
                  {
#line 582 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                  }
#line 582 "hlds_out_util.m"
                  {
#line 582 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                  }
#line 581 "hlds_out_util.m"
                }
#line 577 "hlds_out_util.m"
                break;
#line 577 "hlds_out_util.m"
            }
#line 556 "hlds_out_util.m"
          }
#line 546 "hlds_out_util.m"
        else
#line 546 "hlds_out_util.m"
          {
#line 546 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
#line 546 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
#line 546 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 546 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

#line 546 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 546 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 546 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
#line 548 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
#line 548 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 549 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
#line 552 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 551 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 552 "hlds_out_util.m"
            else
#line 553 "hlds_out_util.m"
              {
#line 553 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

#line 553 "hlds_out_util.m"
                {
#line 553 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 553 "hlds_out_util.m"
                {
#line 553 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
#line 553 "hlds_out_util.m"
              }
#line 546 "hlds_out_util.m"
          }
#line 517 "hlds_out_util.m"
        {
#line 517 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
#line 517 "hlds_out_util.m"
      }
#line 525 "hlds_out_util.m"
    {
#line 525 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
#line 526 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
#line 526 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

#line 525 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
#line 525 "hlds_out_util.m"
      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 525 "hlds_out_util.m"
        {
#line 525 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 526 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
#line 526 "hlds_out_util.m"
          if (hlds__hlds_out__hlds_out_util__succeeded)
#line 526 "hlds_out_util.m"
            {
#line 526 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
#line 526 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
#line 526 "hlds_out_util.m"
            }
#line 526 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 525 "hlds_out_util.m"
        }
#line 525 "hlds_out_util.m"
    }
#line 527 "hlds_out_util.m"
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
#line 533 "hlds_out_util.m"
      {
#line 533 "hlds_out_util.m"
        {
#line 533 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 11);
        }
#line 533 "hlds_out_util.m"
      }
#line 537 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 536 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
#line 537 "hlds_out_util.m"
    else
#line 538 "hlds_out_util.m"
      {
#line 538 "hlds_out_util.m"
        {
#line 538 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
#line 538 "hlds_out_util.m"
      }
#line 485 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 487 "hlds_out_util.m"
      {
#line 487 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 488 "hlds_out_util.m"
        {
#line 488 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_63);
        }
#line 487 "hlds_out_util.m"
      }
#line 485 "hlds_out_util.m"
    else
#line 485 "hlds_out_util.m"
      {
#line 485 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 486 "hlds_out_util.m"
        {
#line 486 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_62);
        }
#line 485 "hlds_out_util.m"
      }
#line 540 "hlds_out_util.m"
    {
#line 540 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 505 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 505 "hlds_out_util.m"
  }
#line 116 "hlds_out_util.m"
}

#line 109 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
#line 109 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 109 "hlds_out_util.m"
{
#line 500 "hlds_out_util.m"
  {
#line 500 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 500 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[4 + hlds__hlds_out__hlds_out_util__HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;

#line 500 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 500 "hlds_out_util.m"
  }
#line 109 "hlds_out_util.m"
}

#line 107 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
#line 107 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 107 "hlds_out_util.m"
{
#line 490 "hlds_out_util.m"
  {
#line 490 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 490 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 490 "hlds_out_util.m"
#line 490 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 490 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 490 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 490 "hlds_out_util.m"
        {
#line 490 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Purity_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 490 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 490 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_6_6;
#line 490 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_7_7;
#line 490 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 490 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 490 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));

#line 491 "hlds_out_util.m"
          {
#line 491 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_6_6 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_3);
          }
#line 492 "hlds_out_util.m"
          {
#line 492 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_4);
          }
#line 492 "hlds_out_util.m"
          {
#line 492 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) " call");
          }
#line 492 "hlds_out_util.m"
          {
#line 492 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
#line 491 "hlds_out_util.m"
          {
#line 491 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__V_7_7);
          }
#line 490 "hlds_out_util.m"
        }
#line 490 "hlds_out_util.m"
        break;
#line 490 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 493 "hlds_out_util.m"
        {
#line 493 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__MethodId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util___ClassId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 494 "hlds_out_util.m"
          {
#line 494 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_13);
          }
#line 493 "hlds_out_util.m"
        }
#line 490 "hlds_out_util.m"
        break;
#line 490 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 495 "hlds_out_util.m"
        {
#line 495 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__EventName_14 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 496 "hlds_out_util.m"
          {
#line 496 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_14);
          }
#line 495 "hlds_out_util.m"
        }
#line 490 "hlds_out_util.m"
        break;
#line 490 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 497 "hlds_out_util.m"
        {
#line 497 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__CastType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 500 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[0 + hlds__hlds_out__hlds_out_util__CastType_16]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 497 "hlds_out_util.m"
        }
#line 490 "hlds_out_util.m"
        break;
#line 490 "hlds_out_util.m"
    }
#line 490 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 490 "hlds_out_util.m"
  }
#line 107 "hlds_out_util.m"
}

#line 105 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
#line 105 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 105 "hlds_out_util.m"
{
#line 485 "hlds_out_util.m"
  {
#line 485 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 485 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 485 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 487 "hlds_out_util.m"
      {
#line 487 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 488 "hlds_out_util.m"
        {
#line 488 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_4);
        }
#line 487 "hlds_out_util.m"
      }
#line 485 "hlds_out_util.m"
    else
#line 485 "hlds_out_util.m"
      {
#line 485 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 486 "hlds_out_util.m"
        {
#line 486 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_3);
        }
#line 485 "hlds_out_util.m"
      }
#line 485 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 485 "hlds_out_util.m"
  }
#line 105 "hlds_out_util.m"
}

#line 99 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
#line 99 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12,
#line 99 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13,
#line 99 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_7,
#line 99 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14,
#line 99 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15)
#line 99 "hlds_out_util.m"
{
#line 354 "hlds_out_util.m"
  {
#line 354 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 0)));
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_7, (MR_Integer) 1)));
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_11;
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16;
#line 354 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17;

#line 356 "hlds_out_util.m"
    {
#line 356 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_10, &hlds__hlds_out__hlds_out_util__SubContexts_11);
    }
#line 357 "hlds_out_util.m"
    {
#line 357 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__MainContext_9, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17);
    }
#line 358 "hlds_out_util.m"
    {
#line 358 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13, hlds__hlds_out__hlds_out_util__SubContexts_11, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_17, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15);
#line 358 "hlds_out_util.m"
      return;
    }
#line 354 "hlds_out_util.m"
  }
#line 99 "hlds_out_util.m"
}

#line 85 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
#line 85 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_4,
#line 85 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7,
#line 85 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8)
#line 85 "hlds_out_util.m"
{
#line 351 "hlds_out_util.m"
  {
#line 351 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 351 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MainContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 0)));
#line 351 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__RevSubContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__UnifyContext_4, (MR_Integer) 1)));
#line 351 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__SubContexts_20;
#line 351 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21;
#line 351 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22;
#line 358 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_6_6;

#line 356 "hlds_out_util.m"
    {
#line 356 "hlds_out_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0, hlds__hlds_out__hlds_out_util__RevSubContexts_19, &hlds__hlds_out__hlds_out_util__SubContexts_20);
    }
#line 357 "hlds_out_util.m"
    {
#line 357 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_p_0((MR_Integer) 1, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, hlds__hlds_out__hlds_out_util__MainContext_18, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22);
    }
#line 358 "hlds_out_util.m"
    {
#line 358 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_16_21, &hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__SubContexts_20, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_17_22, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8);
    }
#line 351 "hlds_out_util.m"
  }
#line 85 "hlds_out_util.m"
}

#line 76 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(
#line 76 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 76 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6,
#line 76 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7)
#line 76 "hlds_out_util.m"
{
#line 341 "hlds_out_util.m"
  {
#line 341 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 341 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 341 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_9;
#line 341 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 341 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 341 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;

#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 343 "hlds_out_util.m"
    {
#line 343 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_9);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, hlds__hlds_out__hlds_out_util__V_11_11);
    }
#line 341 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 341 "hlds_out_util.m"
  }
#line 76 "hlds_out_util.m"
}

#line 74 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(
#line 74 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_6,
#line 74 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_7,
#line 74 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_8)
#line 74 "hlds_out_util.m"
{
#line 337 "hlds_out_util.m"
  {
#line 337 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 337 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_18;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_20_20;
#line 337 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_22_22;

#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_8, &hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 343 "hlds_out_util.m"
    {
#line 343 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_6, hlds__hlds_out__hlds_out_util__PredId_7);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_18);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_22_22);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_19_19, hlds__hlds_out__hlds_out_util__V_20_20);
    }
#line 338 "hlds_out_util.m"
    {
#line 338 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_12_12);
#line 338 "hlds_out_util.m"
      return;
    }
#line 337 "hlds_out_util.m"
  }
#line 74 "hlds_out_util.m"
}

#line 72 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(
#line 72 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 72 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 72 "hlds_out_util.m"
{
#line 334 "hlds_out_util.m"
  {
#line 334 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 334 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_11;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_13_13;
#line 334 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_6, &hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 343 "hlds_out_util.m"
    {
#line 343 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, hlds__hlds_out__hlds_out_util__PredId_5);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_11);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_15_15);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_12_12, hlds__hlds_out__hlds_out_util__V_13_13);
    }
#line 334 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__3_3;
#line 334 "hlds_out_util.m"
  }
#line 72 "hlds_out_util.m"
}

#line 70 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(
#line 70 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 70 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 70 "hlds_out_util.m"
{
#line 331 "hlds_out_util.m"
  {
#line 331 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 331 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 331 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 331 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;
#line 331 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__ModeNum_24;
#line 331 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_25_25;
#line 331 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_26_26;
#line 331 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_28_28;

#line 342 "hlds_out_util.m"
    {
#line 342 "hlds_out_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_7, &hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 343 "hlds_out_util.m"
    {
#line 343 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_28_28 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModeNum_24);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", hlds__hlds_out__hlds_out_util__V_28_28);
    }
#line 344 "hlds_out_util.m"
    {
#line 344 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_25_25, hlds__hlds_out__hlds_out_util__V_26_26);
    }
#line 338 "hlds_out_util.m"
    {
#line 338 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_18_18);
#line 338 "hlds_out_util.m"
      return;
    }
#line 331 "hlds_out_util.m"
  }
#line 70 "hlds_out_util.m"
}

#line 68 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(
#line 68 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 68 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_5)
#line 68 "hlds_out_util.m"
{
#line 247 "hlds_out_util.m"
  {
#line 247 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 247 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
#line 247 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
#line 325 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
#line 249 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

#line 248 "hlds_out_util.m"
    {
#line 248 "hlds_out_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
#line 249 "hlds_out_util.m"
    {
#line 249 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
#line 249 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 249 "hlds_out_util.m"
      {
#line 249 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
#line 249 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 249 "hlds_out_util.m"
      }
#line 325 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 250 "hlds_out_util.m"
      {
#line 250 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Module_9;
#line 250 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Name_10;
#line 250 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Arity_11;
#line 250 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_12;
#line 250 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Origin_13;

#line 250 "hlds_out_util.m"
        {
#line 250 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Module_9 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 251 "hlds_out_util.m"
        {
#line 251 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 252 "hlds_out_util.m"
        {
#line 252 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 253 "hlds_out_util.m"
        {
#line 253 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 254 "hlds_out_util.m"
        {
#line 254 "hlds_out_util.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__Origin_13);
        }
#line 265 "hlds_out_util.m"
#line 265 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) {
#line 265 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 265 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 256 "hlds_out_util.m"
            {
#line 256 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 256 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 256 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Descr_16;
#line 256 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_18;
#line 256 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ForStr_19;
#line 256 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 256 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 258 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_17;

#line 257 "hlds_out_util.m"
              {
#line 257 "hlds_out_util.m"
                hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_14, &hlds__hlds_out__hlds_out_util__Descr_16);
              }
#line 258 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util___TypeSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 0)));
#line 258 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 1)));
#line 259 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_18 == (MR_Integer) 0);
#line 261 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 260 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type ";
#line 261 "hlds_out_util.m"
              else
#line 262 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type constructor ";
#line 264 "hlds_out_util.m"
              {
#line 264 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_15);
              }
#line 264 "hlds_out_util.m"
              {
#line 264 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_19, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 264 "hlds_out_util.m"
              {
#line 264 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_16, hlds__hlds_out__hlds_out_util__V_86_86);
              }
#line 256 "hlds_out_util.m"
            }
#line 265 "hlds_out_util.m"
            break;
#line 265 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 266 "hlds_out_util.m"
            {
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ClassId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 0)));
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 1)));
#line 266 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__MethodStr_26;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ClassName_27;
#line 266 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ClassStr_29;
#line 266 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__TypeStrs_30;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_73_73;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_74_74;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_76_76;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_77_77;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_79_79;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_80_80;
#line 266 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_82_82;
#line 267 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 2)));
#line 267 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 3)));
#line 271 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__V_28_28;

#line 269 "hlds_out_util.m"
              {
#line 269 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__MethodStr_26 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__MethodName_20, hlds__hlds_out__hlds_out_util__Arity_11);
              }
#line 271 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 0)));
#line 271 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 1)));
#line 272 "hlds_out_util.m"
              {
#line 272 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ClassStr_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_27);
              }
#line 273 "hlds_out_util.m"
              {
#line 273 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_73_73 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
#line 273 "hlds_out_util.m"
              {
#line 273 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__TypeStrs_30 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_73_73, hlds__hlds_out__hlds_out_util__InstanceTypes_23);
              }
#line 276 "hlds_out_util.m"
              {
#line 276 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_30));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
#line 276 "hlds_out_util.m"
              }
#line 276 "hlds_out_util.m"
              {
#line 276 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 0) = ((MR_Box) ((MR_String) "("));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_82_82));
#line 276 "hlds_out_util.m"
              }
#line 276 "hlds_out_util.m"
              {
#line 276 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_29));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_80_80));
#line 276 "hlds_out_util.m"
              }
#line 276 "hlds_out_util.m"
              {
#line 276 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 0) = ((MR_Box) ((MR_String) " for \140"));
#line 276 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_79_79));
#line 276 "hlds_out_util.m"
              }
#line 275 "hlds_out_util.m"
              {
#line 275 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_26));
#line 275 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_77_77));
#line 275 "hlds_out_util.m"
              }
#line 275 "hlds_out_util.m"
              {
#line 275 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 0) = ((MR_Box) ((MR_String) "instance method "));
#line 275 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_76_76));
#line 275 "hlds_out_util.m"
              }
#line 274 "hlds_out_util.m"
              {
#line 274 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_74_74);
              }
#line 266 "hlds_out_util.m"
            }
#line 265 "hlds_out_util.m"
            break;
#line 265 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 321 "hlds_out_util.m"
            {
#line 321 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 322 "hlds_out_util.m"
              {
#line 322 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 322 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 322 "hlds_out_util.m"
              }
#line 323 "hlds_out_util.m"
              {
#line 323 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
              }
#line 321 "hlds_out_util.m"
            }
#line 265 "hlds_out_util.m"
            break;
#line 265 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 265 "hlds_out_util.m"
#line 265 "hlds_out_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) {
#line 265 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 265 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 265 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 265 "hlds_out_util.m"
              case (MR_Integer) 5:
#line 265 "hlds_out_util.m"
              case (MR_Integer) 6:
#line 321 "hlds_out_util.m"
                {
#line 321 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 322 "hlds_out_util.m"
                  {
#line 322 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 322 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 322 "hlds_out_util.m"
                  }
#line 323 "hlds_out_util.m"
                  {
#line 323 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
                  }
#line 321 "hlds_out_util.m"
                }
#line 265 "hlds_out_util.m"
                break;
#line 265 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 279 "hlds_out_util.m"
                {
#line 279 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__FileName_31 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 279 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 284 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PromiseType_33;

#line 280 "hlds_out_util.m"
                  {
#line 280 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__PromiseType_33);
                  }
#line 284 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 281 "hlds_out_util.m"
                    {
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 281 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_100_100;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_103_103;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 281 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_121_121;

#line 282 "hlds_out_util.m"
                      {
#line 282 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_64_64 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_33);
                      }
#line 6984 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_100_100 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0];
#line 283 "hlds_out_util.m"
                      {
#line 283 "hlds_out_util.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_100_100, hlds__hlds_out__hlds_out_util__LineNumber_32, &hlds__hlds_out__hlds_out_util__V_94_94);
                      }
#line 281 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_101_101 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_94_94, (MR_String) ")");
                      }
#line 281 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_103_103 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_101_101);
                      }
#line 283 "hlds_out_util.m"
                      {
#line 283 "hlds_out_util.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_100_100, hlds__hlds_out__hlds_out_util__FileName_31, &hlds__hlds_out__hlds_out_util__V_104_104);
                      }
#line 281 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_104_104, hlds__hlds_out__hlds_out_util__V_103_103);
                      }
#line 281 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_111_111);
                      }
#line 282 "hlds_out_util.m"
                      {
#line 282 "hlds_out_util.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_100_100, hlds__hlds_out__hlds_out_util__V_64_64, &hlds__hlds_out__hlds_out_util__V_114_114);
                      }
#line 281 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_121_121 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_114_114, hlds__hlds_out__hlds_out_util__V_113_113);
                      }
#line 281 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_121_121);
                      }
#line 281 "hlds_out_util.m"
                    }
#line 284 "hlds_out_util.m"
                  else
#line 285 "hlds_out_util.m"
                    {
#line 285 "hlds_out_util.m"
                      {
#line 285 "hlds_out_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_util", (MR_String) "function \140hlds.hlds_out.hlds_out_util.pred_id_to_string\'/2", (MR_String) "origin_assertion");
                      }
#line 285 "hlds_out_util.m"
                    }
#line 279 "hlds_out_util.m"
                }
#line 265 "hlds_out_util.m"
                break;
#line 265 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 299 "hlds_out_util.m"
                {
#line 299 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TypeCtorSymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 299 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TypeCtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 299 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 3)));
#line 299 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__TypeStr_40;
#line 299 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_54_54;

#line 301 "hlds_out_util.m"
                  {
#line 301 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorSymName_37));
#line 301 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorArity_38));
#line 301 "hlds_out_util.m"
                  }
#line 301 "hlds_out_util.m"
                  {
#line 301 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__TypeStr_40 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_54_54);
                  }
#line 305 "hlds_out_util.m"
#line 305 "hlds_out_util.m"
                  switch (hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39) {
#line 305 "hlds_out_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 305 "hlds_out_util.m"
                    case (MR_Integer) 3:
#line 312 "hlds_out_util.m"
                      {
#line 313 "hlds_out_util.m"
                        {
#line 313 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 312 "hlds_out_util.m"
                      }
#line 305 "hlds_out_util.m"
                      break;
#line 305 "hlds_out_util.m"
                    case (MR_Integer) 2:
#line 309 "hlds_out_util.m"
                      {
#line 310 "hlds_out_util.m"
                        {
#line 310 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 309 "hlds_out_util.m"
                      }
#line 305 "hlds_out_util.m"
                      break;
#line 305 "hlds_out_util.m"
                    case (MR_Integer) 1:
#line 306 "hlds_out_util.m"
                      {
#line 307 "hlds_out_util.m"
                        {
#line 307 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 306 "hlds_out_util.m"
                      }
#line 305 "hlds_out_util.m"
                      break;
#line 305 "hlds_out_util.m"
                    case (MR_Integer) 0:
#line 303 "hlds_out_util.m"
                      {
#line 304 "hlds_out_util.m"
                        {
#line 304 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 303 "hlds_out_util.m"
                      }
#line 305 "hlds_out_util.m"
                      break;
#line 305 "hlds_out_util.m"
                  }
#line 299 "hlds_out_util.m"
                }
#line 265 "hlds_out_util.m"
                break;
#line 265 "hlds_out_util.m"
              case (MR_Integer) 4:
#line 288 "hlds_out_util.m"
                {
#line 288 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__BasePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 288 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 288 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__BasePredIdStr_36;

#line 289 "hlds_out_util.m"
                  {
#line 289 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__BasePredIdStr_36 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__BasePredId_34);
                  }
#line 293 "hlds_out_util.m"
#line 293 "hlds_out_util.m"
                  switch (hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35) {
#line 293 "hlds_out_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 293 "hlds_out_util.m"
                    case (MR_Integer) 1:
#line 294 "hlds_out_util.m"
                      {
#line 295 "hlds_out_util.m"
                        {
#line 295 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 294 "hlds_out_util.m"
                      }
#line 293 "hlds_out_util.m"
                      break;
#line 293 "hlds_out_util.m"
                    case (MR_Integer) 0:
#line 291 "hlds_out_util.m"
                      {
#line 292 "hlds_out_util.m"
                        {
#line 292 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 291 "hlds_out_util.m"
                      }
#line 293 "hlds_out_util.m"
                      break;
#line 293 "hlds_out_util.m"
                  }
#line 288 "hlds_out_util.m"
                }
#line 265 "hlds_out_util.m"
                break;
#line 265 "hlds_out_util.m"
            }
#line 265 "hlds_out_util.m"
            break;
#line 265 "hlds_out_util.m"
        }
#line 250 "hlds_out_util.m"
      }
#line 325 "hlds_out_util.m"
    else
#line 327 "hlds_out_util.m"
      {
#line 327 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_53;
#line 327 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_89_89;

#line 327 "hlds_out_util.m"
        {
#line 327 "hlds_out_util.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 328 "hlds_out_util.m"
        {
#line 328 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 328 "hlds_out_util.m"
        {
#line 328 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_89_89);
        }
#line 327 "hlds_out_util.m"
      }
#line 247 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_6;
#line 247 "hlds_out_util.m"
  }
#line 68 "hlds_out_util.m"
}

#line 67 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(
#line 67 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 67 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6)
#line 67 "hlds_out_util.m"
{
#line 241 "hlds_out_util.m"
  {
#line 241 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 241 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 245 "hlds_out_util.m"
    {
#line 245 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 245 "hlds_out_util.m"
    {
#line 245 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
#line 245 "hlds_out_util.m"
      return;
    }
#line 241 "hlds_out_util.m"
  }
#line 67 "hlds_out_util.m"
}

#line 46 "hlds_out_util.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
#line 46 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Globals_4,
#line 46 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Lang_5)
#line 46 "hlds_out_util.m"
{
#line 229 "hlds_out_util.m"
  {
#line 229 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 229 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Info_6;
#line 229 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_7;
#line 229 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Ids_8;
#line 229 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Names_9;
#line 229 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_10;

#line 230 "hlds_out_util.m"
    {
#line 230 "hlds_out_util.m"
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 152, &hlds__hlds_out__hlds_out_util__DumpOptions_7);
    }
#line 231 "hlds_out_util.m"
    {
#line 231 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 148, &hlds__hlds_out__hlds_out_util__Ids_8);
    }
#line 232 "hlds_out_util.m"
    {
#line 232 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 149, &hlds__hlds_out__hlds_out_util__Names_9);
    }
#line 233 "hlds_out_util.m"
    {
#line 233 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__MercInfo_10 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Lang_5);
    }
#line 234 "hlds_out_util.m"
    {
#line 234 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Info_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 234 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
#line 234 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
#line 234 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_8));
#line 234 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_9));
#line 234 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_10));
#line 234 "hlds_out_util.m"
    }
#line 229 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Info_6;
#line 229 "hlds_out_util.m"
  }
#line 46 "hlds_out_util.m"
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
