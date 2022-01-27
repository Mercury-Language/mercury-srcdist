/*
** Automatically generated from `hlds_out_util.m'
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
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 149 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 152 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 158 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 164 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 167 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

#line 170 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

#line 173 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

#line 176 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

#line 179 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

#line 182 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

#line 185 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

#line 188 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0;

#line 191 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1;

#line 194 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2];

#line 197 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2];

#line 200 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2];

#line 203 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0;

#line 206 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1;

#line 209 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2];

#line 212 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2];

#line 215 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2];

#line 218 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

#line 221 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

#line 224 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2];

#line 227 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

#line 230 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

#line 233 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 236 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 238 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 241 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 244 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 246 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 248 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 251 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 254 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 256 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 259 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 262 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 264 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 266 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 269 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 272 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 274 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 277 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 280 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 282 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 284 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 287 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 290 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 292 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2);

#line 295 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 298 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 300 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 302 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 761 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__761__1_3_p_0(
#line 761 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_102,
#line 761 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_103,
#line 761 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_104);

#line 936 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 936 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 936 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6);

#line 877 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 877 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 877 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 877 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 877 "hlds_out_util.m"
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

#line 908 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 908 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 908 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1);

#line 875 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 875 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 875 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 875 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 875 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);

#line 758 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 758 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 758 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 758 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 758 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][8];


#line 486 "hlds_out_util.m"
/* sealed */ struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s {
#line 486 "hlds_out_util.m"
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 486 "hlds_out_util.m"
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[8];



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


static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_4_0_s hlds__hlds_out__hlds_out_util_vector_common_4[8] = {
  /* row 0 */   {     (MR_String) "unsafe_type_cast" },
  /* row 1 */   {     (MR_String) "unsafe_type_inst_cast" },
  /* row 2 */   {     (MR_String) "equiv_type_cast" },
  /* row 3 */   {     (MR_String) "exists_cast" },
  /* row 4 */   {     (MR_String) "unsafe_type_cast" },
  /* row 5 */   {     (MR_String) "unsafe_type_inst_cast" },
  /* row 6 */   {     (MR_String) "equiv_type_cast" },
  /* row 7 */   {     (MR_String) "exists_cast" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 648 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 656 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 665 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 673 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 681 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 689 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 698 "hlds.hlds_out.hlds_out_util.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 706 "hlds.hlds_out.hlds_out_util.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0
};

#line 715 "hlds.hlds_out.hlds_out_util.c"
static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_mercury_to_mercury"
};

#line 724 "hlds.hlds_out.hlds_out_util.c"
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

#line 739 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 744 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0
  }
};

#line 753 "hlds.hlds_out.hlds_out_util.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

#line 758 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = {
  (MR_Integer) 0
};

#line 763 "hlds.hlds_out.hlds_out_util.c"
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

#line 780 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
  (MR_String) "is_first",
  (MR_Integer) 0
};

#line 786 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
  (MR_String) "is_not_first",
  (MR_Integer) 1
};

#line 792 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 798 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

#line 804 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 810 "hlds.hlds_out.hlds_out_util.c"
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

#line 827 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
  (MR_String) "is_last",
  (MR_Integer) 0
};

#line 833 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
  (MR_String) "is_not_last",
  (MR_Integer) 1
};

#line 839 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 845 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

#line 851 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 857 "hlds.hlds_out.hlds_out_util.c"
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

#line 874 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  (MR_Integer) 0
};

#line 880 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  (MR_Integer) 1
};

#line 886 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_value_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

#line 892 "hlds.hlds_out.hlds_out_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

#line 898 "hlds.hlds_out.hlds_out_util.c"
static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 904 "hlds.hlds_out.hlds_out_util.c"
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

#line 921 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
#line 924 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 926 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 928 "hlds.hlds_out.hlds_out_util.c"
{
#line 930 "hlds.hlds_out.hlds_out_util.c"
  {
#line 932 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 935 "hlds.hlds_out.hlds_out_util.c"
    {
#line 937 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 940 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 942 "hlds.hlds_out.hlds_out_util.c"
  }
#line 944 "hlds.hlds_out.hlds_out_util.c"
}

#line 947 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
#line 950 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 952 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 954 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 956 "hlds.hlds_out.hlds_out_util.c"
{
#line 958 "hlds.hlds_out.hlds_out_util.c"
  {
#line 960 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 963 "hlds.hlds_out.hlds_out_util.c"
    {
#line 965 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 968 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 970 "hlds.hlds_out.hlds_out_util.c"
  }
#line 972 "hlds.hlds_out.hlds_out_util.c"
}

#line 975 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0_10001(
#line 978 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 980 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 982 "hlds.hlds_out.hlds_out_util.c"
{
#line 984 "hlds.hlds_out.hlds_out_util.c"
  {
#line 986 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 989 "hlds.hlds_out.hlds_out_util.c"
    {
#line 991 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 994 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 996 "hlds.hlds_out.hlds_out_util.c"
  }
#line 998 "hlds.hlds_out.hlds_out_util.c"
}

#line 1001 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0_10001(
#line 1004 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1006 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1008 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1010 "hlds.hlds_out.hlds_out_util.c"
{
#line 1012 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1014 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1017 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1019 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1022 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1024 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1026 "hlds.hlds_out.hlds_out_util.c"
}

#line 1029 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0_10001(
#line 1032 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1034 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1036 "hlds.hlds_out.hlds_out_util.c"
{
#line 1038 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1040 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1043 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1045 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1048 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1050 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1052 "hlds.hlds_out.hlds_out_util.c"
}

#line 1055 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0_10001(
#line 1058 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1060 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1062 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1064 "hlds.hlds_out.hlds_out_util.c"
{
#line 1066 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1068 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1071 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1073 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1076 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1078 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1080 "hlds.hlds_out.hlds_out_util.c"
}

#line 1083 "hlds.hlds_out.hlds_out_util.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
#line 1086 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1088 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2)
#line 1090 "hlds.hlds_out.hlds_out_util.c"
{
#line 1092 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1094 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 1097 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1099 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2));
    }
#line 1102 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1104 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1106 "hlds.hlds_out.hlds_out_util.c"
}

#line 1109 "hlds.hlds_out.hlds_out_util.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
#line 1112 "hlds.hlds_out.hlds_out_util.c"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 1114 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 1116 "hlds.hlds_out.hlds_out_util.c"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 1118 "hlds.hlds_out.hlds_out_util.c"
{
#line 1120 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1122 "hlds.hlds_out.hlds_out_util.c"
    MR_Word hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1;

#line 1125 "hlds.hlds_out.hlds_out_util.c"
    {
#line 1127 "hlds.hlds_out.hlds_out_util.c"
      hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_3));
    }
#line 1130 "hlds.hlds_out.hlds_out_util.c"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__1_1));
#line 1132 "hlds.hlds_out.hlds_out_util.c"
  }
#line 1134 "hlds.hlds_out.hlds_out_util.c"
}

#line 761 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__761__1_3_p_0(
#line 761 "hlds_out_util.m"
  MR_Char hlds__hlds_out__hlds_out_util__HeadVar__1_102,
#line 761 "hlds_out_util.m"
  MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_103,
#line 761 "hlds_out_util.m"
  MR_String * hlds__hlds_out__hlds_out_util__HeadVar__3_104)
#line 761 "hlds_out_util.m"
{
#line 761 "hlds_out_util.m"
  {
#line 761 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__1_102 == (MR_Char) 42);

#line 761 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 760 "hlds_out_util.m"
      {
#line 760 "hlds_out_util.m"
        {
#line 760 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_103, (MR_String) "star", hlds__hlds_out__hlds_out_util__HeadVar__3_104);
#line 760 "hlds_out_util.m"
          return;
        }
#line 760 "hlds_out_util.m"
      }
#line 761 "hlds_out_util.m"
    else
#line 762 "hlds_out_util.m"
      {
#line 762 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__CharStr_20;

#line 762 "hlds_out_util.m"
        {
#line 762 "hlds_out_util.m"
          mercury__string__char_to_string_2_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_102, &hlds__hlds_out__hlds_out_util__CharStr_20);
        }
#line 763 "hlds_out_util.m"
        {
#line 763 "hlds_out_util.m"
          mercury__string__append_3_p_2(hlds__hlds_out__hlds_out_util__HeadVar__2_103, hlds__hlds_out__hlds_out_util__CharStr_20, hlds__hlds_out__hlds_out_util__HeadVar__3_104);
#line 763 "hlds_out_util.m"
          return;
        }
#line 762 "hlds_out_util.m"
      }
#line 761 "hlds_out_util.m"
  }
#line 761 "hlds_out_util.m"
}

#line 151 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
#line 151 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 151 "hlds_out_util.m"
{
#line 151 "hlds_out_util.m"
  {
#line 151 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 151 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 151 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 151 "hlds_out_util.m"
    {
#line 151 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 151 "hlds_out_util.m"
      return;
    }
#line 151 "hlds_out_util.m"
  }
#line 151 "hlds_out_util.m"
}

#line 151 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 151 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 151 "hlds_out_util.m"
{
#line 1233 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1235 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1238 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1240 "hlds.hlds_out.hlds_out_util.c"
  }
#line 151 "hlds_out_util.m"
}

#line 52 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_last_0_0(
#line 52 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 52 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 52 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 52 "hlds_out_util.m"
{
#line 52 "hlds_out_util.m"
  {
#line 52 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 52 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 52 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 52 "hlds_out_util.m"
    {
#line 52 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 52 "hlds_out_util.m"
      return;
    }
#line 52 "hlds_out_util.m"
  }
#line 52 "hlds_out_util.m"
}

#line 52 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_last_0_0(
#line 52 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 52 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 52 "hlds_out_util.m"
{
#line 1286 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1288 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1291 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1293 "hlds.hlds_out.hlds_out_util.c"
  }
#line 52 "hlds_out_util.m"
}

#line 48 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____is_first_0_0(
#line 48 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 48 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 48 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 48 "hlds_out_util.m"
{
#line 48 "hlds_out_util.m"
  {
#line 48 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 48 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 48 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 48 "hlds_out_util.m"
    {
#line 48 "hlds_out_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_util__Cast_HeadVar2_5);
#line 48 "hlds_out_util.m"
      return;
    }
#line 48 "hlds_out_util.m"
  }
#line 48 "hlds_out_util.m"
}

#line 48 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____is_first_0_0(
#line 48 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_1,
#line 48 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 48 "hlds_out_util.m"
{
#line 1339 "hlds.hlds_out.hlds_out_util.c"
  {
#line 1341 "hlds.hlds_out.hlds_out_util.c"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__HeadVar__2_1 == hlds__hlds_out__hlds_out_util__HeadVar__2_2);

#line 1344 "hlds.hlds_out.hlds_out_util.c"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 1346 "hlds.hlds_out.hlds_out_util.c"
  }
#line 48 "hlds_out_util.m"
}

#line 35 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
#line 35 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 35 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2,
#line 35 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__3_3)
#line 35 "hlds_out_util.m"
{
#line 35 "hlds_out_util.m"
  {
#line 35 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 35 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_18 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 35 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_19 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__3_3;

#line 35 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_18 == hlds__hlds_out__hlds_out_util__CastY_19);
#line 35 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1375 "hlds.hlds_out.hlds_out_util.c"
      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "hlds_out_util.m"
    else
#line 35 "hlds_out_util.m"
      {
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 2)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 3)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__3_3, (MR_Integer) 4)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_14_14;

#line 35 "hlds_out_util.m"
        {
#line 35 "hlds_out_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_14_14, hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9);
        }
#line 1409 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_14_14 == (MR_Integer) 0);
#line 35 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 35 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_14_14;
#line 35 "hlds_out_util.m"
        else
#line 35 "hlds_out_util.m"
          {
#line 35 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 35 "hlds_out_util.m"
            {
#line 35 "hlds_out_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__V_5_5, hlds__hlds_out__hlds_out_util__V_10_10);
            }
#line 1429 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_15_15 == (MR_Integer) 0);
#line 35 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 35 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_15_15;
#line 35 "hlds_out_util.m"
            else
#line 35 "hlds_out_util.m"
              {
#line 35 "hlds_out_util.m"
                MR_Word hlds__hlds_out__hlds_out_util__V_16_16;

#line 35 "hlds_out_util.m"
                {
#line 35 "hlds_out_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                }
#line 1449 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_16_16 == (MR_Integer) 0);
#line 35 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 35 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
                  *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_16_16;
#line 35 "hlds_out_util.m"
                else
#line 35 "hlds_out_util.m"
                  {
#line 35 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__V_17_17;

#line 35 "hlds_out_util.m"
                    {
#line 35 "hlds_out_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1], &hlds__hlds_out__hlds_out_util__V_17_17, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_7_7)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_12_12)));
                    }
#line 1469 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__V_17_17 == (MR_Integer) 0);
#line 35 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 35 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
                      *hlds__hlds_out__hlds_out_util__HeadVar__1_1 = hlds__hlds_out__hlds_out_util__V_17_17;
#line 35 "hlds_out_util.m"
                    else
#line 35 "hlds_out_util.m"
                      {
#line 35 "hlds_out_util.m"
                        parse_tree__mercury_to_mercury____Compare____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__HeadVar__1_1, hlds__hlds_out__hlds_out_util__V_8_8, hlds__hlds_out__hlds_out_util__V_13_13);
#line 35 "hlds_out_util.m"
                        return;
                      }
#line 35 "hlds_out_util.m"
                  }
#line 35 "hlds_out_util.m"
              }
#line 35 "hlds_out_util.m"
          }
