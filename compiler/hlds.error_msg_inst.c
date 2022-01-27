/*
** Automatically generated from `error_msg_inst.m'
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


/* :- module hlds.error_msg_inst. */
/* :- implementation. */

/*
INIT mercury__hlds__error_msg_inst__init
ENDINIT
*/

#include "hlds.error_msg_inst.mih"


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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "hlds.error_msg_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 150 "hlds.error_msg_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 153 "hlds.error_msg_inst.c"
static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 156 "hlds.error_msg_inst.c"
static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3];

#line 159 "hlds.error_msg_inst.c"
static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3];

#line 162 "hlds.error_msg_inst.c"
static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0;

#line 165 "hlds.error_msg_inst.c"
static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1];

#line 168 "hlds.error_msg_inst.c"
static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1];

#line 171 "hlds.error_msg_inst.c"
static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1];

#line 174 "hlds.error_msg_inst.c"
static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1];

#line 177 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0;

#line 180 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1;

#line 183 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0[2];

#line 186 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2];

#line 189 "hlds.error_msg_inst.c"
static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2];

#line 192 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0;

#line 195 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1;

#line 198 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0[2];

#line 201 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2];

#line 204 "hlds.error_msg_inst.c"
static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2];

#line 207 "hlds.error_msg_inst.c"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
#line 210 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
#line 212 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

#line 215 "hlds.error_msg_inst.c"
static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
#line 218 "hlds.error_msg_inst.c"
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
#line 220 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
#line 222 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

#line 225 "hlds.error_msg_inst.c"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
#line 228 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
#line 230 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

#line 233 "hlds.error_msg_inst.c"
static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
#line 236 "hlds.error_msg_inst.c"
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
#line 238 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
#line 240 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

#line 243 "hlds.error_msg_inst.c"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
#line 246 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
#line 248 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

#line 251 "hlds.error_msg_inst.c"
static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
#line 254 "hlds.error_msg_inst.c"
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
#line 256 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
#line 258 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

#line 86 "error_msg_inst.m"
static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
#line 86 "error_msg_inst.m"
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__3_3);

#line 86 "error_msg_inst.m"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2);

#line 923 "error_msg_inst.m"
static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
#line 923 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Pieces_4,
#line 923 "error_msg_inst.m"
  MR_Integer hlds__error_msg_inst__Left_5,
#line 923 "error_msg_inst.m"
  MR_String * hlds__error_msg_inst__Summary_6);

#line 898 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 898 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__Name_9,
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ArgInsts_10,
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11);

#line 876 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 876 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__Name_9,
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ArgInsts_10,
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11);

#line 868 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_inline_pieces_3_f_0(
#line 868 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 868 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 868 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_7);

#line 862 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_pieces_3_f_0(
#line 862 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 862 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 862 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_7);

#line 853 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0_1(
#line 853 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 853 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

#line 796 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0(
#line 796 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 796 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 796 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Mode_7);

#line 787 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0_1(
#line 787 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 787 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

#line 712 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0(
#line 712 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 712 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 712 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Mode_7);

#line 669 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0_1(
#line 669 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 669 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

#line 649 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 649 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__AnyPrefix_9,
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Uniq_10,
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__PredInstInfo_11);

#line 606 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0_1(
#line 606 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 606 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1);

#line 587 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 587 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__AnyPrefix_9,
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Uniq_10,
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__PredInstInfo_11);

#line 491 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__InstName_8,
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9);

#line 398 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_4_f_0(
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__InstName_8,
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9);

#line 365 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11);

#line 333 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11);

#line 314 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadInst_9,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailInsts_10,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11);

#line 297 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_pieces_5_f_0(
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadInst_9,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailInsts_10,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11);

#line 221 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_8,
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9);

#line 147 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_pieces_4_f_0(
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_8,
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9);


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[31][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[25][1];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[2][7];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[25][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "not_reached"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\044any_inst"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\044ground_inst"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\044unify_inst"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "/*"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "*/"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "out"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "di"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "ui"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "uo"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "mdi"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "mui"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "muo"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0)),
    ((MR_Box) (&hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0)),
    ((MR_Box) (&hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 824 "hlds.error_msg_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 832 "hlds.error_msg_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__error_msg_inst__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 840 "hlds.error_msg_inst.c"
static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 848 "hlds.error_msg_inst.c"
static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0
};

#line 855 "hlds.error_msg_inst.c"
static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_expand_named_insts"
};

#line 862 "hlds.error_msg_inst.c"
static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 = {
  (MR_String) "inst_msg_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0,
  NULL,
  NULL
};

#line 877 "hlds.error_msg_inst.c"
static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

#line 882 "hlds.error_msg_inst.c"
static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0
  }
};

#line 891 "hlds.error_msg_inst.c"
static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

#line 896 "hlds.error_msg_inst.c"
static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1] = {
  (MR_Integer) 0
};

#line 901 "hlds.error_msg_inst.c"
const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0
};

#line 918 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0 = {
  (MR_String) "dont_expand_named_insts",
  (MR_Integer) 0
};

#line 924 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1 = {
  (MR_String) "expand_named_insts",
  (MR_Integer) 1
};

#line 930 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

#line 936 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

#line 942 "hlds.error_msg_inst.c"
static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 948 "hlds.error_msg_inst.c"
const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_expand_named_insts",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0
};

#line 965 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0 = {
  (MR_String) "quote_short_inst",
  (MR_Integer) 0
};

#line 971 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1 = {
  (MR_String) "fixed_short_inst",
  (MR_Integer) 1
};

#line 977 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1
};

#line 983 "hlds.error_msg_inst.c"
static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0
};

#line 989 "hlds.error_msg_inst.c"
static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 995 "hlds.error_msg_inst.c"
const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____short_inst_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____short_inst_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "short_inst",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0
};

#line 1012 "hlds.error_msg_inst.c"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
#line 1015 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
#line 1017 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
#line 1019 "hlds.error_msg_inst.c"
{
#line 1021 "hlds.error_msg_inst.c"
  {
#line 1023 "hlds.error_msg_inst.c"
    MR_bool hlds__error_msg_inst__succeeded;

#line 1026 "hlds.error_msg_inst.c"
    {
#line 1028 "hlds.error_msg_inst.c"
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____inst_msg_info_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
#line 1031 "hlds.error_msg_inst.c"
    return hlds__error_msg_inst__succeeded;
#line 1033 "hlds.error_msg_inst.c"
  }
#line 1035 "hlds.error_msg_inst.c"
}

#line 1038 "hlds.error_msg_inst.c"
static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
#line 1041 "hlds.error_msg_inst.c"
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
#line 1043 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
#line 1045 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
#line 1047 "hlds.error_msg_inst.c"
{
#line 1049 "hlds.error_msg_inst.c"
  {
#line 1051 "hlds.error_msg_inst.c"
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

#line 1054 "hlds.error_msg_inst.c"
    {
#line 1056 "hlds.error_msg_inst.c"
      hlds__error_msg_inst____Compare____inst_msg_info_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
#line 1059 "hlds.error_msg_inst.c"
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
#line 1061 "hlds.error_msg_inst.c"
  }
#line 1063 "hlds.error_msg_inst.c"
}

#line 1066 "hlds.error_msg_inst.c"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
#line 1069 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
#line 1071 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
#line 1073 "hlds.error_msg_inst.c"
{
#line 1075 "hlds.error_msg_inst.c"
  {
#line 1077 "hlds.error_msg_inst.c"
    MR_bool hlds__error_msg_inst__succeeded;

#line 1080 "hlds.error_msg_inst.c"
    {
#line 1082 "hlds.error_msg_inst.c"
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
#line 1085 "hlds.error_msg_inst.c"
    return hlds__error_msg_inst__succeeded;
#line 1087 "hlds.error_msg_inst.c"
  }
#line 1089 "hlds.error_msg_inst.c"
}

#line 1092 "hlds.error_msg_inst.c"
static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
#line 1095 "hlds.error_msg_inst.c"
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
#line 1097 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
#line 1099 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
#line 1101 "hlds.error_msg_inst.c"
{
#line 1103 "hlds.error_msg_inst.c"
  {
#line 1105 "hlds.error_msg_inst.c"
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

#line 1108 "hlds.error_msg_inst.c"
    {
#line 1110 "hlds.error_msg_inst.c"
      hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
#line 1113 "hlds.error_msg_inst.c"
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
#line 1115 "hlds.error_msg_inst.c"
  }
#line 1117 "hlds.error_msg_inst.c"
}

#line 1120 "hlds.error_msg_inst.c"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
#line 1123 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
#line 1125 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
#line 1127 "hlds.error_msg_inst.c"
{
#line 1129 "hlds.error_msg_inst.c"
  {
#line 1131 "hlds.error_msg_inst.c"
    MR_bool hlds__error_msg_inst__succeeded;

#line 1134 "hlds.error_msg_inst.c"
    {
#line 1136 "hlds.error_msg_inst.c"
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____short_inst_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
#line 1139 "hlds.error_msg_inst.c"
    return hlds__error_msg_inst__succeeded;
#line 1141 "hlds.error_msg_inst.c"
  }
#line 1143 "hlds.error_msg_inst.c"
}

#line 1146 "hlds.error_msg_inst.c"
static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
#line 1149 "hlds.error_msg_inst.c"
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
#line 1151 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
#line 1153 "hlds.error_msg_inst.c"
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
#line 1155 "hlds.error_msg_inst.c"
{
#line 1157 "hlds.error_msg_inst.c"
  {
#line 1159 "hlds.error_msg_inst.c"
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

#line 1162 "hlds.error_msg_inst.c"
    {
#line 1164 "hlds.error_msg_inst.c"
      hlds__error_msg_inst____Compare____short_inst_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
#line 1167 "hlds.error_msg_inst.c"
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
#line 1169 "hlds.error_msg_inst.c"
  }
#line 1171 "hlds.error_msg_inst.c"
}

#line 38 "error_msg_inst.m"
void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0(
#line 38 "error_msg_inst.m"
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
#line 38 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
#line 38 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
#line 38 "error_msg_inst.m"
{
#line 38 "error_msg_inst.m"
  {
#line 38 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 38 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Cast_HeadVar1_4 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
#line 38 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Cast_HeadVar2_5 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

#line 38 "error_msg_inst.m"
    {
#line 38 "error_msg_inst.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__Cast_HeadVar1_4, hlds__error_msg_inst__Cast_HeadVar2_5);
    }
#line 38 "error_msg_inst.m"
  }
#line 38 "error_msg_inst.m"
}

#line 38 "error_msg_inst.m"
MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0(
#line 38 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_1,
#line 38 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
#line 38 "error_msg_inst.m"
{
#line 1213 "hlds.error_msg_inst.c"
  {
#line 1215 "hlds.error_msg_inst.c"
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__HeadVar__2_1 == hlds__error_msg_inst__HeadVar__2_2);

#line 1218 "hlds.error_msg_inst.c"
    return hlds__error_msg_inst__succeeded;
#line 1220 "hlds.error_msg_inst.c"
  }
#line 38 "error_msg_inst.m"
}

#line 34 "error_msg_inst.m"
void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(
#line 34 "error_msg_inst.m"
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
#line 34 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
#line 34 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
#line 34 "error_msg_inst.m"
{
#line 34 "error_msg_inst.m"
  {
#line 34 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 34 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Cast_HeadVar1_4 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
#line 34 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Cast_HeadVar2_5 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

#line 34 "error_msg_inst.m"
    {
#line 34 "error_msg_inst.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__Cast_HeadVar1_4, hlds__error_msg_inst__Cast_HeadVar2_5);
    }
#line 34 "error_msg_inst.m"
  }
#line 34 "error_msg_inst.m"
}

#line 34 "error_msg_inst.m"
MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(
#line 34 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_1,
#line 34 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
#line 34 "error_msg_inst.m"
{
#line 1264 "hlds.error_msg_inst.c"
  {
#line 1266 "hlds.error_msg_inst.c"
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__HeadVar__2_1 == hlds__error_msg_inst__HeadVar__2_2);

#line 1269 "hlds.error_msg_inst.c"
    return hlds__error_msg_inst__succeeded;
#line 1271 "hlds.error_msg_inst.c"
  }
#line 34 "error_msg_inst.m"
}

#line 86 "error_msg_inst.m"
static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
#line 86 "error_msg_inst.m"
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
#line 86 "error_msg_inst.m"
{
#line 86 "error_msg_inst.m"
  {
#line 86 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 86 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__CastX_12 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
#line 86 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__CastY_13 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

#line 86 "error_msg_inst.m"
    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_12 == hlds__error_msg_inst__CastY_13);
#line 86 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 1300 "hlds.error_msg_inst.c"
      *hlds__error_msg_inst__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "error_msg_inst.m"
    else
#line 86 "error_msg_inst.m"
      {
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 2)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_10_10;

#line 86 "error_msg_inst.m"
        {
#line 86 "error_msg_inst.m"
          hlds__hlds_module____Compare____module_info_0_0(&hlds__error_msg_inst__V_10_10, hlds__error_msg_inst__V_4_4, hlds__error_msg_inst__V_7_7);
        }
#line 1326 "hlds.error_msg_inst.c"
        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_10_10 == (MR_Integer) 0);
#line 86 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
#line 86 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 86 "error_msg_inst.m"
          *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_10_10;
#line 86 "error_msg_inst.m"
        else
#line 86 "error_msg_inst.m"
          {
#line 86 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_11_11;

#line 86 "error_msg_inst.m"
            {
#line 86 "error_msg_inst.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[3], &hlds__error_msg_inst__V_11_11, ((MR_Box) (hlds__error_msg_inst__V_5_5)), ((MR_Box) (hlds__error_msg_inst__V_8_8)));
            }
#line 1346 "hlds.error_msg_inst.c"
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_11_11 == (MR_Integer) 0);
#line 86 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
#line 86 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 86 "error_msg_inst.m"
              *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_11_11;
#line 86 "error_msg_inst.m"
            else
#line 86 "error_msg_inst.m"
              {
#line 86 "error_msg_inst.m"
                MR_Integer hlds__error_msg_inst__V_17_17 = (MR_Integer) hlds__error_msg_inst__V_6_6;
#line 86 "error_msg_inst.m"
                MR_Integer hlds__error_msg_inst__V_18_18 = (MR_Integer) hlds__error_msg_inst__V_9_9;

#line 86 "error_msg_inst.m"
                {
#line 86 "error_msg_inst.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__V_17_17, hlds__error_msg_inst__V_18_18);
                }
#line 86 "error_msg_inst.m"
              }
#line 86 "error_msg_inst.m"
          }
#line 86 "error_msg_inst.m"
      }
#line 86 "error_msg_inst.m"
  }
#line 86 "error_msg_inst.m"
}

#line 86 "error_msg_inst.m"
static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
#line 86 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
#line 86 "error_msg_inst.m"
{
#line 86 "error_msg_inst.m"
  {
#line 86 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 86 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__CastX_9 = (MR_Integer) hlds__error_msg_inst__HeadVar__1_1;
#line 86 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__CastY_10 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;

#line 86 "error_msg_inst.m"
    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_9 == hlds__error_msg_inst__CastY_10);
#line 86 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 86 "error_msg_inst.m"
      hlds__error_msg_inst__succeeded = MR_TRUE;
#line 86 "error_msg_inst.m"
    else
#line 86 "error_msg_inst.m"
      {
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TypeInfo_12_12;
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 2)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 2)));

#line 1422 "hlds.error_msg_inst.c"
        {
#line 1424 "hlds.error_msg_inst.c"
          hlds__error_msg_inst__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__error_msg_inst__V_3_3, hlds__error_msg_inst__V_6_6);
        }
#line 86 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 86 "error_msg_inst.m"
          {
#line 1431 "hlds.error_msg_inst.c"
            hlds__error_msg_inst__TypeInfo_12_12 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[3];
#line 1433 "hlds.error_msg_inst.c"
            {
#line 1435 "hlds.error_msg_inst.c"
              hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_12_12, ((MR_Box) (hlds__error_msg_inst__V_4_4)), ((MR_Box) (hlds__error_msg_inst__V_7_7)));
            }
#line 86 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 1440 "hlds.error_msg_inst.c"
              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_5_5 == hlds__error_msg_inst__V_8_8);
#line 86 "error_msg_inst.m"
          }
#line 86 "error_msg_inst.m"
      }
#line 86 "error_msg_inst.m"
    return hlds__error_msg_inst__succeeded;
#line 86 "error_msg_inst.m"
  }
#line 86 "error_msg_inst.m"
}

#line 923 "error_msg_inst.m"
static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
#line 923 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Pieces_4,
#line 923 "error_msg_inst.m"
  MR_Integer hlds__error_msg_inst__Left_5,
#line 923 "error_msg_inst.m"
  MR_String * hlds__error_msg_inst__Summary_6)
#line 923 "error_msg_inst.m"
{
#line 926 "error_msg_inst.m"
  {
#line 926 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__Left_5 > (MR_Integer) 0);
#line 926 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__FirstFixed_7;
#line 926 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__AfterFirstFixed_8;
#line 926 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__V_12_12;
#line 926 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__V_24_24;
#line 926 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__V_25_25;

#line 926 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 926 "error_msg_inst.m"
      {
#line 928 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__Pieces_4)) == (MR_mktag((MR_Integer) 1)));
#line 928 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 928 "error_msg_inst.m"
          {
#line 928 "error_msg_inst.m"
            hlds__error_msg_inst__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_4, (MR_Integer) 0)));
#line 928 "error_msg_inst.m"
            hlds__error_msg_inst__AfterFirstFixed_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_4, (MR_Integer) 1)));
#line 928 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 928 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 928 "error_msg_inst.m"
              {
#line 928 "error_msg_inst.m"
                hlds__error_msg_inst__FirstFixed_7 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_12_12, (MR_Integer) 0)));
#line 930 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__AfterFirstFixed_8)) == (MR_mktag((MR_Integer) 1)));
#line 930 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 930 "error_msg_inst.m"
                  {
#line 930 "error_msg_inst.m"
                    hlds__error_msg_inst__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__AfterFirstFixed_8, (MR_Integer) 0)));
#line 930 "error_msg_inst.m"
                    hlds__error_msg_inst__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__AfterFirstFixed_8, (MR_Integer) 1)));
#line 932 "error_msg_inst.m"
                    if ((hlds__error_msg_inst__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "error_msg_inst.m"
                      {
#line 930 "error_msg_inst.m"
                        MR_Integer hlds__error_msg_inst__V_22_22;

#line 930 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 930 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 930 "error_msg_inst.m"
                          {
#line 930 "error_msg_inst.m"
                            hlds__error_msg_inst__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 1)));
#line 930 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_22_22 == (MR_Integer) -1);
#line 930 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 930 "error_msg_inst.m"
                              {
#line 931 "error_msg_inst.m"
                                *hlds__error_msg_inst__Summary_6 = hlds__error_msg_inst__FirstFixed_7;
#line 931 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = MR_TRUE;
#line 930 "error_msg_inst.m"
                              }
#line 930 "error_msg_inst.m"
                          }
#line 930 "error_msg_inst.m"
                      }
#line 932 "error_msg_inst.m"
                    else
#line 933 "error_msg_inst.m"
                      {
#line 933 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__TailPieces_9;
#line 933 "error_msg_inst.m"
                        MR_String hlds__error_msg_inst__TailSummary_10;
#line 933 "error_msg_inst.m"
                        MR_String hlds__error_msg_inst__V_14_14;
#line 933 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__V_16_16;
#line 933 "error_msg_inst.m"
                        MR_Integer hlds__error_msg_inst__V_17_17;
#line 933 "error_msg_inst.m"
                        MR_Integer hlds__error_msg_inst__V_18_18;
#line 933 "error_msg_inst.m"
                        MR_String hlds__error_msg_inst__V_19_19;
#line 933 "error_msg_inst.m"
                        MR_String hlds__error_msg_inst__V_20_20;

#line 933 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 933 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 933 "error_msg_inst.m"
                          {
#line 933 "error_msg_inst.m"
                            hlds__error_msg_inst__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, (MR_Integer) 1)));
#line 933 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = (strcmp(hlds__error_msg_inst__V_14_14, (MR_String) ",") == 0);
#line 933 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 933 "error_msg_inst.m"
                              {
#line 933 "error_msg_inst.m"
                                hlds__error_msg_inst__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_24_24, (MR_Integer) 0)));
#line 933 "error_msg_inst.m"
                                hlds__error_msg_inst__TailPieces_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_24_24, (MR_Integer) 1)));
#line 933 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 933 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 933 "error_msg_inst.m"
                                  {
#line 934 "error_msg_inst.m"
                                    hlds__error_msg_inst__V_18_18 = (MR_Integer) 1;
#line 934 "error_msg_inst.m"
                                    hlds__error_msg_inst__V_17_17 = (hlds__error_msg_inst__Left_5 - hlds__error_msg_inst__V_18_18);
#line 934 "error_msg_inst.m"
                                    {
#line 934 "error_msg_inst.m"
                                      hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__TailPieces_9, hlds__error_msg_inst__V_17_17, &hlds__error_msg_inst__TailSummary_10);
                                    }
#line 933 "error_msg_inst.m"
                                    if (hlds__error_msg_inst__succeeded)
#line 933 "error_msg_inst.m"
                                      {
#line 935 "error_msg_inst.m"
                                        hlds__error_msg_inst__V_20_20 = (MR_String) ", ";
#line 935 "error_msg_inst.m"
                                        {
#line 935 "error_msg_inst.m"
                                          hlds__error_msg_inst__V_19_19 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__V_20_20, hlds__error_msg_inst__TailSummary_10);
                                        }
#line 935 "error_msg_inst.m"
                                        {
#line 935 "error_msg_inst.m"
                                          *hlds__error_msg_inst__Summary_6 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__FirstFixed_7, hlds__error_msg_inst__V_19_19);
                                        }
#line 935 "error_msg_inst.m"
                                        hlds__error_msg_inst__succeeded = MR_TRUE;
#line 933 "error_msg_inst.m"
                                      }
