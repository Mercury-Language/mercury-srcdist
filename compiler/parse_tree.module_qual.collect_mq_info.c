/*
** Automatically generated from `module_qual.collect_mq_info.m'
** by the Mercury compiler,
** version rotd-2016-09-27
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


/* :- module parse_tree.module_qual.collect_mq_info. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_qual__collect_mq_info__init
ENDINIT
*/

#include "parse_tree.module_qual.collect_mq_info.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1;

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1];

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3;

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4];

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4];

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__426__1_2_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_146,
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_147);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__437__1_2_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_153,
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_154);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__Term_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__CatchExpr_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_13,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_15);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__Goal_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_6,
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_7,
  MR_Word parse_tree__module_qual__collect_mq_info__Item_8,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_1,
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_2,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
  MR_Word parse_tree__module_qual__collect_mq_info___Permissions_9,
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_5,
  MR_Word parse_tree__module_qual__collect_mq_info__Incl_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_0_12,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_13);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[7][3];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[6][2];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[1][10];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[1][8];




static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0 = {
  (MR_String) "mq_section_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1 = {
  (MR_String) "mq_section_local",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2 = {
  (MR_String) "mq_section_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3 = {
  (MR_String) "mq_section_abstract_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2
};

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1
};

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "mq_section",
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0 },
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "section_mq_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

    {
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2));
    }
    return parse_tree__module_qual__collect_mq_info__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(&parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_3));
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

    {
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_3));
    }
    return parse_tree__module_qual__collect_mq_info__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4)
{
  {
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), &parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_3), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_4));
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_13;
    MR_Word parse_tree__module_qual__collect_mq_info__Context_14;

    if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__Avail_10)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__module_qual__collect_mq_info__V_26_26 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Avail_10), (MR_Integer) 0);
        MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_15;

        parse_tree__module_qual__collect_mq_info__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_26_26, (MR_Integer) 0)));
        parse_tree__module_qual__collect_mq_info__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_26_26, (MR_Integer) 1)));
        parse_tree__module_qual__collect_mq_info___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_26_26, (MR_Integer) 2)));
      }
    else
      {
        MR_Word parse_tree__module_qual__collect_mq_info__V_25_25 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Avail_10), (MR_Integer) 1);
        MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_37;

        parse_tree__module_qual__collect_mq_info__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_25_25, (MR_Integer) 0)));
        parse_tree__module_qual__collect_mq_info__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_25_25, (MR_Integer) 1)));
        parse_tree__module_qual__collect_mq_info___SeqNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_25_25, (MR_Integer) 2)));
      }
    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__MQSection_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__MQSection_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
              MR_Word parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_32_32;

              {
                mercury__set__insert_3_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22);
              }
              {
                parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Context_14));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__module_qual__collect_mq_info__succeeded = mercury__map__insert_4_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[1], ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), ((MR_Box) (parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_32_32);
              }
              if (parse_tree__module_qual__collect_mq_info__succeeded)
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_32_32;
              else
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_42_42 = (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[1];
                  MR_Word parse_tree__module_qual__collect_mq_info__OldContexts_17;
                  MR_Word parse_tree__module_qual__collect_mq_info__OldHeadContext_18;
                  MR_Word parse_tree__module_qual__collect_mq_info__OldTailContexts_19;
                  MR_Word parse_tree__module_qual__collect_mq_info__NewContexts_20;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_33_33;
                  MR_Box parse_tree__module_qual__collect_mq_info__conv0_OldContexts_17;

                  {
                    mercury__map__lookup_3_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, parse_tree__module_qual__collect_mq_info__TypeInfo_42_42, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), &parse_tree__module_qual__collect_mq_info__conv0_OldContexts_17);
                  }
                  parse_tree__module_qual__collect_mq_info__OldContexts_17 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv0_OldContexts_17);
                  parse_tree__module_qual__collect_mq_info__OldHeadContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OldContexts_17, (MR_Integer) 0)));
                  parse_tree__module_qual__collect_mq_info__OldTailContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OldContexts_17, (MR_Integer) 1)));
                  {
                    parse_tree__module_qual__collect_mq_info__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__V_33_33, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__OldHeadContext_18));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__V_33_33, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__OldTailContexts_19));
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__NewContexts_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__NewContexts_20, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__NewContexts_20, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__V_33_33));
                  }
                  {
                    mercury__map__det_update_4_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, parse_tree__module_qual__collect_mq_info__TypeInfo_42_42, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), ((MR_Box) (parse_tree__module_qual__collect_mq_info__NewContexts_20)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22);
              }
              *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
            }
            break;
          case (MR_Integer) 2:
            {
              *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
              *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__collect_mq_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MQSection_8, (MR_Integer) 0)));

          switch (parse_tree__module_qual__collect_mq_info__V_44_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              {
                {
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22);
                }
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 0:
              {
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 2:
              {
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__426__1_2_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_146,
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_147)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__HeadVar__1_146, parse_tree__module_qual__collect_mq_info__HeadVar__2_147);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__437__1_2_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_153,
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_154)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__HeadVar__1_153, parse_tree__module_qual__collect_mq_info__HeadVar__2_154);
    }
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(
  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_for_MS_6,
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_4 = parse_tree__module_qual__collect_mq_info__HeadVar__2_2;
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_5 = parse_tree__module_qual__collect_mq_info__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_4, (MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(
  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_for_MS_5,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_3 = parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_4 = parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

    {
      parse_tree__module_qual__collect_mq_info__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_3, (MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_4);
    }
    return parse_tree__module_qual__collect_mq_info__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Integer parse_tree__module_qual__collect_mq_info__CastX_12 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__collect_mq_info__CastY_13 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__3_3;

    parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastX_12 == parse_tree__module_qual__collect_mq_info__CastY_13);
    if (parse_tree__module_qual__collect_mq_info__succeeded)
      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__module_qual__collect_mq_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__module_qual__collect_mq_info__V_16_16 = (MR_Integer) parse_tree__module_qual__collect_mq_info__V_15_15;
                  MR_Integer parse_tree__module_qual__collect_mq_info__V_17_17 = (MR_Integer) parse_tree__module_qual__collect_mq_info__V_9_9;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__collect_mq_info__HeadVar__1_1, parse_tree__module_qual__collect_mq_info__V_16_16, parse_tree__module_qual__collect_mq_info__V_17_17);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Integer parse_tree__module_qual__collect_mq_info__CastX_11 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__collect_mq_info__CastY_12 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

    parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastX_11 == parse_tree__module_qual__collect_mq_info__CastY_12);
    if (parse_tree__module_qual__collect_mq_info__succeeded)
      parse_tree__module_qual__collect_mq_info__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer parse_tree__module_qual__collect_mq_info__CastX_3 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
                MR_Integer parse_tree__module_qual__collect_mq_info__CastY_4 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastY_4 == parse_tree__module_qual__collect_mq_info__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer parse_tree__module_qual__collect_mq_info__CastX_5 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
                MR_Integer parse_tree__module_qual__collect_mq_info__CastY_6 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastY_6 == parse_tree__module_qual__collect_mq_info__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer parse_tree__module_qual__collect_mq_info__CastX_9 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
                MR_Integer parse_tree__module_qual__collect_mq_info__CastY_10 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastY_10 == parse_tree__module_qual__collect_mq_info__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__module_qual__collect_mq_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__collect_mq_info__V_8_8;

            parse_tree__module_qual__collect_mq_info__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__module_qual__collect_mq_info__succeeded)
              {
                parse_tree__module_qual__collect_mq_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__V_7_7 == parse_tree__module_qual__collect_mq_info__V_8_8);
              }
          }
          break;
      }
    return parse_tree__module_qual__collect_mq_info__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

        if ((parse_tree__module_qual__collect_mq_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
          }
        else
          {
            MR_Word parse_tree__module_qual__collect_mq_info__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__collect_mq_info__Terms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;
            MR_Word parse_tree__module_qual__collect_mq_info__SymName_31;
            MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_32;

            {
              parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Term_12, &parse_tree__module_qual__collect_mq_info__SymName_31, &parse_tree__module_qual__collect_mq_info__ArgTerms_32);
            }
            if (parse_tree__module_qual__collect_mq_info__succeeded)
              {
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36;
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37;

                if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_31)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_31, (MR_Integer) 0)));
                    MR_String parse_tree__module_qual__collect_mq_info__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_31, (MR_Integer) 1)));

                    {
                      mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_33)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37);
                    }
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
                  }
                else
                  {
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36 = (MR_Integer) 1;
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
                  }
                {
                  parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_32, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21);
                }
              }
            else
              {
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1 = parse_tree__module_qual__collect_mq_info__Terms_13;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;

              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4;
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2;
              parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__Term_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__SymName_9;
    MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_10;

    {
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Term_6, &parse_tree__module_qual__collect_mq_info__SymName_9, &parse_tree__module_qual__collect_mq_info__ArgTerms_10);
    }
    if (parse_tree__module_qual__collect_mq_info__succeeded)
      {
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18;
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19;

        if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_9)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_9, (MR_Integer) 0)));
            MR_String parse_tree__module_qual__collect_mq_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_9, (MR_Integer) 1)));

            {
              mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_11)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19);
            }
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16;
          }
        else
          {
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18 = (MR_Integer) 1;
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14;
          }
        {
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17);
        }
      }
    else
      {
        *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16;
        *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14;
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__CatchExpr_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_13,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_15)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__Pattern0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__CatchExpr_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__collect_mq_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__CatchExpr_6, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__collect_mq_info__Pattern_11;
    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16;
    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17;
    MR_Word parse_tree__module_qual__collect_mq_info__SymName_29;
    MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_30;

    {
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Pattern0_9, &parse_tree__module_qual__collect_mq_info__Pattern_11);
    }
    {
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Pattern_11, &parse_tree__module_qual__collect_mq_info__SymName_29, &parse_tree__module_qual__collect_mq_info__ArgTerms_30);
    }
    if (parse_tree__module_qual__collect_mq_info__succeeded)
      {
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34;
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35;

        if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_29)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_29, (MR_Integer) 0)));
            MR_String parse_tree__module_qual__collect_mq_info__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_29, (MR_Integer) 1)));

            {
              mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_31)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35);
            }
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14;
          }
        else
          {
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34 = (MR_Integer) 1;
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12;
          }
        {
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_30, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17);
        }
      }
    else
      {
        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14;
        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12;
      }
    {
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__Goal_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_13, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_15);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

        if ((parse_tree__module_qual__collect_mq_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
          }
        else
          {
            MR_Word parse_tree__module_qual__collect_mq_info__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__collect_mq_info__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;

            {
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__Goal_12, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1 = parse_tree__module_qual__collect_mq_info__Goals_13;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;

              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4;
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2;
              parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5)
{
  {
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
    MR_Word parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_UsedModuleNames_13;
    MR_Word parse_tree__module_qual__collect_mq_info__conv2_STATE_VARIABLE_FoundUnqual_15;

    {
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_UsedModuleNames_13, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_4), &parse_tree__module_qual__collect_mq_info__conv2_STATE_VARIABLE_FoundUnqual_15);
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_UsedModuleNames_13));
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_5 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv2_STATE_VARIABLE_FoundUnqual_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
    MR_Word parse_tree__module_qual__collect_mq_info__conv1_HeadVar__2_147;

    {
      parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__426__1_2_p_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), &parse_tree__module_qual__collect_mq_info__conv1_HeadVar__2_147);
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv1_HeadVar__2_147));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__2_154;

    {
      parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__437__1_2_p_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), &parse_tree__module_qual__collect_mq_info__conv0_HeadVar__2_154);
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__2_154));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__Goal_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

        switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__Goal_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_160_160 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word parse_tree__module_qual__collect_mq_info__LHS0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__RHS0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__collect_mq_info__LHS_85;
              MR_Word parse_tree__module_qual__collect_mq_info__RHS_86;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_91_91;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_92_92;
              MR_Word parse_tree__module_qual__collect_mq_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__collect_mq_info___Purity_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

              {
                mercury__term__coerce_2_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_159_159, parse_tree__module_qual__collect_mq_info__TypeCtorInfo_160_160, parse_tree__module_qual__collect_mq_info__LHS0_83, &parse_tree__module_qual__collect_mq_info__LHS_85);
              }
              {
                mercury__term__coerce_2_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_159_159, parse_tree__module_qual__collect_mq_info__TypeCtorInfo_160_160, parse_tree__module_qual__collect_mq_info__RHS0_84, &parse_tree__module_qual__collect_mq_info__RHS_86);
              }
              {
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(parse_tree__module_qual__collect_mq_info__LHS_85, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_91_91, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_92_92);
              }
              {
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(parse_tree__module_qual__collect_mq_info__RHS_86, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_91_91, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_92_92, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__SymName_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96;
              MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms0_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_135;
              MR_Word parse_tree__module_qual__collect_mq_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__collect_mq_info___Purity_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

              if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_77)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_77, (MR_Integer) 0)));
                  MR_String parse_tree__module_qual__collect_mq_info__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_77, (MR_Integer) 1)));

                  {
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_79)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96);
                  }
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89;
                }
              else
                {
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95 = (MR_Integer) 1;
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87;
                }
              {
                mercury__list__map_3_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[4], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[5], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[4], parse_tree__module_qual__collect_mq_info__ArgTerms0_134, &parse_tree__module_qual__collect_mq_info__ArgTerms_135);
              }
              {
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_135, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_127;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_128;
              MR_Word parse_tree__module_qual__collect_mq_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)));

              {
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_127, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_128);
              }
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_11;
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_127;
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_128;

                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87;
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__CondGoal_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_103_103;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_104_104;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_105_105;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_106_106;
                  MR_Word parse_tree__module_qual__collect_mq_info__ThenGoal_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));
                  MR_Word parse_tree__module_qual__collect_mq_info__ElseGoal_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__CondGoal_71, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_103_103, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_104_104);
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__ThenGoal_132, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_103_103, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_105_105, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_104_104, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_106_106);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__ElseGoal_133;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_105_105;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_106_106;

                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_163;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_164;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_161, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_163, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_164);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_162;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_163;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_164;

                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_19;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87;
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_175;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_176;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_173, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_175, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_176);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_174;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_175;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_176;

                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word parse_tree__module_qual__collect_mq_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__module_qual__collect_mq_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_181;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_180;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_179;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_178;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_177;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_183;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_182;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_184;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_185;

                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__MainGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));
                  MR_Word parse_tree__module_qual__collect_mq_info__OrElseGoals_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_109_109;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_110_110;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__MainGoal_66, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_109_109, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_110_110);
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(parse_tree__module_qual__collect_mq_info__OrElseGoals_67, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_109_109, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_110_110, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__ThenGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
                  MR_Word parse_tree__module_qual__collect_mq_info__MaybeElseGoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));
                  MR_Word parse_tree__module_qual__collect_mq_info__Catches_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
                  MR_Word parse_tree__module_qual__collect_mq_info__MaybeCatchAny_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 7)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_113_113;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_114_114;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121;
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__collect_mq_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Box parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UsedModuleNames_120_120;
                  MR_Box parse_tree__module_qual__collect_mq_info__conv4_STATE_VARIABLE_FoundUnqual_121_121;

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoal_131, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_113_113, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_114_114);
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__ThenGoal_55, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_113_113, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_114_114, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116);
                  }
                  if ((parse_tree__module_qual__collect_mq_info__MaybeElseGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115;
                      parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116;
                    }
                  else
                    {
                      MR_Word parse_tree__module_qual__collect_mq_info__ElseGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MaybeElseGoal_56, (MR_Integer) 0)));

                      {
                        parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__ElseGoal_59, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118);
                      }
                    }
                  {
                    mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[6], parse_tree__module_qual__collect_mq_info__Catches_57, ((MR_Box) (parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117)), &parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UsedModuleNames_120_120, ((MR_Box) (parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118)), &parse_tree__module_qual__collect_mq_info__conv4_STATE_VARIABLE_FoundUnqual_121_121);
                  }
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UsedModuleNames_120_120);
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv4_STATE_VARIABLE_FoundUnqual_121_121);
                  if ((parse_tree__module_qual__collect_mq_info__MaybeCatchAny_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120;
                      *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121;
                    }
                  else
                    {
                      MR_Word parse_tree__module_qual__collect_mq_info__CatchAnyGoal_61;
                      MR_Word parse_tree__module_qual__collect_mq_info__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MaybeCatchAny_58, (MR_Integer) 0)));
                      MR_Word parse_tree__module_qual__collect_mq_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_122_122, (MR_Integer) 0)));

                      parse_tree__module_qual__collect_mq_info__CatchAnyGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_122_122, (MR_Integer) 1)));
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__CatchAnyGoal_61;
                        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120;
                        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121;

                        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                        parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_171;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_172;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_169, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_171, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_172);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_170;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_171;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_172;

                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_167;
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_168;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_165, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_167, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_168);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_166;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_167;
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_168;

                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
                  MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_75;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
                  MR_String parse_tree__module_qual__collect_mq_info___Name_73 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

                  {
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[4], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[5], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[5], parse_tree__module_qual__collect_mq_info__ArgTerms0_74, &parse_tree__module_qual__collect_mq_info__ArgTerms_75);
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_75, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return parse_tree__module_qual__collect_mq_info__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__4_4;

    {
      parse_tree__module_qual__mq_info_set_module_used_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv0_HeadVar__4_4);
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_6,
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_7,
  MR_Word parse_tree__module_qual__collect_mq_info__Item_8,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__Item_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Item_8), (MR_Integer) 1);
          MR_Word parse_tree__module_qual__collect_mq_info__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__collect_mq_info__Params_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 4)));
          MR_Integer parse_tree__module_qual__collect_mq_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 5)));

          parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (parse_tree__module_qual__collect_mq_info__succeeded)
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
          else
            {
              MR_Integer parse_tree__module_qual__collect_mq_info__Arity_17;
              MR_Word parse_tree__module_qual__collect_mq_info__Types0_18;
              MR_Word parse_tree__module_qual__collect_mq_info__Types_19;
              MR_Word parse_tree__module_qual__collect_mq_info__V_82_82;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[2], parse_tree__module_qual__collect_mq_info__Params_12, &parse_tree__module_qual__collect_mq_info__Arity_17);
              }
              {
                parse_tree__module_qual__mq_info_get_types_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Types0_18);
              }
              {
                parse_tree__module_qual__collect_mq_info__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_82_82, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_11));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_82_82, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_17));
              }
              {
                parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_82_82, parse_tree__module_qual__collect_mq_info__Types0_18, &parse_tree__module_qual__collect_mq_info__Types_19);
              }
              {
                parse_tree__module_qual__mq_info_set_types_3_p_0(parse_tree__module_qual__collect_mq_info__Types_19, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__collect_mq_info__ItemInstDefn_20 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Item_8), (MR_Integer) 2);
          MR_Word parse_tree__module_qual__collect_mq_info__SymName_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__collect_mq_info__Params_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__collect_mq_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 5)));
          MR_Integer parse_tree__module_qual__collect_mq_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 6)));

          parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (parse_tree__module_qual__collect_mq_info__succeeded)
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
          else
            {
              MR_Word parse_tree__module_qual__collect_mq_info__Insts0_26;
              MR_Word parse_tree__module_qual__collect_mq_info__Insts_27;
              MR_Word parse_tree__module_qual__collect_mq_info__V_80_80;
              MR_Integer parse_tree__module_qual__collect_mq_info__Arity_84;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[3], parse_tree__module_qual__collect_mq_info__Params_87, &parse_tree__module_qual__collect_mq_info__Arity_84);
              }
              {
                parse_tree__module_qual__mq_info_get_insts_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Insts0_26);
              }
              {
                parse_tree__module_qual__collect_mq_info__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_80_80, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_86));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_80_80, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_84));
              }
              {
                parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_80_80, parse_tree__module_qual__collect_mq_info__Insts0_26, &parse_tree__module_qual__collect_mq_info__Insts_27);
              }
              {
                parse_tree__module_qual__mq_info_set_insts_3_p_0(parse_tree__module_qual__collect_mq_info__Insts_27, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__ItemModeDefn_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__SymName_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__collect_mq_info__Params_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 4)));
              MR_Integer parse_tree__module_qual__collect_mq_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 5)));

              parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              if (parse_tree__module_qual__collect_mq_info__succeeded)
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
              else
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__Modes0_33;
                  MR_Word parse_tree__module_qual__collect_mq_info__Modes_34;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_78_78;
                  MR_Integer parse_tree__module_qual__collect_mq_info__Arity_89;

                  {
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[3], parse_tree__module_qual__collect_mq_info__Params_92, &parse_tree__module_qual__collect_mq_info__Arity_89);
                  }
                  {
                    parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Modes0_33);
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_78_78, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_91));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_78_78, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_89));
                  }
                  {
                    parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_78_78, parse_tree__module_qual__collect_mq_info__Modes0_33, &parse_tree__module_qual__collect_mq_info__Modes_34);
                  }
                  {
                    parse_tree__module_qual__mq_info_set_modes_3_p_0(parse_tree__module_qual__collect_mq_info__Modes_34, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
          case (MR_Integer) 2:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
          case (MR_Integer) 3:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
              MR_Word parse_tree__module_qual__collect_mq_info__ItemPromise_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__UsedModuleNames_42;
              MR_Word parse_tree__module_qual__collect_mq_info__FoundUnqual_43;
              MR_Word parse_tree__module_qual__collect_mq_info__V_73_73;
              MR_Word parse_tree__module_qual__collect_mq_info___PromiseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__collect_mq_info___ProgVarSet_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__collect_mq_info___UnivVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__collect_mq_info___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 4)));
              MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 5)));

              {
                parse_tree__module_qual__collect_mq_info__V_73_73 = mercury__set__init_0_f_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110);
              }
              {
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__Goal_37, parse_tree__module_qual__collect_mq_info__V_73_73, &parse_tree__module_qual__collect_mq_info__UsedModuleNames_42, (MR_Integer) 0, &parse_tree__module_qual__collect_mq_info__FoundUnqual_43);
              }
              switch (parse_tree__module_qual__collect_mq_info__FoundUnqual_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__InInt_44;
                    MR_Word parse_tree__module_qual__collect_mq_info__V_76_76;
                    MR_Box parse_tree__module_qual__collect_mq_info__conv1_STATE_VARIABLE_Info_69;

                    {
                      parse_tree__module_qual__collect_mq_info__InInt_44 = parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(parse_tree__module_qual__collect_mq_info__MQSection_6);
                    }
                    {
                      parse_tree__module_qual__collect_mq_info__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1));
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 3) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__InInt_44));
                    }
                    {
                      mercury__set__fold_4_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110, (MR_Word) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0, parse_tree__module_qual__collect_mq_info__V_76_76, parse_tree__module_qual__collect_mq_info__UsedModuleNames_42, ((MR_Box) (parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68)), &parse_tree__module_qual__collect_mq_info__conv1_STATE_VARIABLE_Info_69);
                    }
                    *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv1_STATE_VARIABLE_Info_69);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__UnusedModules_45;

                    {
                      mercury__map__init_1_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[1], &parse_tree__module_qual__collect_mq_info__UnusedModules_45);
                    }
                    {
                      parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(parse_tree__module_qual__collect_mq_info__UnusedModules_45, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__ItemTypeClass_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__SymName_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__collect_mq_info__Params_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 6)));
              MR_Integer parse_tree__module_qual__collect_mq_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 7)));

              parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              if (parse_tree__module_qual__collect_mq_info__succeeded)
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
              else
                {
                  MR_Word parse_tree__module_qual__collect_mq_info__Classes0_53;
                  MR_Word parse_tree__module_qual__collect_mq_info__Classes_54;
                  MR_Word parse_tree__module_qual__collect_mq_info__V_71_71;
                  MR_Integer parse_tree__module_qual__collect_mq_info__Arity_94;

                  {
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[2], parse_tree__module_qual__collect_mq_info__Params_97, &parse_tree__module_qual__collect_mq_info__Arity_94);
                  }
                  {
                    parse_tree__module_qual__mq_info_get_classes_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Classes0_53);
                  }
                  {
                    parse_tree__module_qual__collect_mq_info__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_71_71, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_96));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_71_71, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_94));
                  }
                  {
                    parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_71_71, parse_tree__module_qual__collect_mq_info__Classes0_53, &parse_tree__module_qual__collect_mq_info__Classes_54);
                  }
                  {
                    parse_tree__module_qual__mq_info_set_classes_3_p_0(parse_tree__module_qual__collect_mq_info__Classes_54, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word parse_tree__module_qual__collect_mq_info__ItemInstance_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__collect_mq_info__V_56_56;

              parse_tree__module_qual__collect_mq_info__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__MQSection_6)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__module_qual__collect_mq_info__succeeded)
                {
                  parse_tree__module_qual__collect_mq_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MQSection_6, (MR_Integer) 0)));
                  {
                    MR_Word parse_tree__module_qual__collect_mq_info__InstanceModule_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 6)));
                    MR_Word parse_tree__module_qual__collect_mq_info__ImportedInstanceModules0_58;
                    MR_Word parse_tree__module_qual__collect_mq_info__ImportedInstanceModules_59;
                    MR_Word parse_tree__module_qual__collect_mq_info__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 0)));
                    MR_Word parse_tree__module_qual__collect_mq_info__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 1)));
                    MR_Word parse_tree__module_qual__collect_mq_info__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 2)));
                    MR_Word parse_tree__module_qual__collect_mq_info__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 3)));
                    MR_Word parse_tree__module_qual__collect_mq_info__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 4)));
                    MR_Word parse_tree__module_qual__collect_mq_info__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 5)));
                    MR_Word parse_tree__module_qual__collect_mq_info__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 7)));
                    MR_Integer parse_tree__module_qual__collect_mq_info__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 8)));

                    {
                      parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__ImportedInstanceModules0_58);
                    }
                    {
                      mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__InstanceModule_57)), parse_tree__module_qual__collect_mq_info__ImportedInstanceModules0_58, &parse_tree__module_qual__collect_mq_info__ImportedInstanceModules_59);
                    }
                    {
                      parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(parse_tree__module_qual__collect_mq_info__ImportedInstanceModules_59, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                    }
                  }
                }
              else
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            }
            break;
          case (MR_Integer) 7:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
          case (MR_Integer) 8:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
          case (MR_Integer) 9:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
          case (MR_Integer) 10:
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_1,
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_2,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

        if ((parse_tree__module_qual__collect_mq_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_5 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4;
        else
          {
            MR_Word parse_tree__module_qual__collect_mq_info__Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__collect_mq_info__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_18_18;

            {
              parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(parse_tree__module_qual__collect_mq_info__MQSection_1, parse_tree__module_qual__collect_mq_info__Permissions_2, parse_tree__module_qual__collect_mq_info__Item_13, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_18_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3__tmp_copy_3 = parse_tree__module_qual__collect_mq_info__Items_14;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_18_18;

              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_4;
              parse_tree__module_qual__collect_mq_info__HeadVar__3_3 = parse_tree__module_qual__collect_mq_info__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
  MR_Word parse_tree__module_qual__collect_mq_info___Permissions_9,
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

    {
      parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(parse_tree__module_qual__collect_mq_info__MQSection_8, parse_tree__module_qual__collect_mq_info__Avail_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_5,
  MR_Word parse_tree__module_qual__collect_mq_info__Incl_6,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_0_12,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_13)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__IncludedModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Incl_6, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__collect_mq_info__V_14_14;
    MR_Word parse_tree__module_qual__collect_mq_info___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Incl_6, (MR_Integer) 1)));
    MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Incl_6, (MR_Integer) 2)));

    {
      parse_tree__module_qual__collect_mq_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_14_14, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__IncludedModuleName_8));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_5, parse_tree__module_qual__collect_mq_info__V_14_14, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_0_12, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_13);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5)
{
  {
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
    MR_Word parse_tree__module_qual__collect_mq_info__conv6_STATE_VARIABLE_ImportedModules_22;
    MR_Word parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UnusedIntModules_24;

    {
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv6_STATE_VARIABLE_ImportedModules_22, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_4), &parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UnusedIntModules_24);
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv6_STATE_VARIABLE_ImportedModules_22));
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_5 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UnusedIntModules_24));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1(
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
    MR_Word parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_Modules_13;

    {
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_Modules_13);
    }
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_Modules_13));
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_for_MS_58,
  MR_Word parse_tree__module_qual__collect_mq_info__SectionInfo_1,
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2,
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3,
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

        if ((parse_tree__module_qual__collect_mq_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3;
        else
          {
            MR_Word parse_tree__module_qual__collect_mq_info__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__collect_mq_info__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box parse_tree__module_qual__collect_mq_info__Section_13 = (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 0));
            MR_Word parse_tree__module_qual__collect_mq_info__Incls_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__module_qual__collect_mq_info__Avails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 3)));
            MR_Word parse_tree__module_qual__collect_mq_info__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 4)));
            MR_Word parse_tree__module_qual__collect_mq_info__MQSection_18;
            MR_Word parse_tree__module_qual__collect_mq_info__Permissions_19;
            MR_Word parse_tree__module_qual__collect_mq_info__ImportedModules0_25;
            MR_Word parse_tree__module_qual__collect_mq_info__UnusedIntModules0_26;
            MR_Word parse_tree__module_qual__collect_mq_info__ImportedModules_27;
            MR_Word parse_tree__module_qual__collect_mq_info__UnusedIntModules_28;
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_52_52;
            MR_Word parse_tree__module_qual__collect_mq_info__V_53_53;
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_54_54;
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_55_55;
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_56_56;
            MR_Word parse_tree__module_qual__collect_mq_info__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 1)));
            void MR_CALL (* parse_tree__module_qual__collect_mq_info__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__SectionInfo_1, (MR_Integer) 1)));
            MR_Box parse_tree__module_qual__collect_mq_info__conv2_MQSection_18;
            MR_Box parse_tree__module_qual__collect_mq_info__conv1_Permissions_19;
            MR_Box parse_tree__module_qual__collect_mq_info__conv8_ImportedModules_27;
            MR_Box parse_tree__module_qual__collect_mq_info__conv7_UnusedIntModules_28;

            {
              parse_tree__module_qual__collect_mq_info__func_0(((MR_Box) parse_tree__module_qual__collect_mq_info__SectionInfo_1), parse_tree__module_qual__collect_mq_info__Section_13, &parse_tree__module_qual__collect_mq_info__conv2_MQSection_18, &parse_tree__module_qual__collect_mq_info__conv1_Permissions_19);
            }
            parse_tree__module_qual__collect_mq_info__MQSection_18 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv2_MQSection_18);
            parse_tree__module_qual__collect_mq_info__Permissions_19 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv1_Permissions_19);
            if ((parse_tree__module_qual__collect_mq_info__Incls_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_52_52 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3;
            else
              {
                MR_Word parse_tree__module_qual__collect_mq_info__Modules0_23;
                MR_Word parse_tree__module_qual__collect_mq_info__Modules_24;
                MR_Word parse_tree__module_qual__collect_mq_info__V_51_51;
                MR_Box parse_tree__module_qual__collect_mq_info__conv4_Modules_24;

                {
                  parse_tree__module_qual__mq_info_get_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__collect_mq_info__Modules0_23);
                }
                {
                  parse_tree__module_qual__collect_mq_info__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_51_51, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_51_51, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1));
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_51_51, 3) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Permissions_19));
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[2], parse_tree__module_qual__collect_mq_info__V_51_51, parse_tree__module_qual__collect_mq_info__Incls_15, ((MR_Box) (parse_tree__module_qual__collect_mq_info__Modules0_23)), &parse_tree__module_qual__collect_mq_info__conv4_Modules_24);
                }
                parse_tree__module_qual__collect_mq_info__Modules_24 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv4_Modules_24);
                {
                  parse_tree__module_qual__mq_info_set_modules_3_p_0(parse_tree__module_qual__collect_mq_info__Modules_24, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_52_52);
                }
              }
            {
              parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_52_52, &parse_tree__module_qual__collect_mq_info__ImportedModules0_25);
            }
            {
              parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_52_52, &parse_tree__module_qual__collect_mq_info__UnusedIntModules0_26);
            }
            {
              parse_tree__module_qual__collect_mq_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_53_53, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_53_53, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_53_53, 3) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__MQSection_18));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_53_53, 4) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Permissions_19));
            }
            {
              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[0], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[3], parse_tree__module_qual__collect_mq_info__V_53_53, parse_tree__module_qual__collect_mq_info__Avails_16, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ImportedModules0_25)), &parse_tree__module_qual__collect_mq_info__conv8_ImportedModules_27, ((MR_Box) (parse_tree__module_qual__collect_mq_info__UnusedIntModules0_26)), &parse_tree__module_qual__collect_mq_info__conv7_UnusedIntModules_28);
            }
            parse_tree__module_qual__collect_mq_info__ImportedModules_27 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv8_ImportedModules_27);
            parse_tree__module_qual__collect_mq_info__UnusedIntModules_28 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv7_UnusedIntModules_28);
            {
              parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(parse_tree__module_qual__collect_mq_info__ImportedModules_27, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_52_52, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_54_54);
            }
            {
              parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(parse_tree__module_qual__collect_mq_info__UnusedIntModules_28, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_54_54, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_55_55);
            }
            {
              parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(parse_tree__module_qual__collect_mq_info__MQSection_18, parse_tree__module_qual__collect_mq_info__Permissions_19, parse_tree__module_qual__collect_mq_info__Items_17, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_55_55, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_56_56);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2__tmp_copy_2 = parse_tree__module_qual__collect_mq_info__ItemBlocks_11;
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_56_56;

              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_3;
              parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = parse_tree__module_qual__collect_mq_info__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__IntSection_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__MQSection_5,
  MR_Word * parse_tree__module_qual__collect_mq_info__Permissions_6)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__PermInInt_12;
    MR_Word parse_tree__module_qual__collect_mq_info__PermInImp_13;

    if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__IntSection_4)) == (MR_mktag((MR_Integer) 1))))
      {
        *parse_tree__module_qual__collect_mq_info__MQSection_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        parse_tree__module_qual__collect_mq_info__PermInInt_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__module_qual__collect_mq_info__PermInImp_13 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
      }
    else
      {
        MR_Word parse_tree__module_qual__collect_mq_info__Locn_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
        MR_Word parse_tree__module_qual__collect_mq_info__ImportOrUse_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word parse_tree__module_qual__collect_mq_info___ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__collect_mq_info___IntFileKind_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) & (MR_Integer) 3);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__collect_mq_info__MQSection_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Locn_9));
        }
        switch (parse_tree__module_qual__collect_mq_info__ImportOrUse_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (parse_tree__module_qual__collect_mq_info__Locn_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  parse_tree__module_qual__collect_mq_info__PermInInt_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
                  break;
                case (MR_Integer) 0:
                  parse_tree__module_qual__collect_mq_info__PermInInt_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              parse_tree__module_qual__collect_mq_info__PermInImp_13 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
            }
            break;
          case (MR_Integer) 1:
            {
              switch (parse_tree__module_qual__collect_mq_info__Locn_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  parse_tree__module_qual__collect_mq_info__PermInInt_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]);
                  break;
                case (MR_Integer) 0:
                  parse_tree__module_qual__collect_mq_info__PermInInt_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              parse_tree__module_qual__collect_mq_info__PermInImp_13 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              parse_tree__module_qual__collect_mq_info__PermInInt_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]);
              parse_tree__module_qual__collect_mq_info__PermInImp_13 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
            }
            break;
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__collect_mq_info__Permissions_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__PermInInt_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__PermInImp_13));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(
  MR_Word parse_tree__module_qual__collect_mq_info__SrcSection_4,
  MR_Word * parse_tree__module_qual__collect_mq_info__MQSection_5,
  MR_Word * parse_tree__module_qual__collect_mq_info__Permissions_6)
{
  {
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
    MR_Word parse_tree__module_qual__collect_mq_info__PermInInt_7;

    switch (parse_tree__module_qual__collect_mq_info__SrcSection_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          *parse_tree__module_qual__collect_mq_info__MQSection_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          parse_tree__module_qual__collect_mq_info__PermInInt_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 0:
        {
          *parse_tree__module_qual__collect_mq_info__MQSection_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          parse_tree__module_qual__collect_mq_info__PermInInt_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__collect_mq_info__Permissions_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__PermInInt_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) 1))));
    }
  }
}

void mercury__parse_tree__module_qual__collect_mq_info__init(void)
{
}

void mercury__parse_tree__module_qual__collect_mq_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1);
}

void mercury__parse_tree__module_qual__collect_mq_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__collect_mq_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.module_qual.collect_mq_info. */
