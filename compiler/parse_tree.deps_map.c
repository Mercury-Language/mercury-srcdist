/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2024-05-09
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[3];

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[3];

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2];

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_1;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_maybe_dummy_burdened_module_0[2];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_maybe_dummy_burdened_module_0[2];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_maybe_dummy_burdened_module_0[2];

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_submodule_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3];

static MR_Word MR_CALL 
parse_tree__deps_map__IntroducedFrom__func__update_read_unread_modules__271__1_1_f_0(
  MR_Word LambdaHeadVar__1_28);

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
parse_tree__deps_map__generate_deps_map_loop_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word Search_18,
  MR_Word STATE_VARIABLE_SeenModules_0_28,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_29,
  MR_Word STATE_VARIABLE_ReadModules_0_30,
  MR_Word * STATE_VARIABLE_ReadModules_31,
  MR_Word STATE_VARIABLE_UnreadModules_0_32,
  MR_Word * STATE_VARIABLE_UnreadModules_33,
  MR_Word STATE_VARIABLE_DepsMap_0_34,
  MR_Word * STATE_VARIABLE_DepsMap_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word Globals_20,
  MR_Word Search_21,
  MR_Word Module_22,
  MR_Word ExpectationContexts_23,
  MR_Word SeenModules0_24,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_46,
  MR_Word * STATE_VARIABLE_ModuleExpCs_47,
  MR_Word STATE_VARIABLE_ReadModules_0_48,
  MR_Word * STATE_VARIABLE_ReadModules_49,
  MR_Word STATE_VARIABLE_UnreadModules_0_50,
  MR_Word * STATE_VARIABLE_UnreadModules_51,
  MR_Word STATE_VARIABLE_DepsMap_0_52,
  MR_Word * STATE_VARIABLE_DepsMap_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