#line 933 "error_msg_inst.m"
                                  }
#line 933 "error_msg_inst.m"
                              }
#line 933 "error_msg_inst.m"
                          }
#line 933 "error_msg_inst.m"
                      }
#line 930 "error_msg_inst.m"
                  }
#line 928 "error_msg_inst.m"
              }
#line 928 "error_msg_inst.m"
          }
#line 926 "error_msg_inst.m"
      }
#line 926 "error_msg_inst.m"
    return hlds__error_msg_inst__succeeded;
#line 926 "error_msg_inst.m"
  }
#line 923 "error_msg_inst.m"
}

#line 898 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 898 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__Name_9,
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ArgInsts_10,
#line 898 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11)
#line 898 "error_msg_inst.m"
{
#line 905 "error_msg_inst.m"
  {
#line 905 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 905 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;

#line 905 "error_msg_inst.m"
    if ((hlds__error_msg_inst__ArgInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "error_msg_inst.m"
      {
#line 905 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_32_32;

#line 906 "error_msg_inst.m"
        {
#line 906 "error_msg_inst.m"
          hlds__error_msg_inst__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "error_msg_inst.m"
          MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_32_32, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
#line 906 "error_msg_inst.m"
        }
#line 906 "error_msg_inst.m"
        {
#line 906 "error_msg_inst.m"
          hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_32_32));
#line 906 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
#line 906 "error_msg_inst.m"
        }
#line 905 "error_msg_inst.m"
      }
#line 905 "error_msg_inst.m"
    else
#line 908 "error_msg_inst.m"
      {
#line 908 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__HeadArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 0)));
#line 908 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 1)));
#line 908 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__ArgPieces_15;
#line 911 "error_msg_inst.m"
        MR_String hlds__error_msg_inst__ArgSummary_16;

#line 909 "error_msg_inst.m"
        {
#line 909 "error_msg_inst.m"
          hlds__error_msg_inst__ArgPieces_15 = hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadArgInst_13, hlds__error_msg_inst__TailArgInsts_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 912 "error_msg_inst.m"
        {
#line 912 "error_msg_inst.m"
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__ArgPieces_15, (MR_Integer) 4, &hlds__error_msg_inst__ArgSummary_16);
        }
#line 911 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 914 "error_msg_inst.m"
          {
#line 914 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_19_19;
#line 914 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_20_20;
#line 914 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_21_21;
#line 914 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_23_23;

#line 914 "error_msg_inst.m"
            {
#line 914 "error_msg_inst.m"
              hlds__error_msg_inst__V_23_23 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__ArgSummary_16, (MR_String) ")");
            }
#line 914 "error_msg_inst.m"
            {
#line 914 "error_msg_inst.m"
              hlds__error_msg_inst__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_23_23);
            }
#line 914 "error_msg_inst.m"
            {
#line 914 "error_msg_inst.m"
              hlds__error_msg_inst__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__Name_9, hlds__error_msg_inst__V_21_21);
            }
#line 914 "error_msg_inst.m"
            {
#line 914 "error_msg_inst.m"
              hlds__error_msg_inst__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_19_19, 0) = ((MR_Box) (hlds__error_msg_inst__V_20_20));
#line 914 "error_msg_inst.m"
            }
#line 914 "error_msg_inst.m"
            {
#line 914 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_19_19));
#line 914 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
#line 914 "error_msg_inst.m"
            }
#line 914 "error_msg_inst.m"
          }
#line 911 "error_msg_inst.m"
        else
#line 916 "error_msg_inst.m"
          {
#line 916 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_25_25;
#line 916 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_26_26;
#line 916 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_27_27;
#line 916 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_29_29;

#line 916 "error_msg_inst.m"
            {
#line 916 "error_msg_inst.m"
              hlds__error_msg_inst__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__Name_9, (MR_String) "(");
            }
#line 916 "error_msg_inst.m"
            {
#line 916 "error_msg_inst.m"
              hlds__error_msg_inst__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 916 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_26_26, 1) = ((MR_Box) (hlds__error_msg_inst__V_27_27));
#line 916 "error_msg_inst.m"
            }
#line 916 "error_msg_inst.m"
            {
#line 916 "error_msg_inst.m"
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (hlds__error_msg_inst__V_26_26));
#line 916 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__ArgPieces_15));
#line 916 "error_msg_inst.m"
            }
#line 917 "error_msg_inst.m"
            {
#line 917 "error_msg_inst.m"
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
#line 917 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
#line 917 "error_msg_inst.m"
            }
#line 916 "error_msg_inst.m"
            {
#line 916 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_25_25, hlds__error_msg_inst__V_29_29);
            }
#line 916 "error_msg_inst.m"
          }
#line 908 "error_msg_inst.m"
      }
#line 905 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 905 "error_msg_inst.m"
  }
#line 898 "error_msg_inst.m"
}

#line 876 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 876 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__Name_9,
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ArgInsts_10,
#line 876 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11)
#line 876 "error_msg_inst.m"
{
#line 882 "error_msg_inst.m"
  {
#line 882 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 882 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;

#line 882 "error_msg_inst.m"
    if ((hlds__error_msg_inst__ArgInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "error_msg_inst.m"
      {
#line 882 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_42_42;

#line 883 "error_msg_inst.m"
        {
#line 883 "error_msg_inst.m"
          hlds__error_msg_inst__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 883 "error_msg_inst.m"
          MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_42_42, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
#line 883 "error_msg_inst.m"
        }
#line 883 "error_msg_inst.m"
        {
#line 883 "error_msg_inst.m"
          hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_42_42));
#line 883 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
#line 883 "error_msg_inst.m"
        }
#line 882 "error_msg_inst.m"
      }
#line 882 "error_msg_inst.m"
    else
#line 885 "error_msg_inst.m"
      {
#line 885 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__HeadArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 0)));
#line 885 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_10, (MR_Integer) 1)));
#line 885 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__ArgPieces_15;
#line 888 "error_msg_inst.m"
        MR_String hlds__error_msg_inst__ArgSummary_16;

#line 886 "error_msg_inst.m"
        {
#line 886 "error_msg_inst.m"
          hlds__error_msg_inst__ArgPieces_15 = hlds__error_msg_inst__insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadArgInst_13, hlds__error_msg_inst__TailArgInsts_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[13]));
        }
#line 889 "error_msg_inst.m"
        {
#line 889 "error_msg_inst.m"
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__ArgPieces_15, (MR_Integer) 4, &hlds__error_msg_inst__ArgSummary_16);
        }
#line 888 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 891 "error_msg_inst.m"
          {
#line 891 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_22_22;
#line 891 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_23_23;
#line 891 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_24_24;
#line 891 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_25_25;
#line 891 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_27_27;

#line 891 "error_msg_inst.m"
            {
#line 891 "error_msg_inst.m"
              hlds__error_msg_inst__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_22_22, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
#line 891 "error_msg_inst.m"
            }
#line 891 "error_msg_inst.m"
            {
#line 891 "error_msg_inst.m"
              hlds__error_msg_inst__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__ArgSummary_16, (MR_String) ")");
            }
#line 891 "error_msg_inst.m"
            {
#line 891 "error_msg_inst.m"
              hlds__error_msg_inst__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_27_27);
            }
#line 891 "error_msg_inst.m"
            {
#line 891 "error_msg_inst.m"
              hlds__error_msg_inst__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_24_24, 1) = ((MR_Box) (hlds__error_msg_inst__V_25_25));
#line 891 "error_msg_inst.m"
            }
#line 891 "error_msg_inst.m"
            {
#line 891 "error_msg_inst.m"
              hlds__error_msg_inst__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_23_23, 0) = ((MR_Box) (hlds__error_msg_inst__V_24_24));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_23_23, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
#line 891 "error_msg_inst.m"
            }
#line 891 "error_msg_inst.m"
            {
#line 891 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 0) = ((MR_Box) (hlds__error_msg_inst__V_22_22));
#line 891 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_12, 1) = ((MR_Box) (hlds__error_msg_inst__V_23_23));
#line 891 "error_msg_inst.m"
            }
#line 891 "error_msg_inst.m"
          }
#line 888 "error_msg_inst.m"
        else
#line 893 "error_msg_inst.m"
          {
#line 893 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 893 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_29_29;
#line 893 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_30_30;
#line 893 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_38_38;
#line 893 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_39_39;

#line 893 "error_msg_inst.m"
            {
#line 893 "error_msg_inst.m"
              hlds__error_msg_inst__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_30_30, 0) = ((MR_Box) (hlds__error_msg_inst__Name_9));
#line 893 "error_msg_inst.m"
            }
#line 893 "error_msg_inst.m"
            {
#line 893 "error_msg_inst.m"
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
#line 893 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[11])));
#line 893 "error_msg_inst.m"
            }
#line 894 "error_msg_inst.m"
            {
#line 894 "error_msg_inst.m"
              hlds__error_msg_inst__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
#line 894 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_39_39, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_11));
#line 894 "error_msg_inst.m"
            }
#line 894 "error_msg_inst.m"
            {
#line 894 "error_msg_inst.m"
              hlds__error_msg_inst__V_38_38 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_43_43, hlds__error_msg_inst__ArgPieces_15, hlds__error_msg_inst__V_39_39);
            }
#line 893 "error_msg_inst.m"
            {
#line 893 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_43_43, hlds__error_msg_inst__V_29_29, hlds__error_msg_inst__V_38_38);
            }
#line 893 "error_msg_inst.m"
          }
#line 885 "error_msg_inst.m"
      }
#line 882 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 882 "error_msg_inst.m"
  }
#line 876 "error_msg_inst.m"
}

#line 868 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_inline_pieces_3_f_0(
#line 868 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 868 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 868 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_7)
#line 868 "error_msg_inst.m"
{
#line 871 "error_msg_inst.m"
  {
#line 871 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 871 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__HeadVar__4_4;

#line 872 "error_msg_inst.m"
    {
#line 872 "error_msg_inst.m"
      hlds__error_msg_inst__HeadVar__4_4 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__Inst_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 871 "error_msg_inst.m"
    return hlds__error_msg_inst__HeadVar__4_4;
#line 871 "error_msg_inst.m"
  }
#line 868 "error_msg_inst.m"
}

#line 862 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__arg_inst_to_pieces_3_f_0(
#line 862 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 862 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 862 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_7)
#line 862 "error_msg_inst.m"
{
#line 865 "error_msg_inst.m"
  {
#line 865 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 865 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__HeadVar__4_4;

#line 866 "error_msg_inst.m"
    {
#line 866 "error_msg_inst.m"
      hlds__error_msg_inst__HeadVar__4_4 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__Inst_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 865 "error_msg_inst.m"
    return hlds__error_msg_inst__HeadVar__4_4;
#line 865 "error_msg_inst.m"
  }
#line 862 "error_msg_inst.m"
}

#line 853 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0_1(
#line 853 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 853 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
#line 853 "error_msg_inst.m"
{
#line 853 "error_msg_inst.m"
  {
#line 853 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
#line 853 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
#line 853 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__conv0_HeadVar__4_4;

#line 853 "error_msg_inst.m"
    {
#line 853 "error_msg_inst.m"
      hlds__error_msg_inst__conv0_HeadVar__4_4 = hlds__error_msg_inst__arg_inst_to_inline_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
#line 853 "error_msg_inst.m"
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__4_4));
#line 853 "error_msg_inst.m"
    return hlds__error_msg_inst__wrapper_arg_2;
#line 853 "error_msg_inst.m"
  }
#line 853 "error_msg_inst.m"
}

#line 796 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_3_f_0(
#line 796 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 796 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 796 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Mode_7)
#line 796 "error_msg_inst.m"
{
#line 801 "error_msg_inst.m"
  {
#line 801 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 801 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_8;

#line 801 "error_msg_inst.m"
    if (((MR_tag((MR_Word) hlds__error_msg_inst__Mode_7)) == (MR_mktag((MR_Integer) 0))))
#line 801 "error_msg_inst.m"
      {
#line 801 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__InitInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
#line 801 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__FinalInst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
#line 801 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__InitInst_13;
#line 801 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__FinalInst_16;
#line 804 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__SubInitInstName_12;
#line 804 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_37_37;
#line 804 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_11_11;
#line 809 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__SubFinalInstName_15;
#line 809 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_38_38;
#line 809 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_14_14;
#line 818 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_39_39;
#line 818 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_40_40;
#line 818 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_41_41;
#line 818 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_42_42;

#line 804 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 804 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 804 "error_msg_inst.m"
          {
#line 804 "error_msg_inst.m"
            hlds__error_msg_inst__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 1)));
#line 804 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 804 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 804 "error_msg_inst.m"
              {
#line 804 "error_msg_inst.m"
                hlds__error_msg_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 1)));
#line 804 "error_msg_inst.m"
                hlds__error_msg_inst__SubInitInstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 2)));
#line 804 "error_msg_inst.m"
              }
#line 804 "error_msg_inst.m"
          }
#line 804 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 805 "error_msg_inst.m"
          {
#line 805 "error_msg_inst.m"
            hlds__error_msg_inst__InitInst_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 805 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 1) = ((MR_Box) (hlds__error_msg_inst__SubInitInstName_12));
#line 805 "error_msg_inst.m"
          }
#line 804 "error_msg_inst.m"
        else
#line 807 "error_msg_inst.m"
          hlds__error_msg_inst__InitInst_13 = hlds__error_msg_inst__InitInst0_9;
#line 809 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 809 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 809 "error_msg_inst.m"
          {
#line 809 "error_msg_inst.m"
            hlds__error_msg_inst__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 1)));
#line 809 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 809 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 809 "error_msg_inst.m"
              {
#line 809 "error_msg_inst.m"
                hlds__error_msg_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 1)));
#line 809 "error_msg_inst.m"
                hlds__error_msg_inst__SubFinalInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 2)));
#line 809 "error_msg_inst.m"
              }
#line 809 "error_msg_inst.m"
          }
#line 809 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 810 "error_msg_inst.m"
          {
#line 810 "error_msg_inst.m"
            hlds__error_msg_inst__FinalInst_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 810 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 1) = ((MR_Box) (hlds__error_msg_inst__SubFinalInstName_15));
#line 810 "error_msg_inst.m"
          }
#line 809 "error_msg_inst.m"
        else
#line 812 "error_msg_inst.m"
          hlds__error_msg_inst__FinalInst_16 = hlds__error_msg_inst__FinalInst0_10;
#line 818 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 818 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 818 "error_msg_inst.m"
          {
#line 818 "error_msg_inst.m"
            hlds__error_msg_inst__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 818 "error_msg_inst.m"
            hlds__error_msg_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 818 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_39_39 == (MR_Integer) 0);
#line 818 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 818 "error_msg_inst.m"
              {
#line 818 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 818 "error_msg_inst.m"
                  {
#line 819 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 819 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 819 "error_msg_inst.m"
                      {
#line 819 "error_msg_inst.m"
                        hlds__error_msg_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 819 "error_msg_inst.m"
                        hlds__error_msg_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 819 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_41_41 == (MR_Integer) 0);
#line 818 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 819 "error_msg_inst.m"
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "error_msg_inst.m"
                      }
#line 818 "error_msg_inst.m"
                  }
#line 818 "error_msg_inst.m"
              }
#line 818 "error_msg_inst.m"
          }
#line 817 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 821 "error_msg_inst.m"
          {
#line 821 "error_msg_inst.m"
            hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]);
#line 821 "error_msg_inst.m"
          }
#line 817 "error_msg_inst.m"
        else
#line 822 "error_msg_inst.m"
          {
#line 823 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_46_46;
#line 823 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_47_47;
#line 823 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_48_48;
#line 823 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_49_49;

#line 823 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 823 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 823 "error_msg_inst.m"
              {
#line 823 "error_msg_inst.m"
                hlds__error_msg_inst__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 823 "error_msg_inst.m"
                hlds__error_msg_inst__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 823 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_46_46 == (MR_Integer) 1);
#line 823 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 823 "error_msg_inst.m"
                  {
#line 823 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 823 "error_msg_inst.m"
                      {
#line 824 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 824 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 824 "error_msg_inst.m"
                          {
#line 824 "error_msg_inst.m"
                            hlds__error_msg_inst__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 824 "error_msg_inst.m"
                            hlds__error_msg_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 824 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_48_48 == (MR_Integer) 3);
#line 823 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 824 "error_msg_inst.m"
                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "error_msg_inst.m"
                          }
#line 823 "error_msg_inst.m"
                      }
#line 823 "error_msg_inst.m"
                  }
#line 823 "error_msg_inst.m"
              }
#line 822 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 826 "error_msg_inst.m"
              {
#line 826 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25]);
#line 826 "error_msg_inst.m"
              }
#line 822 "error_msg_inst.m"
            else
#line 827 "error_msg_inst.m"
              {
#line 828 "error_msg_inst.m"
                MR_Word hlds__error_msg_inst__V_53_53;
#line 828 "error_msg_inst.m"
                MR_Word hlds__error_msg_inst__V_54_54;

#line 828 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 828 "error_msg_inst.m"
                  {
#line 829 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 829 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 829 "error_msg_inst.m"
                      {
#line 829 "error_msg_inst.m"
                        hlds__error_msg_inst__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 829 "error_msg_inst.m"
                        hlds__error_msg_inst__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 829 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_53_53 == (MR_Integer) 0);
#line 828 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 829 "error_msg_inst.m"
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 829 "error_msg_inst.m"
                      }
#line 828 "error_msg_inst.m"
                  }
#line 827 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 831 "error_msg_inst.m"
                  {
#line 831 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24]);
#line 831 "error_msg_inst.m"
                  }
#line 827 "error_msg_inst.m"
                else
#line 832 "error_msg_inst.m"
                  {
#line 833 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__V_58_58;
#line 833 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__V_59_59;

#line 833 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 833 "error_msg_inst.m"
                      {
#line 834 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 834 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 834 "error_msg_inst.m"
                          {
#line 834 "error_msg_inst.m"
                            hlds__error_msg_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 834 "error_msg_inst.m"
                            hlds__error_msg_inst__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 834 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_58_58 == (MR_Integer) 1);
#line 833 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 834 "error_msg_inst.m"
                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "error_msg_inst.m"
                          }
#line 833 "error_msg_inst.m"
                      }
#line 832 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 836 "error_msg_inst.m"
                      {
#line 836 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[27]);
#line 836 "error_msg_inst.m"
                      }
#line 832 "error_msg_inst.m"
                    else
#line 839 "error_msg_inst.m"
                      {
#line 839 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__InitPieces_17;
#line 839 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__FinalPieces_18;
#line 839 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__V_65_65;

#line 838 "error_msg_inst.m"
                        {
#line 838 "error_msg_inst.m"
                          hlds__error_msg_inst__InitPieces_17 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__InitInst_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                        }
#line 840 "error_msg_inst.m"
                        {
#line 840 "error_msg_inst.m"
                          hlds__error_msg_inst__FinalPieces_18 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__FinalInst_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                        }
#line 842 "error_msg_inst.m"
                        {
#line 842 "error_msg_inst.m"
                          hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "error_msg_inst.m"
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[24])));
#line 842 "error_msg_inst.m"
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 1) = ((MR_Box) (hlds__error_msg_inst__FinalPieces_18));
#line 842 "error_msg_inst.m"
                        }
#line 842 "error_msg_inst.m"
                        {
#line 842 "error_msg_inst.m"
                          hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__InitPieces_17, hlds__error_msg_inst__V_65_65);
                        }
#line 839 "error_msg_inst.m"
                      }
#line 832 "error_msg_inst.m"
                  }
#line 827 "error_msg_inst.m"
              }
#line 822 "error_msg_inst.m"
          }
#line 801 "error_msg_inst.m"
      }
#line 801 "error_msg_inst.m"
    else
#line 845 "error_msg_inst.m"
      {
#line 845 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__ModeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
#line 845 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__ArgInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
#line 845 "error_msg_inst.m"
        MR_String hlds__error_msg_inst__BaseModeName_21;

#line 846 "error_msg_inst.m"
        {
#line 846 "error_msg_inst.m"
          hlds__error_msg_inst__BaseModeName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__error_msg_inst__ModeName_19);
        }
#line 850 "error_msg_inst.m"
        if ((hlds__error_msg_inst__ArgInsts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "error_msg_inst.m"
          {
#line 848 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_35_35;

#line 849 "error_msg_inst.m"
            {
#line 849 "error_msg_inst.m"
              hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BaseModeName_21));
#line 849 "error_msg_inst.m"
            }
#line 849 "error_msg_inst.m"
            {
#line 849 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
#line 849 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "error_msg_inst.m"
            }
#line 848 "error_msg_inst.m"
          }
#line 850 "error_msg_inst.m"
        else
#line 851 "error_msg_inst.m"
          {
#line 851 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__ArgInstPieces_24;
#line 851 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_25_25;
#line 851 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_26_26;
#line 851 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_27_27;
#line 851 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_28_28;
#line 851 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_30_30;

#line 853 "error_msg_inst.m"
            {
#line 853 "error_msg_inst.m"
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[1]));
#line 853 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__mode_to_inline_pieces_3_f_0_1));
#line 853 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 3) = ((MR_Box) (hlds__error_msg_inst__Info_5));
#line 853 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_6));
#line 853 "error_msg_inst.m"
            }
#line 852 "error_msg_inst.m"
            {
#line 852 "error_msg_inst.m"
              hlds__error_msg_inst__ArgInstPieces_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[2], hlds__error_msg_inst__V_25_25, hlds__error_msg_inst__ArgInsts_20);
            }
#line 856 "error_msg_inst.m"
            {
#line 856 "error_msg_inst.m"
              hlds__error_msg_inst__V_28_28 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BaseModeName_21, (MR_String) "(");
            }
#line 856 "error_msg_inst.m"
            {
#line 856 "error_msg_inst.m"
              hlds__error_msg_inst__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 856 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
#line 856 "error_msg_inst.m"
            }
#line 857 "error_msg_inst.m"
            {
#line 857 "error_msg_inst.m"
              hlds__error_msg_inst__V_30_30 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgInstPieces_24);
            }
