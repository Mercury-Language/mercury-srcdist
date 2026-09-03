/*
** Automatically generated from `hlds_proc.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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


// :- module hlds.hlds_proc.
// :- implementation.

/*
INIT mercury__hlds__hlds_proc__init
ENDINIT
*/

#include "hlds.hlds_proc.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "termination.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "termination.term_constr.mih"
#include "termination.term_norm.mih"
#include "termination.term_osi.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "termination.term_constr.term_constr_data.mih"
#include "termination.term_constr.term_constr_errors.mih"
#include "termination.term_constr.term_constr_main_types.mih"
#include "termination.term_osi.term_osi_errors.mih"
#include "termination.term_osi.term_osi_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_is_live_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_is_live_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_PseudoTypeInfo hlds__hlds_proc__hlds__hlds_proc__field_types_proc_info_0_0[12];

static const MR_ConstString hlds__hlds_proc__hlds__hlds_proc__field_names_proc_info_0_0[12];

static const MR_DuArgLocn hlds__hlds_proc__hlds__hlds_proc__field_locns_proc_info_0_0[12];

static const MR_DuFunctorDesc hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_stag_ordered_proc_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_proc__hlds__hlds_proc__du_ptag_ordered_proc_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_name_ordered_proc_info_0[1];

static const MR_Integer hlds__hlds_proc__hlds__hlds_proc__functor_number_map_proc_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__set_ordlist__ti_set_ordlist_1hlds__pred_proc_id__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1hlds__proc_info_types__type_ctor_info_oisu_pred_kind_for_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1hlds__hlds_llds__type_ctor_info_arg_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1hlds__hlds_llds__type_ctor_info_arg_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_special_proc_return_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_table_io_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_deep_profile_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_untuple_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_proc__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_exception_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_trailing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_mm_tabling_info_0;

static const MR_PseudoTypeInfo hlds__hlds_proc__hlds__hlds_proc__field_types_proc_sub_info_0_0[36];

static const MR_ConstString hlds__hlds_proc__hlds__hlds_proc__field_names_proc_sub_info_0_0[36];

static const MR_DuArgLocn hlds__hlds_proc__hlds__hlds_proc__field_locns_proc_sub_info_0_0[36];

static const MR_DuFunctorDesc hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_sub_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_stag_ordered_proc_sub_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_proc__hlds__hlds_proc__du_ptag_ordered_proc_sub_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_name_ordered_proc_sub_info_0[1];

static const MR_Integer hlds__hlds_proc__hlds__hlds_proc__functor_number_map_proc_sub_info_0[1];

static void MR_CALL 
hlds__hlds_proc____Compare____proc_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_proc__make_fresh_prefix_named_vars_from_types_7_p_0(
  MR_Word ModuleInfo_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_proc____Compare____proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_proc____Compare____proc_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_proc_scalar_common_1[33][2];

static /* final */ const MR_Box hlds__hlds_proc_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__hlds_proc_scalar_common_3[2][1];




static /* final */ const MR_Box hlds__hlds_proc_scalar_common_1[33][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[8]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_oisu_pred_kind_for_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[15]))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_arg_info_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[18]))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_special_proc_return_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[0]))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_table_io_info_0))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_deep_profile_proc_info_0))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_untuple_proc_info_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&termination__term_osi__term_osi_errors__termination__term_osi__term_osi_errors__type_ctor_info_term_error_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[26]))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[27]))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_2[2]))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_exception_info_0))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_trailing_info_0))
  },
  /* row  32 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_mm_tabling_info_0))
  },
};

static /* final */ const MR_Box hlds__hlds_proc_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&hlds__hlds_proc_scalar_common_1[26]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_proc_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_is_live_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_is_live_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_is_live_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_proc__hlds__hlds_proc__field_types_proc_info_0_0[12] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_is_live_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_eval_method_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_sub_info_0)
};

static const MR_ConstString hlds__hlds_proc__hlds__hlds_proc__field_names_proc_info_0_0[12] = {
  (MR_String) "proc_head_vars",
  (MR_String) "proc_body",
  (MR_String) "proc_var_table",
  (MR_String) "proc_rtti_varmaps",
  (MR_String) "proc_inst_varset",
  (MR_String) "proc_maybe_decl_head_modes",
  (MR_String) "proc_actual_head_modes",
  (MR_String) "proc_headvar_caller_liveness",
  (MR_String) "proc_declared_detism",
  (MR_String) "proc_inferred_detism",
  (MR_String) "proc_eval_method",
  (MR_String) "proc_sub_info"
};

static const MR_DuArgLocn hlds__hlds_proc__hlds__hlds_proc__field_locns_proc_info_0_0[12] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_info_0_0 = {
  (MR_String) "proc_info",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_proc__hlds__hlds_proc__field_types_proc_info_0_0,
  hlds__hlds_proc__hlds__hlds_proc__field_names_proc_info_0_0,
  hlds__hlds_proc__hlds__hlds_proc__field_locns_proc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_stag_ordered_proc_info_0_0[1] = { &hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_info_0_0 };

static const MR_DuPtagLayout hlds__hlds_proc__hlds__hlds_proc__du_ptag_ordered_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_proc__hlds__hlds_proc__du_stag_ordered_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_name_ordered_proc_info_0[1] = { &hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_info_0_0 };

static const MR_Integer hlds__hlds_proc__hlds__hlds_proc__functor_number_map_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_proc____Unify____proc_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_proc____Compare____proc_info_0_0_10001)),
  (MR_String) "hlds.hlds_proc",
  (MR_String) "proc_info",
  { hlds__hlds_proc__hlds__hlds_proc__du_name_ordered_proc_info_0 },
  { hlds__hlds_proc__hlds__hlds_proc__du_ptag_ordered_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_proc__hlds__hlds_proc__functor_number_map_proc_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__set_ordlist__ti_set_ordlist_1hlds__pred_proc_id__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1hlds__proc_info_types__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_oisu_pred_kind_for_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1hlds__hlds_llds__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_arg_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1hlds__hlds_llds__type_ctor_info_arg_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__list__ti_list_1hlds__hlds_llds__type_ctor_info_arg_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_special_proc_return_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_special_proc_return_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_table_io_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_table_io_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_deep_profile_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_deep_profile_proc_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_untuple_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_untuple_proc_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&termination__term_osi__term_osi_errors__termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_proc__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
    (MR_TypeInfo) (&hlds__hlds_proc__list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_proc__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_exception_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_exception_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_trailing_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_trailing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_mm_tabling_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_mm_tabling_info_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_proc__hlds__hlds_proc__field_types_proc_sub_info_0_0[36] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__list__ti_list_1term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__set_ordlist__ti_set_ordlist_1hlds__pred_proc_id__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_can_process_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_detism_decl_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_is_address_taken_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_proc_foreign_exports_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_has_user_event_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_needs_maxfr_slot_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_has_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__list__ti_list_1hlds__proc_info_types__type_ctor_info_oisu_pred_kind_for_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1list__ti_list_1hlds__hlds_llds__type_ctor_info_arg_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_special_proc_return_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_table_io_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_deep_profile_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_untuple_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_maybe_input_spec_proc_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1termination__term_osi__term_osi_errors__type_ctor_info_term_error_0),
  (MR_PseudoTypeInfo) (&termination__term_constr__term_constr_main_types__termination__term_constr__term_constr_main_types__type_ctor_info_termination2_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_exception_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_trailing_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_proc__maybe__ti_maybe_1hlds__proc_info_types__type_ctor_info_proc_mm_tabling_info_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_sharing_reuse_info_0)
};