static MR_Box MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Module_10,
  MR_Word MaybeDeps_11,
  MR_Word NewBurdenedModules_12,
  MR_Word STATE_VARIABLE_ReadModules_0_23,
  MR_Word * STATE_VARIABLE_ReadModules_24,
  MR_Word STATE_VARIABLE_UnreadModules_0_25,
  MR_Word * STATE_VARIABLE_UnreadModules_26);

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_Word ExpectationContexts_18,
  MR_Word * MaybeDeps_19,
  MR_Word * NewBurdenedModules_20,
  MR_Word STATE_VARIABLE_DepsMap_0_28,
  MR_Word * STATE_VARIABLE_DepsMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

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
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____maybe_dummy_burdened_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____maybe_dummy_burdened_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_6[4][8];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0])),
    ((MR_Box) (parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_maybe_dummy_burdened_module_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
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

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0),
  (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_maybe_dummy_burdened_module_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)
};

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
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
  INT16_C(3),
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

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_0 = {
  (MR_String) "non_dummy_burdened_module",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_1 = {
  (MR_String) "dummy_burdened_module",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_maybe_dummy_burdened_module_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_maybe_dummy_burdened_module_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_maybe_dummy_burdened_module_0_0
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_maybe_dummy_burdened_module_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_maybe_dummy_burdened_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____maybe_dummy_burdened_module_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____maybe_dummy_burdened_module_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "maybe_dummy_burdened_module",
  { parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_maybe_dummy_burdened_module_0 },
  { parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_maybe_dummy_burdened_module_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_maybe_dummy_burdened_module_0,

};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0 = {
  (MR_String) "toplevel",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1 = {
  (MR_String) "nested_submodule",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2 = {
  (MR_String) "separate_submodule",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____submodule_kind_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____submodule_kind_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "submodule_kind",
  { parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0 },
  { parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_submodule_kind_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0,

};

static MR_Word MR_CALL 
parse_tree__deps_map__IntroducedFrom__func__update_read_unread_modules__271__1_1_f_0(
  MR_Word LambdaHeadVar__1_28)
{
  MR_Word LambdaHeadVar__2_29;
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_28, (MR_Integer) 1))));

  LambdaHeadVar__2_29 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
  return LambdaHeadVar__2_29;
}

void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
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
parse_tree__deps_map____Unify____submodule_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____maybe_dummy_burdened_module_0_0(
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
parse_tree__deps_map____Unify____maybe_dummy_burdened_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__module_baggage____Compare____burdened_module_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = parse_tree__module_baggage____Unify____burdened_module_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map__add_fim_module_with_context_5_p_0(
  MR_Word SeenModules0_6,
  MR_Word FIMSpec_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_12,
  MR_Word * STATE_VARIABLE_ModuleExpCs_13)
{
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, FIMSpec_7, (MR_Integer) 1))));

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
    MR_Word SectionImportUse_10 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) SectionImportUse_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, SectionImportUse_10, (MR_Integer) 0))));

          parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_25, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_26 = ((MR_Word) ((MR_hl_field(1, SectionImportUse_10, (MR_Integer) 0))));

          parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_26, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_20 = ((MR_Word) ((MR_hl_field(2, SectionImportUse_10, (MR_Integer) 0))));

          parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_20, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, SectionImportUse_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_24 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_10, (MR_Integer) 1))));

              parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_24, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_21 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_10, (MR_Integer) 1))));
              MR_Word ImpContext_22 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_10, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_ModuleExpCs_16_23;

              parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, IntContext_21, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, &STATE_VARIABLE_ModuleExpCs_16_23);
              parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, ImpContext_22, ModuleName_7, STATE_VARIABLE_ModuleExpCs_16_23, STATE_VARIABLE_ModuleExpCs_14);
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word MaybeSectionImportUse_12 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, (MR_Integer) 1))));

    if ((MaybeSectionImportUse_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_16;

      Var_16 = mercury__term_context__dummy_context_0_f_0();
      parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Var_16, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
    }
    else
    {
      MR_Word SectionImportUse_19 = ((MR_Word) ((MR_hl_field(1, MaybeSectionImportUse_12, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) SectionImportUse_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, SectionImportUse_19, (MR_Integer) 0))));

            parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_32, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_33 = ((MR_Word) ((MR_hl_field(1, SectionImportUse_19, (MR_Integer) 0))));

            parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_33, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Context_27 = ((MR_Word) ((MR_hl_field(2, SectionImportUse_19, (MR_Integer) 0))));

            parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_27, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, SectionImportUse_19, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_31 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_19, (MR_Integer) 1))));

                parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, Context_31, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, STATE_VARIABLE_ModuleExpCs_14);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_28 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_19, (MR_Integer) 1))));
                MR_Word ImpContext_29 = ((MR_Word) ((MR_hl_field(3, SectionImportUse_19, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_ModuleExpCs_16_30;

                parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, IntContext_28, ModuleName_7, STATE_VARIABLE_ModuleExpCs_0_13, &STATE_VARIABLE_ModuleExpCs_16_30);
                parse_tree__deps_map__add_module_name_and_context_5_p_0(SeenModules0_6, ImpContext_29, ModuleName_7, STATE_VARIABLE_ModuleExpCs_16_30, STATE_VARIABLE_ModuleExpCs_14);
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
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, InclInfo_8, (MR_Integer) 1))));

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

void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_4_p_0(
  MR_Word MaybeDummy_5,
  MR_Word BurdenedModule_6,
  MR_Word STATE_VARIABLE_DepsMap_0_11,
  MR_Word * STATE_VARIABLE_DepsMap_12)
{
  MR_Word ParseTreeModuleSrc_8 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_6, (MR_Integer) 1))));
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 0))));
  MR_Word Deps_10;

  {
    Deps_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Deps_10, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (MaybeDummy_5)));
    MR_hl_field(0, Deps_10, 1) = ((MR_Box) (BurdenedModule_6));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (Deps_10)), STATE_VARIABLE_DepsMap_0_11, STATE_VARIABLE_DepsMap_12);
}