#line 35 "hlds_out_util.m"
      }
#line 35 "hlds_out_util.m"
  }
#line 35 "hlds_out_util.m"
}

#line 35 "hlds_out_util.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
#line 35 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1,
#line 35 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 35 "hlds_out_util.m"
{
#line 35 "hlds_out_util.m"
  {
#line 35 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 35 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastX_13 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__1_1;
#line 35 "hlds_out_util.m"
    MR_Integer hlds__hlds_out__hlds_out_util__CastY_14 = (MR_Integer) hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 35 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__CastX_13 == hlds__hlds_out__hlds_out_util__CastY_14);
#line 35 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 35 "hlds_out_util.m"
    else
#line 35 "hlds_out_util.m"
      {
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_15_15;
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__TypeInfo_16_16;
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 2)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 3)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 4)));
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 2)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 3)));
#line 35 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__2_2, (MR_Integer) 4)));

#line 1552 "hlds.hlds_out.hlds_out_util.c"
        hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_3_3, hlds__hlds_out__hlds_out_util__V_8_8) == 0);
#line 35 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
          {
#line 1558 "hlds.hlds_out.hlds_out_util.c"
            hlds__hlds_out__hlds_out_util__succeeded = (strcmp(hlds__hlds_out__hlds_out_util__V_4_4, hlds__hlds_out__hlds_out_util__V_9_9) == 0);
#line 35 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
              {
#line 1564 "hlds.hlds_out.hlds_out_util.c"
                hlds__hlds_out__hlds_out_util__TypeInfo_15_15 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1566 "hlds.hlds_out.hlds_out_util.c"
                {
#line 1568 "hlds.hlds_out.hlds_out_util.c"
                  hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_15_15, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_10_10)));
                }
#line 35 "hlds_out_util.m"
                if (hlds__hlds_out__hlds_out_util__succeeded)
#line 35 "hlds_out_util.m"
                  {
#line 1575 "hlds.hlds_out.hlds_out_util.c"
                    hlds__hlds_out__hlds_out_util__TypeInfo_16_16 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[1];
#line 1577 "hlds.hlds_out.hlds_out_util.c"
                    {
#line 1579 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_util__TypeInfo_16_16, ((MR_Box) (hlds__hlds_out__hlds_out_util__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_util__V_11_11)));
                    }
#line 35 "hlds_out_util.m"
                    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 1584 "hlds.hlds_out.hlds_out_util.c"
                      {
#line 1586 "hlds.hlds_out.hlds_out_util.c"
                        return hlds__hlds_out__hlds_out_util__succeeded = parse_tree__mercury_to_mercury____Unify____merc_out_info_0_0(hlds__hlds_out__hlds_out_util__V_7_7, hlds__hlds_out__hlds_out_util__V_12_12);
                      }
#line 35 "hlds_out_util.m"
                  }
#line 35 "hlds_out_util.m"
              }
#line 35 "hlds_out_util.m"
          }
#line 35 "hlds_out_util.m"
      }
#line 35 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__succeeded;
#line 35 "hlds_out_util.m"
  }
#line 35 "hlds_out_util.m"
}