static const MR_ConstString hlds__hlds_proc__hlds__hlds_proc__field_names_proc_sub_info_0_0[36] = {
  (MR_String) "psi_proc_context",
  (MR_String) "psi_item_number",
  (MR_String) "psi_maybe_head_modes_constr",
  (MR_String) "psi_cse_nopull_contexts",
  (MR_String) "psi_proc_var_name_remap",
  (MR_String) "psi_statevar_warnings",
  (MR_String) "psi_deleted_call_callees",
  (MR_String) "psi_can_process",
  (MR_String) "psi_detism_decl",
  (MR_String) "psi_is_address_taken",
  (MR_String) "psi_has_any_foreign_exports",
  (MR_String) "psi_proc_has_parallel_conj",
  (MR_String) "psi_proc_has_user_event",
  (MR_String) "psi_needs_maxfr_slot",
  (MR_String) "psi_proc_has_tail_rec_call",
  (MR_String) "psi_oisu_kind_fors",
  (MR_String) "psi_maybe_require_tailrec",
  (MR_String) "psi_proc_obsolete_in_favour_of",
  (MR_String) "psi_reg_r_headvars",
  (MR_String) "psi_maybe_arg_info",
  (MR_String) "psi_maybe_special_return",
  (MR_String) "psi_initial_liveness",
  (MR_String) "psi_stack_slots",
  (MR_String) "psi_call_table_tip",
  (MR_String) "psi_maybe_table_io_info",
  (MR_String) "psi_table_attributes",
  (MR_String) "psi_maybe_deep_prof_info",
  (MR_String) "psi_maybe_untuple_info",
  (MR_String) "psi_maybe_input_spec",
  (MR_String) "psi_maybe_arg_size_infos",
  (MR_String) "psi_maybe_termination",
  (MR_String) "psi_termination2",
  (MR_String) "psi_exception_info",
  (MR_String) "psi_trailing_info",
  (MR_String) "psi_mm_tabling_info",
  (MR_String) "psi_sharing_reuse_info"
};

static const MR_DuArgLocn hlds__hlds_proc__hlds__hlds_proc__field_locns_proc_sub_info_0_0[36] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 5,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 18,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 19,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 20,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 21,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 22,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 23,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 24,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 25,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 26,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 27,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 28,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 29,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_sub_info_0_0 = {
  (MR_String) "proc_sub_info",
  INT16_C(36),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_proc__hlds__hlds_proc__field_types_proc_sub_info_0_0,
  hlds__hlds_proc__hlds__hlds_proc__field_names_proc_sub_info_0_0,
  hlds__hlds_proc__hlds__hlds_proc__field_locns_proc_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_stag_ordered_proc_sub_info_0_0[1] = { &hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_sub_info_0_0 };

static const MR_DuPtagLayout hlds__hlds_proc__hlds__hlds_proc__du_ptag_ordered_proc_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_proc__hlds__hlds_proc__du_stag_ordered_proc_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_proc__hlds__hlds_proc__du_name_ordered_proc_sub_info_0[1] = { &hlds__hlds_proc__hlds__hlds_proc__du_functor_desc_proc_sub_info_0_0 };

static const MR_Integer hlds__hlds_proc__hlds__hlds_proc__functor_number_map_proc_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_proc____Unify____proc_sub_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_proc____Compare____proc_sub_info_0_0_10001)),
  (MR_String) "hlds.hlds_proc",
  (MR_String) "proc_sub_info",
  { hlds__hlds_proc__hlds__hlds_proc__du_name_ordered_proc_sub_info_0 },
  { hlds__hlds_proc__hlds__hlds_proc__du_ptag_ordered_proc_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_proc__hlds__hlds_proc__functor_number_map_proc_sub_info_0,

};