void MR_CALL 
parse_tree__deps_map__generate_deps_map_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word * STATE_VARIABLE_ReadModules_24,
  MR_Word * STATE_VARIABLE_UnreadModules_25,
  MR_Word STATE_VARIABLE_DepsMap_0_26,
  MR_Word * STATE_VARIABLE_DepsMap_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word SeenModules0_22;
  MR_Word ModuleExpectationContexts0_23;
  MR_Word STATE_VARIABLE_ReadModules_33_33;
  MR_Word STATE_VARIABLE_UnreadModules_34_34;

  SeenModules0_22 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  ModuleExpectationContexts0_23 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)));
  STATE_VARIABLE_ReadModules_33_33 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  STATE_VARIABLE_UnreadModules_34_34 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__deps_map__generate_deps_map_loop_15_p_0(ProgressStream_13, Globals_14, Search_15, SeenModules0_22, ModuleExpectationContexts0_23, STATE_VARIABLE_ReadModules_33_33, STATE_VARIABLE_ReadModules_24, STATE_VARIABLE_UnreadModules_34_34, STATE_VARIABLE_UnreadModules_25, STATE_VARIABLE_DepsMap_0_26, STATE_VARIABLE_DepsMap_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word Search_18,
  MR_Word STATE_VARIABLE_SeenModules_0_28,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_29,
  MR_Word STATE_VARIABLE_ReadModules_0_30,
  MR_Word * STATE_VARIABLE_ReadModules_31,
  MR_Word STATE_VARIABLE_UnreadModules_0_32,
  MR_Word * STATE_VARIABLE_UnreadModules_33,
  MR_Word STATE_VARIABLE_DepsMap_0_34,
  MR_Word * STATE_VARIABLE_DepsMap_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Module_26;
    MR_Word ExpectationContexts_27;
    MR_Word STATE_VARIABLE_ModuleExpCs_40_40;
    MR_Box conv1_Module_26;
    MR_Box conv0_ExpectationContexts_27;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__remove_smallest_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), &conv1_Module_26, &conv0_ExpectationContexts_27, STATE_VARIABLE_ModuleExpCs_0_29, &STATE_VARIABLE_ModuleExpCs_40_40);
    if (succeeded)
    {
      Module_26 = ((MR_Word) (conv1_Module_26));
      ExpectationContexts_27 = ((MR_Word) (conv0_ExpectationContexts_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_SeenModules_41_41;
      MR_Word STATE_VARIABLE_ModuleExpCs_42_42;
      MR_Word STATE_VARIABLE_ReadModules_43_43;
      MR_Word STATE_VARIABLE_UnreadModules_44_44;
      MR_Word STATE_VARIABLE_DepsMap_45_45;
      MR_Word STATE_VARIABLE_Specs_46_46;
      MR_Word next_value_of_STATE_VARIABLE_SeenModules_0_28;
      MR_Word next_value_of_STATE_VARIABLE_ModuleExpCs_0_29;
      MR_Word next_value_of_STATE_VARIABLE_ReadModules_0_30;
      MR_Word next_value_of_STATE_VARIABLE_UnreadModules_0_32;
      MR_Word next_value_of_STATE_VARIABLE_DepsMap_0_34;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_36;

      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Module_26)), STATE_VARIABLE_SeenModules_0_28, &STATE_VARIABLE_SeenModules_41_41);
      parse_tree__deps_map__generate_deps_map_step_18_p_0(ProgressStream_16, Globals_17, Search_18, Module_26, ExpectationContexts_27, STATE_VARIABLE_SeenModules_41_41, STATE_VARIABLE_ModuleExpCs_40_40, &STATE_VARIABLE_ModuleExpCs_42_42, STATE_VARIABLE_ReadModules_0_30, &STATE_VARIABLE_ReadModules_43_43, STATE_VARIABLE_UnreadModules_0_32, &STATE_VARIABLE_UnreadModules_44_44, STATE_VARIABLE_DepsMap_0_34, &STATE_VARIABLE_DepsMap_45_45, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_46_46);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_SeenModules_0_28 = STATE_VARIABLE_SeenModules_41_41;
      next_value_of_STATE_VARIABLE_ModuleExpCs_0_29 = STATE_VARIABLE_ModuleExpCs_42_42;
      next_value_of_STATE_VARIABLE_ReadModules_0_30 = STATE_VARIABLE_ReadModules_43_43;
      next_value_of_STATE_VARIABLE_UnreadModules_0_32 = STATE_VARIABLE_UnreadModules_44_44;
      next_value_of_STATE_VARIABLE_DepsMap_0_34 = STATE_VARIABLE_DepsMap_45_45;
      next_value_of_STATE_VARIABLE_Specs_0_36 = STATE_VARIABLE_Specs_46_46;
      STATE_VARIABLE_SeenModules_0_28 = next_value_of_STATE_VARIABLE_SeenModules_0_28;
      STATE_VARIABLE_ModuleExpCs_0_29 = next_value_of_STATE_VARIABLE_ModuleExpCs_0_29;
      STATE_VARIABLE_ReadModules_0_30 = next_value_of_STATE_VARIABLE_ReadModules_0_30;
      STATE_VARIABLE_UnreadModules_0_32 = next_value_of_STATE_VARIABLE_UnreadModules_0_32;
      STATE_VARIABLE_DepsMap_0_34 = next_value_of_STATE_VARIABLE_DepsMap_0_34;
      STATE_VARIABLE_Specs_0_36 = next_value_of_STATE_VARIABLE_Specs_0_36;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      *STATE_VARIABLE_DepsMap_35 = STATE_VARIABLE_DepsMap_0_34;
      *STATE_VARIABLE_UnreadModules_33 = STATE_VARIABLE_UnreadModules_0_32;
      *STATE_VARIABLE_ReadModules_31 = STATE_VARIABLE_ReadModules_0_30;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ModuleExpCs_14;

  parse_tree__deps_map__add_avail_module_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_ModuleExpCs_14);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ModuleExpCs_14));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ModuleExpCs_13;

  parse_tree__deps_map__add_public_include_module_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_ModuleExpCs_13);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleExpCs_13));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleExpCs_13;

  parse_tree__deps_map__add_fim_module_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ModuleExpCs_13);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleExpCs_13));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleExpCs_12;

  parse_tree__deps_map__add_module_name_and_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleExpCs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleExpCs_12));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word Globals_20,
  MR_Word Search_21,
  MR_Word Module_22,
  MR_Word ExpectationContexts_23,
  MR_Word SeenModules0_24,
  MR_Word STATE_VARIABLE_ModuleExpCs_0_46,
  MR_Word * STATE_VARIABLE_ModuleExpCs_47,
  MR_Word STATE_VARIABLE_ReadModules_0_48,
  MR_Word * STATE_VARIABLE_ReadModules_49,
  MR_Word STATE_VARIABLE_UnreadModules_0_50,
  MR_Word * STATE_VARIABLE_UnreadModules_51,
  MR_Word STATE_VARIABLE_DepsMap_0_52,
  MR_Word * STATE_VARIABLE_DepsMap_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  MR_bool succeeded;
  MR_Word MaybeDeps0_31;
  MR_Word NewBurdenedModules_32;
  MR_Word STATE_VARIABLE_DepsMap_58_58;
  MR_Word MaybeDummy_35;
  MR_Word BurdenedModule_36;
  MR_Word Deps0_33;
  MR_Word Done0_34;

  parse_tree__deps_map__lookup_or_find_dependency_info_for_module_13_p_0(ProgressStream_19, Globals_20, Search_21, Module_22, ExpectationContexts_23, &MaybeDeps0_31, &NewBurdenedModules_32, STATE_VARIABLE_DepsMap_0_52, &STATE_VARIABLE_DepsMap_58_58, STATE_VARIABLE_Specs_0_54, STATE_VARIABLE_Specs_55);
  parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(Module_22, MaybeDeps0_31, NewBurdenedModules_32, STATE_VARIABLE_ReadModules_0_48, STATE_VARIABLE_ReadModules_49, STATE_VARIABLE_UnreadModules_0_50, STATE_VARIABLE_UnreadModules_51);
  succeeded = (MaybeDeps0_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Deps0_33 = ((MR_Word) ((MR_hl_field(1, MaybeDeps0_31, (MR_Integer) 0))));
    Done0_34 = ((((MR_Unsigned) ((MR_hl_field(0, Deps0_33, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MaybeDummy_35 = ((MR_Unsigned) ((MR_hl_field(0, Deps0_33, (MR_Integer) 0))) & (MR_Integer) 1);
    BurdenedModule_36 = ((MR_Word) ((MR_hl_field(0, Deps0_33, (MR_Integer) 1))));
    succeeded = (Done0_34 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Deps_37;
    MR_Word ParseTreeModuleSrc_38;
    MR_Word ModuleName_39;
    MR_Word AncestorModuleNames_40;
    MR_Word ModuleNameContext_41;
    MR_Word IntFIMs_42;
    MR_Word ImpFIMs_43;
    MR_Word InclMap_44;
    MR_Word ImportUseMap_45;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_ModuleExpCs_66_66;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_ModuleExpCs_68_68;
    MR_Word STATE_VARIABLE_ModuleExpCs_70_70;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_ModuleExpCs_72_72;
    MR_Word Var_73;
    MR_Box conv1_STATE_VARIABLE_ModuleExpCs_66_66;
    MR_Box conv3_STATE_VARIABLE_ModuleExpCs_68_68;
    MR_Box conv4_STATE_VARIABLE_ModuleExpCs_70_70;
    MR_Box conv6_STATE_VARIABLE_ModuleExpCs_72_72;
    MR_Box conv8_STATE_VARIABLE_ModuleExpCs_47;

    {
      Deps_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Deps_37, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (MaybeDummy_35)));
      MR_hl_field(0, Deps_37, 1) = ((MR_Box) (BurdenedModule_36));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (Module_22)), ((MR_Box) (Deps_37)), STATE_VARIABLE_DepsMap_58_58, STATE_VARIABLE_DepsMap_53);
    ParseTreeModuleSrc_38 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_36, (MR_Integer) 1))));
    ModuleName_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_38, (MR_Integer) 0))));
    AncestorModuleNames_40 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_39);
    ModuleNameContext_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_38, (MR_Integer) 1))));
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[0]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_18_p_0_1));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (SeenModules0_24));
      MR_hl_field(0, Var_65, 4) = ((MR_Box) (ModuleNameContext_41));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_65, AncestorModuleNames_40, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_0_46)), &conv1_STATE_VARIABLE_ModuleExpCs_66_66);
    STATE_VARIABLE_ModuleExpCs_66_66 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleExpCs_66_66));
    IntFIMs_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_38, (MR_Integer) 4))));
    ImpFIMs_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_38, (MR_Integer) 5))));
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[1]));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_18_p_0_2));
      MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_67, 3) = ((MR_Box) (SeenModules0_24));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_67, IntFIMs_42, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_66_66)), &conv3_STATE_VARIABLE_ModuleExpCs_68_68);
    STATE_VARIABLE_ModuleExpCs_68_68 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleExpCs_68_68));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_67, ImpFIMs_43, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_68_68)), &conv4_STATE_VARIABLE_ModuleExpCs_70_70);
    STATE_VARIABLE_ModuleExpCs_70_70 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleExpCs_70_70));
    InclMap_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_38, (MR_Integer) 2))));
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[2]));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_18_p_0_3));
      MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_71, 3) = ((MR_Box) (SeenModules0_24));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_71, InclMap_44, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_70_70)), &conv6_STATE_VARIABLE_ModuleExpCs_72_72);
    STATE_VARIABLE_ModuleExpCs_72_72 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleExpCs_72_72));
    ImportUseMap_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_38, (MR_Integer) 3))));
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_6[3]));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_18_p_0_4));
      MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_73, 3) = ((MR_Box) (SeenModules0_24));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_73, ImportUseMap_45, ((MR_Box) (STATE_VARIABLE_ModuleExpCs_72_72)), &conv8_STATE_VARIABLE_ModuleExpCs_47);
    *STATE_VARIABLE_ModuleExpCs_47 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleExpCs_47));
  }
  else
  {
    *STATE_VARIABLE_DepsMap_53 = STATE_VARIABLE_DepsMap_58_58;
    *STATE_VARIABLE_ModuleExpCs_47 = STATE_VARIABLE_ModuleExpCs_0_46;
  }
}