#line 936 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(
#line 936 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__H_5,
#line 936 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__T_6)
#line 936 "hlds_out_util.m"
{
#line 939 "hlds_out_util.m"
  while (MR_TRUE)
#line 939 "hlds_out_util.m"
    {
#line 939 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 939 "hlds_out_util.m"
      {
#line 939 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 940 "hlds_out_util.m"
        {
#line 940 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__H_5);
        }
#line 945 "hlds_out_util.m"
        if ((hlds__hlds_out__hlds_out_util__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "hlds_out_util.m"
          {
#line 946 "hlds_out_util.m"
          }
#line 945 "hlds_out_util.m"
        else
#line 942 "hlds_out_util.m"
          {
#line 942 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__TH_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 0)));
#line 942 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__TT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__T_6, (MR_Integer) 1)));

#line 943 "hlds_out_util.m"
            {
#line 943 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 944 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 944 "hlds_out_util.m"
            {
#line 944 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__H__tmp_copy_5 = hlds__hlds_out__hlds_out_util__TH_8;
#line 944 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__T__tmp_copy_6 = hlds__hlds_out__hlds_out_util__TT_9;

#line 944 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__T_6 = hlds__hlds_out__hlds_out_util__T__tmp_copy_6;
#line 944 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__H_5 = hlds__hlds_out__hlds_out_util__H__tmp_copy_5;
#line 944 "hlds_out_util.m"
            }
#line 944 "hlds_out_util.m"
            continue;
#line 942 "hlds_out_util.m"
          }
#line 939 "hlds_out_util.m"
      }
#line 939 "hlds_out_util.m"
      break;
#line 939 "hlds_out_util.m"
    }
#line 936 "hlds_out_util.m"
}

#line 877 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(
#line 877 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 877 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 877 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 877 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 877 "hlds_out_util.m"
{
#line 881 "hlds_out_util.m"
  {
#line 881 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 881 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 881 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Proof_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));

#line 882 "hlds_out_util.m"
    {
#line 882 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
#line 883 "hlds_out_util.m"
    {
#line 883 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 884 "hlds_out_util.m"
    {
#line 884 "hlds_out_util.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Constraint_10);
    }
#line 885 "hlds_out_util.m"
    {
#line 885 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 890 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Proof_11)) == (MR_mktag((MR_Integer) 0))))
#line 887 "hlds_out_util.m"
      {
#line 887 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 888 "hlds_out_util.m"
        {
#line 888 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "apply instance decl #");
        }
#line 889 "hlds_out_util.m"
        {
#line 889 "hlds_out_util.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_util__Num_13);
#line 889 "hlds_out_util.m"
          return;
        }
#line 887 "hlds_out_util.m"
      }
#line 890 "hlds_out_util.m"
    else
#line 891 "hlds_out_util.m"
      {
#line 891 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Super_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Proof_11, (MR_Integer) 0)));

#line 892 "hlds_out_util.m"
        {
#line 892 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "super class of ");
        }
#line 893 "hlds_out_util.m"
        {
#line 893 "hlds_out_util.m"
          parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(hlds__hlds_out__hlds_out_util__TVarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Super_14);
#line 893 "hlds_out_util.m"
          return;
        }
#line 891 "hlds_out_util.m"
      }
#line 881 "hlds_out_util.m"
  }
#line 877 "hlds_out_util.m"
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
#line 457 "hlds_out_util.m"
    switch (hlds__hlds_out__hlds_out_util__First_4) {
#line 457 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 457 "hlds_out_util.m"
      case (MR_Integer) 0:
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
        break;
#line 457 "hlds_out_util.m"
      case (MR_Integer) 1:
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
        break;
#line 457 "hlds_out_util.m"
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
#line 457 "hlds_out_util.m"
    switch (hlds__hlds_out__hlds_out_util__First_5) {
#line 457 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 457 "hlds_out_util.m"
      case (MR_Integer) 0:
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
        break;
#line 457 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 462 "hlds_out_util.m"
        {
#line 463 "hlds_out_util.m"
          {
#line 463 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
          }
#line 462 "hlds_out_util.m"
        }
#line 457 "hlds_out_util.m"
        break;
#line 457 "hlds_out_util.m"
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
      hlds__hlds_out__hlds_out_util__ConsIdStr_11 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConsId_8);
    }
#line 440 "hlds_out_util.m"
    {
#line 440 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 440 "hlds_out_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
#line 440 "hlds_out_util.m"
    }
#line 441 "hlds_out_util.m"
    {
#line 441 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 441 "hlds_out_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ConsIdStr_11));
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
#line 424 "hlds_out_util.m"
                      switch (hlds__hlds_out__hlds_out_util__ArgNum_11) {
#line 424 "hlds_out_util.m"
                        default:
#line 424 "hlds_out_util.m"
                          hlds__hlds_out__hlds_out_util__succeeded = MR_FALSE;
#line 424 "hlds_out_util.m"
                          break;
#line 424 "hlds_out_util.m"
                        case (MR_Integer) 1:
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
                          break;
#line 424 "hlds_out_util.m"
                        case (MR_Integer) 2:
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
                          break;
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
#line 457 "hlds_out_util.m"
                switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_1) {
#line 457 "hlds_out_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 457 "hlds_out_util.m"
                  case (MR_Integer) 0:
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
                    break;
#line 457 "hlds_out_util.m"
                  case (MR_Integer) 1:
#line 462 "hlds_out_util.m"
                    {
#line 463 "hlds_out_util.m"
                      {
#line 463 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_11_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_4, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                      }
#line 462 "hlds_out_util.m"
                    }
#line 457 "hlds_out_util.m"
                    break;
#line 457 "hlds_out_util.m"
                }
#line 448 "hlds_out_util.m"
                {
#line 448 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ElementNumStr_37 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ElementNum_16);
                }
#line 450 "hlds_out_util.m"
                {
#line 450 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "hlds_out_util.m"
                  MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ElementNumStr_37));
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
#line 352 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__MainContext_7)) {
#line 352 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 352 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 352 "hlds_out_util.m"
#line 352 "hlds_out_util.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_util__MainContext_7)) {
#line 352 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 352 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 352 "hlds_out_util.m"
            {
#line 352 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 352 "hlds_out_util.m"
              *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_19 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18;
#line 352 "hlds_out_util.m"
            }
#line 352 "hlds_out_util.m"
            break;
#line 352 "hlds_out_util.m"
          case (MR_Integer) 1:
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
            break;
#line 352 "hlds_out_util.m"
        }
#line 352 "hlds_out_util.m"
        break;
#line 352 "hlds_out_util.m"
      case (MR_Integer) 1:
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
            hlds__hlds_out__hlds_out_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hlds_out_util.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgNumStr_10));
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
        break;
#line 352 "hlds_out_util.m"
      case (MR_Integer) 2:
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
#line 457 "hlds_out_util.m"
          switch (hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16) {
#line 457 "hlds_out_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 457 "hlds_out_util.m"
            case (MR_Integer) 0:
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
              break;
#line 457 "hlds_out_util.m"
            case (MR_Integer) 1:
#line 462 "hlds_out_util.m"
              {
#line 463 "hlds_out_util.m"
                {
#line 463 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[13]));
                }
#line 462 "hlds_out_util.m"
              }
#line 457 "hlds_out_util.m"
              break;
#line 457 "hlds_out_util.m"
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
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
        break;
#line 352 "hlds_out_util.m"
      case (MR_Integer) 3:
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
#line 381 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_78_78;

#line 382 "hlds_out_util.m"
          {
#line 382 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_p_0(hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16, hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_18, &hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_20_20);
          }
#line 383 "hlds_out_util.m"
          {
#line 383 "hlds_out_util.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0], hlds__hlds_out__hlds_out_util__Source_14, &hlds__hlds_out__hlds_out_util__V_71_71);
          }
#line 383 "hlds_out_util.m"
          {
#line 383 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) " unification:\n");
          }
#line 383 "hlds_out_util.m"
          {
#line 383 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "implicit ", hlds__hlds_out__hlds_out_util__V_78_78);
          }
#line 384 "hlds_out_util.m"
          {
#line 384 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "hlds_out_util.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
#line 381 "hlds_out_util.m"
          *hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_17 = hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_16;
#line 381 "hlds_out_util.m"
        }
#line 352 "hlds_out_util.m"
        break;
#line 352 "hlds_out_util.m"
    }
#line 352 "hlds_out_util.m"
  }
#line 346 "hlds_out_util.m"
}

#line 191 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_indent_3_p_0(
#line 191 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_4)
#line 191 "hlds_out_util.m"
{
#line 957 "hlds_out_util.m"
  while (MR_TRUE)
#line 957 "hlds_out_util.m"
    {
#line 957 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 957 "hlds_out_util.m"
      {
#line 957 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Indent_4 == (MR_Integer) 0);

#line 957 "hlds_out_util.m"
        if (hlds__hlds_out__hlds_out_util__succeeded)
#line 957 "hlds_out_util.m"
          {
#line 957 "hlds_out_util.m"
          }
#line 957 "hlds_out_util.m"
        else
#line 958 "hlds_out_util.m"
          {
#line 958 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__V_10_10;

#line 958 "hlds_out_util.m"
            {
#line 958 "hlds_out_util.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 959 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = (hlds__hlds_out__hlds_out_util__Indent_4 - (MR_Integer) 1);
#line 959 "hlds_out_util.m"
            /* direct tailcall eliminated */
#line 959 "hlds_out_util.m"
            {
#line 959 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4 = hlds__hlds_out__hlds_out_util__V_10_10;

#line 959 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__Indent_4 = hlds__hlds_out__hlds_out_util__Indent__tmp_copy_4;
#line 959 "hlds_out_util.m"
            }
#line 959 "hlds_out_util.m"
            continue;
#line 958 "hlds_out_util.m"
          }
#line 957 "hlds_out_util.m"
      }
#line 957 "hlds_out_util.m"
      break;
#line 957 "hlds_out_util.m"
    }
#line 191 "hlds_out_util.m"
}

#line 185 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(
#line 185 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__IntList_4)
#line 185 "hlds_out_util.m"
{
#line 927 "hlds_out_util.m"
  {
#line 927 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;

#line 927 "hlds_out_util.m"
    if ((hlds__hlds_out__hlds_out_util__IntList_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "hlds_out_util.m"
      {
#line 928 "hlds_out_util.m"
        {
#line 928 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[]");
#line 928 "hlds_out_util.m"
          return;
        }
#line 927 "hlds_out_util.m"
      }
#line 927 "hlds_out_util.m"
    else
#line 930 "hlds_out_util.m"
      {
#line 930 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 0)));
#line 930 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__IntList_4, (MR_Integer) 1)));

#line 931 "hlds_out_util.m"
        {
#line 931 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
#line 932 "hlds_out_util.m"
        {
#line 932 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__write_intlist_2_4_p_0(hlds__hlds_out__hlds_out_util__H_6, hlds__hlds_out__hlds_out_util__T_7);
        }
#line 933 "hlds_out_util.m"
        {
#line 933 "hlds_out_util.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
#line 933 "hlds_out_util.m"
          return;
        }
#line 930 "hlds_out_util.m"
      }
#line 927 "hlds_out_util.m"
  }
#line 185 "hlds_out_util.m"
}

#line 178 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_7,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 178 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 178 "hlds_out_util.m"
{
#line 916 "hlds_out_util.m"
  {
#line 916 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 916 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 916 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 0)));
#line 916 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__4_4, (MR_Integer) 1)));
#line 916 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_11_11;
#line 916 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_12_12;
#line 916 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 917 "hlds_out_util.m"
    {
#line 917 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_11_11 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__Var_9);
    }
#line 918 "hlds_out_util.m"
    {
#line 918 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = parse_tree__mercury_to_mercury__mercury_mode_to_string_3_f_0((MR_Integer) 1, hlds__hlds_out__hlds_out_util__InstVarSet_7, hlds__hlds_out__hlds_out_util__Mode_10);
    }
#line 918 "hlds_out_util.m"
    {
#line 918 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "::", hlds__hlds_out__hlds_out_util__V_14_14);
    }
#line 918 "hlds_out_util.m"
    {
#line 918 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_11_11, hlds__hlds_out__hlds_out_util__V_12_12);
    }
#line 916 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 916 "hlds_out_util.m"
  }
#line 178 "hlds_out_util.m"
}

#line 176 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 176 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__4_4)
#line 176 "hlds_out_util.m"
{
#line 912 "hlds_out_util.m"
  {
#line 912 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 912 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 913 "hlds_out_util.m"
    {
#line 913 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__InstVarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__HeadVar__4_4);
    }
#line 913 "hlds_out_util.m"
    {
#line 913 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_15_15);
#line 913 "hlds_out_util.m"
      return;
    }
#line 912 "hlds_out_util.m"
  }
#line 176 "hlds_out_util.m"
}

#line 908 "hlds_out_util.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
#line 908 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 908 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1)
#line 908 "hlds_out_util.m"
{
#line 908 "hlds_out_util.m"
  {
#line 908 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 908 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 908 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5;

#line 908 "hlds_out_util.m"
    {
#line 908 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5 = hlds__hlds_out__hlds_out_util__var_mode_to_string_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
    }
#line 908 "hlds_out_util.m"
    hlds__hlds_out__hlds_out_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__5_5));
#line 908 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__wrapper_arg_2;
#line 908 "hlds_out_util.m"
  }
#line 908 "hlds_out_util.m"
}

#line 173 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_8,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_10,
#line 173 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_11)
#line 173 "hlds_out_util.m"
{
#line 906 "hlds_out_util.m"
  {
#line 906 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 906 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 906 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__VarModes_13;
#line 906 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Strs_14;
#line 906 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_15_15;

#line 907 "hlds_out_util.m"
    {
#line 907 "hlds_out_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_util__Vars_10, hlds__hlds_out__hlds_out_util__Modes_11, &hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 908 "hlds_out_util.m"
    {
#line 908 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 908 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0]));
#line 908 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
#line 908 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 908 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarSet_7));
#line 908 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__InstVarSet_8));
#line 908 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_15_15, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_9));
#line 908 "hlds_out_util.m"
    }
#line 908 "hlds_out_util.m"
    {
#line 908 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Strs_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_util__V_15_15, hlds__hlds_out__hlds_out_util__VarModes_13);
    }
#line 910 "hlds_out_util.m"
    {
#line 910 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__Strs_14);
    }
#line 906 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 906 "hlds_out_util.m"
  }
#line 173 "hlds_out_util.m"
}

#line 171 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__InstVarSet_9,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Vars_11,
#line 171 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Modes_12)
#line 171 "hlds_out_util.m"
{
#line 901 "hlds_out_util.m"
  {
#line 901 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 901 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 903 "hlds_out_util.m"
    {
#line 903 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__InstVarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__Vars_11, hlds__hlds_out__hlds_out_util__Modes_12);
    }
#line 902 "hlds_out_util.m"
    {
#line 902 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 902 "hlds_out_util.m"
      return;
    }
#line 901 "hlds_out_util.m"
  }
#line 171 "hlds_out_util.m"
}

#line 875 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1(
#line 875 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 875 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 875 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 875 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 875 "hlds_out_util.m"
{
#line 875 "hlds_out_util.m"
  {
#line 875 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;

#line 875 "hlds_out_util.m"
    {
#line 875 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1));
#line 875 "hlds_out_util.m"
      return;
    }
#line 875 "hlds_out_util.m"
  }
#line 875 "hlds_out_util.m"
}

#line 163 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__TVarSet_7,
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 163 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__Indent_9,
#line 163 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ProofMap_10)
#line 163 "hlds_out_util.m"
{
#line 870 "hlds_out_util.m"
  {
#line 870 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 870 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ProofsList_12;
#line 870 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__V_19_19;

#line 871 "hlds_out_util.m"
    {
#line 871 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_util__Indent_9);
    }
#line 872 "hlds_out_util.m"
    {
#line 872 "hlds_out_util.m"
      mercury__io__write_string_3_p_0((MR_String) "% Proofs: \n");
    }
#line 873 "hlds_out_util.m"
    {
#line 873 "hlds_out_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, hlds__hlds_out__hlds_out_util__ProofMap_10, &hlds__hlds_out__hlds_out_util__ProofsList_12);
    }
#line 875 "hlds_out_util.m"
    {
#line 875 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 875 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
#line 875 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0_1));
#line 875 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 875 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TVarSet_7));
#line 875 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__VarNamePrint_8));
#line 875 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_19_19, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Indent_9));
#line 875 "hlds_out_util.m"
    }
#line 874 "hlds_out_util.m"
    {
#line 874 "hlds_out_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[0], hlds__hlds_out__hlds_out_util__ProofsList_12, (MR_String) "\n", hlds__hlds_out__hlds_out_util__V_19_19);
#line 874 "hlds_out_util.m"
      return;
    }
#line 870 "hlds_out_util.m"
  }
#line 163 "hlds_out_util.m"
}

#line 758 "hlds_out_util.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
#line 758 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__closure_arg,
#line 758 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_1,
#line 758 "hlds_out_util.m"
  MR_Box hlds__hlds_out__hlds_out_util__wrapper_arg_2,
#line 758 "hlds_out_util.m"
  MR_Box * hlds__hlds_out__hlds_out_util__wrapper_arg_3)
#line 758 "hlds_out_util.m"
{
#line 758 "hlds_out_util.m"
  {
#line 758 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__closure = hlds__hlds_out__hlds_out_util__closure_arg;
#line 758 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_104;

#line 758 "hlds_out_util.m"
    {
#line 758 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__761__1_3_p_0(((MR_Char) (MR_Word) hlds__hlds_out__hlds_out_util__wrapper_arg_1), ((MR_String) hlds__hlds_out__hlds_out_util__wrapper_arg_2), &hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_104);
    }
#line 758 "hlds_out_util.m"
    *hlds__hlds_out__hlds_out_util__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_util__conv0_HeadVar__3_104));
#line 758 "hlds_out_util.m"
  }
#line 758 "hlds_out_util.m"
}

#line 158 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_8,
#line 158 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_9)
#line 158 "hlds_out_util.m"
{
#line 747 "hlds_out_util.m"
  {
#line 747 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 747 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__String_10;

#line 747 "hlds_out_util.m"
#line 747 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_8)) {
#line 747 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 747 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 835 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_cell_constructor>";
#line 747 "hlds_out_util.m"
        break;
#line 747 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 832 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_cell_constructor>";
#line 747 "hlds_out_util.m"
        break;
#line 747 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 846 "hlds_out_util.m"
        {
#line 846 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 846 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_67_67;
#line 846 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 846 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_70_70;
#line 846 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_71_71;
#line 846 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredProcId_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)));
#line 846 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__PredId_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_130, (MR_Integer) 0)));
#line 846 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__ProcId_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_130, (MR_Integer) 1)));

#line 849 "hlds_out_util.m"
          {
#line 849 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_67_67 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_131);
          }
#line 850 "hlds_out_util.m"
          {
#line 850 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_71_71 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_132);
          }
#line 850 "hlds_out_util.m"
          {
#line 850 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_70_70 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_71_71, (MR_String) ">");
          }
#line 850 "hlds_out_util.m"
          {
#line 850 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_70_70);
          }
#line 849 "hlds_out_util.m"
          {
#line 849 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_67_67, hlds__hlds_out__hlds_out_util__V_68_68);
          }
#line 849 "hlds_out_util.m"
          {
#line 849 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", hlds__hlds_out__hlds_out_util__V_66_66);
          }
#line 846 "hlds_out_util.m"
        }
#line 747 "hlds_out_util.m"
        break;
#line 747 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 747 "hlds_out_util.m"
#line 747 "hlds_out_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 0)))) {
#line 747 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 747 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 852 "hlds_out_util.m"
            {
#line 852 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_58_58;
#line 852 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 852 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 852 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_62_62;
#line 852 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_63_63;
#line 852 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 852 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_133, (MR_Integer) 0)));
#line 852 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_133, (MR_Integer) 1)));

#line 855 "hlds_out_util.m"
              {
#line 855 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_134);
              }
#line 856 "hlds_out_util.m"
              {
#line 856 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_63_63 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_135);
              }
#line 856 "hlds_out_util.m"
              {
#line 856 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_63_63, (MR_String) ">");
              }
#line 855 "hlds_out_util.m"
              {
#line 855 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_62_62);
              }
#line 855 "hlds_out_util.m"
              {
#line 855 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_59_59, hlds__hlds_out__hlds_out_util__V_60_60);
              }
#line 855 "hlds_out_util.m"
              {
#line 855 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", hlds__hlds_out__hlds_out_util__V_58_58);
              }
#line 852 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 858 "hlds_out_util.m"
            {
#line 858 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 858 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 858 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_52_52;
#line 858 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_54_54;
#line 858 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 858 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 858 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_136, (MR_Integer) 0)));
#line 858 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_136, (MR_Integer) 1)));

#line 861 "hlds_out_util.m"
              {
#line 861 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_137);
              }
#line 862 "hlds_out_util.m"
              {
#line 862 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_138);
              }
#line 862 "hlds_out_util.m"
              {
#line 862 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_55_55, (MR_String) ">");
              }
#line 861 "hlds_out_util.m"
              {
#line 861 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_54_54);
              }
#line 861 "hlds_out_util.m"
              {
#line 861 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, hlds__hlds_out__hlds_out_util__V_52_52);
              }
#line 861 "hlds_out_util.m"
              {
#line 861 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", hlds__hlds_out__hlds_out_util__V_50_50);
              }
#line 858 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 747 "hlds_out_util.m"
            {
#line 747 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 747 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 747 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName_14;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString1_21;
#line 747 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__SymNameString_22;
#line 747 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 751 "hlds_out_util.m"
#line 751 "hlds_out_util.m"
              switch (hlds__hlds_out__hlds_out_util__Qual_7) {
#line 751 "hlds_out_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 751 "hlds_out_util.m"
                case (MR_Integer) 1:
#line 752 "hlds_out_util.m"
                  {
#line 752 "hlds_out_util.m"
                    MR_String hlds__hlds_out__hlds_out_util__V_100_100;

#line 753 "hlds_out_util.m"
                    {
#line 753 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__V_100_100 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_out__hlds_out_util__SymName0_11);
                    }
#line 753 "hlds_out_util.m"
                    {
#line 753 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__SymName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 753 "hlds_out_util.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_14, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_100_100));
#line 753 "hlds_out_util.m"
                    }
#line 752 "hlds_out_util.m"
                  }
#line 751 "hlds_out_util.m"
                  break;
#line 751 "hlds_out_util.m"
                case (MR_Integer) 0:
#line 750 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__SymName_14 = hlds__hlds_out__hlds_out_util__SymName0_11;
#line 751 "hlds_out_util.m"
                  break;
#line 751 "hlds_out_util.m"
              }
#line 755 "hlds_out_util.m"
              {
#line 755 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__SymName_14);
              }
#line 756 "hlds_out_util.m"
              {
#line 756 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_util__SymNameString0_15, (MR_Char) 42);
              }
#line 767 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 765 "hlds_out_util.m"
                {
#line 766 "hlds_out_util.m"
                  MR_Box hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21;

#line 766 "hlds_out_util.m"
                  {
#line 766 "hlds_out_util.m"
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_2[2], hlds__hlds_out__hlds_out_util__SymNameString0_15, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
                  }
#line 766 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__SymNameString1_21 = ((MR_String) hlds__hlds_out__hlds_out_util__conv1_SymNameString1_21);
#line 765 "hlds_out_util.m"
                }
#line 767 "hlds_out_util.m"
              else
#line 768 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString1_21 = hlds__hlds_out__hlds_out_util__SymNameString0_15;
#line 770 "hlds_out_util.m"
              {
#line 770 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymNameString_22 = mercury__term_io__escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__SymNameString1_21);
              }
#line 774 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "hlds_out_util.m"
                {
#line 772 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 772 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;

#line 773 "hlds_out_util.m"
                  {
#line 773 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                  }
#line 773 "hlds_out_util.m"
                  {
#line 773 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_116_116);
                  }
#line 773 "hlds_out_util.m"
                  {
#line 773 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_114_114);
                  }
#line 772 "hlds_out_util.m"
                }
#line 774 "hlds_out_util.m"
              else
#line 775 "hlds_out_util.m"
                {
#line 775 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 779 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "hlds_out_util.m"
                    {
#line 777 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 777 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_113_113;

#line 778 "hlds_out_util.m"
                      {
#line 778 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_12);
                      }
#line 778 "hlds_out_util.m"
                      {
#line 778 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_113_113);
                      }
#line 778 "hlds_out_util.m"
                      {
#line 778 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_111_111);
                      }
#line 777 "hlds_out_util.m"
                    }
#line 779 "hlds_out_util.m"
                  else
#line 780 "hlds_out_util.m"
                    {
#line 780 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_26;
#line 780 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_107_107;
#line 780 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_109_109;

#line 781 "hlds_out_util.m"
                      {
#line 781 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ArgStr_26 = parse_tree__mercury_to_mercury__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_23);
                      }
#line 782 "hlds_out_util.m"
                      {
#line 782 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_109_109 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_26, (MR_String) ")");
                      }
#line 782 "hlds_out_util.m"
                      {
#line 782 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_109_109);
                      }
#line 782 "hlds_out_util.m"
                      {
#line 782 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SymNameString_22, hlds__hlds_out__hlds_out_util__V_107_107);
                      }
#line 780 "hlds_out_util.m"
                    }
#line 775 "hlds_out_util.m"
                }
#line 747 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 786 "hlds_out_util.m"
            {
#line 786 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 790 "hlds_out_util.m"
              if ((hlds__hlds_out__hlds_out_util__MaybeArgVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "hlds_out_util.m"
                {
#line 788 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_99_99;

#line 789 "hlds_out_util.m"
                  {
#line 789 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_99_99 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_126);
                  }
#line 789 "hlds_out_util.m"
                  {
#line 789 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_99_99);
                  }
#line 788 "hlds_out_util.m"
                }
#line 790 "hlds_out_util.m"
              else
#line 791 "hlds_out_util.m"
                {
#line 791 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__MaybeArgVars_9, (MR_Integer) 0)));

#line 795 "hlds_out_util.m"
                  if ((hlds__hlds_out__hlds_out_util__ArgVars_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "hlds_out_util.m"
                    {
#line 793 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_97_97;

#line 794 "hlds_out_util.m"
                      {
#line 794 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_97_97 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_126);
                      }
#line 794 "hlds_out_util.m"
                      {
#line 794 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", hlds__hlds_out__hlds_out_util__V_97_97);
                      }
#line 793 "hlds_out_util.m"
                    }
#line 795 "hlds_out_util.m"
                  else
#line 796 "hlds_out_util.m"
                    {
#line 796 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 796 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__ArgStr_120;

#line 797 "hlds_out_util.m"
                      {
#line 797 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__ArgStr_120 = parse_tree__mercury_to_mercury__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__ArgVars_122);
                      }
#line 798 "hlds_out_util.m"
                      {
#line 798 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ArgStr_120, (MR_String) "}");
                      }
#line 798 "hlds_out_util.m"
                      {
#line 798 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", hlds__hlds_out__hlds_out_util__V_94_94);
                      }
#line 796 "hlds_out_util.m"
                    }
#line 791 "hlds_out_util.m"
                }
#line 786 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 4:
#line 817 "hlds_out_util.m"
            {
#line 817 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredProcId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 817 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__PredId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 0)));
#line 817 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__PredProcId_34, (MR_Integer) 1)));
#line 817 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_85_85;
#line 817 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_86_86;
#line 817 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 817 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_89_89;
#line 817 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 820 "hlds_out_util.m"
              {
#line 820 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_86_86 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredId_36);
              }
#line 821 "hlds_out_util.m"
              {
#line 821 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcId_37);
              }
#line 821 "hlds_out_util.m"
              {
#line 821 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_89_89 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_90_90, (MR_String) ">");
              }
#line 821 "hlds_out_util.m"
              {
#line 821 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", hlds__hlds_out__hlds_out_util__V_89_89);
              }
#line 820 "hlds_out_util.m"
              {
#line 820 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_86_86, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 820 "hlds_out_util.m"
              {
#line 820 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", hlds__hlds_out__hlds_out_util__V_85_85);
              }
#line 817 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 5:
#line 802 "hlds_out_util.m"
            {
#line 802 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 803 "hlds_out_util.m"
              {
#line 803 "hlds_out_util.m"
                mercury__string__int_to_string_2_p_0(hlds__hlds_out__hlds_out_util__Int_29, &hlds__hlds_out__hlds_out_util__String_10);
              }
#line 802 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 6:
#line 805 "hlds_out_util.m"
            {
#line 805 "hlds_out_util.m"
              MR_Float hlds__hlds_out__hlds_out_util__Float_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 806 "hlds_out_util.m"
              {
#line 806 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__float_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Float_30);
              }
#line 805 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 7:
#line 808 "hlds_out_util.m"
            {
#line 808 "hlds_out_util.m"
              MR_Char hlds__hlds_out__hlds_out_util__CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 809 "hlds_out_util.m"
              {
#line 809 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__CharConst_31);
              }
#line 808 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 8:
#line 811 "hlds_out_util.m"
            {
#line 811 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__StringConst_32 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 812 "hlds_out_util.m"
              {
#line 812 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__term_io__quoted_string_1_f_0(hlds__hlds_out__hlds_out_util__StringConst_32);
              }
#line 811 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 9:
#line 814 "hlds_out_util.m"
            {
#line 814 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));

#line 815 "hlds_out_util.m"
              {
#line 815 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_33);
              }
#line 814 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 10:
#line 823 "hlds_out_util.m"
            {
#line 823 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 1)));
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Ctor_39 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 2)));
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_76_76;
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_78_78;
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_79_79;
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_81_81;
#line 823 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_82_82;
#line 823 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__Arity_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_8, (MR_Integer) 3)));

#line 825 "hlds_out_util.m"
              {
#line 825 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_75_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_38);
              }
#line 826 "hlds_out_util.m"
              {
#line 826 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_82_82 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_129);
              }
#line 826 "hlds_out_util.m"
              {
#line 826 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_82_82, (MR_String) ">");
              }
#line 826 "hlds_out_util.m"
              {
#line 826 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_util__V_81_81);
              }
#line 826 "hlds_out_util.m"
              {
#line 826 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_78_78 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Ctor_39, hlds__hlds_out__hlds_out_util__V_79_79);
              }
#line 825 "hlds_out_util.m"
              {
#line 825 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__V_78_78);
              }
#line 825 "hlds_out_util.m"
              {
#line 825 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_75_75, hlds__hlds_out__hlds_out_util__V_76_76);
              }
#line 825 "hlds_out_util.m"
              {
#line 825 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", hlds__hlds_out__hlds_out_util__V_74_74);
              }
#line 823 "hlds_out_util.m"
            }
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 11:
#line 829 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<base_typeclass_info>";
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 12:
#line 838 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<type_info_const>";
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 13:
#line 841 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<typeclass_info_const>";
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
          case (MR_Integer) 14:
#line 844 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__String_10 = (MR_String) "<ground_term_const>";
#line 747 "hlds_out_util.m"
            break;
#line 747 "hlds_out_util.m"
        }
#line 747 "hlds_out_util.m"
        break;
#line 747 "hlds_out_util.m"
    }
#line 747 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__String_10;
#line 747 "hlds_out_util.m"
  }
#line 158 "hlds_out_util.m"
}

#line 155 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_cons_id_and_vars_or_arity_6_p_0(
#line 155 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Qual_7,
#line 155 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 155 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_9,
#line 155 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__MaybeArgVars_10)
#line 155 "hlds_out_util.m"
{
#line 738 "hlds_out_util.m"
  {
#line 738 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 738 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_14_14;

#line 740 "hlds_out_util.m"
    {
#line 740 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_14_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(hlds__hlds_out__hlds_out_util__Qual_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__ConsId_9, hlds__hlds_out__hlds_out_util__MaybeArgVars_10);
    }
#line 739 "hlds_out_util.m"
    {
#line 739 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_14_14);
#line 739 "hlds_out_util.m"
      return;
    }
#line 738 "hlds_out_util.m"
  }
#line 155 "hlds_out_util.m"
}

#line 148 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
#line 148 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_7,
#line 148 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 148 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 148 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_10,
#line 148 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 148 "hlds_out_util.m"
{
#line 632 "hlds_out_util.m"
  while (MR_TRUE)
#line 632 "hlds_out_util.m"
    {
#line 632 "hlds_out_util.m"
      /* tailcall optimized into a loop */
#line 632 "hlds_out_util.m"
      {
#line 632 "hlds_out_util.m"
        MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 632 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Str_12;

#line 632 "hlds_out_util.m"
#line 632 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__ConsId_10)) {
#line 632 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 632 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 699 "hlds_out_util.m"
            {
#line 700 "hlds_out_util.m"
              {
#line 700 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[3], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
#line 699 "hlds_out_util.m"
            }
#line 632 "hlds_out_util.m"
            break;
#line 632 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 694 "hlds_out_util.m"
            {
#line 695 "hlds_out_util.m"
              {
#line 695 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[2], hlds__hlds_out__hlds_out_util__ArgVars_11);
              }
#line 694 "hlds_out_util.m"
            }
#line 632 "hlds_out_util.m"
            break;
#line 632 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 716 "hlds_out_util.m"
            {
#line 716 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcId_42;
#line 716 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_43;
#line 716 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_62_62;
#line 716 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 716 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_65_65;
#line 716 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_66_66;
#line 716 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_68_68;
#line 716 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_69_69;
#line 716 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)));
#line 716 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__PredId_146;

#line 717 "hlds_out_util.m"
              {
#line 717 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_62_62 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_145);
              }
#line 717 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__PredId_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 0)));
#line 717 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_62_62, (MR_Integer) 1)));
#line 718 "hlds_out_util.m"
              {
#line 718 "hlds_out_util.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_42, &hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 720 "hlds_out_util.m"
              {
#line 720 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_65_65 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_146);
              }
#line 721 "hlds_out_util.m"
              {
#line 721 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_69_69 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_43);
              }
#line 721 "hlds_out_util.m"
              {
#line 721 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_69_69, (MR_String) ")");
              }
#line 721 "hlds_out_util.m"
              {
#line 721 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_68_68);
              }
#line 721 "hlds_out_util.m"
              {
#line 721 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_65_65, hlds__hlds_out__hlds_out_util__V_66_66);
              }
#line 720 "hlds_out_util.m"
              {
#line 720 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", hlds__hlds_out__hlds_out_util__V_64_64);
              }
#line 716 "hlds_out_util.m"
            }
#line 632 "hlds_out_util.m"
            break;
#line 632 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 632 "hlds_out_util.m"
#line 632 "hlds_out_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 0)))) {
#line 632 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 632 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 723 "hlds_out_util.m"
                {
#line 723 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_53_53;
#line 723 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_55_55;
#line 723 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_56_56;
#line 723 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_57_57;
#line 723 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_59_59;
#line 723 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_60_60;
#line 723 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 723 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_148;
#line 723 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_149;
#line 723 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_150;

#line 724 "hlds_out_util.m"
                  {
#line 724 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_53_53 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_147);
                  }
#line 724 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 724 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ProcId_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 725 "hlds_out_util.m"
                  {
#line 725 "hlds_out_util.m"
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_149, &hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                  }
#line 727 "hlds_out_util.m"
                  {
#line 727 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_56_56 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_148);
                  }
#line 728 "hlds_out_util.m"
                  {
#line 728 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_60_60 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_150);
                  }
#line 728 "hlds_out_util.m"
                  {
#line 728 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_60_60, (MR_String) "))");
                  }
#line 728 "hlds_out_util.m"
                  {
#line 728 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_59_59);
                  }
#line 728 "hlds_out_util.m"
                  {
#line 728 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_56_56, hlds__hlds_out__hlds_out_util__V_57_57);
                  }
#line 727 "hlds_out_util.m"
                  {
#line 727 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", hlds__hlds_out__hlds_out_util__V_55_55);
                  }
#line 723 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 730 "hlds_out_util.m"
                {
#line 730 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_44_44;
#line 730 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_46_46;
#line 730 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_47_47;
#line 730 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_48_48;
#line 730 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_50_50;
#line 730 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_51_51;
#line 730 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 730 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_152;
#line 730 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_153;
#line 730 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ProcIdInt_154;

#line 731 "hlds_out_util.m"
                  {
#line 731 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_44_44 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_151);
                  }
#line 731 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 0)));
#line 731 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__ProcId_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_44_44, (MR_Integer) 1)));
#line 732 "hlds_out_util.m"
                  {
#line 732 "hlds_out_util.m"
                    hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__ProcId_153, &hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                  }
#line 734 "hlds_out_util.m"
                  {
#line 734 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_47_47 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_152);
                  }
#line 735 "hlds_out_util.m"
                  {
#line 735 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ProcIdInt_154);
                  }
#line 735 "hlds_out_util.m"
                  {
#line 735 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_51_51, (MR_String) "))");
                  }
#line 735 "hlds_out_util.m"
                  {
#line 735 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) " (mode ", hlds__hlds_out__hlds_out_util__V_50_50);
                  }
#line 735 "hlds_out_util.m"
                  {
#line 735 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_47_47, hlds__hlds_out__hlds_out_util__V_48_48);
                  }
#line 734 "hlds_out_util.m"
                  {
#line 734 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", hlds__hlds_out__hlds_out_util__V_46_46);
                  }
#line 730 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 632 "hlds_out_util.m"
                {
#line 632 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 632 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 632 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

#line 637 "hlds_out_util.m"
                  if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 634 "hlds_out_util.m"
                    {
#line 634 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));
#line 634 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 1)));
#line 634 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_137_137;

#line 636 "hlds_out_util.m"
                      {
#line 636 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 636 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_17));
#line 636 "hlds_out_util.m"
                      }
#line 635 "hlds_out_util.m"
                      {
#line 635 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__Module_16, hlds__hlds_out__hlds_out_util__V_137_137, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
#line 634 "hlds_out_util.m"
                    }
#line 637 "hlds_out_util.m"
                  else
#line 638 "hlds_out_util.m"
                    {
#line 638 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_136_136;
#line 638 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__SymName_13, (MR_Integer) 0)));

#line 640 "hlds_out_util.m"
                      {
#line 640 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 640 "hlds_out_util.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_136_136, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_138));
#line 640 "hlds_out_util.m"
                      }
#line 639 "hlds_out_util.m"
                      {
#line 639 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__V_136_136, hlds__hlds_out__hlds_out_util__ArgVars_11);
                      }
#line 638 "hlds_out_util.m"
                    }
#line 632 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 643 "hlds_out_util.m"
                {
#line 644 "hlds_out_util.m"
                  {
#line 644 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, (MR_Integer) 0, (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[1], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 643 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 4:
#line 671 "hlds_out_util.m"
                {
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredId_25;
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredInfo_27;
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredModule_28;
#line 671 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__PredName_29;
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredSymName_30;
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredConsId_31;
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_121_121;
#line 671 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_122_122;
#line 671 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_123_123;
#line 672 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_26_26;

#line 672 "hlds_out_util.m"
                  {
#line 672 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_121_121 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_out__hlds_out_util__ShroudedPredProcId_23);
                  }
#line 672 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 0)));
#line 672 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_121_121, (MR_Integer) 1)));
#line 673 "hlds_out_util.m"
                  {
#line 673 "hlds_out_util.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__PredId_25, &hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 674 "hlds_out_util.m"
                  {
#line 674 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 675 "hlds_out_util.m"
                  {
#line 675 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_27);
                  }
#line 676 "hlds_out_util.m"
                  {
#line 676 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredModule_28));
#line 676 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__PredSymName_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredName_29));
#line 676 "hlds_out_util.m"
                  }
#line 677 "hlds_out_util.m"
                  {
#line 677 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_122_122 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_1[0], hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 678 "hlds_out_util.m"
                  {
#line 678 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_123_123 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 677 "hlds_out_util.m"
                  {
#line 677 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__PredConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 677 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 677 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__PredSymName_30));
#line 677 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_122_122));
#line 677 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__PredConsId_31, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_123_123));
#line 677 "hlds_out_util.m"
                  }
#line 679 "hlds_out_util.m"
                  /* direct tailcall eliminated */
#line 679 "hlds_out_util.m"
                  {
#line 679 "hlds_out_util.m"
                    MR_Word hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10 = hlds__hlds_out__hlds_out_util__PredConsId_31;

#line 679 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__ConsId_10 = hlds__hlds_out__hlds_out_util__ConsId__tmp_copy_10;
#line 679 "hlds_out_util.m"
                  }
#line 679 "hlds_out_util.m"
                  continue;
#line 671 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 5:
#line 647 "hlds_out_util.m"
                {
#line 647 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 647 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_131_131;

#line 649 "hlds_out_util.m"
                  {
#line 649 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_131_131, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Int_19));
#line 649 "hlds_out_util.m"
                  }
#line 648 "hlds_out_util.m"
                  {
#line 648 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_131_131, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 647 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 6:
#line 651 "hlds_out_util.m"
                {
#line 651 "hlds_out_util.m"
                  MR_Float hlds__hlds_out__hlds_out_util__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 651 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_130_130;

#line 653 "hlds_out_util.m"
                  {
#line 653 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 653 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_130_130, 1) = MR_box_float(hlds__hlds_out__hlds_out_util__Float_20);
#line 653 "hlds_out_util.m"
                  }
#line 652 "hlds_out_util.m"
                  {
#line 652 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_130_130, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 651 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 7:
#line 655 "hlds_out_util.m"
                {
#line 655 "hlds_out_util.m"
                  MR_Char hlds__hlds_out__hlds_out_util__Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 655 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_127_127;
#line 655 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_128_128;

#line 662 "hlds_out_util.m"
                  {
#line 662 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_128_128 = mercury__term_io__quoted_char_1_f_0(hlds__hlds_out__hlds_out_util__Char_21);
                  }
#line 662 "hlds_out_util.m"
                  {
#line 662 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_127_127 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_128_128, (MR_String) ")");
                  }
#line 662 "hlds_out_util.m"
                  {
#line 662 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_out__hlds_out_util__V_127_127);
                  }
#line 655 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 8:
#line 664 "hlds_out_util.m"
                {
#line 664 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 664 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_125_125;

#line 666 "hlds_out_util.m"
                  {
#line 666 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 666 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__V_125_125, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__String_22));
#line 666 "hlds_out_util.m"
                  }
#line 665 "hlds_out_util.m"
                  {
#line 665 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__V_125_125, hlds__hlds_out__hlds_out_util__ArgVars_11);
                  }
#line 664 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 9:
#line 668 "hlds_out_util.m"
                {
#line 668 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Name_139 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));

#line 669 "hlds_out_util.m"
                  {
#line 669 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044", hlds__hlds_out__hlds_out_util__Name_139);
                  }
#line 668 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 10:
#line 682 "hlds_out_util.m"
                {
#line 682 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_111_111;
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_113_113;
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_116_116;
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_118_118;
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_119_119;
#line 682 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 682 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Name_141 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));

#line 684 "hlds_out_util.m"
                  {
#line 684 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_112_112 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_140);
                  }
#line 685 "hlds_out_util.m"
                  {
#line 685 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_119_119 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_32);
                  }
#line 685 "hlds_out_util.m"
                  {
#line 685 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_119_119, (MR_String) ")");
                  }
#line 685 "hlds_out_util.m"
                  {
#line 685 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_118_118);
                  }
#line 685 "hlds_out_util.m"
                  {
#line 685 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_115_115 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Name_141, hlds__hlds_out__hlds_out_util__V_116_116);
                  }
#line 685 "hlds_out_util.m"
                  {
#line 685 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "\", \"", hlds__hlds_out__hlds_out_util__V_115_115);
                  }
#line 685 "hlds_out_util.m"
                  {
#line 685 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_112_112, hlds__hlds_out__hlds_out_util__V_113_113);
                  }
#line 684 "hlds_out_util.m"
                  {
#line 684 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(\"", hlds__hlds_out__hlds_out_util__V_111_111);
                  }
#line 682 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 11:
#line 687 "hlds_out_util.m"
                {
#line 687 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__ClassId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 4)));
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_94_94;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_96_96;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_98_98;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_100_100;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_101_101;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_106_106;
#line 687 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_108_108;
#line 687 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Module_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 687 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__Name_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 0)));
#line 687 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_33, (MR_Integer) 1)));
#line 687 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 3)));

#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_95_95 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Module_142);
                  }
#line 691 "hlds_out_util.m"
                  {
#line 691 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_101_101 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(hlds__hlds_out__hlds_out_util__Name_143);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_105_105 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Arity_144);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Instance_35, (MR_String) ")");
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_106_106 = mercury__string__f_43_43_2_f_0((MR_String) "), ", hlds__hlds_out__hlds_out_util__V_108_108);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_106_106);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_104_104);
                  }
#line 692 "hlds_out_util.m"
                  {
#line 692 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_100_100 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_102_102);
                  }
#line 691 "hlds_out_util.m"
                  {
#line 691 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", hlds__hlds_out__hlds_out_util__V_100_100);
                  }
#line 691 "hlds_out_util.m"
                  {
#line 691 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", hlds__hlds_out__hlds_out_util__V_98_98);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, hlds__hlds_out__hlds_out_util__V_96_96);
                  }
#line 690 "hlds_out_util.m"
                  {
#line 690 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(\"", hlds__hlds_out__hlds_out_util__V_94_94);
                  }
#line 687 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 12:
#line 704 "hlds_out_util.m"
                {
#line 704 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TIConstNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_84_84;
#line 704 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_85_85;

#line 705 "hlds_out_util.m"
                  {
#line 705 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_85_85 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TIConstNum_37);
                  }
#line 705 "hlds_out_util.m"
                  {
#line 705 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_85_85, (MR_String) ")");
                  }
#line 705 "hlds_out_util.m"
                  {
#line 705 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", hlds__hlds_out__hlds_out_util__V_84_84);
                  }
#line 704 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 13:
#line 707 "hlds_out_util.m"
                {
#line 707 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TCIConstNum_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 707 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_80_80;
#line 707 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_81_81;

#line 708 "hlds_out_util.m"
                  {
#line 708 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_81_81 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TCIConstNum_38);
                  }
#line 708 "hlds_out_util.m"
                  {
#line 708 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_81_81, (MR_String) ")");
                  }
#line 708 "hlds_out_util.m"
                  {
#line 708 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", hlds__hlds_out__hlds_out_util__V_80_80);
                  }
#line 707 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
              case (MR_Integer) 14:
#line 710 "hlds_out_util.m"
                {
#line 710 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__ConstNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 1)));
#line 710 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SubConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__ConsId_10, (MR_Integer) 2)));
#line 710 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__SubStr_41;
#line 710 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_73_73;
#line 710 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_74_74;
#line 710 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_75_75;
#line 710 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_77_77;

#line 711 "hlds_out_util.m"
                  {
#line 711 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__SubStr_41 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_7, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__SubConsId_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 713 "hlds_out_util.m"
                  {
#line 713 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_74_74 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ConstNum_39);
                  }
#line 714 "hlds_out_util.m"
                  {
#line 714 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__SubStr_41, (MR_String) ")");
                  }
#line 713 "hlds_out_util.m"
                  {
#line 713 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_util__V_77_77);
                  }
#line 713 "hlds_out_util.m"
                  {
#line 713 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_73_73 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_74_74, hlds__hlds_out__hlds_out_util__V_75_75);
                  }
#line 713 "hlds_out_util.m"
                  {
#line 713 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", hlds__hlds_out__hlds_out_util__V_73_73);
                  }
#line 710 "hlds_out_util.m"
                }
#line 632 "hlds_out_util.m"
                break;
#line 632 "hlds_out_util.m"
            }
#line 632 "hlds_out_util.m"
            break;
#line 632 "hlds_out_util.m"
        }
#line 632 "hlds_out_util.m"
        return hlds__hlds_out__hlds_out_util__Str_12;
#line 632 "hlds_out_util.m"
      }
#line 632 "hlds_out_util.m"
      break;
#line 632 "hlds_out_util.m"
    }
#line 148 "hlds_out_util.m"
}

#line 145 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(
#line 145 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_8,
#line 145 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_9,
#line 145 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_10,
#line 145 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ConsId_11,
#line 145 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 145 "hlds_out_util.m"
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
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_8, hlds__hlds_out__hlds_out_util__VarSet_9, hlds__hlds_out__hlds_out_util__VarNamePrint_10, hlds__hlds_out__hlds_out_util__ConsId_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
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
#line 145 "hlds_out_util.m"
}

#line 139 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 139 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_11)
#line 139 "hlds_out_util.m"
{
#line 616 "hlds_out_util.m"
  {
#line 616 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 616 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 616 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 616 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_14;
#line 616 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;
#line 616 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__TermStr_16;
#line 616 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_18_18;

#line 617 "hlds_out_util.m"
    {
#line 617 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
#line 618 "hlds_out_util.m"
    {
#line 618 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_14);
    }
#line 619 "hlds_out_util.m"
    {
#line 619 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 619 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 619 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_11));
#line 619 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_14));
#line 619 "hlds_out_util.m"
    }
#line 620 "hlds_out_util.m"
    {
#line 620 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__TermStr_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 622 "hlds_out_util.m"
    {
#line 622 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__TermStr_16);
    }
#line 622 "hlds_out_util.m"
    {
#line 622 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_18_18);
    }
#line 616 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 616 "hlds_out_util.m"
  }
#line 139 "hlds_out_util.m"
}

#line 136 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_p_0(
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 136 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_12)
#line 136 "hlds_out_util.m"
{
#line 611 "hlds_out_util.m"
  {
#line 611 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 611 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgTerms_12);
    }
#line 612 "hlds_out_util.m"
    {
#line 612 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 612 "hlds_out_util.m"
      return;
    }
#line 611 "hlds_out_util.m"
  }
#line 136 "hlds_out_util.m"
}

#line 133 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_9,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 133 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 133 "hlds_out_util.m"
{
#line 604 "hlds_out_util.m"
  {
#line 604 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 604 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 604 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 604 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__ModuleNameStr_13;
#line 604 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__FunctorStr_14;
#line 604 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 604 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 604 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 604 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 605 "hlds_out_util.m"
    {
#line 605 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__ModuleNameStr_13 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ModuleName_9);
    }
#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5023 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 594 "hlds_out_util.m"
    }
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__FunctorStr_14 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_util__FunctorStr_14);
    }
#line 608 "hlds_out_util.m"
    {
#line 608 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ModuleNameStr_13, hlds__hlds_out__hlds_out_util__V_16_16);
    }
#line 604 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 604 "hlds_out_util.m"
  }
#line 133 "hlds_out_util.m"
}

#line 131 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleName_10,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 131 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 131 "hlds_out_util.m"
{
#line 599 "hlds_out_util.m"
  {
#line 599 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 599 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;

#line 600 "hlds_out_util.m"
    {
#line 600 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__ModuleName_10, hlds__hlds_out__hlds_out_util__Functor_11, hlds__hlds_out__hlds_out_util__ArgVars_12);
    }
#line 600 "hlds_out_util.m"
    {
#line 600 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 600 "hlds_out_util.m"
      return;
    }
#line 599 "hlds_out_util.m"
  }
#line 131 "hlds_out_util.m"
}

#line 128 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_9,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_10,
#line 128 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_11)
#line 128 "hlds_out_util.m"
{
#line 591 "hlds_out_util.m"
  {
#line 591 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 591 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_12;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_13;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_14;
#line 591 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_15;

#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_13);
    }
#line 5138 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__ArgVars_11, &hlds__hlds_out__hlds_out_util__ArgTerms_14);
    }
#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_10));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_14));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_13));
#line 594 "hlds_out_util.m"
    }
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_12 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, hlds__hlds_out__hlds_out_util__NextToGraphicToken_9, hlds__hlds_out__hlds_out_util__Term_15);
    }
#line 591 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_12;
#line 591 "hlds_out_util.m"
  }
#line 128 "hlds_out_util.m"
}

#line 126 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_8,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_9,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__NextToGraphicToken_10,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_11,
#line 126 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_12)
#line 126 "hlds_out_util.m"
{
#line 586 "hlds_out_util.m"
  {
#line 586 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 586 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27;
#line 586 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_16_16;
#line 586 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_24;
#line 586 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_25;
#line 586 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_26;

#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_24);
    }
#line 5204 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__ArgVars_12, &hlds__hlds_out__hlds_out_util__ArgTerms_25);
    }
#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_11));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_25));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_26, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_24));
#line 594 "hlds_out_util.m"
    }
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_16_16 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_27, hlds__hlds_out__hlds_out_util__VarSet_8, hlds__hlds_out__hlds_out_util__VarNamePrint_9, hlds__hlds_out__hlds_out_util__NextToGraphicToken_10, hlds__hlds_out__hlds_out_util__Term_26);
    }
#line 587 "hlds_out_util.m"
    {
#line 587 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_16_16);
#line 587 "hlds_out_util.m"
      return;
    }
#line 586 "hlds_out_util.m"
  }
#line 126 "hlds_out_util.m"
}

#line 123 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_6,
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_7,
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_8,
#line 123 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_9)
#line 123 "hlds_out_util.m"
{
#line 581 "hlds_out_util.m"
  {
#line 581 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 581 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 581 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20;
#line 581 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_17;
#line 581 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_18;
#line 581 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_19;

#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_17);
    }
#line 5273 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__ArgVars_9, &hlds__hlds_out__hlds_out_util__ArgTerms_18);
    }
#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_8));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_18));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_17));
#line 594 "hlds_out_util.m"
    }
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__HeadVar__5_5 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_20, hlds__hlds_out__hlds_out_util__VarSet_6, hlds__hlds_out__hlds_out_util__VarNamePrint_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_19);
    }
#line 581 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__5_5;
#line 581 "hlds_out_util.m"
  }
#line 123 "hlds_out_util.m"
}

#line 121 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_functor_6_p_0(
#line 121 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarSet_7,
#line 121 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__VarNamePrint_8,
#line 121 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Functor_9,
#line 121 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ArgVars_10)
#line 121 "hlds_out_util.m"
{
#line 577 "hlds_out_util.m"
  {
#line 577 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 577 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35;
#line 577 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_24_24;
#line 577 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Context_32;
#line 577 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__ArgTerms_33;
#line 577 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Term_34;

#line 592 "hlds_out_util.m"
    {
#line 592 "hlds_out_util.m"
      mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_util__Context_32);
    }
#line 5337 "hlds.hlds_out.hlds_out_util.c"
    hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 593 "hlds_out_util.m"
    {
#line 593 "hlds_out_util.m"
      mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__ArgVars_10, &hlds__hlds_out__hlds_out_util__ArgTerms_33);
    }
#line 594 "hlds_out_util.m"
    {
#line 594 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Term_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Functor_9));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ArgTerms_33));
#line 594 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Term_34, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Context_32));
#line 594 "hlds_out_util.m"
    }
#line 595 "hlds_out_util.m"
    {
#line 595 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_24_24 = parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_f_0(hlds__hlds_out__hlds_out_util__TypeCtorInfo_16_35, hlds__hlds_out__hlds_out_util__VarSet_7, hlds__hlds_out__hlds_out_util__VarNamePrint_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_util__Term_34);
    }
#line 587 "hlds_out_util.m"
    {
#line 587 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_24_24);
#line 587 "hlds_out_util.m"
      return;
    }
#line 577 "hlds_out_util.m"
  }
#line 121 "hlds_out_util.m"
}

#line 114 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(
#line 114 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__CallId_5,
#line 114 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ArgNum_6,
#line 114 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredMarkers_7)
#line 114 "hlds_out_util.m"
{
#line 491 "hlds_out_util.m"
  {
#line 491 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 <= (MR_Integer) 0);
#line 491 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_8;
#line 491 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str1_9;
#line 491 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str2_13;
#line 491 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_19_19;

#line 502 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 501 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str1_9 = (MR_String) "";
#line 502 "hlds_out_util.m"
    else
#line 503 "hlds_out_util.m"
      {
#line 503 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_15_15;

#line 532 "hlds_out_util.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 542 "hlds_out_util.m"
          {
#line 542 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 563 "hlds_out_util.m"
#line 563 "hlds_out_util.m"
            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_26)) {
#line 563 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 563 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 544 "hlds_out_util.m"
                {
#line 544 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 544 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 1)));
#line 544 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util___Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__GenericCallId_26, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 546 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_56 == (MR_Integer) 1);
#line 546 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 547 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == hlds__hlds_out__hlds_out_util__Arity_57);
#line 550 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 549 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 550 "hlds_out_util.m"
                  else
#line 553 "hlds_out_util.m"
                    {
#line 553 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Main_28;
#line 553 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__PredOrFuncStr_29;
#line 553 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__Expl_30;
#line 553 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_38_38;
#line 553 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_49_49;
#line 553 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_51_51;

#line 553 "hlds_out_util.m"
                      {
#line 553 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_38_38 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                      }
#line 553 "hlds_out_util.m"
                      {
#line 553 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__Main_28 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_38_38);
                      }
#line 554 "hlds_out_util.m"
                      {
#line 554 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_56);
                      }
#line 555 "hlds_out_util.m"
                      hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__ArgNum_6 == (MR_Integer) 1);
#line 557 "hlds_out_util.m"
                      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 556 "hlds_out_util.m"
                        {
#line 556 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_40_40;

#line 556 "hlds_out_util.m"
                          {
#line 556 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_40_40 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__PredOrFuncStr_29, (MR_String) " term");
                          }
#line 556 "hlds_out_util.m"
                          {
#line 556 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "the ", hlds__hlds_out__hlds_out_util__V_40_40);
                          }
#line 556 "hlds_out_util.m"
                        }
#line 557 "hlds_out_util.m"
                      else
#line 558 "hlds_out_util.m"
                        {
#line 558 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_43_43;
#line 558 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_44_44;
#line 558 "hlds_out_util.m"
                          MR_Integer hlds__hlds_out__hlds_out_util__V_45_45 = (hlds__hlds_out__hlds_out_util__ArgNum_6 - (MR_Integer) 1);
#line 558 "hlds_out_util.m"
                          MR_String hlds__hlds_out__hlds_out_util__V_47_47;

#line 558 "hlds_out_util.m"
                          {
#line 558 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_45_45);
                          }
#line 559 "hlds_out_util.m"
                          {
#line 559 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " of the called ", hlds__hlds_out__hlds_out_util__PredOrFuncStr_29);
                          }
#line 559 "hlds_out_util.m"
                          {
#line 559 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__V_43_43 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_44_44, hlds__hlds_out__hlds_out_util__V_47_47);
                          }
#line 558 "hlds_out_util.m"
                          {
#line 558 "hlds_out_util.m"
                            hlds__hlds_out__hlds_out_util__Expl_30 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_43_43);
                          }
#line 558 "hlds_out_util.m"
                        }
#line 561 "hlds_out_util.m"
                      {
#line 561 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_51_51 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Expl_30, (MR_String) ")");
                      }
#line 561 "hlds_out_util.m"
                      {
#line 561 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) " (i.e. ", hlds__hlds_out__hlds_out_util__V_51_51);
                      }
#line 561 "hlds_out_util.m"
                      {
#line 561 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Main_28, hlds__hlds_out__hlds_out_util__V_49_49);
                      }
#line 553 "hlds_out_util.m"
                    }
#line 544 "hlds_out_util.m"
                }
#line 563 "hlds_out_util.m"
                break;
#line 563 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 563 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 563 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 567 "hlds_out_util.m"
                {
#line 567 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__V_36_36;

#line 568 "hlds_out_util.m"
                  {
#line 568 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                  }
#line 568 "hlds_out_util.m"
                  {
#line 568 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_36_36);
                  }
#line 567 "hlds_out_util.m"
                }
#line 563 "hlds_out_util.m"
                break;
#line 563 "hlds_out_util.m"
            }
#line 542 "hlds_out_util.m"
          }
#line 532 "hlds_out_util.m"
        else
#line 532 "hlds_out_util.m"
          {
#line 532 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_23;
#line 532 "hlds_out_util.m"
            MR_Integer hlds__hlds_out__hlds_out_util__Arity_25;
#line 532 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 532 "hlds_out_util.m"
            MR_Word hlds__hlds_out__hlds_out_util__V_24_24;

#line 532 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 0)));
#line 532 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 1)));
#line 532 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_53_53, (MR_Integer) 2)));
#line 534 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__PredOrFunc_23 == (MR_Integer) 1);
#line 534 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 535 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__Arity_25 == hlds__hlds_out__hlds_out_util__ArgNum_6);
#line 538 "hlds_out_util.m"
            if (hlds__hlds_out__hlds_out_util__succeeded)
#line 537 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_15_15 = (MR_String) "the return value";
#line 538 "hlds_out_util.m"
            else
#line 539 "hlds_out_util.m"
              {
#line 539 "hlds_out_util.m"
                MR_String hlds__hlds_out__hlds_out_util__V_55_55;

#line 539 "hlds_out_util.m"
                {
#line 539 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_55_55 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ArgNum_6);
                }
#line 539 "hlds_out_util.m"
                {
#line 539 "hlds_out_util.m"
                  hlds__hlds_out__hlds_out_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "argument ", hlds__hlds_out__hlds_out_util__V_55_55);
                }
#line 539 "hlds_out_util.m"
              }
#line 532 "hlds_out_util.m"
          }
#line 503 "hlds_out_util.m"
        {
#line 503 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str1_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_15_15, (MR_String) " of ");
        }
#line 503 "hlds_out_util.m"
      }
#line 511 "hlds_out_util.m"
    {
#line 511 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_10;
#line 512 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_11_11;
#line 512 "hlds_out_util.m"
      MR_Word hlds__hlds_out__hlds_out_util__V_12_12;

#line 511 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1)));
#line 511 "hlds_out_util.m"
      if (hlds__hlds_out__hlds_out_util__succeeded)
#line 511 "hlds_out_util.m"
        {
#line 511 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__GenericCallId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));
#line 512 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__GenericCallId_10)) == (MR_mktag((MR_Integer) 1)));
#line 512 "hlds_out_util.m"
          if (hlds__hlds_out__hlds_out_util__succeeded)
#line 512 "hlds_out_util.m"
            {
#line 512 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 0)));
#line 512 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__GenericCallId_10, (MR_Integer) 1)));
#line 512 "hlds_out_util.m"
            }
#line 512 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = !(hlds__hlds_out__hlds_out_util__succeeded);
#line 511 "hlds_out_util.m"
        }
#line 511 "hlds_out_util.m"
    }
#line 513 "hlds_out_util.m"
    if (!(hlds__hlds_out__hlds_out_util__succeeded))
#line 519 "hlds_out_util.m"
      {
#line 519 "hlds_out_util.m"
        {
#line 519 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_out__hlds_out_util__PredMarkers_7, (MR_Integer) 11);
        }
#line 519 "hlds_out_util.m"
      }
#line 523 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 522 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Str2_13 = hlds__hlds_out__hlds_out_util__Str1_9;
#line 523 "hlds_out_util.m"
    else
#line 524 "hlds_out_util.m"
      {
#line 524 "hlds_out_util.m"
        {
#line 524 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Str2_13 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str1_9, (MR_String) "call to ");
        }
#line 524 "hlds_out_util.m"
      }
#line 471 "hlds_out_util.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__CallId_5)) == (MR_mktag((MR_Integer) 1))))
#line 473 "hlds_out_util.m"
      {
#line 473 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__GenericCallId_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 474 "hlds_out_util.m"
        {
#line 474 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_63);
        }
#line 473 "hlds_out_util.m"
      }
#line 471 "hlds_out_util.m"
    else
#line 471 "hlds_out_util.m"
      {
#line 471 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredCallId_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__CallId_5, (MR_Integer) 0)));

#line 472 "hlds_out_util.m"
        {
#line 472 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_19_19 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredCallId_62);
        }
#line 471 "hlds_out_util.m"
      }
#line 526 "hlds_out_util.m"
    {
#line 526 "hlds_out_util.m"
      return hlds__hlds_out__hlds_out_util__Str_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Str2_13, hlds__hlds_out__hlds_out_util__V_19_19);
    }
#line 491 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_8;
#line 491 "hlds_out_util.m"
  }
#line 114 "hlds_out_util.m"
}

#line 107 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
#line 107 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 107 "hlds_out_util.m"
{
#line 486 "hlds_out_util.m"
  {
#line 486 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 486 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[4 + hlds__hlds_out__hlds_out_util__HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;

#line 486 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 486 "hlds_out_util.m"
  }
#line 107 "hlds_out_util.m"
}

#line 105 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(
#line 105 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 105 "hlds_out_util.m"
{
#line 476 "hlds_out_util.m"
  {
#line 476 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 476 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__HeadVar__2_2;

#line 476 "hlds_out_util.m"
#line 476 "hlds_out_util.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__HeadVar__1_1)) {
#line 476 "hlds_out_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 476 "hlds_out_util.m"
      case (MR_Integer) 0:
#line 476 "hlds_out_util.m"
        {
#line 476 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__Purity_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 476 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 476 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_6_6;
#line 476 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_7_7;
#line 476 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_9_9;
#line 476 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__V_10_10;
#line 476 "hlds_out_util.m"
          MR_Integer hlds__hlds_out__hlds_out_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));

#line 477 "hlds_out_util.m"
          {
#line 477 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_6_6 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(hlds__hlds_out__hlds_out_util__Purity_3);
          }
#line 478 "hlds_out_util.m"
          {
#line 478 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_10_10 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_4);
          }
#line 478 "hlds_out_util.m"
          {
#line 478 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_10_10, (MR_String) " call");
          }
#line 478 "hlds_out_util.m"
          {
#line 478 "hlds_out_util.m"
            hlds__hlds_out__hlds_out_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "higher-order ", hlds__hlds_out__hlds_out_util__V_9_9);
          }
#line 477 "hlds_out_util.m"
          {
#line 477 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_6_6, hlds__hlds_out__hlds_out_util__V_7_7);
          }
#line 476 "hlds_out_util.m"
        }
#line 476 "hlds_out_util.m"
        break;
#line 476 "hlds_out_util.m"
      case (MR_Integer) 1:
#line 479 "hlds_out_util.m"
        {
#line 479 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__MethodId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 1)));
#line 479 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util___ClassId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 480 "hlds_out_util.m"
          {
#line 480 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__MethodId_13);
          }
#line 479 "hlds_out_util.m"
        }
#line 476 "hlds_out_util.m"
        break;
#line 476 "hlds_out_util.m"
      case (MR_Integer) 2:
#line 481 "hlds_out_util.m"
        {
#line 481 "hlds_out_util.m"
          MR_String hlds__hlds_out__hlds_out_util__EventName_14 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 482 "hlds_out_util.m"
          {
#line 482 "hlds_out_util.m"
            return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_out__hlds_out_util__EventName_14);
          }
#line 481 "hlds_out_util.m"
        }
#line 476 "hlds_out_util.m"
        break;
#line 476 "hlds_out_util.m"
      case (MR_Integer) 3:
#line 483 "hlds_out_util.m"
        {
#line 483 "hlds_out_util.m"
          MR_Word hlds__hlds_out__hlds_out_util__CastType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__HeadVar__1_1, (MR_Integer) 0)));

#line 486 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_4[0 + hlds__hlds_out__hlds_out_util__CastType_16]))->hlds__hlds_out__hlds_out_util__vector_common_type_4_0__vct_4_f_0;
#line 483 "hlds_out_util.m"
        }
#line 476 "hlds_out_util.m"
        break;
#line 476 "hlds_out_util.m"
    }
#line 476 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__HeadVar__2_2;
#line 476 "hlds_out_util.m"
  }
#line 105 "hlds_out_util.m"
}

#line 103 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(
#line 103 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__1_1)
#line 103 "hlds_out_util.m"
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

#line 474 "hlds_out_util.m"
        {
#line 474 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__HeadVar__2_2 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__GenericCallId_4);
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
#line 103 "hlds_out_util.m"
}

#line 97 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(
#line 97 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_0_12,
#line 97 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_First_13,
#line 97 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_7,
#line 97 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_14,
#line 97 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_15)
#line 97 "hlds_out_util.m"
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
#line 97 "hlds_out_util.m"
}