void MR_CALL 
hlds__hlds_proc____Compare____proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 7);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) & (MR_Integer) 7);
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[6]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[7]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_53 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_54 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_53 < Var_54);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_53 > Var_54);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        parse_tree__prog_data_pragma____Compare____eval_method_0_0(&SubResult11_36, ArgX11_34, ArgY11_35);
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          hlds__hlds_proc____Compare____proc_sub_info_0_0(HeadVar__1_1, ArgX12_37, ArgY12_38);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_proc____Compare____proc_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_111 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_112 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_111 == CastY_112);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX14_43 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 16))));
    MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 17))));
    MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 18))));
    MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 19))));
    MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 20))));
    MR_Word ArgX28_85 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Word ArgY28_86 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 21))));
    MR_Word ArgX29_88 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Word ArgY29_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 22))));
    MR_Word ArgX30_91 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Word ArgY30_92 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 23))));
    MR_Word ArgX31_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Word ArgY31_95 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 24))));
    MR_Word ArgX32_97 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Word ArgY32_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 25))));
    MR_Word ArgX33_100 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 26))));
    MR_Word ArgY33_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 26))));
    MR_Word ArgX34_103 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 27))));
    MR_Word ArgY34_104 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 27))));
    MR_Word ArgX35_106 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 28))));
    MR_Word ArgY35_107 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 28))));
    MR_Word ArgX36_109 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 29))));
    MR_Word ArgY36_110 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 29))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____item_seq_num_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[9]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[10]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_2[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[11]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[12]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_149 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_150 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_149 < Var_150);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_149 > Var_150);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_151 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_152 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_151 < Var_152);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_151 > Var_152);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_153 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_154 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_153 < Var_154);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_153 > Var_154);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_155 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_156 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_155 < Var_156);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_155 > Var_156);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_157 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_158 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_157 < Var_158);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_157 > Var_158);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;
                            MR_Integer Var_159 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_160 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_159 < Var_160);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_159 > Var_160);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_161 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_162 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_161 < Var_162);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_161 > Var_162);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                hlds__proc_info_types____Compare____has_tail_rec_call_0_0(&SubResult15_48, ArgX15_46, ArgY15_47);
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[13]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[14]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[16]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[17]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[19]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[20]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                            succeeded = (SubResult21_66 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[17]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                              succeeded = (SubResult22_69 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_2[1]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[21]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                  succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[22]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                    succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[23]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                      succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        MR_Word SubResult27_84;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[24]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                        succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult27_84;
                                                        else
                                                        {
                                                          MR_Word SubResult28_87;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[25]), &SubResult28_87, ((MR_Box) (ArgX28_85)), ((MR_Box) (ArgY28_86)));
                                                          succeeded = (SubResult28_87 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult28_87;
                                                          else
                                                          {
                                                            MR_Word SubResult29_90;

                                                            hlds__proc_info_types____Compare____maybe_input_spec_proc_0_0(&SubResult29_90, ArgX29_88, ArgY29_89);
                                                            succeeded = (SubResult29_90 != (MR_Integer) 0);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult29_90;
                                                            else
                                                            {
                                                              MR_Word SubResult30_93;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[28]), &SubResult30_93, ((MR_Box) (ArgX30_91)), ((MR_Box) (ArgY30_92)));
                                                              succeeded = (SubResult30_93 != (MR_Integer) 0);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult30_93;
                                                              else
                                                              {
                                                                MR_Word SubResult31_96;

                                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[29]), &SubResult31_96, ((MR_Box) (ArgX31_94)), ((MR_Box) (ArgY31_95)));
                                                                succeeded = (SubResult31_96 != (MR_Integer) 0);
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = SubResult31_96;
                                                                else
                                                                {
                                                                  MR_Word SubResult32_99;

                                                                  termination__term_constr__term_constr_main_types____Compare____termination2_info_0_0(&SubResult32_99, ArgX32_97, ArgY32_98);
                                                                  succeeded = (SubResult32_99 != (MR_Integer) 0);
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = SubResult32_99;
                                                                  else
                                                                  {
                                                                    MR_Word SubResult33_102;

                                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[30]), &SubResult33_102, ((MR_Box) (ArgX33_100)), ((MR_Box) (ArgY33_101)));
                                                                    succeeded = (SubResult33_102 != (MR_Integer) 0);
                                                                    if (succeeded)
                                                                      *HeadVar__1_1 = SubResult33_102;
                                                                    else
                                                                    {
                                                                      MR_Word SubResult34_105;

                                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[31]), &SubResult34_105, ((MR_Box) (ArgX34_103)), ((MR_Box) (ArgY34_104)));
                                                                      succeeded = (SubResult34_105 != (MR_Integer) 0);
                                                                      if (succeeded)
                                                                        *HeadVar__1_1 = SubResult34_105;
                                                                      else
                                                                      {
                                                                        MR_Word SubResult35_108;

                                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[32]), &SubResult35_108, ((MR_Box) (ArgX35_106)), ((MR_Box) (ArgY35_107)));
                                                                        succeeded = (SubResult35_108 != (MR_Integer) 0);
                                                                        if (succeeded)
                                                                          *HeadVar__1_1 = SubResult35_108;
                                                                        else
                                                                          hlds__proc_info_types____Compare____sharing_reuse_info_0_0(HeadVar__1_1, ArgX36_109, ArgY36_110);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) & (MR_Integer) 7);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 7);
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_33_33 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_34_34 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_35_35 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_36_36 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_37_37 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(ArgX11_23, ArgY11_24);
                        if (succeeded)
                          succeeded = hlds__hlds_proc____Unify____proc_sub_info_0_0(ArgX12_25, ArgY12_26);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_75 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_76 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_75 == CastY_76);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_79_79;
    MR_Word TypeInfo_80_80;
    MR_Word TypeInfo_81_81;
    MR_Word TypeInfo_82_82;
    MR_Word TypeInfo_83_83;
    MR_Word TypeInfo_85_85;
    MR_Word TypeInfo_86_86;
    MR_Word TypeInfo_87_87;
    MR_Word TypeInfo_88_88;
    MR_Word TypeInfo_89_89;
    MR_Word TypeInfo_90_90;
    MR_Word TypeInfo_91_91;
    MR_Word TypeInfo_92_92;
    MR_Word TypeInfo_93_93;
    MR_Word TypeInfo_94_94;
    MR_Word TypeInfo_95_95;
    MR_Word TypeInfo_96_96;
    MR_Word TypeInfo_97_97;
    MR_Word TypeInfo_99_99;
    MR_Word TypeInfo_100_100;
    MR_Word TypeInfo_102_102;
    MR_Word TypeInfo_103_103;
    MR_Word TypeInfo_104_104;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX14_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 16))));
    MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 17))));
    MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 18))));
    MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 19))));
    MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 20))));
    MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 21))));
    MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 22))));
    MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 23))));
    MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Word ArgX31_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 24))));
    MR_Word ArgY31_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Word ArgX32_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 25))));
    MR_Word ArgY32_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Word ArgX33_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 26))));
    MR_Word ArgY33_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 26))));
    MR_Word ArgX34_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 27))));
    MR_Word ArgY34_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 27))));
    MR_Word ArgX35_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 28))));
    MR_Word ArgY35_72 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 28))));
    MR_Word ArgX36_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 29))));
    MR_Word ArgY36_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 29))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_79_79 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_80_80 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_81_81 = (MR_Word) (&hlds__hlds_proc_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_82_82 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_83_83 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[12]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_83_83, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = hlds__proc_info_types____Unify____has_tail_rec_call_0_0(ArgX15_31, ArgY15_32);
                                if (succeeded)
                                {
                                  TypeInfo_85_85 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[13]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_86_86 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[14]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_87_87 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[16]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_87, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        TypeInfo_88_88 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[17]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                        if (succeeded)
                                        {
                                          TypeInfo_89_89 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[19]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          if (succeeded)
                                          {
                                            TypeInfo_90_90 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[20]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                            if (succeeded)
                                            {
                                              TypeInfo_91_91 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[17]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                              if (succeeded)
                                              {
                                                TypeInfo_92_92 = (MR_Word) (&hlds__hlds_proc_scalar_common_2[1]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_93_93 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[21]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_93_93, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_94_94 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[22]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_95_95 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[23]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_96_96 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[24]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_97_97 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[25]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX28_57)), ((MR_Box) (ArgY28_58)));
                                                          if (succeeded)
                                                          {
                                                            succeeded = hlds__proc_info_types____Unify____maybe_input_spec_proc_0_0(ArgX29_59, ArgY29_60);
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_99_99 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[28]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_99_99, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_100_100 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[29]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_100_100, ((MR_Box) (ArgX31_63)), ((MR_Box) (ArgY31_64)));
                                                                if (succeeded)
                                                                {
                                                                  succeeded = termination__term_constr__term_constr_main_types____Unify____termination2_info_0_0(ArgX32_65, ArgY32_66);
                                                                  if (succeeded)
                                                                  {
                                                                    TypeInfo_102_102 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[30]);
                                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (ArgX33_67)), ((MR_Box) (ArgY33_68)));
                                                                    if (succeeded)
                                                                    {
                                                                      TypeInfo_103_103 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[31]);
                                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (ArgX34_69)), ((MR_Box) (ArgY34_70)));
                                                                      if (succeeded)
                                                                      {
                                                                        TypeInfo_104_104 = (MR_Word) (&hlds__hlds_proc_scalar_common_1[32]);
                                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_104_104, ((MR_Box) (ArgX35_71)), ((MR_Box) (ArgY35_72)));
                                                                        if (succeeded)
                                                                          succeeded = hlds__proc_info_types____Unify____sharing_reuse_info_0_0(ArgX36_73, ArgY36_74);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_sharing_reuse_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (X_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_mm_tabling_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_trailing_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_exception_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_termination2_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_termination_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_arg_size_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_input_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_untuple_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_deep_profile_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_table_attributes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_proc_table_io_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_call_table_tip_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_stack_slots_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_initial_liveness_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_special_return_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_arg_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Unsigned packed_word_1;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (X_4));
  }
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  Var_21 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Var_10, 1))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Var_10, 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Var_10, 3))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Var_10, 4))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Var_10, 5))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Var_10, 6))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_10, 7)));
  Var_37 = ((MR_Word) ((MR_hl_field(0, Var_10, 8))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, Var_10, 9))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, Var_10, 10))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_10, 11))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_10, 12))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_10, 14))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_10, 15))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_10, 16))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_10, 17))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_10, 18))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_10, 19))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_10, 20))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_10, 21))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_10, 22))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_10, 23))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, Var_10, 24))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, Var_10, 25))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, Var_10, 26))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, Var_10, 27))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, Var_10, 28))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_10, 29))));
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_11, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_11, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_11, 8) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_11, 9) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_11, 10) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_11, 11) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_11, 12) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_11, 13) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_11, 14) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_11, 15) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_11, 16) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_11, 17) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_11, 18) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_11, 19) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_11, 20) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_11, 21) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_11, 22) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_11, 23) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_11, 24) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_11, 25) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_11, 26) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_11, 27) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_11, 28) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_11, 29) = ((MR_Box) (Var_58));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_11));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_reg_r_headvars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_obsolete_in_favour_of_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_require_tailrec_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Unsigned packed_word_1;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (X_4));
  }
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  Var_21 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Var_10, 1))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Var_10, 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Var_10, 3))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Var_10, 4))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Var_10, 5))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Var_10, 6))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_10, 7)));
  Var_37 = ((MR_Word) ((MR_hl_field(0, Var_10, 8))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, Var_10, 9))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_10, 11))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_10, 12))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_10, 13))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_10, 14))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_10, 15))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_10, 16))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_10, 17))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_10, 18))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_10, 19))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_10, 20))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_10, 21))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_10, 22))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_10, 23))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, Var_10, 24))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, Var_10, 25))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, Var_10, 26))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, Var_10, 27))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, Var_10, 28))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_10, 29))));
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_11, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_11, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_11, 8) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_11, 9) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_11, 10) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_11, 11) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_11, 12) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_11, 13) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_11, 14) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_11, 15) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_11, 16) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_11, 17) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_11, 18) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_11, 19) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_11, 20) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_11, 21) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_11, 22) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_11, 23) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_11, 24) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_11, 25) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_11, 26) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_11, 27) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_11, 28) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_11, 29) = ((MR_Box) (Var_58));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_11));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_oisu_kind_fors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_has_tail_rec_call_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_needs_maxfr_slot_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 5)) & (MR_Integer) 3);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 5)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 3)) | (((((MR_Unsigned) (Var_33) << 2)) | (((((MR_Unsigned) (Var_34) << 1)) | (MR_Unsigned) (X_4)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_has_user_event_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 5)) & (MR_Integer) 3);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 5)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 3)) | (((((MR_Unsigned) (Var_33) << 2)) | (((((MR_Unsigned) (X_4) << 1)) | (MR_Unsigned) (Var_35)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_has_parallel_conj_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 5)) & (MR_Integer) 3);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 5)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 3)) | (((((MR_Unsigned) (X_4) << 2)) | (((((MR_Unsigned) (Var_34) << 1)) | (MR_Unsigned) (Var_35)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_has_any_foreign_exports_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 5)) & (MR_Integer) 3);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 5)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (X_4) << 3)) | (((((MR_Unsigned) (Var_33) << 2)) | (((((MR_Unsigned) (Var_34) << 1)) | (MR_Unsigned) (Var_35)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_address_taken_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 5)) & (MR_Integer) 3);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 5)) | (((((MR_Unsigned) (X_4) << 4)) | (((((MR_Unsigned) (Var_32) << 3)) | (((((MR_Unsigned) (Var_33) << 2)) | (((((MR_Unsigned) (Var_34) << 1)) | (MR_Unsigned) (Var_35)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_detism_decl_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (X_4) << 5)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 3)) | (((((MR_Unsigned) (Var_33) << 2)) | (((((MR_Unsigned) (Var_34) << 1)) | (MR_Unsigned) (Var_35)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_can_process_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 5)) & (MR_Integer) 3);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, 7))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (((((MR_Unsigned) (X_4) << 7)) | (((((MR_Unsigned) (Var_30) << 5)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 3)) | (((((MR_Unsigned) (Var_33) << 2)) | (((((MR_Unsigned) (Var_34) << 1)) | (MR_Unsigned) (Var_35)))))))))))));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_deleted_call_callees_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_statevar_warnings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_var_name_remap_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_cse_nopull_contexts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, 17))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, 18))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, 19))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, 20))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, 21))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, 22))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, 23))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, 24))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, 25))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, 26))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, 27))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, 28))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, 29))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_9, 7)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_head_modes_constraint_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Unsigned packed_word_1;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (X_4));
  }
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  Var_21 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Var_10, 1))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Var_10, 3))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Var_10, 4))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Var_10, 5))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Var_10, 6))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_10, 7)));
  Var_37 = ((MR_Word) ((MR_hl_field(0, Var_10, 8))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, Var_10, 9))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, Var_10, 10))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_10, 11))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_10, 12))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_10, 13))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_10, 14))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_10, 15))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_10, 16))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_10, 17))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_10, 18))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_10, 19))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_10, 20))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_10, 21))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_10, 22))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_10, 23))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, Var_10, 24))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, Var_10, 25))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, Var_10, 26))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, Var_10, 27))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, Var_10, 28))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_10, 29))));
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_11, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_11, 7) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_11, 8) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_11, 9) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_11, 10) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_11, 11) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_11, 12) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_11, 13) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_11, 14) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_11, 15) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_11, 16) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_11, 17) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_11, 18) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_11, 19) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_11, 20) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_11, 21) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_11, 22) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_11, 23) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_11, 24) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_11, 25) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_11, 26) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_11, 27) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_11, 28) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_11, 29) = ((MR_Box) (Var_58));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_11));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_eval_method_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_inferred_determinism_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_arglives_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_argmodes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_maybe_declared_argmodes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_inst_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_var_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_goal_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_headvars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))) & (MR_Integer) 7);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_sharing_reuse_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 29))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_mm_tabling_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 28))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_trailing_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 27))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_exception_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 26))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_termination2_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 25))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_termination_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 24))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_arg_size_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 23))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_input_spec_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 22))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_untuple_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 21))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_deep_profile_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 20))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_table_attributes_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 19))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_proc_table_io_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 18))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_call_table_tip_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 17))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_stack_slots_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 16))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_initial_liveness_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 15))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_special_return_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 14))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_arg_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 13))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_reg_r_headvars_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 12))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_obsolete_in_favour_of_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 11))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_require_tailrec_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 10))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_oisu_kind_fors_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 9))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_has_tail_rec_call_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 8))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_needs_maxfr_slot_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_has_user_event_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_has_parallel_conj_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_has_any_foreign_exports_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_is_address_taken_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) >> 4)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_detism_decl_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) >> 5)) & (MR_Integer) 3);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_can_process_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, 7))) >> 7)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_deleted_call_callees_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 6))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_statevar_warnings_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 5))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_var_name_remap_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 4))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_cse_nopull_contexts_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 3))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_head_modes_constr_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 2))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_item_number_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 1))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_context_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 0))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_eval_method_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 10))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_inferred_determinism_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, PI_3, 9))) & (MR_Integer) 7);
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_declared_determinism_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 8))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_arglives_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 7))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_argmodes_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 6))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_maybe_declared_argmodes_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 5))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_inst_varset_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 4))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_rtti_varmaps_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 3))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_var_table_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 2))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_goal_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 1))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_get_headvars_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 0))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_set_body_6_p_0(
  MR_Word VarTable_7,
  MR_Word HeadVars_8,
  MR_Word Goal_9,
  MR_Word RttiVarMaps_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 4))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 5))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 6))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 7))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 8))));
  MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 9))) & (MR_Integer) 7);
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 10))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcInfo_0_12, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ProcInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVars_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_26));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_create_48_p_0(
  MR_Word HeadVars_49,
  MR_Word Goal_50,
  MR_Word VarTable_51,
  MR_Word RttiVarMaps_52,
  MR_Word InstVarSet_53,
  MR_Word DeclaredModes_54,
  MR_Word Modes_55,
  MR_Word MaybeArgLives_56,
  MR_Word MaybeDeclaredDetism_57,
  MR_Word Detism_58,
  MR_Word EvalMethod_59,
  MR_Word MainContext_60,
  MR_Word ItemNumber_61,
  MR_Word CanProcess_62,
  MR_Word MaybeHeadModesConstr_63,
  MR_Word DetismDecl_64,
  MR_Word CseNopullContexts_65,
  MR_Word MaybeUntupleInfo_66,
  MR_Word MaybeInputSpecProc_67,
  MR_Word VarNameRemap_68,
  MR_Word StateVarWarnings_69,
  MR_Word DeletedCallees_70,
  MR_Word IsAddressTaken_71,
  MR_Word HasForeignProcExports_72,
  MR_Word HasParallelConj_73,
  MR_Word HasUserEvent_74,
  MR_Word HasTailCallEvent_75,
  MR_Word OisuKinds_76,
  MR_Word MaybeRequireTailRecursion_77,
  MR_Word RegR_HeadVars_78,
  MR_Word MaybeArgPassInfo_79,
  MR_Word MaybeSpecialReturn_80,
  MR_Word InitialLiveness_81,
  MR_Word StackSlots_82,
  MR_Word NeedsMaxfrSlot_83,
  MR_Word MaybeCallTableTip_84,
  MR_Word MaybeTableIOInfo_85,
  MR_Word MaybeTableAttrs_86,
  MR_Word MaybeObsoleteInFavourOf_87,
  MR_Word MaybeDeepProfProcInfo_88,
  MR_Word MaybeArgSizes_89,
  MR_Word MaybeTermInfo_90,
  MR_Word Term2Info_91,
  MR_Word MaybeExceptionInfo_92,
  MR_Word MaybeTrailingInfo_93,
  MR_Word MaybeMMTablingInfo_94,
  MR_Word SharingReuseInfo_95,
  MR_Word * ProcInfo_96)
{
  MR_Word ProcSubInfo_97;

  {
    ProcSubInfo_97 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcSubInfo_97, 0) = ((MR_Box) (MainContext_60));
    MR_hl_field(0, ProcSubInfo_97, 1) = ((MR_Box) (ItemNumber_61));
    MR_hl_field(0, ProcSubInfo_97, 2) = ((MR_Box) (MaybeHeadModesConstr_63));
    MR_hl_field(0, ProcSubInfo_97, 3) = ((MR_Box) (CseNopullContexts_65));
    MR_hl_field(0, ProcSubInfo_97, 4) = ((MR_Box) (VarNameRemap_68));
    MR_hl_field(0, ProcSubInfo_97, 5) = ((MR_Box) (StateVarWarnings_69));
    MR_hl_field(0, ProcSubInfo_97, 6) = ((MR_Box) (DeletedCallees_70));
    MR_hl_field(0, ProcSubInfo_97, 7) = (MR_Box) (((((MR_Unsigned) (CanProcess_62) << 7)) | (((((MR_Unsigned) (DetismDecl_64) << 5)) | (((((MR_Unsigned) (IsAddressTaken_71) << 4)) | (((((MR_Unsigned) (HasForeignProcExports_72) << 3)) | (((((MR_Unsigned) (HasParallelConj_73) << 2)) | (((((MR_Unsigned) (HasUserEvent_74) << 1)) | (MR_Unsigned) (NeedsMaxfrSlot_83)))))))))))));
    MR_hl_field(0, ProcSubInfo_97, 8) = ((MR_Box) (HasTailCallEvent_75));
    MR_hl_field(0, ProcSubInfo_97, 9) = ((MR_Box) (OisuKinds_76));
    MR_hl_field(0, ProcSubInfo_97, 10) = ((MR_Box) (MaybeRequireTailRecursion_77));
    MR_hl_field(0, ProcSubInfo_97, 11) = ((MR_Box) (MaybeObsoleteInFavourOf_87));
    MR_hl_field(0, ProcSubInfo_97, 12) = ((MR_Box) (RegR_HeadVars_78));
    MR_hl_field(0, ProcSubInfo_97, 13) = ((MR_Box) (MaybeArgPassInfo_79));
    MR_hl_field(0, ProcSubInfo_97, 14) = ((MR_Box) (MaybeSpecialReturn_80));
    MR_hl_field(0, ProcSubInfo_97, 15) = ((MR_Box) (InitialLiveness_81));
    MR_hl_field(0, ProcSubInfo_97, 16) = ((MR_Box) (StackSlots_82));
    MR_hl_field(0, ProcSubInfo_97, 17) = ((MR_Box) (MaybeCallTableTip_84));
    MR_hl_field(0, ProcSubInfo_97, 18) = ((MR_Box) (MaybeTableIOInfo_85));
    MR_hl_field(0, ProcSubInfo_97, 19) = ((MR_Box) (MaybeTableAttrs_86));
    MR_hl_field(0, ProcSubInfo_97, 20) = ((MR_Box) (MaybeDeepProfProcInfo_88));
    MR_hl_field(0, ProcSubInfo_97, 21) = ((MR_Box) (MaybeUntupleInfo_66));
    MR_hl_field(0, ProcSubInfo_97, 22) = ((MR_Box) (MaybeInputSpecProc_67));
    MR_hl_field(0, ProcSubInfo_97, 23) = ((MR_Box) (MaybeArgSizes_89));
    MR_hl_field(0, ProcSubInfo_97, 24) = ((MR_Box) (MaybeTermInfo_90));
    MR_hl_field(0, ProcSubInfo_97, 25) = ((MR_Box) (Term2Info_91));
    MR_hl_field(0, ProcSubInfo_97, 26) = ((MR_Box) (MaybeExceptionInfo_92));
    MR_hl_field(0, ProcSubInfo_97, 27) = ((MR_Box) (MaybeTrailingInfo_93));
    MR_hl_field(0, ProcSubInfo_97, 28) = ((MR_Box) (MaybeMMTablingInfo_94));
    MR_hl_field(0, ProcSubInfo_97, 29) = ((MR_Box) (SharingReuseInfo_95));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *ProcInfo_96 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVars_49));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_50));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_51));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_52));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstVarSet_53));
    MR_hl_field(0, base, 5) = ((MR_Box) (DeclaredModes_54));
    MR_hl_field(0, base, 6) = ((MR_Box) (Modes_55));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeArgLives_56));
    MR_hl_field(0, base, 8) = ((MR_Box) (MaybeDeclaredDetism_57));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Detism_58));
    MR_hl_field(0, base, 10) = ((MR_Box) (EvalMethod_59));
    MR_hl_field(0, base, 11) = ((MR_Box) (ProcSubInfo_97));
  }
}

