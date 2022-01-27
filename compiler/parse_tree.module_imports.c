/*
** Automatically generated from `module_imports.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module parse_tree.module_imports. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_imports__init
ENDINIT
*/

#include "parse_tree.module_imports.mih"


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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "time.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0;

#line 140 "parse_tree.module_imports.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__maybe__pti_maybe_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0;

#line 143 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 146 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0;

#line 149 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 152 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0;

#line 155 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 158 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

#line 161 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

#line 164 "parse_tree.module_imports.c"
static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[20];

#line 167 "parse_tree.module_imports.c"
static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[20];

#line 170 "parse_tree.module_imports.c"
static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0;

#line 173 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1];

#line 176 "parse_tree.module_imports.c"
static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1];

#line 179 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1];

#line 182 "parse_tree.module_imports.c"
static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1];

#line 185 "parse_tree.module_imports.c"
static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3];

#line 188 "parse_tree.module_imports.c"
static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3];

#line 191 "parse_tree.module_imports.c"
static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0;

#line 194 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1];

#line 197 "parse_tree.module_imports.c"
static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1];

#line 200 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1];

#line 203 "parse_tree.module_imports.c"
static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1];

#line 206 "parse_tree.module_imports.c"
static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
#line 209 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_1,
#line 211 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2);

#line 214 "parse_tree.module_imports.c"
static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
#line 217 "parse_tree.module_imports.c"
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
#line 219 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2,
#line 221 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_3);

#line 224 "parse_tree.module_imports.c"
static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
#line 227 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_1,
#line 229 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2);

#line 232 "parse_tree.module_imports.c"
static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
#line 235 "parse_tree.module_imports.c"
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
#line 237 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2,
#line 239 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_3);

#line 242 "parse_tree.module_imports.c"
static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamps_0_0_10001(
#line 245 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_1,
#line 247 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2);

#line 250 "parse_tree.module_imports.c"
static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamps_0_0_10001(
#line 253 "parse_tree.module_imports.c"
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
#line 255 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2,
#line 257 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_3);

#line 498 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__add_implicit_imports__498__1_2_p_0(
#line 498 "module_imports.m"
  MR_Word parse_tree__module_imports__ItemsNeedTablingStatistics_12,
#line 498 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_38);

#line 362 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_dependencies__362__1_1_p_0(
#line 362 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_68);

#line 351 "module_imports.m"
static MR_Word MR_CALL 
parse_tree__module_imports__IntroducedFrom__func__init_dependencies__351__1_2_f_0(
#line 351 "module_imports.m"
  MR_Word parse_tree__module_imports__ModuleName_15,
#line 351 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_65);

#line 784 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__get_fact_table_dependencies_2_3_p_0(
#line 784 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 784 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Deps_0_2,
#line 784 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Deps_3);

#line 770 "module_imports.m"
static MR_Word MR_CALL 
parse_tree__module_imports__yes_catch_expr_goal_1_f_0(
#line 770 "module_imports.m"
  MR_Word parse_tree__module_imports__Catch_3);

#line 757 "module_imports.m"
static MR_Word MR_CALL 
parse_tree__module_imports__maybe_goals_contain_stm_atomic_1_f_0(
#line 757 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1);

#line 738 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__three_goals_contain_stm_atomic_or_try_5_p_0(
#line 738 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalA_6,
#line 738 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalB_7,
#line 738 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalC_8,
#line 738 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsAtomic_9,
#line 738 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsTry_10);

#line 720 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(
#line 720 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalA_5,
#line 720 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalB_6,
#line 720 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsAtomic_7,
#line 720 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsTry_8);

#line 691 "module_imports.m"
static MR_Box MR_CALL 
parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0_1(
#line 691 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg,
#line 691 "module_imports.m"
  MR_Box parse_tree__module_imports__wrapper_arg_1);

#line 654 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(
#line 654 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 654 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsAtomic_6,
#line 654 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsTry_7);

#line 635 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__maybe_items_need_imports_9_p_0(
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_10,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_15,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_16,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_17,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_18,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_19,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_20,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_21,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_22);

#line 582 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__items_need_imports_9_p_0(
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_2,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_4,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9);

#line 441 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__get_dependencies_interface_9_p_0(
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9);

#line 410 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__get_dependencies_implementation_9_p_0(
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9);

#line 498 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__add_implicit_imports_6_p_0_1(
#line 498 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg);

#line 362 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__init_dependencies_8_p_0_2(
#line 362 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg,
#line 362 "module_imports.m"
  MR_Box parse_tree__module_imports__wrapper_arg_1);

#line 351 "module_imports.m"
static MR_Box MR_CALL 
parse_tree__module_imports__init_dependencies_8_p_0_1(
#line 351 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg,
#line 351 "module_imports.m"
  MR_Box parse_tree__module_imports__wrapper_arg_1);


static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[4][3];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[7][2];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[2][5];




static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_imports__init_dependencies_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__module_imports__maybe__pti_maybe_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0))
  },
};



#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 597 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 606 "parse_tree.module_imports.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__maybe__pti_maybe_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
  }
};

#line 614 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 622 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 630 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 638 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 646 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 654 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0
  }
};

#line 663 "parse_tree.module_imports.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0
  }
};

#line 671 "parse_tree.module_imports.c"
static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[20] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_code_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_error_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 695 "parse_tree.module_imports.c"
static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[20] = {
  (MR_String) "mai_source_file_name",
  (MR_String) "mai_source_file_module_name",
  (MR_String) "mai_module_name",
  (MR_String) "mai_parent_deps",
  (MR_String) "mai_int_deps",
  (MR_String) "mai_impl_deps",
  (MR_String) "mai_indirect_deps",
  (MR_String) "mai_children",
  (MR_String) "mai_public_children",
  (MR_String) "mai_nested_children",
  (MR_String) "mai_fact_table_deps",
  (MR_String) "mai_has_foreign_code",
  (MR_String) "mai_foreign_import_modules",
  (MR_String) "mai_contains_foreign_export",
  (MR_String) "mai_items_cord",
  (MR_String) "mai_specs",
  (MR_String) "mai_error",
  (MR_String) "mai_maybe_timestamps",
  (MR_String) "mai_has_main",
  (MR_String) "mai_module_dir"
};

#line 719 "parse_tree.module_imports.c"
static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0 = {
  (MR_String) "module_and_imports",
  (MR_Integer) 20,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0,
  NULL,
  NULL
};

#line 734 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

#line 739 "parse_tree.module_imports.c"
static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0
  }
};

#line 748 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

#line 753 "parse_tree.module_imports.c"
static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1] = {
  (MR_Integer) 0
};

#line 758 "parse_tree.module_imports.c"
const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_and_imports",
  {
    parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0
  },
  {
    parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0
};

#line 779 "parse_tree.module_imports.c"
static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

#line 786 "parse_tree.module_imports.c"
static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3] = {
  (MR_String) "suffix",
  (MR_String) "timestamp",
  (MR_String) "need_qualifier"
};

#line 793 "parse_tree.module_imports.c"
static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0 = {
  (MR_String) "module_timestamp",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0,
  NULL,
  NULL
};

#line 808 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

#line 813 "parse_tree.module_imports.c"
static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0
  }
};

#line 822 "parse_tree.module_imports.c"
static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

#line 827 "parse_tree.module_imports.c"
static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1] = {
  (MR_Integer) 0
};

#line 832 "parse_tree.module_imports.c"
const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp",
  {
    parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0
  },
  {
    parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0
};

#line 853 "parse_tree.module_imports.c"
const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamps_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamps_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamps",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 874 "parse_tree.module_imports.c"
static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
#line 877 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_1,
#line 879 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2)
#line 881 "parse_tree.module_imports.c"
{
#line 883 "parse_tree.module_imports.c"
  {
#line 885 "parse_tree.module_imports.c"
    MR_bool parse_tree__module_imports__succeeded;

#line 888 "parse_tree.module_imports.c"
    {
#line 890 "parse_tree.module_imports.c"
      parse_tree__module_imports__succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2));
    }
#line 893 "parse_tree.module_imports.c"
    return parse_tree__module_imports__succeeded;
#line 895 "parse_tree.module_imports.c"
  }
#line 897 "parse_tree.module_imports.c"
}

#line 900 "parse_tree.module_imports.c"
static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
#line 903 "parse_tree.module_imports.c"
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
#line 905 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2,
#line 907 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_3)
#line 909 "parse_tree.module_imports.c"
{
#line 911 "parse_tree.module_imports.c"
  {
#line 913 "parse_tree.module_imports.c"
    MR_Word parse_tree__module_imports__conv0_HeadVar__1_1;

#line 916 "parse_tree.module_imports.c"
    {
#line 918 "parse_tree.module_imports.c"
      parse_tree__module_imports____Compare____module_and_imports_0_0(&parse_tree__module_imports__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_imports__wrapper_arg_2), ((MR_Word) parse_tree__module_imports__wrapper_arg_3));
    }
#line 921 "parse_tree.module_imports.c"
    *parse_tree__module_imports__wrapper_arg_1 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__1_1));
#line 923 "parse_tree.module_imports.c"
  }
#line 925 "parse_tree.module_imports.c"
}

#line 928 "parse_tree.module_imports.c"
static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
#line 931 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_1,
#line 933 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2)
#line 935 "parse_tree.module_imports.c"
{
#line 937 "parse_tree.module_imports.c"
  {
#line 939 "parse_tree.module_imports.c"
    MR_bool parse_tree__module_imports__succeeded;

#line 942 "parse_tree.module_imports.c"
    {
#line 944 "parse_tree.module_imports.c"
      parse_tree__module_imports__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2));
    }
#line 947 "parse_tree.module_imports.c"
    return parse_tree__module_imports__succeeded;
#line 949 "parse_tree.module_imports.c"
  }
#line 951 "parse_tree.module_imports.c"
}

#line 954 "parse_tree.module_imports.c"
static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
#line 957 "parse_tree.module_imports.c"
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
#line 959 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2,
#line 961 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_3)
#line 963 "parse_tree.module_imports.c"
{
#line 965 "parse_tree.module_imports.c"
  {
#line 967 "parse_tree.module_imports.c"
    MR_Word parse_tree__module_imports__conv0_HeadVar__1_1;

#line 970 "parse_tree.module_imports.c"
    {
#line 972 "parse_tree.module_imports.c"
      parse_tree__module_imports____Compare____module_timestamp_0_0(&parse_tree__module_imports__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_imports__wrapper_arg_2), ((MR_Word) parse_tree__module_imports__wrapper_arg_3));
    }
#line 975 "parse_tree.module_imports.c"
    *parse_tree__module_imports__wrapper_arg_1 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__1_1));
#line 977 "parse_tree.module_imports.c"
  }
#line 979 "parse_tree.module_imports.c"
}

#line 982 "parse_tree.module_imports.c"
static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamps_0_0_10001(
#line 985 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_1,
#line 987 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2)
#line 989 "parse_tree.module_imports.c"
{
#line 991 "parse_tree.module_imports.c"
  {
#line 993 "parse_tree.module_imports.c"
    MR_bool parse_tree__module_imports__succeeded;

#line 996 "parse_tree.module_imports.c"
    {
#line 998 "parse_tree.module_imports.c"
      parse_tree__module_imports__succeeded = parse_tree__module_imports____Unify____module_timestamps_0_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1), ((MR_Word) parse_tree__module_imports__wrapper_arg_2));
    }
#line 1001 "parse_tree.module_imports.c"
    return parse_tree__module_imports__succeeded;
#line 1003 "parse_tree.module_imports.c"
  }
#line 1005 "parse_tree.module_imports.c"
}

#line 1008 "parse_tree.module_imports.c"
static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamps_0_0_10001(
#line 1011 "parse_tree.module_imports.c"
  MR_Box * parse_tree__module_imports__wrapper_arg_1,
#line 1013 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_2,
#line 1015 "parse_tree.module_imports.c"
  MR_Box parse_tree__module_imports__wrapper_arg_3)
#line 1017 "parse_tree.module_imports.c"
{
#line 1019 "parse_tree.module_imports.c"
  {
#line 1021 "parse_tree.module_imports.c"
    MR_Word parse_tree__module_imports__conv0_HeadVar__1_1;

#line 1024 "parse_tree.module_imports.c"
    {
#line 1026 "parse_tree.module_imports.c"
      parse_tree__module_imports____Compare____module_timestamps_0_0(&parse_tree__module_imports__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_imports__wrapper_arg_2), ((MR_Word) parse_tree__module_imports__wrapper_arg_3));
    }
#line 1029 "parse_tree.module_imports.c"
    *parse_tree__module_imports__wrapper_arg_1 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__1_1));
#line 1031 "parse_tree.module_imports.c"
  }
#line 1033 "parse_tree.module_imports.c"
}

#line 498 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__add_implicit_imports__498__1_2_p_0(
#line 498 "module_imports.m"
  MR_Word parse_tree__module_imports__ItemsNeedTablingStatistics_12,
#line 498 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_38)
#line 498 "module_imports.m"
{
#line 498 "module_imports.m"
  {
#line 498 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded = (parse_tree__module_imports__ItemsNeedTablingStatistics_12 == parse_tree__module_imports__HeadVar__2_38);

#line 498 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 498 "module_imports.m"
  }
#line 498 "module_imports.m"
}

#line 362 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_dependencies__362__1_1_p_0(
#line 362 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_68)
#line 362 "module_imports.m"
{
#line 362 "module_imports.m"
  {
#line 362 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__HeadVar__1_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__HeadVar__1_68, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__ItemPredDecl_45;
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__Name_50;
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__WithType_53;
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__V_69_69;
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__V_70_70;
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__V_71_71;
#line 362 "module_imports.m"
    MR_Word parse_tree__module_imports__V_72_72;
#line 362 "module_imports.m"
    MR_String parse_tree__module_imports__V_73_73;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_46_46;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_47_47;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_48_48;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_49_49;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_54_54;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_55_55;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_56_56;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_57_57;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_58_58;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_59_59;
#line 364 "module_imports.m"
    MR_Integer parse_tree__module_imports__V_60_60;
#line 364 "module_imports.m"
    MR_Word parse_tree__module_imports__V_51_51;
#line 365 "module_imports.m"
    MR_Word parse_tree__module_imports__V_52_52;

#line 363 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 363 "module_imports.m"
      {
#line 363 "module_imports.m"
        parse_tree__module_imports__ItemPredDecl_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__HeadVar__1_68, (MR_Integer) 1)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 0)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 1)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 2)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 3)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 4)));
#line 364 "module_imports.m"
        parse_tree__module_imports__Name_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 5)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 6)));
#line 364 "module_imports.m"
        parse_tree__module_imports__WithType_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 7)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 8)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 9)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 10)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 11)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 12)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 13)));
#line 364 "module_imports.m"
        parse_tree__module_imports__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPredDecl_45, (MR_Integer) 14)));
#line 364 "module_imports.m"
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_69_69 == (MR_Integer) 0);
#line 362 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 362 "module_imports.m"
          {
#line 364 "module_imports.m"
            parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 364 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 364 "module_imports.m"
              {
#line 364 "module_imports.m"
                parse_tree__module_imports__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_70_70, (MR_Integer) 0)));
#line 364 "module_imports.m"
                parse_tree__module_imports__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_70_70, (MR_Integer) 1)));
#line 365 "module_imports.m"
                parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 365 "module_imports.m"
                if (parse_tree__module_imports__succeeded)
#line 365 "module_imports.m"
                  {
#line 365 "module_imports.m"
                    parse_tree__module_imports__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_71_71, (MR_Integer) 0)));
#line 365 "module_imports.m"
                    parse_tree__module_imports__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_71_71, (MR_Integer) 1)));
#line 365 "module_imports.m"
                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "module_imports.m"
                    if (parse_tree__module_imports__succeeded)
#line 362 "module_imports.m"
                      {
#line 366 "module_imports.m"
                        {
#line 366 "module_imports.m"
                          parse_tree__module_imports__V_73_73 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__module_imports__Name_50);
                        }
#line 366 "module_imports.m"
                        parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_73_73, (MR_String) "main") == 0);
#line 362 "module_imports.m"
                        if (parse_tree__module_imports__succeeded)
#line 376 "module_imports.m"
                          parse_tree__module_imports__succeeded = (parse_tree__module_imports__WithType_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "module_imports.m"
                      }
#line 365 "module_imports.m"
                  }
#line 364 "module_imports.m"
              }
#line 362 "module_imports.m"
          }
#line 363 "module_imports.m"
      }
#line 362 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 362 "module_imports.m"
  }
#line 362 "module_imports.m"
}

#line 351 "module_imports.m"
static MR_Word MR_CALL 
parse_tree__module_imports__IntroducedFrom__func__init_dependencies__351__1_2_f_0(
#line 351 "module_imports.m"
  MR_Word parse_tree__module_imports__ModuleName_15,
#line 351 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_65)
#line 351 "module_imports.m"
{
#line 351 "module_imports.m"
  {
#line 351 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 351 "module_imports.m"
    MR_Word parse_tree__module_imports__HeadVar__3_66;
#line 351 "module_imports.m"
    MR_Word parse_tree__module_imports__V_67_67;

#line 352 "module_imports.m"
    {
#line 352 "module_imports.m"
      parse_tree__module_imports__V_67_67 = mercury__term__context_init_0_f_0();
    }
#line 351 "module_imports.m"
    {
#line 351 "module_imports.m"
      parse_tree__module_imports__HeadVar__3_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_66, 0) = ((MR_Box) (parse_tree__module_imports__HeadVar__2_65));
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_66, 1) = ((MR_Box) (parse_tree__module_imports__ModuleName_15));
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_66, 2) = ((MR_Box) (parse_tree__module_imports__V_67_67));
#line 351 "module_imports.m"
    }
#line 351 "module_imports.m"
    return parse_tree__module_imports__HeadVar__3_66;
#line 351 "module_imports.m"
  }
#line 351 "module_imports.m"
}

#line 40 "module_imports.m"
void MR_CALL 
parse_tree__module_imports____Compare____module_timestamps_0_0(
#line 40 "module_imports.m"
  MR_Word * parse_tree__module_imports__HeadVar__1_1,
#line 40 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_2,
#line 40 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__3_3)
#line 40 "module_imports.m"
{
#line 40 "module_imports.m"
  {
#line 40 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 40 "module_imports.m"
    MR_Word parse_tree__module_imports__Cast_HeadVar1_4 = parse_tree__module_imports__HeadVar__2_2;
#line 40 "module_imports.m"
    MR_Word parse_tree__module_imports__Cast_HeadVar2_5 = parse_tree__module_imports__HeadVar__3_3;

#line 40 "module_imports.m"
    {
#line 40 "module_imports.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[1], parse_tree__module_imports__HeadVar__1_1, ((MR_Box) (parse_tree__module_imports__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_imports__Cast_HeadVar2_5)));
#line 40 "module_imports.m"
      return;
    }
#line 40 "module_imports.m"
  }
#line 40 "module_imports.m"
}

#line 40 "module_imports.m"
MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamps_0_0(
#line 40 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 40 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_2)
#line 40 "module_imports.m"
{
#line 40 "module_imports.m"
  {
#line 40 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 40 "module_imports.m"
    MR_Word parse_tree__module_imports__Cast_HeadVar1_3 = parse_tree__module_imports__HeadVar__1_1;
#line 40 "module_imports.m"
    MR_Word parse_tree__module_imports__Cast_HeadVar2_4 = parse_tree__module_imports__HeadVar__2_2;

#line 40 "module_imports.m"
    {
#line 40 "module_imports.m"
      return parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_imports_scalar_common_1[1], ((MR_Box) (parse_tree__module_imports__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_imports__Cast_HeadVar2_4)));
    }
#line 40 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 40 "module_imports.m"
  }
#line 40 "module_imports.m"
}

#line 41 "module_imports.m"
void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0(
#line 41 "module_imports.m"
  MR_Word * parse_tree__module_imports__HeadVar__1_1,
#line 41 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_2,
#line 41 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__3_3)
#line 41 "module_imports.m"
{
#line 41 "module_imports.m"
  {
#line 41 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 41 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastX_12 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;
#line 41 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastY_13 = (MR_Integer) parse_tree__module_imports__HeadVar__3_3;

#line 41 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_12 == parse_tree__module_imports__CastY_13);
#line 41 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 1335 "parse_tree.module_imports.c"
      *parse_tree__module_imports__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "module_imports.m"
    else
#line 41 "module_imports.m"
      {
#line 41 "module_imports.m"
        MR_String parse_tree__module_imports__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));
#line 41 "module_imports.m"
        MR_String parse_tree__module_imports__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 2)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_10_10;

#line 41 "module_imports.m"
        {
#line 41 "module_imports.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_imports__V_10_10, parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_7_7);
        }
#line 1361 "parse_tree.module_imports.c"
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_10_10 == (MR_Integer) 0);
#line 41 "module_imports.m"
        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 41 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 41 "module_imports.m"
          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_10_10;
#line 41 "module_imports.m"
        else
#line 41 "module_imports.m"
          {
#line 41 "module_imports.m"
            MR_Word parse_tree__module_imports__V_11_11;

#line 41 "module_imports.m"
            {
#line 41 "module_imports.m"
              libs__timestamp____Compare____timestamp_0_0(&parse_tree__module_imports__V_11_11, parse_tree__module_imports__V_5_5, parse_tree__module_imports__V_8_8);
            }
#line 1381 "parse_tree.module_imports.c"
            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_11_11 == (MR_Integer) 0);
#line 41 "module_imports.m"
            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 41 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 41 "module_imports.m"
              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_11_11;
#line 41 "module_imports.m"
            else
#line 41 "module_imports.m"
              {
#line 41 "module_imports.m"
                MR_Integer parse_tree__module_imports__V_17_17 = (MR_Integer) parse_tree__module_imports__V_6_6;
#line 41 "module_imports.m"
                MR_Integer parse_tree__module_imports__V_18_18 = (MR_Integer) parse_tree__module_imports__V_9_9;

#line 41 "module_imports.m"
                {
#line 41 "module_imports.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_imports__HeadVar__1_1, parse_tree__module_imports__V_17_17, parse_tree__module_imports__V_18_18);
#line 41 "module_imports.m"
                  return;
                }
#line 41 "module_imports.m"
              }
#line 41 "module_imports.m"
          }