#line 83 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(
#line 83 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__UnifyContext_4,
#line 83 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_0_7,
#line 83 "hlds_out_util.m"
  MR_Word * hlds__hlds_out__hlds_out_util__STATE_VARIABLE_Pieces_8)
#line 83 "hlds_out_util.m"
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
#line 83 "hlds_out_util.m"
}

#line 74 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(
#line 74 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 74 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6,
#line 74 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_7)
#line 74 "hlds_out_util.m"
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
#line 74 "hlds_out_util.m"
}

#line 72 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(
#line 72 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_6,
#line 72 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_7,
#line 72 "hlds_out_util.m"
  MR_Integer hlds__hlds_out__hlds_out_util__ProcId_8)
#line 72 "hlds_out_util.m"
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
#line 72 "hlds_out_util.m"
}

#line 70 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(
#line 70 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 70 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 70 "hlds_out_util.m"
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
#line 70 "hlds_out_util.m"
}

#line 68 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(
#line 68 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 68 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__HeadVar__2_2)
#line 68 "hlds_out_util.m"
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
#line 68 "hlds_out_util.m"
}

#line 66 "hlds_out_util.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(
#line 66 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_4,
#line 66 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_5)
#line 66 "hlds_out_util.m"
{
#line 233 "hlds_out_util.m"
  {
#line 233 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 233 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__Str_6;
#line 233 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredTable_7;
#line 311 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__PredInfo_8;
#line 235 "hlds_out_util.m"
    MR_Box hlds__hlds_out__hlds_out_util__conv0_PredInfo_8;

#line 234 "hlds_out_util.m"
    {
#line 234 "hlds_out_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_util__ModuleInfo_4, &hlds__hlds_out__hlds_out_util__PredTable_7);
    }
#line 235 "hlds_out_util.m"
    {
#line 235 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_util__PredTable_7, ((MR_Box) (hlds__hlds_out__hlds_out_util__PredId_5)), &hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
    }
#line 235 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 235 "hlds_out_util.m"
      {
#line 235 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__PredInfo_8 = ((MR_Word) hlds__hlds_out__hlds_out_util__conv0_PredInfo_8);
#line 235 "hlds_out_util.m"
        hlds__hlds_out__hlds_out_util__succeeded = MR_TRUE;
#line 235 "hlds_out_util.m"
      }
#line 311 "hlds_out_util.m"
    if (hlds__hlds_out__hlds_out_util__succeeded)
#line 236 "hlds_out_util.m"
      {
#line 236 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Module_9;
#line 236 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__Name_10;
#line 236 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__Arity_11;
#line 236 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__PredOrFunc_12;
#line 236 "hlds_out_util.m"
        MR_Word hlds__hlds_out__hlds_out_util__Origin_13;

#line 236 "hlds_out_util.m"
        {
#line 236 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Module_9 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 237 "hlds_out_util.m"
        {
#line 237 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 238 "hlds_out_util.m"
        {
#line 238 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 239 "hlds_out_util.m"
        {
#line 239 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_util__PredInfo_8);
        }
#line 240 "hlds_out_util.m"
        {
#line 240 "hlds_out_util.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__Origin_13);
        }
#line 251 "hlds_out_util.m"
#line 251 "hlds_out_util.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_util__Origin_13)) {
#line 251 "hlds_out_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 251 "hlds_out_util.m"
          case (MR_Integer) 0:
#line 242 "hlds_out_util.m"
            {
#line 242 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SpecialId_14;
#line 242 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__TypeCtor_15;
#line 242 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__Descr_16;
#line 242 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__TypeArity_18;
#line 242 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ForStr_19;
#line 242 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 242 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_87_87;
#line 242 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__V_88_88;
#line 244 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util___TypeSymName_17;

#line 242 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_86_86, (MR_Integer) 0)));
#line 242 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_86_86, (MR_Integer) 1)));
#line 243 "hlds_out_util.m"
              {
#line 243 "hlds_out_util.m"
                hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_out__hlds_out_util__SpecialId_14, &hlds__hlds_out__hlds_out_util__Descr_16);
              }
#line 244 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util___TypeSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 0)));
#line 244 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__TypeCtor_15, (MR_Integer) 1)));
#line 245 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__succeeded = (hlds__hlds_out__hlds_out_util__TypeArity_18 == (MR_Integer) 0);
#line 247 "hlds_out_util.m"
              if (hlds__hlds_out__hlds_out_util__succeeded)
#line 246 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type ";
#line 247 "hlds_out_util.m"
              else
#line 248 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ForStr_19 = (MR_String) " for type constructor ";
#line 250 "hlds_out_util.m"
              {
#line 250 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_88_88 = parse_tree__prog_out__type_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__TypeCtor_15);
              }
#line 250 "hlds_out_util.m"
              {
#line 250 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_87_87 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__ForStr_19, hlds__hlds_out__hlds_out_util__V_88_88);
              }
#line 250 "hlds_out_util.m"
              {
#line 250 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__Descr_16, hlds__hlds_out__hlds_out_util__V_87_87);
              }
#line 242 "hlds_out_util.m"
            }
#line 251 "hlds_out_util.m"
            break;
#line 251 "hlds_out_util.m"
          case (MR_Integer) 1:
#line 252 "hlds_out_util.m"
            {
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)));
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__MethodConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ClassId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 0)));
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__InstanceTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 1)));
#line 252 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__MethodStr_26;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__ClassName_27;
#line 252 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__ClassStr_29;
#line 252 "hlds_out_util.m"
              MR_String hlds__hlds_out__hlds_out_util__TypeStrs_30;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_73_73;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_74_74;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_76_76;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_77_77;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_79_79;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_80_80;