void MR_CALL 
hlds__hlds_proc__proc_prepare_to_clone_48_p_0(
  MR_Word ProcInfo_49,
  MR_Word * HeadVars_50,
  MR_Word * Goal_51,
  MR_Word * VarTable_52,
  MR_Word * RttiVarMaps_53,
  MR_Word * InstVarSet_54,
  MR_Word * DeclaredModes_55,
  MR_Word * Modes_56,
  MR_Word * MaybeArgLives_57,
  MR_Word * MaybeDeclaredDetism_58,
  MR_Word * Detism_59,
  MR_Word * EvalMethod_60,
  MR_Word * MainContext_61,
  MR_Word * ItemNumber_62,
  MR_Word * CanProcess_63,
  MR_Word * MaybeHeadModesConstr_64,
  MR_Word * DetismDecl_65,
  MR_Word * CseNopullContexts_66,
  MR_Word * MaybeUntupleInfo_67,
  MR_Word * MaybeInputSpecProc_68,
  MR_Word * VarNameRemap_69,
  MR_Word * StateVarWarnings_70,
  MR_Word * DeletedCallees_71,
  MR_Word * IsAddressTaken_72,
  MR_Word * HasForeignProcExports_73,
  MR_Word * HasParallelConj_74,
  MR_Word * HasUserEvent_75,
  MR_Word * HasTailCallEvent_76,
  MR_Word * OisuKinds_77,
  MR_Word * MaybeRequireTailRecursion_78,
  MR_Word * RegR_HeadVars_79,
  MR_Word * MaybeArgPassInfo_80,
  MR_Word * MaybeSpecialReturn_81,
  MR_Word * InitialLiveness_82,
  MR_Word * StackSlots_83,
  MR_Word * NeedsMaxfrSlot_84,
  MR_Word * MaybeCallTableTip_85,
  MR_Word * MaybeTableIOInfo_86,
  MR_Word * MaybeTableAttrs_87,
  MR_Word * MaybeObsoleteInFavourOf_88,
  MR_Word * MaybeDeepProfProcInfo_89,
  MR_Word * MaybeArgSizes_90,
  MR_Word * MaybeTermInfo_91,
  MR_Word * Term2Info_92,
  MR_Word * MaybeExceptionInfo_93,
  MR_Word * MaybeTrailingInfo_94,
  MR_Word * MaybeMMTablingInfo_95,
  MR_Word * SharingReuseInfo_96)
{
  MR_Word ProcSubInfo_97;

  *HeadVars_50 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 0))));
  *Goal_51 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 1))));
  *VarTable_52 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 2))));
  *RttiVarMaps_53 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 3))));
  *InstVarSet_54 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 4))));
  *DeclaredModes_55 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 5))));
  *Modes_56 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 6))));
  *MaybeArgLives_57 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 7))));
  *MaybeDeclaredDetism_58 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 8))));
  *Detism_59 = ((MR_Unsigned) ((MR_hl_field(0, ProcInfo_49, 9))) & (MR_Integer) 7);
  *EvalMethod_60 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 10))));
  ProcSubInfo_97 = ((MR_Word) ((MR_hl_field(0, ProcInfo_49, 11))));
  *MainContext_61 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 0))));
  *ItemNumber_62 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 1))));
  *MaybeHeadModesConstr_64 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 2))));
  *CseNopullContexts_66 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 3))));
  *VarNameRemap_69 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 4))));
  *StateVarWarnings_70 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 5))));
  *DeletedCallees_71 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 6))));
  *CanProcess_63 = ((((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) >> 7)) & (MR_Integer) 1);
  *DetismDecl_65 = ((((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) >> 5)) & (MR_Integer) 3);
  *IsAddressTaken_72 = ((((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) >> 4)) & (MR_Integer) 1);
  *HasForeignProcExports_73 = ((((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) >> 3)) & (MR_Integer) 1);
  *HasParallelConj_74 = ((((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) >> 2)) & (MR_Integer) 1);
  *HasUserEvent_75 = ((((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) >> 1)) & (MR_Integer) 1);
  *NeedsMaxfrSlot_84 = ((MR_Unsigned) ((MR_hl_field(0, ProcSubInfo_97, 7))) & (MR_Integer) 1);
  *HasTailCallEvent_76 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 8))));
  *OisuKinds_77 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 9))));
  *MaybeRequireTailRecursion_78 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 10))));
  *MaybeObsoleteInFavourOf_88 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 11))));
  *RegR_HeadVars_79 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 12))));
  *MaybeArgPassInfo_80 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 13))));
  *MaybeSpecialReturn_81 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 14))));
  *InitialLiveness_82 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 15))));
  *StackSlots_83 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 16))));
  *MaybeCallTableTip_85 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 17))));
  *MaybeTableIOInfo_86 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 18))));
  *MaybeTableAttrs_87 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 19))));
  *MaybeDeepProfProcInfo_89 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 20))));
  *MaybeUntupleInfo_67 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 21))));
  *MaybeInputSpecProc_68 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 22))));
  *MaybeArgSizes_90 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 23))));
  *MaybeTermInfo_91 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 24))));
  *Term2Info_92 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 25))));
  *MaybeExceptionInfo_93 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 26))));
  *MaybeTrailingInfo_94 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 27))));
  *MaybeMMTablingInfo_95 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 28))));
  *SharingReuseInfo_96 = ((MR_Word) ((MR_hl_field(0, ProcSubInfo_97, 29))));
}