#line 41 "module_imports.m"
      }
#line 41 "module_imports.m"
  }
#line 41 "module_imports.m"
}

#line 41 "module_imports.m"
MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0(
#line 41 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 41 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_2)
#line 41 "module_imports.m"
{
#line 41 "module_imports.m"
  {
#line 41 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 41 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastX_9 = (MR_Integer) parse_tree__module_imports__HeadVar__1_1;
#line 41 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastY_10 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;

#line 41 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_9 == parse_tree__module_imports__CastY_10);
#line 41 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 41 "module_imports.m"
      parse_tree__module_imports__succeeded = MR_TRUE;
#line 41 "module_imports.m"
    else
#line 41 "module_imports.m"
      {
#line 41 "module_imports.m"
        MR_String parse_tree__module_imports__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 2)));
#line 41 "module_imports.m"
        MR_String parse_tree__module_imports__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "module_imports.m"
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));

#line 1457 "parse_tree.module_imports.c"
        parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_3_3, parse_tree__module_imports__V_6_6) == 0);
#line 41 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 41 "module_imports.m"
          {
#line 1463 "parse_tree.module_imports.c"
            {
#line 1465 "parse_tree.module_imports.c"
              parse_tree__module_imports__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_7_7);
            }
#line 41 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 1470 "parse_tree.module_imports.c"
              parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_5_5 == parse_tree__module_imports__V_8_8);
#line 41 "module_imports.m"
          }
#line 41 "module_imports.m"
      }
#line 41 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 41 "module_imports.m"
  }
#line 41 "module_imports.m"
}

#line 65 "module_imports.m"
void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0(
#line 65 "module_imports.m"
  MR_Word * parse_tree__module_imports__HeadVar__1_1,
#line 65 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_2,
#line 65 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__3_3)
#line 65 "module_imports.m"
{
#line 65 "module_imports.m"
  {
#line 65 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 65 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastX_63 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;
#line 65 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastY_64 = (MR_Integer) parse_tree__module_imports__HeadVar__3_3;

#line 65 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_63 == parse_tree__module_imports__CastY_64);
#line 65 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 1507 "parse_tree.module_imports.c"
      *parse_tree__module_imports__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "module_imports.m"
    else
#line 65 "module_imports.m"
      {
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 3)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 4)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 5)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 6)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 7)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 8)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 9)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 10)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 11)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 12)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 13)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 14)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 15)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 16)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 17)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 18)));
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 19)));
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 0)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 1)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 2)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 3)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 4)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 5)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 6)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 7)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 8)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 9)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 10)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 11)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 12)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 13)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 14)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 15)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 16)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 17)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 18)));
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__3_3, (MR_Integer) 19)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_44_44;

#line 65 "module_imports.m"
        {
#line 65 "module_imports.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_imports__V_44_44, parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_24_24);
        }
#line 1601 "parse_tree.module_imports.c"
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_44_44 == (MR_Integer) 0);
#line 65 "module_imports.m"
        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_44_44;
#line 65 "module_imports.m"
        else
#line 65 "module_imports.m"
          {
#line 65 "module_imports.m"
            MR_Word parse_tree__module_imports__V_45_45;

#line 65 "module_imports.m"
            {
#line 65 "module_imports.m"
              mdbcomp__prim_data____Compare____sym_name_0_0(&parse_tree__module_imports__V_45_45, parse_tree__module_imports__V_5_5, parse_tree__module_imports__V_25_25);
            }
#line 1621 "parse_tree.module_imports.c"
            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_45_45 == (MR_Integer) 0);
#line 65 "module_imports.m"
            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_45_45;
#line 65 "module_imports.m"
            else
#line 65 "module_imports.m"
              {
#line 65 "module_imports.m"
                MR_Word parse_tree__module_imports__V_46_46;

#line 65 "module_imports.m"
                {
#line 65 "module_imports.m"
                  mdbcomp__prim_data____Compare____sym_name_0_0(&parse_tree__module_imports__V_46_46, parse_tree__module_imports__V_6_6, parse_tree__module_imports__V_26_26);
                }
#line 1641 "parse_tree.module_imports.c"
                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_46_46 == (MR_Integer) 0);
#line 65 "module_imports.m"
                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_46_46;
#line 65 "module_imports.m"
                else
#line 65 "module_imports.m"
                  {
#line 65 "module_imports.m"
                    MR_Word parse_tree__module_imports__V_47_47;

#line 65 "module_imports.m"
                    {
#line 65 "module_imports.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_47_47, ((MR_Box) (parse_tree__module_imports__V_7_7)), ((MR_Box) (parse_tree__module_imports__V_27_27)));
                    }
#line 1661 "parse_tree.module_imports.c"
                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_47_47 == (MR_Integer) 0);
#line 65 "module_imports.m"
                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_47_47;
#line 65 "module_imports.m"
                    else
#line 65 "module_imports.m"
                      {
#line 65 "module_imports.m"
                        MR_Word parse_tree__module_imports__V_48_48;

#line 65 "module_imports.m"
                        {
#line 65 "module_imports.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_48_48, ((MR_Box) (parse_tree__module_imports__V_8_8)), ((MR_Box) (parse_tree__module_imports__V_28_28)));
                        }
#line 1681 "parse_tree.module_imports.c"
                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_48_48 == (MR_Integer) 0);
#line 65 "module_imports.m"
                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_48_48;
#line 65 "module_imports.m"
                        else
#line 65 "module_imports.m"
                          {
#line 65 "module_imports.m"
                            MR_Word parse_tree__module_imports__V_49_49;

#line 65 "module_imports.m"
                            {
#line 65 "module_imports.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_49_49, ((MR_Box) (parse_tree__module_imports__V_9_9)), ((MR_Box) (parse_tree__module_imports__V_29_29)));
                            }
#line 1701 "parse_tree.module_imports.c"
                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_49_49 == (MR_Integer) 0);
#line 65 "module_imports.m"
                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_49_49;
#line 65 "module_imports.m"
                            else
#line 65 "module_imports.m"
                              {
#line 65 "module_imports.m"
                                MR_Word parse_tree__module_imports__V_50_50;

#line 65 "module_imports.m"
                                {
#line 65 "module_imports.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_50_50, ((MR_Box) (parse_tree__module_imports__V_10_10)), ((MR_Box) (parse_tree__module_imports__V_30_30)));
                                }
#line 1721 "parse_tree.module_imports.c"
                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_50_50 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_50_50;
#line 65 "module_imports.m"
                                else
#line 65 "module_imports.m"
                                  {
#line 65 "module_imports.m"
                                    MR_Word parse_tree__module_imports__V_51_51;

#line 65 "module_imports.m"
                                    {
#line 65 "module_imports.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_51_51, ((MR_Box) (parse_tree__module_imports__V_11_11)), ((MR_Box) (parse_tree__module_imports__V_31_31)));
                                    }
#line 1741 "parse_tree.module_imports.c"
                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_51_51 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_51_51;
#line 65 "module_imports.m"
                                    else
#line 65 "module_imports.m"
                                      {
#line 65 "module_imports.m"
                                        MR_Word parse_tree__module_imports__V_52_52;

#line 65 "module_imports.m"
                                        {
#line 65 "module_imports.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_52_52, ((MR_Box) (parse_tree__module_imports__V_12_12)), ((MR_Box) (parse_tree__module_imports__V_32_32)));
                                        }
#line 1761 "parse_tree.module_imports.c"
                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_52_52 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_52_52;
#line 65 "module_imports.m"
                                        else
#line 65 "module_imports.m"
                                          {
#line 65 "module_imports.m"
                                            MR_Word parse_tree__module_imports__V_53_53;

#line 65 "module_imports.m"
                                            {
#line 65 "module_imports.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[1], &parse_tree__module_imports__V_53_53, ((MR_Box) (parse_tree__module_imports__V_13_13)), ((MR_Box) (parse_tree__module_imports__V_33_33)));
                                            }
#line 1781 "parse_tree.module_imports.c"
                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_53_53 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_53_53;
#line 65 "module_imports.m"
                                            else
#line 65 "module_imports.m"
                                              {
#line 65 "module_imports.m"
                                                MR_Word parse_tree__module_imports__V_54_54;

#line 65 "module_imports.m"
                                                {
#line 65 "module_imports.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[2], &parse_tree__module_imports__V_54_54, ((MR_Box) (parse_tree__module_imports__V_14_14)), ((MR_Box) (parse_tree__module_imports__V_34_34)));
                                                }
#line 1801 "parse_tree.module_imports.c"
                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_54_54 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_54_54;
#line 65 "module_imports.m"
                                                else
#line 65 "module_imports.m"
                                                  {
#line 65 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_55_55;

#line 65 "module_imports.m"
                                                    {
#line 65 "module_imports.m"
                                                      parse_tree__prog_item____Compare____contains_foreign_code_0_0(&parse_tree__module_imports__V_55_55, parse_tree__module_imports__V_15_15, parse_tree__module_imports__V_35_35);
                                                    }
#line 1821 "parse_tree.module_imports.c"
                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_55_55 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_55_55;
#line 65 "module_imports.m"
                                                    else
#line 65 "module_imports.m"
                                                      {
#line 65 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__V_56_56;

#line 65 "module_imports.m"
                                                        {
#line 65 "module_imports.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[3], &parse_tree__module_imports__V_56_56, ((MR_Box) (parse_tree__module_imports__V_16_16)), ((MR_Box) (parse_tree__module_imports__V_36_36)));
                                                        }
#line 1841 "parse_tree.module_imports.c"
                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_56_56 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_56_56;
#line 65 "module_imports.m"
                                                        else
#line 65 "module_imports.m"
                                                          {
#line 65 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__V_57_57;
#line 65 "module_imports.m"
                                                            MR_Integer parse_tree__module_imports__V_85_85 = (MR_Integer) parse_tree__module_imports__V_17_17;
#line 65 "module_imports.m"
                                                            MR_Integer parse_tree__module_imports__V_86_86 = (MR_Integer) parse_tree__module_imports__V_37_37;

#line 65 "module_imports.m"
                                                            {
#line 65 "module_imports.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_imports__V_57_57, parse_tree__module_imports__V_85_85, parse_tree__module_imports__V_86_86);
                                                            }
#line 1865 "parse_tree.module_imports.c"
                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_57_57 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_57_57;
#line 65 "module_imports.m"
                                                            else
#line 65 "module_imports.m"
                                                              {
#line 65 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__V_58_58;

#line 65 "module_imports.m"
                                                                {
#line 65 "module_imports.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[4], &parse_tree__module_imports__V_58_58, ((MR_Box) (parse_tree__module_imports__V_18_18)), ((MR_Box) (parse_tree__module_imports__V_38_38)));
                                                                }
#line 1885 "parse_tree.module_imports.c"
                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_58_58 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_58_58;
#line 65 "module_imports.m"
                                                                else
#line 65 "module_imports.m"
                                                                  {
#line 65 "module_imports.m"
                                                                    MR_Word parse_tree__module_imports__V_59_59;

#line 65 "module_imports.m"
                                                                    {
#line 65 "module_imports.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[5], &parse_tree__module_imports__V_59_59, ((MR_Box) (parse_tree__module_imports__V_19_19)), ((MR_Box) (parse_tree__module_imports__V_39_39)));
                                                                    }
#line 1905 "parse_tree.module_imports.c"
                                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_59_59 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                                    parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                      *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_59_59;
#line 65 "module_imports.m"
                                                                    else
#line 65 "module_imports.m"
                                                                      {
#line 65 "module_imports.m"
                                                                        MR_Word parse_tree__module_imports__V_60_60;
#line 65 "module_imports.m"
                                                                        MR_Integer parse_tree__module_imports__V_87_87 = (MR_Integer) parse_tree__module_imports__V_20_20;
#line 65 "module_imports.m"
                                                                        MR_Integer parse_tree__module_imports__V_88_88 = (MR_Integer) parse_tree__module_imports__V_40_40;

#line 65 "module_imports.m"
                                                                        {
#line 65 "module_imports.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_imports__V_60_60, parse_tree__module_imports__V_87_87, parse_tree__module_imports__V_88_88);
                                                                        }
#line 1929 "parse_tree.module_imports.c"
                                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_60_60 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                                        parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                          *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_60_60;
#line 65 "module_imports.m"
                                                                        else
#line 65 "module_imports.m"
                                                                          {
#line 65 "module_imports.m"
                                                                            MR_Word parse_tree__module_imports__V_61_61;

#line 65 "module_imports.m"
                                                                            {
#line 65 "module_imports.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_imports_scalar_common_2[6], &parse_tree__module_imports__V_61_61, ((MR_Box) (parse_tree__module_imports__V_21_21)), ((MR_Box) (parse_tree__module_imports__V_41_41)));
                                                                            }
#line 1949 "parse_tree.module_imports.c"
                                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_61_61 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                                            parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                              *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_61_61;
#line 65 "module_imports.m"
                                                                            else
#line 65 "module_imports.m"
                                                                              {
#line 65 "module_imports.m"
                                                                                MR_Word parse_tree__module_imports__V_62_62;
#line 65 "module_imports.m"
                                                                                MR_Integer parse_tree__module_imports__V_89_89 = (MR_Integer) parse_tree__module_imports__V_22_22;
#line 65 "module_imports.m"
                                                                                MR_Integer parse_tree__module_imports__V_90_90 = (MR_Integer) parse_tree__module_imports__V_42_42;

#line 65 "module_imports.m"
                                                                                {
#line 65 "module_imports.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_imports__V_62_62, parse_tree__module_imports__V_89_89, parse_tree__module_imports__V_90_90);
                                                                                }
#line 1973 "parse_tree.module_imports.c"
                                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_62_62 == (MR_Integer) 0);
#line 65 "module_imports.m"
                                                                                parse_tree__module_imports__succeeded = !(parse_tree__module_imports__succeeded);
#line 65 "module_imports.m"
                                                                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                                  *parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__V_62_62;
#line 65 "module_imports.m"
                                                                                else
#line 65 "module_imports.m"
                                                                                  {
#line 65 "module_imports.m"
                                                                                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__module_imports__HeadVar__1_1, parse_tree__module_imports__V_23_23, parse_tree__module_imports__V_43_43);
#line 65 "module_imports.m"
                                                                                    return;
                                                                                  }
#line 65 "module_imports.m"
                                                                              }
#line 65 "module_imports.m"
                                                                          }
#line 65 "module_imports.m"
                                                                      }
#line 65 "module_imports.m"
                                                                  }
#line 65 "module_imports.m"
                                                              }
#line 65 "module_imports.m"
                                                          }
#line 65 "module_imports.m"
                                                      }
#line 65 "module_imports.m"
                                                  }
#line 65 "module_imports.m"
                                              }
#line 65 "module_imports.m"
                                          }
#line 65 "module_imports.m"
                                      }
#line 65 "module_imports.m"
                                  }
#line 65 "module_imports.m"
                              }
#line 65 "module_imports.m"
                          }
#line 65 "module_imports.m"
                      }
#line 65 "module_imports.m"
                  }
#line 65 "module_imports.m"
              }
#line 65 "module_imports.m"
          }
#line 65 "module_imports.m"
      }
#line 65 "module_imports.m"
  }
#line 65 "module_imports.m"
}

#line 65 "module_imports.m"
MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0(
#line 65 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 65 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__2_2)
#line 65 "module_imports.m"
{
#line 65 "module_imports.m"
  {
#line 65 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 65 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastX_43 = (MR_Integer) parse_tree__module_imports__HeadVar__1_1;
#line 65 "module_imports.m"
    MR_Integer parse_tree__module_imports__CastY_44 = (MR_Integer) parse_tree__module_imports__HeadVar__2_2;

#line 65 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__CastX_43 == parse_tree__module_imports__CastY_44);
#line 65 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
      parse_tree__module_imports__succeeded = MR_TRUE;
#line 65 "module_imports.m"
    else
#line 65 "module_imports.m"
      {
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_47_47;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_48_48;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_49_49;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_50_50;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_51_51;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_52_52;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_53_53;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_54_54;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_56_56;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_57_57;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_58_58;
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__TypeInfo_59_59;
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 2)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 3)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 4)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 5)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 6)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 7)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 8)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 9)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 10)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 11)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 12)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 13)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 14)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 15)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 16)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 17)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 18)));
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 19)));
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 3)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 4)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 5)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 6)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 7)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 8)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 9)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 10)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 11)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 12)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 13)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 14)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 15)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 16)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 17)));
#line 65 "module_imports.m"
        MR_Word parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 18)));
#line 65 "module_imports.m"
        MR_String parse_tree__module_imports__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__2_2, (MR_Integer) 19)));

#line 2166 "parse_tree.module_imports.c"
        parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_3_3, parse_tree__module_imports__V_23_23) == 0);
#line 65 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
          {
#line 2172 "parse_tree.module_imports.c"
            {
#line 2174 "parse_tree.module_imports.c"
              parse_tree__module_imports__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__module_imports__V_4_4, parse_tree__module_imports__V_24_24);
            }
#line 65 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
              {
#line 2181 "parse_tree.module_imports.c"
                {
#line 2183 "parse_tree.module_imports.c"
                  parse_tree__module_imports__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__module_imports__V_5_5, parse_tree__module_imports__V_25_25);
                }
#line 65 "module_imports.m"
                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                  {
#line 2190 "parse_tree.module_imports.c"
                    parse_tree__module_imports__TypeInfo_47_47 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2192 "parse_tree.module_imports.c"
                    {
#line 2194 "parse_tree.module_imports.c"
                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_47_47, ((MR_Box) (parse_tree__module_imports__V_6_6)), ((MR_Box) (parse_tree__module_imports__V_26_26)));
                    }
#line 65 "module_imports.m"
                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                      {
#line 2201 "parse_tree.module_imports.c"
                        parse_tree__module_imports__TypeInfo_48_48 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2203 "parse_tree.module_imports.c"
                        {
#line 2205 "parse_tree.module_imports.c"
                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_48_48, ((MR_Box) (parse_tree__module_imports__V_7_7)), ((MR_Box) (parse_tree__module_imports__V_27_27)));
                        }
#line 65 "module_imports.m"
                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                          {
#line 2212 "parse_tree.module_imports.c"
                            parse_tree__module_imports__TypeInfo_49_49 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2214 "parse_tree.module_imports.c"
                            {
#line 2216 "parse_tree.module_imports.c"
                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_49_49, ((MR_Box) (parse_tree__module_imports__V_8_8)), ((MR_Box) (parse_tree__module_imports__V_28_28)));
                            }
#line 65 "module_imports.m"
                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                              {
#line 2223 "parse_tree.module_imports.c"
                                parse_tree__module_imports__TypeInfo_50_50 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2225 "parse_tree.module_imports.c"
                                {
#line 2227 "parse_tree.module_imports.c"
                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_50_50, ((MR_Box) (parse_tree__module_imports__V_9_9)), ((MR_Box) (parse_tree__module_imports__V_29_29)));
                                }