#line 252 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_82_82;
#line 253 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 2)));
#line 253 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__MethodConstraints_21, (MR_Integer) 3)));
#line 257 "hlds_out_util.m"
              MR_Integer hlds__hlds_out__hlds_out_util__V_28_28;

#line 255 "hlds_out_util.m"
              {
#line 255 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__MethodStr_26 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__MethodName_20, hlds__hlds_out__hlds_out_util__Arity_11);
              }
#line 257 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 0)));
#line 257 "hlds_out_util.m"
              hlds__hlds_out__hlds_out_util__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__ClassId_22, (MR_Integer) 1)));
#line 258 "hlds_out_util.m"
              {
#line 258 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__ClassStr_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_util__ClassName_27);
              }
#line 259 "hlds_out_util.m"
              {
#line 259 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_73_73 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              }
#line 259 "hlds_out_util.m"
              {
#line 259 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__TypeStrs_30 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(hlds__hlds_out__hlds_out_util__V_73_73, hlds__hlds_out__hlds_out_util__InstanceTypes_23);
              }
#line 262 "hlds_out_util.m"
              {
#line 262 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeStrs_30));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_util_scalar_common_1[9])));
#line 262 "hlds_out_util.m"
              }
#line 262 "hlds_out_util.m"
              {
#line 262 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 0) = ((MR_Box) ((MR_String) "("));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_82_82));
#line 262 "hlds_out_util.m"
              }
#line 262 "hlds_out_util.m"
              {
#line 262 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__ClassStr_29));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_80_80));
#line 262 "hlds_out_util.m"
              }
#line 262 "hlds_out_util.m"
              {
#line 262 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 0) = ((MR_Box) ((MR_String) " for \140"));
#line 262 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_79_79));
#line 262 "hlds_out_util.m"
              }
#line 261 "hlds_out_util.m"
              {
#line 261 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MethodStr_26));
#line 261 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_76_76, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_77_77));
#line 261 "hlds_out_util.m"
              }
#line 261 "hlds_out_util.m"
              {
#line 261 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 0) = ((MR_Box) ((MR_String) "instance method "));
#line 261 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__V_76_76));
#line 261 "hlds_out_util.m"
              }
#line 260 "hlds_out_util.m"
              {
#line 260 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__append_list_1_f_0(hlds__hlds_out__hlds_out_util__V_74_74);
              }
#line 252 "hlds_out_util.m"
            }