static MR_Box MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_29;

  conv0_LambdaHeadVar__2_29 = parse_tree__deps_map__IntroducedFrom__func__update_read_unread_modules__271__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__deps_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_114_101_97_100_95_117_110_114_101_97_100_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Module_10,
  MR_Word MaybeDeps_11,
  MR_Word NewBurdenedModules_12,
  MR_Word STATE_VARIABLE_ReadModules_0_23,
  MR_Word * STATE_VARIABLE_ReadModules_24,
  MR_Word STATE_VARIABLE_UnreadModules_0_25,
  MR_Word * STATE_VARIABLE_UnreadModules_26)
{
  MR_bool succeeded = (MaybeDeps_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Deps_15;
  MR_Word MaybeDummy_17;

  if (succeeded)
  {
    Deps_15 = ((MR_Word) ((MR_hl_field(1, MaybeDeps_11, (MR_Integer) 0))));
    MaybeDummy_17 = ((MR_Unsigned) ((MR_hl_field(0, Deps_15, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (MaybeDummy_17 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word NewReadModules_19;

    NewReadModules_19 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[2]), NewBurdenedModules_12);
    mercury__set_tree234__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewReadModules_19, STATE_VARIABLE_ReadModules_0_23, STATE_VARIABLE_ReadModules_24);
    *STATE_VARIABLE_UnreadModules_26 = STATE_VARIABLE_UnreadModules_0_25;
  }
  else
  {
    mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Module_10)), STATE_VARIABLE_UnreadModules_0_25, STATE_VARIABLE_UnreadModules_26);
    *STATE_VARIABLE_ReadModules_24 = STATE_VARIABLE_ReadModules_0_23;
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepsMap_12;

  parse_tree__deps_map__insert_into_deps_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepsMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepsMap_12));
}

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependency_info_for_module_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_Word ExpectationContexts_18,
  MR_Word * MaybeDeps_19,
  MR_Word * NewBurdenedModules_20,
  MR_Word STATE_VARIABLE_DepsMap_0_28,
  MR_Word * STATE_VARIABLE_DepsMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word Deps_24;
  MR_Box conv0_Deps_24;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), STATE_VARIABLE_DepsMap_0_28, ((MR_Box) (ModuleName_17)), &conv0_Deps_24);
  if (succeeded)
  {
    Deps_24 = ((MR_Word) (conv0_Deps_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDeps_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Deps_24));
    }
    *NewBurdenedModules_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
    *STATE_VARIABLE_DepsMap_29 = STATE_VARIABLE_DepsMap_0_28;
  }
  else
  {
    MR_Word MaybeDummy_25;
    MR_Word Specs_48;
    MR_Word HaveReadModuleSrc_49;
    MR_String SourceFileName_50;
    MR_Word ParseTreeSrc_51;
    MR_Word MaybeTimestamp_53;
    MR_Word ReadModuleErrors_54;

    parse_tree__read_modules__read_module_src_11_p_0(ProgressStream_14, Globals_15, (MR_Integer) 3, (MR_Integer) 0, Search_16, ModuleName_17, ExpectationContexts_18, (MR_Word) (&parse_tree__deps_map_scalar_common_3[0]), &HaveReadModuleSrc_49);
    if (((MR_tag((MR_Word) HaveReadModuleSrc_49)) == (MR_Integer) 0))
    {
      MR_Word Source_52;

      SourceFileName_50 = ((MR_String) ((MR_hl_field(0, HaveReadModuleSrc_49, (MR_Integer) 0))));
      ParseTreeSrc_51 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_49, (MR_Integer) 1))));
      Source_52 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleSrc_49, (MR_Integer) 2))));
      MaybeTimestamp_53 = ((MR_Word) ((MR_hl_field(1, Source_52, (MR_Integer) 0))));
      ReadModuleErrors_54 = ((MR_Word) ((MR_hl_field(1, Source_52, (MR_Integer) 1))));
      MaybeDummy_25 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_59;
      MR_Word Var_60;

      SourceFileName_50 = ((MR_String) ((MR_hl_field(1, HaveReadModuleSrc_49, (MR_Integer) 0))));
      ReadModuleErrors_54 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleSrc_49, (MR_Integer) 1))));
      MaybeTimestamp_53 = (MR_Word) ((MR_Unsigned) 0U);
      Var_59 = mercury__term_context__dummy_context_0_f_0();
      Var_60 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0));
      {
        ParseTreeSrc_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ParseTreeSrc_51, 0) = ((MR_Box) (ModuleName_17));
        MR_hl_field(0, ParseTreeSrc_51, 1) = ((MR_Box) (Var_59));
        MR_hl_field(0, ParseTreeSrc_51, 2) = ((MR_Box) (Var_60));
      }
      MaybeDummy_25 = (MR_Integer) 1;
    }
    parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_15, SourceFileName_50, ReadModuleErrors_54, MaybeTimestamp_53, ParseTreeSrc_51, &Specs_48, NewBurdenedModules_20);
    *STATE_VARIABLE_Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_48, STATE_VARIABLE_Specs_0_30);
    if ((*NewBurdenedModules_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeDeps_19 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DepsMap_29 = STATE_VARIABLE_DepsMap_0_28;
    }
    else
    {
      MR_Word Var_36;
      MR_Word Deps_38;
      MR_Box conv2_STATE_VARIABLE_DepsMap_29;
      MR_Box conv3_Deps_38;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0]));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (parse_tree__deps_map__lookup_or_find_dependency_info_for_module_13_p_0_1));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (MaybeDummy_25));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), Var_36, *NewBurdenedModules_20, ((MR_Box) (STATE_VARIABLE_DepsMap_0_28)), &conv2_STATE_VARIABLE_DepsMap_29);
      *STATE_VARIABLE_DepsMap_29 = ((MR_Word) (conv2_STATE_VARIABLE_DepsMap_29));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *STATE_VARIABLE_DepsMap_29, ((MR_Box) (ModuleName_17)), &conv3_Deps_38);
      Deps_38 = ((MR_Word) (conv3_Deps_38));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDeps_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Deps_38));
      }
    }
  }
}