#line 65 "module_imports.m"
                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                  {
#line 2234 "parse_tree.module_imports.c"
                                    parse_tree__module_imports__TypeInfo_51_51 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2236 "parse_tree.module_imports.c"
                                    {
#line 2238 "parse_tree.module_imports.c"
                                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_51_51, ((MR_Box) (parse_tree__module_imports__V_10_10)), ((MR_Box) (parse_tree__module_imports__V_30_30)));
                                    }
#line 65 "module_imports.m"
                                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                      {
#line 2245 "parse_tree.module_imports.c"
                                        parse_tree__module_imports__TypeInfo_52_52 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2247 "parse_tree.module_imports.c"
                                        {
#line 2249 "parse_tree.module_imports.c"
                                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_52_52, ((MR_Box) (parse_tree__module_imports__V_11_11)), ((MR_Box) (parse_tree__module_imports__V_31_31)));
                                        }
#line 65 "module_imports.m"
                                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                          {
#line 2256 "parse_tree.module_imports.c"
                                            parse_tree__module_imports__TypeInfo_53_53 = (MR_Word) &parse_tree__module_imports_scalar_common_2[1];
#line 2258 "parse_tree.module_imports.c"
                                            {
#line 2260 "parse_tree.module_imports.c"
                                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_53_53, ((MR_Box) (parse_tree__module_imports__V_12_12)), ((MR_Box) (parse_tree__module_imports__V_32_32)));
                                            }
#line 65 "module_imports.m"
                                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                              {
#line 2267 "parse_tree.module_imports.c"
                                                parse_tree__module_imports__TypeInfo_54_54 = (MR_Word) &parse_tree__module_imports_scalar_common_2[2];
#line 2269 "parse_tree.module_imports.c"
                                                {
#line 2271 "parse_tree.module_imports.c"
                                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_54_54, ((MR_Box) (parse_tree__module_imports__V_13_13)), ((MR_Box) (parse_tree__module_imports__V_33_33)));
                                                }
#line 65 "module_imports.m"
                                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                  {
#line 2278 "parse_tree.module_imports.c"
                                                    {
#line 2280 "parse_tree.module_imports.c"
                                                      parse_tree__module_imports__succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(parse_tree__module_imports__V_14_14, parse_tree__module_imports__V_34_34);
                                                    }
#line 65 "module_imports.m"
                                                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                      {
#line 2287 "parse_tree.module_imports.c"
                                                        parse_tree__module_imports__TypeInfo_56_56 = (MR_Word) &parse_tree__module_imports_scalar_common_2[3];
#line 2289 "parse_tree.module_imports.c"
                                                        {
#line 2291 "parse_tree.module_imports.c"
                                                          parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_56_56, ((MR_Box) (parse_tree__module_imports__V_15_15)), ((MR_Box) (parse_tree__module_imports__V_35_35)));
                                                        }
#line 65 "module_imports.m"
                                                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                          {
#line 2298 "parse_tree.module_imports.c"
                                                            parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_16_16 == parse_tree__module_imports__V_36_36);
#line 65 "module_imports.m"
                                                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                              {
#line 2304 "parse_tree.module_imports.c"
                                                                parse_tree__module_imports__TypeInfo_57_57 = (MR_Word) &parse_tree__module_imports_scalar_common_2[4];
#line 2306 "parse_tree.module_imports.c"
                                                                {
#line 2308 "parse_tree.module_imports.c"
                                                                  parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_57_57, ((MR_Box) (parse_tree__module_imports__V_17_17)), ((MR_Box) (parse_tree__module_imports__V_37_37)));
                                                                }
#line 65 "module_imports.m"
                                                                if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                  {
#line 2315 "parse_tree.module_imports.c"
                                                                    parse_tree__module_imports__TypeInfo_58_58 = (MR_Word) &parse_tree__module_imports_scalar_common_2[5];
#line 2317 "parse_tree.module_imports.c"
                                                                    {
#line 2319 "parse_tree.module_imports.c"
                                                                      parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_58_58, ((MR_Box) (parse_tree__module_imports__V_18_18)), ((MR_Box) (parse_tree__module_imports__V_38_38)));
                                                                    }
#line 65 "module_imports.m"
                                                                    if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                      {
#line 2326 "parse_tree.module_imports.c"
                                                                        parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_19_19 == parse_tree__module_imports__V_39_39);
#line 65 "module_imports.m"
                                                                        if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                          {
#line 2332 "parse_tree.module_imports.c"
                                                                            parse_tree__module_imports__TypeInfo_59_59 = (MR_Word) &parse_tree__module_imports_scalar_common_2[6];
#line 2334 "parse_tree.module_imports.c"
                                                                            {
#line 2336 "parse_tree.module_imports.c"
                                                                              parse_tree__module_imports__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_imports__TypeInfo_59_59, ((MR_Box) (parse_tree__module_imports__V_20_20)), ((MR_Box) (parse_tree__module_imports__V_40_40)));
                                                                            }
#line 65 "module_imports.m"
                                                                            if (parse_tree__module_imports__succeeded)
#line 65 "module_imports.m"
                                                                              {
#line 2343 "parse_tree.module_imports.c"
                                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_21_21 == parse_tree__module_imports__V_41_41);
#line 65 "module_imports.m"
                                                                                if (parse_tree__module_imports__succeeded)
#line 2347 "parse_tree.module_imports.c"
                                                                                  parse_tree__module_imports__succeeded = (strcmp(parse_tree__module_imports__V_22_22, parse_tree__module_imports__V_42_42) == 0);
#line 65 "module_imports.m"
                                                                              }
#line 65 "module_imports.m"
                                                                          }
#line 65 "module_imports.m"
                                                                      }
#line 65 "module_imports.m"
                                                                  }
#line 65 "module_imports.m"
                                                              }
#line 65 "module_imports.m"
                                                          }
#line 65 "module_imports.m"
                                                      }
#line 65 "module_imports.m"
                                                  }
#line 65 "module_imports.m"
                                              }
#line 65 "module_imports.m"
                                          }
#line 65 "module_imports.m"
                                      }
#line 65 "module_imports.m"
                                  }
#line 65 "module_imports.m"
                              }
#line 65 "module_imports.m"
                          }
#line 65 "module_imports.m"
                      }
#line 65 "module_imports.m"
                  }
#line 65 "module_imports.m"
              }
#line 65 "module_imports.m"
          }
#line 65 "module_imports.m"
      }
#line 65 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 65 "module_imports.m"
  }
#line 65 "module_imports.m"
}

#line 784 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__get_fact_table_dependencies_2_3_p_0(
#line 784 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 784 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Deps_0_2,
#line 784 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Deps_3)
#line 784 "module_imports.m"
{
#line 787 "module_imports.m"
  while (MR_TRUE)
#line 787 "module_imports.m"
    {
#line 787 "module_imports.m"
      /* tailcall optimized into a loop */
#line 787 "module_imports.m"
      {
#line 787 "module_imports.m"
        MR_bool parse_tree__module_imports__succeeded;

#line 787 "module_imports.m"
        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "module_imports.m"
          *parse_tree__module_imports__STATE_VARIABLE_Deps_3 = parse_tree__module_imports__STATE_VARIABLE_Deps_0_2;
#line 787 "module_imports.m"
        else
#line 788 "module_imports.m"
          {
#line 788 "module_imports.m"
            MR_Word parse_tree__module_imports__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 788 "module_imports.m"
            MR_Word parse_tree__module_imports__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 788 "module_imports.m"
            MR_Word parse_tree__module_imports__STATE_VARIABLE_Deps_20_20;
#line 796 "module_imports.m"
            MR_String parse_tree__module_imports__FileName_17;
#line 790 "module_imports.m"
            MR_Word parse_tree__module_imports__ItemPragma_10;
#line 790 "module_imports.m"
            MR_Word parse_tree__module_imports__Pragma_12;
#line 790 "module_imports.m"
            MR_Word parse_tree__module_imports__FTInfo_15;
#line 791 "module_imports.m"
            MR_Word parse_tree__module_imports__V_11_11;
#line 791 "module_imports.m"
            MR_Word parse_tree__module_imports__V_13_13;
#line 791 "module_imports.m"
            MR_Integer parse_tree__module_imports__V_14_14;
#line 793 "module_imports.m"
            MR_Word parse_tree__module_imports___PredNameArity_16;

#line 790 "module_imports.m"
            parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 790 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 790 "module_imports.m"
              {
#line 790 "module_imports.m"
                parse_tree__module_imports__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_7, (MR_Integer) 1)));
#line 791 "module_imports.m"
                parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_10, (MR_Integer) 0)));
#line 791 "module_imports.m"
                parse_tree__module_imports__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_10, (MR_Integer) 1)));
#line 791 "module_imports.m"
                parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_10, (MR_Integer) 2)));
#line 791 "module_imports.m"
                parse_tree__module_imports__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_10, (MR_Integer) 3)));
#line 792 "module_imports.m"
                parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 792 "module_imports.m"
                if (parse_tree__module_imports__succeeded)
#line 792 "module_imports.m"
                  {
#line 792 "module_imports.m"
                    parse_tree__module_imports__FTInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Pragma_12, (MR_Integer) 1)));
#line 793 "module_imports.m"
                    parse_tree__module_imports___PredNameArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__FTInfo_15, (MR_Integer) 0)));
#line 793 "module_imports.m"
                    parse_tree__module_imports__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__FTInfo_15, (MR_Integer) 1)));
#line 793 "module_imports.m"
                    parse_tree__module_imports__succeeded = MR_TRUE;
#line 792 "module_imports.m"
                  }
#line 790 "module_imports.m"
              }
#line 796 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 795 "module_imports.m"
              {
#line 795 "module_imports.m"
                parse_tree__module_imports__STATE_VARIABLE_Deps_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "module_imports.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_Deps_20_20, 0) = ((MR_Box) (parse_tree__module_imports__FileName_17));
#line 795 "module_imports.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_Deps_20_20, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_Deps_0_2));
#line 795 "module_imports.m"
              }
#line 796 "module_imports.m"
            else
#line 795 "module_imports.m"
              parse_tree__module_imports__STATE_VARIABLE_Deps_20_20 = parse_tree__module_imports__STATE_VARIABLE_Deps_0_2;
#line 799 "module_imports.m"
            /* direct tailcall eliminated */
#line 799 "module_imports.m"
            {
#line 799 "module_imports.m"
              MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_8;
#line 799 "module_imports.m"
              MR_Word parse_tree__module_imports__STATE_VARIABLE_Deps_0__tmp_copy_2 = parse_tree__module_imports__STATE_VARIABLE_Deps_20_20;

#line 799 "module_imports.m"
              parse_tree__module_imports__STATE_VARIABLE_Deps_0_2 = parse_tree__module_imports__STATE_VARIABLE_Deps_0__tmp_copy_2;
#line 799 "module_imports.m"
              parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 799 "module_imports.m"
            }
#line 799 "module_imports.m"
            continue;
#line 788 "module_imports.m"
          }
#line 787 "module_imports.m"
      }
#line 787 "module_imports.m"
      break;
#line 787 "module_imports.m"
    }
#line 784 "module_imports.m"
}

#line 770 "module_imports.m"
static MR_Word MR_CALL 
parse_tree__module_imports__yes_catch_expr_goal_1_f_0(
#line 770 "module_imports.m"
  MR_Word parse_tree__module_imports__Catch_3)
#line 770 "module_imports.m"
{
#line 772 "module_imports.m"
  {
#line 772 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 772 "module_imports.m"
    MR_Word parse_tree__module_imports__HeadVar__2_2;
#line 772 "module_imports.m"
    MR_Word parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Catch_3, (MR_Integer) 1)));
#line 772 "module_imports.m"
    MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Catch_3, (MR_Integer) 0)));

#line 772 "module_imports.m"
    {
#line 772 "module_imports.m"
      parse_tree__module_imports__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "module_imports.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__module_imports__V_4_4));
#line 772 "module_imports.m"
    }
#line 772 "module_imports.m"
    return parse_tree__module_imports__HeadVar__2_2;
#line 772 "module_imports.m"
  }
#line 770 "module_imports.m"
}

#line 757 "module_imports.m"
static MR_Word MR_CALL 
parse_tree__module_imports__maybe_goals_contain_stm_atomic_1_f_0(
#line 757 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1)
#line 757 "module_imports.m"
{
#line 759 "module_imports.m"
  while (MR_TRUE)
#line 759 "module_imports.m"
    {
#line 759 "module_imports.m"
      /* tailcall optimized into a loop */
#line 759 "module_imports.m"
      {
#line 759 "module_imports.m"
        MR_bool parse_tree__module_imports__succeeded;
#line 759 "module_imports.m"
        MR_Word parse_tree__module_imports__HeadVar__2_2;

#line 759 "module_imports.m"
        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "module_imports.m"
          parse_tree__module_imports__HeadVar__2_2 = (MR_Integer) 0;
#line 759 "module_imports.m"
        else
#line 760 "module_imports.m"
          {
#line 760 "module_imports.m"
            MR_Word parse_tree__module_imports__MaybeGoal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "module_imports.m"
            MR_Word parse_tree__module_imports__MaybeGoals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 762 "module_imports.m"
            MR_Word parse_tree__module_imports__Goal_6;
#line 762 "module_imports.m"
            MR_Word parse_tree__module_imports__V_8_8;
#line 762 "module_imports.m"
            MR_Word parse_tree__module_imports__V_9_9;
#line 763 "module_imports.m"
            MR_Word parse_tree__module_imports__V_7_7;

#line 762 "module_imports.m"
            parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__MaybeGoal_3)) == (MR_mktag((MR_Integer) 1)));
#line 762 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 762 "module_imports.m"
              {
#line 762 "module_imports.m"
                parse_tree__module_imports__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoal_3, (MR_Integer) 0)));
#line 763 "module_imports.m"
                parse_tree__module_imports__V_8_8 = (MR_Integer) 1;
#line 763 "module_imports.m"
                {
#line 763 "module_imports.m"
                  parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__Goal_6, &parse_tree__module_imports__V_9_9, &parse_tree__module_imports__V_7_7);
                }
#line 763 "module_imports.m"
                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_8_8 == parse_tree__module_imports__V_9_9);
#line 762 "module_imports.m"
              }
#line 766 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 765 "module_imports.m"
              parse_tree__module_imports__HeadVar__2_2 = (MR_Integer) 1;
#line 766 "module_imports.m"
            else
#line 767 "module_imports.m"
              {
#line 767 "module_imports.m"
                /* direct tailcall eliminated */
#line 767 "module_imports.m"
                {
#line 767 "module_imports.m"
                  MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__MaybeGoals_4;

#line 767 "module_imports.m"
                  parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 767 "module_imports.m"
                }
#line 767 "module_imports.m"
                continue;
#line 767 "module_imports.m"
              }
#line 760 "module_imports.m"
          }
#line 759 "module_imports.m"
        return parse_tree__module_imports__HeadVar__2_2;
#line 759 "module_imports.m"
      }
#line 759 "module_imports.m"
      break;
#line 759 "module_imports.m"
    }
#line 757 "module_imports.m"
}

#line 738 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__three_goals_contain_stm_atomic_or_try_5_p_0(
#line 738 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalA_6,
#line 738 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalB_7,
#line 738 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalC_8,
#line 738 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsAtomic_9,
#line 738 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsTry_10)
#line 738 "module_imports.m"
{
#line 742 "module_imports.m"
  {
#line 742 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 742 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsAtomicAB_11;
#line 742 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsTryAB_12;
#line 742 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsAtomicA_19;
#line 742 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsTryA_20;

#line 725 "module_imports.m"
    {
#line 725 "module_imports.m"
      parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__GoalA_6, &parse_tree__module_imports__ContainsAtomicA_19, &parse_tree__module_imports__ContainsTryA_20);
    }
#line 727 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsAtomicA_19 == (MR_Integer) 1);
#line 727 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 728 "module_imports.m"
      parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsTryA_20 == (MR_Integer) 1);
#line 732 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 730 "module_imports.m"
      {
#line 730 "module_imports.m"
        parse_tree__module_imports__ContainsAtomicAB_11 = (MR_Integer) 1;
#line 731 "module_imports.m"
        parse_tree__module_imports__ContainsTryAB_12 = (MR_Integer) 1;
#line 730 "module_imports.m"
      }
#line 732 "module_imports.m"
    else
#line 733 "module_imports.m"
      {
#line 733 "module_imports.m"
        MR_Word parse_tree__module_imports__ContainsAtomicB_21;
#line 733 "module_imports.m"
        MR_Word parse_tree__module_imports__ContainsTryB_22;

#line 733 "module_imports.m"
        {
#line 733 "module_imports.m"
          parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__GoalB_7, &parse_tree__module_imports__ContainsAtomicB_21, &parse_tree__module_imports__ContainsTryB_22);
        }
#line 734 "module_imports.m"
        {
#line 734 "module_imports.m"
          mercury__bool__or_3_p_0(parse_tree__module_imports__ContainsAtomicA_19, parse_tree__module_imports__ContainsAtomicB_21, &parse_tree__module_imports__ContainsAtomicAB_11);
        }
#line 735 "module_imports.m"
        {
#line 735 "module_imports.m"
          mercury__bool__or_3_p_0(parse_tree__module_imports__ContainsTryA_20, parse_tree__module_imports__ContainsTryB_22, &parse_tree__module_imports__ContainsTryAB_12);
        }
#line 733 "module_imports.m"
      }
#line 746 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsAtomicAB_11 == (MR_Integer) 1);
#line 746 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 747 "module_imports.m"
      parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsTryAB_12 == (MR_Integer) 1);
#line 751 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 749 "module_imports.m"
      {
#line 749 "module_imports.m"
        *parse_tree__module_imports__ContainsAtomic_9 = (MR_Integer) 1;
#line 750 "module_imports.m"
        *parse_tree__module_imports__ContainsTry_10 = (MR_Integer) 1;
#line 749 "module_imports.m"
      }
#line 751 "module_imports.m"
    else
#line 752 "module_imports.m"
      {
#line 752 "module_imports.m"
        MR_Word parse_tree__module_imports__ContainsAtomicC_13;
#line 752 "module_imports.m"
        MR_Word parse_tree__module_imports__ContainsTryC_14;

#line 752 "module_imports.m"
        {
#line 752 "module_imports.m"
          parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__GoalC_8, &parse_tree__module_imports__ContainsAtomicC_13, &parse_tree__module_imports__ContainsTryC_14);
        }
#line 753 "module_imports.m"
        {
#line 753 "module_imports.m"
          mercury__bool__or_3_p_0(parse_tree__module_imports__ContainsAtomicAB_11, parse_tree__module_imports__ContainsAtomicC_13, parse_tree__module_imports__ContainsAtomic_9);
        }
#line 754 "module_imports.m"
        {
#line 754 "module_imports.m"
          mercury__bool__or_3_p_0(parse_tree__module_imports__ContainsTryAB_12, parse_tree__module_imports__ContainsTryC_14, parse_tree__module_imports__ContainsTry_10);
#line 754 "module_imports.m"
          return;
        }
#line 752 "module_imports.m"
      }
#line 742 "module_imports.m"
  }
#line 738 "module_imports.m"
}

#line 720 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(
#line 720 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalA_5,
#line 720 "module_imports.m"
  MR_Word parse_tree__module_imports__GoalB_6,
#line 720 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsAtomic_7,
#line 720 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsTry_8)
#line 720 "module_imports.m"
{
#line 724 "module_imports.m"
  {
#line 724 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 724 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsAtomicA_9;
#line 724 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsTryA_10;

#line 725 "module_imports.m"
    {
#line 725 "module_imports.m"
      parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__GoalA_5, &parse_tree__module_imports__ContainsAtomicA_9, &parse_tree__module_imports__ContainsTryA_10);
    }
#line 727 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsAtomicA_9 == (MR_Integer) 1);
#line 727 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 728 "module_imports.m"
      parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsTryA_10 == (MR_Integer) 1);
#line 732 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 730 "module_imports.m"
      {
#line 730 "module_imports.m"
        *parse_tree__module_imports__ContainsAtomic_7 = (MR_Integer) 1;
#line 731 "module_imports.m"
        *parse_tree__module_imports__ContainsTry_8 = (MR_Integer) 1;
#line 730 "module_imports.m"
      }
#line 732 "module_imports.m"
    else
#line 733 "module_imports.m"
      {
#line 733 "module_imports.m"
        MR_Word parse_tree__module_imports__ContainsAtomicB_11;
#line 733 "module_imports.m"
        MR_Word parse_tree__module_imports__ContainsTryB_12;

#line 733 "module_imports.m"
        {
#line 733 "module_imports.m"
          parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__GoalB_6, &parse_tree__module_imports__ContainsAtomicB_11, &parse_tree__module_imports__ContainsTryB_12);
        }