#line 251 "hlds_out_util.m"
            break;
#line 251 "hlds_out_util.m"
          case (MR_Integer) 2:
#line 307 "hlds_out_util.m"
            {
#line 307 "hlds_out_util.m"
              MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 308 "hlds_out_util.m"
              {
#line 308 "hlds_out_util.m"
                hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 308 "hlds_out_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 308 "hlds_out_util.m"
              }
#line 309 "hlds_out_util.m"
              {
#line 309 "hlds_out_util.m"
                return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
              }
#line 307 "hlds_out_util.m"
            }
#line 251 "hlds_out_util.m"
            break;
#line 251 "hlds_out_util.m"
          case (MR_Integer) 3:
#line 251 "hlds_out_util.m"
#line 251 "hlds_out_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 0)))) {
#line 251 "hlds_out_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 251 "hlds_out_util.m"
              case (MR_Integer) 0:
#line 251 "hlds_out_util.m"
              case (MR_Integer) 2:
#line 251 "hlds_out_util.m"
              case (MR_Integer) 5:
#line 251 "hlds_out_util.m"
              case (MR_Integer) 6:
#line 307 "hlds_out_util.m"
                {
#line 307 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SymName_52;

#line 308 "hlds_out_util.m"
                  {
#line 308 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__SymName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Module_9));
#line 308 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_util__SymName_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Name_10));
#line 308 "hlds_out_util.m"
                  }
#line 309 "hlds_out_util.m"
                  {
#line 309 "hlds_out_util.m"
                    return hlds__hlds_out__hlds_out_util__Str_6 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(hlds__hlds_out__hlds_out_util__PredOrFunc_12, hlds__hlds_out__hlds_out_util__SymName_52, hlds__hlds_out__hlds_out_util__Arity_11);
                  }
#line 307 "hlds_out_util.m"
                }