void MR_CALL 
hlds__hlds_proc__proc_info_init_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word MainContext_16,
  MR_Word ItemNumber_17,
  MR_Word Types_18,
  MR_Word InstVarSet_19,
  MR_Word DeclaredModes_20,
  MR_Word Modes_21,
  MR_Word MaybeArgLives_22,
  MR_Word DetismDecl_23,
  MR_Word MaybeDeclaredDetism_24,
  MR_Word IsAddressTaken_25,
  MR_Word HasParallelConj_26,
  MR_Word VarNameRemap_27,
  MR_Word * ProcInfo_28)
{
  MR_Word DeletedCallees_34;
  MR_Word RegR_HeadVars_40;
  MR_Word InitialLiveness_43;
  MR_Word StackSlots_44;
  MR_Word Term2Info_53;
  MR_Word SharingReuseInfo_57;
  MR_Word ProcSubInfo_58;
  MR_Word VarTable0_60;
  MR_Word HeadVars_61;
  MR_Word VarTable_62;
  MR_Word GoalInfo_63;
  MR_Word BodyGoal_64;
  MR_Word RttiVarMaps_65;

  mercury__set__init_1_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), &DeletedCallees_34);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &RegR_HeadVars_40);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &InitialLiveness_43);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), &StackSlots_44);
  Term2Info_53 = termination__term_constr__term_constr_main_types__term2_info_init_0_f_0();
  SharingReuseInfo_57 = hlds__proc_info_types__sharing_reuse_info_init_0_f_0();
  parse_tree__var_table__init_var_table_1_p_0(&VarTable0_60);
  hlds__hlds_proc__make_fresh_prefix_named_vars_from_types_7_p_0(ModuleInfo_15, (MR_String) "HeadVar__", (MR_Integer) 1, Types_18, &HeadVars_61, VarTable0_60, &VarTable_62);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo_63);
  {
    BodyGoal_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BodyGoal_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_proc_scalar_common_2[3])));
    MR_hl_field(0, BodyGoal_64, 1) = ((MR_Box) (GoalInfo_63));
  }
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_65);
  {
    ProcSubInfo_58 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcSubInfo_58, 0) = ((MR_Box) (MainContext_16));
    MR_hl_field(0, ProcSubInfo_58, 1) = ((MR_Box) (ItemNumber_17));
    MR_hl_field(0, ProcSubInfo_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 4) = ((MR_Box) (VarNameRemap_27));
    MR_hl_field(0, ProcSubInfo_58, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 6) = ((MR_Box) (DeletedCallees_34));
    MR_hl_field(0, ProcSubInfo_58, 7) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (DetismDecl_23) << 5)) | (((((MR_Unsigned) (IsAddressTaken_25) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (HasParallelConj_26) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))));
    MR_hl_field(0, ProcSubInfo_58, 8) = ((MR_Box) (&hlds__hlds_proc_scalar_common_3[0]));
    MR_hl_field(0, ProcSubInfo_58, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 12) = ((MR_Box) (RegR_HeadVars_40));
    MR_hl_field(0, ProcSubInfo_58, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 15) = ((MR_Box) (InitialLiveness_43));
    MR_hl_field(0, ProcSubInfo_58, 16) = ((MR_Box) (StackSlots_44));
    MR_hl_field(0, ProcSubInfo_58, 17) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 18) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 19) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 20) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 25) = ((MR_Box) (Term2Info_53));
    MR_hl_field(0, ProcSubInfo_58, 26) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 27) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 28) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_58, 29) = ((MR_Box) (SharingReuseInfo_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *ProcInfo_28 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVars_61));
    MR_hl_field(0, base, 1) = ((MR_Box) (BodyGoal_64));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_62));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_65));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstVarSet_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (DeclaredModes_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Modes_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeArgLives_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (MaybeDeclaredDetism_24));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 11) = ((MR_Box) (ProcSubInfo_58));
  }
}