#line 734 "module_imports.m"
        {
#line 734 "module_imports.m"
          mercury__bool__or_3_p_0(parse_tree__module_imports__ContainsAtomicA_9, parse_tree__module_imports__ContainsAtomicB_11, parse_tree__module_imports__ContainsAtomic_7);
        }
#line 735 "module_imports.m"
        {
#line 735 "module_imports.m"
          mercury__bool__or_3_p_0(parse_tree__module_imports__ContainsTryA_10, parse_tree__module_imports__ContainsTryB_12, parse_tree__module_imports__ContainsTry_8);
#line 735 "module_imports.m"
          return;
        }
#line 733 "module_imports.m"
      }
#line 724 "module_imports.m"
  }
#line 720 "module_imports.m"
}

#line 691 "module_imports.m"
static MR_Box MR_CALL 
parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0_1(
#line 691 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg,
#line 691 "module_imports.m"
  MR_Box parse_tree__module_imports__wrapper_arg_1)
#line 691 "module_imports.m"
{
#line 691 "module_imports.m"
  {
#line 691 "module_imports.m"
    MR_Box parse_tree__module_imports__wrapper_arg_2;
#line 691 "module_imports.m"
    MR_Box parse_tree__module_imports__closure = parse_tree__module_imports__closure_arg;
#line 691 "module_imports.m"
    MR_Word parse_tree__module_imports__conv0_HeadVar__2_2;

#line 691 "module_imports.m"
    {
#line 691 "module_imports.m"
      parse_tree__module_imports__conv0_HeadVar__2_2 = parse_tree__module_imports__yes_catch_expr_goal_1_f_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1));
    }
#line 691 "module_imports.m"
    parse_tree__module_imports__wrapper_arg_2 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__2_2));
#line 691 "module_imports.m"
    return parse_tree__module_imports__wrapper_arg_2;
#line 691 "module_imports.m"
  }
#line 691 "module_imports.m"
}

#line 654 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(
#line 654 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 654 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsAtomic_6,
#line 654 "module_imports.m"
  MR_Word * parse_tree__module_imports__ContainsTry_7)
#line 654 "module_imports.m"
{
#line 657 "module_imports.m"
  while (MR_TRUE)
#line 657 "module_imports.m"
    {
#line 657 "module_imports.m"
      /* tailcall optimized into a loop */
#line 657 "module_imports.m"
      {
#line 657 "module_imports.m"
        MR_bool parse_tree__module_imports__succeeded;
#line 657 "module_imports.m"
        MR_Word parse_tree__module_imports__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 657 "module_imports.m"
        MR_Word parse_tree__module_imports___Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));

#line 664 "module_imports.m"
        if (((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 1))))
#line 668 "module_imports.m"
          {
#line 668 "module_imports.m"
            MR_Word parse_tree__module_imports__SubGoalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)));
#line 668 "module_imports.m"
            MR_Word parse_tree__module_imports__SubGoalB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 669 "module_imports.m"
            {
#line 669 "module_imports.m"
              parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(parse_tree__module_imports__SubGoalA_8, parse_tree__module_imports__SubGoalB_9, parse_tree__module_imports__ContainsAtomic_6, parse_tree__module_imports__ContainsTry_7);
#line 669 "module_imports.m"
              return;
            }
#line 668 "module_imports.m"
          }
#line 664 "module_imports.m"
        else
#line 664 "module_imports.m"
          if ((((parse_tree__module_imports__GoalExpr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((parse_tree__module_imports__GoalExpr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 661 "module_imports.m"
            {
#line 662 "module_imports.m"
              *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 0;
#line 663 "module_imports.m"
              *parse_tree__module_imports__ContainsTry_7 = (MR_Integer) 0;
#line 661 "module_imports.m"
            }
#line 664 "module_imports.m"
          else
#line 664 "module_imports.m"
            if (((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 668 "module_imports.m"
              {
#line 668 "module_imports.m"
                MR_Word parse_tree__module_imports__SubGoalA_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)));
#line 668 "module_imports.m"
                MR_Word parse_tree__module_imports__SubGoalB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 669 "module_imports.m"
                {
#line 669 "module_imports.m"
                  parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(parse_tree__module_imports__SubGoalA_79, parse_tree__module_imports__SubGoalB_80, parse_tree__module_imports__ContainsAtomic_6, parse_tree__module_imports__ContainsTry_7);
#line 669 "module_imports.m"
                  return;
                }
#line 668 "module_imports.m"
              }
#line 664 "module_imports.m"
            else
#line 664 "module_imports.m"
              if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 684 "module_imports.m"
                {
#line 684 "module_imports.m"
                  MR_Word parse_tree__module_imports__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 673 "module_imports.m"
                  MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                  /* direct tailcall eliminated */
#line 685 "module_imports.m"
                  {
#line 685 "module_imports.m"
                    MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_11;

#line 685 "module_imports.m"
                    parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                  }
#line 685 "module_imports.m"
                  continue;
#line 684 "module_imports.m"
                }
#line 664 "module_imports.m"
              else
#line 664 "module_imports.m"
                if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 684 "module_imports.m"
                  {
#line 684 "module_imports.m"
                    MR_Word parse_tree__module_imports__SubGoal_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 675 "module_imports.m"
                    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                    /* direct tailcall eliminated */
#line 685 "module_imports.m"
                    {
#line 685 "module_imports.m"
                      MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_74;

#line 685 "module_imports.m"
                      parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                    }
#line 685 "module_imports.m"
                    continue;
#line 684 "module_imports.m"
                  }
#line 664 "module_imports.m"
                else
#line 664 "module_imports.m"
                  if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 708 "module_imports.m"
                    {
#line 709 "module_imports.m"
                      *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 1;
#line 710 "module_imports.m"
                      *parse_tree__module_imports__ContainsTry_7 = (MR_Integer) 0;
#line 708 "module_imports.m"
                    }
#line 664 "module_imports.m"
                  else
#line 664 "module_imports.m"
                    if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 668 "module_imports.m"
                      {
#line 668 "module_imports.m"
                        MR_Word parse_tree__module_imports__SubGoalA_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 668 "module_imports.m"
                        MR_Word parse_tree__module_imports__SubGoalB_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));

#line 669 "module_imports.m"
                        {
#line 669 "module_imports.m"
                          parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(parse_tree__module_imports__SubGoalA_75, parse_tree__module_imports__SubGoalB_76, parse_tree__module_imports__ContainsAtomic_6, parse_tree__module_imports__ContainsTry_7);
#line 669 "module_imports.m"
                          return;
                        }
#line 668 "module_imports.m"
                      }
#line 664 "module_imports.m"
                    else
#line 664 "module_imports.m"
                      if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 697 "module_imports.m"
                        {
#line 697 "module_imports.m"
                          MR_Word parse_tree__module_imports__SubGoalA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 697 "module_imports.m"
                          MR_Word parse_tree__module_imports__SubGoalB_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));

#line 698 "module_imports.m"
                          {
#line 698 "module_imports.m"
                            parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(parse_tree__module_imports__SubGoalA_66, parse_tree__module_imports__SubGoalB_67, parse_tree__module_imports__ContainsAtomic_6, parse_tree__module_imports__ContainsTry_7);
#line 698 "module_imports.m"
                            return;
                          }
#line 697 "module_imports.m"
                        }
#line 664 "module_imports.m"
                      else
#line 664 "module_imports.m"
                        if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 704 "module_imports.m"
                          {
#line 704 "module_imports.m"
                            MR_Word parse_tree__module_imports__Cond_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 3)));
#line 704 "module_imports.m"
                            MR_Word parse_tree__module_imports__Else_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 5)));
#line 704 "module_imports.m"
                            MR_Word parse_tree__module_imports__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 4)));
#line 704 "module_imports.m"
                            MR_Word parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 704 "module_imports.m"
                            MR_Word parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));

#line 705 "module_imports.m"
                            {
#line 705 "module_imports.m"
                              parse_tree__module_imports__three_goals_contain_stm_atomic_or_try_5_p_0(parse_tree__module_imports__Cond_41, parse_tree__module_imports__Then_69, parse_tree__module_imports__Else_42, parse_tree__module_imports__ContainsAtomic_6, parse_tree__module_imports__ContainsTry_7);
#line 705 "module_imports.m"
                              return;
                            }
#line 704 "module_imports.m"
                          }
#line 664 "module_imports.m"
                        else
#line 664 "module_imports.m"
                          if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 697 "module_imports.m"
                            {
#line 697 "module_imports.m"
                              MR_Word parse_tree__module_imports__SubGoalA_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 697 "module_imports.m"
                              MR_Word parse_tree__module_imports__SubGoalB_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));

#line 698 "module_imports.m"
                              {
#line 698 "module_imports.m"
                                parse_tree__module_imports__two_goals_contain_stm_atomic_or_try_4_p_0(parse_tree__module_imports__SubGoalA_77, parse_tree__module_imports__SubGoalB_78, parse_tree__module_imports__ContainsAtomic_6, parse_tree__module_imports__ContainsTry_7);
#line 698 "module_imports.m"
                                return;
                              }
#line 697 "module_imports.m"
                            }
#line 664 "module_imports.m"
                          else
#line 664 "module_imports.m"
                            if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 701 "module_imports.m"
                              {
#line 701 "module_imports.m"
                                MR_Word parse_tree__module_imports__SubGoal_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 702 "module_imports.m"
                                /* direct tailcall eliminated */
#line 702 "module_imports.m"
                                {
#line 702 "module_imports.m"
                                  MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_68;

#line 702 "module_imports.m"
                                  parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 702 "module_imports.m"
                                }
#line 702 "module_imports.m"
                                continue;
#line 701 "module_imports.m"
                              }
#line 664 "module_imports.m"
                            else
#line 664 "module_imports.m"
                              if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 684 "module_imports.m"
                                {
#line 684 "module_imports.m"
                                  MR_Word parse_tree__module_imports__SubGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 5)));
#line 679 "module_imports.m"
                                  MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 679 "module_imports.m"
                                  MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 679 "module_imports.m"
                                  MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 3)));
#line 679 "module_imports.m"
                                  MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 4)));

#line 685 "module_imports.m"
                                  /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                  {
#line 685 "module_imports.m"
                                    MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_81;

#line 685 "module_imports.m"
                                    parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                  }
#line 685 "module_imports.m"
                                  continue;
#line 684 "module_imports.m"
                                }
#line 664 "module_imports.m"
                              else
#line 664 "module_imports.m"
                                if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 684 "module_imports.m"
                                  {
#line 684 "module_imports.m"
                                    MR_Word parse_tree__module_imports__SubGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 5)));
#line 678 "module_imports.m"
                                    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 678 "module_imports.m"
                                    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 678 "module_imports.m"
                                    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 3)));
#line 678 "module_imports.m"
                                    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 4)));

#line 685 "module_imports.m"
                                    /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                    {
#line 685 "module_imports.m"
                                      MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_82;

#line 685 "module_imports.m"
                                      parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                    }
#line 685 "module_imports.m"
                                    continue;
#line 684 "module_imports.m"
                                  }
#line 664 "module_imports.m"
                                else
#line 664 "module_imports.m"
                                  if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 684 "module_imports.m"
                                    {
#line 684 "module_imports.m"
                                      MR_Word parse_tree__module_imports__SubGoal_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 5)));
#line 677 "module_imports.m"
                                      MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 677 "module_imports.m"
                                      MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 677 "module_imports.m"
                                      MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 3)));
#line 677 "module_imports.m"
                                      MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 4)));

#line 685 "module_imports.m"
                                      /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                      {
#line 685 "module_imports.m"
                                        MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_83;

#line 685 "module_imports.m"
                                        parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                      }
#line 685 "module_imports.m"
                                      continue;
#line 684 "module_imports.m"
                                    }
#line 664 "module_imports.m"
                                  else
#line 664 "module_imports.m"
                                    if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 684 "module_imports.m"
                                      {
#line 684 "module_imports.m"
                                        MR_Word parse_tree__module_imports__SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 676 "module_imports.m"
                                        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                                        /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                        {
#line 685 "module_imports.m"
                                          MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_84;

#line 685 "module_imports.m"
                                          parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                        }
#line 685 "module_imports.m"
                                        continue;
#line 684 "module_imports.m"
                                      }
#line 664 "module_imports.m"
                                    else
#line 664 "module_imports.m"
                                      if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 684 "module_imports.m"
                                        {
#line 684 "module_imports.m"
                                          MR_Word parse_tree__module_imports__SubGoal_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 682 "module_imports.m"
                                          MR_Word parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                                          /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                          {
#line 685 "module_imports.m"
                                            MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_85;

#line 685 "module_imports.m"
                                            parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                          }
#line 685 "module_imports.m"
                                          continue;
#line 684 "module_imports.m"
                                        }
#line 664 "module_imports.m"
                                      else
#line 664 "module_imports.m"
                                        if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 684 "module_imports.m"
                                          {
#line 684 "module_imports.m"
                                            MR_Word parse_tree__module_imports__SubGoal_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 681 "module_imports.m"
                                            MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                                            /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                            {
#line 685 "module_imports.m"
                                              MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_86;

#line 685 "module_imports.m"
                                              parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                            }
#line 685 "module_imports.m"
                                            continue;
#line 684 "module_imports.m"
                                          }
#line 664 "module_imports.m"
                                        else
#line 664 "module_imports.m"
                                          if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 684 "module_imports.m"
                                            {
#line 684 "module_imports.m"
                                              MR_Word parse_tree__module_imports__SubGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 672 "module_imports.m"
                                              MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                                              /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                              {
#line 685 "module_imports.m"
                                                MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_87;

#line 685 "module_imports.m"
                                                parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                              }
#line 685 "module_imports.m"
                                              continue;
#line 684 "module_imports.m"
                                            }
#line 664 "module_imports.m"
                                          else
#line 664 "module_imports.m"
                                            if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 684 "module_imports.m"
                                              {
#line 684 "module_imports.m"
                                                MR_Word parse_tree__module_imports__SubGoal_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 674 "module_imports.m"
                                                MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));

#line 685 "module_imports.m"
                                                /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                                {
#line 685 "module_imports.m"
                                                  MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_88;

#line 685 "module_imports.m"
                                                  parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                                }
#line 685 "module_imports.m"
                                                continue;
#line 684 "module_imports.m"
                                              }
#line 664 "module_imports.m"
                                            else
#line 664 "module_imports.m"
                                              if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 684 "module_imports.m"
                                                {
#line 684 "module_imports.m"
                                                  MR_Word parse_tree__module_imports__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 5)));
#line 683 "module_imports.m"
                                                  MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 683 "module_imports.m"
                                                  MR_Word parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 683 "module_imports.m"
                                                  MR_Word parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 3)));
#line 683 "module_imports.m"
                                                  MR_Word parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 4)));

#line 685 "module_imports.m"
                                                  /* direct tailcall eliminated */
#line 685 "module_imports.m"
                                                  {
#line 685 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__SubGoal_89;

#line 685 "module_imports.m"
                                                    parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 685 "module_imports.m"
                                                  }
#line 685 "module_imports.m"
                                                  continue;
#line 684 "module_imports.m"
                                                }
#line 664 "module_imports.m"
                                              else
#line 664 "module_imports.m"
                                                if (((((MR_tag((MR_Word) parse_tree__module_imports__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 687 "module_imports.m"
                                                  {
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__Then_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 3)));
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__MaybeElse_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 4)));
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__Catches_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 5)));
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__CatchAny_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 6)));
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_59_59;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_60_60;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_61_61;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_62_62;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_63_63;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__SubGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 2)));
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__MaybeGoal_93;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__MaybeGoals_94;
#line 687 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__GoalExpr_4, (MR_Integer) 1)));
#line 762 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__Goal_96;
#line 762 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_99_99;
#line 763 "module_imports.m"
                                                    MR_Word parse_tree__module_imports__V_97_97;

#line 689 "module_imports.m"
                                                    {
#line 689 "module_imports.m"
                                                      parse_tree__module_imports__MaybeGoal_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoal_93, 0) = ((MR_Box) (parse_tree__module_imports__SubGoal_65));
#line 689 "module_imports.m"
                                                    }
#line 689 "module_imports.m"
                                                    {
#line 689 "module_imports.m"
                                                      parse_tree__module_imports__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_59_59, 0) = ((MR_Box) (parse_tree__module_imports__Then_35));
#line 689 "module_imports.m"
                                                    }
#line 776 "module_imports.m"
                                                    if ((parse_tree__module_imports__CatchAny_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "module_imports.m"
                                                      parse_tree__module_imports__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "module_imports.m"
                                                    else
#line 776 "module_imports.m"
                                                      {
#line 776 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__Goal_91;
#line 776 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__CatchAny_38, (MR_Integer) 0)));
#line 776 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_92_92, (MR_Integer) 0)));

#line 776 "module_imports.m"
                                                        parse_tree__module_imports__Goal_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_92_92, (MR_Integer) 1)));
#line 776 "module_imports.m"
                                                        {
#line 776 "module_imports.m"
                                                          parse_tree__module_imports__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 776 "module_imports.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_62_62, 0) = ((MR_Box) (parse_tree__module_imports__Goal_91));
#line 776 "module_imports.m"
                                                        }
#line 776 "module_imports.m"
                                                      }
#line 690 "module_imports.m"
                                                    {
#line 690 "module_imports.m"
                                                      parse_tree__module_imports__V_63_63 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0, (MR_Word) &parse_tree__module_imports_scalar_common_2[0], (MR_Word) &parse_tree__module_imports_scalar_common_1[3], parse_tree__module_imports__Catches_37);
                                                    }
#line 689 "module_imports.m"
                                                    {
#line 689 "module_imports.m"
                                                      parse_tree__module_imports__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_61_61, 0) = ((MR_Box) (parse_tree__module_imports__V_62_62));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_61_61, 1) = ((MR_Box) (parse_tree__module_imports__V_63_63));
#line 689 "module_imports.m"
                                                    }
#line 689 "module_imports.m"
                                                    {
#line 689 "module_imports.m"
                                                      parse_tree__module_imports__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_60_60, 0) = ((MR_Box) (parse_tree__module_imports__MaybeElse_36));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_60_60, 1) = ((MR_Box) (parse_tree__module_imports__V_61_61));
#line 689 "module_imports.m"
                                                    }
#line 689 "module_imports.m"
                                                    {
#line 689 "module_imports.m"
                                                      parse_tree__module_imports__MaybeGoals_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_94, 0) = ((MR_Box) (parse_tree__module_imports__V_59_59));
#line 689 "module_imports.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_94, 1) = ((MR_Box) (parse_tree__module_imports__V_60_60));
#line 689 "module_imports.m"
                                                    }
#line 762 "module_imports.m"
                                                    parse_tree__module_imports__Goal_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoal_93, (MR_Integer) 0)));
#line 763 "module_imports.m"
                                                    {
#line 763 "module_imports.m"
                                                      parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__Goal_96, &parse_tree__module_imports__V_99_99, &parse_tree__module_imports__V_97_97);
                                                    }
#line 763 "module_imports.m"
                                                    parse_tree__module_imports__succeeded = ((MR_Integer) 1 == parse_tree__module_imports__V_99_99);
#line 766 "module_imports.m"
                                                    if (parse_tree__module_imports__succeeded)
#line 765 "module_imports.m"
                                                      *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 1;
#line 766 "module_imports.m"
                                                    else
#line 760 "module_imports.m"
                                                      {
#line 760 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__MaybeGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_94, (MR_Integer) 0)));
#line 760 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__MaybeGoals_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_94, (MR_Integer) 1)));
#line 762 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__Goal_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoal_100, (MR_Integer) 0)));
#line 762 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__V_106_106;
#line 763 "module_imports.m"
                                                        MR_Word parse_tree__module_imports__V_104_104;

#line 763 "module_imports.m"
                                                        {
#line 763 "module_imports.m"
                                                          parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__Goal_103, &parse_tree__module_imports__V_106_106, &parse_tree__module_imports__V_104_104);
                                                        }
#line 763 "module_imports.m"
                                                        parse_tree__module_imports__succeeded = ((MR_Integer) 1 == parse_tree__module_imports__V_106_106);
#line 766 "module_imports.m"
                                                        if (parse_tree__module_imports__succeeded)
#line 765 "module_imports.m"
                                                          *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 1;
#line 766 "module_imports.m"
                                                        else