#line 856 "error_msg_inst.m"
            {
#line 856 "error_msg_inst.m"
              hlds__error_msg_inst__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 0) = ((MR_Box) (hlds__error_msg_inst__V_27_27));
#line 856 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 1) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
#line 856 "error_msg_inst.m"
            }
#line 857 "error_msg_inst.m"
            {
#line 857 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22]));
            }
#line 851 "error_msg_inst.m"
          }
#line 845 "error_msg_inst.m"
      }
#line 801 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_8;
#line 801 "error_msg_inst.m"
  }
#line 796 "error_msg_inst.m"
}

#line 787 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0_1(
#line 787 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 787 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
#line 787 "error_msg_inst.m"
{
#line 787 "error_msg_inst.m"
  {
#line 787 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
#line 787 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
#line 787 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__conv0_HeadVar__4_4;

#line 787 "error_msg_inst.m"
    {
#line 787 "error_msg_inst.m"
      hlds__error_msg_inst__conv0_HeadVar__4_4 = hlds__error_msg_inst__arg_inst_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
#line 787 "error_msg_inst.m"
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__4_4));
#line 787 "error_msg_inst.m"
    return hlds__error_msg_inst__wrapper_arg_2;
#line 787 "error_msg_inst.m"
  }
#line 787 "error_msg_inst.m"
}

#line 712 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__mode_to_pieces_3_f_0(
#line 712 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_5,
#line 712 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_6,
#line 712 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Mode_7)
#line 712 "error_msg_inst.m"
{
#line 717 "error_msg_inst.m"
  {
#line 717 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 717 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_8;

#line 717 "error_msg_inst.m"
    if (((MR_tag((MR_Word) hlds__error_msg_inst__Mode_7)) == (MR_mktag((MR_Integer) 0))))
#line 717 "error_msg_inst.m"
      {
#line 717 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__InitInst0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
#line 717 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__FinalInst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
#line 717 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__InitInst_13;
#line 717 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__FinalInst_16;
#line 720 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__SubInitInstName_12;
#line 720 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_37_37;
#line 720 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_11_11;
#line 725 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__SubFinalInstName_15;
#line 725 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_38_38;
#line 725 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_14_14;
#line 732 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_39_39;
#line 732 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_40_40;
#line 732 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_41_41;
#line 732 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_42_42;

#line 720 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 720 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 720 "error_msg_inst.m"
          {
#line 720 "error_msg_inst.m"
            hlds__error_msg_inst__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_9, (MR_Integer) 1)));
#line 720 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 720 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 720 "error_msg_inst.m"
              {
#line 720 "error_msg_inst.m"
                hlds__error_msg_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 1)));
#line 720 "error_msg_inst.m"
                hlds__error_msg_inst__SubInitInstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_37_37, (MR_Integer) 2)));
#line 720 "error_msg_inst.m"
              }
#line 720 "error_msg_inst.m"
          }
#line 720 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 721 "error_msg_inst.m"
          {
#line 721 "error_msg_inst.m"
            hlds__error_msg_inst__InitInst_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 721 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, 1) = ((MR_Box) (hlds__error_msg_inst__SubInitInstName_12));
#line 721 "error_msg_inst.m"
          }
#line 720 "error_msg_inst.m"
        else
#line 723 "error_msg_inst.m"
          hlds__error_msg_inst__InitInst_13 = hlds__error_msg_inst__InitInst0_9;
#line 725 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 725 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 725 "error_msg_inst.m"
          {
#line 725 "error_msg_inst.m"
            hlds__error_msg_inst__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_10, (MR_Integer) 1)));
#line 725 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 725 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 725 "error_msg_inst.m"
              {
#line 725 "error_msg_inst.m"
                hlds__error_msg_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 1)));
#line 725 "error_msg_inst.m"
                hlds__error_msg_inst__SubFinalInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_38_38, (MR_Integer) 2)));
#line 725 "error_msg_inst.m"
              }
#line 725 "error_msg_inst.m"
          }
#line 725 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 726 "error_msg_inst.m"
          {
#line 726 "error_msg_inst.m"
            hlds__error_msg_inst__FinalInst_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 726 "error_msg_inst.m"
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, 1) = ((MR_Box) (hlds__error_msg_inst__SubFinalInstName_15));
#line 726 "error_msg_inst.m"
          }
#line 725 "error_msg_inst.m"
        else
#line 728 "error_msg_inst.m"
          hlds__error_msg_inst__FinalInst_16 = hlds__error_msg_inst__FinalInst0_10;
#line 732 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 732 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 732 "error_msg_inst.m"
          {
#line 732 "error_msg_inst.m"
            hlds__error_msg_inst__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 732 "error_msg_inst.m"
            hlds__error_msg_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 732 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_39_39 == (MR_Integer) 0);
#line 732 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 732 "error_msg_inst.m"
              {
#line 732 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 732 "error_msg_inst.m"
                  {
#line 733 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 733 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 733 "error_msg_inst.m"
                      {
#line 733 "error_msg_inst.m"
                        hlds__error_msg_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 733 "error_msg_inst.m"
                        hlds__error_msg_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 733 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_41_41 == (MR_Integer) 0);
#line 732 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 733 "error_msg_inst.m"
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "error_msg_inst.m"
                      }
#line 732 "error_msg_inst.m"
                  }
#line 732 "error_msg_inst.m"
              }
#line 732 "error_msg_inst.m"
          }
#line 731 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 735 "error_msg_inst.m"
          {
#line 735 "error_msg_inst.m"
            hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]);
#line 735 "error_msg_inst.m"
          }
#line 731 "error_msg_inst.m"
        else
#line 736 "error_msg_inst.m"
          {
#line 737 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_46_46;
#line 737 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_47_47;

#line 737 "error_msg_inst.m"
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 737 "error_msg_inst.m"
              {
#line 738 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 738 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 738 "error_msg_inst.m"
                  {
#line 738 "error_msg_inst.m"
                    hlds__error_msg_inst__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 738 "error_msg_inst.m"
                    hlds__error_msg_inst__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 738 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_46_46 == (MR_Integer) 0);
#line 737 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 738 "error_msg_inst.m"
                      hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "error_msg_inst.m"
                  }
#line 737 "error_msg_inst.m"
              }
#line 736 "error_msg_inst.m"
            if (hlds__error_msg_inst__succeeded)
#line 740 "error_msg_inst.m"
              {
#line 740 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24]);
#line 740 "error_msg_inst.m"
              }
#line 736 "error_msg_inst.m"
            else
#line 741 "error_msg_inst.m"
              {
#line 742 "error_msg_inst.m"
                MR_Word hlds__error_msg_inst__V_51_51;
#line 742 "error_msg_inst.m"
                MR_Word hlds__error_msg_inst__V_52_52;
#line 742 "error_msg_inst.m"
                MR_Word hlds__error_msg_inst__V_53_53;
#line 742 "error_msg_inst.m"
                MR_Word hlds__error_msg_inst__V_54_54;

#line 742 "error_msg_inst.m"
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 742 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 742 "error_msg_inst.m"
                  {
#line 742 "error_msg_inst.m"
                    hlds__error_msg_inst__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 742 "error_msg_inst.m"
                    hlds__error_msg_inst__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 742 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_51_51 == (MR_Integer) 1);
#line 742 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 742 "error_msg_inst.m"
                      {
#line 742 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 742 "error_msg_inst.m"
                          {
#line 743 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 743 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 743 "error_msg_inst.m"
                              {
#line 743 "error_msg_inst.m"
                                hlds__error_msg_inst__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 743 "error_msg_inst.m"
                                hlds__error_msg_inst__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 743 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_53_53 == (MR_Integer) 3);
#line 742 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 743 "error_msg_inst.m"
                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 743 "error_msg_inst.m"
                              }
#line 742 "error_msg_inst.m"
                          }
#line 742 "error_msg_inst.m"
                      }
#line 742 "error_msg_inst.m"
                  }
#line 741 "error_msg_inst.m"
                if (hlds__error_msg_inst__succeeded)
#line 745 "error_msg_inst.m"
                  {
#line 745 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25]);
#line 745 "error_msg_inst.m"
                  }
#line 741 "error_msg_inst.m"
                else
#line 746 "error_msg_inst.m"
                  {
#line 747 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__V_58_58;
#line 747 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__V_59_59;
#line 747 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__V_60_60;
#line 747 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__V_61_61;

#line 747 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 747 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 747 "error_msg_inst.m"
                      {
#line 747 "error_msg_inst.m"
                        hlds__error_msg_inst__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 747 "error_msg_inst.m"
                        hlds__error_msg_inst__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 747 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_58_58 == (MR_Integer) 1);
#line 747 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 747 "error_msg_inst.m"
                          {
#line 747 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 747 "error_msg_inst.m"
                              {
#line 748 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 748 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 748 "error_msg_inst.m"
                                  {
#line 748 "error_msg_inst.m"
                                    hlds__error_msg_inst__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 748 "error_msg_inst.m"
                                    hlds__error_msg_inst__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 748 "error_msg_inst.m"
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_60_60 == (MR_Integer) 1);
#line 747 "error_msg_inst.m"
                                    if (hlds__error_msg_inst__succeeded)
#line 748 "error_msg_inst.m"
                                      hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "error_msg_inst.m"
                                  }
#line 747 "error_msg_inst.m"
                              }
#line 747 "error_msg_inst.m"
                          }
#line 747 "error_msg_inst.m"
                      }
#line 746 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 750 "error_msg_inst.m"
                      {
#line 750 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[26]);
#line 750 "error_msg_inst.m"
                      }
#line 746 "error_msg_inst.m"
                    else
#line 751 "error_msg_inst.m"
                      {
#line 752 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__V_65_65;
#line 752 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__V_66_66;

#line 752 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 752 "error_msg_inst.m"
                          {
#line 753 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 753 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 753 "error_msg_inst.m"
                              {
#line 753 "error_msg_inst.m"
                                hlds__error_msg_inst__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 753 "error_msg_inst.m"
                                hlds__error_msg_inst__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 753 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_65_65 == (MR_Integer) 1);
#line 752 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 753 "error_msg_inst.m"
                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "error_msg_inst.m"
                              }
#line 752 "error_msg_inst.m"
                          }
#line 751 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 755 "error_msg_inst.m"
                          {
#line 755 "error_msg_inst.m"
                            hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[27]);
#line 755 "error_msg_inst.m"
                          }
#line 751 "error_msg_inst.m"
                        else
#line 756 "error_msg_inst.m"
                          {
#line 757 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_70_70;
#line 757 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_71_71;
#line 757 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_72_72;
#line 757 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_73_73;

#line 757 "error_msg_inst.m"
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 757 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 757 "error_msg_inst.m"
                              {
#line 757 "error_msg_inst.m"
                                hlds__error_msg_inst__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 757 "error_msg_inst.m"
                                hlds__error_msg_inst__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 757 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_70_70 == (MR_Integer) 2);
#line 757 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 757 "error_msg_inst.m"
                                  {
#line 757 "error_msg_inst.m"
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "error_msg_inst.m"
                                    if (hlds__error_msg_inst__succeeded)
#line 757 "error_msg_inst.m"
                                      {
#line 758 "error_msg_inst.m"
                                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 758 "error_msg_inst.m"
                                        if (hlds__error_msg_inst__succeeded)
#line 758 "error_msg_inst.m"
                                          {
#line 758 "error_msg_inst.m"
                                            hlds__error_msg_inst__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 758 "error_msg_inst.m"
                                            hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 758 "error_msg_inst.m"
                                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_72_72 == (MR_Integer) 4);
#line 757 "error_msg_inst.m"
                                            if (hlds__error_msg_inst__succeeded)
#line 758 "error_msg_inst.m"
                                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "error_msg_inst.m"
                                          }
#line 757 "error_msg_inst.m"
                                      }
#line 757 "error_msg_inst.m"
                                  }
#line 757 "error_msg_inst.m"
                              }
#line 756 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 760 "error_msg_inst.m"
                              {
#line 760 "error_msg_inst.m"
                                hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[28]);
#line 760 "error_msg_inst.m"
                              }
#line 756 "error_msg_inst.m"
                            else
#line 761 "error_msg_inst.m"
                              {
#line 762 "error_msg_inst.m"
                                MR_Word hlds__error_msg_inst__V_77_77;
#line 762 "error_msg_inst.m"
                                MR_Word hlds__error_msg_inst__V_78_78;
#line 762 "error_msg_inst.m"
                                MR_Word hlds__error_msg_inst__V_79_79;
#line 762 "error_msg_inst.m"
                                MR_Word hlds__error_msg_inst__V_80_80;

#line 762 "error_msg_inst.m"
                                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 762 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 762 "error_msg_inst.m"
                                  {
#line 762 "error_msg_inst.m"
                                    hlds__error_msg_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 1)));
#line 762 "error_msg_inst.m"
                                    hlds__error_msg_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_13, (MR_Integer) 2)));
#line 762 "error_msg_inst.m"
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_77_77 == (MR_Integer) 2);
#line 762 "error_msg_inst.m"
                                    if (hlds__error_msg_inst__succeeded)
#line 762 "error_msg_inst.m"
                                      {
#line 762 "error_msg_inst.m"
                                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "error_msg_inst.m"
                                        if (hlds__error_msg_inst__succeeded)
#line 762 "error_msg_inst.m"
                                          {
#line 763 "error_msg_inst.m"
                                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 763 "error_msg_inst.m"
                                            if (hlds__error_msg_inst__succeeded)
#line 763 "error_msg_inst.m"
                                              {
#line 763 "error_msg_inst.m"
                                                hlds__error_msg_inst__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 763 "error_msg_inst.m"
                                                hlds__error_msg_inst__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 763 "error_msg_inst.m"
                                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_79_79 == (MR_Integer) 2);
#line 762 "error_msg_inst.m"
                                                if (hlds__error_msg_inst__succeeded)
#line 763 "error_msg_inst.m"
                                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "error_msg_inst.m"
                                              }
#line 762 "error_msg_inst.m"
                                          }
#line 762 "error_msg_inst.m"
                                      }
#line 762 "error_msg_inst.m"
                                  }
#line 761 "error_msg_inst.m"
                                if (hlds__error_msg_inst__succeeded)
#line 765 "error_msg_inst.m"
                                  {
#line 765 "error_msg_inst.m"
                                    hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[29]);
#line 765 "error_msg_inst.m"
                                  }
#line 761 "error_msg_inst.m"
                                else
#line 766 "error_msg_inst.m"
                                  {
#line 767 "error_msg_inst.m"
                                    MR_Word hlds__error_msg_inst__V_84_84;
#line 767 "error_msg_inst.m"
                                    MR_Word hlds__error_msg_inst__V_85_85;

#line 767 "error_msg_inst.m"
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 767 "error_msg_inst.m"
                                    if (hlds__error_msg_inst__succeeded)
#line 767 "error_msg_inst.m"
                                      {
#line 768 "error_msg_inst.m"
                                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 768 "error_msg_inst.m"
                                        if (hlds__error_msg_inst__succeeded)
#line 768 "error_msg_inst.m"
                                          {
#line 768 "error_msg_inst.m"
                                            hlds__error_msg_inst__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 1)));
#line 768 "error_msg_inst.m"
                                            hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_16, (MR_Integer) 2)));
#line 768 "error_msg_inst.m"
                                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_84_84 == (MR_Integer) 2);
#line 767 "error_msg_inst.m"
                                            if (hlds__error_msg_inst__succeeded)
#line 768 "error_msg_inst.m"
                                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "error_msg_inst.m"
                                          }
#line 767 "error_msg_inst.m"
                                      }
#line 766 "error_msg_inst.m"
                                    if (hlds__error_msg_inst__succeeded)
#line 770 "error_msg_inst.m"
                                      {
#line 770 "error_msg_inst.m"
                                        hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[30]);
#line 770 "error_msg_inst.m"
                                      }
#line 766 "error_msg_inst.m"
                                    else
#line 773 "error_msg_inst.m"
                                      {
#line 773 "error_msg_inst.m"
                                        MR_Word hlds__error_msg_inst__InitPieces_17;
#line 773 "error_msg_inst.m"
                                        MR_Word hlds__error_msg_inst__FinalPieces_18;
#line 773 "error_msg_inst.m"
                                        MR_Word hlds__error_msg_inst__V_91_91;

#line 772 "error_msg_inst.m"
                                        {
#line 772 "error_msg_inst.m"
                                          hlds__error_msg_inst__InitPieces_17 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__InitInst_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                        }
#line 774 "error_msg_inst.m"
                                        {
#line 774 "error_msg_inst.m"
                                          hlds__error_msg_inst__FinalPieces_18 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_5, hlds__error_msg_inst__Expansions0_6, hlds__error_msg_inst__FinalInst_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                        }
#line 776 "error_msg_inst.m"
                                        {
#line 776 "error_msg_inst.m"
                                          hlds__error_msg_inst__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "error_msg_inst.m"
                                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[24])));
#line 776 "error_msg_inst.m"
                                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_91_91, 1) = ((MR_Box) (hlds__error_msg_inst__FinalPieces_18));
#line 776 "error_msg_inst.m"
                                        }
#line 776 "error_msg_inst.m"
                                        {
#line 776 "error_msg_inst.m"
                                          hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__InitPieces_17, hlds__error_msg_inst__V_91_91);
                                        }
#line 773 "error_msg_inst.m"
                                      }
#line 766 "error_msg_inst.m"
                                  }
#line 761 "error_msg_inst.m"
                              }
#line 756 "error_msg_inst.m"
                          }
#line 751 "error_msg_inst.m"
                      }
#line 746 "error_msg_inst.m"
                  }
#line 741 "error_msg_inst.m"
              }
#line 736 "error_msg_inst.m"
          }
#line 717 "error_msg_inst.m"
      }
#line 717 "error_msg_inst.m"
    else
#line 779 "error_msg_inst.m"
      {
#line 779 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__ModeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 0)));
#line 779 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__ArgInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_7, (MR_Integer) 1)));
#line 779 "error_msg_inst.m"
        MR_String hlds__error_msg_inst__BaseModeName_21;

#line 780 "error_msg_inst.m"
        {
#line 780 "error_msg_inst.m"
          hlds__error_msg_inst__BaseModeName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__error_msg_inst__ModeName_19);
        }
#line 784 "error_msg_inst.m"
        if ((hlds__error_msg_inst__ArgInsts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "error_msg_inst.m"
          {
#line 782 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_35_35;

#line 783 "error_msg_inst.m"
            {
#line 783 "error_msg_inst.m"
              hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 783 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BaseModeName_21));
#line 783 "error_msg_inst.m"
            }
#line 783 "error_msg_inst.m"
            {
#line 783 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
#line 783 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "error_msg_inst.m"
            }
#line 782 "error_msg_inst.m"
          }
#line 784 "error_msg_inst.m"
        else
#line 785 "error_msg_inst.m"
          {
#line 785 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__ArgInstPieces_24;
#line 785 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_25_25;
#line 785 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_26_26;
#line 785 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_27_27;
#line 785 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_28_28;
#line 785 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_30_30;

#line 787 "error_msg_inst.m"
            {
#line 787 "error_msg_inst.m"
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 787 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[1]));
#line 787 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__mode_to_pieces_3_f_0_1));
#line 787 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 787 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 3) = ((MR_Box) (hlds__error_msg_inst__Info_5));
#line 787 "error_msg_inst.m"
              MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_25_25, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_6));
#line 787 "error_msg_inst.m"
            }
#line 786 "error_msg_inst.m"
            {
#line 786 "error_msg_inst.m"
              hlds__error_msg_inst__ArgInstPieces_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[2], hlds__error_msg_inst__V_25_25, hlds__error_msg_inst__ArgInsts_20);
            }
#line 790 "error_msg_inst.m"
            {
#line 790 "error_msg_inst.m"
              hlds__error_msg_inst__V_28_28 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BaseModeName_21, (MR_String) "(");
            }
#line 790 "error_msg_inst.m"
            {
#line 790 "error_msg_inst.m"
              hlds__error_msg_inst__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 790 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_27_27, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
#line 790 "error_msg_inst.m"
            }
#line 791 "error_msg_inst.m"
            {
#line 791 "error_msg_inst.m"
              hlds__error_msg_inst__V_30_30 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgInstPieces_24);
            }
#line 790 "error_msg_inst.m"
            {
#line 790 "error_msg_inst.m"
              hlds__error_msg_inst__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 0) = ((MR_Box) (hlds__error_msg_inst__V_27_27));
#line 790 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_26_26, 1) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
#line 790 "error_msg_inst.m"
            }
#line 791 "error_msg_inst.m"
            {
#line 791 "error_msg_inst.m"
              hlds__error_msg_inst__Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22]));
            }
#line 785 "error_msg_inst.m"
          }
#line 779 "error_msg_inst.m"
      }
#line 717 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_8;
#line 717 "error_msg_inst.m"
  }
#line 712 "error_msg_inst.m"
}

#line 669 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0_1(
#line 669 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 669 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
#line 669 "error_msg_inst.m"
{
#line 669 "error_msg_inst.m"
  {
#line 669 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
#line 669 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
#line 669 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__conv1_Pieces_8;

#line 669 "error_msg_inst.m"
    {
#line 669 "error_msg_inst.m"
      hlds__error_msg_inst__conv1_Pieces_8 = hlds__error_msg_inst__mode_to_inline_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
#line 669 "error_msg_inst.m"
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv1_Pieces_8));
#line 669 "error_msg_inst.m"
    return hlds__error_msg_inst__wrapper_arg_2;
#line 669 "error_msg_inst.m"
  }
#line 669 "error_msg_inst.m"
}

#line 649 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 649 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__AnyPrefix_9,
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Uniq_10,
#line 649 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__PredInstInfo_11)
#line 649 "error_msg_inst.m"
{
#line 654 "error_msg_inst.m"
  {
#line 654 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__TypeInfo_101_101;
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 0)));
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ArgModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 1)));
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Det_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 3)));
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__UniqPieces_17;
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ArgModesPieces_19;
#line 654 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__IsDetStr_20;
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ModesDetPieces_21;
#line 654 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__V_40_40;
#line 655 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst___MaybeArgRegs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 2)));
#line 670 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__conv2_IsDetStr_20;