MR_Word MR_CALL 
parse_tree__deps_map__get_submodule_kind_2_f_0(
  MR_Word ModuleName_4,
  MR_Word DepsMap_5)
{
  MR_bool succeeded;
  MR_Word Kind_6;

  if (((MR_tag((MR_Word) ModuleName_4)) == (MR_Integer) 1))
  {
    MR_Word Parent_7 = ((MR_Word) ((MR_hl_field(1, ModuleName_4, (MR_Integer) 0))));
    MR_Word BurdenedModule_11;
    MR_Word ParentBurdenedModule_14;
    MR_Word ModuleBaggage_15;
    MR_Word ParentBaggage_16;
    MR_String ModuleFileName_17;
    MR_String ParentFileName_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv0_Var_20;
    MR_Box conv1_Var_21;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_5, ((MR_Box) (ModuleName_4)), &conv0_Var_20);
    Var_20 = ((MR_Word) (conv0_Var_20));
    BurdenedModule_11 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_5, ((MR_Box) (Parent_7)), &conv1_Var_21);
    Var_21 = ((MR_Word) (conv1_Var_21));
    ParentBurdenedModule_14 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    ModuleBaggage_15 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_11, (MR_Integer) 0))));
    ParentBaggage_16 = ((MR_Word) ((MR_hl_field(0, ParentBurdenedModule_14, (MR_Integer) 0))));
    ModuleFileName_17 = ((MR_String) ((MR_hl_field(0, ModuleBaggage_15, (MR_Integer) 0))));
    ParentFileName_18 = ((MR_String) ((MR_hl_field(0, ParentBaggage_16, (MR_Integer) 0))));
    succeeded = (strcmp(ModuleFileName_17, ParentFileName_18) == 0);
    if (succeeded)
      Kind_6 = (MR_Integer) 1;
    else
      Kind_6 = (MR_Integer) 2;
  }
  else
    Kind_6 = (MR_Integer) 0;
  return Kind_6;
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

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____maybe_dummy_burdened_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____maybe_dummy_burdened_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____maybe_dummy_burdened_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____maybe_dummy_burdened_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____submodule_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_maybe_dummy_burdened_module_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0);
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