#line 760 "module_imports.m"
                                                          {
#line 760 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__MaybeGoal_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_101, (MR_Integer) 0)));
#line 760 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__MaybeGoals_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_101, (MR_Integer) 1)));
#line 762 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__Goal_110;
#line 762 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__V_112_112;
#line 762 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__V_113_113;
#line 763 "module_imports.m"
                                                            MR_Word parse_tree__module_imports__V_111_111;

#line 762 "module_imports.m"
                                                            parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__MaybeGoal_107)) == (MR_mktag((MR_Integer) 1)));
#line 762 "module_imports.m"
                                                            if (parse_tree__module_imports__succeeded)
#line 762 "module_imports.m"
                                                              {
#line 762 "module_imports.m"
                                                                parse_tree__module_imports__Goal_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoal_107, (MR_Integer) 0)));
#line 763 "module_imports.m"
                                                                parse_tree__module_imports__V_112_112 = (MR_Integer) 1;
#line 763 "module_imports.m"
                                                                {
#line 763 "module_imports.m"
                                                                  parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__Goal_110, &parse_tree__module_imports__V_113_113, &parse_tree__module_imports__V_111_111);
                                                                }
#line 763 "module_imports.m"
                                                                parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_112_112 == parse_tree__module_imports__V_113_113);
#line 762 "module_imports.m"
                                                              }
#line 766 "module_imports.m"
                                                            if (parse_tree__module_imports__succeeded)
#line 765 "module_imports.m"
                                                              *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 1;
#line 766 "module_imports.m"
                                                            else
#line 760 "module_imports.m"
                                                              {
#line 760 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__MaybeGoal_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_108, (MR_Integer) 0)));
#line 760 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__MaybeGoals_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoals_108, (MR_Integer) 1)));
#line 762 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__Goal_117;
#line 762 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__V_119_119;
#line 762 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__V_120_120;
#line 763 "module_imports.m"
                                                                MR_Word parse_tree__module_imports__V_118_118;

#line 762 "module_imports.m"
                                                                parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__MaybeGoal_114)) == (MR_mktag((MR_Integer) 1)));
#line 762 "module_imports.m"
                                                                if (parse_tree__module_imports__succeeded)
#line 762 "module_imports.m"
                                                                  {
#line 762 "module_imports.m"
                                                                    parse_tree__module_imports__Goal_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeGoal_114, (MR_Integer) 0)));
#line 763 "module_imports.m"
                                                                    parse_tree__module_imports__V_119_119 = (MR_Integer) 1;
#line 763 "module_imports.m"
                                                                    {
#line 763 "module_imports.m"
                                                                      parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__Goal_117, &parse_tree__module_imports__V_120_120, &parse_tree__module_imports__V_118_118);
                                                                    }
#line 763 "module_imports.m"
                                                                    parse_tree__module_imports__succeeded = (parse_tree__module_imports__V_119_119 == parse_tree__module_imports__V_120_120);
#line 762 "module_imports.m"
                                                                  }
#line 766 "module_imports.m"
                                                                if (parse_tree__module_imports__succeeded)
#line 765 "module_imports.m"
                                                                  *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 1;
#line 766 "module_imports.m"
                                                                else
#line 767 "module_imports.m"
                                                                  {
#line 767 "module_imports.m"
                                                                    *parse_tree__module_imports__ContainsAtomic_6 = parse_tree__module_imports__maybe_goals_contain_stm_atomic_1_f_0(parse_tree__module_imports__MaybeGoals_115);
                                                                  }
#line 760 "module_imports.m"
                                                              }
#line 760 "module_imports.m"
                                                          }
#line 760 "module_imports.m"
                                                      }
#line 693 "module_imports.m"
                                                    *parse_tree__module_imports__ContainsTry_7 = (MR_Integer) 1;
#line 687 "module_imports.m"
                                                  }
#line 664 "module_imports.m"
                                                else
#line 715 "module_imports.m"
                                                  {
#line 716 "module_imports.m"
                                                    *parse_tree__module_imports__ContainsAtomic_6 = (MR_Integer) 0;
#line 717 "module_imports.m"
                                                    *parse_tree__module_imports__ContainsTry_7 = (MR_Integer) 0;
#line 715 "module_imports.m"
                                                  }
#line 657 "module_imports.m"
      }
#line 657 "module_imports.m"
      break;
#line 657 "module_imports.m"
    }
#line 654 "module_imports.m"
}

#line 635 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__maybe_items_need_imports_9_p_0(
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_10,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_15,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_16,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_17,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_18,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_19,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_20,
#line 635 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_21,
#line 635 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_22)
#line 635 "module_imports.m"
{
#line 649 "module_imports.m"
  {
#line 649 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded = (parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_15 == (MR_Integer) 1);

#line 642 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 642 "module_imports.m"
      {
#line 643 "module_imports.m"
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_17 == (MR_Integer) 1);
#line 642 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 642 "module_imports.m"
          {
#line 644 "module_imports.m"
            parse_tree__module_imports__succeeded = (parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_19 == (MR_Integer) 1);
#line 642 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 645 "module_imports.m"
              parse_tree__module_imports__succeeded = (parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_21 == (MR_Integer) 1);
#line 642 "module_imports.m"
          }
#line 642 "module_imports.m"
      }
#line 649 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 648 "module_imports.m"
      {
#line 648 "module_imports.m"
        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_22 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_21;
#line 648 "module_imports.m"
        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_20 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_19;
#line 648 "module_imports.m"
        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_18 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_17;
#line 648 "module_imports.m"
        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_16 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_15;
#line 648 "module_imports.m"
      }
#line 649 "module_imports.m"
    else
#line 650 "module_imports.m"
      {
#line 650 "module_imports.m"
        parse_tree__module_imports__items_need_imports_9_p_0(parse_tree__module_imports__Items_10, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_15, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_16, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_17, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_18, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_19, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_20, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_21, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_22);
#line 650 "module_imports.m"
        return;
      }
#line 649 "module_imports.m"
  }
#line 635 "module_imports.m"
}

#line 582 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__items_need_imports_9_p_0(
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_2,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_4,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7,
#line 582 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8,
#line 582 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9)
#line 582 "module_imports.m"
{
#line 586 "module_imports.m"
  while (MR_TRUE)
#line 586 "module_imports.m"
    {
#line 586 "module_imports.m"
      /* tailcall optimized into a loop */
#line 586 "module_imports.m"
      {
#line 586 "module_imports.m"
        MR_bool parse_tree__module_imports__succeeded;

#line 586 "module_imports.m"
        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "module_imports.m"
          {
#line 586 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8;
#line 586 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6;
#line 586 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_4;
#line 586 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_2;
#line 586 "module_imports.m"
          }
#line 586 "module_imports.m"
        else
#line 589 "module_imports.m"
          {
#line 589 "module_imports.m"
            MR_Word parse_tree__module_imports__Item_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "module_imports.m"
            MR_Word parse_tree__module_imports__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 615 "module_imports.m"
            MR_Word parse_tree__module_imports__MaybeAttributes_37;
#line 591 "module_imports.m"
            MR_Word parse_tree__module_imports__ItemPragma_28;
#line 591 "module_imports.m"
            MR_Word parse_tree__module_imports__Pragma_30;
#line 591 "module_imports.m"
            MR_Word parse_tree__module_imports__TableInfo_33;
#line 592 "module_imports.m"
            MR_Word parse_tree__module_imports__V_29_29;
#line 592 "module_imports.m"
            MR_Word parse_tree__module_imports__V_31_31;
#line 592 "module_imports.m"
            MR_Integer parse_tree__module_imports__V_32_32;
#line 594 "module_imports.m"
            MR_Word parse_tree__module_imports__V_34_34;
#line 594 "module_imports.m"
            MR_Word parse_tree__module_imports__V_35_35;
#line 594 "module_imports.m"
            MR_Word parse_tree__module_imports__V_36_36;

#line 591 "module_imports.m"
            parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__Item_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 591 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 591 "module_imports.m"
              {
#line 591 "module_imports.m"
                parse_tree__module_imports__ItemPragma_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_22, (MR_Integer) 1)));
#line 592 "module_imports.m"
                parse_tree__module_imports__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_28, (MR_Integer) 0)));
#line 592 "module_imports.m"
                parse_tree__module_imports__Pragma_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_28, (MR_Integer) 1)));
#line 592 "module_imports.m"
                parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_28, (MR_Integer) 2)));
#line 592 "module_imports.m"
                parse_tree__module_imports__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemPragma_28, (MR_Integer) 3)));
#line 593 "module_imports.m"
                parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__Pragma_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Pragma_30, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 593 "module_imports.m"
                if (parse_tree__module_imports__succeeded)
#line 593 "module_imports.m"
                  {
#line 593 "module_imports.m"
                    parse_tree__module_imports__TableInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Pragma_30, (MR_Integer) 1)));
#line 594 "module_imports.m"
                    parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__TableInfo_33, (MR_Integer) 0)));
#line 594 "module_imports.m"
                    parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__TableInfo_33, (MR_Integer) 1)));
#line 594 "module_imports.m"
                    parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__TableInfo_33, (MR_Integer) 2)));
#line 594 "module_imports.m"
                    parse_tree__module_imports__MaybeAttributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__TableInfo_33, (MR_Integer) 3)));
#line 594 "module_imports.m"
                    parse_tree__module_imports__succeeded = MR_TRUE;
#line 593 "module_imports.m"
                  }
#line 591 "module_imports.m"
              }
#line 615 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 596 "module_imports.m"
              {
#line 602 "module_imports.m"
                if ((parse_tree__module_imports__MaybeAttributes_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "module_imports.m"
                  {
#line 599 "module_imports.m"
                    parse_tree__module_imports__maybe_items_need_imports_9_p_0(parse_tree__module_imports__Items_23, (MR_Integer) 1, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_4, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9);
#line 599 "module_imports.m"
                    return;
                  }
#line 602 "module_imports.m"
                else
#line 603 "module_imports.m"
                  {
#line 603 "module_imports.m"
                    MR_Word parse_tree__module_imports__Attributes_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__MaybeAttributes_37, (MR_Integer) 0)));
#line 603 "module_imports.m"
                    MR_Word parse_tree__module_imports__StatsAttr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Attributes_38, (MR_Integer) 2)));
#line 604 "module_imports.m"
                    MR_Word parse_tree__module_imports__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Attributes_38, (MR_Integer) 0)));
#line 604 "module_imports.m"
                    MR_Word parse_tree__module_imports__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Attributes_38, (MR_Integer) 1)));
#line 604 "module_imports.m"
                    MR_Word parse_tree__module_imports__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Attributes_38, (MR_Integer) 3)));

#line 611 "module_imports.m"
                    if ((parse_tree__module_imports__StatsAttr_39 == (MR_Integer) 1))
#line 612 "module_imports.m"
                      {
#line 612 "module_imports.m"
                        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3 = (MR_Integer) 1;
#line 612 "module_imports.m"
                        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_4;
#line 612 "module_imports.m"
                        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6;
#line 612 "module_imports.m"
                        *parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8;
#line 612 "module_imports.m"
                      }
#line 611 "module_imports.m"
                    else
#line 606 "module_imports.m"
                      {
#line 608 "module_imports.m"
                        {
#line 608 "module_imports.m"
                          parse_tree__module_imports__maybe_items_need_imports_9_p_0(parse_tree__module_imports__Items_23, (MR_Integer) 1, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3, (MR_Integer) 1, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9);
#line 608 "module_imports.m"
                          return;
                        }
#line 606 "module_imports.m"
                      }
#line 603 "module_imports.m"
                  }
#line 596 "module_imports.m"
              }
#line 615 "module_imports.m"
            else
#line 630 "module_imports.m"
              {
#line 630 "module_imports.m"
                MR_Word parse_tree__module_imports__ItemClause_40;

#line 616 "module_imports.m"
                parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__Item_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 616 "module_imports.m"
                if (parse_tree__module_imports__succeeded)
#line 616 "module_imports.m"
                  {
#line 616 "module_imports.m"
                    parse_tree__module_imports__ItemClause_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__Item_22, (MR_Integer) 1)));
#line 618 "module_imports.m"
                    {
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__Body_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 5)));
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__ContainsAtomic_42;
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__ContainsTry_43;
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_62_62;
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_63_63;
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 0)));
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 1)));
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 2)));
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 3)));
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 4)));
#line 618 "module_imports.m"
                      MR_Word parse_tree__module_imports__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 6)));
#line 618 "module_imports.m"
                      MR_Integer parse_tree__module_imports__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemClause_40, (MR_Integer) 7)));

#line 619 "module_imports.m"
                      {
#line 619 "module_imports.m"
                        parse_tree__module_imports__goal_contains_stm_atomic_or_try_3_p_0(parse_tree__module_imports__Body_41, &parse_tree__module_imports__ContainsAtomic_42, &parse_tree__module_imports__ContainsTry_43);
                      }
#line 620 "module_imports.m"
                      parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsAtomic_42 == (MR_Integer) 1);
#line 623 "module_imports.m"
                      if (parse_tree__module_imports__succeeded)
#line 621 "module_imports.m"
                        {
#line 621 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_62_62 = (MR_Integer) 1;
#line 622 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_63_63 = (MR_Integer) 1;
#line 621 "module_imports.m"
                        }
#line 623 "module_imports.m"
                      else
#line 625 "module_imports.m"
                        {
#line 623 "module_imports.m"
                          parse_tree__module_imports__succeeded = (parse_tree__module_imports__ContainsTry_43 == (MR_Integer) 1);
#line 625 "module_imports.m"
                          if (parse_tree__module_imports__succeeded)
#line 624 "module_imports.m"
                            parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_63_63 = (MR_Integer) 1;
#line 625 "module_imports.m"
                          else
#line 624 "module_imports.m"
                            parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_63_63 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_0_8;
#line 624 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_62_62 = parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_0_6;
#line 625 "module_imports.m"
                        }
#line 628 "module_imports.m"
                      {
#line 628 "module_imports.m"
                        parse_tree__module_imports__maybe_items_need_imports_9_p_0(parse_tree__module_imports__Items_23, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_0_2, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTabling_3, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_0_4, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedTablingStatistics_5, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_62_62, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedSTM_7, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_63_63, parse_tree__module_imports__STATE_VARIABLE_ItemsNeedException_9);
#line 628 "module_imports.m"
                        return;
                      }
#line 618 "module_imports.m"
                    }
#line 616 "module_imports.m"
                  }
#line 616 "module_imports.m"
                else
#line 631 "module_imports.m"
                  {
#line 631 "module_imports.m"
                    /* direct tailcall eliminated */
#line 631 "module_imports.m"
                    {
#line 631 "module_imports.m"
                      MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_23;

#line 631 "module_imports.m"
                      parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 631 "module_imports.m"
                    }
#line 631 "module_imports.m"
                    continue;
#line 631 "module_imports.m"
                  }
#line 630 "module_imports.m"
              }
#line 589 "module_imports.m"
          }
#line 586 "module_imports.m"
      }
#line 586 "module_imports.m"
      break;
#line 586 "module_imports.m"
    }
#line 582 "module_imports.m"
}

#line 441 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__get_dependencies_interface_9_p_0(
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7,
#line 441 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8,
#line 441 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9)
#line 441 "module_imports.m"
{
#line 447 "module_imports.m"
  while (MR_TRUE)
#line 447 "module_imports.m"
    {
#line 447 "module_imports.m"
      /* tailcall optimized into a loop */
#line 447 "module_imports.m"
      {
#line 447 "module_imports.m"
        MR_bool parse_tree__module_imports__succeeded;

#line 447 "module_imports.m"
        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "module_imports.m"
          {
#line 447 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9 = parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8;
#line 447 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7 = parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6;
#line 447 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5 = parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4;
#line 447 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3 = parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2;
#line 447 "module_imports.m"
          }
#line 447 "module_imports.m"
        else
#line 450 "module_imports.m"
          {
#line 450 "module_imports.m"
            MR_Word parse_tree__module_imports__Item_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "module_imports.m"
            MR_Word parse_tree__module_imports__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 467 "module_imports.m"
            MR_Word parse_tree__module_imports__ItemModuleDefn_28;

#line 451 "module_imports.m"
            parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__Item_22)) == (MR_mktag((MR_Integer) 2)));
#line 451 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 451 "module_imports.m"
              {
#line 451 "module_imports.m"
                parse_tree__module_imports__ItemModuleDefn_28 = (MR_Word) MR_body(((MR_Word) parse_tree__module_imports__Item_22), (MR_Integer) 2);
#line 452 "module_imports.m"
                {
#line 452 "module_imports.m"
                  MR_Word parse_tree__module_imports__ModuleDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemModuleDefn_28, (MR_Integer) 0)));
#line 452 "module_imports.m"
                  MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemModuleDefn_28, (MR_Integer) 1)));
#line 452 "module_imports.m"
                  MR_Integer parse_tree__module_imports__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemModuleDefn_28, (MR_Integer) 2)));

#line 453 "module_imports.m"
                  parse_tree__module_imports__succeeded = (parse_tree__module_imports__ModuleDefn_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 456 "module_imports.m"
                  if (parse_tree__module_imports__succeeded)
#line 454 "module_imports.m"
                    {
#line 454 "module_imports.m"
                      parse_tree__module_imports__get_dependencies_implementation_9_p_0(parse_tree__module_imports__Items_23, parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2, parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3, parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4, parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5, parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6, parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7, parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8, parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9);
#line 454 "module_imports.m"
                      return;
                    }
#line 456 "module_imports.m"
                  else
#line 463 "module_imports.m"
                    {
#line 463 "module_imports.m"
                      MR_Word parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_45_45;
#line 463 "module_imports.m"
                      MR_Word parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_46_46;
#line 459 "module_imports.m"
                      MR_Word parse_tree__module_imports__Modules_32;

#line 457 "module_imports.m"
                      parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__ModuleDefn_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 457 "module_imports.m"
                      if (parse_tree__module_imports__succeeded)
#line 457 "module_imports.m"
                        {
#line 457 "module_imports.m"
                          parse_tree__module_imports__Modules_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 1)));
#line 458 "module_imports.m"
                          {
#line 458 "module_imports.m"
                            mercury__set__insert_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__module_imports__Modules_32, parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2, &parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_45_45);
                          }
#line 458 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_46_46 = parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4;
#line 457 "module_imports.m"
                        }
#line 457 "module_imports.m"
                      else
#line 461 "module_imports.m"
                        {
#line 461 "module_imports.m"
                          MR_Word parse_tree__module_imports__Modules_55;

#line 459 "module_imports.m"
                          parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__ModuleDefn_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 459 "module_imports.m"
                          if (parse_tree__module_imports__succeeded)
#line 459 "module_imports.m"
                            {
#line 459 "module_imports.m"
                              parse_tree__module_imports__Modules_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 1)));
#line 460 "module_imports.m"
                              {
#line 460 "module_imports.m"
                                mercury__set__insert_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__module_imports__Modules_55, parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4, &parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_46_46);
                              }
#line 459 "module_imports.m"
                            }
#line 459 "module_imports.m"
                          else
#line 460 "module_imports.m"
                            parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_46_46 = parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4;
#line 460 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_45_45 = parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2;
#line 461 "module_imports.m"
                        }
#line 464 "module_imports.m"
                      /* direct tailcall eliminated */
#line 464 "module_imports.m"
                      {
#line 464 "module_imports.m"
                        MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_23;
#line 464 "module_imports.m"
                        MR_Word parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2 = parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_45_45;
#line 464 "module_imports.m"
                        MR_Word parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4 = parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_46_46;

#line 464 "module_imports.m"
                        parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4 = parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4;
#line 464 "module_imports.m"
                        parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2 = parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2;
#line 464 "module_imports.m"
                        parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 464 "module_imports.m"
                      }
#line 464 "module_imports.m"
                      continue;
#line 463 "module_imports.m"
                    }
#line 452 "module_imports.m"
                }
#line 451 "module_imports.m"
              }
#line 451 "module_imports.m"
            else
#line 468 "module_imports.m"
              {
#line 468 "module_imports.m"
                /* direct tailcall eliminated */
#line 468 "module_imports.m"
                {
#line 468 "module_imports.m"
                  MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_23;

#line 468 "module_imports.m"
                  parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 468 "module_imports.m"
                }
#line 468 "module_imports.m"
                continue;
#line 468 "module_imports.m"
              }
#line 450 "module_imports.m"
          }
#line 447 "module_imports.m"
      }
#line 447 "module_imports.m"
      break;
#line 447 "module_imports.m"
    }
#line 441 "module_imports.m"
}