#line 659 "error_msg_inst.m"
#line 659 "error_msg_inst.m"
    switch (hlds__error_msg_inst__Uniq_10) {
#line 659 "error_msg_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 659 "error_msg_inst.m"
      case (MR_Integer) 3:
#line 659 "error_msg_inst.m"
      case (MR_Integer) 4:
#line 659 "error_msg_inst.m"
      case (MR_Integer) 2:
#line 659 "error_msg_inst.m"
      case (MR_Integer) 1:
#line 664 "error_msg_inst.m"
        {
#line 664 "error_msg_inst.m"
          MR_String hlds__error_msg_inst__BoundName_18;
#line 664 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__V_34_34;
#line 664 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__V_35_35;
#line 665 "error_msg_inst.m"
          MR_Box hlds__error_msg_inst__conv0_BoundName_18;

#line 665 "error_msg_inst.m"
          {
#line 665 "error_msg_inst.m"
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_10, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_BoundName_18);
          }
#line 665 "error_msg_inst.m"
          hlds__error_msg_inst__BoundName_18 = ((MR_String) hlds__error_msg_inst__conv0_BoundName_18);
#line 666 "error_msg_inst.m"
          {
#line 666 "error_msg_inst.m"
            hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "error_msg_inst.m"
            MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_18));
#line 666 "error_msg_inst.m"
          }
#line 666 "error_msg_inst.m"
          {
#line 666 "error_msg_inst.m"
            hlds__error_msg_inst__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
#line 666 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[21])));
#line 666 "error_msg_inst.m"
          }
#line 666 "error_msg_inst.m"
          {
#line 666 "error_msg_inst.m"
            hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[12])));
#line 666 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 1) = ((MR_Box) (hlds__error_msg_inst__V_34_34));
#line 666 "error_msg_inst.m"
          }
#line 664 "error_msg_inst.m"
        }
#line 659 "error_msg_inst.m"
        break;
#line 659 "error_msg_inst.m"
      case (MR_Integer) 0:
#line 658 "error_msg_inst.m"
        hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "error_msg_inst.m"
        break;
#line 659 "error_msg_inst.m"
    }
#line 3561 "hlds.error_msg_inst.c"
    hlds__error_msg_inst__TypeInfo_101_101 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[2];
#line 669 "error_msg_inst.m"
    {
#line 669 "error_msg_inst.m"
      hlds__error_msg_inst__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 669 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[0]));
#line 669 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0_1));
#line 669 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 669 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 3) = ((MR_Box) (hlds__error_msg_inst__Info_7));
#line 669 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_8));
#line 669 "error_msg_inst.m"
    }
#line 668 "error_msg_inst.m"
    {
#line 668 "error_msg_inst.m"
      hlds__error_msg_inst__ArgModesPieces_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__error_msg_inst__TypeInfo_101_101, hlds__error_msg_inst__V_40_40, hlds__error_msg_inst__ArgModes_14);
    }
#line 670 "error_msg_inst.m"
    {
#line 670 "error_msg_inst.m"
      parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Det_16, ((MR_Box) ((MR_String) "is ")), &hlds__error_msg_inst__conv2_IsDetStr_20);
    }
#line 670 "error_msg_inst.m"
    hlds__error_msg_inst__IsDetStr_20 = ((MR_String) hlds__error_msg_inst__conv2_IsDetStr_20);
#line 685 "error_msg_inst.m"
#line 685 "error_msg_inst.m"
    switch (hlds__error_msg_inst__PredOrFunc_13) {
#line 685 "error_msg_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 685 "error_msg_inst.m"
      case (MR_Integer) 1:
#line 686 "error_msg_inst.m"
        {
#line 686 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__RealArgModesPieces_25;
#line 686 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__RetModePieces_26;
#line 686 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__JoinedRealArgModePieces_27;
#line 687 "error_msg_inst.m"
          MR_Box hlds__error_msg_inst__conv3_RetModePieces_26;

#line 687 "error_msg_inst.m"
          {
#line 687 "error_msg_inst.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__error_msg_inst__TypeInfo_101_101, hlds__error_msg_inst__ArgModesPieces_19, &hlds__error_msg_inst__RealArgModesPieces_25, &hlds__error_msg_inst__conv3_RetModePieces_26);
          }
#line 687 "error_msg_inst.m"
          hlds__error_msg_inst__RetModePieces_26 = ((MR_Word) hlds__error_msg_inst__conv3_RetModePieces_26);
#line 689 "error_msg_inst.m"
          {
#line 689 "error_msg_inst.m"
            hlds__error_msg_inst__JoinedRealArgModePieces_27 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__RealArgModesPieces_25);
          }
#line 700 "error_msg_inst.m"
          if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "error_msg_inst.m"
            {
#line 696 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_61_61;
#line 696 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_62_62;
#line 696 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_63_63;
#line 696 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_65_65;
#line 696 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_67_67;
#line 696 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_68_68;

#line 697 "error_msg_inst.m"
              {
#line 697 "error_msg_inst.m"
                hlds__error_msg_inst__V_65_65 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func =");
              }
#line 697 "error_msg_inst.m"
              {
#line 697 "error_msg_inst.m"
                hlds__error_msg_inst__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_65_65);
              }
#line 697 "error_msg_inst.m"
              {
#line 697 "error_msg_inst.m"
                hlds__error_msg_inst__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 697 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_62_62, 0) = ((MR_Box) (hlds__error_msg_inst__V_63_63));
#line 697 "error_msg_inst.m"
              }
#line 697 "error_msg_inst.m"
              {
#line 697 "error_msg_inst.m"
                hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (hlds__error_msg_inst__V_62_62));
#line 697 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
#line 697 "error_msg_inst.m"
              }
#line 699 "error_msg_inst.m"
              {
#line 699 "error_msg_inst.m"
                hlds__error_msg_inst__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_68_68, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 699 "error_msg_inst.m"
              }
#line 699 "error_msg_inst.m"
              {
#line 699 "error_msg_inst.m"
                hlds__error_msg_inst__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_67_67, 0) = ((MR_Box) (hlds__error_msg_inst__V_68_68));
#line 699 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 699 "error_msg_inst.m"
              }
#line 698 "error_msg_inst.m"
              {
#line 698 "error_msg_inst.m"
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_61_61, hlds__error_msg_inst__V_67_67);
              }
#line 696 "error_msg_inst.m"
            }
#line 700 "error_msg_inst.m"
          else
#line 701 "error_msg_inst.m"
            {
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_42_42;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_43_43;
#line 701 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_44_44;
#line 701 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_46_46;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_48_48;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_49_49;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_52_52;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_55_55;
#line 701 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_56_56;

#line 702 "error_msg_inst.m"
              {
#line 702 "error_msg_inst.m"
                hlds__error_msg_inst__V_46_46 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func(");
              }
#line 702 "error_msg_inst.m"
              {
#line 702 "error_msg_inst.m"
                hlds__error_msg_inst__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_46_46);
              }
#line 702 "error_msg_inst.m"
              {
#line 702 "error_msg_inst.m"
                hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "error_msg_inst.m"
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 702 "error_msg_inst.m"
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__V_44_44));
#line 702 "error_msg_inst.m"
              }
#line 702 "error_msg_inst.m"
              {
#line 702 "error_msg_inst.m"
                hlds__error_msg_inst__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_42_42, 0) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
#line 702 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_42_42, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedRealArgModePieces_27));
#line 702 "error_msg_inst.m"
              }
#line 704 "error_msg_inst.m"
              {
#line 704 "error_msg_inst.m"
                hlds__error_msg_inst__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[15])));
#line 704 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
#line 704 "error_msg_inst.m"
              }
#line 704 "error_msg_inst.m"
              {
#line 704 "error_msg_inst.m"
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
#line 704 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 1) = ((MR_Box) (hlds__error_msg_inst__V_52_52));
#line 704 "error_msg_inst.m"
              }
#line 705 "error_msg_inst.m"
              {
#line 705 "error_msg_inst.m"
                hlds__error_msg_inst__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 705 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_56_56, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 705 "error_msg_inst.m"
              }
#line 705 "error_msg_inst.m"
              {
#line 705 "error_msg_inst.m"
                hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__V_56_56));
#line 705 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 705 "error_msg_inst.m"
              }
#line 704 "error_msg_inst.m"
              {
#line 704 "error_msg_inst.m"
                hlds__error_msg_inst__V_48_48 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_107_107, hlds__error_msg_inst__V_49_49, hlds__error_msg_inst__V_55_55);
              }
#line 703 "error_msg_inst.m"
              {
#line 703 "error_msg_inst.m"
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_107_107, hlds__error_msg_inst__V_42_42, hlds__error_msg_inst__V_48_48);
              }
#line 701 "error_msg_inst.m"
            }
#line 686 "error_msg_inst.m"
        }
#line 685 "error_msg_inst.m"
        break;
#line 685 "error_msg_inst.m"
      case (MR_Integer) 0:
#line 677 "error_msg_inst.m"
        if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 674 "error_msg_inst.m"
          {
#line 674 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_88_88;
#line 674 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_89_89;
#line 674 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_91_91;
#line 674 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_93_93;
#line 674 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_94_94;

#line 675 "error_msg_inst.m"
            {
#line 675 "error_msg_inst.m"
              hlds__error_msg_inst__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred");
            }
#line 675 "error_msg_inst.m"
            {
#line 675 "error_msg_inst.m"
              hlds__error_msg_inst__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_91_91);
            }
#line 675 "error_msg_inst.m"
            {
#line 675 "error_msg_inst.m"
              hlds__error_msg_inst__V_88_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_88_88, 0) = ((MR_Box) (hlds__error_msg_inst__V_89_89));
#line 675 "error_msg_inst.m"
            }
#line 676 "error_msg_inst.m"
            {
#line 676 "error_msg_inst.m"
              hlds__error_msg_inst__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_94_94, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 676 "error_msg_inst.m"
            }
#line 676 "error_msg_inst.m"
            {
#line 676 "error_msg_inst.m"
              hlds__error_msg_inst__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_93_93, 0) = ((MR_Box) (hlds__error_msg_inst__V_94_94));
#line 676 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 676 "error_msg_inst.m"
            }
#line 675 "error_msg_inst.m"
            {
#line 675 "error_msg_inst.m"
              hlds__error_msg_inst__ModesDetPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 0) = ((MR_Box) (hlds__error_msg_inst__V_88_88));
#line 675 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 1) = ((MR_Box) (hlds__error_msg_inst__V_93_93));
#line 675 "error_msg_inst.m"
            }
#line 674 "error_msg_inst.m"
          }
#line 677 "error_msg_inst.m"
        else
#line 678 "error_msg_inst.m"
          {
#line 678 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__JoinedArgModePieces_24;
#line 678 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_73_73;
#line 678 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_74_74;
#line 678 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_75_75;
#line 678 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_77_77;
#line 678 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_79_79;
#line 678 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_82_82;
#line 678 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_83_83;

#line 679 "error_msg_inst.m"
            {
#line 679 "error_msg_inst.m"
              hlds__error_msg_inst__JoinedArgModePieces_24 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgModesPieces_19);
            }
#line 681 "error_msg_inst.m"
            {
#line 681 "error_msg_inst.m"
              hlds__error_msg_inst__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred(");
            }
#line 681 "error_msg_inst.m"
            {
#line 681 "error_msg_inst.m"
              hlds__error_msg_inst__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_77_77);
            }
#line 681 "error_msg_inst.m"
            {
#line 681 "error_msg_inst.m"
              hlds__error_msg_inst__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 681 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_74_74, 1) = ((MR_Box) (hlds__error_msg_inst__V_75_75));
#line 681 "error_msg_inst.m"
            }
#line 681 "error_msg_inst.m"
            {
#line 681 "error_msg_inst.m"
              hlds__error_msg_inst__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_73_73, 0) = ((MR_Box) (hlds__error_msg_inst__V_74_74));
#line 681 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_73_73, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedArgModePieces_24));
#line 681 "error_msg_inst.m"
            }
#line 683 "error_msg_inst.m"
            {
#line 683 "error_msg_inst.m"
              hlds__error_msg_inst__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 683 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_83_83, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 683 "error_msg_inst.m"
            }
#line 683 "error_msg_inst.m"
            {
#line 683 "error_msg_inst.m"
              hlds__error_msg_inst__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 0) = ((MR_Box) (hlds__error_msg_inst__V_83_83));
#line 683 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 683 "error_msg_inst.m"
            }
#line 683 "error_msg_inst.m"
            {
#line 683 "error_msg_inst.m"
              hlds__error_msg_inst__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
#line 683 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_79_79, 1) = ((MR_Box) (hlds__error_msg_inst__V_82_82));
#line 683 "error_msg_inst.m"
            }
#line 682 "error_msg_inst.m"
            {
#line 682 "error_msg_inst.m"
              hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_73_73, hlds__error_msg_inst__V_79_79);
            }
#line 678 "error_msg_inst.m"
          }
#line 685 "error_msg_inst.m"
        break;
#line 685 "error_msg_inst.m"
    }
#line 708 "error_msg_inst.m"
    {
#line 708 "error_msg_inst.m"
      hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__UniqPieces_17, hlds__error_msg_inst__ModesDetPieces_21);
    }
#line 654 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 654 "error_msg_inst.m"
  }
#line 649 "error_msg_inst.m"
}

#line 606 "error_msg_inst.m"
static MR_Box MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0_1(
#line 606 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__closure_arg,
#line 606 "error_msg_inst.m"
  MR_Box hlds__error_msg_inst__wrapper_arg_1)
#line 606 "error_msg_inst.m"
{
#line 606 "error_msg_inst.m"
  {
#line 606 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__wrapper_arg_2;
#line 606 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__closure = hlds__error_msg_inst__closure_arg;
#line 606 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__conv1_Pieces_8;

#line 606 "error_msg_inst.m"
    {
#line 606 "error_msg_inst.m"
      hlds__error_msg_inst__conv1_Pieces_8 = hlds__error_msg_inst__mode_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__closure, (MR_Integer) 4))), ((MR_Word) hlds__error_msg_inst__wrapper_arg_1));
    }
#line 606 "error_msg_inst.m"
    hlds__error_msg_inst__wrapper_arg_2 = ((MR_Box) (hlds__error_msg_inst__conv1_Pieces_8));
#line 606 "error_msg_inst.m"
    return hlds__error_msg_inst__wrapper_arg_2;
#line 606 "error_msg_inst.m"
  }
#line 606 "error_msg_inst.m"
}

#line 587 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 587 "error_msg_inst.m"
  MR_String hlds__error_msg_inst__AnyPrefix_9,
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Uniq_10,
#line 587 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__PredInstInfo_11)
#line 587 "error_msg_inst.m"
{
#line 591 "error_msg_inst.m"
  {
#line 591 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__TypeInfo_105_105;
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 0)));
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ArgModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 1)));
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Det_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 3)));
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__UniqPieces_17;
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ArgModesPieces_19;
#line 591 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__IsDetStr_20;
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ModesDetPieces_21;
#line 591 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__V_40_40;
#line 592 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst___MaybeArgRegs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_11, (MR_Integer) 2)));
#line 607 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__conv2_IsDetStr_20;

#line 596 "error_msg_inst.m"
#line 596 "error_msg_inst.m"
    switch (hlds__error_msg_inst__Uniq_10) {
#line 596 "error_msg_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 596 "error_msg_inst.m"
      case (MR_Integer) 3:
#line 596 "error_msg_inst.m"
      case (MR_Integer) 4:
#line 596 "error_msg_inst.m"
      case (MR_Integer) 2:
#line 596 "error_msg_inst.m"
      case (MR_Integer) 1:
#line 601 "error_msg_inst.m"
        {
#line 601 "error_msg_inst.m"
          MR_String hlds__error_msg_inst__BoundName_18;
#line 601 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__V_34_34;
#line 601 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__V_35_35;
#line 602 "error_msg_inst.m"
          MR_Box hlds__error_msg_inst__conv0_BoundName_18;

#line 602 "error_msg_inst.m"
          {
#line 602 "error_msg_inst.m"
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_10, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_BoundName_18);
          }
#line 602 "error_msg_inst.m"
          hlds__error_msg_inst__BoundName_18 = ((MR_String) hlds__error_msg_inst__conv0_BoundName_18);
#line 603 "error_msg_inst.m"
          {
#line 603 "error_msg_inst.m"
            hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 603 "error_msg_inst.m"
            MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_18));
#line 603 "error_msg_inst.m"
          }
#line 603 "error_msg_inst.m"
          {
#line 603 "error_msg_inst.m"
            hlds__error_msg_inst__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 0) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
#line 603 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[21])));
#line 603 "error_msg_inst.m"
          }
#line 603 "error_msg_inst.m"
          {
#line 603 "error_msg_inst.m"
            hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[12])));
#line 603 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_17, 1) = ((MR_Box) (hlds__error_msg_inst__V_34_34));
#line 603 "error_msg_inst.m"
          }
#line 601 "error_msg_inst.m"
        }
#line 596 "error_msg_inst.m"
        break;
#line 596 "error_msg_inst.m"
      case (MR_Integer) 0:
#line 595 "error_msg_inst.m"
        hlds__error_msg_inst__UniqPieces_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "error_msg_inst.m"
        break;
#line 596 "error_msg_inst.m"
    }
#line 4119 "hlds.error_msg_inst.c"
    hlds__error_msg_inst__TypeInfo_105_105 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[2];
#line 606 "error_msg_inst.m"
    {
#line 606 "error_msg_inst.m"
      hlds__error_msg_inst__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 606 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (&hlds__error_msg_inst_scalar_common_3[0]));
#line 606 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0_1));
#line 606 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 606 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 3) = ((MR_Box) (hlds__error_msg_inst__Info_7));
#line 606 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_40_40, 4) = ((MR_Box) (hlds__error_msg_inst__Expansions0_8));
#line 606 "error_msg_inst.m"
    }
#line 605 "error_msg_inst.m"
    {
#line 605 "error_msg_inst.m"
      hlds__error_msg_inst__ArgModesPieces_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__error_msg_inst__TypeInfo_105_105, hlds__error_msg_inst__V_40_40, hlds__error_msg_inst__ArgModes_14);
    }
#line 607 "error_msg_inst.m"
    {
#line 607 "error_msg_inst.m"
      parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Det_16, ((MR_Box) ((MR_String) "is ")), &hlds__error_msg_inst__conv2_IsDetStr_20);
    }
#line 607 "error_msg_inst.m"
    hlds__error_msg_inst__IsDetStr_20 = ((MR_String) hlds__error_msg_inst__conv2_IsDetStr_20);
#line 623 "error_msg_inst.m"
#line 623 "error_msg_inst.m"
    switch (hlds__error_msg_inst__PredOrFunc_13) {
#line 623 "error_msg_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 623 "error_msg_inst.m"
      case (MR_Integer) 1:
#line 624 "error_msg_inst.m"
        {
#line 624 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__RealArgModesPieces_25;
#line 624 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__RetModePieces_26;
#line 624 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__JoinedRealArgModePieces_27;
#line 625 "error_msg_inst.m"
          MR_Box hlds__error_msg_inst__conv3_RetModePieces_26;

#line 625 "error_msg_inst.m"
          {
#line 625 "error_msg_inst.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__error_msg_inst__TypeInfo_105_105, hlds__error_msg_inst__ArgModesPieces_19, &hlds__error_msg_inst__RealArgModesPieces_25, &hlds__error_msg_inst__conv3_RetModePieces_26);
          }
#line 625 "error_msg_inst.m"
          hlds__error_msg_inst__RetModePieces_26 = ((MR_Word) hlds__error_msg_inst__conv3_RetModePieces_26);
#line 628 "error_msg_inst.m"
          {
#line 628 "error_msg_inst.m"
            hlds__error_msg_inst__JoinedRealArgModePieces_27 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__error_msg_inst__RealArgModesPieces_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 638 "error_msg_inst.m"
          if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "error_msg_inst.m"
            {
#line 634 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_65_65;
#line 634 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_66_66;
#line 634 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_67_67;
#line 634 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_69_69;
#line 634 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_71_71;
#line 634 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_72_72;

#line 635 "error_msg_inst.m"
              {
#line 635 "error_msg_inst.m"
                hlds__error_msg_inst__V_69_69 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func =");
              }
#line 635 "error_msg_inst.m"
              {
#line 635 "error_msg_inst.m"
                hlds__error_msg_inst__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_69_69);
              }
#line 635 "error_msg_inst.m"
              {
#line 635 "error_msg_inst.m"
                hlds__error_msg_inst__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_66_66, 0) = ((MR_Box) (hlds__error_msg_inst__V_67_67));
#line 635 "error_msg_inst.m"
              }
#line 635 "error_msg_inst.m"
              {
#line 635 "error_msg_inst.m"
                hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (hlds__error_msg_inst__V_66_66));
#line 635 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
#line 635 "error_msg_inst.m"
              }
#line 637 "error_msg_inst.m"
              {
#line 637 "error_msg_inst.m"
                hlds__error_msg_inst__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_72_72, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 637 "error_msg_inst.m"
              }
#line 637 "error_msg_inst.m"
              {
#line 637 "error_msg_inst.m"
                hlds__error_msg_inst__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 0) = ((MR_Box) (hlds__error_msg_inst__V_72_72));
#line 637 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 637 "error_msg_inst.m"
              }
#line 636 "error_msg_inst.m"
              {
#line 636 "error_msg_inst.m"
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_65_65, hlds__error_msg_inst__V_71_71);
              }
#line 634 "error_msg_inst.m"
            }
#line 638 "error_msg_inst.m"
          else
#line 639 "error_msg_inst.m"
            {
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_43_43;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_44_44;
#line 639 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_45_45;
#line 639 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__V_47_47;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_49_49;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_52_52;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_53_53;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_56_56;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_59_59;
#line 639 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_60_60;

#line 640 "error_msg_inst.m"
              {
#line 640 "error_msg_inst.m"
                hlds__error_msg_inst__V_47_47 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "func(");
              }