#line 251 "hlds_out_util.m"
                break;
#line 251 "hlds_out_util.m"
              case (MR_Integer) 1:
#line 265 "hlds_out_util.m"
                {
#line 265 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__FileName_31 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 265 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__LineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 270 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__PromiseType_33;

#line 266 "hlds_out_util.m"
                  {
#line 266 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_out__hlds_out_util__PredInfo_8, &hlds__hlds_out__hlds_out_util__PromiseType_33);
                  }
#line 270 "hlds_out_util.m"
                  if (hlds__hlds_out__hlds_out_util__succeeded)
#line 267 "hlds_out_util.m"
                    {
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_64_64;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_95_95;
#line 267 "hlds_out_util.m"
                      MR_Word hlds__hlds_out__hlds_out_util__V_101_101;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_102_102;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_104_104;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_105_105;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_112_112;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_114_114;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_115_115;
#line 267 "hlds_out_util.m"
                      MR_String hlds__hlds_out__hlds_out_util__V_122_122;

#line 268 "hlds_out_util.m"
                      {
#line 268 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_64_64 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PromiseType_33);
                      }
#line 6673 "hlds.hlds_out.hlds_out_util.c"
                      hlds__hlds_out__hlds_out_util__V_101_101 = (MR_Word) &hlds__hlds_out__hlds_out_util_scalar_common_3[0];
#line 269 "hlds_out_util.m"
                      {
#line 269 "hlds_out_util.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__LineNumber_32, &hlds__hlds_out__hlds_out_util__V_95_95);
                      }
#line 267 "hlds_out_util.m"
                      {
#line 267 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_95_95, (MR_String) ")");
                      }
#line 267 "hlds_out_util.m"
                      {
#line 267 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_104_104 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_out__hlds_out_util__V_102_102);
                      }
#line 269 "hlds_out_util.m"
                      {
#line 269 "hlds_out_util.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__FileName_31, &hlds__hlds_out__hlds_out_util__V_105_105);
                      }
#line 267 "hlds_out_util.m"
                      {
#line 267 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_112_112 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_105_105, hlds__hlds_out__hlds_out_util__V_104_104);
                      }
#line 267 "hlds_out_util.m"
                      {
#line 267 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", hlds__hlds_out__hlds_out_util__V_112_112);
                      }
#line 268 "hlds_out_util.m"
                      {
#line 268 "hlds_out_util.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_util__V_101_101, hlds__hlds_out__hlds_out_util__V_64_64, &hlds__hlds_out__hlds_out_util__V_115_115);
                      }
#line 267 "hlds_out_util.m"
                      {
#line 267 "hlds_out_util.m"
                        hlds__hlds_out__hlds_out_util__V_122_122 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_util__V_115_115, hlds__hlds_out__hlds_out_util__V_114_114);
                      }
#line 267 "hlds_out_util.m"
                      {
#line 267 "hlds_out_util.m"
                        return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140", hlds__hlds_out__hlds_out_util__V_122_122);
                      }
#line 267 "hlds_out_util.m"
                    }