static void MR_CALL 
hlds__hlds_proc__make_fresh_prefix_named_vars_from_types_7_p_0(
  MR_Word ModuleInfo_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = HeadVar__6_6;
  }
  else
  {
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Types_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_19;
    MR_Word Vars_20;
    MR_Word STATE_VARIABLE_VarTable_1_24;
    MR_Integer Var_25;
    MR_String Name_28;
    MR_Word IsDummy_29;
    MR_Word Entry_30;
    MR_String Var_37;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_3[1]), Num_3, &Var_37);
    Name_28 = mercury__string__f_43_43_2_f_0(BaseName_2, Var_37);
    IsDummy_29 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_17);
    {
      Entry_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_30, 0) = ((MR_Box) (Name_28));
      MR_hl_field(0, Entry_30, 1) = ((MR_Box) (Type_17));
      MR_hl_field(0, Entry_30, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_29));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_30, &Var_19, HeadVar__6_6, &STATE_VARIABLE_VarTable_1_24);
    Var_25 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
    hlds__hlds_proc__make_fresh_prefix_named_vars_from_types_7_p_0(ModuleInfo_1, BaseName_2, Var_25, Types_18, &Vars_20, STATE_VARIABLE_VarTable_1_24, HeadVar__7_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_20));
    }
  }
}