#line 640 "error_msg_inst.m"
              {
#line 640 "error_msg_inst.m"
                hlds__error_msg_inst__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_47_47);
              }
#line 640 "error_msg_inst.m"
              {
#line 640 "error_msg_inst.m"
                hlds__error_msg_inst__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_44_44, 0) = ((MR_Box) (hlds__error_msg_inst__V_45_45));
#line 640 "error_msg_inst.m"
              }
#line 641 "error_msg_inst.m"
              {
#line 641 "error_msg_inst.m"
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
#line 641 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_49_49, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedRealArgModePieces_27));
#line 641 "error_msg_inst.m"
              }
#line 640 "error_msg_inst.m"
              {
#line 640 "error_msg_inst.m"
                hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (hlds__error_msg_inst__V_44_44));
#line 640 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
#line 640 "error_msg_inst.m"
              }
#line 643 "error_msg_inst.m"
              {
#line 643 "error_msg_inst.m"
                hlds__error_msg_inst__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[14])));
#line 643 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_26));
#line 643 "error_msg_inst.m"
              }
#line 643 "error_msg_inst.m"
              {
#line 643 "error_msg_inst.m"
                hlds__error_msg_inst__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
#line 643 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_53_53, 1) = ((MR_Box) (hlds__error_msg_inst__V_56_56));
#line 643 "error_msg_inst.m"
              }
#line 644 "error_msg_inst.m"
              {
#line 644 "error_msg_inst.m"
                hlds__error_msg_inst__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_60_60, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 644 "error_msg_inst.m"
              }
#line 644 "error_msg_inst.m"
              {
#line 644 "error_msg_inst.m"
                hlds__error_msg_inst__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 0) = ((MR_Box) (hlds__error_msg_inst__V_60_60));
#line 644 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 644 "error_msg_inst.m"
              }
#line 643 "error_msg_inst.m"
              {
#line 643 "error_msg_inst.m"
                hlds__error_msg_inst__V_52_52 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_111_111, hlds__error_msg_inst__V_53_53, hlds__error_msg_inst__V_59_59);
              }
#line 642 "error_msg_inst.m"
              {
#line 642 "error_msg_inst.m"
                hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_111_111, hlds__error_msg_inst__V_43_43, hlds__error_msg_inst__V_52_52);
              }
#line 639 "error_msg_inst.m"
            }
#line 624 "error_msg_inst.m"
        }
#line 623 "error_msg_inst.m"
        break;
#line 623 "error_msg_inst.m"
      case (MR_Integer) 0:
#line 615 "error_msg_inst.m"
        if ((hlds__error_msg_inst__ArgModes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "error_msg_inst.m"
          {
#line 612 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_92_92;
#line 612 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_93_93;
#line 612 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_95_95;
#line 612 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_97_97;
#line 612 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_98_98;

#line 613 "error_msg_inst.m"
            {
#line 613 "error_msg_inst.m"
              hlds__error_msg_inst__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred");
            }
#line 613 "error_msg_inst.m"
            {
#line 613 "error_msg_inst.m"
              hlds__error_msg_inst__V_93_93 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_95_95);
            }
#line 613 "error_msg_inst.m"
            {
#line 613 "error_msg_inst.m"
              hlds__error_msg_inst__V_92_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_92_92, 0) = ((MR_Box) (hlds__error_msg_inst__V_93_93));
#line 613 "error_msg_inst.m"
            }
#line 614 "error_msg_inst.m"
            {
#line 614 "error_msg_inst.m"
              hlds__error_msg_inst__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_98_98, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 614 "error_msg_inst.m"
            }
#line 614 "error_msg_inst.m"
            {
#line 614 "error_msg_inst.m"
              hlds__error_msg_inst__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_97_97, 0) = ((MR_Box) (hlds__error_msg_inst__V_98_98));
#line 614 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 614 "error_msg_inst.m"
            }
#line 613 "error_msg_inst.m"
            {
#line 613 "error_msg_inst.m"
              hlds__error_msg_inst__ModesDetPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 0) = ((MR_Box) (hlds__error_msg_inst__V_92_92));
#line 613 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_21, 1) = ((MR_Box) (hlds__error_msg_inst__V_97_97));
#line 613 "error_msg_inst.m"
            }
#line 612 "error_msg_inst.m"
          }
#line 615 "error_msg_inst.m"
        else
#line 616 "error_msg_inst.m"
          {
#line 616 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__JoinedArgModePieces_24;
#line 616 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_77_77;
#line 616 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_78_78;
#line 616 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_79_79;
#line 616 "error_msg_inst.m"
            MR_String hlds__error_msg_inst__V_81_81;
#line 616 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_83_83;
#line 616 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_86_86;
#line 616 "error_msg_inst.m"
            MR_Word hlds__error_msg_inst__V_87_87;

#line 617 "error_msg_inst.m"
            {
#line 617 "error_msg_inst.m"
              hlds__error_msg_inst__JoinedArgModePieces_24 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgModesPieces_19);
            }
#line 619 "error_msg_inst.m"
            {
#line 619 "error_msg_inst.m"
              hlds__error_msg_inst__V_81_81 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_9, (MR_String) "pred(");
            }
#line 619 "error_msg_inst.m"
            {
#line 619 "error_msg_inst.m"
              hlds__error_msg_inst__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_81_81);
            }
#line 619 "error_msg_inst.m"
            {
#line 619 "error_msg_inst.m"
              hlds__error_msg_inst__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 619 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_78_78, 1) = ((MR_Box) (hlds__error_msg_inst__V_79_79));
#line 619 "error_msg_inst.m"
            }
#line 619 "error_msg_inst.m"
            {
#line 619 "error_msg_inst.m"
              hlds__error_msg_inst__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 0) = ((MR_Box) (hlds__error_msg_inst__V_78_78));
#line 619 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedArgModePieces_24));
#line 619 "error_msg_inst.m"
            }
#line 621 "error_msg_inst.m"
            {
#line 621 "error_msg_inst.m"
              hlds__error_msg_inst__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 621 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_87_87, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_20));
#line 621 "error_msg_inst.m"
            }
#line 621 "error_msg_inst.m"
            {
#line 621 "error_msg_inst.m"
              hlds__error_msg_inst__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_86_86, 0) = ((MR_Box) (hlds__error_msg_inst__V_87_87));
#line 621 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[22])));
#line 621 "error_msg_inst.m"
            }
#line 621 "error_msg_inst.m"
            {
#line 621 "error_msg_inst.m"
              hlds__error_msg_inst__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
#line 621 "error_msg_inst.m"
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_83_83, 1) = ((MR_Box) (hlds__error_msg_inst__V_86_86));
#line 621 "error_msg_inst.m"
            }
#line 620 "error_msg_inst.m"
            {
#line 620 "error_msg_inst.m"
              hlds__error_msg_inst__ModesDetPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_77_77, hlds__error_msg_inst__V_83_83);
            }
#line 616 "error_msg_inst.m"
          }
#line 623 "error_msg_inst.m"
        break;
#line 623 "error_msg_inst.m"
    }
#line 647 "error_msg_inst.m"
    {
#line 647 "error_msg_inst.m"
      hlds__error_msg_inst__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__UniqPieces_17, hlds__error_msg_inst__ModesDetPieces_21);
    }
#line 591 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 591 "error_msg_inst.m"
  }
#line 587 "error_msg_inst.m"
}

#line 491 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__InstName_8,
#line 491 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9)
#line 491 "error_msg_inst.m"
{
#line 497 "error_msg_inst.m"
  while (MR_TRUE)
#line 497 "error_msg_inst.m"
    {
#line 497 "error_msg_inst.m"
      /* tailcall optimized into a loop */
#line 497 "error_msg_inst.m"
      {
#line 497 "error_msg_inst.m"
        MR_bool hlds__error_msg_inst__succeeded;
#line 497 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__Pieces_10;

#line 497 "error_msg_inst.m"
#line 497 "error_msg_inst.m"
        switch (MR_tag((MR_Word) hlds__error_msg_inst__InstName_8)) {
#line 497 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 497 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 497 "error_msg_inst.m"
            {
#line 497 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__TypeCtorInfo_79_79;
#line 497 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)));
#line 497 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
#line 497 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 497 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__SymNameStr_17;
#line 497 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Expansions1_18;
#line 497 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ExpandInsts_19;
#line 498 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 498 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 512 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_75_75;
#line 512 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_76_76;

#line 507 "error_msg_inst.m"
              if (((MR_tag((MR_Word) hlds__error_msg_inst__SymName_11)) == (MR_mktag((MR_Integer) 1))))
#line 500 "error_msg_inst.m"
                {
#line 500 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
#line 500 "error_msg_inst.m"
                  MR_String hlds__error_msg_inst__BaseName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 1)));
#line 500 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__CurModuleName_16;

#line 501 "error_msg_inst.m"
                  {
#line 501 "error_msg_inst.m"
                    hlds__hlds_module__module_info_get_name_2_p_0(hlds__error_msg_inst__ModuleInfo_13, &hlds__error_msg_inst__CurModuleName_16);
                  }
#line 502 "error_msg_inst.m"
                  {
#line 502 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__ModuleName_14, hlds__error_msg_inst__CurModuleName_16);
                  }
#line 502 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 503 "error_msg_inst.m"
                    hlds__error_msg_inst__SymNameStr_17 = hlds__error_msg_inst__BaseName_15;
#line 502 "error_msg_inst.m"
                  else
#line 505 "error_msg_inst.m"
                    {
#line 505 "error_msg_inst.m"
                      hlds__error_msg_inst__SymNameStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__error_msg_inst__SymName_11);
                    }
#line 500 "error_msg_inst.m"
                }
#line 507 "error_msg_inst.m"
              else
#line 508 "error_msg_inst.m"
                hlds__error_msg_inst__SymNameStr_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
#line 4636 "hlds.error_msg_inst.c"
              hlds__error_msg_inst__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 511 "error_msg_inst.m"
              {
#line 511 "error_msg_inst.m"
                mercury__set__insert_3_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, ((MR_Box) (hlds__error_msg_inst__InstName_8)), hlds__error_msg_inst__Expansions0_7, &hlds__error_msg_inst__Expansions1_18);
              }
#line 512 "error_msg_inst.m"
              hlds__error_msg_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 512 "error_msg_inst.m"
              hlds__error_msg_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 512 "error_msg_inst.m"
              hlds__error_msg_inst__ExpandInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 517 "error_msg_inst.m"
#line 517 "error_msg_inst.m"
              switch (hlds__error_msg_inst__ExpandInsts_19) {
#line 517 "error_msg_inst.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 517 "error_msg_inst.m"
                case (MR_Integer) 0:
#line 515 "error_msg_inst.m"
                  {
#line 515 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                  }
#line 517 "error_msg_inst.m"
                  break;
#line 517 "error_msg_inst.m"
                case (MR_Integer) 1:
#line 521 "error_msg_inst.m"
                  {
#line 521 "error_msg_inst.m"
                    {
#line 521 "error_msg_inst.m"
                      hlds__error_msg_inst__succeeded = mercury__set__contains_2_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, hlds__error_msg_inst__Expansions0_7, ((MR_Box) (hlds__error_msg_inst__InstName_8)));
                    }
#line 521 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 523 "error_msg_inst.m"
                      {
#line 523 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__NamePieces_20;

#line 522 "error_msg_inst.m"
                        {
#line 522 "error_msg_inst.m"
                          hlds__error_msg_inst__NamePieces_20 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                        }
#line 524 "error_msg_inst.m"
                        {
#line 524 "error_msg_inst.m"
                          hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "error_msg_inst.m"
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
#line 524 "error_msg_inst.m"
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_20));
#line 524 "error_msg_inst.m"
                        }
#line 523 "error_msg_inst.m"
                      }
#line 521 "error_msg_inst.m"
                    else
#line 526 "error_msg_inst.m"
                      {
#line 526 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__EqvInst_21;

#line 526 "error_msg_inst.m"
                        {
#line 526 "error_msg_inst.m"
                          check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_13, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_21);
                        }
#line 529 "error_msg_inst.m"
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 529 "error_msg_inst.m"
                          {
#line 529 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__TypeInfo_158_158;
#line 529 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));
#line 529 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 2)));

#line 529 "error_msg_inst.m"
                            {
#line 529 "error_msg_inst.m"
                              hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__SymName_11, hlds__error_msg_inst__V_82_82);
                            }
#line 529 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 529 "error_msg_inst.m"
                              {
#line 4728 "hlds.error_msg_inst.c"
                                hlds__error_msg_inst__TypeInfo_158_158 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[7];
#line 529 "error_msg_inst.m"
                                {
#line 529 "error_msg_inst.m"
                                  hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_158_158, ((MR_Box) (hlds__error_msg_inst__ArgInsts_12)), ((MR_Box) (hlds__error_msg_inst__V_83_83)));
                                }
#line 529 "error_msg_inst.m"
                              }
#line 529 "error_msg_inst.m"
                          }
#line 529 "error_msg_inst.m"
                        else
#line 529 "error_msg_inst.m"
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 528 "error_msg_inst.m"
                          {
#line 528 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));

#line 528 "error_msg_inst.m"
                            {
#line 528 "error_msg_inst.m"
                              hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_81_81);
                            }
#line 528 "error_msg_inst.m"
                          }
#line 529 "error_msg_inst.m"
                        else
#line 529 "error_msg_inst.m"
                          hlds__error_msg_inst__succeeded = MR_FALSE;
#line 527 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 533 "error_msg_inst.m"
                          {
#line 533 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__NamePieces_64;

#line 532 "error_msg_inst.m"
                            {
#line 532 "error_msg_inst.m"
                              hlds__error_msg_inst__NamePieces_64 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                            }
#line 534 "error_msg_inst.m"
                            {
#line 534 "error_msg_inst.m"
                              hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
#line 534 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_64));
#line 534 "error_msg_inst.m"
                            }
#line 533 "error_msg_inst.m"
                          }
#line 527 "error_msg_inst.m"
                        else
#line 537 "error_msg_inst.m"
                          {
#line 537 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__ExpandedPieces_22;
#line 537 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_55_55;
#line 537 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_58_58;
#line 537 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_61_61;
#line 537 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__NamePieces_65;

#line 536 "error_msg_inst.m"
                            {
#line 536 "error_msg_inst.m"
                              hlds__error_msg_inst__NamePieces_65 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]));
                            }
#line 538 "error_msg_inst.m"
                            {
#line 538 "error_msg_inst.m"
                              hlds__error_msg_inst__ExpandedPieces_22 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__EqvInst_21, hlds__error_msg_inst__Suffix_9);
                            }
#line 540 "error_msg_inst.m"
                            {
#line 540 "error_msg_inst.m"
                              hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
#line 540 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_65));
#line 540 "error_msg_inst.m"
                            }
#line 541 "error_msg_inst.m"
                            {
#line 541 "error_msg_inst.m"
                              hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 541 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__ExpandedPieces_22));
#line 541 "error_msg_inst.m"
                            }
#line 541 "error_msg_inst.m"
                            {
#line 541 "error_msg_inst.m"
                              hlds__error_msg_inst__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[20])));
#line 541 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 1) = ((MR_Box) (hlds__error_msg_inst__V_61_61));
#line 541 "error_msg_inst.m"
                            }
#line 540 "error_msg_inst.m"
                            {
#line 540 "error_msg_inst.m"
                              hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_55_55, hlds__error_msg_inst__V_58_58);
                            }
#line 537 "error_msg_inst.m"
                          }
#line 526 "error_msg_inst.m"
                      }
#line 521 "error_msg_inst.m"
                  }
#line 517 "error_msg_inst.m"
                  break;
#line 517 "error_msg_inst.m"
              }
#line 497 "error_msg_inst.m"
            }
#line 497 "error_msg_inst.m"
            break;
#line 497 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 574 "error_msg_inst.m"
            {
#line 574 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ModuleInfo_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 574 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__EqvInst_146;
#line 575 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 575 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 577 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_139_139;

#line 576 "error_msg_inst.m"
              {
#line 576 "error_msg_inst.m"
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_145, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_146);
              }
#line 577 "error_msg_inst.m"
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 577 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 577 "error_msg_inst.m"
                {
#line 577 "error_msg_inst.m"
                  hlds__error_msg_inst__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 1)));
#line 577 "error_msg_inst.m"
                  {
#line 577 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_139_139);
                  }
#line 577 "error_msg_inst.m"
                }
#line 577 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 578 "error_msg_inst.m"
                {
#line 578 "error_msg_inst.m"
                  {
#line 578 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[11])));
#line 578 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 578 "error_msg_inst.m"
                  }
#line 578 "error_msg_inst.m"
                }
#line 577 "error_msg_inst.m"
              else
#line 580 "error_msg_inst.m"
                {
#line 580 "error_msg_inst.m"
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_146, hlds__error_msg_inst__Suffix_9);
                }
#line 574 "error_msg_inst.m"
            }
#line 497 "error_msg_inst.m"
            break;
#line 497 "error_msg_inst.m"
          case (MR_Integer) 2:
#line 574 "error_msg_inst.m"
            {
#line 574 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ModuleInfo_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 574 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__EqvInst_107;
#line 575 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 575 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 577 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_100_100;

#line 576 "error_msg_inst.m"
              {
#line 576 "error_msg_inst.m"
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_106, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_107);
              }
#line 577 "error_msg_inst.m"
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 577 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 577 "error_msg_inst.m"
                {
#line 577 "error_msg_inst.m"
                  hlds__error_msg_inst__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 1)));
#line 577 "error_msg_inst.m"
                  {
#line 577 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_100_100);
                  }
#line 577 "error_msg_inst.m"
                }
#line 577 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 578 "error_msg_inst.m"
                {
#line 578 "error_msg_inst.m"
                  {
#line 578 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[8])));
#line 578 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 578 "error_msg_inst.m"
                  }
#line 578 "error_msg_inst.m"
                }
#line 577 "error_msg_inst.m"
              else
#line 580 "error_msg_inst.m"
                {
#line 580 "error_msg_inst.m"
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_107, hlds__error_msg_inst__Suffix_9);
                }
#line 574 "error_msg_inst.m"
            }
#line 497 "error_msg_inst.m"
            break;
#line 497 "error_msg_inst.m"
          case (MR_Integer) 3:
#line 497 "error_msg_inst.m"
#line 497 "error_msg_inst.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)))) {
#line 497 "error_msg_inst.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 497 "error_msg_inst.m"
              case (MR_Integer) 0:
#line 574 "error_msg_inst.m"
                {
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_94;
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 577 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_87_87;

#line 576 "error_msg_inst.m"
                  {
#line 576 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_93, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_94);
                  }
#line 577 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 577 "error_msg_inst.m"
                    {
#line 577 "error_msg_inst.m"
                      hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 1)));
#line 577 "error_msg_inst.m"
                      {
#line 577 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_87_87);
                      }
#line 577 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 578 "error_msg_inst.m"
                    {
#line 578 "error_msg_inst.m"
                      {
#line 578 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[7])));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 578 "error_msg_inst.m"
                      }
#line 578 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  else
#line 580 "error_msg_inst.m"
                    {
#line 580 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_94, hlds__error_msg_inst__Suffix_9);
                    }
#line 574 "error_msg_inst.m"
                }
#line 497 "error_msg_inst.m"
                break;
#line 497 "error_msg_inst.m"
              case (MR_Integer) 1:
#line 574 "error_msg_inst.m"
                {
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_72;
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 577 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_84_84;

#line 576 "error_msg_inst.m"
                  {
#line 576 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_71, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_72);
                  }
#line 577 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 577 "error_msg_inst.m"
                    {
#line 577 "error_msg_inst.m"
                      hlds__error_msg_inst__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 1)));
#line 577 "error_msg_inst.m"
                      {
#line 577 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_84_84);
                      }
#line 577 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 578 "error_msg_inst.m"
                    {
#line 578 "error_msg_inst.m"
                      {
#line 578 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[6])));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 578 "error_msg_inst.m"
                      }
#line 578 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  else
#line 580 "error_msg_inst.m"
                    {
#line 580 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_72, hlds__error_msg_inst__Suffix_9);
                    }
#line 574 "error_msg_inst.m"
                }
#line 497 "error_msg_inst.m"
                break;
#line 497 "error_msg_inst.m"
              case (MR_Integer) 2:
#line 574 "error_msg_inst.m"
                {
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_133;
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 577 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_126_126;

#line 576 "error_msg_inst.m"
                  {
#line 576 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_132, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_133);
                  }
#line 577 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 577 "error_msg_inst.m"
                    {
#line 577 "error_msg_inst.m"
                      hlds__error_msg_inst__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 1)));
#line 577 "error_msg_inst.m"
                      {
#line 577 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_126_126);
                      }
#line 577 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 578 "error_msg_inst.m"
                    {
#line 578 "error_msg_inst.m"
                      {
#line 578 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[10])));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 578 "error_msg_inst.m"
                      }
#line 578 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  else
#line 580 "error_msg_inst.m"
                    {
#line 580 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_133, hlds__error_msg_inst__Suffix_9);
                    }
#line 574 "error_msg_inst.m"
                }
#line 497 "error_msg_inst.m"
                break;
#line 497 "error_msg_inst.m"
              case (MR_Integer) 3:
#line 574 "error_msg_inst.m"
                {
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 574 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_120;
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 575 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 577 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_113_113;

#line 576 "error_msg_inst.m"
                  {
#line 576 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_119, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_120);
                  }
#line 577 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 577 "error_msg_inst.m"
                    {
#line 577 "error_msg_inst.m"
                      hlds__error_msg_inst__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 1)));
#line 577 "error_msg_inst.m"
                      {
#line 577 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_113_113);
                      }
#line 577 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 578 "error_msg_inst.m"
                    {
#line 578 "error_msg_inst.m"
                      {
#line 578 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[9])));
#line 578 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 578 "error_msg_inst.m"
                      }
#line 578 "error_msg_inst.m"
                    }
