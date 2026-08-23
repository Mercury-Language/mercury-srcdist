/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2026-08-23
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


// :- module parse_tree.deps_map.
// :- implementation.

/*
INIT mercury__parse_tree__deps_map__init
ENDINIT
*/

#include "parse_tree.deps_map.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.warn_unread_modules.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2];

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[2];

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_file_or_module_0_0[1];

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_file_or_module_0_1[1];

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_1;

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_file_or_module_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_file_or_module_0_1[1];

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_file_or_module_0[2];

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_file_or_module_0[2];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_file_or_module_0[2];

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2];

static MR_Word MR_CALL 
parse_tree__deps_map__IntroducedFrom__func__update_read_unread_modules__284__1_1_f_0(
  MR_Word LambdaHeadVar__1_25);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_DepsMap_0_9,
  MR_Word * STATE_VARIABLE_DepsMap_10);

static void MR_CALL 
parse_tree__deps_map__add_fim_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word FIMSpec_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_12,
  MR_Word * STATE_VARIABLE_ModuleExpCs_13);

static void MR_CALL 
parse_tree__deps_map__add_avail_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_13,
  MR_Word * STATE_VARIABLE_ModuleExpCs_14);

static void MR_CALL 
parse_tree__deps_map__add_public_include_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_12,
  MR_Word * STATE_VARIABLE_ModuleExpCs_13);

static void MR_CALL 
parse_tree__deps_map__add_module_name_and_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word Context_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_11,
  MR_Word * STATE_VARIABLE_ModuleExpCs_12);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word Globals_20,
  MR_Word Search_21,
  MR_Word CmdLineModuleName_22,
  MR_Word STATE_VARIABLE_SeenModules_0_33,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_34,
  MR_Word STATE_VARIABLE_ReadModules_0_35,
  MR_Word * STATE_VARIABLE_ReadModules_36,
  MR_Word STATE_VARIABLE_UnreadModules_0_37,
  MR_Word * STATE_VARIABLE_UnreadModules_38,
  MR_Word STATE_VARIABLE_DepsMap_0_39,
  MR_Word * STATE_VARIABLE_DepsMap_40,
  MR_Word STATE_VARIABLE_ErrSpecs_0_41,
  MR_Word * STATE_VARIABLE_ErrSpecs_42,
  MR_Word STATE_VARIABLE_WarnSpecs_0_43,
  MR_Word * STATE_VARIABLE_WarnSpecs_44);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0(
  MR_Word ProgressStream_22,
  MR_Word Globals_23,
  MR_Word Search_24,
  MR_Word CmdLineModuleName_25,
  MR_Word Module_26,
  MR_Word ExpectationContexts_27,
  MR_Word SeenModules0_28,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_50,
  MR_Word * STATE_VARIABLE_ModuleExpCs_51,
  MR_Word STATE_VARIABLE_ReadModules_0_52,
  MR_Word * STATE_VARIABLE_ReadModules_53,
  MR_Word STATE_VARIABLE_UnreadModules_0_54,
  MR_Word * STATE_VARIABLE_UnreadModules_55,
  MR_Word STATE_VARIABLE_DepsMap_0_56,
  MR_Word * STATE_VARIABLE_DepsMap_57,
  MR_Word STATE_VARIABLE_ErrSpecs_0_58,
  MR_Word * STATE_VARIABLE_ErrSpecs_59,
  MR_Word STATE_VARIABLE_WarnSpecs_0_60,
  MR_Word * STATE_VARIABLE_WarnSpecs_61);