#line 270 "hlds_out_util.m"
                  else
#line 271 "hlds_out_util.m"
                    {
#line 271 "hlds_out_util.m"
                      {
#line 271 "hlds_out_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_util", (MR_String) "function \140hlds.hlds_out.hlds_out_util.pred_id_to_string\'/2", (MR_String) "origin_assertion");
                      }
#line 271 "hlds_out_util.m"
                    }
#line 265 "hlds_out_util.m"
                }
#line 251 "hlds_out_util.m"
                break;
#line 251 "hlds_out_util.m"
              case (MR_Integer) 3:
#line 285 "hlds_out_util.m"
                {
#line 285 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TypeCtorSymName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 285 "hlds_out_util.m"
                  MR_Integer hlds__hlds_out__hlds_out_util__TypeCtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 285 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 3)));
#line 285 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__TypeStr_40;
#line 285 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__V_54_54;

#line 287 "hlds_out_util.m"
                  {
#line 287 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 287 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorSymName_37));
#line 287 "hlds_out_util.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__TypeCtorArity_38));
#line 287 "hlds_out_util.m"
                  }
#line 287 "hlds_out_util.m"
                  {
#line 287 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__TypeStr_40 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_util__V_54_54);
                  }
#line 291 "hlds_out_util.m"
#line 291 "hlds_out_util.m"
                  switch (hlds__hlds_out__hlds_out_util__SolverAuxPredKind_39) {
#line 291 "hlds_out_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 291 "hlds_out_util.m"
                    case (MR_Integer) 3:
#line 298 "hlds_out_util.m"
                      {
#line 299 "hlds_out_util.m"
                        {
#line 299 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 298 "hlds_out_util.m"
                      }
#line 291 "hlds_out_util.m"
                      break;
#line 291 "hlds_out_util.m"
                    case (MR_Integer) 2:
#line 295 "hlds_out_util.m"
                      {
#line 296 "hlds_out_util.m"
                        {
#line 296 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 295 "hlds_out_util.m"
                      }
#line 291 "hlds_out_util.m"
                      break;
#line 291 "hlds_out_util.m"
                    case (MR_Integer) 1:
#line 292 "hlds_out_util.m"
                      {
#line 293 "hlds_out_util.m"
                        {
#line 293 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 292 "hlds_out_util.m"
                      }
#line 291 "hlds_out_util.m"
                      break;
#line 291 "hlds_out_util.m"
                    case (MR_Integer) 0:
#line 289 "hlds_out_util.m"
                      {
#line 290 "hlds_out_util.m"
                        {
#line 290 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", hlds__hlds_out__hlds_out_util__TypeStr_40);
                        }
#line 289 "hlds_out_util.m"
                      }
#line 291 "hlds_out_util.m"
                      break;
#line 291 "hlds_out_util.m"
                  }
#line 285 "hlds_out_util.m"
                }
#line 251 "hlds_out_util.m"
                break;
#line 251 "hlds_out_util.m"
              case (MR_Integer) 4:
#line 274 "hlds_out_util.m"
                {
#line 274 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__BasePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 1)));
#line 274 "hlds_out_util.m"
                  MR_Word hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_util__Origin_13, (MR_Integer) 2)));
#line 274 "hlds_out_util.m"
                  MR_String hlds__hlds_out__hlds_out_util__BasePredIdStr_36;

#line 275 "hlds_out_util.m"
                  {
#line 275 "hlds_out_util.m"
                    hlds__hlds_out__hlds_out_util__BasePredIdStr_36 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_out__hlds_out_util__BasePredId_34);
                  }
#line 279 "hlds_out_util.m"
#line 279 "hlds_out_util.m"
                  switch (hlds__hlds_out__hlds_out_util__TablingAuxPredKind_35) {
#line 279 "hlds_out_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 279 "hlds_out_util.m"
                    case (MR_Integer) 1:
#line 280 "hlds_out_util.m"
                      {
#line 281 "hlds_out_util.m"
                        {
#line 281 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 280 "hlds_out_util.m"
                      }
#line 279 "hlds_out_util.m"
                      break;
#line 279 "hlds_out_util.m"
                    case (MR_Integer) 0:
#line 277 "hlds_out_util.m"
                      {
#line 278 "hlds_out_util.m"
                        {
#line 278 "hlds_out_util.m"
                          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", hlds__hlds_out__hlds_out_util__BasePredIdStr_36);
                        }
#line 277 "hlds_out_util.m"
                      }
#line 279 "hlds_out_util.m"
                      break;
#line 279 "hlds_out_util.m"
                  }
#line 274 "hlds_out_util.m"
                }
#line 251 "hlds_out_util.m"
                break;
#line 251 "hlds_out_util.m"
            }
#line 251 "hlds_out_util.m"
            break;
#line 251 "hlds_out_util.m"
        }
#line 236 "hlds_out_util.m"
      }
#line 311 "hlds_out_util.m"
    else
#line 313 "hlds_out_util.m"
      {
#line 313 "hlds_out_util.m"
        MR_Integer hlds__hlds_out__hlds_out_util__PredIdInt_53;
#line 313 "hlds_out_util.m"
        MR_String hlds__hlds_out__hlds_out_util__V_90_90;

#line 313 "hlds_out_util.m"
        {
#line 313 "hlds_out_util.m"
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_util__PredId_5, &hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 314 "hlds_out_util.m"
        {
#line 314 "hlds_out_util.m"
          hlds__hlds_out__hlds_out_util__V_90_90 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_util__PredIdInt_53);
        }
#line 314 "hlds_out_util.m"
        {
#line 314 "hlds_out_util.m"
          return hlds__hlds_out__hlds_out_util__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", hlds__hlds_out__hlds_out_util__V_90_90);
        }
#line 313 "hlds_out_util.m"
      }
#line 233 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Str_6;
#line 233 "hlds_out_util.m"
  }
#line 66 "hlds_out_util.m"
}

#line 65 "hlds_out_util.m"
void MR_CALL 
hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(
#line 65 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__ModuleInfo_5,
#line 65 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__PredId_6)
#line 65 "hlds_out_util.m"
{
#line 227 "hlds_out_util.m"
  {
#line 227 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 227 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__V_10_10;

#line 231 "hlds_out_util.m"
    {
#line 231 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__V_10_10 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(hlds__hlds_out__hlds_out_util__ModuleInfo_5, hlds__hlds_out__hlds_out_util__PredId_6);
    }
#line 231 "hlds_out_util.m"
    {
#line 231 "hlds_out_util.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_util__V_10_10);
#line 231 "hlds_out_util.m"
      return;
    }
#line 227 "hlds_out_util.m"
  }
#line 65 "hlds_out_util.m"
}

#line 44 "hlds_out_util.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
#line 44 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Globals_4,
#line 44 "hlds_out_util.m"
  MR_Word hlds__hlds_out__hlds_out_util__Lang_5)
#line 44 "hlds_out_util.m"
{
#line 215 "hlds_out_util.m"
  {
#line 215 "hlds_out_util.m"
    MR_bool hlds__hlds_out__hlds_out_util__succeeded;
#line 215 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Info_6;
#line 215 "hlds_out_util.m"
    MR_String hlds__hlds_out__hlds_out_util__DumpOptions_7;
#line 215 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Ids_8;
#line 215 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__Names_9;
#line 215 "hlds_out_util.m"
    MR_Word hlds__hlds_out__hlds_out_util__MercInfo_10;

#line 216 "hlds_out_util.m"
    {
#line 216 "hlds_out_util.m"
      libs__globals__lookup_string_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 151, &hlds__hlds_out__hlds_out_util__DumpOptions_7);
    }
#line 217 "hlds_out_util.m"
    {
#line 217 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 147, &hlds__hlds_out__hlds_out_util__Ids_8);
    }
#line 218 "hlds_out_util.m"
    {
#line 218 "hlds_out_util.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 148, &hlds__hlds_out__hlds_out_util__Names_9);
    }
#line 219 "hlds_out_util.m"
    {
#line 219 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__MercInfo_10 = parse_tree__mercury_to_mercury__init_merc_out_info_3_f_0(hlds__hlds_out__hlds_out_util__Globals_4, (MR_Integer) 0, hlds__hlds_out__hlds_out_util__Lang_5);
    }
#line 220 "hlds_out_util.m"
    {
#line 220 "hlds_out_util.m"
      hlds__hlds_out__hlds_out_util__Info_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 220 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
#line 220 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__DumpOptions_7));
#line 220 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Ids_8));
#line 220 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_util__Names_9));
#line 220 "hlds_out_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_util__Info_6, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_util__MercInfo_10));
#line 220 "hlds_out_util.m"
    }
#line 215 "hlds_out_util.m"
    return hlds__hlds_out__hlds_out_util__Info_6;
#line 215 "hlds_out_util.m"
  }
#line 44 "hlds_out_util.m"
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