#line 577 "error_msg_inst.m"
                  else
#line 580 "error_msg_inst.m"
                    {
#line 580 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_120, hlds__error_msg_inst__Suffix_9);
                    }
#line 574 "error_msg_inst.m"
                }
#line 497 "error_msg_inst.m"
                break;
#line 497 "error_msg_inst.m"
              case (MR_Integer) 4:
#line 551 "error_msg_inst.m"
                {
#line 551 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
#line 551 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_69;
#line 551 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst___Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));

#line 553 "error_msg_inst.m"
                  {
#line 553 "error_msg_inst.m"
                    hlds__error_msg_inst__EqvInst_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 553 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 553 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 1) = ((MR_Box) (hlds__error_msg_inst__Uniq_25));
#line 553 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "error_msg_inst.m"
                  }
#line 554 "error_msg_inst.m"
                  {
#line 554 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_69, hlds__error_msg_inst__Suffix_9);
                  }
#line 551 "error_msg_inst.m"
                }
#line 497 "error_msg_inst.m"
                break;
#line 497 "error_msg_inst.m"
              case (MR_Integer) 5:
#line 546 "error_msg_inst.m"
                {
#line 546 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));
#line 546 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst___Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));

#line 548 "error_msg_inst.m"
                  /* direct tailcall eliminated */
#line 548 "error_msg_inst.m"
                  {
#line 548 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__InstName__tmp_copy_8 = hlds__error_msg_inst__SubInstName_24;

#line 548 "error_msg_inst.m"
                    hlds__error_msg_inst__InstName_8 = hlds__error_msg_inst__InstName__tmp_copy_8;
#line 548 "error_msg_inst.m"
                  }
#line 548 "error_msg_inst.m"
                  continue;
#line 546 "error_msg_inst.m"
                }
#line 497 "error_msg_inst.m"
                break;
#line 497 "error_msg_inst.m"
            }
#line 497 "error_msg_inst.m"
            break;
#line 497 "error_msg_inst.m"
        }
#line 497 "error_msg_inst.m"
        return hlds__error_msg_inst__Pieces_10;
#line 497 "error_msg_inst.m"
      }
#line 497 "error_msg_inst.m"
      break;
#line 497 "error_msg_inst.m"
    }
#line 491 "error_msg_inst.m"
}

#line 398 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_4_f_0(
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__InstName_8,
#line 398 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9)
#line 398 "error_msg_inst.m"
{
#line 404 "error_msg_inst.m"
  while (MR_TRUE)
#line 404 "error_msg_inst.m"
    {
#line 404 "error_msg_inst.m"
      /* tailcall optimized into a loop */
#line 404 "error_msg_inst.m"
      {
#line 404 "error_msg_inst.m"
        MR_bool hlds__error_msg_inst__succeeded;
#line 404 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__Pieces_10;

#line 404 "error_msg_inst.m"
#line 404 "error_msg_inst.m"
        switch (MR_tag((MR_Word) hlds__error_msg_inst__InstName_8)) {
#line 404 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 404 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 404 "error_msg_inst.m"
            {
#line 404 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__TypeCtorInfo_79_79;
#line 404 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)));
#line 404 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
#line 404 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 404 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__SymNameStr_17;
#line 404 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Expansions1_18;
#line 404 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ExpandInsts_19;
#line 405 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 405 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 419 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_75_75;
#line 419 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_76_76;

#line 414 "error_msg_inst.m"
              if (((MR_tag((MR_Word) hlds__error_msg_inst__SymName_11)) == (MR_mktag((MR_Integer) 1))))
#line 407 "error_msg_inst.m"
                {
#line 407 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
#line 407 "error_msg_inst.m"
                  MR_String hlds__error_msg_inst__BaseName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_11, (MR_Integer) 1)));
#line 407 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__CurModuleName_16;

#line 408 "error_msg_inst.m"
                  {
#line 408 "error_msg_inst.m"
                    hlds__hlds_module__module_info_get_name_2_p_0(hlds__error_msg_inst__ModuleInfo_13, &hlds__error_msg_inst__CurModuleName_16);
                  }
#line 409 "error_msg_inst.m"
                  {
#line 409 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__ModuleName_14, hlds__error_msg_inst__CurModuleName_16);
                  }
#line 409 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 410 "error_msg_inst.m"
                    hlds__error_msg_inst__SymNameStr_17 = hlds__error_msg_inst__BaseName_15;
#line 409 "error_msg_inst.m"
                  else
#line 412 "error_msg_inst.m"
                    {
#line 412 "error_msg_inst.m"
                      hlds__error_msg_inst__SymNameStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__error_msg_inst__SymName_11);
                    }
#line 407 "error_msg_inst.m"
                }
#line 414 "error_msg_inst.m"
              else
#line 415 "error_msg_inst.m"
                hlds__error_msg_inst__SymNameStr_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__SymName_11, (MR_Integer) 0)));
#line 5407 "hlds.error_msg_inst.c"
              hlds__error_msg_inst__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 418 "error_msg_inst.m"
              {
#line 418 "error_msg_inst.m"
                mercury__set__insert_3_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, ((MR_Box) (hlds__error_msg_inst__InstName_8)), hlds__error_msg_inst__Expansions0_7, &hlds__error_msg_inst__Expansions1_18);
              }
#line 419 "error_msg_inst.m"
              hlds__error_msg_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 419 "error_msg_inst.m"
              hlds__error_msg_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 419 "error_msg_inst.m"
              hlds__error_msg_inst__ExpandInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 424 "error_msg_inst.m"
#line 424 "error_msg_inst.m"
              switch (hlds__error_msg_inst__ExpandInsts_19) {
#line 424 "error_msg_inst.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 424 "error_msg_inst.m"
                case (MR_Integer) 0:
#line 422 "error_msg_inst.m"
                  {
#line 422 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                  }
#line 424 "error_msg_inst.m"
                  break;
#line 424 "error_msg_inst.m"
                case (MR_Integer) 1:
#line 428 "error_msg_inst.m"
                  {
#line 428 "error_msg_inst.m"
                    {
#line 428 "error_msg_inst.m"
                      hlds__error_msg_inst__succeeded = mercury__set__contains_2_p_0(hlds__error_msg_inst__TypeCtorInfo_79_79, hlds__error_msg_inst__Expansions0_7, ((MR_Box) (hlds__error_msg_inst__InstName_8)));
                    }
#line 428 "error_msg_inst.m"
                    if (hlds__error_msg_inst__succeeded)
#line 430 "error_msg_inst.m"
                      {
#line 430 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__NamePieces_20;

#line 429 "error_msg_inst.m"
                        {
#line 429 "error_msg_inst.m"
                          hlds__error_msg_inst__NamePieces_20 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                        }
#line 431 "error_msg_inst.m"
                        {
#line 431 "error_msg_inst.m"
                          hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "error_msg_inst.m"
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
#line 431 "error_msg_inst.m"
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_20));
#line 431 "error_msg_inst.m"
                        }
#line 430 "error_msg_inst.m"
                      }
#line 428 "error_msg_inst.m"
                    else
#line 433 "error_msg_inst.m"
                      {
#line 433 "error_msg_inst.m"
                        MR_Word hlds__error_msg_inst__EqvInst_21;

#line 433 "error_msg_inst.m"
                        {
#line 433 "error_msg_inst.m"
                          check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_13, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_21);
                        }
#line 436 "error_msg_inst.m"
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 436 "error_msg_inst.m"
                          {
#line 436 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__TypeInfo_158_158;
#line 436 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));
#line 436 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 2)));

#line 436 "error_msg_inst.m"
                            {
#line 436 "error_msg_inst.m"
                              hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__SymName_11, hlds__error_msg_inst__V_82_82);
                            }
#line 436 "error_msg_inst.m"
                            if (hlds__error_msg_inst__succeeded)
#line 436 "error_msg_inst.m"
                              {
#line 5499 "hlds.error_msg_inst.c"
                                hlds__error_msg_inst__TypeInfo_158_158 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[7];
#line 436 "error_msg_inst.m"
                                {
#line 436 "error_msg_inst.m"
                                  hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_158_158, ((MR_Box) (hlds__error_msg_inst__ArgInsts_12)), ((MR_Box) (hlds__error_msg_inst__V_83_83)));
                                }
#line 436 "error_msg_inst.m"
                              }
#line 436 "error_msg_inst.m"
                          }
#line 436 "error_msg_inst.m"
                        else
#line 436 "error_msg_inst.m"
                        if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 435 "error_msg_inst.m"
                          {
#line 435 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_21, (MR_Integer) 1)));

#line 435 "error_msg_inst.m"
                            {
#line 435 "error_msg_inst.m"
                              hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_81_81);
                            }
#line 435 "error_msg_inst.m"
                          }
#line 436 "error_msg_inst.m"
                        else
#line 436 "error_msg_inst.m"
                          hlds__error_msg_inst__succeeded = MR_FALSE;
#line 434 "error_msg_inst.m"
                        if (hlds__error_msg_inst__succeeded)
#line 440 "error_msg_inst.m"
                          {
#line 440 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__NamePieces_64;

#line 439 "error_msg_inst.m"
                            {
#line 439 "error_msg_inst.m"
                              hlds__error_msg_inst__NamePieces_64 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, hlds__error_msg_inst__Suffix_9);
                            }
#line 441 "error_msg_inst.m"
                            {
#line 441 "error_msg_inst.m"
                              hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
#line 441 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_64));
#line 441 "error_msg_inst.m"
                            }
#line 440 "error_msg_inst.m"
                          }
#line 434 "error_msg_inst.m"
                        else
#line 444 "error_msg_inst.m"
                          {
#line 444 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__ExpandedPieces_22;
#line 444 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_55_55;
#line 444 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_58_58;
#line 444 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__V_61_61;
#line 444 "error_msg_inst.m"
                            MR_Word hlds__error_msg_inst__NamePieces_65;

#line 443 "error_msg_inst.m"
                            {
#line 443 "error_msg_inst.m"
                              hlds__error_msg_inst__NamePieces_65 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__SymNameStr_17, hlds__error_msg_inst__ArgInsts_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]));
                            }
#line 445 "error_msg_inst.m"
                            {
#line 445 "error_msg_inst.m"
                              hlds__error_msg_inst__ExpandedPieces_22 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions1_18, hlds__error_msg_inst__EqvInst_21, hlds__error_msg_inst__Suffix_9);
                            }
#line 447 "error_msg_inst.m"
                            {
#line 447 "error_msg_inst.m"
                              hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
#line 447 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_65));
#line 447 "error_msg_inst.m"
                            }
#line 448 "error_msg_inst.m"
                            {
#line 448 "error_msg_inst.m"
                              hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 448 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__ExpandedPieces_22));
#line 448 "error_msg_inst.m"
                            }
#line 448 "error_msg_inst.m"
                            {
#line 448 "error_msg_inst.m"
                              hlds__error_msg_inst__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[20])));
#line 448 "error_msg_inst.m"
                              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 1) = ((MR_Box) (hlds__error_msg_inst__V_61_61));
#line 448 "error_msg_inst.m"
                            }
#line 447 "error_msg_inst.m"
                            {
#line 447 "error_msg_inst.m"
                              hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_55_55, hlds__error_msg_inst__V_58_58);
                            }
#line 444 "error_msg_inst.m"
                          }
#line 433 "error_msg_inst.m"
                      }
#line 428 "error_msg_inst.m"
                  }
#line 424 "error_msg_inst.m"
                  break;
#line 424 "error_msg_inst.m"
              }
#line 404 "error_msg_inst.m"
            }
#line 404 "error_msg_inst.m"
            break;
#line 404 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 480 "error_msg_inst.m"
            {
#line 480 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ModuleInfo_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 480 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__EqvInst_146;
#line 481 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 481 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 483 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_139_139;

#line 482 "error_msg_inst.m"
              {
#line 482 "error_msg_inst.m"
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_145, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_146);
              }
#line 483 "error_msg_inst.m"
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 483 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 483 "error_msg_inst.m"
                {
#line 483 "error_msg_inst.m"
                  hlds__error_msg_inst__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_146, (MR_Integer) 1)));
#line 483 "error_msg_inst.m"
                  {
#line 483 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_139_139);
                  }
#line 483 "error_msg_inst.m"
                }
#line 483 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 484 "error_msg_inst.m"
                {
#line 484 "error_msg_inst.m"
                  {
#line 484 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[11])));
#line 484 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 484 "error_msg_inst.m"
                  }
#line 484 "error_msg_inst.m"
                }
#line 483 "error_msg_inst.m"
              else
#line 486 "error_msg_inst.m"
                {
#line 486 "error_msg_inst.m"
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_146, hlds__error_msg_inst__Suffix_9);
                }
#line 480 "error_msg_inst.m"
            }
#line 404 "error_msg_inst.m"
            break;
#line 404 "error_msg_inst.m"
          case (MR_Integer) 2:
#line 480 "error_msg_inst.m"
            {
#line 480 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ModuleInfo_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 480 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__EqvInst_107;
#line 481 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 481 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 483 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_100_100;

#line 482 "error_msg_inst.m"
              {
#line 482 "error_msg_inst.m"
                check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_106, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_107);
              }
#line 483 "error_msg_inst.m"
              hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 483 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 483 "error_msg_inst.m"
                {
#line 483 "error_msg_inst.m"
                  hlds__error_msg_inst__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_107, (MR_Integer) 1)));
#line 483 "error_msg_inst.m"
                  {
#line 483 "error_msg_inst.m"
                    hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_100_100);
                  }
#line 483 "error_msg_inst.m"
                }
#line 483 "error_msg_inst.m"
              if (hlds__error_msg_inst__succeeded)
#line 484 "error_msg_inst.m"
                {
#line 484 "error_msg_inst.m"
                  {
#line 484 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[8])));
#line 484 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 484 "error_msg_inst.m"
                  }
#line 484 "error_msg_inst.m"
                }
#line 483 "error_msg_inst.m"
              else
#line 486 "error_msg_inst.m"
                {
#line 486 "error_msg_inst.m"
                  hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_107, hlds__error_msg_inst__Suffix_9);
                }
#line 480 "error_msg_inst.m"
            }
#line 404 "error_msg_inst.m"
            break;
#line 404 "error_msg_inst.m"
          case (MR_Integer) 3:
#line 404 "error_msg_inst.m"
#line 404 "error_msg_inst.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 0)))) {
#line 404 "error_msg_inst.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 404 "error_msg_inst.m"
              case (MR_Integer) 0:
#line 480 "error_msg_inst.m"
                {
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_94;
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 483 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_87_87;

#line 482 "error_msg_inst.m"
                  {
#line 482 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_93, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_94);
                  }
#line 483 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 483 "error_msg_inst.m"
                    {
#line 483 "error_msg_inst.m"
                      hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 1)));
#line 483 "error_msg_inst.m"
                      {
#line 483 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_87_87);
                      }
#line 483 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 484 "error_msg_inst.m"
                    {
#line 484 "error_msg_inst.m"
                      {
#line 484 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[7])));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 484 "error_msg_inst.m"
                      }
#line 484 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  else
#line 486 "error_msg_inst.m"
                    {
#line 486 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_94, hlds__error_msg_inst__Suffix_9);
                    }
#line 480 "error_msg_inst.m"
                }
#line 404 "error_msg_inst.m"
                break;
#line 404 "error_msg_inst.m"
              case (MR_Integer) 1:
#line 480 "error_msg_inst.m"
                {
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_72;
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 483 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_84_84;

#line 482 "error_msg_inst.m"
                  {
#line 482 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_71, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_72);
                  }
#line 483 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 483 "error_msg_inst.m"
                    {
#line 483 "error_msg_inst.m"
                      hlds__error_msg_inst__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_72, (MR_Integer) 1)));
#line 483 "error_msg_inst.m"
                      {
#line 483 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_84_84);
                      }
#line 483 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 484 "error_msg_inst.m"
                    {
#line 484 "error_msg_inst.m"
                      {
#line 484 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[6])));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 484 "error_msg_inst.m"
                      }
#line 484 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  else
#line 486 "error_msg_inst.m"
                    {
#line 486 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_72, hlds__error_msg_inst__Suffix_9);
                    }
#line 480 "error_msg_inst.m"
                }
#line 404 "error_msg_inst.m"
                break;
#line 404 "error_msg_inst.m"
              case (MR_Integer) 2:
#line 480 "error_msg_inst.m"
                {
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_133;
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 483 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_126_126;

#line 482 "error_msg_inst.m"
                  {
#line 482 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_132, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_133);
                  }
#line 483 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 483 "error_msg_inst.m"
                    {
#line 483 "error_msg_inst.m"
                      hlds__error_msg_inst__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_133, (MR_Integer) 1)));
#line 483 "error_msg_inst.m"
                      {
#line 483 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_126_126);
                      }
#line 483 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 484 "error_msg_inst.m"
                    {
#line 484 "error_msg_inst.m"
                      {
#line 484 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[10])));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 484 "error_msg_inst.m"
                      }
#line 484 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  else
#line 486 "error_msg_inst.m"
                    {
#line 486 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_133, hlds__error_msg_inst__Suffix_9);
                    }
#line 480 "error_msg_inst.m"
                }
#line 404 "error_msg_inst.m"
                break;
#line 404 "error_msg_inst.m"
              case (MR_Integer) 3:
#line 480 "error_msg_inst.m"
                {
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__ModuleInfo_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 480 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_120;
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 481 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 483 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_113_113;

#line 482 "error_msg_inst.m"
                  {
#line 482 "error_msg_inst.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_119, hlds__error_msg_inst__InstName_8, &hlds__error_msg_inst__EqvInst_120);
                  }
#line 483 "error_msg_inst.m"
                  hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 483 "error_msg_inst.m"
                    {
#line 483 "error_msg_inst.m"
                      hlds__error_msg_inst__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_120, (MR_Integer) 1)));
#line 483 "error_msg_inst.m"
                      {
#line 483 "error_msg_inst.m"
                        hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_8, hlds__error_msg_inst__V_113_113);
                      }
#line 483 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  if (hlds__error_msg_inst__succeeded)
#line 484 "error_msg_inst.m"
                    {
#line 484 "error_msg_inst.m"
                      {
#line 484 "error_msg_inst.m"
                        hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[9])));
#line 484 "error_msg_inst.m"
                        MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 484 "error_msg_inst.m"
                      }
#line 484 "error_msg_inst.m"
                    }
#line 483 "error_msg_inst.m"
                  else
#line 486 "error_msg_inst.m"
                    {
#line 486 "error_msg_inst.m"
                      hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_120, hlds__error_msg_inst__Suffix_9);
                    }
#line 480 "error_msg_inst.m"
                }
#line 404 "error_msg_inst.m"
                break;
#line 404 "error_msg_inst.m"
              case (MR_Integer) 4:
#line 457 "error_msg_inst.m"
                {
#line 457 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__Uniq_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));
#line 457 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__EqvInst_69;
#line 457 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst___Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));

#line 459 "error_msg_inst.m"
                  {
#line 459 "error_msg_inst.m"
                    hlds__error_msg_inst__EqvInst_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 459 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 1) = ((MR_Box) (hlds__error_msg_inst__Uniq_25));
#line 459 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "error_msg_inst.m"
                  }
#line 460 "error_msg_inst.m"
                  {
#line 460 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__EqvInst_69, hlds__error_msg_inst__Suffix_9);
                  }
#line 457 "error_msg_inst.m"
                }
#line 404 "error_msg_inst.m"
                break;
#line 404 "error_msg_inst.m"
              case (MR_Integer) 5:
#line 453 "error_msg_inst.m"
                {
#line 453 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 2)));
#line 453 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst___Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_8, (MR_Integer) 1)));

#line 455 "error_msg_inst.m"
                  /* direct tailcall eliminated */
#line 455 "error_msg_inst.m"
                  {
#line 455 "error_msg_inst.m"
                    MR_Word hlds__error_msg_inst__InstName__tmp_copy_8 = hlds__error_msg_inst__SubInstName_24;

#line 455 "error_msg_inst.m"
                    hlds__error_msg_inst__InstName_8 = hlds__error_msg_inst__InstName__tmp_copy_8;
#line 455 "error_msg_inst.m"
                  }
#line 455 "error_msg_inst.m"
                  continue;
#line 453 "error_msg_inst.m"
                }
#line 404 "error_msg_inst.m"
                break;
#line 404 "error_msg_inst.m"
            }
#line 404 "error_msg_inst.m"
            break;
#line 404 "error_msg_inst.m"
        }
#line 404 "error_msg_inst.m"
        return hlds__error_msg_inst__Pieces_10;
#line 404 "error_msg_inst.m"
      }
#line 404 "error_msg_inst.m"
      break;
#line 404 "error_msg_inst.m"
    }
#line 398 "error_msg_inst.m"
}

#line 365 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
#line 365 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11)
#line 365 "error_msg_inst.m"
{
#line 370 "error_msg_inst.m"
  {
#line 370 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 370 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;
#line 370 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__HeadSuffix_13;
#line 370 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ConsId0_17;
#line 370 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ArgInsts_18;
#line 370 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ConsId_24;
#line 370 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__ConsIdStr_25;
#line 381 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Arity_20;
#line 381 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__TypeCtor_21;
#line 381 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__BaseName_23;
#line 382 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__SymName_19;
#line 386 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst___ModuleName_22;
#line 392 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__conv0_ConsIdStr_25;

#line 374 "error_msg_inst.m"
    if ((hlds__error_msg_inst__TailBoundInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "error_msg_inst.m"
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
#line 374 "error_msg_inst.m"
    else
#line 375 "error_msg_inst.m"
      {
#line 375 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__HeadTailBoundInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 0)));
#line 375 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailTailBoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 1)));
#line 375 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailPieces_16;

#line 376 "error_msg_inst.m"
        {
#line 376 "error_msg_inst.m"
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailBoundInst_14, hlds__error_msg_inst__TailTailBoundInsts_15, hlds__error_msg_inst__Suffix_11);
        }
#line 378 "error_msg_inst.m"
        {
#line 378 "error_msg_inst.m"
          hlds__error_msg_inst__HeadSuffix_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[5])));
#line 378 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_16));
#line 378 "error_msg_inst.m"
        }
#line 375 "error_msg_inst.m"
      }