#line 410 "module_imports.m"
static void MR_CALL 
parse_tree__module_imports__get_dependencies_implementation_9_p_0(
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__1_1,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7,
#line 410 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8,
#line 410 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9)
#line 410 "module_imports.m"
{
#line 416 "module_imports.m"
  while (MR_TRUE)
#line 416 "module_imports.m"
    {
#line 416 "module_imports.m"
      /* tailcall optimized into a loop */
#line 416 "module_imports.m"
      {
#line 416 "module_imports.m"
        MR_bool parse_tree__module_imports__succeeded;

#line 416 "module_imports.m"
        if ((parse_tree__module_imports__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "module_imports.m"
          {
#line 416 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9 = parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8;
#line 416 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7 = parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6;
#line 416 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5 = parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4;
#line 416 "module_imports.m"
            *parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3 = parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2;
#line 416 "module_imports.m"
          }
#line 416 "module_imports.m"
        else
#line 419 "module_imports.m"
          {
#line 419 "module_imports.m"
            MR_Word parse_tree__module_imports__Item_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "module_imports.m"
            MR_Word parse_tree__module_imports__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_imports__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "module_imports.m"
            MR_Word parse_tree__module_imports__ItemModuleDefn_28;

#line 420 "module_imports.m"
            parse_tree__module_imports__succeeded = ((MR_tag((MR_Word) parse_tree__module_imports__Item_22)) == (MR_mktag((MR_Integer) 2)));
#line 420 "module_imports.m"
            if (parse_tree__module_imports__succeeded)
#line 420 "module_imports.m"
              {
#line 420 "module_imports.m"
                parse_tree__module_imports__ItemModuleDefn_28 = (MR_Word) MR_body(((MR_Word) parse_tree__module_imports__Item_22), (MR_Integer) 2);
#line 421 "module_imports.m"
                {
#line 421 "module_imports.m"
                  MR_Word parse_tree__module_imports__ModuleDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemModuleDefn_28, (MR_Integer) 0)));
#line 421 "module_imports.m"
                  MR_Word parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemModuleDefn_28, (MR_Integer) 1)));
#line 421 "module_imports.m"
                  MR_Integer parse_tree__module_imports__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__ItemModuleDefn_28, (MR_Integer) 2)));

#line 422 "module_imports.m"
                  parse_tree__module_imports__succeeded = (parse_tree__module_imports__ModuleDefn_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "module_imports.m"
                  if (parse_tree__module_imports__succeeded)
#line 423 "module_imports.m"
                    {
#line 423 "module_imports.m"
                      parse_tree__module_imports__get_dependencies_interface_9_p_0(parse_tree__module_imports__Items_23, parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_0_2, parse_tree__module_imports__STATE_VARIABLE_IntImportDeps_3, parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_0_4, parse_tree__module_imports__STATE_VARIABLE_IntUseDeps_5, parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6, parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_7, parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8, parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_9);
#line 423 "module_imports.m"
                      return;
                    }
#line 425 "module_imports.m"
                  else
#line 432 "module_imports.m"
                    {
#line 432 "module_imports.m"
                      MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_45_45;
#line 432 "module_imports.m"
                      MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_46_46;
#line 428 "module_imports.m"
                      MR_Word parse_tree__module_imports__Modules_32;

#line 426 "module_imports.m"
                      parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__ModuleDefn_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 426 "module_imports.m"
                      if (parse_tree__module_imports__succeeded)
#line 426 "module_imports.m"
                        {
#line 426 "module_imports.m"
                          parse_tree__module_imports__Modules_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 1)));
#line 427 "module_imports.m"
                          {
#line 427 "module_imports.m"
                            mercury__set__insert_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__module_imports__Modules_32, parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6, &parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_45_45);
                          }
#line 427 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_46_46 = parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8;
#line 426 "module_imports.m"
                        }
#line 426 "module_imports.m"
                      else
#line 430 "module_imports.m"
                        {
#line 430 "module_imports.m"
                          MR_Word parse_tree__module_imports__Modules_55;

#line 428 "module_imports.m"
                          parse_tree__module_imports__succeeded = ((((MR_tag((MR_Word) parse_tree__module_imports__ModuleDefn_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 428 "module_imports.m"
                          if (parse_tree__module_imports__succeeded)
#line 428 "module_imports.m"
                            {
#line 428 "module_imports.m"
                              parse_tree__module_imports__Modules_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_imports__ModuleDefn_29, (MR_Integer) 1)));
#line 429 "module_imports.m"
                              {
#line 429 "module_imports.m"
                                mercury__set__insert_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__module_imports__Modules_55, parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8, &parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_46_46);
                              }
#line 428 "module_imports.m"
                            }
#line 428 "module_imports.m"
                          else
#line 429 "module_imports.m"
                            parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_46_46 = parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8;
#line 429 "module_imports.m"
                          parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_45_45 = parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6;
#line 430 "module_imports.m"
                        }
#line 433 "module_imports.m"
                      /* direct tailcall eliminated */
#line 433 "module_imports.m"
                      {
#line 433 "module_imports.m"
                        MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_23;
#line 433 "module_imports.m"
                        MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6 = parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_45_45;
#line 433 "module_imports.m"
                        MR_Word parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8 = parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_46_46;

#line 433 "module_imports.m"
                        parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0_8 = parse_tree__module_imports__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8;
#line 433 "module_imports.m"
                        parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0_6 = parse_tree__module_imports__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6;
#line 433 "module_imports.m"
                        parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 433 "module_imports.m"
                      }
#line 433 "module_imports.m"
                      continue;
#line 432 "module_imports.m"
                    }
#line 421 "module_imports.m"
                }
#line 420 "module_imports.m"
              }
#line 420 "module_imports.m"
            else
#line 437 "module_imports.m"
              {
#line 437 "module_imports.m"
                /* direct tailcall eliminated */
#line 437 "module_imports.m"
                {
#line 437 "module_imports.m"
                  MR_Word parse_tree__module_imports__HeadVar__1__tmp_copy_1 = parse_tree__module_imports__Items_23;

#line 437 "module_imports.m"
                  parse_tree__module_imports__HeadVar__1_1 = parse_tree__module_imports__HeadVar__1__tmp_copy_1;
#line 437 "module_imports.m"
                }
#line 437 "module_imports.m"
                continue;
#line 437 "module_imports.m"
              }
#line 419 "module_imports.m"
          }
#line 416 "module_imports.m"
      }
#line 416 "module_imports.m"
      break;
#line 416 "module_imports.m"
    }
#line 410 "module_imports.m"
}

#line 247 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__get_fact_table_dependencies_2_p_0(
#line 247 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_3,
#line 247 "module_imports.m"
  MR_Word * parse_tree__module_imports__Deps_4)
#line 247 "module_imports.m"
{
#line 781 "module_imports.m"
  {
#line 781 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;

#line 782 "module_imports.m"
    {
#line 782 "module_imports.m"
      parse_tree__module_imports__get_fact_table_dependencies_2_3_p_0(parse_tree__module_imports__Items_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_imports__Deps_4);
#line 782 "module_imports.m"
      return;
    }
#line 781 "module_imports.m"
  }
#line 247 "module_imports.m"
}

#line 498 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__add_implicit_imports_6_p_0_1(
#line 498 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg)
#line 498 "module_imports.m"
{
#line 498 "module_imports.m"
  {
#line 498 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 498 "module_imports.m"
    MR_Box parse_tree__module_imports__closure = parse_tree__module_imports__closure_arg;

#line 498 "module_imports.m"
    {
#line 498 "module_imports.m"
      return parse_tree__module_imports__succeeded = parse_tree__module_imports__IntroducedFrom__pred__add_implicit_imports__498__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__closure, (MR_Integer) 4))));
    }
#line 498 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 498 "module_imports.m"
  }
#line 498 "module_imports.m"
}

#line 241 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__add_implicit_imports_6_p_0(
#line 241 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_7,
#line 241 "module_imports.m"
  MR_Word parse_tree__module_imports__Globals_8,
#line 241 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_ImportDeps_0_22,
#line 241 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_ImportDeps_23,
#line 241 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_0_24,
#line 241 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_UseDeps_25)
#line 241 "module_imports.m"
{
#line 477 "module_imports.m"
  {
#line 477 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__ItemsNeedTabling_11;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__ItemsNeedTablingStatistics_12;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__ItemsNeedSTM_13;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__ItemsNeedException_14;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__Deep_15;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__Target_16;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__HighLevelCode_17;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__Parallel_18;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__UseRegions_19;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__SSDBTraceLevel_20;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__DisableSSDB_21;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__V_29_29;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70;
#line 477 "module_imports.m"
    MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73;

#line 478 "module_imports.m"
    {
#line 478 "module_imports.m"
      parse_tree__module_imports__V_27_27 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 478 "module_imports.m"
    {
#line 478 "module_imports.m"
      MR_Word base;
#line 478 "module_imports.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_ImportDeps_23 = base;
#line 478 "module_imports.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_imports__V_27_27));
#line 478 "module_imports.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_ImportDeps_0_22));
#line 478 "module_imports.m"
    }
#line 479 "module_imports.m"
    {
#line 479 "module_imports.m"
      parse_tree__module_imports__V_29_29 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 479 "module_imports.m"
    {
#line 479 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "module_imports.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28, 0) = ((MR_Box) (parse_tree__module_imports__V_29_29));
#line 479 "module_imports.m"
      MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_0_24));
#line 479 "module_imports.m"
    }
#line 480 "module_imports.m"
    {
#line 480 "module_imports.m"
      parse_tree__module_imports__items_need_imports_9_p_0(parse_tree__module_imports__Items_7, (MR_Integer) 0, &parse_tree__module_imports__ItemsNeedTabling_11, (MR_Integer) 0, &parse_tree__module_imports__ItemsNeedTablingStatistics_12, (MR_Integer) 0, &parse_tree__module_imports__ItemsNeedSTM_13, (MR_Integer) 0, &parse_tree__module_imports__ItemsNeedException_14);
    }
#line 496 "module_imports.m"
    if ((parse_tree__module_imports__ItemsNeedTabling_11 == (MR_Integer) 0))
#line 497 "module_imports.m"
      {
#line 497 "module_imports.m"
        MR_Word parse_tree__module_imports__V_34_34;

#line 498 "module_imports.m"
        {
#line 498 "module_imports.m"
          parse_tree__module_imports__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 498 "module_imports.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_34_34, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_5[0]));
#line 498 "module_imports.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_34_34, 1) = ((MR_Box) (parse_tree__module_imports__add_implicit_imports_6_p_0_1));
#line 498 "module_imports.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 498 "module_imports.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_34_34, 3) = ((MR_Box) (parse_tree__module_imports__ItemsNeedTablingStatistics_12));
#line 498 "module_imports.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_34_34, 4) = ((MR_Box) ((MR_Integer) 0));
#line 498 "module_imports.m"
        }
#line 498 "module_imports.m"
        {
#line 498 "module_imports.m"
          mercury__require__expect_4_p_0(parse_tree__module_imports__V_34_34, (MR_String) "parse_tree.module_imports", (MR_String) "predicate \140parse_tree.module_imports.add_implicit_imports\'/6", (MR_String) "tabling statistics without tabling");
        }
#line 503 "module_imports.m"
        {
#line 503 "module_imports.m"
          parse_tree__module_imports__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_imports__Globals_8, (MR_Integer) 216, (MR_Integer) 1);
        }
#line 505 "module_imports.m"
        if (!(parse_tree__module_imports__succeeded))
#line 505 "module_imports.m"
          {
#line 506 "module_imports.m"
            {
#line 506 "module_imports.m"
              parse_tree__module_imports__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_imports__Globals_8, (MR_Integer) 217, (MR_Integer) 1);
            }
#line 505 "module_imports.m"
            if (!(parse_tree__module_imports__succeeded))
#line 509 "module_imports.m"
              {
#line 509 "module_imports.m"
                {
#line 509 "module_imports.m"
                  parse_tree__module_imports__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_imports__Globals_8, (MR_Integer) 118, (MR_Integer) 1);
                }
#line 509 "module_imports.m"
              }
#line 505 "module_imports.m"
          }
#line 513 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 512 "module_imports.m"
          {
#line 512 "module_imports.m"
            MR_Word parse_tree__module_imports__V_46_46;

#line 512 "module_imports.m"
            {
#line 512 "module_imports.m"
              parse_tree__module_imports__V_46_46 = mdbcomp__prim_data__mercury_table_builtin_module_0_f_0();
            }
#line 512 "module_imports.m"
            {
#line 512 "module_imports.m"
              parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "module_imports.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49, 0) = ((MR_Box) (parse_tree__module_imports__V_46_46));
#line 512 "module_imports.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28));
#line 512 "module_imports.m"
            }
#line 512 "module_imports.m"
          }
#line 513 "module_imports.m"
        else
#line 512 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28;
#line 497 "module_imports.m"
      }
#line 496 "module_imports.m"
    else
#line 488 "module_imports.m"
      {
#line 488 "module_imports.m"
        MR_Word parse_tree__module_imports__STATE_VARIABLE_UseDeps_47_47;
#line 488 "module_imports.m"
        MR_Word parse_tree__module_imports__V_48_48;

#line 489 "module_imports.m"
        {
#line 489 "module_imports.m"
          parse_tree__module_imports__V_48_48 = mdbcomp__prim_data__mercury_table_builtin_module_0_f_0();
        }
#line 489 "module_imports.m"
        {
#line 489 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_47_47, 0) = ((MR_Box) (parse_tree__module_imports__V_48_48));
#line 489 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_47_47, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_28_28));
#line 489 "module_imports.m"
        }
#line 493 "module_imports.m"
        if ((parse_tree__module_imports__ItemsNeedTablingStatistics_12 == (MR_Integer) 0))
#line 494 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_47_47;
#line 493 "module_imports.m"
        else
#line 491 "module_imports.m"
          {
#line 491 "module_imports.m"
            MR_Word parse_tree__module_imports__V_50_50;

#line 492 "module_imports.m"
            {
#line 492 "module_imports.m"
              parse_tree__module_imports__V_50_50 = mdbcomp__prim_data__mercury_table_statistics_module_0_f_0();
            }
#line 492 "module_imports.m"
            {
#line 492 "module_imports.m"
              parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "module_imports.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49, 0) = ((MR_Box) (parse_tree__module_imports__V_50_50));
#line 492 "module_imports.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_47_47));
#line 492 "module_imports.m"
            }
#line 491 "module_imports.m"
          }
#line 488 "module_imports.m"
      }
#line 521 "module_imports.m"
    if ((parse_tree__module_imports__ItemsNeedSTM_13 == (MR_Integer) 0))
#line 522 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49;
#line 521 "module_imports.m"
    else
#line 518 "module_imports.m"
      {
#line 518 "module_imports.m"
        MR_Word parse_tree__module_imports__V_52_52;
#line 518 "module_imports.m"
        MR_Word parse_tree__module_imports__V_53_53;
#line 518 "module_imports.m"
        MR_Word parse_tree__module_imports__V_54_54;
#line 518 "module_imports.m"
        MR_Word parse_tree__module_imports__V_55_55;
#line 518 "module_imports.m"
        MR_Word parse_tree__module_imports__V_56_56;

#line 519 "module_imports.m"
        {
#line 519 "module_imports.m"
          parse_tree__module_imports__V_52_52 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
        }
#line 519 "module_imports.m"
        {
#line 519 "module_imports.m"
          parse_tree__module_imports__V_54_54 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
        }
#line 520 "module_imports.m"
        {
#line 520 "module_imports.m"
          parse_tree__module_imports__V_56_56 = mdbcomp__prim_data__mercury_univ_module_0_f_0();
        }
#line 519 "module_imports.m"
        {
#line 519 "module_imports.m"
          parse_tree__module_imports__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_55_55, 0) = ((MR_Box) (parse_tree__module_imports__V_56_56));
#line 519 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_55_55, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_49_49));
#line 519 "module_imports.m"
        }
#line 519 "module_imports.m"
        {
#line 519 "module_imports.m"
          parse_tree__module_imports__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_53_53, 0) = ((MR_Box) (parse_tree__module_imports__V_54_54));
#line 519 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__V_53_53, 1) = ((MR_Box) (parse_tree__module_imports__V_55_55));
#line 519 "module_imports.m"
        }
#line 519 "module_imports.m"
        {
#line 519 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51, 0) = ((MR_Box) (parse_tree__module_imports__V_52_52));
#line 519 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51, 1) = ((MR_Box) (parse_tree__module_imports__V_53_53));
#line 519 "module_imports.m"
        }
#line 518 "module_imports.m"
      }
#line 527 "module_imports.m"
    if ((parse_tree__module_imports__ItemsNeedException_14 == (MR_Integer) 0))
#line 528 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51;
#line 527 "module_imports.m"
    else
#line 525 "module_imports.m"
      {
#line 525 "module_imports.m"
        MR_Word parse_tree__module_imports__V_58_58;

#line 526 "module_imports.m"
        {
#line 526 "module_imports.m"
          parse_tree__module_imports__V_58_58 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
        }
#line 526 "module_imports.m"
        {
#line 526 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57, 0) = ((MR_Box) (parse_tree__module_imports__V_58_58));
#line 526 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_51_51));
#line 526 "module_imports.m"
        }
#line 525 "module_imports.m"
      }
#line 530 "module_imports.m"
    {
#line 530 "module_imports.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_imports__Globals_8, (MR_Integer) 191, &parse_tree__module_imports__Deep_15);
    }
#line 534 "module_imports.m"
    if ((parse_tree__module_imports__Deep_15 == (MR_Integer) 0))
#line 535 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57;
#line 534 "module_imports.m"
    else
#line 532 "module_imports.m"
      {
#line 532 "module_imports.m"
        MR_Word parse_tree__module_imports__V_61_61;

#line 533 "module_imports.m"
        {
#line 533 "module_imports.m"
          parse_tree__module_imports__V_61_61 = mdbcomp__prim_data__mercury_profiling_builtin_module_0_f_0();
        }
#line 533 "module_imports.m"
        {
#line 533 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60, 0) = ((MR_Box) (parse_tree__module_imports__V_61_61));
#line 533 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_57_57));
#line 533 "module_imports.m"
        }
#line 532 "module_imports.m"
      }
#line 539 "module_imports.m"
    {
#line 539 "module_imports.m"
      parse_tree__module_imports__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_imports__Globals_8, (MR_Integer) 208, (MR_Integer) 1);
    }
#line 541 "module_imports.m"
    if (!(parse_tree__module_imports__succeeded))
#line 542 "module_imports.m"
      {
#line 542 "module_imports.m"
        {
#line 542 "module_imports.m"
          parse_tree__module_imports__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__module_imports__Globals_8, (MR_Integer) 209, (MR_Integer) 1);
        }
#line 542 "module_imports.m"
      }
#line 547 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 546 "module_imports.m"
      {
#line 546 "module_imports.m"
        MR_Word parse_tree__module_imports__V_67_67;

#line 546 "module_imports.m"
        {
#line 546 "module_imports.m"
          parse_tree__module_imports__V_67_67 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 546 "module_imports.m"
        {
#line 546 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66, 0) = ((MR_Box) (parse_tree__module_imports__V_67_67));
#line 546 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60));
#line 546 "module_imports.m"
        }
#line 546 "module_imports.m"
      }
#line 547 "module_imports.m"
    else
#line 546 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_60_60;
#line 550 "module_imports.m"
    {
#line 550 "module_imports.m"
      libs__globals__get_target_2_p_0(parse_tree__module_imports__Globals_8, &parse_tree__module_imports__Target_16);
    }
#line 551 "module_imports.m"
    {
#line 551 "module_imports.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_imports__Globals_8, (MR_Integer) 250, &parse_tree__module_imports__HighLevelCode_17);
    }
#line 552 "module_imports.m"
    {
#line 552 "module_imports.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_imports__Globals_8, (MR_Integer) 212, &parse_tree__module_imports__Parallel_18);
    }
#line 554 "module_imports.m"
    parse_tree__module_imports__succeeded = (parse_tree__module_imports__Target_16 == (MR_Integer) 0);
#line 554 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 554 "module_imports.m"
      {
#line 555 "module_imports.m"
        parse_tree__module_imports__succeeded = (parse_tree__module_imports__HighLevelCode_17 == (MR_Integer) 0);
#line 554 "module_imports.m"
        if (parse_tree__module_imports__succeeded)
#line 556 "module_imports.m"
          parse_tree__module_imports__succeeded = (parse_tree__module_imports__Parallel_18 == (MR_Integer) 1);
#line 554 "module_imports.m"
      }
#line 559 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 558 "module_imports.m"
      {
#line 558 "module_imports.m"
        MR_Word parse_tree__module_imports__V_71_71;

#line 558 "module_imports.m"
        {
#line 558 "module_imports.m"
          parse_tree__module_imports__V_71_71 = mdbcomp__prim_data__mercury_par_builtin_module_0_f_0();
        }
#line 558 "module_imports.m"
        {
#line 558 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70, 0) = ((MR_Box) (parse_tree__module_imports__V_71_71));
#line 558 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66));
#line 558 "module_imports.m"
        }
#line 558 "module_imports.m"
      }
#line 559 "module_imports.m"
    else
#line 558 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_66_66;
#line 562 "module_imports.m"
    {
#line 562 "module_imports.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_imports__Globals_8, (MR_Integer) 225, &parse_tree__module_imports__UseRegions_19);
    }
#line 566 "module_imports.m"
    if ((parse_tree__module_imports__UseRegions_19 == (MR_Integer) 0))
#line 567 "module_imports.m"
      parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70;
#line 566 "module_imports.m"
    else
#line 564 "module_imports.m"
      {
#line 564 "module_imports.m"
        MR_Word parse_tree__module_imports__V_74_74;

#line 565 "module_imports.m"
        {
#line 565 "module_imports.m"
          parse_tree__module_imports__V_74_74 = mdbcomp__prim_data__mercury_region_builtin_module_0_f_0();
        }
#line 565 "module_imports.m"
        {
#line 565 "module_imports.m"
          parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73, 0) = ((MR_Box) (parse_tree__module_imports__V_74_74));
#line 565 "module_imports.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_70_70));
#line 565 "module_imports.m"
        }
#line 564 "module_imports.m"
      }