static MR_Box MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Module_10,
  MR_Word MaybeDeps_11,
  MR_Word NewBurdenedModules_12,
  MR_Word STATE_VARIABLE_ReadModules_0_20,
  MR_Word * STATE_VARIABLE_ReadModules_21,
  MR_Word STATE_VARIABLE_UnreadModules_0_22,
  MR_Word * STATE_VARIABLE_UnreadModules_23);

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word Search_19,
  MR_Word CmdLineModuleName_20,
  MR_Word ModuleName_21,
  MR_Word ExpectationContexts_22,
  MR_Word * MaybeDeps_23,
  MR_Word * NewBurdenedModules_24,
  MR_Word STATE_VARIABLE_DepsMap_0_32,
  MR_Word * STATE_VARIABLE_DepsMap_33,
  MR_Word STATE_VARIABLE_ErrSpecs_0_34,
  MR_Word * STATE_VARIABLE_ErrSpecs_35,
  MR_Word STATE_VARIABLE_WarnSpecs_0_36,
  MR_Word * STATE_VARIABLE_WarnSpecs_37);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____file_or_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____file_or_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[5][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_6[4][8];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__deps_map__lookup_or_find_dependency_info_for_module_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0])),
    ((MR_Box) (parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_6[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__list__ti_list_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)
};

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 = {
  (MR_String) "deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0,
  NULL,
  parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1] = { &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 };

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1] = { &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 };

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps",
  { parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0 },
  { parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____expectation_contexts_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____expectation_contexts_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "expectation_contexts",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__deps_map__list__ti_list_1term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__deps_map__list__ti_list_1term_context__type_ctor_info_term_context_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____expectation_contexts_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____expectation_contexts_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "expectation_contexts_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_file_or_module_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_0 = {
  (MR_String) "fm_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__deps_map__parse_tree__deps_map__field_types_file_or_module_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_file_or_module_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_1 = {
  (MR_String) "fm_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__deps_map__parse_tree__deps_map__field_types_file_or_module_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_file_or_module_0_0[1] = { &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_0 };

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_file_or_module_0_1[1] = { &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_1 };

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_file_or_module_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_file_or_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_file_or_module_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_file_or_module_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_file_or_module_0_1
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_file_or_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__deps_map____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____file_or_module_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "file_or_module",
  { parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_file_or_module_0 },
  { parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_file_or_module_0,

};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
  (MR_String) "not_yet_processed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
  (MR_String) "already_processed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____have_processed_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____have_processed_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "have_processed",
  { parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0 },
  { parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0,

};

static MR_Word MR_CALL 
parse_tree__deps_map__IntroducedFrom__func__update_read_unread_modules__284__1_1_f_0(
  MR_Word LambdaHeadVar__1_25)
{
  MR_Word LambdaHeadVar__2_26;
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_25, 1))));

  LambdaHeadVar__2_26 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
  return LambdaHeadVar__2_26;
}

void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____file_or_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____file_or_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__module_baggage____Compare____burdened_module_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__module_baggage____Unify____burdened_module_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_DepsMap_0_9,
  MR_Word * STATE_VARIABLE_DepsMap_10)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_4, 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 0))));
  MR_Word Deps_8;

  {
    Deps_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Deps_8, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Deps_8, 1) = ((MR_Box) (BurdenedModule_4));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Deps_8)), STATE_VARIABLE_DepsMap_0_9, STATE_VARIABLE_DepsMap_10);
}

static void MR_CALL 
parse_tree__deps_map__add_fim_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word FIMSpec_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_12,
  MR_Word * STATE_VARIABLE_ModuleExpCs_13)
{
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, FIMSpec_7, 1))));

  parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_8, ModuleName_11, STATE_VARIABLE_ModuleExpCs_0_12, STATE_VARIABLE_ModuleExpCs_13);
}

static void MR_CALL 
parse_tree__deps_map__add_avail_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_13,
  MR_Word * STATE_VARIABLE_ModuleExpCs_14)
{
  if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportUse_10 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, 0))));

    switch (MR_tag((MR_Word) SectionImportUse_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, SectionImportUse_10, 0))));

          parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_25, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_26 = ((MR_Word) ((MR_hl_field(1, SectionImportUse_10, 0))));

          parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_26, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_20 = ((MR_Word) ((MR_hl_field(2, SectionImportUse_10, 0))));

          parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_20, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, SectionImportUse_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_24 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_10, 1))));

              parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_24, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_21 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_10, 1))));
              MR_Word ImpContext_22 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_10, 2))));
              MR_Word STATE_VARIABLE_ModuleExpCs_2_23;

              parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, IntContext_21, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, &STATE_VARIABLE_ModuleExpCs_2_23);
              parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, ImpContext_22, ModuleName_7, STATE_VARIABLE_ModuleExpCs_2_23, STATE_VARIABLE_ModuleExpCs_14);
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word MaybeSectionImportUse_12 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, 1))));

    if ((MaybeSectionImportUse_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_16;

      Var_16 = mercury__term_context__dummy_context_0_f_0();
      parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Var_16, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
    }
    else
    {
      MR_Word SectionImportUse_19 = ((MR_Word) ((MR_hl_field(1, MaybeSectionImportUse_12, 0))));

      switch (MR_tag((MR_Word) SectionImportUse_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, SectionImportUse_19, 0))));

            parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_32, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_33 = ((MR_Word) ((MR_hl_field(1, SectionImportUse_19, 0))));

            parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_33, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Context_27 = ((MR_Word) ((MR_hl_field(2, SectionImportUse_19, 0))));

            parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_27, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, SectionImportUse_19, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_31 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_19, 1))));

                parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_31, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_28 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_19, 1))));
                MR_Word ImpContext_29 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_19, 2))));
                MR_Word STATE_VARIABLE_ModuleExpCs_2_30;

                parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, IntContext_28, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, &STATE_VARIABLE_ModuleExpCs_2_30);
                parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, ImpContext_29, ModuleName_7, STATE_VARIABLE_ModuleExpCs_2_30, STATE_VARIABLE_ModuleExpCs_14);
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__add_public_include_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_12,
  MR_Word * STATE_VARIABLE_ModuleExpCs_13)
{
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, 0))) & (MR_Integer) 1);
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, InclInfo_8, 1))));

  switch (Section_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleExpCs_13 = STATE_VARIABLE_ModuleExpCs_0_12;
      break;
    case (MR_Integer) 0:
      parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_11, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_12, STATE_VARIABLE_ModuleExpCs_13);
      break;
  }
}