#line 380 "error_msg_inst.m"
    hlds__error_msg_inst__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 0)));
#line 380 "error_msg_inst.m"
    hlds__error_msg_inst__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 1)));
#line 382 "error_msg_inst.m"
    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__ConsId0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 382 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 382 "error_msg_inst.m"
      {
#line 382 "error_msg_inst.m"
        hlds__error_msg_inst__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 1)));
#line 382 "error_msg_inst.m"
        hlds__error_msg_inst__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 2)));
#line 382 "error_msg_inst.m"
        hlds__error_msg_inst__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 3)));
#line 386 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__SymName_19)) == (MR_mktag((MR_Integer) 1)));
#line 386 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 386 "error_msg_inst.m"
          {
#line 386 "error_msg_inst.m"
            hlds__error_msg_inst___ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 0)));
#line 386 "error_msg_inst.m"
            hlds__error_msg_inst__BaseName_23 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 1)));
#line 386 "error_msg_inst.m"
          }
#line 382 "error_msg_inst.m"
      }
#line 381 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 388 "error_msg_inst.m"
      {
#line 388 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_28_28;

#line 388 "error_msg_inst.m"
        {
#line 388 "error_msg_inst.m"
          hlds__error_msg_inst__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 388 "error_msg_inst.m"
          MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_28_28, 0) = ((MR_Box) (hlds__error_msg_inst__BaseName_23));
#line 388 "error_msg_inst.m"
        }
#line 388 "error_msg_inst.m"
        {
#line 388 "error_msg_inst.m"
          hlds__error_msg_inst__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 388 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
#line 388 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 2) = ((MR_Box) (hlds__error_msg_inst__Arity_20));
#line 388 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 3) = ((MR_Box) (hlds__error_msg_inst__TypeCtor_21));
#line 388 "error_msg_inst.m"
        }
#line 388 "error_msg_inst.m"
      }
#line 381 "error_msg_inst.m"
    else
#line 390 "error_msg_inst.m"
      hlds__error_msg_inst__ConsId_24 = hlds__error_msg_inst__ConsId0_17;
#line 392 "error_msg_inst.m"
    {
#line 392 "error_msg_inst.m"
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], (MR_Integer) 1, hlds__error_msg_inst__ConsId_24, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_ConsIdStr_25);
    }
#line 392 "error_msg_inst.m"
    hlds__error_msg_inst__ConsIdStr_25 = ((MR_String) hlds__error_msg_inst__conv0_ConsIdStr_25);
#line 393 "error_msg_inst.m"
    {
#line 393 "error_msg_inst.m"
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__ConsIdStr_25, hlds__error_msg_inst__ArgInsts_18, hlds__error_msg_inst__HeadSuffix_13);
    }
#line 370 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 370 "error_msg_inst.m"
  }
#line 365 "error_msg_inst.m"
}

#line 333 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadBoundInst_9,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailBoundInsts_10,
#line 333 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11)
#line 333 "error_msg_inst.m"
{
#line 338 "error_msg_inst.m"
  {
#line 338 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 338 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;
#line 338 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__HeadSuffix_13;
#line 338 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ConsId0_17;
#line 338 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ArgInsts_18;
#line 338 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__ConsId_24;
#line 338 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__ConsIdStr_25;
#line 350 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Arity_20;
#line 350 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__TypeCtor_21;
#line 350 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__BaseName_23;
#line 351 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__SymName_19;
#line 355 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst___ModuleName_22;
#line 361 "error_msg_inst.m"
    MR_Box hlds__error_msg_inst__conv0_ConsIdStr_25;

#line 342 "error_msg_inst.m"
    if ((hlds__error_msg_inst__TailBoundInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "error_msg_inst.m"
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
#line 342 "error_msg_inst.m"
    else
#line 343 "error_msg_inst.m"
      {
#line 343 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__HeadTailBoundInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 0)));
#line 343 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailTailBoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_10, (MR_Integer) 1)));
#line 343 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailPieces_16;
#line 343 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_28_28;
#line 343 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_31_31;

#line 344 "error_msg_inst.m"
        {
#line 344 "error_msg_inst.m"
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailBoundInst_14, hlds__error_msg_inst__TailTailBoundInsts_15, hlds__error_msg_inst__Suffix_11);
        }
#line 346 "error_msg_inst.m"
        {
#line 346 "error_msg_inst.m"
          hlds__error_msg_inst__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
#line 346 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_31_31, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_16));
#line 346 "error_msg_inst.m"
        }
#line 346 "error_msg_inst.m"
        {
#line 346 "error_msg_inst.m"
          hlds__error_msg_inst__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[5])));
#line 346 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_28_28, 1) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
#line 346 "error_msg_inst.m"
        }
#line 346 "error_msg_inst.m"
        {
#line 346 "error_msg_inst.m"
          hlds__error_msg_inst__HeadSuffix_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
#line 346 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_13, 1) = ((MR_Box) (hlds__error_msg_inst__V_28_28));
#line 346 "error_msg_inst.m"
        }
#line 343 "error_msg_inst.m"
      }
#line 349 "error_msg_inst.m"
    hlds__error_msg_inst__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 0)));
#line 349 "error_msg_inst.m"
    hlds__error_msg_inst__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_9, (MR_Integer) 1)));
#line 351 "error_msg_inst.m"
    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__ConsId0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 351 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 351 "error_msg_inst.m"
      {
#line 351 "error_msg_inst.m"
        hlds__error_msg_inst__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 1)));
#line 351 "error_msg_inst.m"
        hlds__error_msg_inst__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 2)));
#line 351 "error_msg_inst.m"
        hlds__error_msg_inst__TypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_17, (MR_Integer) 3)));
#line 355 "error_msg_inst.m"
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__SymName_19)) == (MR_mktag((MR_Integer) 1)));
#line 355 "error_msg_inst.m"
        if (hlds__error_msg_inst__succeeded)
#line 355 "error_msg_inst.m"
          {
#line 355 "error_msg_inst.m"
            hlds__error_msg_inst___ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 0)));
#line 355 "error_msg_inst.m"
            hlds__error_msg_inst__BaseName_23 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_19, (MR_Integer) 1)));
#line 355 "error_msg_inst.m"
          }
#line 351 "error_msg_inst.m"
      }
#line 350 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 357 "error_msg_inst.m"
      {
#line 357 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_34_34;

#line 357 "error_msg_inst.m"
        {
#line 357 "error_msg_inst.m"
          hlds__error_msg_inst__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 357 "error_msg_inst.m"
          MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_34_34, 0) = ((MR_Box) (hlds__error_msg_inst__BaseName_23));
#line 357 "error_msg_inst.m"
        }
#line 357 "error_msg_inst.m"
        {
#line 357 "error_msg_inst.m"
          hlds__error_msg_inst__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 357 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 357 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 1) = ((MR_Box) (hlds__error_msg_inst__V_34_34));
#line 357 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 2) = ((MR_Box) (hlds__error_msg_inst__Arity_20));
#line 357 "error_msg_inst.m"
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_24, 3) = ((MR_Box) (hlds__error_msg_inst__TypeCtor_21));
#line 357 "error_msg_inst.m"
        }
#line 357 "error_msg_inst.m"
      }
#line 350 "error_msg_inst.m"
    else
#line 359 "error_msg_inst.m"
      hlds__error_msg_inst__ConsId_24 = hlds__error_msg_inst__ConsId0_17;
#line 361 "error_msg_inst.m"
    {
#line 361 "error_msg_inst.m"
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], (MR_Integer) 1, hlds__error_msg_inst__ConsId_24, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_ConsIdStr_25);
    }
#line 361 "error_msg_inst.m"
    hlds__error_msg_inst__ConsIdStr_25 = ((MR_String) hlds__error_msg_inst__conv0_ConsIdStr_25);
#line 362 "error_msg_inst.m"
    {
#line 362 "error_msg_inst.m"
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__name_and_arg_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__ConsIdStr_25, hlds__error_msg_inst__ArgInsts_18, hlds__error_msg_inst__HeadSuffix_13);
    }
#line 338 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 338 "error_msg_inst.m"
  }
#line 333 "error_msg_inst.m"
}

#line 314 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadInst_9,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailInsts_10,
#line 314 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11)
#line 314 "error_msg_inst.m"
{
#line 318 "error_msg_inst.m"
  {
#line 318 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 318 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;
#line 318 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__HeadSuffix_13;

#line 322 "error_msg_inst.m"
    if ((hlds__error_msg_inst__TailInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "error_msg_inst.m"
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
#line 322 "error_msg_inst.m"
    else
#line 323 "error_msg_inst.m"
      {
#line 323 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__HeadTailInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 0)));
#line 323 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailTailInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 1)));
#line 323 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailPieces_16;

#line 324 "error_msg_inst.m"
        {
#line 324 "error_msg_inst.m"
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailInst_14, hlds__error_msg_inst__TailTailInsts_15, hlds__error_msg_inst__Suffix_11);
        }
#line 326 "error_msg_inst.m"
        {
#line 326 "error_msg_inst.m"
          hlds__error_msg_inst__HeadSuffix_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[18]), hlds__error_msg_inst__TailPieces_16);
        }
#line 323 "error_msg_inst.m"
      }
#line 328 "error_msg_inst.m"
    {
#line 328 "error_msg_inst.m"
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadInst_9, hlds__error_msg_inst__HeadSuffix_13);
    }
#line 318 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 318 "error_msg_inst.m"
  }
#line 314 "error_msg_inst.m"
}

#line 297 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__insts_to_pieces_5_f_0(
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_7,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_8,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__HeadInst_9,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__TailInsts_10,
#line 297 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_11)
#line 297 "error_msg_inst.m"
{
#line 301 "error_msg_inst.m"
  {
#line 301 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 301 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_12;
#line 301 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__HeadSuffix_13;

#line 305 "error_msg_inst.m"
    if ((hlds__error_msg_inst__TailInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "error_msg_inst.m"
      hlds__error_msg_inst__HeadSuffix_13 = hlds__error_msg_inst__Suffix_11;
#line 305 "error_msg_inst.m"
    else
#line 306 "error_msg_inst.m"
      {
#line 306 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__HeadTailInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 0)));
#line 306 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailTailInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_10, (MR_Integer) 1)));
#line 306 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__TailPieces_16;

#line 307 "error_msg_inst.m"
        {
#line 307 "error_msg_inst.m"
          hlds__error_msg_inst__TailPieces_16 = hlds__error_msg_inst__insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadTailInst_14, hlds__error_msg_inst__TailTailInsts_15, hlds__error_msg_inst__Suffix_11);
        }
#line 309 "error_msg_inst.m"
        {
#line 309 "error_msg_inst.m"
          hlds__error_msg_inst__HeadSuffix_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]), hlds__error_msg_inst__TailPieces_16);
        }
#line 306 "error_msg_inst.m"
      }
#line 311 "error_msg_inst.m"
    {
#line 311 "error_msg_inst.m"
      hlds__error_msg_inst__Pieces_12 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__Expansions0_8, hlds__error_msg_inst__HeadInst_9, hlds__error_msg_inst__HeadSuffix_13);
    }
#line 301 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_12;
#line 301 "error_msg_inst.m"
  }
#line 297 "error_msg_inst.m"
}

#line 221 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_8,
#line 221 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9)
#line 221 "error_msg_inst.m"
{
#line 229 "error_msg_inst.m"
  {
#line 229 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 229 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_10;

#line 229 "error_msg_inst.m"
#line 229 "error_msg_inst.m"
    switch (MR_tag((MR_Word) hlds__error_msg_inst__Inst_8)) {
#line 229 "error_msg_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 229 "error_msg_inst.m"
      case (MR_Integer) 0:
#line 229 "error_msg_inst.m"
#line 229 "error_msg_inst.m"
        switch (MR_unmkbody(hlds__error_msg_inst__Inst_8)) {
#line 229 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 229 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 229 "error_msg_inst.m"
            {
#line 230 "error_msg_inst.m"
              {
#line 230 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
#line 230 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 230 "error_msg_inst.m"
              }
#line 229 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 291 "error_msg_inst.m"
            {
#line 292 "error_msg_inst.m"
              {
#line 292 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[4])));
#line 292 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 292 "error_msg_inst.m"
              }
#line 291 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
        }
#line 229 "error_msg_inst.m"
        break;
#line 229 "error_msg_inst.m"
      case (MR_Integer) 1:
#line 229 "error_msg_inst.m"
        {
#line 230 "error_msg_inst.m"
          {
#line 230 "error_msg_inst.m"
            hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
#line 230 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 230 "error_msg_inst.m"
          }
#line 229 "error_msg_inst.m"
        }
#line 229 "error_msg_inst.m"
        break;
#line 229 "error_msg_inst.m"
      case (MR_Integer) 2:
#line 257 "error_msg_inst.m"
        {
#line 257 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__Uniq_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)));
#line 257 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__HOInstInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 263 "error_msg_inst.m"
          if ((hlds__error_msg_inst__HOInstInfo_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "error_msg_inst.m"
            {
#line 264 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_51_51;
#line 264 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__Str_73;
#line 265 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv0_Str_73;

#line 265 "error_msg_inst.m"
              {
#line 265 "error_msg_inst.m"
                parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_77, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_Str_73);
              }
#line 265 "error_msg_inst.m"
              hlds__error_msg_inst__Str_73 = ((MR_String) hlds__error_msg_inst__conv0_Str_73);
#line 266 "error_msg_inst.m"
              {
#line 266 "error_msg_inst.m"
                hlds__error_msg_inst__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_51_51, 0) = ((MR_Box) (hlds__error_msg_inst__Str_73));
#line 266 "error_msg_inst.m"
              }
#line 266 "error_msg_inst.m"
              {
#line 266 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_51_51));
#line 266 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 266 "error_msg_inst.m"
              }
#line 264 "error_msg_inst.m"
            }
#line 263 "error_msg_inst.m"
          else
#line 259 "error_msg_inst.m"
            {
#line 259 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__PredInstInfo_71 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_78), (MR_Integer) 1);
#line 259 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__HOPieces_72;

#line 260 "error_msg_inst.m"
              {
#line 260 "error_msg_inst.m"
                hlds__error_msg_inst__HOPieces_72 = hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "any_", hlds__error_msg_inst__Uniq_77, hlds__error_msg_inst__PredInstInfo_71);
              }
#line 262 "error_msg_inst.m"
              {
#line 262 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_72, hlds__error_msg_inst__Suffix_9);
              }
#line 259 "error_msg_inst.m"
            }
#line 257 "error_msg_inst.m"
        }
#line 229 "error_msg_inst.m"
        break;
#line 229 "error_msg_inst.m"
      case (MR_Integer) 3:
#line 229 "error_msg_inst.m"
#line 229 "error_msg_inst.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)))) {
#line 229 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 229 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 232 "error_msg_inst.m"
            {
#line 232 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
#line 232 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 3)));
#line 232 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__BoundName_15;
#line 232 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 233 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv1_BoundName_15;

#line 233 "error_msg_inst.m"
              {
#line 233 "error_msg_inst.m"
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_12, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv1_BoundName_15);
              }
#line 233 "error_msg_inst.m"
              hlds__error_msg_inst__BoundName_15 = ((MR_String) hlds__error_msg_inst__conv1_BoundName_15);
#line 237 "error_msg_inst.m"
              if ((hlds__error_msg_inst__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "error_msg_inst.m"
                {
#line 235 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_67_67;

#line 236 "error_msg_inst.m"
                  {
#line 236 "error_msg_inst.m"
                    hlds__error_msg_inst__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_67_67, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_15));
#line 236 "error_msg_inst.m"
                  }
#line 236 "error_msg_inst.m"
                  {
#line 236 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_67_67));
#line 236 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 236 "error_msg_inst.m"
                  }
#line 235 "error_msg_inst.m"
                }
#line 237 "error_msg_inst.m"
              else
#line 238 "error_msg_inst.m"
                {
#line 238 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__HeadBoundInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 0)));
#line 238 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__TailBoundInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 1)));
#line 238 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__BoundPieces_18;
#line 238 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_60_60;
#line 238 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_61_61;
#line 238 "error_msg_inst.m"
                  MR_String hlds__error_msg_inst__V_62_62;
#line 238 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_64_64;

#line 239 "error_msg_inst.m"
                  {
#line 239 "error_msg_inst.m"
                    hlds__error_msg_inst__BoundPieces_18 = hlds__error_msg_inst__bound_insts_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__HeadBoundInst_16, hlds__error_msg_inst__TailBoundInsts_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 241 "error_msg_inst.m"
                  {
#line 241 "error_msg_inst.m"
                    hlds__error_msg_inst__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BoundName_15, (MR_String) "(");
                  }
#line 241 "error_msg_inst.m"
                  {
#line 241 "error_msg_inst.m"
                    hlds__error_msg_inst__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 241 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_61_61, 1) = ((MR_Box) (hlds__error_msg_inst__V_62_62));
#line 241 "error_msg_inst.m"
                  }
#line 241 "error_msg_inst.m"
                  {
#line 241 "error_msg_inst.m"
                    hlds__error_msg_inst__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_60_60, 0) = ((MR_Box) (hlds__error_msg_inst__V_61_61));
#line 241 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_60_60, 1) = ((MR_Box) (hlds__error_msg_inst__BoundPieces_18));
#line 241 "error_msg_inst.m"
                  }
#line 242 "error_msg_inst.m"
                  {
#line 242 "error_msg_inst.m"
                    hlds__error_msg_inst__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
#line 242 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_64_64, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 242 "error_msg_inst.m"
                  }
#line 241 "error_msg_inst.m"
                  {
#line 241 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_60_60, hlds__error_msg_inst__V_64_64);
                  }
#line 238 "error_msg_inst.m"
                }
#line 232 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 245 "error_msg_inst.m"
            {
#line 245 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 245 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Uniq_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 251 "error_msg_inst.m"
              if ((hlds__error_msg_inst__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "error_msg_inst.m"
                {
#line 252 "error_msg_inst.m"
                  MR_String hlds__error_msg_inst__Str_22;
#line 252 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_55_55;
#line 253 "error_msg_inst.m"
                  MR_Box hlds__error_msg_inst__conv3_Str_22;

#line 253 "error_msg_inst.m"
                  {
#line 253 "error_msg_inst.m"
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_70, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv3_Str_22);
                  }
#line 253 "error_msg_inst.m"
                  hlds__error_msg_inst__Str_22 = ((MR_String) hlds__error_msg_inst__conv3_Str_22);
#line 254 "error_msg_inst.m"
                  {
#line 254 "error_msg_inst.m"
                    hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 254 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__Str_22));
#line 254 "error_msg_inst.m"
                  }
#line 254 "error_msg_inst.m"
                  {
#line 254 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
#line 254 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 254 "error_msg_inst.m"
                  }
#line 252 "error_msg_inst.m"
                }
#line 251 "error_msg_inst.m"
              else
#line 247 "error_msg_inst.m"
                {
#line 247 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_19), (MR_Integer) 1);
#line 247 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__HOPieces_21;

#line 248 "error_msg_inst.m"
                  {
#line 248 "error_msg_inst.m"
                    hlds__error_msg_inst__HOPieces_21 = hlds__error_msg_inst__pred_inst_info_to_inline_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "", hlds__error_msg_inst__Uniq_70, hlds__error_msg_inst__PredInstInfo_20);
                  }
#line 250 "error_msg_inst.m"
                  {
#line 250 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_21, hlds__error_msg_inst__Suffix_9);
                  }
#line 247 "error_msg_inst.m"
                }
#line 245 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
          case (MR_Integer) 2:
#line 269 "error_msg_inst.m"
            {
#line 269 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
#line 269 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 269 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__Name_25;
#line 269 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_49_49;
#line 270 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 270 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 271 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv4_Name_25;

#line 271 "error_msg_inst.m"
              {
#line 271 "error_msg_inst.m"
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_24, (MR_Integer) 0, hlds__error_msg_inst__Var_23, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv4_Name_25);
              }
#line 271 "error_msg_inst.m"
              hlds__error_msg_inst__Name_25 = ((MR_String) hlds__error_msg_inst__conv4_Name_25);
#line 272 "error_msg_inst.m"
              {
#line 272 "error_msg_inst.m"
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (hlds__error_msg_inst__Name_25));
#line 272 "error_msg_inst.m"
              }
#line 272 "error_msg_inst.m"
              {
#line 272 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
#line 272 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 272 "error_msg_inst.m"
              }
#line 269 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
          case (MR_Integer) 3:
#line 274 "error_msg_inst.m"
            {
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Vars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ConstrainedInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 274 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__Names_28;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_34_34;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_38_38;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_39_39;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_40_40;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_43_43;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_44_44;
#line 274 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstVarSet_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 275 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 275 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 276 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv2_Names_28;

#line 277 "error_msg_inst.m"
              {
#line 277 "error_msg_inst.m"
                hlds__error_msg_inst__V_34_34 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Vars_26);
              }
#line 276 "error_msg_inst.m"
              {
#line 276 "error_msg_inst.m"
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_82, (MR_Integer) 0, hlds__error_msg_inst__V_34_34, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv2_Names_28);
              }
#line 276 "error_msg_inst.m"
              hlds__error_msg_inst__Names_28 = ((MR_String) hlds__error_msg_inst__conv2_Names_28);
#line 278 "error_msg_inst.m"
              {
#line 278 "error_msg_inst.m"
                hlds__error_msg_inst__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 1) = ((MR_Box) (hlds__error_msg_inst__Names_28));
#line 278 "error_msg_inst.m"
              }
#line 280 "error_msg_inst.m"
              {
#line 280 "error_msg_inst.m"
                hlds__error_msg_inst__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
#line 280 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 280 "error_msg_inst.m"
              }