void MR_CALL 
hlds__hlds_proc__proc_info_create_14_p_0(
  MR_Word Context_15,
  MR_Word ItemNumber_16,
  MR_Word VarTable_17,
  MR_Word HeadVars_18,
  MR_Word InstVarSet_19,
  MR_Word HeadModes_20,
  MR_Word DetismDecl_21,
  MR_Word Detism_22,
  MR_Word Goal_23,
  MR_Word RttiVarMaps_24,
  MR_Word IsAddressTaken_25,
  MR_Word HasParallelConj_26,
  MR_Word VarNameRemap_27,
  MR_Word * ProcInfo_28)
{
  MR_Word Var_29;

  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Detism_22));
  }
  hlds__hlds_proc__proc_info_create_with_declared_detism_15_p_0(Context_15, ItemNumber_16, VarTable_17, HeadVars_18, InstVarSet_19, HeadModes_20, DetismDecl_21, Var_29, Detism_22, Goal_23, RttiVarMaps_24, IsAddressTaken_25, HasParallelConj_26, VarNameRemap_27, ProcInfo_28);
}

void MR_CALL 
hlds__hlds_proc__proc_info_create_with_declared_detism_15_p_0(
  MR_Word MainContext_16,
  MR_Word ItemNumber_17,
  MR_Word VarTable_18,
  MR_Word HeadVars_19,
  MR_Word InstVarSet_20,
  MR_Word Modes_21,
  MR_Word DetismDecl_22,
  MR_Word MaybeDeclaredDetism_23,
  MR_Word Detism_24,
  MR_Word Goal_25,
  MR_Word RttiVarMaps_26,
  MR_Word IsAddressTaken_27,
  MR_Word HasParallelConj_28,
  MR_Word VarNameRemap_29,
  MR_Word * ProcInfo_30)
{
  MR_Word DeletedCallees_34;
  MR_Word RegR_HeadVars_41;
  MR_Word InitialLiveness_44;
  MR_Word StackSlots_45;
  MR_Word Term2Info_55;
  MR_Word SharingReuseInfo_59;
  MR_Word ProcSubInfo_60;

  mercury__set__init_1_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), &DeletedCallees_34);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &RegR_HeadVars_41);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &InitialLiveness_44);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_proc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), &StackSlots_45);
  Term2Info_55 = termination__term_constr__term_constr_main_types__term2_info_init_0_f_0();
  SharingReuseInfo_59 = hlds__proc_info_types__sharing_reuse_info_init_0_f_0();
  {
    ProcSubInfo_60 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcSubInfo_60, 0) = ((MR_Box) (MainContext_16));
    MR_hl_field(0, ProcSubInfo_60, 1) = ((MR_Box) (ItemNumber_17));
    MR_hl_field(0, ProcSubInfo_60, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 4) = ((MR_Box) (VarNameRemap_29));
    MR_hl_field(0, ProcSubInfo_60, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 6) = ((MR_Box) (DeletedCallees_34));
    MR_hl_field(0, ProcSubInfo_60, 7) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (DetismDecl_22) << 5)) | (((((MR_Unsigned) (IsAddressTaken_27) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (HasParallelConj_28) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))));
    MR_hl_field(0, ProcSubInfo_60, 8) = ((MR_Box) (&hlds__hlds_proc_scalar_common_3[0]));
    MR_hl_field(0, ProcSubInfo_60, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 12) = ((MR_Box) (RegR_HeadVars_41));
    MR_hl_field(0, ProcSubInfo_60, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 15) = ((MR_Box) (InitialLiveness_44));
    MR_hl_field(0, ProcSubInfo_60, 16) = ((MR_Box) (StackSlots_45));
    MR_hl_field(0, ProcSubInfo_60, 17) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 18) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 19) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 20) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 25) = ((MR_Box) (Term2Info_55));
    MR_hl_field(0, ProcSubInfo_60, 26) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 27) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 28) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcSubInfo_60, 29) = ((MR_Box) (SharingReuseInfo_59));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *ProcInfo_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVars_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_26));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstVarSet_20));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = ((MR_Box) (Modes_21));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 8) = ((MR_Box) (MaybeDeclaredDetism_23));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Detism_24));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 11) = ((MR_Box) (ProcSubInfo_60));
  }
}

static MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_proc____Unify____proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_proc____Compare____proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_proc____Compare____proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_proc____Unify____proc_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_proc____Unify____proc_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_proc____Compare____proc_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_proc____Compare____proc_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_proc__init(void)
{
}

void mercury__hlds__hlds_proc__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0);
  MR_register_type_ctor_info(&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_sub_info_0);
}

void mercury__hlds__hlds_proc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_proc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_proc.