static void MR_CALL 
parse_tree__deps_map__add_module_name_and_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word Context_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_11,
  MR_Word * STATE_VARIABLE_ModuleExpCs_12)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SeenModules0_6, ((MR_Box) (ModuleName_8)));
  if (succeeded)
    *STATE_VARIABLE_ModuleExpCs_12 = STATE_VARIABLE_ModuleExpCs_0_11;
  else
  {
    MR_Word OldContexts_10;
    MR_Box conv0_OldContexts_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), STATE_VARIABLE_ModuleExpCs_0_11, ((MR_Box) (ModuleName_8)), &conv0_OldContexts_10);
    if (succeeded)
    {
      OldContexts_10 = ((MR_Word) (conv0_OldContexts_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Context_7));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (OldContexts_10));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_8)), ((MR_Box) (Var_13)), STATE_VARIABLE_ModuleExpCs_0_11, STATE_VARIABLE_ModuleExpCs_12);
    }
    else
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = ((MR_Box) (Context_7));
        MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_8)), ((MR_Box) (Var_15)), STATE_VARIABLE_ModuleExpCs_0_11, STATE_VARIABLE_ModuleExpCs_12);
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DepsMap_10;

  parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DepsMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DepsMap_10));
}

void MR_CALL 
parse_tree__deps_map__generate_deps_map_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word FileOrModule_14,
  MR_Word * ModuleName_15,
  MR_Word * STATE_VARIABLE_DepsMap_34,
  MR_Word * STATE_VARIABLE_ErrSpecs_35,
  MR_Word * STATE_VARIABLE_WarnSpecs_36)
{
  MR_Word SeenModules0_22;
  MR_Word ModuleExpectationContexts0_23;
  MR_Word ReadModules0_24;
  MR_Word UnreadModules0_25;
  MR_Word ReadModules_26;
  MR_Word UnreadModules1_27;
  MR_Word UnreadModules_28;
  MR_Word STATE_VARIABLE_DepsMap_1_39;
  MR_Word STATE_VARIABLE_ErrSpecs_1_40;
  MR_Word STATE_VARIABLE_WarnSpecs_1_41;
  MR_Word STATE_VARIABLE_WarnSpecs_3_49;

  if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
  {
    MR_String FileName_20 = ((MR_String) ((MR_hl_field(0, FileOrModule_14, 0))));
    MR_String FileNameDotM_80;
    MR_Word HaveReadModuleSrc_81;
    MR_Word BurdenedModules_89;
    MR_Word DepsMap0_91;
    MR_Box conv1_STATE_VARIABLE_DepsMap_1_39;

    FileNameDotM_80 = mercury__string__f_43_43_2_f_0(FileName_20, (MR_String) ".m");
    parse_tree__read_modules__read_module_src_from_file_10_p_0(ProgressStream_11, Globals_12, FileName_20, FileNameDotM_80, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (&parse_tree__deps_map_scalar_common_3[0]), &HaveReadModuleSrc_81);
    if (((MR_tag((MR_Word) HaveReadModuleSrc_81)) == (MR_Integer) 0))
    {
      MR_Word ParseTreeSrc_83 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_81, 1))));
      MR_Word Source_84 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_81, 2))));
      MR_Word MaybeTimestamp_85 = ((MR_Word) ((MR_hl_field(1, Source_84, 0))));
      MR_Word ReadModuleErrors_86 = ((MR_Word) ((MR_hl_field(1, Source_84, 1))));

      *ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_83, 0))));
      parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_8_p_0(Globals_12, FileNameDotM_80, ReadModuleErrors_86, MaybeTimestamp_85, ParseTreeSrc_83, &STATE_VARIABLE_ErrSpecs_1_40, &STATE_VARIABLE_WarnSpecs_1_41, &BurdenedModules_89);
    }
    else
    {
      MR_Word ReadModuleErrors_98 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_81, 1))));

      parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_20, FileNameDotM_80, ModuleName_15);
      parse_tree__parse_error__get_read_module_specs_3_p_0(ReadModuleErrors_98, &STATE_VARIABLE_ErrSpecs_1_40, &STATE_VARIABLE_WarnSpecs_1_41);
      BurdenedModules_89 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &DepsMap0_91);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[4]), BurdenedModules_89, ((MR_Box) (DepsMap0_91)), &conv1_STATE_VARIABLE_DepsMap_1_39);
    STATE_VARIABLE_DepsMap_1_39 = ((MR_Word) (conv1_STATE_VARIABLE_DepsMap_1_39));
  }
  else
  {
    *ModuleName_15 = ((MR_Word) ((MR_hl_field(1, FileOrModule_14, 0))));
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), &STATE_VARIABLE_DepsMap_1_39);
    STATE_VARIABLE_ErrSpecs_1_40 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_WarnSpecs_1_41 = (MR_Word) ((MR_Unsigned) 0U);
  }
  SeenModules0_22 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  ModuleExpectationContexts0_23 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (*ModuleName_15)), ((MR_Box) ((MR_Unsigned) 0U)));
  ReadModules0_24 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  UnreadModules0_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__deps_map__generate_deps_map_loop_18_p_0(ProgressStream_11, Globals_12, Search_13, *ModuleName_15, SeenModules0_22, ModuleExpectationContexts0_23, ReadModules0_24, &ReadModules_26, UnreadModules0_25, &UnreadModules1_27, STATE_VARIABLE_DepsMap_1_39, STATE_VARIABLE_DepsMap_34, STATE_VARIABLE_ErrSpecs_1_40, STATE_VARIABLE_ErrSpecs_35, STATE_VARIABLE_WarnSpecs_1_41, &STATE_VARIABLE_WarnSpecs_3_49);
  mercury__set_tree234__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnreadModules1_27, ReadModules_26, &UnreadModules_28);
  parse_tree__warn_unread_modules__warn_about_any_unread_modules_with_read_ancestors_4_p_0(ReadModules_26, UnreadModules_28, STATE_VARIABLE_WarnSpecs_3_49, STATE_VARIABLE_WarnSpecs_36);
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word Globals_20,
  MR_Word Search_21,
  MR_Word CmdLineModuleName_22,
  MR_Word STATE_VARIABLE_SeenModules_0_33,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_34,
  MR_Word STATE_VARIABLE_ReadModules_0_35,
  MR_Word * STATE_VARIABLE_ReadModules_36,
  MR_Word STATE_VARIABLE_UnreadModules_0_37,
  MR_Word * STATE_VARIABLE_UnreadModules_38,
  MR_Word STATE_VARIABLE_DepsMap_0_39,
  MR_Word * STATE_VARIABLE_DepsMap_40,
  MR_Word STATE_VARIABLE_ErrSpecs_0_41,
  MR_Word * STATE_VARIABLE_ErrSpecs_42,
  MR_Word STATE_VARIABLE_WarnSpecs_0_43,
  MR_Word * STATE_VARIABLE_WarnSpecs_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Module_31;
    MR_Word ExpectationContexts_32;
    MR_Word STATE_VARIABLE_ModuleExpCs_1_47;
    MR_Box conv1_Module_31;
    MR_Box conv0_ExpectationContexts_32;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__remove_smallest_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), &conv1_Module_31, &conv0_ExpectationContexts_32, STATE_VARIABLE_ModuleExpCs_0_34, &STATE_VARIABLE_ModuleExpCs_1_47);
    if (succeeded)
    {
      Module_31 = ((MR_Word) (conv1_Module_31));
      ExpectationContexts_32 = ((MR_Word) (conv0_ExpectationContexts_32));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_SeenModules_1_48;
      MR_Word STATE_VARIABLE_ModuleExpCs_2_49;
      MR_Word STATE_VARIABLE_ReadModules_1_50;
      MR_Word STATE_VARIABLE_UnreadModules_1_51;
      MR_Word STATE_VARIABLE_DepsMap_1_52;
      MR_Word STATE_VARIABLE_ErrSpecs_1_53;
      MR_Word STATE_VARIABLE_WarnSpecs_1_54;
      MR_Word next_value_of_STATE_VARIABLE_SeenModules_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ModuleExpCs_0_34;
      MR_Word next_value_of_STATE_VARIABLE_ReadModules_0_35;
      MR_Word next_value_of_STATE_VARIABLE_UnreadModules_0_37;
      MR_Word next_value_of_STATE_VARIABLE_DepsMap_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_41;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_43;

      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Module_31)), STATE_VARIABLE_SeenModules_0_33, &STATE_VARIABLE_SeenModules_1_48);
      parse_tree__deps_map__generate_deps_map_step_21_p_0(ProgressStream_19, Globals_20, Search_21, CmdLineModuleName_22, Module_31, ExpectationContexts_32, STATE_VARIABLE_SeenModules_1_48, STATE_VARIABLE_ModuleExpCs_1_47, &STATE_VARIABLE_ModuleExpCs_2_49, STATE_VARIABLE_ReadModules_0_35, &STATE_VARIABLE_ReadModules_1_50, STATE_VARIABLE_UnreadModules_0_37, &STATE_VARIABLE_UnreadModules_1_51, STATE_VARIABLE_DepsMap_0_39, &STATE_VARIABLE_DepsMap_1_52, STATE_VARIABLE_ErrSpecs_0_41, &STATE_VARIABLE_ErrSpecs_1_53, STATE_VARIABLE_WarnSpecs_0_43, &STATE_VARIABLE_WarnSpecs_1_54);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_SeenModules_0_33 = STATE_VARIABLE_SeenModules_1_48;
      next_value_of_STATE_VARIABLE_ModuleExpCs_0_34 = STATE_VARIABLE_ModuleExpCs_2_49;
      next_value_of_STATE_VARIABLE_ReadModules_0_35 = STATE_VARIABLE_ReadModules_1_50;
      next_value_of_STATE_VARIABLE_UnreadModules_0_37 = STATE_VARIABLE_UnreadModules_1_51;
      next_value_of_STATE_VARIABLE_DepsMap_0_39 = STATE_VARIABLE_DepsMap_1_52;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_41 = STATE_VARIABLE_ErrSpecs_1_53;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_43 = STATE_VARIABLE_WarnSpecs_1_54;
      STATE_VARIABLE_SeenModules_0_33 = next_value_of_STATE_VARIABLE_SeenModules_0_33;
      STATE_VARIABLE_ModuleExpCs_0_34 = next_value_of_STATE_VARIABLE_ModuleExpCs_0_34;
      STATE_VARIABLE_ReadModules_0_35 = next_value_of_STATE_VARIABLE_ReadModules_0_35;
      STATE_VARIABLE_UnreadModules_0_37 = next_value_of_STATE_VARIABLE_UnreadModules_0_37;
      STATE_VARIABLE_DepsMap_0_39 = next_value_of_STATE_VARIABLE_DepsMap_0_39;
      STATE_VARIABLE_ErrSpecs_0_41 = next_value_of_STATE_VARIABLE_ErrSpecs_0_41;
      STATE_VARIABLE_WarnSpecs_0_43 = next_value_of_STATE_VARIABLE_WarnSpecs_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_WarnSpecs_44 = STATE_VARIABLE_WarnSpecs_0_43;
      *STATE_VARIABLE_ErrSpecs_42 = STATE_VARIABLE_ErrSpecs_0_41;
      *STATE_VARIABLE_DepsMap_40 = STATE_VARIABLE_DepsMap_0_39;
      *STATE_VARIABLE_UnreadModules_38 = STATE_VARIABLE_UnreadModules_0_37;
      *STATE_VARIABLE_ReadModules_36 = STATE_VARIABLE_ReadModules_0_35;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ModuleExpCs_14;

  parse_tree__deps_map__add_avail_module_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_ModuleExpCs_14);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ModuleExpCs_14));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ModuleExpCs_13;

  parse_tree__deps_map__add_public_include_module_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_ModuleExpCs_13);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleExpCs_13));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleExpCs_13;

  parse_tree__deps_map__add_fim_module_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ModuleExpCs_13);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleExpCs_13));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleExpCs_12;

  parse_tree__deps_map__add_module_name_and_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleExpCs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleExpCs_12));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_21_p_0(
  MR_Word ProgressStream_22,
  MR_Word Globals_23,
  MR_Word Search_24,
  MR_Word CmdLineModuleName_25,
  MR_Word Module_26,
  MR_Word ExpectationContexts_27,
  MR_Word SeenModules0_28,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_50,
  MR_Word * STATE_VARIABLE_ModuleExpCs_51,
  MR_Word STATE_VARIABLE_ReadModules_0_52,
  MR_Word * STATE_VARIABLE_ReadModules_53,
  MR_Word STATE_VARIABLE_UnreadModules_0_54,
  MR_Word * STATE_VARIABLE_UnreadModules_55,
  MR_Word STATE_VARIABLE_DepsMap_0_56,
  MR_Word * STATE_VARIABLE_DepsMap_57,
  MR_Word STATE_VARIABLE_ErrSpecs_0_58,
  MR_Word * STATE_VARIABLE_ErrSpecs_59,
  MR_Word STATE_VARIABLE_WarnSpecs_0_60,
  MR_Word * STATE_VARIABLE_WarnSpecs_61)
{
  MR_bool succeeded;
  MR_Word MaybeDeps0_36;
  MR_Word NewBurdenedModules_37;
  MR_Word STATE_VARIABLE_DepsMap_1_64;
  MR_Word BurdenedModule_40;
  MR_Word Deps0_38;
  MR_Word Done0_39;

  parse_tree__deps_map__lookup_or_find_dependency_info_for_module_16_p_0(ProgressStream_22, Globals_23, Search_24, CmdLineModuleName_25, Module_26, ExpectationContexts_27, &MaybeDeps0_36, &NewBurdenedModules_37, STATE_VARIABLE_DepsMap_0_56, &STATE_VARIABLE_DepsMap_1_64, STATE_VARIABLE_ErrSpecs_0_58, STATE_VARIABLE_ErrSpecs_59, STATE_VARIABLE_WarnSpecs_0_60, STATE_VARIABLE_WarnSpecs_61);
  parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(Module_26, MaybeDeps0_36, NewBurdenedModules_37, STATE_VARIABLE_ReadModules_0_52, STATE_VARIABLE_ReadModules_53, STATE_VARIABLE_UnreadModules_0_54, STATE_VARIABLE_UnreadModules_55);
  succeeded = (MaybeDeps0_36 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Deps0_38 = ((MR_Word) ((MR_hl_field(1, MaybeDeps0_36, 0))));
    Done0_39 = ((MR_Unsigned) ((MR_hl_field(0, Deps0_38, 0))) & (MR_Integer) 1);
    BurdenedModule_40 = ((MR_Word) ((MR_hl_field(0, Deps0_38, 1))));
    succeeded = (Done0_39 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Deps_41;
    MR_Word ParseTreeModuleSrc_42;
    MR_Word ModuleName_43;
    MR_Word AncestorModuleNames_44;
    MR_Word ModuleNameContext_45;
    MR_Word IntFIMs_46;
    MR_Word ImpFIMs_47;
    MR_Word InclMap_48;
    MR_Word ImportUseMap_49;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_ModuleExpCs_1_73;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_ModuleExpCs_2_75;
    MR_Word STATE_VARIABLE_ModuleExpCs_3_77;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_ModuleExpCs_4_79;
    MR_Word Var_80;
    MR_Box conv1_STATE_VARIABLE_ModuleExpCs_1_73;
    MR_Box conv3_STATE_VARIABLE_ModuleExpCs_2_75;
    MR_Box conv4_STATE_VARIABLE_ModuleExpCs_3_77;
    MR_Box conv6_STATE_VARIABLE_ModuleExpCs_4_79;
    MR_Box conv8_STATE_VARIABLE_ModuleExpCs_51;

    {
      Deps_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Deps_41, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Deps_41, 1) = ((MR_Box) (BurdenedModule_40));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (Module_26)), ((MR_Box) (Deps_41)), STATE_VARIABLE_DepsMap_1_64, STATE_VARIABLE_DepsMap_57);
    ParseTreeModuleSrc_42 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_40, 1))));
    ModuleName_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_42, 0))));
    AncestorModuleNames_44 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_43);
    ModuleNameContext_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_42, 1))));
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[0]));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_21_p_0_1));
      MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_72, 3) = ((MR_Box) (SeenModules0_28));
      MR_hl_field(0, Var_72, 4) = ((MR_Box) (ModuleNameContext_45));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), Var_72, AncestorModuleNames_44, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_0_50)), &conv1_STATE_VARIABLE_ModuleExpCs_1_73);
    STATE_VARIABLE_ModuleExpCs_1_73 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleExpCs_1_73));
    IntFIMs_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_42, 4))));
    ImpFIMs_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_42, 5))));
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[1]));
      MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_21_p_0_2));
      MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_74, 3) = ((MR_Box) (SeenModules0_28));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), Var_74, IntFIMs_46, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_1_73)), &conv3_STATE_VARIABLE_ModuleExpCs_2_75);
    STATE_VARIABLE_ModuleExpCs_2_75 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleExpCs_2_75));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), Var_74, ImpFIMs_47, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_2_75)), &conv4_STATE_VARIABLE_ModuleExpCs_3_77);
    STATE_VARIABLE_ModuleExpCs_3_77 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleExpCs_3_77));
    InclMap_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_42, 2))));
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[2]));
      MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_21_p_0_3));
      MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_78, 3) = ((MR_Box) (SeenModules0_28));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), Var_78, InclMap_48, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_3_77)), &conv6_STATE_VARIABLE_ModuleExpCs_4_79);
    STATE_VARIABLE_ModuleExpCs_4_79 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleExpCs_4_79));
    ImportUseMap_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_42, 3))));
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[3]));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_21_p_0_4));
      MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_80, 3) = ((MR_Box) (SeenModules0_28));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), Var_80, ImportUseMap_49, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_4_79)), &conv8_STATE_VARIABLE_ModuleExpCs_51);
    *STATE_VARIABLE_ModuleExpCs_51 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleExpCs_51));
  }
  else
  {
    *STATE_VARIABLE_DepsMap_57 = STATE_VARIABLE_DepsMap_1_64;
    *STATE_VARIABLE_ModuleExpCs_51 = STATE_VARIABLE_ModuleExpCs_0_50;
  }
}

