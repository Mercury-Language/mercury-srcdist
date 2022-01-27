/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version rotd-2022-01-20
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.make_hlds.add_mode.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_mode__init
ENDINIT
*/

#include "hlds.make_hlds.add_mode.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__set_ordlist__pti_set_ordlist_1__plain_hlds__make_hlds__add_mode__type_ctor_info_cycle_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_mode__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_cycle_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_mode__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mode__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0;

static const MR_NotagFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__notag_functor_desc_cycle_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_ordinal_ordered_inst_or_mode_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_name_ordered_inst_or_mode_0[2];

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_inst_or_mode_0[2];

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__cycle_to_error_spec__476__1_1_f_0(
  MR_Word HeadVar__1_122);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Box X_3);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____inst_or_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____inst_or_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____cycle_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____cycle_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode__sna_context_is_for_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstOrMode_6,
  MR_Word Cycle_7,
  MR_Word * Spec_8);

static void MR_CALL 
hlds__make_hlds__add_mode__other_sna_and_context_to_piece_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * SNAPiece_5);

static void MR_CALL 
hlds__make_hlds__add_mode__local_sna_and_context_to_piece_and_msg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word InstOrMode_7,
  MR_Word HeadVar__3_3,
  MR_Word * SNAPiece_10,
  MR_Word * Msg_11);

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ItemModeDefnInfo_6,
  MR_Word STATE_VARIABLE_Cycles_0_19,
  MR_Word * STATE_VARIABLE_Cycles_20);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_6_p_0(
  MR_Word ModeDefns_7,
  MR_Word OrigModeCtor_8,
  MR_Word ModeCtor0_9,
  MR_Word Expansions0_10,
  MR_Word STATE_VARIABLE_Cycles_0_29,
  MR_Word * STATE_VARIABLE_Cycles_30);

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ItemInstDefnInfo_6,
  MR_Word STATE_VARIABLE_Cycles_0_21,
  MR_Word * STATE_VARIABLE_Cycles_22);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_7_p_0(
  MR_Word UserInstTable_8,
  MR_Word OrigInstCtor_9,
  MR_Word InstCtor0_10,
  MR_Word Args0_11,
  MR_Word Expansions0_12,
  MR_Word STATE_VARIABLE_Cycles_0_33,
  MR_Word * STATE_VARIABLE_Cycles_34);

static void MR_CALL 
hlds__make_hlds__add_mode__check_mode_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_modes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_modes_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Cycles_0_3,
  MR_Word * STATE_VARIABLE_Cycles_4);

static void MR_CALL 
hlds__make_hlds__add_mode__check_inst_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_insts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_insts_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Cycles_0_3,
  MR_Word * STATE_VARIABLE_Cycles_4);

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word VarSet_12,
  MR_Word InstSymName_13,
  MR_Word InstParams_14,
  MR_Word MaybeForType_15,
  MR_Word HeadVar__5_5,
  MR_Word Context_17,
  MR_Word InstStatus_18,
  MR_Word STATE_VARIABLE_UserInstTable_0_51,
  MR_Word * STATE_VARIABLE_UserInstTable_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(
  MR_Word InstModeStatus_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____cycle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____cycle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____inst_or_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____inst_or_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[41][2];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_5[1][8];




static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[41][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is not defined to be equivalent to a"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is specified to be for a given type constructor,"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: inst"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it is for."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but does not declare what type constructor"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "includes references to function symbols,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "name"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expands to"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "containing itself"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "would require an infinite sequence of expansions."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "processing any reference to it"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which means that"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "through"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The definition of"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__set_ordlist__pti_set_ordlist_1__plain_hlds__make_hlds__add_mode__type_ctor_info_cycle_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__set_ordlist__pti_set_ordlist_1__plain_hlds__make_hlds__add_mode__type_ctor_info_cycle_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__set_ordlist__pti_set_ordlist_1__plain_hlds__make_hlds__add_mode__type_ctor_info_cycle_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__set_ordlist__pti_set_ordlist_1__plain_hlds__make_hlds__add_mode__type_ctor_info_cycle_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mode__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__set_ordlist__pti_set_ordlist_1__plain_hlds__make_hlds__add_mode__type_ctor_info_cycle_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_mode__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mode__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_cycle_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_mode__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mode__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__add_mode__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0)
  }
};