#line 279 "error_msg_inst.m"
              {
#line 279 "error_msg_inst.m"
                hlds__error_msg_inst__V_43_43 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__ConstrainedInst_27, hlds__error_msg_inst__V_44_44);
              }
#line 278 "error_msg_inst.m"
              {
#line 278 "error_msg_inst.m"
                hlds__error_msg_inst__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[2])));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
#line 278 "error_msg_inst.m"
              }
#line 278 "error_msg_inst.m"
              {
#line 278 "error_msg_inst.m"
                hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__V_39_39));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 1) = ((MR_Box) (hlds__error_msg_inst__V_40_40));
#line 278 "error_msg_inst.m"
              }
#line 278 "error_msg_inst.m"
              {
#line 278 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[1])));
#line 278 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
#line 278 "error_msg_inst.m"
              }
#line 274 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
          case (MR_Integer) 4:
#line 287 "error_msg_inst.m"
            {
#line 287 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstName_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 288 "error_msg_inst.m"
              {
#line 288 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_84, hlds__error_msg_inst__Suffix_9);
              }
#line 287 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
          case (MR_Integer) 5:
#line 282 "error_msg_inst.m"
            {
#line 282 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 282 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstName_30;
#line 282 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Name_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 283 "error_msg_inst.m"
              {
#line 283 "error_msg_inst.m"
                hlds__error_msg_inst__InstName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "error_msg_inst.m"
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 0) = ((MR_Box) (hlds__error_msg_inst__Name_83));
#line 283 "error_msg_inst.m"
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 1) = ((MR_Box) (hlds__error_msg_inst__ArgInsts_29));
#line 283 "error_msg_inst.m"
              }
#line 284 "error_msg_inst.m"
              {
#line 284 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_30, hlds__error_msg_inst__Suffix_9);
              }
#line 282 "error_msg_inst.m"
            }
#line 229 "error_msg_inst.m"
            break;
#line 229 "error_msg_inst.m"
        }
#line 229 "error_msg_inst.m"
        break;
#line 229 "error_msg_inst.m"
    }
#line 229 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_10;
#line 229 "error_msg_inst.m"
  }
#line 221 "error_msg_inst.m"
}

#line 147 "error_msg_inst.m"
static MR_Word MR_CALL 
hlds__error_msg_inst__inst_to_pieces_4_f_0(
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Info_6,
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Expansions0_7,
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst_8,
#line 147 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Suffix_9)
#line 147 "error_msg_inst.m"
{
#line 154 "error_msg_inst.m"
  {
#line 154 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 154 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_10;

#line 154 "error_msg_inst.m"
#line 154 "error_msg_inst.m"
    switch (MR_tag((MR_Word) hlds__error_msg_inst__Inst_8)) {
#line 154 "error_msg_inst.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 154 "error_msg_inst.m"
      case (MR_Integer) 0:
#line 154 "error_msg_inst.m"
#line 154 "error_msg_inst.m"
        switch (MR_unmkbody(hlds__error_msg_inst__Inst_8)) {
#line 154 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 154 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 154 "error_msg_inst.m"
            {
#line 155 "error_msg_inst.m"
              {
#line 155 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
#line 155 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 155 "error_msg_inst.m"
              }
#line 154 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 217 "error_msg_inst.m"
            {
#line 218 "error_msg_inst.m"
              {
#line 218 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[4])));
#line 218 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 218 "error_msg_inst.m"
              }
#line 217 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
        }
#line 154 "error_msg_inst.m"
        break;
#line 154 "error_msg_inst.m"
      case (MR_Integer) 1:
#line 154 "error_msg_inst.m"
        {
#line 155 "error_msg_inst.m"
          {
#line 155 "error_msg_inst.m"
            hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[3])));
#line 155 "error_msg_inst.m"
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 155 "error_msg_inst.m"
          }
#line 154 "error_msg_inst.m"
        }
#line 154 "error_msg_inst.m"
        break;
#line 154 "error_msg_inst.m"
      case (MR_Integer) 2:
#line 183 "error_msg_inst.m"
        {
#line 183 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__Uniq_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)));
#line 183 "error_msg_inst.m"
          MR_Word hlds__error_msg_inst__HOInstInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 189 "error_msg_inst.m"
          if ((hlds__error_msg_inst__HOInstInfo_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "error_msg_inst.m"
            {
#line 190 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_51_51;
#line 190 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__Str_80;
#line 191 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv0_Str_80;

#line 191 "error_msg_inst.m"
              {
#line 191 "error_msg_inst.m"
                parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_84, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_Str_80);
              }
#line 191 "error_msg_inst.m"
              hlds__error_msg_inst__Str_80 = ((MR_String) hlds__error_msg_inst__conv0_Str_80);
#line 192 "error_msg_inst.m"
              {
#line 192 "error_msg_inst.m"
                hlds__error_msg_inst__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 192 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_51_51, 0) = ((MR_Box) (hlds__error_msg_inst__Str_80));
#line 192 "error_msg_inst.m"
              }
#line 192 "error_msg_inst.m"
              {
#line 192 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_51_51));
#line 192 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 192 "error_msg_inst.m"
              }
#line 190 "error_msg_inst.m"
            }
#line 189 "error_msg_inst.m"
          else
#line 185 "error_msg_inst.m"
            {
#line 185 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__PredInstInfo_78 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_85), (MR_Integer) 1);
#line 185 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__HOPieces_79;

#line 186 "error_msg_inst.m"
              {
#line 186 "error_msg_inst.m"
                hlds__error_msg_inst__HOPieces_79 = hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "any_", hlds__error_msg_inst__Uniq_84, hlds__error_msg_inst__PredInstInfo_78);
              }
#line 188 "error_msg_inst.m"
              {
#line 188 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_79, hlds__error_msg_inst__Suffix_9);
              }
#line 185 "error_msg_inst.m"
            }
#line 183 "error_msg_inst.m"
        }
#line 154 "error_msg_inst.m"
        break;
#line 154 "error_msg_inst.m"
      case (MR_Integer) 3:
#line 154 "error_msg_inst.m"
#line 154 "error_msg_inst.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 0)))) {
#line 154 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 154 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 157 "error_msg_inst.m"
            {
#line 157 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
#line 157 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 3)));
#line 157 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__BoundName_15;
#line 157 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 158 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv1_BoundName_15;

#line 158 "error_msg_inst.m"
              {
#line 158 "error_msg_inst.m"
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_12, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv1_BoundName_15);
              }
#line 158 "error_msg_inst.m"
              hlds__error_msg_inst__BoundName_15 = ((MR_String) hlds__error_msg_inst__conv1_BoundName_15);
#line 162 "error_msg_inst.m"
              if ((hlds__error_msg_inst__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "error_msg_inst.m"
                {
#line 160 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_74_74;

#line 161 "error_msg_inst.m"
                  {
#line 161 "error_msg_inst.m"
                    hlds__error_msg_inst__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_74_74, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_15));
#line 161 "error_msg_inst.m"
                  }
#line 161 "error_msg_inst.m"
                  {
#line 161 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_74_74));
#line 161 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 161 "error_msg_inst.m"
                  }
#line 160 "error_msg_inst.m"
                }
#line 162 "error_msg_inst.m"
              else
#line 163 "error_msg_inst.m"
                {
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__HeadBoundInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 0)));
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__TailBoundInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_14, (MR_Integer) 1)));
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__BoundPieces_18;
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_63_63;
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_64_64;
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_65_65;
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_68_68;
#line 163 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_71_71;

#line 164 "error_msg_inst.m"
                  {
#line 164 "error_msg_inst.m"
                    hlds__error_msg_inst__BoundPieces_18 = hlds__error_msg_inst__bound_insts_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__HeadBoundInst_16, hlds__error_msg_inst__TailBoundInsts_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[13]));
                  }
#line 167 "error_msg_inst.m"
                  {
#line 167 "error_msg_inst.m"
                    hlds__error_msg_inst__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_64_64, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_15));
#line 167 "error_msg_inst.m"
                  }
#line 167 "error_msg_inst.m"
                  {
#line 167 "error_msg_inst.m"
                    hlds__error_msg_inst__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_68_68, 1) = ((MR_Box) (hlds__error_msg_inst__BoundPieces_18));
#line 167 "error_msg_inst.m"
                  }
#line 167 "error_msg_inst.m"
                  {
#line 167 "error_msg_inst.m"
                    hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14])));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_65_65, 1) = ((MR_Box) (hlds__error_msg_inst__V_68_68));
#line 167 "error_msg_inst.m"
                  }
#line 167 "error_msg_inst.m"
                  {
#line 167 "error_msg_inst.m"
                    hlds__error_msg_inst__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_63_63, 0) = ((MR_Box) (hlds__error_msg_inst__V_64_64));
#line 167 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_63_63, 1) = ((MR_Box) (hlds__error_msg_inst__V_65_65));
#line 167 "error_msg_inst.m"
                  }
#line 168 "error_msg_inst.m"
                  {
#line 168 "error_msg_inst.m"
                    hlds__error_msg_inst__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
#line 168 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 168 "error_msg_inst.m"
                  }
#line 168 "error_msg_inst.m"
                  {
#line 168 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_63_63, hlds__error_msg_inst__V_71_71);
                  }
#line 163 "error_msg_inst.m"
                }
#line 157 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 171 "error_msg_inst.m"
            {
#line 171 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 171 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Uniq_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 177 "error_msg_inst.m"
              if ((hlds__error_msg_inst__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "error_msg_inst.m"
                {
#line 178 "error_msg_inst.m"
                  MR_String hlds__error_msg_inst__Str_22;
#line 178 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__V_55_55;
#line 179 "error_msg_inst.m"
                  MR_Box hlds__error_msg_inst__conv3_Str_22;

#line 179 "error_msg_inst.m"
                  {
#line 179 "error_msg_inst.m"
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__Uniq_77, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv3_Str_22);
                  }
#line 179 "error_msg_inst.m"
                  hlds__error_msg_inst__Str_22 = ((MR_String) hlds__error_msg_inst__conv3_Str_22);
#line 180 "error_msg_inst.m"
                  {
#line 180 "error_msg_inst.m"
                    hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 180 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__Str_22));
#line 180 "error_msg_inst.m"
                  }
#line 180 "error_msg_inst.m"
                  {
#line 180 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
#line 180 "error_msg_inst.m"
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 180 "error_msg_inst.m"
                  }
#line 178 "error_msg_inst.m"
                }
#line 177 "error_msg_inst.m"
              else
#line 173 "error_msg_inst.m"
                {
#line 173 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_19), (MR_Integer) 1);
#line 173 "error_msg_inst.m"
                  MR_Word hlds__error_msg_inst__HOPieces_21;

#line 174 "error_msg_inst.m"
                  {
#line 174 "error_msg_inst.m"
                    hlds__error_msg_inst__HOPieces_21 = hlds__error_msg_inst__pred_inst_info_to_pieces_5_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, (MR_String) "", hlds__error_msg_inst__Uniq_77, hlds__error_msg_inst__PredInstInfo_20);
                  }
#line 176 "error_msg_inst.m"
                  {
#line 176 "error_msg_inst.m"
                    hlds__error_msg_inst__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_21, hlds__error_msg_inst__Suffix_9);
                  }
#line 173 "error_msg_inst.m"
                }
#line 171 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
          case (MR_Integer) 2:
#line 195 "error_msg_inst.m"
            {
#line 195 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
#line 195 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 195 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__Name_25;
#line 195 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_49_49;
#line 196 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 196 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 197 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv4_Name_25;

#line 197 "error_msg_inst.m"
              {
#line 197 "error_msg_inst.m"
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_24, (MR_Integer) 0, hlds__error_msg_inst__Var_23, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv4_Name_25);
              }
#line 197 "error_msg_inst.m"
              hlds__error_msg_inst__Name_25 = ((MR_String) hlds__error_msg_inst__conv4_Name_25);
#line 198 "error_msg_inst.m"
              {
#line 198 "error_msg_inst.m"
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 198 "error_msg_inst.m"
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (hlds__error_msg_inst__Name_25));
#line 198 "error_msg_inst.m"
              }
#line 198 "error_msg_inst.m"
              {
#line 198 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
#line 198 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 198 "error_msg_inst.m"
              }
#line 195 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
          case (MR_Integer) 3:
#line 200 "error_msg_inst.m"
            {
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Vars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ConstrainedInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 200 "error_msg_inst.m"
              MR_String hlds__error_msg_inst__Names_28;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_34_34;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_38_38;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_39_39;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_40_40;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_43_43;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_44_44;
#line 200 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstVarSet_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 1)));
#line 201 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 0)));
#line 201 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_6, (MR_Integer) 2)));
#line 202 "error_msg_inst.m"
              MR_Box hlds__error_msg_inst__conv2_Names_28;

#line 203 "error_msg_inst.m"
              {
#line 203 "error_msg_inst.m"
                hlds__error_msg_inst__V_34_34 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Vars_26);
              }
#line 202 "error_msg_inst.m"
              {
#line 202 "error_msg_inst.m"
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__InstVarSet_89, (MR_Integer) 0, hlds__error_msg_inst__V_34_34, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv2_Names_28);
              }
#line 202 "error_msg_inst.m"
              hlds__error_msg_inst__Names_28 = ((MR_String) hlds__error_msg_inst__conv2_Names_28);
#line 204 "error_msg_inst.m"
              {
#line 204 "error_msg_inst.m"
                hlds__error_msg_inst__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_39_39, 1) = ((MR_Box) (hlds__error_msg_inst__Names_28));
#line 204 "error_msg_inst.m"
              }
#line 206 "error_msg_inst.m"
              {
#line 206 "error_msg_inst.m"
                hlds__error_msg_inst__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[0])));
#line 206 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_44_44, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_9));
#line 206 "error_msg_inst.m"
              }
#line 205 "error_msg_inst.m"
              {
#line 205 "error_msg_inst.m"
                hlds__error_msg_inst__V_43_43 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__ConstrainedInst_27, hlds__error_msg_inst__V_44_44);
              }
#line 204 "error_msg_inst.m"
              {
#line 204 "error_msg_inst.m"
                hlds__error_msg_inst__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[2])));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
#line 204 "error_msg_inst.m"
              }
#line 204 "error_msg_inst.m"
              {
#line 204 "error_msg_inst.m"
                hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__V_39_39));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_38_38, 1) = ((MR_Box) (hlds__error_msg_inst__V_40_40));
#line 204 "error_msg_inst.m"
              }
#line 204 "error_msg_inst.m"
              {
#line 204 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_2[1])));
#line 204 "error_msg_inst.m"
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_10, 1) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
#line 204 "error_msg_inst.m"
              }
#line 200 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
          case (MR_Integer) 4:
#line 213 "error_msg_inst.m"
            {
#line 213 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstName_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 214 "error_msg_inst.m"
              {
#line 214 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_91, hlds__error_msg_inst__Suffix_9);
              }
#line 213 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
          case (MR_Integer) 5:
#line 208 "error_msg_inst.m"
            {
#line 208 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__ArgInsts_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 2)));
#line 208 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__InstName_30;
#line 208 "error_msg_inst.m"
              MR_Word hlds__error_msg_inst__Name_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_8, (MR_Integer) 1)));

#line 209 "error_msg_inst.m"
              {
#line 209 "error_msg_inst.m"
                hlds__error_msg_inst__InstName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 209 "error_msg_inst.m"
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 0) = ((MR_Box) (hlds__error_msg_inst__Name_90));
#line 209 "error_msg_inst.m"
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_30, 1) = ((MR_Box) (hlds__error_msg_inst__ArgInsts_29));
#line 209 "error_msg_inst.m"
              }
#line 210 "error_msg_inst.m"
              {
#line 210 "error_msg_inst.m"
                hlds__error_msg_inst__Pieces_10 = hlds__error_msg_inst__inst_name_to_pieces_4_f_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__Expansions0_7, hlds__error_msg_inst__InstName_30, hlds__error_msg_inst__Suffix_9);
              }
#line 208 "error_msg_inst.m"
            }
#line 154 "error_msg_inst.m"
            break;
#line 154 "error_msg_inst.m"
        }
#line 154 "error_msg_inst.m"
        break;
#line 154 "error_msg_inst.m"
    }
#line 154 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_10;
#line 154 "error_msg_inst.m"
  }
#line 147 "error_msg_inst.m"
}

#line 60 "error_msg_inst.m"
MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_8_f_0(
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ModuleInfo_10,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__InstVarSet_11,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ExpandNamedInsts_12,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ShortInstQF_13,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__ShortInstSuffix_14,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__LongInstPrefix_15,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__LongInstSuffix_16,
#line 60 "error_msg_inst.m"
  MR_Word hlds__error_msg_inst__Inst0_17)
#line 60 "error_msg_inst.m"
{
#line 95 "error_msg_inst.m"
  {
#line 95 "error_msg_inst.m"
    MR_bool hlds__error_msg_inst__succeeded;
#line 95 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Pieces_18;
#line 95 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Info_19;
#line 95 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Inst_20;
#line 95 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__Expansions0_21;
#line 95 "error_msg_inst.m"
    MR_Word hlds__error_msg_inst__InlinePieces_22;
#line 95 "error_msg_inst.m"
    MR_String hlds__error_msg_inst__InlineStr_23;
#line 113 "error_msg_inst.m"
    MR_Integer hlds__error_msg_inst__Len_24;

#line 96 "error_msg_inst.m"
    {
#line 96 "error_msg_inst.m"
      hlds__error_msg_inst__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 96 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 0) = ((MR_Box) (hlds__error_msg_inst__ModuleInfo_10));
#line 96 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 1) = ((MR_Box) (hlds__error_msg_inst__InstVarSet_11));
#line 96 "error_msg_inst.m"
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 2) = ((MR_Box) (hlds__error_msg_inst__ExpandNamedInsts_12));
#line 96 "error_msg_inst.m"
    }
#line 97 "error_msg_inst.m"
    {
#line 97 "error_msg_inst.m"
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(hlds__error_msg_inst__Inst0_17, &hlds__error_msg_inst__Inst_20);
    }
#line 98 "error_msg_inst.m"
    {
#line 98 "error_msg_inst.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__error_msg_inst__Expansions0_21);
    }
#line 99 "error_msg_inst.m"
    {
#line 99 "error_msg_inst.m"
      hlds__error_msg_inst__InlinePieces_22 = hlds__error_msg_inst__inst_to_inline_pieces_4_f_0(hlds__error_msg_inst__Info_19, hlds__error_msg_inst__Expansions0_21, hlds__error_msg_inst__Inst_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 100 "error_msg_inst.m"
    {
#line 100 "error_msg_inst.m"
      hlds__error_msg_inst__InlineStr_23 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__error_msg_inst__InlinePieces_22);
    }
#line 113 "error_msg_inst.m"
    {
#line 113 "error_msg_inst.m"
      mercury__string__length_2_p_0(hlds__error_msg_inst__InlineStr_23, &hlds__error_msg_inst__Len_24);
    }
#line 114 "error_msg_inst.m"
    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__Len_24 < (MR_Integer) 40);
#line 112 "error_msg_inst.m"
    if (hlds__error_msg_inst__succeeded)
#line 129 "error_msg_inst.m"
      {
#line 129 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__InlinePiece_25;

#line 125 "error_msg_inst.m"
#line 125 "error_msg_inst.m"
        switch (hlds__error_msg_inst__ShortInstQF_13) {
#line 125 "error_msg_inst.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 125 "error_msg_inst.m"
          case (MR_Integer) 1:
#line 128 "error_msg_inst.m"
            {
#line 128 "error_msg_inst.m"
              hlds__error_msg_inst__InlinePiece_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "error_msg_inst.m"
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__InlinePiece_25, 0) = ((MR_Box) (hlds__error_msg_inst__InlineStr_23));
#line 128 "error_msg_inst.m"
            }
#line 125 "error_msg_inst.m"
            break;
#line 125 "error_msg_inst.m"
          case (MR_Integer) 0:
#line 124 "error_msg_inst.m"
            {
#line 124 "error_msg_inst.m"
              hlds__error_msg_inst__InlinePiece_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InlinePiece_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 124 "error_msg_inst.m"
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InlinePiece_25, 1) = ((MR_Box) (hlds__error_msg_inst__InlineStr_23));
#line 124 "error_msg_inst.m"
            }
#line 125 "error_msg_inst.m"
            break;
#line 125 "error_msg_inst.m"
        }
#line 130 "error_msg_inst.m"
        {
#line 130 "error_msg_inst.m"
          hlds__error_msg_inst__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_18, 0) = ((MR_Box) (hlds__error_msg_inst__InlinePiece_25));
#line 130 "error_msg_inst.m"
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_18, 1) = ((MR_Box) (hlds__error_msg_inst__ShortInstSuffix_14));
#line 130 "error_msg_inst.m"
        }
#line 129 "error_msg_inst.m"
      }
#line 112 "error_msg_inst.m"
    else
#line 134 "error_msg_inst.m"
      {
#line 134 "error_msg_inst.m"
        MR_Word hlds__error_msg_inst__V_28_28;

#line 135 "error_msg_inst.m"
        {
#line 135 "error_msg_inst.m"
          hlds__error_msg_inst__V_28_28 = hlds__error_msg_inst__inst_to_pieces_4_f_0(hlds__error_msg_inst__Info_19, hlds__error_msg_inst__Expansions0_21, hlds__error_msg_inst__Inst_20, hlds__error_msg_inst__LongInstSuffix_16);
        }
#line 134 "error_msg_inst.m"
        {
#line 134 "error_msg_inst.m"
          hlds__error_msg_inst__Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__LongInstPrefix_15, hlds__error_msg_inst__V_28_28);
        }
#line 134 "error_msg_inst.m"
      }
#line 95 "error_msg_inst.m"
    return hlds__error_msg_inst__Pieces_18;
#line 95 "error_msg_inst.m"
  }
#line 60 "error_msg_inst.m"
}

void mercury__hlds__error_msg_inst__init(void)
{
}

void mercury__hlds__error_msg_inst__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0);
}

void mercury__hlds__error_msg_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.error_msg_inst. */