static MR_Box MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_26;

  conv0_LambdaHeadVar__2_26 = parse_tree__deps_map__IntroducedFrom__func__update_read_unread_modules__284__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_26));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Module_10,
  MR_Word MaybeDeps_11,
  MR_Word NewBurdenedModules_12,
  MR_Word STATE_VARIABLE_ReadModules_0_20,
  MR_Word * STATE_VARIABLE_ReadModules_21,
  MR_Word STATE_VARIABLE_UnreadModules_0_22,
  MR_Word * STATE_VARIABLE_UnreadModules_23)
{
  if ((MaybeDeps_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Module_10)), STATE_VARIABLE_UnreadModules_0_22, STATE_VARIABLE_UnreadModules_23);
    *STATE_VARIABLE_ReadModules_21 = STATE_VARIABLE_ReadModules_0_20;
  }
  else
  {
    MR_Word NewReadModules_16;

    NewReadModules_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[3]), NewBurdenedModules_12);
    mercury__set_tree234__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewReadModules_16, STATE_VARIABLE_ReadModules_0_20, STATE_VARIABLE_ReadModules_21);
    *STATE_VARIABLE_UnreadModules_23 = STATE_VARIABLE_UnreadModules_0_22;
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepsMap_10;

  parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepsMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepsMap_10));
}

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word Search_19,
  MR_Word CmdLineModuleName_20,
  MR_Word ModuleName_21,
  MR_Word ExpectationContexts_22,
  MR_Word * MaybeDeps_23,
  MR_Word * NewBurdenedModules_24,
  MR_Word STATE_VARIABLE_DepsMap_0_32,
  MR_Word * STATE_VARIABLE_DepsMap_33,
  MR_Word STATE_VARIABLE_ErrSpecs_0_34,
  MR_Word * STATE_VARIABLE_ErrSpecs_35,
  MR_Word STATE_VARIABLE_WarnSpecs_0_36,
  MR_Word * STATE_VARIABLE_WarnSpecs_37)
{
  MR_bool succeeded;
  MR_Word Deps_29;
  MR_Box conv0_Deps_29;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), STATE_VARIABLE_DepsMap_0_32, ((MR_Box) (ModuleName_21)), &conv0_Deps_29);
  if (succeeded)
  {
    Deps_29 = ((MR_Word) (conv0_Deps_29));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDeps_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Deps_29));
    }
    *NewBurdenedModules_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_WarnSpecs_37 = STATE_VARIABLE_WarnSpecs_0_36;
    *STATE_VARIABLE_ErrSpecs_35 = STATE_VARIABLE_ErrSpecs_0_34;
    *STATE_VARIABLE_DepsMap_33 = STATE_VARIABLE_DepsMap_0_32;
  }
  else
  {
    MR_Word HaveReadModuleSrc_55;

    parse_tree__read_modules__read_module_src_10_p_0(ProgressStream_17, Globals_18, (MR_Integer) 3, Search_19, ModuleName_21, ExpectationContexts_22, (MR_Word) (&parse_tree__deps_map_scalar_common_3[0]), &HaveReadModuleSrc_55);
    if (((MR_tag((MR_Word) HaveReadModuleSrc_55)) == (MR_Integer) 0))
    {
      MR_String SourceFileName_56 = ((MR_String) ((MR_hl_field(0, HaveReadModuleSrc_55, 0))));
      MR_Word ParseTreeSrc_57 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_55, 1))));
      MR_Word Source_58 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_55, 2))));
      MR_Word MaybeTimestamp_59 = ((MR_Word) ((MR_hl_field(1, Source_58, 0))));
      MR_Word ReadModuleErrors_60 = ((MR_Word) ((MR_hl_field(1, Source_58, 1))));
      MR_Word BmErrSpecs_61;
      MR_Word BmWarnSpecs_62;

      parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_8_p_0(Globals_18, SourceFileName_56, ReadModuleErrors_60, MaybeTimestamp_59, ParseTreeSrc_57, &BmErrSpecs_61, &BmWarnSpecs_62, NewBurdenedModules_24);
      *STATE_VARIABLE_ErrSpecs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), BmErrSpecs_61, STATE_VARIABLE_ErrSpecs_0_34);
      *STATE_VARIABLE_WarnSpecs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), BmWarnSpecs_62, STATE_VARIABLE_WarnSpecs_0_36);
    }
    else
    {
      MR_Word ReadModuleErrors_69 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_55, 1))));

      *NewBurdenedModules_24 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_21, CmdLineModuleName_20);
      if (succeeded)
      {
        MR_Word RmErrSpecs_64;
        MR_Word RmWarnSpecs_65;

        parse_tree__parse_error__get_read_module_specs_3_p_0(ReadModuleErrors_69, &RmErrSpecs_64, &RmWarnSpecs_65);
        *STATE_VARIABLE_ErrSpecs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), RmErrSpecs_64, STATE_VARIABLE_ErrSpecs_0_34);
        *STATE_VARIABLE_WarnSpecs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), RmWarnSpecs_65, STATE_VARIABLE_WarnSpecs_0_36);
      }
      else
      {
        *STATE_VARIABLE_WarnSpecs_37 = STATE_VARIABLE_WarnSpecs_0_36;
        *STATE_VARIABLE_ErrSpecs_35 = STATE_VARIABLE_ErrSpecs_0_34;
      }
    }
    if ((*NewBurdenedModules_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeDeps_23 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DepsMap_33 = STATE_VARIABLE_DepsMap_0_32;
    }
    else
    {
      MR_Word Deps_45;
      MR_Box conv2_STATE_VARIABLE_DepsMap_33;
      MR_Box conv3_Deps_45;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[2]), *NewBurdenedModules_24, ((MR_Box) (STATE_VARIABLE_DepsMap_0_32)), &conv2_STATE_VARIABLE_DepsMap_33);
      *STATE_VARIABLE_DepsMap_33 = ((MR_Word) (conv2_STATE_VARIABLE_DepsMap_33));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *STATE_VARIABLE_DepsMap_33, ((MR_Box) (ModuleName_21)), &conv3_Deps_45);
      Deps_45 = ((MR_Word) (conv3_Deps_45));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDeps_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Deps_45));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____deps_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____expectation_contexts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____expectation_contexts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____expectation_contexts_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____expectation_contexts_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____file_or_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____file_or_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____file_or_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____file_or_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____have_processed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__deps_map__init(void)
{
}

void mercury__parse_tree__deps_map__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0);
  MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0);
  MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_0);
  MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_map_0);
  MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_file_or_module_0);
  MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0);
}

void mercury__parse_tree__deps_map__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__deps_map__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.deps_map.