static const MR_NotagFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__notag_functor_desc_cycle_0 = {
  (MR_String) "cycle",
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mode__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__make_hlds__add_mode____Unify____cycle_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mode____Compare____cycle_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mode",
  (MR_String) "cycle",
  {     &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__notag_functor_desc_cycle_0 },
  {     &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__notag_functor_desc_cycle_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_cycle_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_mode____Unify____expansions_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mode____Compare____expansions_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mode",
  (MR_String) "expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0term__type_ctor_info_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_0 = {
  (MR_String) "iom_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_1 = {
  (MR_String) "iom_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_ordinal_ordered_inst_or_mode_0[2] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_0,
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_name_ordered_inst_or_mode_0[2] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_0,
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_functor_desc_inst_or_mode_0_1
};

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_inst_or_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mode____Unify____inst_or_mode_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mode____Compare____inst_or_mode_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mode",
  (MR_String) "inst_or_mode",
  {     hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_name_ordered_inst_or_mode_0 },
  {     hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__enum_ordinal_ordered_inst_or_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_inst_or_mode_0,

};

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__cycle_to_error_spec__476__1_1_f_0(
  MR_Word HeadVar__1_122)
{
  {
    MR_Word HeadVar__2_123;

    HeadVar__2_123 = hlds__make_hlds__add_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(((MR_Box) (HeadVar__1_122)));
    return HeadVar__2_123;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = X_3;
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____inst_or_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____inst_or_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____cycle_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____cycle_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode__sna_context_is_for_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word SNA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_4, (MR_Integer) 0))));
    MR_Word Var_9;

    succeeded = ((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_3, Var_9);
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_123;

    conv4_HeadVar__2_123 = hlds__make_hlds__add_mode__IntroducedFrom__func__cycle_to_error_spec__476__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_123));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_SNAPiece_5;

    hlds__make_hlds__add_mode__other_sna_and_context_to_piece_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_SNAPiece_5);
    *wrapper_arg_2 = ((MR_Box) (conv3_SNAPiece_5));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_SNAPiece_10;
    MR_Word conv1_Msg_11;

    hlds__make_hlds__add_mode__local_sna_and_context_to_piece_and_msg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_SNAPiece_10, &conv1_Msg_11);
    *wrapper_arg_2 = ((MR_Box) (conv2_SNAPiece_10));
    *wrapper_arg_3 = ((MR_Box) (conv1_Msg_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_SNAPiece_5;

    hlds__make_hlds__add_mode__other_sna_and_context_to_piece_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_SNAPiece_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_SNAPiece_5));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mode__sna_context_is_for_module_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstOrMode_6,
  MR_Word Cycle_7,
  MR_Word * Spec_8)
{
  {
    MR_bool succeeded;
    MR_String InstOrModeWord_9;
    MR_String AnInstOrModeWord_10;
    MR_Word SNAsContexts_11;
    MR_Word ModuleName_12;
    MR_Word LocalSNAsContexts_13;
    MR_Word OtherSNAsContexts_14;
    MR_Word HeadContext_18;
    MR_Word HeadSNAPiece_19;
    MR_Word LaterSNAPieces_20;
    MR_Word ContextMsgs_21;
    MR_Word PreludePieces_27;
    MR_Word ConsequencePieces_28;
    MR_Word HeadPieces_29;
    MR_Word HeadMsg_36;
    MR_Word Var_37;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_103;

    switch (InstOrMode_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          InstOrModeWord_9 = (MR_String) "inst";
          AnInstOrModeWord_10 = (MR_String) "an inst";
        }
        break;
      case (MR_Integer) 1:
        {
          InstOrModeWord_9 = (MR_String) "mode";
          AnInstOrModeWord_10 = (MR_String) "a mode";
        }
        break;
    }
    SNAsContexts_11 = (MR_Word) (Cycle_7);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_12);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleName_12));
    }
    mercury__list__filter_4_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[0]), Var_37, SNAsContexts_11, &LocalSNAsContexts_13, &OtherSNAsContexts_14);
    if ((LocalSNAsContexts_13 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((OtherSNAsContexts_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mode.cycle_to_error_spec\'/4", (MR_String) "cycle has no entries");
          return;
        }
      else
      {
        MR_Word HeadOtherSNAContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherSNAsContexts_14, (MR_Integer) 0))));
        MR_Word TailOtherSNAsContexts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherSNAsContexts_14, (MR_Integer) 1))));

        HeadContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadOtherSNAContext_15, (MR_Integer) 1))));
        hlds__make_hlds__add_mode__other_sna_and_context_to_piece_2_p_0(HeadOtherSNAContext_15, &HeadSNAPiece_19);
        mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[2]), TailOtherSNAsContexts_16, &LaterSNAPieces_20);
        ContextMsgs_21 = (MR_Word) ((MR_Unsigned) 0U);
      }
    else
    {
      MR_Word HeadLocalSNAContext_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalSNAsContexts_13, (MR_Integer) 0))));
      MR_Word TailLocalSNAsContexts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalSNAsContexts_13, (MR_Integer) 1))));
      MR_Word TailLocalSNAPieces_25;
      MR_Word OtherSNAPieces_26;
      MR_Word Var_38;
      MR_Word _HeadMsg_24;

      HeadContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalSNAContext_22, (MR_Integer) 1))));
      hlds__make_hlds__add_mode__local_sna_and_context_to_piece_and_msg_5_p_0(ModuleInfo_5, InstOrMode_6, HeadLocalSNAContext_22, &HeadSNAPiece_19, &_HeadMsg_24);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleInfo_5));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (InstOrMode_6));
      }
      mercury__list__map2_4_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_38, TailLocalSNAsContexts_23, &TailLocalSNAPieces_25, &ContextMsgs_21);
      mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[0]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[3]), OtherSNAsContexts_14, &OtherSNAPieces_26);
      LaterSNAPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), TailLocalSNAPieces_25, OtherSNAPieces_26);
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (InstOrModeWord_9));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (AnInstOrModeWord_10));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[27])));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (HeadSNAPiece_19));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      PreludePieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PreludePieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[23])));
      MR_hl_field(MR_mktag(1), PreludePieces_27, 1) = ((MR_Box) (Var_45));
    }
    ConsequencePieces_28 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[33]));
    if ((LaterSNAPieces_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_95;

      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[35])), ConsequencePieces_28);
      HeadPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PreludePieces_27, Var_95);
    }
    else
    {
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterSNAPieces_20, (MR_Integer) 1))));
      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterSNAPieces_20, (MR_Integer) 0))));

      if ((Var_125 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_90;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[35])));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
        }
        Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_87, ConsequencePieces_28);
        HeadPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PreludePieces_27, Var_86);
      }
      else
      {
        MR_Word LaterSNAPieceLists_34;
        MR_Word CyclePieces_35;
        MR_Word Var_77;
        MR_Word Var_84;

        LaterSNAPieceLists_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[4]), LaterSNAPieces_20);
        CyclePieces_35 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(LaterSNAPieceLists_34, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[35])));
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CyclePieces_35, ConsequencePieces_28);
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[37])), Var_84);
        HeadPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PreludePieces_27, Var_77);
      }
    }
    {
      HeadMsg_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadMsg_36, 0) = ((MR_Box) (HeadContext_18));
      MR_hl_field(MR_mktag(0), HeadMsg_36, 1) = ((MR_Box) (HeadPieces_29));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (HeadMsg_36));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (ContextMsgs_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.cycle_to_error_spec\'/4"));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_103));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__other_sna_and_context_to_piece_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * SNAPiece_5)
{
  {
    MR_Word SNA_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SNAPiece_5 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SNA_3));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__local_sna_and_context_to_piece_and_msg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word InstOrMode_7,
  MR_Word HeadVar__3_3,
  MR_Word * SNAPiece_10,
  MR_Word * Msg_11)
{
  {
    MR_bool succeeded;
    MR_Word SNA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_8, (MR_Integer) 0))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_8, (MR_Integer) 1))));
    MR_String Name_14;
    MR_Word BuiltinSymName_15;
    MR_Word MsgPieces_24;
    MR_Word Var_25;
    MR_Word Var_28;

    Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
    Var_25 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      BuiltinSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BuiltinSymName_15, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), BuiltinSymName_15, 1) = ((MR_Box) (Name_14));
    }
    switch (InstOrMode_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InstTable_16;
          MR_Word UserInstTable_17;
          MR_Word BuiltinInstCtor_18;
          MR_Box conv0_Var_19;

          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_6, &InstTable_16);
          hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_16, &UserInstTable_17);
          {
            BuiltinInstCtor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BuiltinInstCtor_18, 0) = ((MR_Box) (BuiltinSymName_15));
            MR_hl_field(MR_mktag(0), BuiltinInstCtor_18, 1) = ((MR_Box) (Arity_13));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_17, ((MR_Box) (BuiltinInstCtor_18)), &conv0_Var_19);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SNAPiece_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SNA_8));
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SNAPiece_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SNA_8));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModeTable_20;
          MR_Word ModeDefns_21;
          MR_Word BuiltinModeCtor_22;
          MR_Box conv1__ModeDefn_23;

          hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_6, &ModeTable_20);
          hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_20, &ModeDefns_21);
          {
            BuiltinModeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BuiltinModeCtor_22, 0) = ((MR_Box) (BuiltinSymName_15));
            MR_hl_field(MR_mktag(0), BuiltinModeCtor_22, 1) = ((MR_Box) (Arity_13));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_21, ((MR_Box) (BuiltinModeCtor_22)), &conv1__ModeDefn_23);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SNAPiece_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SNA_8));
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SNAPiece_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SNA_8));
            }
        }
        break;
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (*SNAPiece_10));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[40])));
    }
    {
      MsgPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MsgPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), MsgPieces_24, 1) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Msg_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MsgPieces_24));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ItemModeDefnInfo_6,
  MR_Word STATE_VARIABLE_Cycles_0_19,
  MR_Word * STATE_VARIABLE_Cycles_20)
{
  {
    MR_Word ModeName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_6, (MR_Integer) 0))));
    MR_Word ModeParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_6, (MR_Integer) 1))));
    MR_Word ModeTable_14;
    MR_Word ModeDefns_15;
    MR_Integer ModeArity_16;
    MR_Word ModeCtor_17;
    MR_Word Expansions0_18;

    hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_5, &ModeTable_14);
    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_14, &ModeDefns_15);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), ModeParams_9, &ModeArity_16);
    {
      ModeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeCtor_17, 0) = ((MR_Box) (ModeName_8));
      MR_hl_field(MR_mktag(0), ModeCtor_17, 1) = ((MR_Box) (ModeArity_16));
    }
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &Expansions0_18);
    hlds__make_hlds__add_mode__check_for_cyclic_mode_6_p_0(ModeDefns_15, ModeCtor_17, ModeCtor_17, Expansions0_18, STATE_VARIABLE_Cycles_0_19, STATE_VARIABLE_Cycles_20);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_6_p_0(
  MR_Word ModeDefns_7,
  MR_Word OrigModeCtor_8,
  MR_Word ModeCtor0_9,
  MR_Word Expansions0_10,
  MR_Word STATE_VARIABLE_Cycles_0_29,
  MR_Word * STATE_VARIABLE_Cycles_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtor0_9, (MR_Integer) 0))));
    MR_Integer Arity0_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ModeCtor0_9, (MR_Integer) 1))));
    MR_Word SNA0_14;
    MR_Box conv0__OldContext_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      SNA0_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA0_14, 0) = ((MR_Box) (SymName0_12));
      MR_hl_field(MR_mktag(0), SNA0_14, 1) = ((MR_Box) (Arity0_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Expansions0_10, ((MR_Box) (SNA0_14)), &conv0__OldContext_15);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mode_ctor_0_0(ModeCtor0_9, OrigModeCtor_8);
      if (succeeded)
      {
        MR_Word ExpansionsAL0_16;
        MR_Word Var_31;

        mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Expansions0_10, &ExpansionsAL0_16);
        Var_31 = (MR_Word) (ExpansionsAL0_16);
        mercury__set__insert_3_p_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), ((MR_Box) (Var_31)), STATE_VARIABLE_Cycles_0_29, STATE_VARIABLE_Cycles_30);
      }
      else
        *STATE_VARIABLE_Cycles_30 = STATE_VARIABLE_Cycles_0_29;
    }
    else
    {
      MR_Word Context_21;
      MR_Word SymName_24;
      MR_Word Args_25;
      MR_Word ModeDefn_17;
      MR_Word Body_20;
      MR_Word EqvMode_23;
      MR_Box conv1_ModeDefn_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_7, ((MR_Box) (ModeCtor0_9)), &conv1_ModeDefn_17);
      if (succeeded)
      {
        ModeDefn_17 = ((MR_Word) (conv1_ModeDefn_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Body_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_17, (MR_Integer) 2))));
        Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_17, (MR_Integer) 3))));
        EqvMode_23 = (MR_Word) (Body_20);
        succeeded = ((MR_tag((MR_Word) EqvMode_23)) == (MR_Integer) 1);
        if (succeeded)
        {
          SymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvMode_23, (MR_Integer) 0))));
          Args_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvMode_23, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_26;
        MR_Word ModeCtor_27;
        MR_Word Expansions1_28;
        MR_Word next_value_of_ModeCtor0_9;
        MR_Word next_value_of_Expansions0_10;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_25, &Arity_26);
        {
          ModeCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeCtor_27, 0) = ((MR_Box) (SymName_24));
          MR_hl_field(MR_mktag(0), ModeCtor_27, 1) = ((MR_Box) (Arity_26));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (SNA0_14)), ((MR_Box) (Context_21)), Expansions0_10, &Expansions1_28);
        // direct tailcall eliminated
        ;
        next_value_of_ModeCtor0_9 = ModeCtor_27;
        next_value_of_Expansions0_10 = Expansions1_28;
        ModeCtor0_9 = next_value_of_ModeCtor0_9;
        Expansions0_10 = next_value_of_Expansions0_10;
        continue;
      }
      else
        *STATE_VARIABLE_Cycles_30 = STATE_VARIABLE_Cycles_0_29;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ItemInstDefnInfo_6,
  MR_Word STATE_VARIABLE_Cycles_0_21,
  MR_Word * STATE_VARIABLE_Cycles_22)
{
  {
    MR_Word InstName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_6, (MR_Integer) 0))));
    MR_Word InstParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_6, (MR_Integer) 1))));
    MR_Word InstTable_15;
    MR_Word UserInstTable_16;
    MR_Integer InstArity_17;
    MR_Word InstCtor_18;
    MR_Word TestArgs_19;
    MR_Word Expansions0_20;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_5, &InstTable_15);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_15, &UserInstTable_16);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), InstParams_9, &InstArity_17);
    {
      InstCtor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstCtor_18, 0) = ((MR_Box) (InstName_8));
      MR_hl_field(MR_mktag(0), InstCtor_18, 1) = ((MR_Box) (InstArity_17));
    }
    TestArgs_19 = mercury__list__duplicate_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstArity_17, ((MR_Box) ((MR_Unsigned) 4U)));
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &Expansions0_20);
    hlds__make_hlds__add_mode__check_for_cyclic_inst_7_p_0(UserInstTable_16, InstCtor_18, InstCtor_18, TestArgs_19, Expansions0_20, STATE_VARIABLE_Cycles_0_21, STATE_VARIABLE_Cycles_22);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_7_p_0(
  MR_Word UserInstTable_8,
  MR_Word OrigInstCtor_9,
  MR_Word InstCtor0_10,
  MR_Word Args0_11,
  MR_Word Expansions0_12,
  MR_Word STATE_VARIABLE_Cycles_0_33,
  MR_Word * STATE_VARIABLE_Cycles_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word SymName0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor0_10, (MR_Integer) 0))));
    MR_Integer Arity0_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstCtor0_10, (MR_Integer) 1))));
    MR_Word SNA0_16;
    MR_Box conv0__OldContext_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      SNA0_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SNA0_16, 0) = ((MR_Box) (SymName0_14));
      MR_hl_field(MR_mktag(0), SNA0_16, 1) = ((MR_Box) (Arity0_15));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Expansions0_12, ((MR_Box) (SNA0_16)), &conv0__OldContext_17);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(OrigInstCtor_9, InstCtor0_10);
      if (succeeded)
      {
        MR_Word ExpansionsAL0_18;
        MR_Word Var_35;

        mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Expansions0_12, &ExpansionsAL0_18);
        Var_35 = (MR_Word) (ExpansionsAL0_18);
        mercury__set__insert_3_p_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), ((MR_Box) (Var_35)), STATE_VARIABLE_Cycles_0_33, STATE_VARIABLE_Cycles_34);
      }
      else
        *STATE_VARIABLE_Cycles_34 = STATE_VARIABLE_Cycles_0_33;
    }
    else
    {
      MR_Word Context_24;
      MR_Word SymName_28;
      MR_Word Args_29;
      MR_Word InstDefn_19;
      MR_Word Params_21;
      MR_Word Body_22;
      MR_Word EqvInst0_26;
      MR_Word EqvInst_27;
      MR_Word Var_37;
      MR_Box conv1_InstDefn_19;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_8, ((MR_Box) (InstCtor0_10)), &conv1_InstDefn_19);
      if (succeeded)
      {
        InstDefn_19 = ((MR_Word) (conv1_InstDefn_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Params_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_19, (MR_Integer) 1))));
        Body_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_19, (MR_Integer) 2))));
        Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_19, (MR_Integer) 4))));
        EqvInst0_26 = (MR_Word) (Body_22);
        parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_21, Args0_11, EqvInst0_26, &EqvInst_27);
        succeeded = ((((MR_tag((MR_Word) EqvInst_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_27, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_27, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
          if (succeeded)
          {
            SymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
            Args_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_30;
        MR_Word InstCtor_31;
        MR_Word Expansions1_32;
        MR_Word next_value_of_InstCtor0_10;
        MR_Word next_value_of_Args0_11;
        MR_Word next_value_of_Expansions0_12;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_29, &Arity_30);
        {
          InstCtor_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InstCtor_31, 0) = ((MR_Box) (SymName_28));
          MR_hl_field(MR_mktag(0), InstCtor_31, 1) = ((MR_Box) (Arity_30));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (SNA0_16)), ((MR_Box) (Context_24)), Expansions0_12, &Expansions1_32);
        // direct tailcall eliminated
        ;
        next_value_of_InstCtor0_10 = InstCtor_31;
        next_value_of_Args0_11 = Args_29;
        next_value_of_Expansions0_12 = Expansions1_32;
        InstCtor0_10 = next_value_of_InstCtor0_10;
        Args0_11 = next_value_of_Args0_11;
        Expansions0_12 = next_value_of_Expansions0_12;
        continue;
      }
      else
        *STATE_VARIABLE_Cycles_34 = STATE_VARIABLE_Cycles_0_33;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_mode_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Spec_8;

    hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Spec_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Spec_8));
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__check_mode_defns_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ImsSubLists_8,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_13,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;
    MR_Word Cycles_11;
    MR_Word Var_17;

    Var_17 = mercury__set__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0));
    hlds__make_hlds__add_mode__find_eqv_cycles_in_modes_4_p_0(ModuleInfo_7, ImsSubLists_8, Var_17, &Cycles_11);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), Cycles_11);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      *STATE_VARIABLE_FoundInvalidInstOrMode_14 = STATE_VARIABLE_FoundInvalidInstOrMode_0_13;
    }
    else
    {
      MR_Word CycleSpecs_12;
      MR_Word Var_19;
      MR_Word Var_20;

      *STATE_VARIABLE_FoundInvalidInstOrMode_14 = (MR_Integer) 1;
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_mode__check_mode_defns_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_7));
        MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), Cycles_11);
      mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_19, Var_20, &CycleSpecs_12);
      *STATE_VARIABLE_Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CycleSpecs_12, STATE_VARIABLE_Specs_0_15);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_modes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Cycles_20;

    hlds__make_hlds__add_mode__find_eqv_cycles_in_mode_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Cycles_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Cycles_20));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_modes_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Cycles_0_3,
  MR_Word * STATE_VARIABLE_Cycles_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cycles_4 = STATE_VARIABLE_Cycles_0_3;
    else
    {
      MR_Word ImsSubList_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ImsSubLists_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModeDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_10, (MR_Integer) 1))));
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_Cycles_18_18;
      MR_Box conv1_STATE_VARIABLE_Cycles_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cycles_0_3;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__find_eqv_cycles_in_modes_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_1));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[2]), Var_17, ModeDefns_14, ((MR_Box) (STATE_VARIABLE_Cycles_0_3)), &conv1_STATE_VARIABLE_Cycles_18_18);
      STATE_VARIABLE_Cycles_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_Cycles_18_18));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsSubLists_11;
      next_value_of_STATE_VARIABLE_Cycles_0_3 = STATE_VARIABLE_Cycles_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Cycles_0_3 = next_value_of_STATE_VARIABLE_Cycles_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_inst_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Spec_8;

    hlds__make_hlds__add_mode__cycle_to_error_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Spec_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Spec_8));
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__check_inst_defns_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ImsSubLists_8,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_13,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;
    MR_Word Cycles_11;
    MR_Word Var_17;

    Var_17 = mercury__set__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0));
    hlds__make_hlds__add_mode__find_eqv_cycles_in_insts_4_p_0(ModuleInfo_7, ImsSubLists_8, Var_17, &Cycles_11);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), Cycles_11);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      *STATE_VARIABLE_FoundInvalidInstOrMode_14 = STATE_VARIABLE_FoundInvalidInstOrMode_0_13;
    }
    else
    {
      MR_Word CycleSpecs_12;
      MR_Word Var_19;
      MR_Word Var_20;

      *STATE_VARIABLE_FoundInvalidInstOrMode_14 = (MR_Integer) 1;
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_mode__check_inst_defns_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_7));
        MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), Cycles_11);
      mercury__list__map_3_p_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_19, Var_20, &CycleSpecs_12);
      *STATE_VARIABLE_Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CycleSpecs_12, STATE_VARIABLE_Specs_0_15);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_insts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Cycles_22;

    hlds__make_hlds__add_mode__find_eqv_cycles_in_inst_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Cycles_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Cycles_22));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__find_eqv_cycles_in_insts_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Cycles_0_3,
  MR_Word * STATE_VARIABLE_Cycles_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cycles_4 = STATE_VARIABLE_Cycles_0_3;
    else
    {
      MR_Word ImsSubList_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ImsSubLists_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InstDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_10, (MR_Integer) 1))));
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_Cycles_18_18;
      MR_Box conv1_STATE_VARIABLE_Cycles_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cycles_0_3;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__find_eqv_cycles_in_insts_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_1));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[2]), Var_17, InstDefns_14, ((MR_Box) (STATE_VARIABLE_Cycles_0_3)), &conv1_STATE_VARIABLE_Cycles_18_18);
      STATE_VARIABLE_Cycles_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_Cycles_18_18));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsSubLists_11;
      next_value_of_STATE_VARIABLE_Cycles_0_3 = STATE_VARIABLE_Cycles_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Cycles_0_3 = next_value_of_STATE_VARIABLE_Cycles_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_mode_defn_6_p_0(
  MR_Word ModeStatus_7,
  MR_Word ItemModeDefnInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 0))));
    MR_Word Params_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 1))));
    MR_Word MaybeAbstractModeDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 2))));
    MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 3))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 4))));

    if ((MaybeAbstractModeDefn_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
    else
    {
      MR_Word ModeDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_13, (MR_Integer) 0))));
      MR_Word ModeTable0_18;
      MR_Word ModeTable_19;
      MR_Integer Arity_38;
      MR_Word ModeCtor_39;
      MR_Word EqvMode_40;
      MR_Word HldsModeBody_41;
      MR_Word ModeDefn_42;
      MR_Word STATE_VARIABLE_ModeTable_38_53;

      hlds__hlds_module__module_info_get_mode_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &ModeTable0_18);
      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), Params_12, &Arity_38);
      {
        ModeCtor_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeCtor_39, 0) = ((MR_Box) (Name_11));
        MR_hl_field(MR_mktag(0), ModeCtor_39, 1) = ((MR_Box) (Arity_38));
      }
      EqvMode_40 = (MR_Word) (ModeDefn_17);
      HldsModeBody_41 = (MR_Word) (EqvMode_40);
      {
        ModeDefn_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeDefn_42, 0) = ((MR_Box) (VarSet_14));
        MR_hl_field(MR_mktag(0), ModeDefn_42, 1) = ((MR_Box) (Params_12));
        MR_hl_field(MR_mktag(0), ModeDefn_42, 2) = ((MR_Box) (HldsModeBody_41));
        MR_hl_field(MR_mktag(0), ModeDefn_42, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), ModeDefn_42, 4) = ((MR_Box) (ModeStatus_7));
      }
      succeeded = hlds__hlds_inst_mode__mode_table_insert_4_p_0(ModeCtor_39, ModeDefn_42, ModeTable0_18, &STATE_VARIABLE_ModeTable_38_53);
      if (succeeded)
      {
        ModeTable_19 = STATE_VARIABLE_ModeTable_38_53;
        *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      }
      else
      {
        MR_Word InstModeStatus_43 = (MR_Word) (ModeStatus_7);

        if (((MR_tag((MR_Word) InstModeStatus_43)) == (MR_Integer) 1))
        {
          MR_Word InstModeImport_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstModeStatus_43, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (InstModeImport_63) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word ModeDefns_45;
                MR_Word OrigModeDefn_46;
                MR_Word OrigContext_50;
                MR_Box conv0_OrigModeDefn_46;

                hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_18, &ModeDefns_45);
                mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_45, ((MR_Box) (ModeCtor_39)), &conv0_OrigModeDefn_46);
                OrigModeDefn_46 = ((MR_Word) (conv0_OrigModeDefn_46));
                OrigContext_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_46, (MR_Integer) 3))));
                hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_11, Arity_38, (MR_String) "mode", Context_15, OrigContext_50, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
              break;
          }
        }
        else
        {
          MR_Word ModeDefns_70;
          MR_Word OrigModeDefn_71;
          MR_Word OrigContext_75;
          MR_Box conv1_OrigModeDefn_71;

          hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_18, &ModeDefns_70);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_70, ((MR_Box) (ModeCtor_39)), &conv1_OrigModeDefn_71);
          OrigModeDefn_71 = ((MR_Word) (conv1_OrigModeDefn_71));
          OrigContext_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_71, (MR_Integer) 3))));
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_11, Arity_38, (MR_String) "mode", Context_15, OrigContext_75, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
        }
        ModeTable_19 = ModeTable0_18;
      }
      hlds__hlds_module__module_info_set_mode_table_3_p_0(ModeTable_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_inst_defn_6_p_0(
  MR_Word InstStatus_7,
  MR_Word ItemInstDefnInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word InstName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 0))));
    MR_Word InstParams_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 1))));
    MR_Word MaybeForType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 2))));
    MR_Word MaybeAbstractInstDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 3))));
    MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 4))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 5))));

    if ((MaybeAbstractInstDefn_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
    else
    {
      MR_Word InstDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_14, (MR_Integer) 0))));
      MR_Word InstTable0_19;
      MR_Word UserInstTable0_20;
      MR_Word UserInstTable_21;
      MR_Word InstTable_22;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &InstTable0_19);
      hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_19, &UserInstTable0_20);
      hlds__make_hlds__add_mode__insts_add_11_p_0(VarSet_15, InstName_11, InstParams_12, MaybeForType_13, InstDefn_18, Context_16, InstStatus_7, UserInstTable0_20, &UserInstTable_21, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
      hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_21, InstTable0_19, &InstTable_22);
      hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_22, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word VarSet_12,
  MR_Word InstSymName_13,
  MR_Word InstParams_14,
  MR_Word MaybeForType_15,
  MR_Word HeadVar__5_5,
  MR_Word Context_17,
  MR_Word InstStatus_18,
  MR_Word STATE_VARIABLE_UserInstTable_0_51,
  MR_Word * STATE_VARIABLE_UserInstTable_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;
    MR_Word EqvInst_16 = (MR_Word) (HeadVar__5_5);
    MR_Integer InstArity_21;
    MR_Word InstCtor_22;
    MR_Word IFTC_26;
    MR_Word InstDefn_45;
    MR_Word STATE_VARIABLE_Specs_106_106;
    MR_Word STATE_VARIABLE_UserInstTable_108_108;

    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), InstParams_14, &InstArity_21);
    {
      InstCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstCtor_22, 0) = ((MR_Box) (InstSymName_13));
      MR_hl_field(MR_mktag(0), InstCtor_22, 1) = ((MR_Box) (InstArity_21));
    }
    switch (MR_tag((MR_Word) EqvInst_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_55;

          IFTC_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeForType_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
            succeeded = (Var_55 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            MR_String Var_56;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word ShortInstSymName_112;
            MR_Word Pieces_113;
            MR_Word Spec_114;

            Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
            {
              ShortInstSymName_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ShortInstSymName_112, 0) = ((MR_Box) (Var_56));
            }
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ShortInstSymName_112));
              MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (InstArity_21));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[15])));
            }
            {
              Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[6])));
              MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_59));
            }
            {
              Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
              MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_17));
              MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (Pieces_113));
            }
            {
              STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_114));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
            }
          }
          else
            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_55;

          IFTC_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeForType_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
            succeeded = (Var_55 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            MR_String Var_56;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word ShortInstSymName_112;
            MR_Word Pieces_113;
            MR_Word Spec_114;

            Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
            {
              ShortInstSymName_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ShortInstSymName_112, 0) = ((MR_Box) (Var_56));
            }
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ShortInstSymName_112));
              MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (InstArity_21));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[15])));
            }
            {
              Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[6])));
              MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_59));
            }
            {
              Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
              MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_17));
              MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (Pieces_113));
            }
            {
              STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_114));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
            }
          }
          else
            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeForType_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Here_27;

              IFTC_26 = (MR_Word) ((MR_Unsigned) 4U);
              Here_27 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
              switch (Here_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ShortInstSymName_28;
                    MR_Word Pieces_29;
                    MR_Word Spec_31;
                    MR_String Var_81;
                    MR_Word Var_84;
                    MR_Word Var_85;
                    MR_Word Var_86;
                    MR_Word Var_103;
                    MR_Word Var_104;

                    Var_81 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
                    {
                      ShortInstSymName_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortInstSymName_28, 0) = ((MR_Box) (Var_81));
                    }
                    {
                      Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (ShortInstSymName_28));
                      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (InstArity_21));
                    }
                    {
                      Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
                    }
                    {
                      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[22])));
                    }
                    {
                      Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_84));
                    }
                    {
                      Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Context_17));
                      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Pieces_29));
                    }
                    {
                      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
                      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
                      MR_hl_field(MR_mktag(3), Spec_31, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 51) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), Spec_31, 3) = ((MR_Box) ((MR_Unsigned) 40U));
                      MR_hl_field(MR_mktag(3), Spec_31, 4) = ((MR_Box) (Var_103));
                    }
                    {
                      STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_31));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word ForType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForType_15, (MR_Integer) 0))));

              {
                IFTC_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), IFTC_26, 0) = ((MR_Box) (ForType_32));
              }
              STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word Var_55;

              IFTC_26 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = (MaybeForType_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_55 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
                succeeded = (Var_55 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_String Var_56;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word ShortInstSymName_112;
                MR_Word Pieces_113;
                MR_Word Spec_114;

                Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
                {
                  ShortInstSymName_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ShortInstSymName_112, 0) = ((MR_Box) (Var_56));
                }
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ShortInstSymName_112));
                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (InstArity_21));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[15])));
                }
                {
                  Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[6])));
                  MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_59));
                }
                {
                  Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_17));
                  MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (Pieces_113));
                }
                {
                  STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_114));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
                }
              }
              else
                STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
            }
            break;
        }
        break;
    }
    {
      InstDefn_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstDefn_45, 0) = ((MR_Box) (VarSet_12));
      MR_hl_field(MR_mktag(0), InstDefn_45, 1) = ((MR_Box) (InstParams_14));
      MR_hl_field(MR_mktag(0), InstDefn_45, 2) = ((MR_Box) (HeadVar__5_5));
      MR_hl_field(MR_mktag(0), InstDefn_45, 3) = ((MR_Box) (IFTC_26));
      MR_hl_field(MR_mktag(0), InstDefn_45, 4) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), InstDefn_45, 5) = ((MR_Box) (InstStatus_18));
    }
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), ((MR_Box) (InstCtor_22)), ((MR_Box) (InstDefn_45)), STATE_VARIABLE_UserInstTable_0_51, &STATE_VARIABLE_UserInstTable_108_108);
    if (succeeded)
    {
      *STATE_VARIABLE_UserInstTable_52 = STATE_VARIABLE_UserInstTable_108_108;
      *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_106_106;
    }
    else
    {
      MR_Word InstModeStatus_46 = (MR_Word) (InstStatus_18);
      MR_Word ReportDup_47;

      ReportDup_47 = hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(InstModeStatus_46);
      switch (ReportDup_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_106_106;
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigInstDefn_48;
            MR_Word OrigContext_49;
            MR_Box conv0_OrigInstDefn_48;

            mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), STATE_VARIABLE_UserInstTable_0_51, ((MR_Box) (InstCtor_22)), &conv0_OrigInstDefn_48);
            OrigInstDefn_48 = ((MR_Word) (conv0_OrigInstDefn_48));
            OrigContext_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstDefn_48, (MR_Integer) 4))));
            hlds__make_hlds_error__report_multiple_def_error_8_p_0(InstSymName_13, InstArity_21, (MR_String) "inst", Context_17, OrigContext_49, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Specs_54);
          }
          break;
      }
      *STATE_VARIABLE_UserInstTable_52 = STATE_VARIABLE_UserInstTable_0_51;
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(
  MR_Word InstModeStatus_3)
{
  {
    MR_Word ReportDup_4;

    if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
    {
      MR_Word InstModeImport_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeImport_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          ReportDup_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          ReportDup_4 = (MR_Integer) 0;
          break;
      }
    }
    else
      ReportDup_4 = (MR_Integer) 1;
    return ReportDup_4;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____cycle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mode____Unify____cycle_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____cycle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mode____Compare____cycle_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mode____Unify____expansions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mode____Compare____expansions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____inst_or_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mode____Unify____inst_or_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____inst_or_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mode____Compare____inst_or_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__add_mode__init(void)
{
}

void mercury__hlds__make_hlds__add_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_cycle_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_expansions_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_inst_or_mode_0);
}

void mercury__hlds__make_hlds__add_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_mode.
