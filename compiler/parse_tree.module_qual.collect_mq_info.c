/*
** Automatically generated from `module_qual.collect_mq_info.m'
** by the Mercury compiler,
** version 20.01-beta-2020-01-11
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


// :- module parse_tree.module_qual.collect_mq_info.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__collect_mq_info__init
ENDINIT
*/

#include "parse_tree.module_qual.collect_mq_info.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1;

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1];

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_mq_section_0_2[1];

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3;

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4];

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4];

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__429__1_2_p_0(
  MR_Word HeadVar__1_149,
  MR_Word * HeadVar__2_150);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__440__1_2_p_0(
  MR_Word HeadVar__1_156,
  MR_Word * HeadVar__2_157);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word CatchExpr_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * STATE_VARIABLE_UsedModuleNames_13,
  MR_Word STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * STATE_VARIABLE_FoundUnqual_15);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(
  MR_Word MQSection_8,
  MR_Word _Permissions_9,
  MR_Word Avail_10,
  MR_Word STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * STATE_VARIABLE_ImportedModules_22,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * STATE_VARIABLE_UnusedIntModules_24);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(
  MR_Word MQSection_8,
  MR_Word Avail_10,
  MR_Word STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * STATE_VARIABLE_ImportedModules_22,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * STATE_VARIABLE_UnusedIntModules_24);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(
  MR_Word Permissions_5,
  MR_Word Incl_6,
  MR_Word STATE_VARIABLE_Modules_0_12,
  MR_Word * STATE_VARIABLE_Modules_13);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(
  MR_Word MQSection_1,
  MR_Word Permissions_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(
  MR_Word MQSection_6,
  MR_Word Permissions_7,
  MR_Word Item_8,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_90,
  MR_Word * STATE_VARIABLE_UsedModuleNames_91,
  MR_Word STATE_VARIABLE_FoundUnqual_0_92,
  MR_Word * STATE_VARIABLE_FoundUnqual_93);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_14,
  MR_Word * STATE_VARIABLE_UsedModuleNames_15,
  MR_Word STATE_VARIABLE_FoundUnqual_0_16,
  MR_Word * STATE_VARIABLE_FoundUnqual_17);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[6][2];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[2][7];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[1][10];