#line 569 "module_imports.m"
    {
#line 569 "module_imports.m"
      libs__globals__get_ssdb_trace_level_2_p_0(parse_tree__module_imports__Globals_8, &parse_tree__module_imports__SSDBTraceLevel_20);
    }
#line 570 "module_imports.m"
    {
#line 570 "module_imports.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__module_imports__Globals_8, (MR_Integer) 131, &parse_tree__module_imports__DisableSSDB_21);
    }
#line 573 "module_imports.m"
    if ((parse_tree__module_imports__SSDBTraceLevel_20 == (MR_Integer) 2))
#line 573 "module_imports.m"
      parse_tree__module_imports__succeeded = MR_TRUE;
#line 573 "module_imports.m"
    else
#line 573 "module_imports.m"
      if ((parse_tree__module_imports__SSDBTraceLevel_20 == (MR_Integer) 1))
#line 572 "module_imports.m"
        parse_tree__module_imports__succeeded = MR_TRUE;
#line 573 "module_imports.m"
      else
#line 573 "module_imports.m"
        parse_tree__module_imports__succeeded = MR_FALSE;
#line 574 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 575 "module_imports.m"
      parse_tree__module_imports__succeeded = (parse_tree__module_imports__DisableSSDB_21 == (MR_Integer) 0);
#line 578 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 577 "module_imports.m"
      {
#line 577 "module_imports.m"
        MR_Word parse_tree__module_imports__V_77_77;

#line 577 "module_imports.m"
        {
#line 577 "module_imports.m"
          parse_tree__module_imports__V_77_77 = mdbcomp__prim_data__mercury_ssdb_builtin_module_0_f_0();
        }
#line 577 "module_imports.m"
        {
#line 577 "module_imports.m"
          MR_Word base;
#line 577 "module_imports.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "module_imports.m"
          *parse_tree__module_imports__STATE_VARIABLE_UseDeps_25 = base;
#line 577 "module_imports.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_imports__V_77_77));
#line 577 "module_imports.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73));
#line 577 "module_imports.m"
        }
#line 577 "module_imports.m"
      }
#line 578 "module_imports.m"
    else
#line 577 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_UseDeps_25 = parse_tree__module_imports__STATE_VARIABLE_UseDeps_73_73;
#line 477 "module_imports.m"
  }
#line 241 "module_imports.m"
}

#line 238 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__get_implicit_dependencies_4_p_0(
#line 238 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_5,
#line 238 "module_imports.m"
  MR_Word parse_tree__module_imports__Globals_6,
#line 238 "module_imports.m"
  MR_Word * parse_tree__module_imports__ImportDeps_7,
#line 238 "module_imports.m"
  MR_Word * parse_tree__module_imports__UseDeps_8)
#line 238 "module_imports.m"
{
#line 474 "module_imports.m"
  {
#line 474 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;

#line 475 "module_imports.m"
    {
#line 475 "module_imports.m"
      parse_tree__module_imports__add_implicit_imports_6_p_0(parse_tree__module_imports__Items_5, parse_tree__module_imports__Globals_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_imports__ImportDeps_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__module_imports__UseDeps_8);
#line 475 "module_imports.m"
      return;
    }
#line 474 "module_imports.m"
  }
#line 238 "module_imports.m"
}

#line 225 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__get_dependencies_int_imp_5_p_0(
#line 225 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_6,
#line 225 "module_imports.m"
  MR_Word * parse_tree__module_imports__IntImportDeps_7,
#line 225 "module_imports.m"
  MR_Word * parse_tree__module_imports__IntUseDeps_8,
#line 225 "module_imports.m"
  MR_Word * parse_tree__module_imports__ImpImportDeps_9,
#line 225 "module_imports.m"
  MR_Word * parse_tree__module_imports__ImpUseDeps_10)
#line 225 "module_imports.m"
{
#line 401 "module_imports.m"
  {
#line 401 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__IntImportDepsSet_11;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__IntUseDepsSet_12;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__ImpImportDepsSet_13;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__ImpUseDepsSet_14;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17;
#line 401 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18;

#line 402 "module_imports.m"
    {
#line 402 "module_imports.m"
      parse_tree__module_imports__V_15_15 = mercury__set__init_0_f_0(parse_tree__module_imports__TypeCtorInfo_19_19);
    }
#line 402 "module_imports.m"
    {
#line 402 "module_imports.m"
      parse_tree__module_imports__V_16_16 = mercury__set__init_0_f_0(parse_tree__module_imports__TypeCtorInfo_19_19);
    }
#line 402 "module_imports.m"
    {
#line 402 "module_imports.m"
      parse_tree__module_imports__V_17_17 = mercury__set__init_0_f_0(parse_tree__module_imports__TypeCtorInfo_19_19);
    }
#line 402 "module_imports.m"
    {
#line 402 "module_imports.m"
      parse_tree__module_imports__V_18_18 = mercury__set__init_0_f_0(parse_tree__module_imports__TypeCtorInfo_19_19);
    }
#line 402 "module_imports.m"
    {
#line 402 "module_imports.m"
      parse_tree__module_imports__get_dependencies_implementation_9_p_0(parse_tree__module_imports__Items_6, parse_tree__module_imports__V_15_15, &parse_tree__module_imports__IntImportDepsSet_11, parse_tree__module_imports__V_16_16, &parse_tree__module_imports__IntUseDepsSet_12, parse_tree__module_imports__V_17_17, &parse_tree__module_imports__ImpImportDepsSet_13, parse_tree__module_imports__V_18_18, &parse_tree__module_imports__ImpUseDepsSet_14);
    }
#line 405 "module_imports.m"
    {
#line 405 "module_imports.m"
      *parse_tree__module_imports__IntImportDeps_7 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_imports__TypeCtorInfo_19_19, parse_tree__module_imports__IntImportDepsSet_11);
    }
#line 406 "module_imports.m"
    {
#line 406 "module_imports.m"
      *parse_tree__module_imports__ImpImportDeps_9 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_imports__TypeCtorInfo_19_19, parse_tree__module_imports__ImpImportDepsSet_13);
    }
#line 407 "module_imports.m"
    {
#line 407 "module_imports.m"
      *parse_tree__module_imports__IntUseDeps_8 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_imports__TypeCtorInfo_19_19, parse_tree__module_imports__IntUseDepsSet_12);
    }
#line 408 "module_imports.m"
    {
#line 408 "module_imports.m"
      *parse_tree__module_imports__ImpUseDeps_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_imports__TypeCtorInfo_19_19, parse_tree__module_imports__ImpUseDepsSet_14);
    }
#line 401 "module_imports.m"
  }
#line 225 "module_imports.m"
}

#line 201 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__get_dependencies_3_p_0(
#line 201 "module_imports.m"
  MR_Word parse_tree__module_imports__Items_4,
#line 201 "module_imports.m"
  MR_Word * parse_tree__module_imports__ImportDeps_5,
#line 201 "module_imports.m"
  MR_Word * parse_tree__module_imports__UseDeps_6)
#line 201 "module_imports.m"
{
#line 394 "module_imports.m"
  {
#line 394 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 394 "module_imports.m"
    MR_Word parse_tree__module_imports__TypeCtorInfo_11_11;
#line 394 "module_imports.m"
    MR_Word parse_tree__module_imports__IntImportDeps_7;
#line 394 "module_imports.m"
    MR_Word parse_tree__module_imports__IntUseDeps_8;
#line 394 "module_imports.m"
    MR_Word parse_tree__module_imports__ImpImportDeps_9;
#line 394 "module_imports.m"
    MR_Word parse_tree__module_imports__ImpUseDeps_10;

#line 395 "module_imports.m"
    {
#line 395 "module_imports.m"
      parse_tree__module_imports__get_dependencies_int_imp_5_p_0(parse_tree__module_imports__Items_4, &parse_tree__module_imports__IntImportDeps_7, &parse_tree__module_imports__IntUseDeps_8, &parse_tree__module_imports__ImpImportDeps_9, &parse_tree__module_imports__ImpUseDeps_10);
    }
#line 5209 "parse_tree.module_imports.c"
    parse_tree__module_imports__TypeCtorInfo_11_11 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 397 "module_imports.m"
    {
#line 397 "module_imports.m"
      *parse_tree__module_imports__ImportDeps_5 = mercury__list__f_43_43_2_f_0(parse_tree__module_imports__TypeCtorInfo_11_11, parse_tree__module_imports__IntImportDeps_7, parse_tree__module_imports__ImpImportDeps_9);
    }
#line 398 "module_imports.m"
    {
#line 398 "module_imports.m"
      *parse_tree__module_imports__UseDeps_6 = mercury__list__f_43_43_2_f_0(parse_tree__module_imports__TypeCtorInfo_11_11, parse_tree__module_imports__IntUseDeps_8, parse_tree__module_imports__ImpUseDeps_10);
    }
#line 394 "module_imports.m"
  }
#line 201 "module_imports.m"
}

#line 362 "module_imports.m"
static MR_bool MR_CALL 
parse_tree__module_imports__init_dependencies_8_p_0_2(
#line 362 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg,
#line 362 "module_imports.m"
  MR_Box parse_tree__module_imports__wrapper_arg_1)
#line 362 "module_imports.m"
{
#line 362 "module_imports.m"
  {
#line 362 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 362 "module_imports.m"
    MR_Box parse_tree__module_imports__closure = parse_tree__module_imports__closure_arg;

#line 362 "module_imports.m"
    {
#line 362 "module_imports.m"
      return parse_tree__module_imports__succeeded = parse_tree__module_imports__IntroducedFrom__pred__init_dependencies__362__1_1_p_0(((MR_Word) parse_tree__module_imports__wrapper_arg_1));
    }
#line 362 "module_imports.m"
    return parse_tree__module_imports__succeeded;
#line 362 "module_imports.m"
  }
#line 362 "module_imports.m"
}

#line 351 "module_imports.m"
static MR_Box MR_CALL 
parse_tree__module_imports__init_dependencies_8_p_0_1(
#line 351 "module_imports.m"
  MR_Box parse_tree__module_imports__closure_arg,
#line 351 "module_imports.m"
  MR_Box parse_tree__module_imports__wrapper_arg_1)
#line 351 "module_imports.m"
{
#line 351 "module_imports.m"
  {
#line 351 "module_imports.m"
    MR_Box parse_tree__module_imports__wrapper_arg_2;
#line 351 "module_imports.m"
    MR_Box parse_tree__module_imports__closure = parse_tree__module_imports__closure_arg;
#line 351 "module_imports.m"
    MR_Word parse_tree__module_imports__conv0_HeadVar__3_66;

#line 351 "module_imports.m"
    {
#line 351 "module_imports.m"
      parse_tree__module_imports__conv0_HeadVar__3_66 = parse_tree__module_imports__IntroducedFrom__func__init_dependencies__351__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_imports__wrapper_arg_1));
    }
#line 351 "module_imports.m"
    parse_tree__module_imports__wrapper_arg_2 = ((MR_Box) (parse_tree__module_imports__conv0_HeadVar__3_66));
#line 351 "module_imports.m"
    return parse_tree__module_imports__wrapper_arg_2;
#line 351 "module_imports.m"
  }
#line 351 "module_imports.m"
}

#line 184 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__init_dependencies_8_p_0(
#line 184 "module_imports.m"
  MR_String parse_tree__module_imports__FileName_9,
#line 184 "module_imports.m"
  MR_Word parse_tree__module_imports__SourceFileModuleName_10,
#line 184 "module_imports.m"
  MR_Word parse_tree__module_imports__NestedModuleNames_11,
#line 184 "module_imports.m"
  MR_Word parse_tree__module_imports__Specs_12,
#line 184 "module_imports.m"
  MR_Word parse_tree__module_imports__Error_13,
#line 184 "module_imports.m"
  MR_Word parse_tree__module_imports__Globals_14,
#line 184 "module_imports.m"
  MR_Word parse_tree__module_imports__HeadVar__7_7,
#line 184 "module_imports.m"
  MR_Word * parse_tree__module_imports__ModuleImports_17)
#line 184 "module_imports.m"
{
#line 307 "module_imports.m"
  {
#line 307 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__TypeCtorInfo_79_79;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__TypeCtorInfo_82_82;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__TypeCtorInfo_11_93;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__7_7, (MR_Integer) 0)));
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__HeadVar__7_7, (MR_Integer) 1)));
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ParentDeps_18;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImplImportDeps0_19;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImplUseDeps0_20;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImplImportDeps_21;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImplUseDeps_22;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImplementationDeps_23;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceItems_24;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceImportDeps0_25;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceUseDeps0_26;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceImportDeps_27;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceUseDeps_28;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceDeps_29;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__IncludeDeps_31;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__InterfaceIncludeDeps_32;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__NestedDeps_33;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__FactTableDeps_34;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__LangSet_35;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ForeignImports0_36;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsPragmaExport_37;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ContainsForeignCode_38;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__SelfImportLangs_39;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ForeignSelfImports_40;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ForeignImports_42;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__HasMain_62;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__V_64_64;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__V_74_74;
#line 307 "module_imports.m"
    MR_String parse_tree__module_imports__V_76_76;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__IntImportDeps_89;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__IntUseDeps_90;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImpImportDeps_91;
#line 307 "module_imports.m"
    MR_Word parse_tree__module_imports__ImpUseDeps_92;
#line 378 "module_imports.m"
    MR_Word parse_tree__module_imports___FirstItemDeclaringMain_61;
#line 378 "module_imports.m"
    MR_Box parse_tree__module_imports__conv1__FirstItemDeclaringMain_61;

#line 308 "module_imports.m"
    {
#line 308 "module_imports.m"
      parse_tree__module_imports__ParentDeps_18 = mdbcomp__prim_data__get_ancestors_1_f_0(parse_tree__module_imports__ModuleName_15);
    }
#line 395 "module_imports.m"
    {
#line 395 "module_imports.m"
      parse_tree__module_imports__get_dependencies_int_imp_5_p_0(parse_tree__module_imports__Items_16, &parse_tree__module_imports__IntImportDeps_89, &parse_tree__module_imports__IntUseDeps_90, &parse_tree__module_imports__ImpImportDeps_91, &parse_tree__module_imports__ImpUseDeps_92);
    }
#line 5398 "parse_tree.module_imports.c"
    parse_tree__module_imports__TypeCtorInfo_11_93 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 397 "module_imports.m"
    {
#line 397 "module_imports.m"
      parse_tree__module_imports__ImplImportDeps0_19 = mercury__list__f_43_43_2_f_0(parse_tree__module_imports__TypeCtorInfo_11_93, parse_tree__module_imports__IntImportDeps_89, parse_tree__module_imports__ImpImportDeps_91);
    }
#line 398 "module_imports.m"
    {
#line 398 "module_imports.m"
      parse_tree__module_imports__ImplUseDeps0_20 = mercury__list__f_43_43_2_f_0(parse_tree__module_imports__TypeCtorInfo_11_93, parse_tree__module_imports__IntUseDeps_90, parse_tree__module_imports__ImpUseDeps_92);
    }
#line 311 "module_imports.m"
    {
#line 311 "module_imports.m"
      parse_tree__module_imports__add_implicit_imports_6_p_0(parse_tree__module_imports__Items_16, parse_tree__module_imports__Globals_14, parse_tree__module_imports__ImplImportDeps0_19, &parse_tree__module_imports__ImplImportDeps_21, parse_tree__module_imports__ImplUseDeps0_20, &parse_tree__module_imports__ImplUseDeps_22);
    }
#line 5415 "parse_tree.module_imports.c"
    parse_tree__module_imports__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 314 "module_imports.m"
    {
#line 314 "module_imports.m"
      mercury__list__append_3_p_1(parse_tree__module_imports__TypeCtorInfo_79_79, parse_tree__module_imports__ImplImportDeps_21, parse_tree__module_imports__ImplUseDeps_22, &parse_tree__module_imports__ImplementationDeps_23);
    }
#line 316 "module_imports.m"
    {
#line 316 "module_imports.m"
      parse_tree__modules__get_interface_4_p_0(parse_tree__module_imports__ModuleName_15, (MR_Integer) 0, parse_tree__module_imports__Items_16, &parse_tree__module_imports__InterfaceItems_24);
    }
#line 317 "module_imports.m"
    {
#line 317 "module_imports.m"
      parse_tree__module_imports__get_dependencies_3_p_0(parse_tree__module_imports__InterfaceItems_24, &parse_tree__module_imports__InterfaceImportDeps0_25, &parse_tree__module_imports__InterfaceUseDeps0_26);
    }
#line 319 "module_imports.m"
    {
#line 319 "module_imports.m"
      parse_tree__module_imports__add_implicit_imports_6_p_0(parse_tree__module_imports__InterfaceItems_24, parse_tree__module_imports__Globals_14, parse_tree__module_imports__InterfaceImportDeps0_25, &parse_tree__module_imports__InterfaceImportDeps_27, parse_tree__module_imports__InterfaceUseDeps0_26, &parse_tree__module_imports__InterfaceUseDeps_28);
    }
#line 322 "module_imports.m"
    {
#line 322 "module_imports.m"
      mercury__list__append_3_p_1(parse_tree__module_imports__TypeCtorInfo_79_79, parse_tree__module_imports__InterfaceImportDeps_27, parse_tree__module_imports__InterfaceUseDeps_28, &parse_tree__module_imports__InterfaceDeps_29);
    }
#line 327 "module_imports.m"
    {
#line 327 "module_imports.m"
      parse_tree__modules__get_children_2_p_0(parse_tree__module_imports__Items_16, &parse_tree__module_imports__IncludeDeps_31);
    }
#line 328 "module_imports.m"
    {
#line 328 "module_imports.m"
      parse_tree__modules__get_children_2_p_0(parse_tree__module_imports__InterfaceItems_24, &parse_tree__module_imports__InterfaceIncludeDeps_32);
    }
#line 330 "module_imports.m"
    {
#line 330 "module_imports.m"
      parse_tree__module_imports__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__module_imports__ModuleName_15, parse_tree__module_imports__SourceFileModuleName_10);
    }
#line 332 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 331 "module_imports.m"
      {
#line 331 "module_imports.m"
        mercury__list__delete_all_3_p_1(parse_tree__module_imports__TypeCtorInfo_79_79, parse_tree__module_imports__NestedModuleNames_11, ((MR_Box) (parse_tree__module_imports__ModuleName_15)), &parse_tree__module_imports__NestedDeps_33);
      }
#line 332 "module_imports.m"
    else
#line 333 "module_imports.m"
      parse_tree__module_imports__NestedDeps_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 782 "module_imports.m"
    {
#line 782 "module_imports.m"
      parse_tree__module_imports__get_fact_table_dependencies_2_3_p_0(parse_tree__module_imports__Items_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_imports__FactTableDeps_34);
    }
#line 339 "module_imports.m"
    {
#line 339 "module_imports.m"
      parse_tree__prog_item__get_item_list_foreign_code_5_p_0(parse_tree__module_imports__Globals_14, parse_tree__module_imports__Items_16, &parse_tree__module_imports__LangSet_35, &parse_tree__module_imports__ForeignImports0_36, &parse_tree__module_imports__ContainsPragmaExport_37);
    }
#line 341 "module_imports.m"
    {
#line 341 "module_imports.m"
      parse_tree__module_imports__succeeded = mercury__set__empty_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__module_imports__LangSet_35);
    }
#line 343 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 342 "module_imports.m"
      parse_tree__module_imports__ContainsForeignCode_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "module_imports.m"
    else
#line 344 "module_imports.m"
      {
#line 344 "module_imports.m"
        parse_tree__module_imports__ContainsForeignCode_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "module_imports.m"
        MR_hl_field(MR_mktag(1), parse_tree__module_imports__ContainsForeignCode_38, 0) = ((MR_Box) (parse_tree__module_imports__LangSet_35));
#line 344 "module_imports.m"
      }
#line 350 "module_imports.m"
    {
#line 350 "module_imports.m"
      parse_tree__modules__get_foreign_self_imports_2_p_0(parse_tree__module_imports__Items_16, &parse_tree__module_imports__SelfImportLangs_39);
    }
#line 5502 "parse_tree.module_imports.c"
    parse_tree__module_imports__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 351 "module_imports.m"
    {
#line 351 "module_imports.m"
      parse_tree__module_imports__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_64_64, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]));
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_64_64, 1) = ((MR_Box) (parse_tree__module_imports__init_dependencies_8_p_0_1));
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 351 "module_imports.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_imports__V_64_64, 3) = ((MR_Box) (parse_tree__module_imports__ModuleName_15));
#line 351 "module_imports.m"
    }
#line 351 "module_imports.m"
    {
#line 351 "module_imports.m"
      parse_tree__module_imports__ForeignSelfImports_40 = mercury__list__map_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__module_imports__TypeCtorInfo_82_82, parse_tree__module_imports__V_64_64, parse_tree__module_imports__SelfImportLangs_39);
    }
#line 355 "module_imports.m"
    {
#line 355 "module_imports.m"
      parse_tree__module_imports__ForeignImports_42 = mercury__list__f_43_43_2_f_0(parse_tree__module_imports__TypeCtorInfo_82_82, parse_tree__module_imports__ForeignSelfImports_40, parse_tree__module_imports__ForeignImports0_36);
    }
#line 378 "module_imports.m"
    {
#line 378 "module_imports.m"
      parse_tree__module_imports__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__module_imports_scalar_common_1[2], parse_tree__module_imports__Items_16, &parse_tree__module_imports__conv1__FirstItemDeclaringMain_61);
    }
#line 378 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 378 "module_imports.m"
      {
#line 378 "module_imports.m"
        parse_tree__module_imports___FirstItemDeclaringMain_61 = ((MR_Word) parse_tree__module_imports__conv1__FirstItemDeclaringMain_61);
#line 378 "module_imports.m"
        parse_tree__module_imports__succeeded = MR_TRUE;
#line 378 "module_imports.m"
      }
#line 381 "module_imports.m"
    if (parse_tree__module_imports__succeeded)
#line 380 "module_imports.m"
      parse_tree__module_imports__HasMain_62 = (MR_Integer) 0;
#line 381 "module_imports.m"
    else
#line 382 "module_imports.m"
      parse_tree__module_imports__HasMain_62 = (MR_Integer) 1;
#line 385 "module_imports.m"
    {
#line 385 "module_imports.m"
      parse_tree__module_imports__V_74_74 = mercury__cord__empty_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
    }
#line 385 "module_imports.m"
    {
#line 385 "module_imports.m"
      parse_tree__module_imports__V_76_76 = mercury__dir__this_directory_0_f_0();
    }
#line 385 "module_imports.m"
    {
#line 385 "module_imports.m"
      MR_Word base;
#line 385 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 385 "module_imports.m"
      *parse_tree__module_imports__ModuleImports_17 = base;
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__FileName_9));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__SourceFileModuleName_10));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__ModuleName_15));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__ParentDeps_18));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__InterfaceDeps_29));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__ImplementationDeps_23));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__IncludeDeps_31));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__InterfaceIncludeDeps_32));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__NestedDeps_33));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__FactTableDeps_34));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__ContainsForeignCode_38));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__ForeignImports_42));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__ContainsPragmaExport_37));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_74_74));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__Specs_12));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__Error_13));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__HasMain_62));
#line 385 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_76_76));
#line 385 "module_imports.m"
    }
#line 307 "module_imports.m"
  }
#line 184 "module_imports.m"
}

#line 176 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_get_results_4_p_0(
#line 176 "module_imports.m"
  MR_Word parse_tree__module_imports__Module_5,
#line 176 "module_imports.m"
  MR_Word * parse_tree__module_imports__Items_6,
#line 176 "module_imports.m"
  MR_Word * parse_tree__module_imports__Specs_7,
#line 176 "module_imports.m"
  MR_Word * parse_tree__module_imports__Error_8)
#line 176 "module_imports.m"
{
#line 299 "module_imports.m"
  {
#line 299 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 299 "module_imports.m"
    MR_Word parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
#line 300 "module_imports.m"
    MR_String parse_tree__module_imports__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
#line 300 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
#line 300 "module_imports.m"
    MR_String parse_tree__module_imports__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
#line 301 "module_imports.m"
    MR_String parse_tree__module_imports__V_29_29;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_30_30;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_31_31;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_32_32;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_33_33;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_34_34;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_35_35;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_36_36;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_37_37;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_38_38;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_39_39;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_40_40;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_41_41;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_42_42;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_43_43;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_45_45;
#line 301 "module_imports.m"
    MR_Word parse_tree__module_imports__V_46_46;
#line 301 "module_imports.m"
    MR_String parse_tree__module_imports__V_47_47;

#line 300 "module_imports.m"
    {
#line 300 "module_imports.m"
      *parse_tree__module_imports__Items_6 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__module_imports__V_9_9);
    }
#line 301 "module_imports.m"
    parse_tree__module_imports__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 0)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 1)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 2)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 3)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 4)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 5)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 6)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 7)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 8)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 9)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 10)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 11)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 12)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 13)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 14)));
#line 301 "module_imports.m"
    *parse_tree__module_imports__Specs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 15)));
#line 301 "module_imports.m"
    *parse_tree__module_imports__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 16)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 17)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 18)));
#line 301 "module_imports.m"
    parse_tree__module_imports__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_5, (MR_Integer) 19)));
#line 299 "module_imports.m"
  }
#line 176 "module_imports.m"
}

#line 167 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_add_items_3_p_0(
#line 167 "module_imports.m"
  MR_Word parse_tree__module_imports__NewItems_4,
#line 167 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_8,
#line 167 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_9)
#line 167 "module_imports.m"
{
#line 283 "module_imports.m"
  {
#line 283 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 283 "module_imports.m"
    MR_Word parse_tree__module_imports__Items0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 14)));
#line 283 "module_imports.m"
    MR_Word parse_tree__module_imports__Items_7;
#line 284 "module_imports.m"
    MR_String parse_tree__module_imports__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 0)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 1)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 2)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 3)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 4)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 5)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 6)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 7)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 8)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 9)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 10)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 11)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 12)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 13)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 15)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 16)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 17)));
#line 284 "module_imports.m"
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 18)));
#line 284 "module_imports.m"
    MR_String parse_tree__module_imports__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 19)));
#line 286 "module_imports.m"
    MR_String parse_tree__module_imports__V_30_30;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_31_31;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_32_32;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_33_33;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_34_34;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_35_35;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_36_36;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_37_37;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_38_38;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_39_39;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_40_40;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_41_41;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_42_42;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_43_43;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_45_45;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_46_46;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_47_47;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_48_48;
#line 286 "module_imports.m"
    MR_String parse_tree__module_imports__V_49_49;
#line 286 "module_imports.m"
    MR_Word parse_tree__module_imports__V_44_44;

#line 285 "module_imports.m"
    {
#line 285 "module_imports.m"
      parse_tree__module_imports__Items_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__module_imports__Items0_6, parse_tree__module_imports__NewItems_4);
    }
#line 286 "module_imports.m"
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 0)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 1)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 2)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 3)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 4)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 5)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 6)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 7)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 8)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 9)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 10)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 11)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 12)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 13)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 14)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 15)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 16)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 17)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 18)));
#line 286 "module_imports.m"
    parse_tree__module_imports__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 19)));
#line 286 "module_imports.m"
    {
#line 286 "module_imports.m"
      MR_Word base;
#line 286 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 286 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_9 = base;
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_30_30));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_31_31));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_32_32));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_33_33));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_34_34));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_35_35));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_36_36));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_37_37));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_38_38));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_39_39));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_40_40));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_41_41));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_42_42));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_43_43));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__Items_7));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_45_45));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_46_46));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_47_47));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_48_48));
#line 286 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_49_49));
#line 286 "module_imports.m"
    }
#line 283 "module_imports.m"
  }
#line 167 "module_imports.m"
}

#line 162 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(
#line 162 "module_imports.m"
  MR_Word parse_tree__module_imports__InterfaceError_4,
#line 162 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_6,
#line 162 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_7)
#line 162 "module_imports.m"
{
#line 290 "module_imports.m"
  {
#line 290 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;

#line 290 "module_imports.m"
    if ((parse_tree__module_imports__InterfaceError_4 == (MR_Integer) 0))
#line 290 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_7 = parse_tree__module_imports__STATE_VARIABLE_Module_0_6;
#line 290 "module_imports.m"
    else
#line 294 "module_imports.m"
      {
#line 296 "module_imports.m"
        MR_String parse_tree__module_imports__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 0)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 1)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 2)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 3)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 4)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 5)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 6)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 7)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 8)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 9)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 10)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 11)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 12)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 13)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 14)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 15)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 17)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 18)));
#line 296 "module_imports.m"
        MR_String parse_tree__module_imports__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 19)));
#line 296 "module_imports.m"
        MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 16)));

#line 296 "module_imports.m"
        {
#line 296 "module_imports.m"
          MR_Word base;
#line 296 "module_imports.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 296 "module_imports.m"
          *parse_tree__module_imports__STATE_VARIABLE_Module_7 = base;
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_10_10));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_11_11));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_12_12));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_13_13));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_14_14));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_15_15));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_16_16));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_17_17));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_18_18));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_19_19));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_20_20));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_21_21));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_22_22));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_23_23));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_24_24));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_25_25));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) ((MR_Integer) 1));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_27_27));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_28_28));
#line 296 "module_imports.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_29_29));
#line 296 "module_imports.m"
        }
#line 294 "module_imports.m"
      }
#line 290 "module_imports.m"
  }
#line 162 "module_imports.m"
}

#line 159 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_3_p_0(
#line 159 "module_imports.m"
  MR_Word parse_tree__module_imports__NewSpecs_4,
#line 159 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_8,
#line 159 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_9)
#line 159 "module_imports.m"
{
#line 278 "module_imports.m"
  {
#line 278 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 278 "module_imports.m"
    MR_Word parse_tree__module_imports__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 15)));
#line 278 "module_imports.m"
    MR_Word parse_tree__module_imports__Specs_7;
#line 279 "module_imports.m"
    MR_String parse_tree__module_imports__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 0)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 1)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 2)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 3)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 4)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 5)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 6)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 7)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 8)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 9)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 10)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 11)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 12)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 13)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 14)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 16)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 17)));
#line 279 "module_imports.m"
    MR_Word parse_tree__module_imports__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 18)));
#line 279 "module_imports.m"
    MR_String parse_tree__module_imports__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 19)));
#line 281 "module_imports.m"
    MR_String parse_tree__module_imports__V_30_30;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_31_31;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_32_32;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_33_33;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_34_34;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_35_35;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_36_36;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_37_37;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_38_38;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_39_39;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_40_40;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_41_41;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_42_42;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_43_43;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_44_44;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_46_46;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_47_47;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_48_48;
#line 281 "module_imports.m"
    MR_String parse_tree__module_imports__V_49_49;
#line 281 "module_imports.m"
    MR_Word parse_tree__module_imports__V_45_45;

#line 280 "module_imports.m"
    {
#line 280 "module_imports.m"
      parse_tree__module_imports__Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__module_imports__NewSpecs_4, parse_tree__module_imports__Specs0_6);
    }
#line 281 "module_imports.m"
    parse_tree__module_imports__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 0)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 1)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 2)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 3)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 4)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 5)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 6)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 7)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 8)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 9)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 10)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 11)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 12)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 13)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 14)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 15)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 16)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 17)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 18)));
#line 281 "module_imports.m"
    parse_tree__module_imports__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_8, (MR_Integer) 19)));
#line 281 "module_imports.m"
    {
#line 281 "module_imports.m"
      MR_Word base;
#line 281 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 281 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_9 = base;
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_30_30));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_31_31));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_32_32));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_33_33));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_34_34));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_35_35));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_36_36));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_37_37));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_38_38));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_39_39));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_40_40));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_41_41));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_42_42));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_43_43));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_44_44));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__Specs_7));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_46_46));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_47_47));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_48_48));
#line 281 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_49_49));
#line 281 "module_imports.m"
    }
#line 278 "module_imports.m"
  }
#line 159 "module_imports.m"
}

#line 156 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_set_error_3_p_0(
#line 156 "module_imports.m"
  MR_Word parse_tree__module_imports__Error_4,
#line 156 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_6,
#line 156 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_7)
#line 156 "module_imports.m"
{
#line 276 "module_imports.m"
  {
#line 276 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 276 "module_imports.m"
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 0)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 1)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 2)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 3)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 4)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 5)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 6)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 7)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 8)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 9)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 10)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 11)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 12)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 13)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 14)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 15)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 17)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 18)));
#line 276 "module_imports.m"
    MR_String parse_tree__module_imports__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 19)));
#line 276 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 16)));

#line 276 "module_imports.m"
    {
#line 276 "module_imports.m"
      MR_Word base;
#line 276 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 276 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_7 = base;
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_14_14));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_15_15));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__Error_4));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
#line 276 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
#line 276 "module_imports.m"
    }
#line 276 "module_imports.m"
  }
#line 156 "module_imports.m"
}

#line 153 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(
#line 153 "module_imports.m"
  MR_Word parse_tree__module_imports__IndirectDeps_4,
#line 153 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_6,
#line 153 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_7)
#line 153 "module_imports.m"
{
#line 274 "module_imports.m"
  {
#line 274 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 274 "module_imports.m"
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 0)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 1)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 2)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 3)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 4)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 5)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 7)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 8)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 9)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 10)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 11)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 12)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 13)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 14)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 15)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 16)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 17)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 18)));
#line 274 "module_imports.m"
    MR_String parse_tree__module_imports__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 19)));
#line 274 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 6)));

#line 274 "module_imports.m"
    {
#line 274 "module_imports.m"
      MR_Word base;
#line 274 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 274 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_7 = base;
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_14_14));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__IndirectDeps_4));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
#line 274 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
#line 274 "module_imports.m"
    }
#line 274 "module_imports.m"
  }
#line 153 "module_imports.m"
}

#line 148 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_set_impl_deps_3_p_0(
#line 148 "module_imports.m"
  MR_Word parse_tree__module_imports__ImplDeps_4,
#line 148 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_6,
#line 148 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_7)
#line 148 "module_imports.m"
{
#line 272 "module_imports.m"
  {
#line 272 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 272 "module_imports.m"
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 0)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 1)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 2)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 3)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 4)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 6)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 7)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 8)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 9)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 10)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 11)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 12)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 13)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 14)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 15)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 16)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 17)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 18)));
#line 272 "module_imports.m"
    MR_String parse_tree__module_imports__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 19)));
#line 272 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 5)));

#line 272 "module_imports.m"
    {
#line 272 "module_imports.m"
      MR_Word base;
#line 272 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 272 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_7 = base;
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__V_13_13));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__ImplDeps_4));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_15_15));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
#line 272 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
#line 272 "module_imports.m"
    }
#line 272 "module_imports.m"
  }
#line 148 "module_imports.m"
}

#line 143 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(
#line 143 "module_imports.m"
  MR_Word parse_tree__module_imports__IntDeps_4,
#line 143 "module_imports.m"
  MR_Word parse_tree__module_imports__STATE_VARIABLE_Module_0_6,
#line 143 "module_imports.m"
  MR_Word * parse_tree__module_imports__STATE_VARIABLE_Module_7)
#line 143 "module_imports.m"
{
#line 270 "module_imports.m"
  {
#line 270 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 270 "module_imports.m"
    MR_String parse_tree__module_imports__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 0)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 1)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 2)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 3)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 5)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 6)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 7)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 8)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 9)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 10)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 11)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 12)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 13)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 14)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 15)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 16)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 17)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 18)));
#line 270 "module_imports.m"
    MR_String parse_tree__module_imports__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 19)));
#line 270 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__STATE_VARIABLE_Module_0_6, (MR_Integer) 4)));

#line 270 "module_imports.m"
    {
#line 270 "module_imports.m"
      MR_Word base;
#line 270 "module_imports.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 270 "module_imports.m"
      *parse_tree__module_imports__STATE_VARIABLE_Module_7 = base;
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_imports__V_9_9));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_imports__V_10_10));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_imports__V_11_11));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_imports__V_12_12));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_imports__IntDeps_4));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_imports__V_14_14));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_imports__V_15_15));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_imports__V_16_16));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_imports__V_17_17));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_imports__V_18_18));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_imports__V_19_19));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_imports__V_20_20));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__module_imports__V_21_21));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__module_imports__V_22_22));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__module_imports__V_23_23));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__module_imports__V_24_24));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__module_imports__V_25_25));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__module_imports__V_26_26));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__module_imports__V_27_27));
#line 270 "module_imports.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__module_imports__V_28_28));
#line 270 "module_imports.m"
    }
#line 270 "module_imports.m"
  }
#line 143 "module_imports.m"
}

#line 138 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_get_impl_deps_2_p_0(
#line 138 "module_imports.m"
  MR_Word parse_tree__module_imports__Module_3,
#line 138 "module_imports.m"
  MR_Word * parse_tree__module_imports__HeadVar__2_2)
#line 138 "module_imports.m"
{
#line 267 "module_imports.m"
  {
#line 267 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 267 "module_imports.m"
    MR_String parse_tree__module_imports__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_9_9;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20;
#line 267 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21;
#line 267 "module_imports.m"
    MR_String parse_tree__module_imports__V_22_22;

#line 267 "module_imports.m"
    *parse_tree__module_imports__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
#line 267 "module_imports.m"
    parse_tree__module_imports__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
#line 267 "module_imports.m"
  }
#line 138 "module_imports.m"
}

#line 136 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(
#line 136 "module_imports.m"
  MR_Word parse_tree__module_imports__Module_3,
#line 136 "module_imports.m"
  MR_Word * parse_tree__module_imports__HeadVar__2_2)
#line 136 "module_imports.m"
{
#line 266 "module_imports.m"
  {
#line 266 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 266 "module_imports.m"
    MR_String parse_tree__module_imports__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_6_6;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_7_7;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_8_8;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_9_9;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20;
#line 266 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21;
#line 266 "module_imports.m"
    MR_String parse_tree__module_imports__V_22_22;

#line 266 "module_imports.m"
    *parse_tree__module_imports__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
#line 266 "module_imports.m"
    parse_tree__module_imports__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
#line 266 "module_imports.m"
  }
#line 136 "module_imports.m"
}

#line 134 "module_imports.m"
void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(
#line 134 "module_imports.m"
  MR_Word parse_tree__module_imports__Module_3,
#line 134 "module_imports.m"
  MR_String * parse_tree__module_imports__HeadVar__2_2)
#line 134 "module_imports.m"
{
#line 265 "module_imports.m"
  {
#line 265 "module_imports.m"
    MR_bool parse_tree__module_imports__succeeded;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_4_4;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_5_5;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_6_6;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_7_7;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_8_8;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_9_9;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_10_10;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_11_11;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_12_12;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_13_13;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_14_14;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_15_15;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_16_16;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_17_17;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_18_18;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_19_19;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_20_20;
#line 265 "module_imports.m"
    MR_Word parse_tree__module_imports__V_21_21;
#line 265 "module_imports.m"
    MR_String parse_tree__module_imports__V_22_22;

#line 265 "module_imports.m"
    *parse_tree__module_imports__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 0)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 1)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 2)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 3)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 4)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 5)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 6)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 7)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 8)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 9)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 10)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 11)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 12)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 13)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 14)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 15)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 16)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 17)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 18)));
#line 265 "module_imports.m"
    parse_tree__module_imports__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_imports__Module_3, (MR_Integer) 19)));
#line 265 "module_imports.m"
  }
#line 134 "module_imports.m"
}

void mercury__parse_tree__module_imports__init(void)
{
}

void mercury__parse_tree__module_imports__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamps_0);
}

void mercury__parse_tree__module_imports__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_imports. */