static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[6][2] = {
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

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0 = {
  (MR_String) "mq_section_exported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1 = {
  (MR_String) "mq_section_local",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)
};

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_mq_section_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2 = {
  (MR_String) "mq_section_imported",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2,
  NULL,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_mq_section_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3 = {
  (MR_String) "mq_section_abstract_imported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "mq_section",
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0 },
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "section_mq_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__429__1_2_p_0(
  MR_Word HeadVar__1_149,
  MR_Word * HeadVar__2_150)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_149, HeadVar__2_150);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__440__1_2_p_0(
  MR_Word HeadVar__1_156,
  MR_Word * HeadVar__2_157)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_156, HeadVar__2_157);
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Integer Var_16 = (MR_Integer) (Var_15);
                  MR_Integer Var_17 = (MR_Integer) (ArgY1_9);

                  succeeded = (Var_16 < Var_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_16 > Var_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word CatchExpr_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * STATE_VARIABLE_UsedModuleNames_13,
  MR_Word STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * STATE_VARIABLE_FoundUnqual_15)
{
  {
    MR_bool succeeded;
    MR_Word Pattern0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_6, (MR_Integer) 0))));
    MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_6, (MR_Integer) 1))));
    MR_Word Pattern_11;
    MR_Word STATE_VARIABLE_UsedModuleNames_16_16;
    MR_Word STATE_VARIABLE_FoundUnqual_17_17;
    MR_Word SymName_29;
    MR_Word ArgTerms_30;

    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern0_9, &Pattern_11);
    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern_11, &SymName_29, &ArgTerms_30);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_FoundUnqual_18_34;
      MR_Word STATE_VARIABLE_UsedModuleNames_19_35;

      if (((MR_tag((MR_Word) SymName_29)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_29, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_31)), STATE_VARIABLE_UsedModuleNames_0_12, &STATE_VARIABLE_UsedModuleNames_19_35);
        STATE_VARIABLE_FoundUnqual_18_34 = STATE_VARIABLE_FoundUnqual_0_14;
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_18_34 = (MR_Integer) 1;
        STATE_VARIABLE_UsedModuleNames_19_35 = STATE_VARIABLE_UsedModuleNames_0_12;
      }
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_30, STATE_VARIABLE_UsedModuleNames_19_35, &STATE_VARIABLE_UsedModuleNames_16_16, STATE_VARIABLE_FoundUnqual_18_34, &STATE_VARIABLE_FoundUnqual_17_17);
    }
    else
    {
      STATE_VARIABLE_FoundUnqual_17_17 = STATE_VARIABLE_FoundUnqual_0_14;
      STATE_VARIABLE_UsedModuleNames_16_16 = STATE_VARIABLE_UsedModuleNames_0_12;
    }
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_10, STATE_VARIABLE_UsedModuleNames_16_16, STATE_VARIABLE_UsedModuleNames_13, STATE_VARIABLE_FoundUnqual_17_17, STATE_VARIABLE_FoundUnqual_15);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(
  MR_Word MQSection_8,
  MR_Word _Permissions_9,
  MR_Word Avail_10,
  MR_Word STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * STATE_VARIABLE_ImportedModules_22,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * STATE_VARIABLE_UnusedIntModules_24)
{
  parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(MQSection_8, Avail_10, STATE_VARIABLE_ImportedModules_0_21, STATE_VARIABLE_ImportedModules_22, STATE_VARIABLE_UnusedIntModules_0_23, STATE_VARIABLE_UnusedIntModules_24);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(
  MR_Word MQSection_8,
  MR_Word Avail_10,
  MR_Word STATE_VARIABLE_ImportedModules_0_21,
  MR_Word * STATE_VARIABLE_ImportedModules_22,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_23,
  MR_Word * STATE_VARIABLE_UnusedIntModules_24)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_13;
    MR_Word Context_14;

    if (((MR_tag((MR_Word) Avail_10)) == (MR_Integer) 0))
    {
      MR_Word Var_26 = (MR_Word) ((MR_Word) (Avail_10));

      ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
      Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
    }
    else
    {
      MR_Word Var_25 = (MR_Word) (MR_body((MR_Word) (Avail_10), (MR_Integer) 1));

      ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
    }
    switch (MR_tag((MR_Word) MQSection_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MQSection_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OnlyNewContexts_16;
              MR_Word STATE_VARIABLE_UnusedIntModules_32_32;

              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_13)), STATE_VARIABLE_ImportedModules_0_21, STATE_VARIABLE_ImportedModules_22);
              {
                OnlyNewContexts_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), OnlyNewContexts_16, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), OnlyNewContexts_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = mercury__map__insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), ((MR_Box) (ModuleName_13)), ((MR_Box) (OnlyNewContexts_16)), STATE_VARIABLE_UnusedIntModules_0_23, &STATE_VARIABLE_UnusedIntModules_32_32);
              if (succeeded)
                *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_32_32;
              else
              {
                MR_Word OldContexts_17;
                MR_Word OldHeadContext_18;
                MR_Word OldTailContexts_19;
                MR_Word NewContexts_20;
                MR_Word Var_33;
                MR_Box conv0_OldContexts_17;

                mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), STATE_VARIABLE_UnusedIntModules_0_23, ((MR_Box) (ModuleName_13)), &conv0_OldContexts_17);
                OldContexts_17 = ((MR_Word) (conv0_OldContexts_17));
                OldHeadContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldContexts_17, (MR_Integer) 0))));
                OldTailContexts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldContexts_17, (MR_Integer) 1))));
                {
                  Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (OldHeadContext_18));
                  MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (OldTailContexts_19));
                }
                {
                  NewContexts_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NewContexts_20, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), NewContexts_20, 1) = ((MR_Box) (Var_33));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), ((MR_Box) (ModuleName_13)), ((MR_Box) (NewContexts_20)), STATE_VARIABLE_UnusedIntModules_0_23, STATE_VARIABLE_UnusedIntModules_24);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_13)), STATE_VARIABLE_ImportedModules_0_21, STATE_VARIABLE_ImportedModules_22);
              *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_ImportedModules_22 = STATE_VARIABLE_ImportedModules_0_21;
              *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MQSection_8, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_46) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 4:
              {
                mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_13)), STATE_VARIABLE_ImportedModules_0_21, STATE_VARIABLE_ImportedModules_22);
                *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_13)), STATE_VARIABLE_ImportedModules_0_21, STATE_VARIABLE_ImportedModules_22);
                *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_ImportedModules_22 = STATE_VARIABLE_ImportedModules_0_21;
                *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_ImportedModules_22 = STATE_VARIABLE_ImportedModules_0_21;
                *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_ImportedModules_22 = STATE_VARIABLE_ImportedModules_0_21;
                *STATE_VARIABLE_UnusedIntModules_24 = STATE_VARIABLE_UnusedIntModules_0_23;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(
  MR_Word Permissions_5,
  MR_Word Incl_6,
  MR_Word STATE_VARIABLE_Modules_0_12,
  MR_Word * STATE_VARIABLE_Modules_13)
{
  {
    MR_Word IncludedModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incl_6, (MR_Integer) 0))));
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (IncludedModuleName_8));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_5, Var_14, STATE_VARIABLE_Modules_0_12, STATE_VARIABLE_Modules_13);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImportedModules_22;
    MR_Word conv5_STATE_VARIABLE_UnusedIntModules_24;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImportedModules_22, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_UnusedIntModules_24);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImportedModules_22));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_UnusedIntModules_24));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Modules_13;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Modules_13);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Modules_13));
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(
  MR_Word TypeInfo_for_MS_55,
  MR_Word SectionInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word ItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Section_14 = (MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 1));
      MR_Word Incls_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 2))));
      MR_Word Avails_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 3))));
      MR_Word Items_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 5))));
      MR_Word MQSection_19;
      MR_Word Permissions_20;
      MR_Word ImportedModules0_26;
      MR_Word UnusedIntModules0_27;
      MR_Word ImportedModules_28;
      MR_Word UnusedIntModules_29;
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_Info_51_51;
      MR_Word STATE_VARIABLE_Info_52_52;
      MR_Word STATE_VARIABLE_Info_53_53;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), SectionInfo_1, (MR_Integer) 1))));
      MR_Box conv2_MQSection_19;
      MR_Box conv1_Permissions_20;
      MR_Box conv8_ImportedModules_28;
      MR_Box conv7_UnusedIntModules_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      func_0(((MR_Box) (SectionInfo_1)), Section_14, &conv2_MQSection_19, &conv1_Permissions_20);
      MQSection_19 = ((MR_Word) (conv2_MQSection_19));
      Permissions_20 = ((MR_Word) (conv1_Permissions_20));
      if ((Incls_15 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_0_3;
      else
      {
        MR_Word Modules0_24;
        MR_Word Modules_25;
        MR_Word Var_48;
        MR_Box conv4_Modules_25;

        parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_3, &Modules0_24);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Permissions_20));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_48, Incls_15, ((MR_Box) (Modules0_24)), &conv4_Modules_25);
        Modules_25 = ((MR_Word) (conv4_Modules_25));
        parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_25, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_49_49);
      }
      parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_49_49, &ImportedModules0_26);
      parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(STATE_VARIABLE_Info_49_49, &UnusedIntModules0_27);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (MQSection_19));
        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Permissions_20));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), Var_50, Avails_16, ((MR_Box) (ImportedModules0_26)), &conv8_ImportedModules_28, ((MR_Box) (UnusedIntModules0_27)), &conv7_UnusedIntModules_29);
      ImportedModules_28 = ((MR_Word) (conv8_ImportedModules_28));
      UnusedIntModules_29 = ((MR_Word) (conv7_UnusedIntModules_29));
      parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_28, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
      parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedIntModules_29, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_52_52);
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(MQSection_19, Permissions_20, Items_18, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_11;
      next_value_of_STATE_VARIABLE_Info_0_3 = STATE_VARIABLE_Info_53_53;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_3 = next_value_of_STATE_VARIABLE_Info_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(
  MR_Word MQSection_1,
  MR_Word Permissions_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word Item_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(MQSection_1, Permissions_2, Item_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Items_14;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    parse_tree__module_qual__mq_info_set_module_used_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(
  MR_Word MQSection_6,
  MR_Word Permissions_7,
  MR_Word Item_8,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Item_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemInstDefn_20 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 1));
          MR_Word SymName_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_20, (MR_Integer) 0))));
          MR_Word Params_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_20, (MR_Integer) 1))));

          succeeded = (MQSection_6 == (MR_Word) ((MR_Unsigned) 8U));
          if (succeeded)
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
          else
          {
            MR_Word Insts0_26;
            MR_Word Insts_27;
            MR_Word Var_82;
            MR_Integer Arity_86;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), Params_89, &Arity_86);
            parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_0_70, &Insts0_26);
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (SymName_88));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Arity_86));
            }
            parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_7, Var_82, Insts0_26, &Insts_27);
            parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_27, STATE_VARIABLE_Info_0_70, STATE_VARIABLE_Info_71);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemModeDefn_28 = (MR_Word) (MR_body((MR_Word) (Item_8), (MR_Integer) 2));
          MR_Word SymName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_28, (MR_Integer) 0))));
          MR_Word Params_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_28, (MR_Integer) 1))));

          succeeded = (MQSection_6 == (MR_Word) ((MR_Unsigned) 8U));
          if (succeeded)
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
          else
          {
            MR_Word Modes0_33;
            MR_Word Modes_34;
            MR_Word Var_80;
            MR_Integer Arity_91;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), Params_94, &Arity_91);
            parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_0_70, &Modes0_33);
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (SymName_93));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Arity_91));
            }
            parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_7, Var_80, Modes0_33, &Modes_34);
            parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_34, STATE_VARIABLE_Info_0_70, STATE_VARIABLE_Info_71);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 4:
            {
              MR_Word ItemPromise_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
              MR_Word Goal_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_35, (MR_Integer) 1))));
              MR_Word UsedModuleNames_42;
              MR_Word FoundUnqual_43;
              MR_Word Var_75;

              Var_75 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_37, Var_75, &UsedModuleNames_42, (MR_Integer) 0, &FoundUnqual_43);
              switch (FoundUnqual_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word InInt_44;
                    MR_Word Var_78;
                    MR_Box conv1_STATE_VARIABLE_Info_71;

                    InInt_44 = parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(MQSection_6);
                    {
                      Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (InInt_44));
                    }
                    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_78, UsedModuleNames_42, ((MR_Box) (STATE_VARIABLE_Info_0_70)), &conv1_STATE_VARIABLE_Info_71);
                    *STATE_VARIABLE_Info_71 = ((MR_Word) (conv1_STATE_VARIABLE_Info_71));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word UnusedModules_45;

                    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), &UnusedModules_45);
                    parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_45, STATE_VARIABLE_Info_0_70, STATE_VARIABLE_Info_71);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ItemTypeClass_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
              MR_Word SymName_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_46, (MR_Integer) 0))));
              MR_Word Params_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_46, (MR_Integer) 1))));

              succeeded = (MQSection_6 == (MR_Word) ((MR_Unsigned) 8U));
              if (succeeded)
                *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
              else
              {
                MR_Word Classes0_53;
                MR_Word Classes_54;
                MR_Word Var_73;
                MR_Integer Arity_96;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), Params_99, &Arity_96);
                parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_70, &Classes0_53);
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (SymName_98));
                  MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (Arity_96));
                }
                parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_7, Var_73, Classes0_53, &Classes_54);
                parse_tree__module_qual__mq_info_set_classes_3_p_0(Classes_54, STATE_VARIABLE_Info_0_70, STATE_VARIABLE_Info_71);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ItemInstance_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) MQSection_6)) == (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word InstanceModule_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_55, (MR_Integer) 6))));
                MR_Word ImportedInstanceModules0_58;
                MR_Word ImportedInstanceModules_59;

                parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(STATE_VARIABLE_Info_0_70, &ImportedInstanceModules0_58);
                mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (InstanceModule_57)), ImportedInstanceModules0_58, &ImportedInstanceModules_59);
                parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(ImportedInstanceModules_59, STATE_VARIABLE_Info_0_70, STATE_VARIABLE_Info_71);
              }
              else
                *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            }
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 10:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
          case (MR_Integer) 11:
            {
              MR_Word ItemTypeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_8, (MR_Integer) 1))));
              MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_10, (MR_Integer) 0))));
              MR_Word Params_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_10, (MR_Integer) 1))));

              succeeded = (MQSection_6 == (MR_Word) ((MR_Unsigned) 8U));
              if (succeeded)
                *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
              else
              {
                MR_Integer Arity_17;
                MR_Word Types0_18;
                MR_Word Types_19;
                MR_Word Var_84;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), Params_12, &Arity_17);
                parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_70, &Types0_18);
                {
                  Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (SymName_11));
                  MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Arity_17));
                }
                parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_7, Var_84, Types0_18, &Types_19);
                parse_tree__module_qual__mq_info_set_types_3_p_0(Types_19, STATE_VARIABLE_Info_0_70, STATE_VARIABLE_Info_71);
              }
            }
            break;
          case (MR_Integer) 12:
            *STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_0_70;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_UsedModuleNames_13;
    MR_Word conv2_STATE_VARIABLE_FoundUnqual_15;

    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_UsedModuleNames_13, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_FoundUnqual_15);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_UsedModuleNames_13));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_FoundUnqual_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_150;

    parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__429__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_150);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_150));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_157;

    parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__440__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_157);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_157));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_90,
  MR_Word * STATE_VARIABLE_UsedModuleNames_91,
  MR_Word STATE_VARIABLE_FoundUnqual_0_92,
  MR_Word * STATE_VARIABLE_FoundUnqual_93)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LHS0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
          MR_Word RHS0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2))));
          MR_Word LHS_88;
          MR_Word RHS_89;
          MR_Word STATE_VARIABLE_UsedModuleNames_94_94;
          MR_Word STATE_VARIABLE_FoundUnqual_95_95;

          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LHS0_86, &LHS_88);
          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RHS0_87, &RHS_89);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(LHS_88, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_94_94, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_95_95);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(RHS_89, STATE_VARIABLE_UsedModuleNames_94_94, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_95_95, STATE_VARIABLE_FoundUnqual_93);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_FoundUnqual_98_98;
          MR_Word STATE_VARIABLE_UsedModuleNames_99_99;
          MR_Word ArgTerms0_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 2))));
          MR_Word ArgTerms_138;

          if (((MR_tag((MR_Word) SymName_80)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_80, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_82)), STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_99_99);
            STATE_VARIABLE_FoundUnqual_98_98 = STATE_VARIABLE_FoundUnqual_0_92;
          }
          else
          {
            STATE_VARIABLE_FoundUnqual_98_98 = (MR_Integer) 1;
            STATE_VARIABLE_UsedModuleNames_99_99 = STATE_VARIABLE_UsedModuleNames_0_90;
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[1]), ArgTerms0_137, &ArgTerms_138);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_138, STATE_VARIABLE_UsedModuleNames_99_99, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_98_98, STATE_VARIABLE_FoundUnqual_93);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 1))));
          MR_Word SubGoalB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_UsedModuleNames_130_130;
          MR_Word STATE_VARIABLE_FoundUnqual_131_131;
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
          MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_10, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_130, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_131);
          // direct tailcall eliminated
          ;
          next_value_of_Goal_6 = SubGoalB_11;
          next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_130;
          next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_131;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
          STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedModuleNames_91 = STATE_VARIABLE_UsedModuleNames_0_90;
              *STATE_VARIABLE_FoundUnqual_93 = STATE_VARIABLE_FoundUnqual_0_92;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CondGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_UsedModuleNames_106_106;
              MR_Word STATE_VARIABLE_FoundUnqual_107_107;
              MR_Word STATE_VARIABLE_UsedModuleNames_108_108;
              MR_Word STATE_VARIABLE_FoundUnqual_109_109;
              MR_Word ThenGoal_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 5))));
              MR_Word ElseGoal_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(CondGoal_74, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_106_106, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_107_107);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_135, STATE_VARIABLE_UsedModuleNames_106_106, &STATE_VARIABLE_UsedModuleNames_108_108, STATE_VARIABLE_FoundUnqual_107_107, &STATE_VARIABLE_FoundUnqual_109_109);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = ElseGoal_136;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_108_108;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_109_109;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoalA_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_166;
              MR_Word STATE_VARIABLE_FoundUnqual_131_167;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_164, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_166, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_167);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_165;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_166;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_167;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoal_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_6 = SubGoal_176;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              *STATE_VARIABLE_UsedModuleNames_91 = STATE_VARIABLE_UsedModuleNames_0_90;
              *STATE_VARIABLE_FoundUnqual_93 = STATE_VARIABLE_FoundUnqual_0_92;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_179;
              MR_Word STATE_VARIABLE_FoundUnqual_131_180;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_177, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_179, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_180);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_178;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_179;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_180;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubGoal_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_185;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubGoal_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_184;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoal_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_183;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubGoal_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_182;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word SubGoal_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_181;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SubGoal_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_187;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SubGoal_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_186;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SubGoal_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_188;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubGoal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_19;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word SubGoal_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_189;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 5))));
              MR_Word OrElseGoals_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_UsedModuleNames_112_112;
              MR_Word STATE_VARIABLE_FoundUnqual_113_113;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(MainGoal_69, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_112_112, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_113_113);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(OrElseGoals_70, STATE_VARIABLE_UsedModuleNames_112_112, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_113_113, STATE_VARIABLE_FoundUnqual_93);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word MaybeElseGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 5))));
              MR_Word Catches_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_UsedModuleNames_116_116;
              MR_Word STATE_VARIABLE_FoundUnqual_117_117;
              MR_Word STATE_VARIABLE_UsedModuleNames_118_118;
              MR_Word STATE_VARIABLE_FoundUnqual_119_119;
              MR_Word STATE_VARIABLE_UsedModuleNames_120_120;
              MR_Word STATE_VARIABLE_FoundUnqual_121_121;
              MR_Word STATE_VARIABLE_UsedModuleNames_123_123;
              MR_Word STATE_VARIABLE_FoundUnqual_124_124;
              MR_Word SubGoal_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Box conv5_STATE_VARIABLE_UsedModuleNames_123_123;
              MR_Box conv4_STATE_VARIABLE_FoundUnqual_124_124;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal_134, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_116_116, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_117_117);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_58, STATE_VARIABLE_UsedModuleNames_116_116, &STATE_VARIABLE_UsedModuleNames_118_118, STATE_VARIABLE_FoundUnqual_117_117, &STATE_VARIABLE_FoundUnqual_119_119);
              if ((MaybeElseGoal_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_UsedModuleNames_120_120 = STATE_VARIABLE_UsedModuleNames_118_118;
                STATE_VARIABLE_FoundUnqual_121_121 = STATE_VARIABLE_FoundUnqual_119_119;
              }
              else
              {
                MR_Word ElseGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_59, (MR_Integer) 0))));

                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ElseGoal_62, STATE_VARIABLE_UsedModuleNames_118_118, &STATE_VARIABLE_UsedModuleNames_120_120, STATE_VARIABLE_FoundUnqual_119_119, &STATE_VARIABLE_FoundUnqual_121_121);
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[3]), Catches_60, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_120_120)), &conv5_STATE_VARIABLE_UsedModuleNames_123_123, ((MR_Box) (STATE_VARIABLE_FoundUnqual_121_121)), &conv4_STATE_VARIABLE_FoundUnqual_124_124);
              STATE_VARIABLE_UsedModuleNames_123_123 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModuleNames_123_123));
              STATE_VARIABLE_FoundUnqual_124_124 = ((MR_Word) (conv4_STATE_VARIABLE_FoundUnqual_124_124));
              if ((MaybeCatchAny_61 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_UsedModuleNames_91 = STATE_VARIABLE_UsedModuleNames_123_123;
                *STATE_VARIABLE_FoundUnqual_93 = STATE_VARIABLE_FoundUnqual_124_124;
              }
              else
              {
                MR_Word CatchAnyGoal_64;
                MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_61, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_6;
                MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
                MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

                CatchAnyGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_125, (MR_Integer) 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_6 = CatchAnyGoal_64;
                next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_123_123;
                next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_124_124;
                Goal_6 = next_value_of_Goal_6;
                STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
                STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_174;
              MR_Word STATE_VARIABLE_FoundUnqual_131_175;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_172, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_174, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_175);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_173;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_174;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_175;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_170;
              MR_Word STATE_VARIABLE_FoundUnqual_131_171;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_168, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_170, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_171);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_169;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_170;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_171;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ArgTerms0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word ArgTerms_78;

              mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[2]), ArgTerms0_77, &ArgTerms_78);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_78, STATE_VARIABLE_UsedModuleNames_0_90, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_0_92, STATE_VARIABLE_FoundUnqual_93);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FoundUnqual_5 = STATE_VARIABLE_FoundUnqual_0_4;
      *STATE_VARIABLE_UsedModuleNames_3 = STATE_VARIABLE_UsedModuleNames_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_20_20;
      MR_Word STATE_VARIABLE_FoundUnqual_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_12, STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_20_20, STATE_VARIABLE_FoundUnqual_0_4, &STATE_VARIABLE_FoundUnqual_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_UsedModuleNames_0_2 = STATE_VARIABLE_UsedModuleNames_20_20;
      next_value_of_STATE_VARIABLE_FoundUnqual_0_4 = STATE_VARIABLE_FoundUnqual_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedModuleNames_0_2 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      STATE_VARIABLE_FoundUnqual_0_4 = next_value_of_STATE_VARIABLE_FoundUnqual_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_14,
  MR_Word * STATE_VARIABLE_UsedModuleNames_15,
  MR_Word STATE_VARIABLE_FoundUnqual_0_16,
  MR_Word * STATE_VARIABLE_FoundUnqual_17)
{
  {
    MR_bool succeeded;
    MR_Word SymName_9;
    MR_Word ArgTerms_10;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6, &SymName_9, &ArgTerms_10);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_FoundUnqual_18_18;
      MR_Word STATE_VARIABLE_UsedModuleNames_19_19;

      if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_UsedModuleNames_0_14, &STATE_VARIABLE_UsedModuleNames_19_19);
        STATE_VARIABLE_FoundUnqual_18_18 = STATE_VARIABLE_FoundUnqual_0_16;
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_18_18 = (MR_Integer) 1;
        STATE_VARIABLE_UsedModuleNames_19_19 = STATE_VARIABLE_UsedModuleNames_0_14;
      }
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_10, STATE_VARIABLE_UsedModuleNames_19_19, STATE_VARIABLE_UsedModuleNames_15, STATE_VARIABLE_FoundUnqual_18_18, STATE_VARIABLE_FoundUnqual_17);
    }
    else
    {
      *STATE_VARIABLE_FoundUnqual_17 = STATE_VARIABLE_FoundUnqual_0_16;
      *STATE_VARIABLE_UsedModuleNames_15 = STATE_VARIABLE_UsedModuleNames_0_14;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FoundUnqual_5 = STATE_VARIABLE_FoundUnqual_0_4;
      *STATE_VARIABLE_UsedModuleNames_3 = STATE_VARIABLE_UsedModuleNames_0_2;
    }
    else
    {
      MR_Word Term_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_20_20;
      MR_Word STATE_VARIABLE_FoundUnqual_21_21;
      MR_Word SymName_31;
      MR_Word ArgTerms_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12, &SymName_31, &ArgTerms_32);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_FoundUnqual_18_36;
        MR_Word STATE_VARIABLE_UsedModuleNames_19_37;

        if (((MR_tag((MR_Word) SymName_31)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_31, (MR_Integer) 0))));

          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_33)), STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_19_37);
          STATE_VARIABLE_FoundUnqual_18_36 = STATE_VARIABLE_FoundUnqual_0_4;
        }
        else
        {
          STATE_VARIABLE_FoundUnqual_18_36 = (MR_Integer) 1;
          STATE_VARIABLE_UsedModuleNames_19_37 = STATE_VARIABLE_UsedModuleNames_0_2;
        }
        parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_32, STATE_VARIABLE_UsedModuleNames_19_37, &STATE_VARIABLE_UsedModuleNames_20_20, STATE_VARIABLE_FoundUnqual_18_36, &STATE_VARIABLE_FoundUnqual_21_21);
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_21_21 = STATE_VARIABLE_FoundUnqual_0_4;
        STATE_VARIABLE_UsedModuleNames_20_20 = STATE_VARIABLE_UsedModuleNames_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_13;
      next_value_of_STATE_VARIABLE_UsedModuleNames_0_2 = STATE_VARIABLE_UsedModuleNames_20_20;
      next_value_of_STATE_VARIABLE_FoundUnqual_0_4 = STATE_VARIABLE_FoundUnqual_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedModuleNames_0_2 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      STATE_VARIABLE_FoundUnqual_0_4 = next_value_of_STATE_VARIABLE_FoundUnqual_0_4;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(
  MR_Word IntSection_4,
  MR_Word * MQSection_5,
  MR_Word * Permissions_6)
{
  {
    MR_Word PermInInt_12;
    MR_Word PermInImp_13;

    if (((MR_tag((MR_Word) IntSection_4)) == (MR_Integer) 1))
    {
      *MQSection_5 = (MR_Word) ((MR_Unsigned) 8U);
      PermInInt_12 = (MR_Word) ((MR_Unsigned) 0U);
      PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      MR_Word Locn_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSection_4, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
      MR_Word ImportOrUse_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSection_4, (MR_Integer) 1))) & (MR_Integer) 3);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MQSection_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Locn_9));
      }
      switch (ImportOrUse_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            switch (Locn_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 3:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                PermInInt_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
                break;
              case (MR_Integer) 0:
                PermInInt_12 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
          }
          break;
        case (MR_Integer) 1:
          {
            switch (Locn_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 3:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                PermInInt_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
                break;
              case (MR_Integer) 0:
                PermInInt_12 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 2:
          {
            PermInInt_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
            PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
          }
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Permissions_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PermInInt_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PermInImp_13));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(
  MR_Word SrcSection_4,
  MR_Word * MQSection_5,
  MR_Word * Permissions_6)
{
  {
    MR_Word PermInInt_7;

    switch (SrcSection_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          *MQSection_5 = (MR_Word) ((MR_Unsigned) 4U);
          PermInInt_7 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          *MQSection_5 = (MR_Word) ((MR_Unsigned) 0U);
          PermInInt_7 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Permissions_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PermInInt_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) 1))));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.module_qual.collect_mq_info.
