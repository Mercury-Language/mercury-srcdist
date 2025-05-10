/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version rotd-2025-05-10
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


// :- module query.
// :- implementation.

/*
INIT mercury__query__init
ENDINIT
*/

#include "query.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "coverage.mih"
#include "create_report.mih"
#include "deconstruct.mih"
#include "display.mih"
#include "display_report.mih"
#include "enum.mih"
#include "exception.mih"
#include "exclude.mih"
#include "html_format.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "report.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "util.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.program_representation.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_alloc_fields_0[3];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3];

static const MR_Integer query__query__functor_number_map_alloc_fields_0[3];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_box_tables_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2];

static const MR_Integer query__query__functor_number_map_box_tables_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_caller_groups_0[4];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4];

static const MR_Integer query__query__functor_number_map_caller_groups_0[4];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_callseqs_fields_0[3];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3];

static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0;

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1];

static const MR_ConstString query__query__field_names_cmd_0_2[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2;

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3;

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1];

static const MR_ConstString query__query__field_names_cmd_0_4[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1];

static const MR_ConstString query__query__field_names_cmd_0_5[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1];

static const MR_ConstString query__query__field_names_cmd_0_6[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_7[1];

static const MR_ConstString query__query__field_names_cmd_0_7[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[5];

static const MR_ConstString query__query__field_names_cmd_0_8[5];

static const MR_DuArgLocn query__query__field_locns_cmd_0_8[5];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[1];

static const MR_ConstString query__query__field_names_cmd_0_9[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_10[1];

static const MR_ConstString query__query__field_names_cmd_0_10[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1];

static const MR_ConstString query__query__field_names_cmd_0_11[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11;

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12;

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[1];

static const MR_ConstString query__query__field_names_cmd_0_14[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1];

static const MR_ConstString query__query__field_names_cmd_0_15[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1];

static const MR_ConstString query__query__field_names_cmd_0_16[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[4];

static const MR_ConstString query__query__field_names_cmd_0_17[4];

static const MR_DuArgLocn query__query__field_locns_cmd_0_17[4];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1];

static const MR_ConstString query__query__field_names_cmd_0_18[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1];

static const MR_ConstString query__query__field_names_cmd_0_19[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1];

static const MR_ConstString query__query__field_names_cmd_0_20[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1];

static const MR_ConstString query__query__field_names_cmd_0_21[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1];

static const MR_ConstString query__query__field_names_cmd_0_22[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16];

static const MR_DuPtagLayout query__query__du_ptag_ordered_cmd_0[4];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23];

static const MR_Integer query__query__functor_number_map_cmd_0[23];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_colour_column_groups_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2];

static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_contour_exclusion_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2];

static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_cost_kind_0[6];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6];

static const MR_Integer query__query__functor_number_map_cost_kind_0[6];

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0;

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3];

static const MR_ConstString query__query__field_names_deep_query_0_0[3];

static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1];

static const MR_Integer query__query__functor_number_map_deep_query_0[1];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_descendants_meaningful_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2];

static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_developer_mode_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2];

static const MR_Integer query__query__functor_number_map_developer_mode_0[2];

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2];

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0;

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1;

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3];

static const MR_Integer query__query__functor_number_map_display_limit_0[3];

static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5];

static const MR_ConstString query__query__field_names_fields_0_0[5];

static const MR_DuArgLocn query__query__field_locns_fields_0_0[5];

static const MR_DuFunctorDesc query__query__du_functor_desc_fields_0_0;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1];

static const MR_Integer query__query__functor_number_map_fields_0[1];

static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3];

static const MR_ConstString query__query__field_names_inactive_items_0_0[3];

static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3];

static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1];

static const MR_Integer query__query__functor_number_map_inactive_items_0[1];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_inactive_status_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2];

static const MR_Integer query__query__functor_number_map_inactive_status_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_include_descendants_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2];

static const MR_Integer query__query__functor_number_map_include_descendants_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_measurement_scope_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2];

static const MR_Integer query__query__functor_number_map_measurement_scope_0[2];

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0;

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1];

static const MR_DuArgLocn query__query__field_locns_memory_fields_0_1[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1;

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1];

static const MR_DuArgLocn query__query__field_locns_memory_fields_0_2[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3];

static const MR_Integer query__query__functor_number_map_memory_fields_0[3];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_module_qual_0[3];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3];

static const MR_Integer query__query__functor_number_map_module_qual_0[3];

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0;

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1;

static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3];

static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3];

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3];

static const MR_Integer query__query__functor_number_map_order_criteria_0[3];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_port_fields_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2];

static const MR_Integer query__query__functor_number_map_port_fields_0[2];

static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12];

static const MR_ConstString query__query__field_names_preferences_0_0[12];

static const MR_DuArgLocn query__query__field_locns_preferences_0_0[12];

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1];

static const MR_Integer query__query__functor_number_map_preferences_0[1];

static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0;

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1;

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2;

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2];

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1];

static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2];

static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3];

static const MR_Integer query__query__functor_number_map_preferences_indication_0[3];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_summarize_ho_call_sites_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2];

static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_time_fields_0[6];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6];

static const MR_Integer query__query__functor_number_map_time_fields_0[6];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_time_format_0[3];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3];

static const MR_Integer query__query__functor_number_map_time_format_0[3];

static const MR_TableStepDesc table_input_steps_for_create_and_memoize_report_3_p_0[2];

static MR_TableStepStats table_call_step_stats_for_create_and_memoize_report_3_p_0[2];

static MR_TableStepStats table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2];

static MR_TableStepStats table_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

static MR_TableStepStats table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

static MR_ProcTableInfo table_info_for_create_and_memoize_report_3_p_0;

static void MR_CALL 
query__exec_4_p_0(
  MR_Word Cmd_5,
  MR_Word Prefs_6,
  MR_Word Deep_7,
  MR_String * HTMLStr_8);

static void MR_CALL 
query__create_and_memoize_report_3_p_0(
  MR_Word Cmd_4,
  MR_Word Deep_5,
  MR_Word * Report_6);

static void MR_CALL 
query__try_exec_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
  MR_String LimitStr_3,
  MR_Word * Limit_4);

static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
  MR_Word Pref_3);

static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void);

static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
  MR_Word DevMode_3);

static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
  MR_Word Items_3);

static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
  MR_Word Scheme_3);

static MR_String MR_CALL 
query__box_to_string_1_f_0(
  MR_Word Box_3);

static MR_String MR_CALL 
query__fields_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
  MR_Word Cmd_3);

static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void);

static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
  MR_Word Contour_3);

static MR_String MR_CALL 
query__scope_to_string_1_f_0(
  MR_Word Scope_3);

static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
  MR_Word InclDesc_3);

static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
  MR_Word CostKind_3);

static MR_String MR_CALL 
query__limit_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
  MR_Word CallerGroups_3);

static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void);

static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void);

static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____box_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____deep_query_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____display_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____module_qual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____port_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____preferences_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____time_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
query____Compare____time_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box query_scalar_common_1[4][2];

static /* final */ const MR_Box query_scalar_common_2[17][1];

static /* final */ const MR_Box query_scalar_common_9[1][7];


struct query__vector_common_type_3_0_s {
  const MR_String query__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct query__vector_common_type_3_0_s query_vector_common_3[22];

struct query__vector_common_type_4_0_s {
  const MR_String query__vector_common_type_4_0__vct_4_f_0;
  const MR_Word query__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[4];

struct query__vector_common_type_5_0_s {
  const MR_String query__vector_common_type_5_0__vct_5_f_0;
  const MR_Word query__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[12];

struct query__vector_common_type_6_0_s {
  const MR_String query__vector_common_type_6_0__vct_6_f_0;
  const MR_Word query__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[16];

struct query__vector_common_type_7_0_s {
  const MR_String query__vector_common_type_7_0__vct_7_f_0;
  const MR_Word query__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[6];

struct query__vector_common_type_8_0_s {
  const MR_String query__vector_common_type_8_0__vct_8_f_0;
  const MR_Word query__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[5];



static /* final */ const MR_Box query_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
  /* row   3 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 7)) | (((((MR_Unsigned) 5U << 4)) | (((((MR_Unsigned) 2U << 2)) | (MR_Unsigned) 1U)))))),
    ((MR_Box) (MR_mkword(1, &query_scalar_common_2[5])))
  },
};

static /* final */ const MR_Box query_scalar_common_2[17][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) 5)) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))) },
  /* row   8 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row  10 */
  { (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U)))) },
  /* row  11 */
  { (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))) },
  /* row  12 */
  { (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)))) },
  /* row  13 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1)))) },
  /* row  14 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U)))) },
  /* row  15 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 1U << 1)))) },
  /* row  16 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)))) },
};

static /* final */ const MR_Box query_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct query__vector_common_type_3_0_s query_vector_common_3[22] = {
  /* row   0 */   { (MR_String) "cs" },
  /* row   1 */   { (MR_String) "pr" },
  /* row   2 */   { (MR_String) "mo" },
  /* row   3 */   { (MR_String) "cl" },
  /* row   4 */   { (MR_String) "calls" },
  /* row   5 */   { (MR_String) "redos" },
  /* row   6 */   { (MR_String) "time" },
  /* row   7 */   { (MR_String) "callseqs" },
  /* row   8 */   { (MR_String) "allocs" },
  /* row   9 */   { (MR_String) "words" },
  /* row  10 */   { (MR_String) "_" },
  /* row  11 */   { (MR_String) "q" },
  /* row  12 */   { (MR_String) "t" },
  /* row  13 */   { (MR_String) "qt" },
  /* row  14 */   { (MR_String) "tp" },
  /* row  15 */   { (MR_String) "qtp" },
  /* row  16 */   { (MR_String) "calls" },
  /* row  17 */   { (MR_String) "redos" },
  /* row  18 */   { (MR_String) "time" },
  /* row  19 */   { (MR_String) "callseqs" },
  /* row  20 */   { (MR_String) "allocs" },
  /* row  21 */   { (MR_String) "words" },
};

static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[4] = {
  /* row   0 */
  {
    (MR_String) "cl",
    (MR_Integer) 3
  },
  /* row   1 */
  {
    (MR_String) "cs",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "mo",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "pr",
    (MR_Integer) 1
  },
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[12] = {
  /* row   0 */
  {
    (MR_String) "allocs",
    (MR_Integer) 4
  },
  /* row   1 */
  {
    (MR_String) "calls",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "callseqs",
    (MR_Integer) 3
  },
  /* row   3 */
  {
    (MR_String) "redos",
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_String) "time",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "words",
    (MR_Integer) 5
  },
  /* row   6 */
  {
    (MR_String) "allocs",
    (MR_Integer) 4
  },
  /* row   7 */
  {
    (MR_String) "calls",
    (MR_Integer) 0
  },
  /* row   8 */
  {
    (MR_String) "callseqs",
    (MR_Integer) 3
  },
  /* row   9 */
  {
    (MR_String) "redos",
    (MR_Integer) 1
  },
  /* row  10 */
  {
    (MR_String) "time",
    (MR_Integer) 2
  },
  /* row  11 */
  {
    (MR_String) "words",
    (MR_Integer) 5
  },
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[16] = {
  /* row   0 */
  {
    (MR_String) "hhs",
    (MR_Word) (&query_scalar_common_2[10])
  },
  /* row   1 */
  {
    (MR_String) "ssh",
    (MR_Word) (&query_scalar_common_2[15])
  },
  /* row   2 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    (MR_String) "shs",
    (MR_Word) (&query_scalar_common_2[14])
  },
  /* row   6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    (MR_String) "shh",
    (MR_Word) (&query_scalar_common_2[13])
  },
  /* row   9 */
  {
    (MR_String) "hss",
    (MR_Word) (&query_scalar_common_2[12])
  },
  /* row  10 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    (MR_String) "hhh",
    (MR_Word) (&query_scalar_common_2[7])
  },
  /* row  12 */
  {
    (MR_String) "hsh",
    (MR_Word) (&query_scalar_common_2[11])
  },
  /* row  13 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    (MR_String) "sss",
    (MR_Word) (&query_scalar_common_2[16])
  },
  /* row  15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[6] = {
  /* row   0 */
  {
    (MR_String) "_",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "q",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "qt",
    (MR_Integer) 3
  },
  /* row   3 */
  {
    (MR_String) "qtp",
    (MR_Integer) 5
  },
  /* row   4 */
  {
    (MR_String) "t",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "tp",
    (MR_Integer) 4
  },
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[5] = {
  /* row   0 */
  {
    (MR_String) "B",
    (MR_Word) (MR_mkword(2, &query_scalar_common_2[9]))
  },
  /* row   1 */
  {
    (MR_String) "W",
    (MR_Word) (MR_mkword(2, &query_scalar_common_2[5]))
  },
  /* row   2 */
  {
    (MR_String) "_",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    (MR_String) "b",
    (MR_Word) (MR_mkword(1, &query_scalar_common_2[9]))
  },
  /* row   4 */
  {
    (MR_String) "w",
    (MR_Word) (MR_mkword(1, &query_scalar_common_2[5]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_0,
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2,
  &query__query__enum_functor_desc_alloc_fields_0_0
};

static const MR_Integer query__query__functor_number_map_alloc_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_alloc_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____alloc_fields_0_0_10001)),
  ((MR_Box) (query____Compare____alloc_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "alloc_fields",
  { query__query__enum_name_ordered_alloc_fields_0 },
  { query__query__enum_ordinal_ordered_alloc_fields_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_alloc_fields_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

static const MR_Integer query__query__functor_number_map_box_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_box_tables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____box_tables_0_0_10001)),
  ((MR_Box) (query____Compare____box_tables_0_0_10001)),
  (MR_String) "query",
  (MR_String) "box_tables",
  { query__query__enum_name_ordered_box_tables_0 },
  { query__query__enum_ordinal_ordered_box_tables_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_box_tables_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  INT32_C(2)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_1,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_3
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_3,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_1
};

static const MR_Integer query__query__functor_number_map_caller_groups_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_caller_groups_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____caller_groups_0_0_10001)),
  ((MR_Box) (query____Compare____caller_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "caller_groups",
  { query__query__enum_name_ordered_caller_groups_0 },
  { query__query__enum_ordinal_ordered_caller_groups_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  query__query__functor_number_map_caller_groups_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_0,
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2,
  &query__query__enum_functor_desc_callseqs_fields_0_0
};

static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_callseqs_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____callseqs_fields_0_0_10001)),
  ((MR_Box) (query____Compare____callseqs_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "callseqs_fields",
  { query__query__enum_name_ordered_callseqs_fields_0 },
  { query__query__enum_ordinal_ordered_callseqs_fields_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_callseqs_fields_0,

};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0 = {
  (MR_String) "deep_cmd_quit",
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

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1 = {
  (MR_String) "deep_cmd_restart",
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

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_ConstString query__query__field_names_cmd_0_2[1] = { (MR_String) "cmd_timeout_minutes" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2 = {
  (MR_String) "deep_cmd_timeout",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  query__query__field_types_cmd_0_2,
  query__query__field_names_cmd_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3 = {
  (MR_String) "deep_cmd_menu",
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

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = { (MR_PseudoTypeInfo) (&query__maybe__ti_maybe_1builtin__type_ctor_info_int_0) };

static const MR_ConstString query__query__field_names_cmd_0_4[1] = { (MR_String) "cmd_root_maybe_action" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4 = {
  (MR_String) "deep_cmd_root",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  query__query__field_types_cmd_0_4,
  query__query__field_names_cmd_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_5[1] = { (MR_String) "cmd_clique_clique_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5 = {
  (MR_String) "deep_cmd_clique",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(5),
  query__query__field_types_cmd_0_5,
  query__query__field_names_cmd_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_6[1] = { (MR_String) "cmd_crc_clique_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6 = {
  (MR_String) "deep_cmd_clique_recursive_costs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(6),
  query__query__field_types_cmd_0_6,
  query__query__field_names_cmd_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_7[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_7[1] = { (MR_String) "cmd_proc_proc_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7 = {
  (MR_String) "deep_cmd_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(7),
  query__query__field_types_cmd_0_7,
  query__query__field_names_cmd_0_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[5] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_caller_groups_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_contour_exclusion_0)
};

static const MR_ConstString query__query__field_names_cmd_0_8[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

static const MR_DuArgLocn query__query__field_locns_cmd_0_8[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8 = {
  (MR_String) "deep_cmd_proc_callers",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(8),
  query__query__field_types_cmd_0_8,
  query__query__field_names_cmd_0_8,
  query__query__field_locns_cmd_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_9[1] = { (MR_String) "cmd_static_coverage_ps" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9 = {
  (MR_String) "deep_cmd_static_procrep_coverage",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(9),
  query__query__field_types_cmd_0_9,
  query__query__field_names_cmd_0_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_10[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_10[1] = { (MR_String) "cmd_dynamic_coverage_pd" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10 = {
  (MR_String) "deep_cmd_dynamic_procrep_coverage",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(10),
  query__query__field_types_cmd_0_10,
  query__query__field_names_cmd_0_10,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_11[1] = { (MR_String) "cmd_csdvu_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11 = {
  (MR_String) "deep_cmd_call_site_dynamic_var_use",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(11),
  query__query__field_types_cmd_0_11,
  query__query__field_names_cmd_0_11,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12 = {
  (MR_String) "deep_cmd_recursion_types_frequency",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13 = {
  (MR_String) "deep_cmd_program_modules",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_ConstString query__query__field_names_cmd_0_14[1] = { (MR_String) "cmd_module_module_name" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14 = {
  (MR_String) "deep_cmd_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(14),
  query__query__field_types_cmd_0_14,
  query__query__field_names_cmd_0_14,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_ConstString query__query__field_names_cmd_0_15[1] = { (MR_String) "cmd_mgs_module_name" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15 = {
  (MR_String) "deep_cmd_module_getter_setters",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(15),
  query__query__field_types_cmd_0_15,
  query__query__field_names_cmd_0_15,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_ConstString query__query__field_names_cmd_0_16[1] = { (MR_String) "cmd_mr_module_name" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16 = {
  (MR_String) "deep_cmd_module_rep",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(16),
  query__query__field_types_cmd_0_16,
  query__query__field_names_cmd_0_16,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[4] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_display_limit_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_cost_kind_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_include_descendants_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_measurement_scope_0)
};

static const MR_ConstString query__query__field_names_cmd_0_17[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

static const MR_DuArgLocn query__query__field_locns_cmd_0_17[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17 = {
  (MR_String) "deep_cmd_top_procs",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(17),
  query__query__field_types_cmd_0_17,
  query__query__field_names_cmd_0_17,
  query__query__field_locns_cmd_0_17,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_18[1] = { (MR_String) "cmd_dcl_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18 = {
  (MR_String) "deep_cmd_dump_clique",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(18),
  query__query__field_types_cmd_0_18,
  query__query__field_names_cmd_0_18,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_19[1] = { (MR_String) "cmd_dps_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19 = {
  (MR_String) "deep_cmd_dump_proc_static",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(19),
  query__query__field_types_cmd_0_19,
  query__query__field_names_cmd_0_19,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_20[1] = { (MR_String) "cmd_dpd_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20 = {
  (MR_String) "deep_cmd_dump_proc_dynamic",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(20),
  query__query__field_types_cmd_0_20,
  query__query__field_names_cmd_0_20,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_21[1] = { (MR_String) "cmd_dcss_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21 = {
  (MR_String) "deep_cmd_dump_call_site_static",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(21),
  query__query__field_types_cmd_0_21,
  query__query__field_names_cmd_0_21,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) };

static const MR_ConstString query__query__field_names_cmd_0_22[1] = { (MR_String) "cmd_dcsd_id" };

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22 = {
  (MR_String) "deep_cmd_dump_call_site_dynamic",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(22),
  query__query__field_types_cmd_0_22,
  query__query__field_names_cmd_0_22,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_12,
  &query__query__du_functor_desc_cmd_0_13
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = { &query__query__du_functor_desc_cmd_0_2 };

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = { &query__query__du_functor_desc_cmd_0_4 };

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16] = {
  &query__query__du_functor_desc_cmd_0_5,
  &query__query__du_functor_desc_cmd_0_6,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_8,
  &query__query__du_functor_desc_cmd_0_9,
  &query__query__du_functor_desc_cmd_0_10,
  &query__query__du_functor_desc_cmd_0_11,
  &query__query__du_functor_desc_cmd_0_14,
  &query__query__du_functor_desc_cmd_0_15,
  &query__query__du_functor_desc_cmd_0_16,
  &query__query__du_functor_desc_cmd_0_17,
  &query__query__du_functor_desc_cmd_0_18,
  &query__query__du_functor_desc_cmd_0_19,
  &query__query__du_functor_desc_cmd_0_20,
  &query__query__du_functor_desc_cmd_0_21,
  &query__query__du_functor_desc_cmd_0_22
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_cmd_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    query__query__du_stag_ordered_cmd_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_cmd_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_cmd_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(16),
    MR_SECTAG_REMOTE_FULL_WORD,
    query__query__du_stag_ordered_cmd_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23] = {
  &query__query__du_functor_desc_cmd_0_11,
  &query__query__du_functor_desc_cmd_0_5,
  &query__query__du_functor_desc_cmd_0_6,
  &query__query__du_functor_desc_cmd_0_22,
  &query__query__du_functor_desc_cmd_0_21,
  &query__query__du_functor_desc_cmd_0_18,
  &query__query__du_functor_desc_cmd_0_20,
  &query__query__du_functor_desc_cmd_0_19,
  &query__query__du_functor_desc_cmd_0_10,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_14,
  &query__query__du_functor_desc_cmd_0_15,
  &query__query__du_functor_desc_cmd_0_16,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_8,
  &query__query__du_functor_desc_cmd_0_13,
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_12,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_4,
  &query__query__du_functor_desc_cmd_0_9,
  &query__query__du_functor_desc_cmd_0_2,
  &query__query__du_functor_desc_cmd_0_17
};

static const MR_Integer query__query__functor_number_map_cmd_0[23] = {
  (MR_Integer) 16,
  (MR_Integer) 18,
  (MR_Integer) 21,
  (MR_Integer) 9,
  (MR_Integer) 19,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 20,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 15,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 22,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cmd_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____cmd_0_0_10001)),
  ((MR_Box) (query____Compare____cmd_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cmd",
  { query__query__du_name_ordered_cmd_0 },
  { query__query__du_ptag_ordered_cmd_0 },
  (MR_Integer) 23,
  UINT16_C(12),
  query__query__functor_number_map_cmd_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_colour_column_groups_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____colour_column_groups_0_0_10001)),
  ((MR_Box) (query____Compare____colour_column_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "colour_column_groups",
  { query__query__enum_name_ordered_colour_column_groups_0 },
  { query__query__enum_ordinal_ordered_colour_column_groups_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_colour_column_groups_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_contour_exclusion_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____contour_exclusion_0_0_10001)),
  ((MR_Box) (query____Compare____contour_exclusion_0_0_10001)),
  (MR_String) "query",
  (MR_String) "contour_exclusion",
  { query__query__enum_name_ordered_contour_exclusion_0 },
  { query__query__enum_ordinal_ordered_contour_exclusion_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_contour_exclusion_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  INT32_C(2)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  INT32_C(3)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  INT32_C(4)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_5
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_5
};

static const MR_Integer query__query__functor_number_map_cost_kind_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cost_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____cost_kind_0_0_10001)),
  ((MR_Box) (query____Compare____cost_kind_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cost_kind",
  { query__query__enum_name_ordered_cost_kind_0 },
  { query__query__enum_ordinal_ordered_cost_kind_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  query__query__functor_number_map_cost_kind_0,

};

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&query__query__type_ctor_info_cmd_0) }
};

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&query__query__type_ctor_info_preferences_0) }
};

static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) (&query__maybe__ti_maybe_1query__type_ctor_info_cmd_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&query__maybe__ti_maybe_1query__type_ctor_info_preferences_0)
};

static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0 = {
  (MR_String) "deep_query",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  query__query__field_types_deep_query_0_0,
  query__query__field_names_deep_query_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = { &query__query__du_functor_desc_deep_query_0_0 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = { &query__query__du_functor_desc_deep_query_0_0 };

static const MR_Integer query__query__functor_number_map_deep_query_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_deep_query_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____deep_query_0_0_10001)),
  ((MR_Box) (query____Compare____deep_query_0_0_10001)),
  (MR_String) "query",
  (MR_String) "deep_query",
  { query__query__du_name_ordered_deep_query_0 },
  { query__query__du_ptag_ordered_deep_query_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  query__query__functor_number_map_deep_query_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_descendants_meaningful_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____descendants_meaningful_0_0_10001)),
  ((MR_Box) (query____Compare____descendants_meaningful_0_0_10001)),
  (MR_String) "query",
  (MR_String) "descendants_meaningful",
  { query__query__enum_name_ordered_descendants_meaningful_0 },
  { query__query__enum_ordinal_ordered_descendants_meaningful_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_descendants_meaningful_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_0,
  &query__query__enum_functor_desc_developer_mode_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_1,
  &query__query__enum_functor_desc_developer_mode_0_0
};

static const MR_Integer query__query__functor_number_map_developer_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_developer_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____developer_mode_0_0_10001)),
  ((MR_Box) (query____Compare____developer_mode_0_0_10001)),
  (MR_String) "query",
  (MR_String) "developer_mode",
  { query__query__enum_name_ordered_developer_mode_0 },
  { query__query__enum_ordinal_ordered_developer_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_developer_mode_0,

};

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0 = {
  (MR_String) "rank_range",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  query__query__field_types_display_limit_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1 = {
  (MR_String) "threshold_percent",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  query__query__field_types_display_limit_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2 = {
  (MR_String) "threshold_value",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  query__query__field_types_display_limit_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = { &query__query__du_functor_desc_display_limit_0_0 };

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = { &query__query__du_functor_desc_display_limit_0_1 };

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = { &query__query__du_functor_desc_display_limit_0_2 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3] = {
  &query__query__du_functor_desc_display_limit_0_0,
  &query__query__du_functor_desc_display_limit_0_1,
  &query__query__du_functor_desc_display_limit_0_2
};

static const MR_Integer query__query__functor_number_map_display_limit_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_display_limit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____display_limit_0_0_10001)),
  ((MR_Box) (query____Compare____display_limit_0_0_10001)),
  (MR_String) "query",
  (MR_String) "display_limit",
  { query__query__du_name_ordered_display_limit_0 },
  { query__query__du_ptag_ordered_display_limit_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_display_limit_0,

};

static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_port_fields_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_time_fields_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_callseqs_fields_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_alloc_fields_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_memory_fields_0)
};

static const MR_ConstString query__query__field_names_fields_0_0[5] = {
  (MR_String) "port_fields",
  (MR_String) "time_fields",
  (MR_String) "callseqs_fields",
  (MR_String) "alloc_fields",
  (MR_String) "memory_fields"
};

static const MR_DuArgLocn query__query__field_locns_fields_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_fields_0_0 = {
  (MR_String) "fields",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  query__query__field_types_fields_0_0,
  query__query__field_names_fields_0_0,
  query__query__field_locns_fields_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = { &query__query__du_functor_desc_fields_0_0 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = { &query__query__du_functor_desc_fields_0_0 };

static const MR_Integer query__query__functor_number_map_fields_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____fields_0_0_10001)),
  ((MR_Box) (query____Compare____fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "fields",
  { query__query__du_name_ordered_fields_0 },
  { query__query__du_ptag_ordered_fields_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  query__query__functor_number_map_fields_0,

};

static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_inactive_status_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_inactive_status_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_inactive_status_0)
};

static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0 = {
  (MR_String) "inactive_items",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  query__query__field_types_inactive_items_0_0,
  query__query__field_names_inactive_items_0_0,
  query__query__field_locns_inactive_items_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = { &query__query__du_functor_desc_inactive_items_0_0 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = { &query__query__du_functor_desc_inactive_items_0_0 };

static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_items_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____inactive_items_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_items_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_items",
  { query__query__du_name_ordered_inactive_items_0 },
  { query__query__du_ptag_ordered_inactive_items_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  query__query__functor_number_map_inactive_items_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

static const MR_Integer query__query__functor_number_map_inactive_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____inactive_status_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_status_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_status",
  { query__query__enum_name_ordered_inactive_status_0 },
  { query__query__enum_ordinal_ordered_inactive_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_inactive_status_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

static const MR_Integer query__query__functor_number_map_include_descendants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_include_descendants_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____include_descendants_0_0_10001)),
  ((MR_Box) (query____Compare____include_descendants_0_0_10001)),
  (MR_String) "query",
  (MR_String) "include_descendants",
  { query__query__enum_name_ordered_include_descendants_0 },
  { query__query__enum_ordinal_ordered_include_descendants_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_include_descendants_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_0,
  &query__query__enum_functor_desc_measurement_scope_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_1,
  &query__query__enum_functor_desc_measurement_scope_0_0
};

static const MR_Integer query__query__functor_number_map_measurement_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_measurement_scope_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____measurement_scope_0_0_10001)),
  ((MR_Box) (query____Compare____measurement_scope_0_0_10001)),
  (MR_String) "query",
  (MR_String) "measurement_scope",
  { query__query__enum_name_ordered_measurement_scope_0 },
  { query__query__enum_ordinal_ordered_measurement_scope_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_measurement_scope_0,

};

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0 = {
  (MR_String) "no_memory",
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

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = { (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_memory_units_0) };

static const MR_DuArgLocn query__query__field_locns_memory_fields_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1 = {
  (MR_String) "memory",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  query__query__field_types_memory_fields_0_1,
  NULL,
  query__query__field_locns_memory_fields_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = { (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_memory_units_0) };

static const MR_DuArgLocn query__query__field_locns_memory_fields_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2 = {
  (MR_String) "memory_and_percall",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  query__query__field_types_memory_fields_0_2,
  NULL,
  query__query__field_locns_memory_fields_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = { &query__query__du_functor_desc_memory_fields_0_0 };

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = { &query__query__du_functor_desc_memory_fields_0_1 };

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = { &query__query__du_functor_desc_memory_fields_0_2 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    query__query__du_stag_ordered_memory_fields_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_memory_fields_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_memory_fields_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3] = {
  &query__query__du_functor_desc_memory_fields_0_1,
  &query__query__du_functor_desc_memory_fields_0_2,
  &query__query__du_functor_desc_memory_fields_0_0
};

static const MR_Integer query__query__functor_number_map_memory_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_memory_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____memory_fields_0_0_10001)),
  ((MR_Box) (query____Compare____memory_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "memory_fields",
  { query__query__du_name_ordered_memory_fields_0 },
  { query__query__du_ptag_ordered_memory_fields_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_memory_fields_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_1,
  &query__query__enum_functor_desc_module_qual_0_2
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_2,
  &query__query__enum_functor_desc_module_qual_0_1
};

static const MR_Integer query__query__functor_number_map_module_qual_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_module_qual_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____module_qual_0_0_10001)),
  ((MR_Box) (query____Compare____module_qual_0_0_10001)),
  (MR_String) "query",
  (MR_String) "module_qual",
  { query__query__enum_name_ordered_module_qual_0 },
  { query__query__enum_ordinal_ordered_module_qual_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_module_qual_0,

};

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0 = {
  (MR_String) "by_context",
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

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1 = {
  (MR_String) "by_name",
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

static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_cost_kind_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_include_descendants_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_measurement_scope_0)
};

static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2 = {
  (MR_String) "by_cost",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  query__query__field_types_order_criteria_0_2,
  NULL,
  query__query__field_locns_order_criteria_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = { &query__query__du_functor_desc_order_criteria_0_2 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    query__query__du_stag_ordered_order_criteria_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_order_criteria_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_2,
  &query__query__du_functor_desc_order_criteria_0_1
};

static const MR_Integer query__query__functor_number_map_order_criteria_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_order_criteria_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____order_criteria_0_0_10001)),
  ((MR_Box) (query____Compare____order_criteria_0_0_10001)),
  (MR_String) "query",
  (MR_String) "order_criteria",
  { query__query__du_name_ordered_order_criteria_0 },
  { query__query__du_ptag_ordered_order_criteria_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_order_criteria_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

static const MR_Integer query__query__functor_number_map_port_fields_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_port_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____port_fields_0_0_10001)),
  ((MR_Box) (query____Compare____port_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "port_fields",
  { query__query__enum_name_ordered_port_fields_0 },
  { query__query__enum_ordinal_ordered_port_fields_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_port_fields_0,

};

static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_fields_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_box_tables_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_colour_column_groups_0),
  (MR_PseudoTypeInfo) (&query__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_summarize_ho_call_sites_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_order_criteria_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_contour_exclusion_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_time_format_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_module_qual_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_inactive_items_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_developer_mode_0)
};

static const MR_ConstString query__query__field_names_preferences_0_0[12] = {
  (MR_String) "pref_fields",
  (MR_String) "pref_box",
  (MR_String) "pref_colour",
  (MR_String) "pref_anc",
  (MR_String) "pref_proc_statics_per_rec_type",
  (MR_String) "pref_summarize",
  (MR_String) "pref_criteria",
  (MR_String) "pref_contour",
  (MR_String) "pref_time",
  (MR_String) "pref_module_qual",
  (MR_String) "pref_inactive",
  (MR_String) "pref_developer_mode"
};

static const MR_DuArgLocn query__query__field_locns_preferences_0_0[12] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0 = {
  (MR_String) "preferences",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  query__query__field_types_preferences_0_0,
  query__query__field_names_preferences_0_0,
  query__query__field_locns_preferences_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = { &query__query__du_functor_desc_preferences_0_0 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = { &query__query__du_functor_desc_preferences_0_0 };

static const MR_Integer query__query__functor_number_map_preferences_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences",
  { query__query__du_name_ordered_preferences_0 },
  { query__query__du_ptag_ordered_preferences_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  query__query__functor_number_map_preferences_0,

};

static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = { (MR_PseudoTypeInfo) (&query__query__type_ctor_info_preferences_0) };

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0 = {
  (MR_String) "given_pref",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  query__query__field_types_preferences_indication_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1 = {
  (MR_String) "default_pref",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2 = {
  (MR_String) "all_pref",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = { &query__query__du_functor_desc_preferences_indication_0_0 };

static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    query__query__du_stag_ordered_preferences_indication_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    query__query__du_stag_ordered_preferences_indication_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3] = {
  &query__query__du_functor_desc_preferences_indication_0_2,
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_0
};

static const MR_Integer query__query__functor_number_map_preferences_indication_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_indication_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_indication_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_indication_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences_indication",
  { query__query__du_name_ordered_preferences_indication_0 },
  { query__query__du_ptag_ordered_preferences_indication_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_preferences_indication_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0
};

static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_summarize_ho_call_sites_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____summarize_ho_call_sites_0_0_10001)),
  ((MR_Box) (query____Compare____summarize_ho_call_sites_0_0_10001)),
  (MR_String) "query",
  (MR_String) "summarize_ho_call_sites",
  { query__query__enum_name_ordered_summarize_ho_call_sites_0 },
  { query__query__enum_ordinal_ordered_summarize_ho_call_sites_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  query__query__functor_number_map_summarize_ho_call_sites_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  INT32_C(2)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  INT32_C(3)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  INT32_C(4)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_4,
  &query__query__enum_functor_desc_time_fields_0_5
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_5,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_4
};

static const MR_Integer query__query__functor_number_map_time_fields_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_time_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_fields_0_0_10001)),
  ((MR_Box) (query____Compare____time_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_fields",
  { query__query__enum_name_ordered_time_fields_0 },
  { query__query__enum_ordinal_ordered_time_fields_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  query__query__functor_number_map_time_fields_0,

};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  INT32_C(0)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  INT32_C(1)
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr query__query__enum_ordinal_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

static const MR_Integer query__query__functor_number_map_time_format_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_time_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_format_0_0_10001)),
  ((MR_Box) (query____Compare____time_format_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_format",
  { query__query__enum_name_ordered_time_format_0 },
  { query__query__enum_ordinal_ordered_time_format_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  query__query__functor_number_map_time_format_0,

};

static const MR_TableStepDesc table_input_steps_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_String) "Cmd",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  },
  {
    (MR_String) "Deep",
    MR_TABLE_STEP_GEN_ADDR,
    (MR_Integer) -1
  }
};

static MR_TableStepStats table_call_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static MR_TableStepStats table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static MR_TableStepStats table_answer_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static MR_TableStepStats table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static MR_ProcTableInfo table_info_for_create_and_memoize_report_3_p_0 = {
  MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  { (MR_Integer) 0 },
  {
    table_input_steps_for_create_and_memoize_report_3_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_call_step_stats_for_create_and_memoize_report_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_call_step_stats_for_create_and_memoize_report_3_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_answer_step_stats_for_create_and_memoize_report_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

void MR_CALL 
query____Compare____time_format_0_0(
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
query____Unify____time_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____time_fields_0_0(
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
query____Unify____time_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0(
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
query____Unify____summarize_ho_call_sites_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____preferences_indication_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              query____Compare____preferences_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
query____Unify____preferences_indication_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = query____Unify____preferences_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
query____Compare____preferences_0_0(
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
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 3);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) & (MR_Integer) 3);
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 8))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    query____Compare____fields_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_53 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_54 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_53 < Var_54);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_53 > Var_54);
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
      {
        MR_Word SubResult3_12;
        MR_Integer Var_55 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_56 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_55 < Var_56);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_55 > Var_56);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&query_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_57 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_58 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_57 < Var_58);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_57 > Var_58);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                query____Compare____order_criteria_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_59 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_60 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_59 < Var_60);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_59 > Var_60);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_61 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_62 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_61 < Var_62);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_61 > Var_62);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_63 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_64 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_63 < Var_64);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_63 > Var_64);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        query____Compare____inactive_items_0_0(&SubResult11_36, ArgX11_34, ArgY11_35);
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Integer Var_65 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_66 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_65 < Var_66);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_65 > Var_66);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
query____Unify____preferences_0_0(
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
    MR_Word TypeInfo_29_29;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) & (MR_Integer) 3);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 3);
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 8))) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))) & (MR_Integer) 1);

    succeeded = query____Unify____fields_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_29_29 = (MR_Word) (&query_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = query____Unify____order_criteria_0_0(ArgX7_15, ArgY7_16);
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
                        succeeded = query____Unify____inactive_items_0_0(ArgX11_23, ArgY11_24);
                        if (succeeded)
                          succeeded = (ArgX12_25 == ArgY12_26);
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
query____Compare____port_fields_0_0(
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
query____Unify____port_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____order_criteria_0_0(
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 7);
              MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 7);
              MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
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
                {
                  MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
                  MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

                  succeeded = (Var_21 < Var_22);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_21 > Var_22);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
query____Unify____order_criteria_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 7);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 7);
            ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
            ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
                succeeded = (ArgX3_7 == ArgY3_8);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
query____Compare____module_qual_0_0(
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
query____Unify____module_qual_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____measurement_scope_0_0(
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
query____Unify____measurement_scope_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____include_descendants_0_0(
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
query____Unify____include_descendants_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____inactive_status_0_0(
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
query____Unify____inactive_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____inactive_items_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
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
      {
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
query____Unify____inactive_items_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
query____Compare____fields_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
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
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_27 > Var_28);
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
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_31 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_32 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            query____Compare____memory_fields_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

void MR_CALL 
query____Compare____memory_fields_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_14 < Var_15);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_14 > Var_15);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_12 < Var_13);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_12 > Var_13);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
query____Unify____fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = query____Unify____memory_fields_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
query____Unify____memory_fields_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
query____Compare____developer_mode_0_0(
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
query____Unify____developer_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____descendants_meaningful_0_0(
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
query____Unify____descendants_meaningful_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____deep_query_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&query_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&query_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
query____Unify____deep_query_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&query_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&query_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
query____Compare____cost_kind_0_0(
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
query____Unify____cost_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____contour_exclusion_0_0(
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
query____Unify____contour_exclusion_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____colour_column_groups_0_0(
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
query____Unify____colour_column_groups_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____cmd_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    query____Index____cmd_0_0(HeadVar__2_2, &IndexX_4);
    query____Index____cmd_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_8;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
                succeeded = (ArgX1_7 < ArgY1_8);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX1_7 > ArgY1_8);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_84_84;
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_10;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
                TypeInfo_84_84 = (MR_Word) (&query_scalar_common_1[0]);
                mercury__builtin__compare_3_p_0(TypeInfo_84_84, &CompareResult_6, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_12;
                  MR_Integer Var_93;
                  MR_Integer Var_94;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_93 = (MR_Integer) (ArgX1_11);
                    Var_94 = (MR_Integer) (ArgY1_12);
                    succeeded = (Var_93 < Var_94);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_93 > Var_94);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_14;
                  MR_Integer Var_95;
                  MR_Integer Var_96;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_95 = (MR_Integer) (ArgX1_13);
                    Var_96 = (MR_Integer) (ArgY1_14);
                    succeeded = (Var_95 < Var_96);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_95 > Var_96);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_16;
                  MR_Integer Var_109;
                  MR_Integer Var_110;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_109 = (MR_Integer) (ArgX1_15);
                    Var_110 = (MR_Integer) (ArgY1_16);
                    succeeded = (Var_109 < Var_110);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_109 > Var_110);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_18;
                  MR_Word ArgX2_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 3);
                  MR_Word ArgY2_21;
                  MR_Integer ArgX3_23 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Integer ArgY3_24;
                  MR_Integer ArgX4_26 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Integer ArgY4_27;
                  MR_Word ArgX5_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 1);
                  MR_Word ArgY5_30;
                  MR_Word SubResult1_19;
                  MR_Integer Var_111;
                  MR_Integer Var_112;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 3);
                    ArgY3_24 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) & (MR_Integer) 1);
                    Var_111 = (MR_Integer) (ArgX1_17);
                    Var_112 = (MR_Integer) (ArgY1_18);
                    succeeded = (Var_111 < Var_112);
                    if (succeeded)
                    {
                      SubResult1_19 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_111 > Var_112);
                      if (succeeded)
                      {
                        SubResult1_19 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_19 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_19;
                    else
                    {
                      MR_Word SubResult2_22;
                      MR_Integer Var_113 = (MR_Integer) (ArgX2_20);
                      MR_Integer Var_114 = (MR_Integer) (ArgY2_21);

                      succeeded = (Var_113 < Var_114);
                      if (succeeded)
                      {
                        SubResult2_22 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_113 > Var_114);
                        if (succeeded)
                        {
                          SubResult2_22 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_22 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_22;
                      else
                      {
                        MR_Word SubResult3_25;

                        succeeded = (ArgX3_23 < ArgY3_24);
                        if (succeeded)
                        {
                          SubResult3_25 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_23 > ArgY3_24);
                          if (succeeded)
                          {
                            SubResult3_25 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_25 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_25;
                        else
                        {
                          MR_Word SubResult4_28;

                          succeeded = (ArgX4_26 < ArgY4_27);
                          if (succeeded)
                          {
                            SubResult4_28 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_26 > ArgY4_27);
                            if (succeeded)
                            {
                              SubResult4_28 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult4_28 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            CompareResult_6 = SubResult4_28;
                          else
                          {
                            MR_Integer Var_115 = (MR_Integer) (ArgX5_29);
                            MR_Integer Var_116 = (MR_Integer) (ArgY5_30);

                            succeeded = (Var_115 < Var_116);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_115 > Var_116);
                              if (succeeded)
                                CompareResult_6 = (MR_Integer) 2;
                              else
                                CompareResult_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_32;
                  MR_Integer Var_117;
                  MR_Integer Var_118;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_117 = (MR_Integer) (ArgX1_31);
                    Var_118 = (MR_Integer) (ArgY1_32);
                    succeeded = (Var_117 < Var_118);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_117 > Var_118);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_34;
                  MR_Integer Var_107;
                  MR_Integer Var_108;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_107 = (MR_Integer) (ArgX1_33);
                    Var_108 = (MR_Integer) (ArgY1_34);
                    succeeded = (Var_107 < Var_108);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_107 > Var_108);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_36;
                  MR_Integer Var_91;
                  MR_Integer Var_92;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_91 = (MR_Integer) (ArgX1_35);
                    Var_92 = (MR_Integer) (ArgY1_36);
                    succeeded = (Var_91 < Var_92);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_91 > Var_92);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_38;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_37, ArgY1_38);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_String ArgX1_39 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_39, ArgY1_40);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_String ArgX1_41 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_String ArgY1_42;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_42 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_41, ArgY1_42);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_44;
                  MR_Word ArgX2_46 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) >> 2)) & (MR_Integer) 7);
                  MR_Word ArgY2_47;
                  MR_Word ArgX3_49 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY3_50;
                  MR_Word ArgX4_52 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY4_53;
                  MR_Word SubResult1_45;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_47 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) >> 2)) & (MR_Integer) 7);
                    ArgY3_50 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) >> 1)) & (MR_Integer) 1);
                    ArgY4_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    query____Compare____display_limit_0_0(&SubResult1_45, ArgX1_43, ArgY1_44);
                    succeeded = (SubResult1_45 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_45;
                    else
                    {
                      MR_Word SubResult2_48;
                      MR_Integer Var_119 = (MR_Integer) (ArgX2_46);
                      MR_Integer Var_120 = (MR_Integer) (ArgY2_47);

                      succeeded = (Var_119 < Var_120);
                      if (succeeded)
                      {
                        SubResult2_48 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_119 > Var_120);
                        if (succeeded)
                        {
                          SubResult2_48 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_48 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_48;
                      else
                      {
                        MR_Word SubResult3_51;
                        MR_Integer Var_121 = (MR_Integer) (ArgX3_49);
                        MR_Integer Var_122 = (MR_Integer) (ArgY3_50);

                        succeeded = (Var_121 < Var_122);
                        if (succeeded)
                        {
                          SubResult3_51 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_121 > Var_122);
                          if (succeeded)
                          {
                            SubResult3_51 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_51 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_51;
                        else
                        {
                          MR_Integer Var_123 = (MR_Integer) (ArgX4_52);
                          MR_Integer Var_124 = (MR_Integer) (ArgY4_53);

                          succeeded = (Var_123 < Var_124);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_123 > Var_124);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 2;
                            else
                              CompareResult_6 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_55;
                  MR_Integer Var_101;
                  MR_Integer Var_102;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_101 = (MR_Integer) (ArgX1_54);
                    Var_102 = (MR_Integer) (ArgY1_55);
                    succeeded = (Var_101 < Var_102);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_101 > Var_102);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_57;
                  MR_Integer Var_105;
                  MR_Integer Var_106;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_105 = (MR_Integer) (ArgX1_56);
                    Var_106 = (MR_Integer) (ArgY1_57);
                    succeeded = (Var_105 < Var_106);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_105 > Var_106);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_59;
                  MR_Integer Var_103;
                  MR_Integer Var_104;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_103 = (MR_Integer) (ArgX1_58);
                    Var_104 = (MR_Integer) (ArgY1_59);
                    succeeded = (Var_103 < Var_104);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_103 > Var_104);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ArgX1_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_61;
                  MR_Integer Var_99;
                  MR_Integer Var_100;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_99 = (MR_Integer) (ArgX1_60);
                    Var_100 = (MR_Integer) (ArgY1_61);
                    succeeded = (Var_99 < Var_100);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_99 > Var_100);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ArgX1_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_63;
                  MR_Integer Var_97;
                  MR_Integer Var_98;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    Var_97 = (MR_Integer) (ArgX1_62);
                    Var_98 = (MR_Integer) (ArgY1_63);
                    succeeded = (Var_97 < Var_98);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_97 > Var_98);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
query____Compare____display_limit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
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
                succeeded = (ArgX2_7 < ArgY2_8);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_7 > ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Float ArgX1_9 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 0)));
              MR_Float ArgY1_10 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 0)));

              mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Float ArgX1_11 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, 0)));
              MR_Float ArgY1_12 = MR_unbox_float((MR_hl_field(2, HeadVar__3_3, 0)));

              mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_11, ArgY1_12);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
query____Index____cmd_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 4;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
query____Unify____cmd_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_55 == CastY_56);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_53 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_54 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_54 == CastX_53);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_68_68;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_68_68 = (MR_Word) (&query_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_8;
              MR_Integer Var_72;
              MR_Integer Var_73;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_72 = (MR_Integer) (ArgX1_7);
                Var_73 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_72 == Var_73);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_10;
              MR_Integer Var_74;
              MR_Integer Var_75;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_74 = (MR_Integer) (ArgX1_9);
                Var_75 = (MR_Integer) (ArgY1_10);
                succeeded = (Var_74 == Var_75);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;
              MR_Integer Var_88;
              MR_Integer Var_89;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_88 = (MR_Integer) (ArgX1_11);
                Var_89 = (MR_Integer) (ArgY1_12);
                succeeded = (Var_88 == Var_89);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 3);
              MR_Word ArgY2_16;
              MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Integer ArgY3_18;
              MR_Integer ArgX4_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY4_20;
              MR_Word ArgX5_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) & (MR_Integer) 1);
              MR_Word ArgY5_22;
              MR_Integer Var_90;
              MR_Integer Var_91;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 3);
                ArgY3_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 1);
                succeeded = (ArgX2_15 == ArgY2_16);
                if (succeeded)
                {
                  succeeded = (ArgX3_17 == ArgY3_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX4_19 == ArgY4_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX5_21 == ArgY5_22);
                      if (succeeded)
                      {
                        Var_90 = (MR_Integer) (ArgX1_13);
                        Var_91 = (MR_Integer) (ArgY1_14);
                        succeeded = (Var_90 == Var_91);
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_24;
              MR_Integer Var_92;
              MR_Integer Var_93;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_92 = (MR_Integer) (ArgX1_23);
                Var_93 = (MR_Integer) (ArgY1_24);
                succeeded = (Var_92 == Var_93);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_26;
              MR_Integer Var_86;
              MR_Integer Var_87;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_86 = (MR_Integer) (ArgX1_25);
                Var_87 = (MR_Integer) (ArgY1_26);
                succeeded = (Var_86 == Var_87);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_28;
              MR_Integer Var_70;
              MR_Integer Var_71;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_70 = (MR_Integer) (ArgX1_27);
                Var_71 = (MR_Integer) (ArgY1_28);
                succeeded = (Var_70 == Var_71);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ArgX1_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_31, ArgY1_32) == 0);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ArgX1_33 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_33, ArgY1_34) == 0);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_36;
              MR_Word ArgX2_37 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) >> 2)) & (MR_Integer) 7);
              MR_Word ArgY2_38;
              MR_Word ArgX3_39 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY3_40;
              MR_Word ArgX4_41 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY4_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_38 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) >> 2)) & (MR_Integer) 7);
                ArgY3_40 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
                ArgY4_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                succeeded = query____Unify____display_limit_0_0(ArgX1_35, ArgY1_36);
                if (succeeded)
                {
                  succeeded = (ArgX2_37 == ArgY2_38);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_39 == ArgY3_40);
                    if (succeeded)
                      succeeded = (ArgX4_41 == ArgY4_42);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_44;
              MR_Integer Var_80;
              MR_Integer Var_81;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_80 = (MR_Integer) (ArgX1_43);
                Var_81 = (MR_Integer) (ArgY1_44);
                succeeded = (Var_80 == Var_81);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_46;
              MR_Integer Var_84;
              MR_Integer Var_85;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_84 = (MR_Integer) (ArgX1_45);
                Var_85 = (MR_Integer) (ArgY1_46);
                succeeded = (Var_84 == Var_85);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_48;
              MR_Integer Var_82;
              MR_Integer Var_83;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_82 = (MR_Integer) (ArgX1_47);
                Var_83 = (MR_Integer) (ArgY1_48);
                succeeded = (Var_82 == Var_83);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_50;
              MR_Integer Var_78;
              MR_Integer Var_79;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_78 = (MR_Integer) (ArgX1_49);
                Var_79 = (MR_Integer) (ArgY1_50);
                succeeded = (Var_78 == Var_79);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_52;
              MR_Integer Var_76;
              MR_Integer Var_77;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                Var_76 = (MR_Integer) (ArgX1_51);
                Var_77 = (MR_Integer) (ArgY1_52);
                succeeded = (Var_76 == Var_77);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
query____Unify____display_limit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float ArgX1_7 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 0)));
          MR_Float ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float ArgX1_9 = MR_unbox_float((MR_hl_field(2, HeadVar__1_1, 0)));
          MR_Float ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, 0)));
            succeeded = (ArgX1_9 == ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
query____Compare____callseqs_fields_0_0(
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
query____Unify____callseqs_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____caller_groups_0_0(
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
query____Unify____caller_groups_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____box_tables_0_0(
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
query____Unify____box_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
query____Compare____alloc_fields_0_0(
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
query____Unify____alloc_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
query__exec_4_p_0(
  MR_Word Cmd_5,
  MR_Word Prefs_6,
  MR_Word Deep_7,
  MR_String * HTMLStr_8)
{
  MR_bool succeeded = (Cmd_5 == (MR_Word) ((MR_Unsigned) 12U));
  MR_Word Report_9;
  MR_Word Display_10;

  if (succeeded)
    query__create_and_memoize_report_3_p_0(Cmd_5, Deep_7, &Report_9);
  else
    create_report__create_report_3_p_0(Cmd_5, Deep_7, &Report_9);
  Display_10 = display_report__report_to_display_3_f_0(Deep_7, Prefs_6, Report_9);
  *HTMLStr_8 = html_format__htmlize_display_3_f_0(Deep_7, Prefs_6, Display_10);
}

static void MR_CALL 
query__create_and_memoize_report_3_p_0(
  MR_Word Cmd_4,
  MR_Word Deep_5,
  MR_Word * Report_6)
{
  MR_Box CallTableTipVar_10;
  MR_Word Status_11;

{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo0;
	MR_Word arg0;
	MR_Word input_typeinfo1;
	MR_Word arg1;

	proc_table_info = (MR_ProcTableInfoPtr)(MR_Box) (&table_info_for_create_and_memoize_report_3_p_0) ;
	input_typeinfo0 = (MR_Word) (&query__query__type_ctor_info_cmd_0) ;
	arg0 = Cmd_4 ;
	input_typeinfo1 = (MR_Word) (&profile__profile__type_ctor_info_deep_0) ;
	arg1 = Deep_5 ;
		{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo0, arg0, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen_addr(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);


		;}
#undef MR_PROC_LABEL
	CallTableTipVar_10  = (MR_Box) CallTableTipVar;
	Status_11  = status;
}
  switch (Status_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred query.create_and_memoize_report/3");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        create_report__create_report_3_p_0(Cmd_4, Deep_5, Report_6);
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode)CallTableTipVar_10 ;
	arg0 = (MR_Word) ((MR_Box) (*Report_6)) ;
	save_arg_typeinfo0 = (MR_Word) (&report__report__type_ctor_info_deep_report_0) ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box conv0_restore_arg0;

{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode)CallTableTipVar_10 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	conv0_restore_arg0  = (MR_Box) restore_arg0;
        *Report_6 = ((MR_Word) (conv0_restore_arg0));
}
      }
      break;
  }
}

MR_Word MR_CALL 
query__default_developer_mode_0_f_0(void)
{
  return (MR_Integer) 1;
}

MR_Word MR_CALL 
query__default_inactive_items_0_f_0(void)
{
  return (MR_Word) (&query_scalar_common_2[7]);
}

MR_Word MR_CALL 
query__default_module_qual_0_f_0(void)
{
  return (MR_Integer) 1;
}

MR_Word MR_CALL 
query__default_time_format_0_f_0(void)
{
  return (MR_Integer) 2;
}

MR_Word MR_CALL 
query__default_contour_exclusion_0_f_0(void)
{
  return (MR_Integer) 1;
}

MR_Word MR_CALL 
query__default_scope_0_f_0(void)
{
  return (MR_Integer) 1;
}

MR_Word MR_CALL 
query__default_incl_desc_0_f_0(void)
{
  return (MR_Integer) 1;
}

MR_Word MR_CALL 
query__default_cost_kind_0_f_0(void)
{
  return (MR_Integer) 3;
}

MR_Word MR_CALL 
query__default_order_criteria_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
query__default_summarize_ho_call_sites_0_f_0(void)
{
  return (MR_Integer) 1;
}

MR_Integer MR_CALL 
query__default_proc_statics_per_rec_type_limit_0_f_0(void)
{
  return (MR_Integer) 20;
}

MR_Word MR_CALL 
query__default_ancestor_limit_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &query_scalar_common_2[6]));
}

MR_Word MR_CALL 
query__default_colour_column_groups_0_f_0(void)
{
  return (MR_Integer) 0;
}

MR_Word MR_CALL 
query__default_box_tables_0_f_0(void)
{
  return (MR_Integer) 0;
}

MR_Word MR_CALL 
query__all_fields_0_f_0(void)
{
  return (MR_Word) (&query_scalar_common_1[3]);
}

MR_Word MR_CALL 
query__solidify_preference_2_f_0(
  MR_Word Deep_4,
  MR_Word PrefInd_5)
{
  MR_Word Pref_6;

  switch (MR_tag((MR_Word) PrefInd_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(PrefInd_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pref_6 = query__default_preferences_1_f_0(Deep_4);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_7;
            MR_Word Var_12;
            MR_Integer Var_13;
            MR_Word Var_14;
            MR_Word Var_15;
            MR_Word Var_19;
            MR_Word Var_20;
            MR_Unsigned packed_word_0;
            MR_Unsigned packed_word_2;

            Var_7 = query__default_preferences_1_f_0(Deep_4);
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_7, 1)));
            Var_12 = ((MR_Word) ((MR_hl_field(0, Var_7, 2))));
            Var_13 = ((MR_Integer) ((MR_hl_field(0, Var_7, 3))));
            Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, 4))) & (MR_Integer) 1);
            Var_15 = ((MR_Word) ((MR_hl_field(0, Var_7, 5))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Var_7, 6)));
            Var_19 = ((MR_Word) ((MR_hl_field(0, Var_7, 7))));
            Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, 8))) & (MR_Integer) 1);
            {
              Pref_6 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Pref_6, 0) = ((MR_Box) (&query_scalar_common_1[3]));
              MR_hl_field(0, Pref_6, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(0, Pref_6, 2) = ((MR_Box) (Var_12));
              MR_hl_field(0, Pref_6, 3) = ((MR_Box) (Var_13));
              MR_hl_field(0, Pref_6, 4) = (MR_Box) ((MR_Unsigned) (Var_14));
              MR_hl_field(0, Pref_6, 5) = ((MR_Box) (Var_15));
              MR_hl_field(0, Pref_6, 6) = (MR_Box) (packed_word_2);
              MR_hl_field(0, Pref_6, 7) = ((MR_Box) (Var_19));
              MR_hl_field(0, Pref_6, 8) = (MR_Box) ((MR_Unsigned) (Var_20));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      Pref_6 = (MR_Word) (MR_body((MR_Word) (PrefInd_5), (MR_Integer) 1));
      break;
  }
  return Pref_6;
}

MR_Word MR_CALL 
query__default_preferences_1_f_0(
  MR_Word Deep_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = query__default_fields_1_f_0(Deep_3);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(1, &query_scalar_common_2[6])));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 20));
    MR_hl_field(0, HeadVar__2_2, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, HeadVar__2_2, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 1)))));
    MR_hl_field(0, HeadVar__2_2, 7) = ((MR_Box) (&query_scalar_common_2[7]));
    MR_hl_field(0, HeadVar__2_2, 8) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
query__default_fields_1_f_0(
  MR_Word Deep_3)
{
  MR_bool succeeded;
  MR_Word Fields_4;
  MR_Word Time_6;
  MR_Integer UserQuanta_12;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Deep_3, 0))));

  UserQuanta_12 = ((MR_Integer) ((MR_hl_field(0, Var_13, 7))));
  succeeded = (UserQuanta_12 > (MR_Integer) 10);
  if (succeeded)
    Time_6 = (MR_Integer) 1;
  else
    Time_6 = (MR_Integer) 0;
  {
    Fields_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Fields_4, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Time_6) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    MR_hl_field(0, Fields_4, 1) = ((MR_Box) (MR_mkword(1, &query_scalar_common_2[5])));
  }
  return Fields_4;
}

MR_Word MR_CALL 
query__default_command_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 8U);
}

MR_Word MR_CALL 
query__should_display_times_1_f_0(
  MR_Word Deep_3)
{
  MR_bool succeeded;
  MR_Word ShouldDisplayTimes_4;
  MR_Integer UserQuanta_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Deep_3, 0))));

  UserQuanta_5 = ((MR_Integer) ((MR_hl_field(0, Var_6, 7))));
  succeeded = (UserQuanta_5 > (MR_Integer) 10);
  if (succeeded)
    ShouldDisplayTimes_4 = (MR_Integer) 1;
  else
    ShouldDisplayTimes_4 = (MR_Integer) 0;
  return ShouldDisplayTimes_4;
}

static void MR_CALL 
query__try_exec_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HTMLStr_8;

  query__exec_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), &conv0_HTMLStr_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_HTMLStr_8));
}

void MR_CALL 
query__try_exec_4_p_0(
  MR_Word Cmd_5,
  MR_Word Pref_6,
  MR_Word Deep_7,
  MR_String * HTML_8)
{
  MR_bool succeeded;
  MR_Word Result_9;
  MR_Word Var_19;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&query_scalar_common_9[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (query__try_exec_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Cmd_5));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (Pref_6));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (Deep_7));
  }
  mercury__exception__try_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, &Result_9);
  if (((MR_tag((MR_Word) Result_9)) == (MR_Integer) 2))
  {
    MR_Word Exception_10 = ((MR_Word) ((MR_hl_field(2, Result_9, 0))));
    MR_String Msg_12;
    MR_String Var_39;
    MR_String MsgPrime_11;
    MR_Box conv1_MsgPrime_11;

    succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Exception_10, &conv1_MsgPrime_11);
    if (succeeded)
    {
      MsgPrime_11 = ((MR_String) (conv1_MsgPrime_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Msg_12 = MsgPrime_11;
    else
    {
      MR_String ErrorMsg_13;
      MR_Word Var_20;
      MR_Box conv2_Var_20;

      succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), Exception_10, &conv2_Var_20);
      if (succeeded)
      {
        Var_20 = ((MR_Word) (conv2_Var_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ErrorMsg_13 = (MR_String) (Var_20);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "internal software error: ", ErrorMsg_13);
      else
      {
        MR_String DomainMsg_14;
        MR_Word Var_22;
        MR_Box conv3_Var_22;

        succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), Exception_10, &conv3_Var_22);
        if (succeeded)
        {
          Var_22 = ((MR_Word) (conv3_Var_22));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          DomainMsg_14 = (MR_String) (Var_22);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "domain error: ", DomainMsg_14);
        else
          Msg_12 = (MR_String) "unknown exception";
      }
    }
    Var_39 = mercury__string__f_43_43_2_f_0(Msg_12, (MR_String) "</H3>\n");
    *HTML_8 = mercury__string__f_43_43_2_f_0((MR_String) "<H3>AN EXCEPTION HAS OCCURRED: ", Var_39);
  }
  else
    *HTML_8 = ((MR_String) ((MR_hl_field(1, Result_9, 0))));
}

MR_Word MR_CALL 
query__string_to_maybe_query_1_f_0(
  MR_String String_3)
{
  MR_bool succeeded;
  MR_Word MaybeDeepQuery_4;
  MR_Word MaybeCmdStr_5;
  MR_Word MaybePrefStr_6;
  MR_String DeepFileName_7;
  MR_Word Pieces_15;
  MR_String DeepFileName0_16;
  MR_Word Var_20;

  util__split_3_p_0(String_3, (MR_Char) 38, &Pieces_15);
  succeeded = (Pieces_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    DeepFileName0_16 = ((MR_String) ((MR_hl_field(1, Pieces_15, 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(1, Pieces_15, 1))));
    succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MaybeCmdStr_5 = (MR_Word) ((MR_Unsigned) 0U);
    MaybePrefStr_6 = (MR_Word) ((MR_Unsigned) 0U);
    DeepFileName_7 = DeepFileName0_16;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String CmdStr_17;
    MR_String DeepFileName0_28;
    MR_Word Var_21;
    MR_Word Var_22;

    succeeded = (Pieces_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CmdStr_17 = ((MR_String) ((MR_hl_field(1, Pieces_15, 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(1, Pieces_15, 1))));
      succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        DeepFileName0_28 = ((MR_String) ((MR_hl_field(1, Var_21, 0))));
        Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
        succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      {
        MaybeCmdStr_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCmdStr_5, 0) = ((MR_Box) (CmdStr_17));
      }
      MaybePrefStr_6 = (MR_Word) ((MR_Unsigned) 0U);
      DeepFileName_7 = DeepFileName0_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String PrefsStr_18;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_String CmdStr_27;

      succeeded = (Pieces_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CmdStr_27 = ((MR_String) ((MR_hl_field(1, Pieces_15, 0))));
        Var_23 = ((MR_Word) ((MR_hl_field(1, Pieces_15, 1))));
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PrefsStr_18 = ((MR_String) ((MR_hl_field(1, Var_23, 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DeepFileName_7 = ((MR_String) ((MR_hl_field(1, Var_24, 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
            succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              {
                MaybeCmdStr_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCmdStr_5, 0) = ((MR_Box) (CmdStr_27));
              }
              {
                MaybePrefStr_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybePrefStr_6, 0) = ((MR_Box) (PrefsStr_18));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeCmd_8;
    MR_Word MaybePreferences_11;
    MR_Word Var_14;

    if ((MaybeCmdStr_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeCmd_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String CmdStr_9 = ((MR_String) ((MR_hl_field(1, MaybeCmdStr_5, 0))));
      MR_Word Var_12;
      MR_Word MaybeCmd_29;

      MaybeCmd_29 = query__string_to_maybe_cmd_1_f_0(CmdStr_9);
      if ((MaybeCmd_29 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_12 = (MR_Word) ((MR_Unsigned) 8U);
      else
        Var_12 = ((MR_Word) ((MR_hl_field(1, MaybeCmd_29, 0))));
      {
        MaybeCmd_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCmd_8, 0) = ((MR_Box) (Var_12));
      }
    }
    if ((MaybePrefStr_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybePreferences_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String PrefStr_10 = ((MR_String) ((MR_hl_field(1, MaybePrefStr_6, 0))));

      MaybePreferences_11 = query__string_to_maybe_pref_1_f_0(PrefStr_10);
    }
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (MaybeCmd_8));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (DeepFileName_7));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) (MaybePreferences_11));
    }
    {
      MaybeDeepQuery_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDeepQuery_4, 0) = ((MR_Box) (Var_14));
    }
  }
  else
    MaybeDeepQuery_4 = (MR_Word) ((MR_Unsigned) 0U);
  return MaybeDeepQuery_4;
}

MR_Word MR_CALL 
query__string_to_maybe_pref_1_f_0(
  MR_String QueryString_3)
{
  MR_bool succeeded;
  MR_Word MaybePreferences_4;
  MR_Word Pieces_5;
  MR_Word Fields_18;
  MR_Word Box_19;
  MR_Word Colour_20;
  MR_Word MaybeAncestorLimit_22;
  MR_Integer ProcStaticsPerRecTypeLimit_23;
  MR_Word SummarizeHoCallSites_24;
  MR_Word Order_25;
  MR_Word Contour_26;
  MR_Word Time_27;
  MR_Word ModuleQual_28;
  MR_Word InactiveItems_29;
  MR_Word DeveloperMode_30;
  MR_String FieldsStr_6;
  MR_String BoxStr_7;
  MR_String ColourStr_8;
  MR_String MaybeAncestorLimitStr_9;
  MR_String ProcStaticsPerRecTypeLimitStr_10;
  MR_String SummarizeHoCallSitesStr_11;
  MR_String OrderStr_12;
  MR_String ContourStr_13;
  MR_String TimeStr_14;
  MR_String ModuleQualStr_15;
  MR_String InactiveItemsStr_16;
  MR_String DeveloperModeStr_17;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Pieces_45;
  MR_String PortStr_46;
  MR_String TimeStr_47;
  MR_String CallSeqsStr_48;
  MR_String AllocStr_49;
  MR_String MemoryStr_50;
  MR_Word Port_51;
  MR_Word Time_52;
  MR_Word CallSeqs_53;
  MR_Word Alloc_54;
  MR_Word Memory_55;
  MR_Char Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;
  MR_Integer lo_4;
  MR_Integer hi_5;
  MR_Integer mid_6;
  MR_Integer result_7;
  MR_Integer AncestorLimit_21;

  util__split_3_p_0(QueryString_3, (MR_Char) 47, &Pieces_5);
  succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FieldsStr_6 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
    succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BoxStr_7 = ((MR_String) ((MR_hl_field(1, Var_33, 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
      succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ColourStr_8 = ((MR_String) ((MR_hl_field(1, Var_34, 0))));
        Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
        succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeAncestorLimitStr_9 = ((MR_String) ((MR_hl_field(1, Var_35, 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ProcStaticsPerRecTypeLimitStr_10 = ((MR_String) ((MR_hl_field(1, Var_36, 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
            succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SummarizeHoCallSitesStr_11 = ((MR_String) ((MR_hl_field(1, Var_37, 0))));
              Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
              succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                OrderStr_12 = ((MR_String) ((MR_hl_field(1, Var_38, 0))));
                Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, 1))));
                succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ContourStr_13 = ((MR_String) ((MR_hl_field(1, Var_39, 0))));
                  Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, 1))));
                  succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TimeStr_14 = ((MR_String) ((MR_hl_field(1, Var_40, 0))));
                    Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
                    succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ModuleQualStr_15 = ((MR_String) ((MR_hl_field(1, Var_41, 0))));
                      Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
                      succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        InactiveItemsStr_16 = ((MR_String) ((MR_hl_field(1, Var_42, 0))));
                        Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
                        succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          DeveloperModeStr_17 = ((MR_String) ((MR_hl_field(1, Var_43, 0))));
                          Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, 1))));
                          succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_56 = (MR_Char) 45;
                            util__split_3_p_0(FieldsStr_6, Var_56, &Pieces_45);
                            succeeded = (Pieces_45 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              PortStr_46 = ((MR_String) ((MR_hl_field(1, Pieces_45, 0))));
                              Var_57 = ((MR_Word) ((MR_hl_field(1, Pieces_45, 1))));
                              succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                TimeStr_47 = ((MR_String) ((MR_hl_field(1, Var_57, 0))));
                                Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, 1))));
                                succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  CallSeqsStr_48 = ((MR_String) ((MR_hl_field(1, Var_58, 0))));
                                  Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, 1))));
                                  succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    AllocStr_49 = ((MR_String) ((MR_hl_field(1, Var_59, 0))));
                                    Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, 1))));
                                    succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      MemoryStr_50 = ((MR_String) ((MR_hl_field(1, Var_60, 0))));
                                      Var_61 = ((MR_Word) ((MR_hl_field(1, Var_60, 1))));
                                      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        if ((strcmp(PortStr_46, (MR_String) "_") == 0))
                                        {
                                          Port_51 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        if ((strcmp(PortStr_46, (MR_String) "p") == 0))
                                        {
                                          Port_51 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                          succeeded = MR_FALSE;
                                        if (succeeded)
                                        {
                                          // binary string simple lookup switch
                                          ;
                                          lo_0 = (MR_Integer) 0;
                                          hi_1 = (MR_Integer) 5;
                                          do
                                          {
                                            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                                            result_3 = MR_strcmp(TimeStr_47, ((&query_vector_common_7[0 + mid_2]))->query__vector_common_type_7_0__vct_7_f_0);
                                            if ((result_3 == (MR_Integer) 0))
                                            {
                                              Time_52 = ((&query_vector_common_7[0 + mid_2]))->query__vector_common_type_7_0__vct_7_f_1;
                                              succeeded = MR_TRUE;
                                              // jump out of search loop
                                              ;
                                              goto label_0;
                                            }
                                            else
                                            if ((result_3 < (MR_Integer) 0))
                                              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                                            else
                                              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                                          }
                                          while ((lo_0 <= hi_1));
                                          succeeded = MR_FALSE;
                                        label_0:;
                                          if (succeeded)
                                          {
                                            if ((strcmp(CallSeqsStr_48, (MR_String) "S") == 0))
                                            {
                                              CallSeqs_53 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            if ((strcmp(CallSeqsStr_48, (MR_String) "_") == 0))
                                            {
                                              CallSeqs_53 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            if ((strcmp(CallSeqsStr_48, (MR_String) "s") == 0))
                                            {
                                              CallSeqs_53 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                              succeeded = MR_FALSE;
                                            if (succeeded)
                                            {
                                              if ((strcmp(AllocStr_49, (MR_String) "A") == 0))
                                              {
                                                Alloc_54 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              if ((strcmp(AllocStr_49, (MR_String) "_") == 0))
                                              {
                                                Alloc_54 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              if ((strcmp(AllocStr_49, (MR_String) "a") == 0))
                                              {
                                                Alloc_54 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                                succeeded = MR_FALSE;
                                              if (succeeded)
                                              {
                                                // binary string simple lookup switch
                                                ;
                                                lo_4 = (MR_Integer) 0;
                                                hi_5 = (MR_Integer) 4;
                                                do
                                                {
                                                  mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
                                                  result_7 = MR_strcmp(MemoryStr_50, ((&query_vector_common_8[0 + mid_6]))->query__vector_common_type_8_0__vct_8_f_0);
                                                  if ((result_7 == (MR_Integer) 0))
                                                  {
                                                    Memory_55 = ((&query_vector_common_8[0 + mid_6]))->query__vector_common_type_8_0__vct_8_f_1;
                                                    succeeded = MR_TRUE;
                                                    // jump out of search loop
                                                    ;
                                                    goto label_1;
                                                  }
                                                  else
                                                  if ((result_7 < (MR_Integer) 0))
                                                    hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
                                                  else
                                                    lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
                                                }
                                                while ((lo_4 <= hi_5));
                                                succeeded = MR_FALSE;
                                              label_1:;
                                                if (succeeded)
                                                {
                                                  {
                                                    Fields_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(0, Fields_18, 0) = (MR_Box) (((((MR_Unsigned) (Port_51) << 7)) | (((((MR_Unsigned) (Time_52) << 4)) | (((((MR_Unsigned) (CallSeqs_53) << 2)) | (MR_Unsigned) (Alloc_54)))))));
                                                    MR_hl_field(0, Fields_18, 1) = ((MR_Box) (Memory_55));
                                                  }
                                                  if ((strcmp(BoxStr_7, (MR_String) "box") == 0))
                                                  {
                                                    Box_19 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  if ((strcmp(BoxStr_7, (MR_String) "nobox") == 0))
                                                  {
                                                    Box_19 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                    succeeded = MR_FALSE;
                                                  if (succeeded)
                                                  {
                                                    if ((strcmp(ColourStr_8, (MR_String) "cols") == 0))
                                                    {
                                                      Colour_20 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    if ((strcmp(ColourStr_8, (MR_String) "none") == 0))
                                                    {
                                                      Colour_20 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                      succeeded = MR_FALSE;
                                                    if (succeeded)
                                                    {
                                                      succeeded = mercury__string__to_int_2_p_0(MaybeAncestorLimitStr_9, &AncestorLimit_21);
                                                      if (succeeded)
                                                      {
                                                        {
                                                          MaybeAncestorLimit_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(1, MaybeAncestorLimit_22, 0) = ((MR_Box) (AncestorLimit_21));
                                                        }
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = (strcmp(MaybeAncestorLimitStr_9, (MR_String) "no") == 0);
                                                        if (succeeded)
                                                        {
                                                          MaybeAncestorLimit_22 = (MR_Word) ((MR_Unsigned) 0U);
                                                          succeeded = MR_TRUE;
                                                        }
                                                      }
                                                      if (succeeded)
                                                      {
                                                        succeeded = mercury__string__to_int_2_p_0(ProcStaticsPerRecTypeLimitStr_10, &ProcStaticsPerRecTypeLimit_23);
                                                        if (succeeded)
                                                        {
                                                          if ((strcmp(SummarizeHoCallSitesStr_11, (MR_String) "sum") == 0))
                                                          {
                                                            SummarizeHoCallSites_24 = (MR_Integer) 0;
                                                            succeeded = MR_TRUE;
                                                          }
                                                          else
                                                          if ((strcmp(SummarizeHoCallSitesStr_11, (MR_String) "nosum") == 0))
                                                          {
                                                            SummarizeHoCallSites_24 = (MR_Integer) 1;
                                                            succeeded = MR_TRUE;
                                                          }
                                                          else
                                                            succeeded = MR_FALSE;
                                                          if (succeeded)
                                                          {
                                                            succeeded = (strcmp(OrderStr_12, (MR_String) "context") == 0);
                                                            if (succeeded)
                                                            {
                                                              Order_25 = (MR_Word) ((MR_Unsigned) 0U);
                                                              succeeded = MR_TRUE;
                                                            }
                                                            else
                                                            {
                                                              succeeded = (strcmp(OrderStr_12, (MR_String) "name") == 0);
                                                              if (succeeded)
                                                              {
                                                                Order_25 = (MR_Word) ((MR_Unsigned) 4U);
                                                                succeeded = MR_TRUE;
                                                              }
                                                              else
                                                              {
                                                                MR_Word Pieces_66;
                                                                MR_String CostKindStr_67;
                                                                MR_String InclDescStr_68;
                                                                MR_String ScopeStr_69;
                                                                MR_Word CostKind_70;
                                                                MR_Word InclDesc_71;
                                                                MR_Word Scope_72;
                                                                MR_String Var_74;
                                                                MR_Word Var_75;
                                                                MR_Word Var_76;
                                                                MR_Word Var_77;
                                                                MR_Word Var_78;
                                                                MR_Integer lo_8;
                                                                MR_Integer hi_9;
                                                                MR_Integer mid_10;
                                                                MR_Integer result_11;

                                                                util__split_3_p_0(OrderStr_12, (MR_Char) 45, &Pieces_66);
                                                                succeeded = (Pieces_66 != (MR_Word) ((MR_Unsigned) 0U));
                                                                if (succeeded)
                                                                {
                                                                  Var_74 = ((MR_String) ((MR_hl_field(1, Pieces_66, 0))));
                                                                  Var_75 = ((MR_Word) ((MR_hl_field(1, Pieces_66, 1))));
                                                                  succeeded = (strcmp(Var_74, (MR_String) "cost") == 0);
                                                                  if (succeeded)
                                                                  {
                                                                    succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
                                                                    if (succeeded)
                                                                    {
                                                                      CostKindStr_67 = ((MR_String) ((MR_hl_field(1, Var_75, 0))));
                                                                      Var_76 = ((MR_Word) ((MR_hl_field(1, Var_75, 1))));
                                                                      succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
                                                                      if (succeeded)
                                                                      {
                                                                        InclDescStr_68 = ((MR_String) ((MR_hl_field(1, Var_76, 0))));
                                                                        Var_77 = ((MR_Word) ((MR_hl_field(1, Var_76, 1))));
                                                                        succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                                                                        if (succeeded)
                                                                        {
                                                                          ScopeStr_69 = ((MR_String) ((MR_hl_field(1, Var_77, 0))));
                                                                          Var_78 = ((MR_Word) ((MR_hl_field(1, Var_77, 1))));
                                                                          succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                                                                          if (succeeded)
                                                                          {
                                                                            // binary string simple lookup switch
                                                                            ;
                                                                            lo_8 = (MR_Integer) 0;
                                                                            hi_9 = (MR_Integer) 5;
                                                                            do
                                                                            {
                                                                              mid_10 = (((MR_Integer) ((MR_Unsigned) lo_8 + (MR_Unsigned) hi_9)) / (MR_Integer) 2);
                                                                              result_11 = MR_strcmp(CostKindStr_67, ((&query_vector_common_5[6 + mid_10]))->query__vector_common_type_5_0__vct_5_f_0);
                                                                              if ((result_11 == (MR_Integer) 0))
                                                                              {
                                                                                CostKind_70 = ((&query_vector_common_5[6 + mid_10]))->query__vector_common_type_5_0__vct_5_f_1;
                                                                                succeeded = MR_TRUE;
                                                                                // jump out of search loop
                                                                                ;
                                                                                goto label_2;
                                                                              }
                                                                              else
                                                                              if ((result_11 < (MR_Integer) 0))
                                                                                hi_9 = (MR_Integer) ((MR_Unsigned) mid_10 - (MR_Unsigned) 1);
                                                                              else
                                                                                lo_8 = (MR_Integer) ((MR_Unsigned) mid_10 + (MR_Unsigned) 1);
                                                                            }
                                                                            while ((lo_8 <= hi_9));
                                                                            succeeded = MR_FALSE;
                                                                          label_2:;
                                                                            if (succeeded)
                                                                            {
                                                                              if ((strcmp(InclDescStr_68, (MR_String) "both") == 0))
                                                                              {
                                                                                InclDesc_71 = (MR_Integer) 1;
                                                                                succeeded = MR_TRUE;
                                                                              }
                                                                              else
                                                                              if ((strcmp(InclDescStr_68, (MR_String) "self") == 0))
                                                                              {
                                                                                InclDesc_71 = (MR_Integer) 0;
                                                                                succeeded = MR_TRUE;
                                                                              }
                                                                              else
                                                                                succeeded = MR_FALSE;
                                                                              if (succeeded)
                                                                              {
                                                                                if ((strcmp(ScopeStr_69, (MR_String) "oa") == 0))
                                                                                {
                                                                                  Scope_72 = (MR_Integer) 1;
                                                                                  succeeded = MR_TRUE;
                                                                                }
                                                                                else
                                                                                if ((strcmp(ScopeStr_69, (MR_String) "pc") == 0))
                                                                                {
                                                                                  Scope_72 = (MR_Integer) 0;
                                                                                  succeeded = MR_TRUE;
                                                                                }
                                                                                else
                                                                                  succeeded = MR_FALSE;
                                                                                if (succeeded)
                                                                                {
                                                                                  {
                                                                                    Order_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                                    MR_hl_field(1, Order_25, 0) = (MR_Box) (((((MR_Unsigned) (CostKind_70) << 2)) | (((((MR_Unsigned) (InclDesc_71) << 1)) | (MR_Unsigned) (Scope_72)))));
                                                                                  }
                                                                                  succeeded = MR_TRUE;
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
                                                            if (succeeded)
                                                            {
                                                              if ((strcmp(ContourStr_13, (MR_String) "ac") == 0))
                                                              {
                                                                Contour_26 = (MR_Integer) 0;
                                                                succeeded = MR_TRUE;
                                                              }
                                                              else
                                                              if ((strcmp(ContourStr_13, (MR_String) "nc") == 0))
                                                              {
                                                                Contour_26 = (MR_Integer) 1;
                                                                succeeded = MR_TRUE;
                                                              }
                                                              else
                                                                succeeded = MR_FALSE;
                                                              if (succeeded)
                                                              {
                                                                if ((strcmp(TimeStr_14, (MR_String) "mi") == 0))
                                                                {
                                                                  Time_27 = (MR_Integer) 1;
                                                                  succeeded = MR_TRUE;
                                                                }
                                                                else
                                                                if ((strcmp(TimeStr_14, (MR_String) "no") == 0))
                                                                {
                                                                  Time_27 = (MR_Integer) 0;
                                                                  succeeded = MR_TRUE;
                                                                }
                                                                else
                                                                if ((strcmp(TimeStr_14, (MR_String) "th") == 0))
                                                                {
                                                                  Time_27 = (MR_Integer) 2;
                                                                  succeeded = MR_TRUE;
                                                                }
                                                                else
                                                                  succeeded = MR_FALSE;
                                                                if (succeeded)
                                                                {
                                                                  if ((strcmp(ModuleQualStr_15, (MR_String) "mqa") == 0))
                                                                  {
                                                                    ModuleQual_28 = (MR_Integer) 0;
                                                                    succeeded = MR_TRUE;
                                                                  }
                                                                  else
                                                                  if ((strcmp(ModuleQualStr_15, (MR_String) "mqn") == 0))
                                                                  {
                                                                    ModuleQual_28 = (MR_Integer) 2;
                                                                    succeeded = MR_TRUE;
                                                                  }
                                                                  else
                                                                  if ((strcmp(ModuleQualStr_15, (MR_String) "mqwd") == 0))
                                                                  {
                                                                    ModuleQual_28 = (MR_Integer) 1;
                                                                    succeeded = MR_TRUE;
                                                                  }
                                                                  else
                                                                    succeeded = MR_FALSE;
                                                                  if (succeeded)
                                                                  {
                                                                    succeeded = query__string_to_inactive_items_2_p_0(InactiveItemsStr_16, &InactiveItems_29);
                                                                    if (succeeded)
                                                                    {
                                                                      if ((strcmp(DeveloperModeStr_17, (MR_String) "dev") == 0))
                                                                      {
                                                                        DeveloperMode_30 = (MR_Integer) 0;
                                                                        succeeded = MR_TRUE;
                                                                      }
                                                                      else
                                                                      if ((strcmp(DeveloperModeStr_17, (MR_String) "nodev") == 0))
                                                                      {
                                                                        DeveloperMode_30 = (MR_Integer) 1;
                                                                        succeeded = MR_TRUE;
                                                                      }
                                                                      else
                                                                        succeeded = MR_FALSE;
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
  if (succeeded)
  {
    MR_Word Preferences_31;

    {
      Preferences_31 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Preferences_31, 0) = ((MR_Box) (Fields_18));
      MR_hl_field(0, Preferences_31, 1) = (MR_Box) (((((MR_Unsigned) (Box_19) << 1)) | (MR_Unsigned) (Colour_20)));
      MR_hl_field(0, Preferences_31, 2) = ((MR_Box) (MaybeAncestorLimit_22));
      MR_hl_field(0, Preferences_31, 3) = ((MR_Box) (ProcStaticsPerRecTypeLimit_23));
      MR_hl_field(0, Preferences_31, 4) = (MR_Box) ((MR_Unsigned) (SummarizeHoCallSites_24));
      MR_hl_field(0, Preferences_31, 5) = ((MR_Box) (Order_25));
      MR_hl_field(0, Preferences_31, 6) = (MR_Box) (((((MR_Unsigned) (Contour_26) << 4)) | (((((MR_Unsigned) (Time_27) << 2)) | (MR_Unsigned) (ModuleQual_28)))));
      MR_hl_field(0, Preferences_31, 7) = ((MR_Box) (InactiveItems_29));
      MR_hl_field(0, Preferences_31, 8) = (MR_Box) ((MR_Unsigned) (DeveloperMode_30));
    }
    {
      MaybePreferences_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybePreferences_4, 0) = ((MR_Box) (Preferences_31));
    }
  }
  else
    MaybePreferences_4 = (MR_Word) ((MR_Unsigned) 0U);
  return MaybePreferences_4;
}

static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(HeadVar__1_1)) & (MR_Integer) 15);
  MR_String str_1 = ((&query_vector_common_6[0 + slot_0]))->query__vector_common_type_6_0__vct_6_f_0;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
  {
    // we found a match; look up the results
    ;
    *HeadVar__2_2 = ((&query_vector_common_6[0 + slot_0]))->query__vector_common_type_6_0__vct_6_f_1;
    succeeded = MR_TRUE;
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_Word MR_CALL 
query__string_to_maybe_cmd_1_f_0(
  MR_String QueryString_3)
{
  MR_bool succeeded;
  MR_Word MaybeCmd_4;
  MR_Word Pieces_5;
  MR_Char Var_44;
  MR_Word MaybePercent_7;
  MR_String MaybePercentStr_6;
  MR_String Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String Var_270;

  Var_44 = query__pref_separator_char_0_f_0();
  util__split_3_p_0(QueryString_3, Var_44, &Pieces_5);
  succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_45 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
    Var_270 = query__cmd_str_root_0_f_0();
    succeeded = (strcmp(Var_45, Var_270) == 0);
    if (succeeded)
    {
      succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybePercentStr_6 = ((MR_String) ((MR_hl_field(1, Var_46, 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
        succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (strcmp(MaybePercentStr_6, (MR_String) "no") == 0);
          if (succeeded)
          {
            MaybePercent_7 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Percent_8;

            succeeded = mercury__string__to_int_2_p_0(MaybePercentStr_6, &Percent_8);
            if (succeeded)
            {
              {
                MaybePercent_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybePercent_7, 0) = ((MR_Box) (Percent_8));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Cmd_9;

    {
      Cmd_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Cmd_9, 0) = ((MR_Box) (MaybePercent_7));
    }
    {
      MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_9));
    }
  }
  else
  {
    MR_Integer CliqueNum_11;
    MR_String CliqueNumStr_10;
    MR_String Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_String Var_271;

    succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_48 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
      Var_271 = query__cmd_str_clique_0_f_0();
      succeeded = (strcmp(Var_48, Var_271) == 0);
      if (succeeded)
      {
        succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CliqueNumStr_10 = ((MR_String) ((MR_hl_field(1, Var_49, 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, 1))));
          succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = mercury__string__to_int_2_p_0(CliqueNumStr_10, &CliqueNum_11);
        }
      }
    }
    if (succeeded)
    {
      MR_Word CliquePtr_12 = (MR_Word) (CliqueNum_11);
      MR_Word Cmd_118;

      {
        Cmd_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Cmd_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Cmd_118, 1) = ((MR_Box) (CliquePtr_12));
      }
      {
        MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_118));
      }
    }
    else
    {
      MR_Integer CliqueNum_269;
      MR_String Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_String CliqueNumStr_119;
      MR_String Var_272;

      succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_51 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
        Var_52 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
        Var_272 = query__cmd_str_clique_recursive_costs_0_f_0();
        succeeded = (strcmp(Var_51, Var_272) == 0);
        if (succeeded)
        {
          succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CliqueNumStr_119 = ((MR_String) ((MR_hl_field(1, Var_52, 0))));
            Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, 1))));
            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = mercury__string__to_int_2_p_0(CliqueNumStr_119, &CliqueNum_269);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Cmd_120;
        MR_Word CliquePtr_121 = (MR_Word) (CliqueNum_269);

        {
          Cmd_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Cmd_120, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Cmd_120, 1) = ((MR_Box) (CliquePtr_121));
        }
        {
          MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_120));
        }
      }
      else
      {
        MR_String Var_54;
        MR_Word Var_55;
        MR_String Var_273;

        succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_54 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
          Var_55 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
          Var_273 = query__cmd_str_recursion_types_frequency_0_f_0();
          succeeded = (strcmp(Var_54, Var_273) == 0);
          if (succeeded)
            succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          MaybeCmd_4 = (MR_Word) (MR_mkword(1, &query_scalar_common_2[0]));
        else
        {
          MR_Integer PSI_14;
          MR_String PSIStr_13;
          MR_String Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_String Var_274;

          succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_56 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
            Var_57 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
            Var_274 = query__cmd_str_proc_0_f_0();
            succeeded = (strcmp(Var_56, Var_274) == 0);
            if (succeeded)
            {
              succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PSIStr_13 = ((MR_String) ((MR_hl_field(1, Var_57, 0))));
                Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, 1))));
                succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = mercury__string__to_int_2_p_0(PSIStr_13, &PSI_14);
              }
            }
          }
          if (succeeded)
          {
            MR_Word PSPtr_15 = (MR_Word) (PSI_14);
            MR_Word Cmd_123;

            {
              Cmd_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Cmd_123, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Cmd_123, 1) = ((MR_Box) (PSPtr_15));
            }
            {
              MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_123));
            }
          }
          else
          {
            MR_Word GroupCallers_20;
            MR_Integer BunchNum_21;
            MR_Integer CallersPerBunch_22;
            MR_Word Contour_23;
            MR_Integer PSI_257;
            MR_String GroupCallersStr_16;
            MR_String BunchNumStr_17;
            MR_String CallersPerBunchStr_18;
            MR_String ContourStr_19;
            MR_String Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_String PSIStr_124;
            MR_String Var_275;

            succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_59 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
              Var_60 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
              Var_275 = query__cmd_str_proc_callers_0_f_0();
              succeeded = (strcmp(Var_59, Var_275) == 0);
              if (succeeded)
              {
                succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PSIStr_124 = ((MR_String) ((MR_hl_field(1, Var_60, 0))));
                  Var_61 = ((MR_Word) ((MR_hl_field(1, Var_60, 1))));
                  succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    GroupCallersStr_16 = ((MR_String) ((MR_hl_field(1, Var_61, 0))));
                    Var_62 = ((MR_Word) ((MR_hl_field(1, Var_61, 1))));
                    succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      BunchNumStr_17 = ((MR_String) ((MR_hl_field(1, Var_62, 0))));
                      Var_63 = ((MR_Word) ((MR_hl_field(1, Var_62, 1))));
                      succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CallersPerBunchStr_18 = ((MR_String) ((MR_hl_field(1, Var_63, 0))));
                        Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, 1))));
                        succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ContourStr_19 = ((MR_String) ((MR_hl_field(1, Var_64, 0))));
                          Var_65 = ((MR_Word) ((MR_hl_field(1, Var_64, 1))));
                          succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = mercury__string__to_int_2_p_0(PSIStr_124, &PSI_257);
                            if (succeeded)
                            {
                              succeeded = query__string_to_caller_groups_2_p_0(GroupCallersStr_16, &GroupCallers_20);
                              if (succeeded)
                              {
                                succeeded = mercury__string__to_int_2_p_0(BunchNumStr_17, &BunchNum_21);
                                if (succeeded)
                                {
                                  succeeded = mercury__string__to_int_2_p_0(CallersPerBunchStr_18, &CallersPerBunch_22);
                                  if (succeeded)
                                    succeeded = query__string_to_contour_exclusion_2_p_0(ContourStr_19, &Contour_23);
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
            if (succeeded)
            {
              MR_Word Cmd_125;
              MR_Word PSPtr_126 = (MR_Word) (PSI_257);

              {
                Cmd_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Cmd_125, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Cmd_125, 1) = ((MR_Box) (PSPtr_126));
                MR_hl_field(3, Cmd_125, 2) = (MR_Box) ((MR_Unsigned) (GroupCallers_20));
                MR_hl_field(3, Cmd_125, 3) = ((MR_Box) (BunchNum_21));
                MR_hl_field(3, Cmd_125, 4) = ((MR_Box) (CallersPerBunch_22));
                MR_hl_field(3, Cmd_125, 5) = (MR_Box) ((MR_Unsigned) (Contour_23));
              }
              {
                MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_125));
              }
            }
            else
            {
              MR_String Var_66;
              MR_Word Var_67;
              MR_String Var_276;

              succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_66 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                Var_67 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                Var_276 = query__cmd_str_program_modules_0_f_0();
                succeeded = (strcmp(Var_66, Var_276) == 0);
                if (succeeded)
                  succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
                MaybeCmd_4 = (MR_Word) (MR_mkword(1, &query_scalar_common_2[1]));
              else
              {
                MR_String ModuleName_24;
                MR_String Var_68;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_String Var_277;

                succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_68 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                  Var_69 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                  Var_277 = query__cmd_str_module_0_f_0();
                  succeeded = (strcmp(Var_68, Var_277) == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ModuleName_24 = ((MR_String) ((MR_hl_field(1, Var_69, 0))));
                      Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, 1))));
                      succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Cmd_128;

                  {
                    Cmd_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Cmd_128, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, Cmd_128, 1) = ((MR_Box) (ModuleName_24));
                  }
                  {
                    MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_128));
                  }
                }
                else
                {
                  MR_String ModuleName_237;
                  MR_String Var_71;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_String Var_278;

                  succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_71 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                    Var_72 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                    Var_278 = query__cmd_str_module_getter_setters_0_f_0();
                    succeeded = (strcmp(Var_71, Var_278) == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ModuleName_237 = ((MR_String) ((MR_hl_field(1, Var_72, 0))));
                        Var_73 = ((MR_Word) ((MR_hl_field(1, Var_72, 1))));
                        succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Cmd_129;

                    {
                      Cmd_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Cmd_129, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, Cmd_129, 1) = ((MR_Box) (ModuleName_237));
                    }
                    {
                      MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_129));
                    }
                  }
                  else
                  {
                    MR_String ModuleName_229;
                    MR_String Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_String Var_279;

                    succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_74 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                      Var_75 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                      Var_279 = query__cmd_str_module_rep_0_f_0();
                      succeeded = (strcmp(Var_74, Var_279) == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ModuleName_229 = ((MR_String) ((MR_hl_field(1, Var_75, 0))));
                          Var_76 = ((MR_Word) ((MR_hl_field(1, Var_75, 1))));
                          succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Cmd_130;

                      {
                        Cmd_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Cmd_130, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(3, Cmd_130, 1) = ((MR_Box) (ModuleName_229));
                      }
                      {
                        MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_130));
                      }
                    }
                    else
                    {
                      MR_Word Limit_29;
                      MR_Word CostKind_30;
                      MR_Word InclDesc_31;
                      MR_Word Scope_32;
                      MR_String LimitStr_25;
                      MR_String CostKindStr_26;
                      MR_String InclDescStr_27;
                      MR_String ScopeStr_28;
                      MR_String Var_77;
                      MR_Word Var_78;
                      MR_Word Var_79;
                      MR_Word Var_80;
                      MR_Word Var_81;
                      MR_Word Var_82;
                      MR_String Var_280;

                      succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_77 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                        Var_78 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                        Var_280 = query__cmd_str_top_procs_0_f_0();
                        succeeded = (strcmp(Var_77, Var_280) == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            LimitStr_25 = ((MR_String) ((MR_hl_field(1, Var_78, 0))));
                            Var_79 = ((MR_Word) ((MR_hl_field(1, Var_78, 1))));
                            succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              CostKindStr_26 = ((MR_String) ((MR_hl_field(1, Var_79, 0))));
                              Var_80 = ((MR_Word) ((MR_hl_field(1, Var_79, 1))));
                              succeeded = (Var_80 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                InclDescStr_27 = ((MR_String) ((MR_hl_field(1, Var_80, 0))));
                                Var_81 = ((MR_Word) ((MR_hl_field(1, Var_80, 1))));
                                succeeded = (Var_81 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ScopeStr_28 = ((MR_String) ((MR_hl_field(1, Var_81, 0))));
                                  Var_82 = ((MR_Word) ((MR_hl_field(1, Var_81, 1))));
                                  succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    succeeded = query__string_to_limit_2_p_0(LimitStr_25, &Limit_29);
                                    if (succeeded)
                                    {
                                      succeeded = query__string_to_cost_kind_2_p_0(CostKindStr_26, &CostKind_30);
                                      if (succeeded)
                                      {
                                        succeeded = query__string_to_incl_desc_2_p_0(InclDescStr_27, &InclDesc_31);
                                        if (succeeded)
                                          succeeded = query__string_to_scope_2_p_0(ScopeStr_28, &Scope_32);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word Cmd_131;

                        {
                          Cmd_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Cmd_131, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                          MR_hl_field(3, Cmd_131, 1) = ((MR_Box) (Limit_29));
                          MR_hl_field(3, Cmd_131, 2) = (MR_Box) (((((MR_Unsigned) (CostKind_30) << 2)) | (((((MR_Unsigned) (InclDesc_31) << 1)) | (MR_Unsigned) (Scope_32)))));
                        }
                        {
                          MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_131));
                        }
                      }
                      else
                      {
                        MR_Integer PSI_213;
                        MR_String Var_83;
                        MR_Word Var_84;
                        MR_Word Var_85;
                        MR_String PSIStr_132;
                        MR_String Var_281;

                        succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_83 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                          Var_84 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                          Var_281 = query__cmd_str_static_coverage_0_f_0();
                          succeeded = (strcmp(Var_83, Var_281) == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              PSIStr_132 = ((MR_String) ((MR_hl_field(1, Var_84, 0))));
                              Var_85 = ((MR_Word) ((MR_hl_field(1, Var_84, 1))));
                              succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                                succeeded = mercury__string__to_int_2_p_0(PSIStr_132, &PSI_213);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word Var_86;
                          MR_Word PSPtr_133 = (MR_Word) (PSI_213);

                          {
                            Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, Var_86, 1) = ((MR_Box) (PSPtr_133));
                          }
                          {
                            MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Var_86));
                          }
                        }
                        else
                        {
                          MR_Integer PDI_34;
                          MR_String PDIStr_33;
                          MR_String Var_87;
                          MR_Word Var_88;
                          MR_Word Var_89;
                          MR_String Var_282;

                          succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_87 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                            Var_88 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                            Var_282 = query__cmd_str_dynamic_coverage_0_f_0();
                            succeeded = (strcmp(Var_87, Var_282) == 0);
                            if (succeeded)
                            {
                              succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                PDIStr_33 = ((MR_String) ((MR_hl_field(1, Var_88, 0))));
                                Var_89 = ((MR_Word) ((MR_hl_field(1, Var_88, 1))));
                                succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                  succeeded = mercury__string__to_int_2_p_0(PDIStr_33, &PDI_34);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word PDPtr_35 = (MR_Word) (PDI_34);
                            MR_Word Var_90;

                            {
                              Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, Var_90, 1) = ((MR_Box) (PDPtr_35));
                            }
                            {
                              MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Var_90));
                            }
                          }
                          else
                          {
                            MR_String Var_91;
                            MR_Word Var_92;
                            MR_String Var_283;

                            succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_91 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                              Var_92 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                              Var_283 = query__cmd_str_menu_0_f_0();
                              succeeded = (strcmp(Var_91, Var_283) == 0);
                              if (succeeded)
                                succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                            }
                            if (succeeded)
                              MaybeCmd_4 = (MR_Word) (MR_mkword(1, &query_scalar_common_2[2]));
                            else
                            {
                              MR_Integer PSI_186;
                              MR_String Var_93;
                              MR_Word Var_94;
                              MR_Word Var_95;
                              MR_String PSIStr_135;
                              MR_String Var_284;

                              succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_93 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                Var_94 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                Var_284 = query__cmd_str_dump_proc_static_0_f_0();
                                succeeded = (strcmp(Var_93, Var_284) == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    PSIStr_135 = ((MR_String) ((MR_hl_field(1, Var_94, 0))));
                                    Var_95 = ((MR_Word) ((MR_hl_field(1, Var_94, 1))));
                                    succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                      succeeded = mercury__string__to_int_2_p_0(PSIStr_135, &PSI_186);
                                  }
                                }
                              }
                              if (succeeded)
                              {
                                MR_Word Cmd_136;
                                MR_Word PSPtr_137 = (MR_Word) (PSI_186);

                                {
                                  Cmd_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Cmd_136, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                                  MR_hl_field(3, Cmd_136, 1) = ((MR_Box) (PSPtr_137));
                                }
                                {
                                  MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_136));
                                }
                              }
                              else
                              {
                                MR_Integer PDI_179;
                                MR_String Var_96;
                                MR_Word Var_97;
                                MR_Word Var_98;
                                MR_String PDIStr_138;
                                MR_String Var_285;

                                succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  Var_96 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                  Var_97 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                  Var_285 = query__cmd_str_dump_proc_dynamic_0_f_0();
                                  succeeded = (strcmp(Var_96, Var_285) == 0);
                                  if (succeeded)
                                  {
                                    succeeded = (Var_97 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      PDIStr_138 = ((MR_String) ((MR_hl_field(1, Var_97, 0))));
                                      Var_98 = ((MR_Word) ((MR_hl_field(1, Var_97, 1))));
                                      succeeded = (Var_98 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                        succeeded = mercury__string__to_int_2_p_0(PDIStr_138, &PDI_179);
                                    }
                                  }
                                }
                                if (succeeded)
                                {
                                  MR_Word Cmd_139;
                                  MR_Word PDPtr_140 = (MR_Word) (PDI_179);

                                  {
                                    Cmd_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(3, Cmd_139, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                                    MR_hl_field(3, Cmd_139, 1) = ((MR_Box) (PDPtr_140));
                                  }
                                  {
                                    MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_139));
                                  }
                                }
                                else
                                {
                                  MR_Integer CSSI_37;
                                  MR_String CSSIStr_36;
                                  MR_String Var_99;
                                  MR_Word Var_100;
                                  MR_Word Var_101;
                                  MR_String Var_286;

                                  succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_99 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                    Var_100 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                    Var_286 = query__cmd_str_dump_call_site_static_0_f_0();
                                    succeeded = (strcmp(Var_99, Var_286) == 0);
                                    if (succeeded)
                                    {
                                      succeeded = (Var_100 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        CSSIStr_36 = ((MR_String) ((MR_hl_field(1, Var_100, 0))));
                                        Var_101 = ((MR_Word) ((MR_hl_field(1, Var_100, 1))));
                                        succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                          succeeded = mercury__string__to_int_2_p_0(CSSIStr_36, &CSSI_37);
                                      }
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_Word CSSPtr_38 = (MR_Word) (CSSI_37);
                                    MR_Word Cmd_141;

                                    {
                                      Cmd_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(3, Cmd_141, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                                      MR_hl_field(3, Cmd_141, 1) = ((MR_Box) (CSSPtr_38));
                                    }
                                    {
                                      MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_141));
                                    }
                                  }
                                  else
                                  {
                                    MR_Integer CSDI_40;
                                    MR_String CSDIStr_39;
                                    MR_String Var_102;
                                    MR_Word Var_103;
                                    MR_Word Var_104;
                                    MR_String Var_287;

                                    succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_102 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                      Var_103 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                      Var_287 = query__cmd_str_dump_call_site_dynamic_0_f_0();
                                      succeeded = (strcmp(Var_102, Var_287) == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (Var_103 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          CSDIStr_39 = ((MR_String) ((MR_hl_field(1, Var_103, 0))));
                                          Var_104 = ((MR_Word) ((MR_hl_field(1, Var_103, 1))));
                                          succeeded = (Var_104 == (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                            succeeded = mercury__string__to_int_2_p_0(CSDIStr_39, &CSDI_40);
                                        }
                                      }
                                    }
                                    if (succeeded)
                                    {
                                      MR_Word CSDPtr_41 = (MR_Word) (CSDI_40);
                                      MR_Word Cmd_142;

                                      {
                                        Cmd_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(3, Cmd_142, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                                        MR_hl_field(3, Cmd_142, 1) = ((MR_Box) (CSDPtr_41));
                                      }
                                      {
                                        MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_142));
                                      }
                                    }
                                    else
                                    {
                                      MR_Integer CliqueNum_161;
                                      MR_String Var_105;
                                      MR_Word Var_106;
                                      MR_Word Var_107;
                                      MR_String CliqueNumStr_143;
                                      MR_String Var_288;

                                      succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_105 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                        Var_106 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                        Var_288 = query__cmd_str_dump_raw_clique_0_f_0();
                                        succeeded = (strcmp(Var_105, Var_288) == 0);
                                        if (succeeded)
                                        {
                                          succeeded = (Var_106 != (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            CliqueNumStr_143 = ((MR_String) ((MR_hl_field(1, Var_106, 0))));
                                            Var_107 = ((MR_Word) ((MR_hl_field(1, Var_106, 1))));
                                            succeeded = (Var_107 == (MR_Word) ((MR_Unsigned) 0U));
                                            if (succeeded)
                                              succeeded = mercury__string__to_int_2_p_0(CliqueNumStr_143, &CliqueNum_161);
                                          }
                                        }
                                      }
                                      if (succeeded)
                                      {
                                        MR_Word Cmd_144;
                                        MR_Word CliquePtr_145 = (MR_Word) (CliqueNum_161);

                                        {
                                          Cmd_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(3, Cmd_144, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                                          MR_hl_field(3, Cmd_144, 1) = ((MR_Box) (CliquePtr_145));
                                        }
                                        {
                                          MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_144));
                                        }
                                      }
                                      else
                                      {
                                        MR_Integer CSDI_157;
                                        MR_String Var_108;
                                        MR_Word Var_109;
                                        MR_Word Var_110;
                                        MR_String CSDIStr_146;
                                        MR_String Var_289;

                                        succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_108 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                          Var_109 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                          Var_289 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
                                          succeeded = (strcmp(Var_108, Var_289) == 0);
                                          if (succeeded)
                                          {
                                            succeeded = (Var_109 != (MR_Word) ((MR_Unsigned) 0U));
                                            if (succeeded)
                                            {
                                              CSDIStr_146 = ((MR_String) ((MR_hl_field(1, Var_109, 0))));
                                              Var_110 = ((MR_Word) ((MR_hl_field(1, Var_109, 1))));
                                              succeeded = (Var_110 == (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                                succeeded = mercury__string__to_int_2_p_0(CSDIStr_146, &CSDI_157);
                                            }
                                          }
                                        }
                                        if (succeeded)
                                        {
                                          MR_Word Cmd_147;
                                          MR_Word CSDPtr_148 = (MR_Word) (CSDI_157);

                                          {
                                            Cmd_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(3, Cmd_147, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                            MR_hl_field(3, Cmd_147, 1) = ((MR_Box) (CSDPtr_148));
                                          }
                                          {
                                            MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_147));
                                          }
                                        }
                                        else
                                        {
                                          MR_Integer TimeOut_43;
                                          MR_String TimeOutStr_42;
                                          MR_String Var_111;
                                          MR_Word Var_112;
                                          MR_Word Var_113;
                                          MR_String Var_290;

                                          succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            Var_111 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                            Var_112 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                            Var_290 = query__cmd_str_timeout_0_f_0();
                                            succeeded = (strcmp(Var_111, Var_290) == 0);
                                            if (succeeded)
                                            {
                                              succeeded = (Var_112 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                TimeOutStr_42 = ((MR_String) ((MR_hl_field(1, Var_112, 0))));
                                                Var_113 = ((MR_Word) ((MR_hl_field(1, Var_112, 1))));
                                                succeeded = (Var_113 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                  succeeded = mercury__string__to_int_2_p_0(TimeOutStr_42, &TimeOut_43);
                                              }
                                            }
                                          }
                                          if (succeeded)
                                          {
                                            MR_Word Cmd_149;

                                            {
                                              Cmd_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(1, Cmd_149, 0) = ((MR_Box) (TimeOut_43));
                                            }
                                            {
                                              MaybeCmd_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(1, MaybeCmd_4, 0) = ((MR_Box) (Cmd_149));
                                            }
                                          }
                                          else
                                          {
                                            MR_String Var_114;
                                            MR_Word Var_115;
                                            MR_String Var_291;

                                            succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                            if (succeeded)
                                            {
                                              Var_114 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                              Var_115 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                              Var_291 = query__cmd_str_restart_0_f_0();
                                              succeeded = (strcmp(Var_114, Var_291) == 0);
                                              if (succeeded)
                                                succeeded = (Var_115 == (MR_Word) ((MR_Unsigned) 0U));
                                            }
                                            if (succeeded)
                                              MaybeCmd_4 = (MR_Word) (MR_mkword(1, &query_scalar_common_2[3]));
                                            else
                                            {
                                              MR_String Var_116;
                                              MR_Word Var_117;
                                              MR_String Var_292;

                                              succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                Var_116 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
                                                Var_117 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
                                                Var_292 = query__cmd_str_quit_0_f_0();
                                                succeeded = (strcmp(Var_116, Var_292) == 0);
                                                if (succeeded)
                                                  succeeded = (Var_117 == (MR_Word) ((MR_Unsigned) 0U));
                                              }
                                              if (succeeded)
                                                MaybeCmd_4 = (MR_Word) (MR_mkword(1, &query_scalar_common_2[4]));
                                              else
                                                MaybeCmd_4 = (MR_Word) ((MR_Unsigned) 0U);
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
  return MaybeCmd_4;
}

static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "ac") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "nc") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "oa") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "pc") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "both") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "self") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 5;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&query_vector_common_5[0 + mid_2]))->query__vector_common_type_5_0__vct_5_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&query_vector_common_5[0 + mid_2]))->query__vector_common_type_5_0__vct_5_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
  MR_String LimitStr_3,
  MR_Word * Limit_4)
{
  MR_bool succeeded;
  MR_Integer First_8;
  MR_Integer Last_9;
  MR_Word Pieces_5;
  MR_String FirstStr_6;
  MR_String LastStr_7;
  MR_Word Var_15;
  MR_Word Var_16;

  util__split_3_p_0(LimitStr_3, (MR_Char) 45, &Pieces_5);
  succeeded = (Pieces_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FirstStr_6 = ((MR_String) ((MR_hl_field(1, Pieces_5, 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(1, Pieces_5, 1))));
    succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LastStr_7 = ((MR_String) ((MR_hl_field(1, Var_15, 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
      succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = mercury__string__to_int_2_p_0(FirstStr_6, &First_8);
        if (succeeded)
          succeeded = mercury__string__to_int_2_p_0(LastStr_7, &Last_9);
      }
    }
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Limit_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (First_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (Last_9));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Float Threshold_11;
    MR_String PercentStr_10;

    succeeded = mercury__string__append_3_p_1((MR_String) "p", &PercentStr_10, LimitStr_3);
    if (succeeded)
      succeeded = mercury__string__to_float_2_p_0(PercentStr_10, &Threshold_11);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Limit_4 = base;
        MR_hl_field(1, base, 0) = MR_box_float(Threshold_11);
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String ValueStr_12;
      MR_Float Value_13;

      succeeded = mercury__string__append_3_p_1((MR_String) "v", &ValueStr_12, LimitStr_3);
      if (succeeded)
      {
        succeeded = mercury__string__to_float_2_p_0(ValueStr_12, &Value_13);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Limit_4 = base;
            MR_hl_field(2, base, 0) = MR_box_float(Value_13);
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 3;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&query_vector_common_4[0 + mid_2]))->query__vector_common_type_4_0__vct_4_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&query_vector_common_4[0 + mid_2]))->query__vector_common_type_4_0__vct_4_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_String MR_CALL 
query__query_to_string_1_f_0(
  MR_Word DeepQuery_3)
{
  MR_String String_4;
  MR_Word Cmd_5;
  MR_String DeepFileName_6 = ((MR_String) ((MR_hl_field(0, DeepQuery_3, 1))));
  MR_Word MaybePreferences_7 = ((MR_Word) ((MR_hl_field(0, DeepQuery_3, 2))));
  MR_String PreferencesString_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, DeepQuery_3, 0))));
  MR_String Var_11;
  MR_String Var_12;
  MR_String Var_13;
  MR_String Var_15;
  MR_String Var_16;
  MR_String Var_17;

  Cmd_5 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
  if ((MaybePreferences_7 == (MR_Word) ((MR_Unsigned) 0U)))
    PreferencesString_9 = (MR_String) "";
  else
  {
    MR_Word Preferences_8 = ((MR_Word) ((MR_hl_field(1, MaybePreferences_7, 0))));

    PreferencesString_9 = query__preferences_to_string_1_f_0(Preferences_8);
  }
  Var_11 = query__cmd_to_string_1_f_0(Cmd_5);
  Var_13 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
  Var_17 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
  Var_16 = mercury__string__f_43_43_2_f_0(Var_17, DeepFileName_6);
  Var_15 = mercury__string__f_43_43_2_f_0(PreferencesString_9, Var_16);
  Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_15);
  String_4 = mercury__string__f_43_43_2_f_0(Var_11, Var_12);
  return String_4;
}

static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
  MR_Word Pref_3)
{
  MR_String PrefStr_4;
  MR_Word Fields_5 = ((MR_Word) ((MR_hl_field(0, Pref_3, 0))));
  MR_Word Box_6 = ((((MR_Unsigned) ((MR_hl_field(0, Pref_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Colour_7 = ((MR_Unsigned) ((MR_hl_field(0, Pref_3, 1))) & (MR_Integer) 1);
  MR_Word MaybeAncestorLimit_8 = ((MR_Word) ((MR_hl_field(0, Pref_3, 2))));
  MR_Integer ProcStaticsPerRecTypeLimit_9 = ((MR_Integer) ((MR_hl_field(0, Pref_3, 3))));
  MR_Word SummarizeHoCallSites_10 = ((MR_Unsigned) ((MR_hl_field(0, Pref_3, 4))) & (MR_Integer) 1);
  MR_Word Order_11 = ((MR_Word) ((MR_hl_field(0, Pref_3, 5))));
  MR_Word Contour_12 = ((((MR_Unsigned) ((MR_hl_field(0, Pref_3, 6))) >> 4)) & (MR_Integer) 1);
  MR_Word Time_13 = ((((MR_Unsigned) ((MR_hl_field(0, Pref_3, 6))) >> 2)) & (MR_Integer) 3);
  MR_Word ModuleQual_14 = ((MR_Unsigned) ((MR_hl_field(0, Pref_3, 6))) & (MR_Integer) 3);
  MR_Word InactiveItems_15 = ((MR_Word) ((MR_hl_field(0, Pref_3, 7))));
  MR_Word DeveloperMode_16 = ((MR_Unsigned) ((MR_hl_field(0, Pref_3, 8))) & (MR_Integer) 1);
  MR_String MaybeAncestorLimitStr_18;
  MR_String Var_26;
  MR_Char Var_29;
  MR_String Var_32;
  MR_Char Var_35;
  MR_String Var_38;
  MR_Char Var_41;
  MR_Char Var_46;
  MR_Char Var_51;
  MR_String Var_54;
  MR_Char Var_57;
  MR_String Var_60;
  MR_Char Var_63;
  MR_String Var_66;
  MR_Char Var_69;
  MR_String Var_72;
  MR_Char Var_75;
  MR_String Var_78;
  MR_Char Var_81;
  MR_String Var_84;
  MR_Char Var_87;
  MR_String Var_90;
  MR_String Var_98;
  MR_String Var_105;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_114;
  MR_String Var_115;
  MR_String Var_116;
  MR_String Var_123;
  MR_String Var_124;
  MR_String Var_125;
  MR_String Var_132;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_141;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_150;
  MR_String Var_151;
  MR_String Var_152;
  MR_String Var_159;
  MR_String Var_160;
  MR_String Var_167;
  MR_String Var_168;
  MR_String Var_175;
  MR_String Var_176;
  MR_String Var_177;
  MR_String Var_184;
  MR_String Var_185;
  MR_String Var_186;
  MR_String Var_193;
  MR_String Var_194;
  MR_String Var_195;
  MR_String Var_202;

  if ((MaybeAncestorLimit_8 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeAncestorLimitStr_18 = (MR_String) "no";
  else
  {
    MR_Integer AncestorLimit_17 = ((MR_Integer) ((MR_hl_field(1, MaybeAncestorLimit_8, 0))));

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), AncestorLimit_17, &MaybeAncestorLimitStr_18);
  }
  Var_26 = query__fields_to_string_1_f_0(Fields_5);
  Var_29 = query__pref_separator_char_0_f_0();
  Var_32 = query__box_to_string_1_f_0(Box_6);
  Var_35 = query__pref_separator_char_0_f_0();
  Var_38 = query__colour_scheme_to_string_1_f_0(Colour_7);
  Var_41 = query__pref_separator_char_0_f_0();
  Var_46 = query__pref_separator_char_0_f_0();
  Var_51 = query__pref_separator_char_0_f_0();
  Var_54 = query__summarize_to_string_1_f_0(SummarizeHoCallSites_10);
  Var_57 = query__pref_separator_char_0_f_0();
  Var_60 = query__order_criteria_to_string_1_f_0(Order_11);
  Var_63 = query__pref_separator_char_0_f_0();
  Var_66 = query__contour_exclusion_to_string_1_f_0(Contour_12);
  Var_69 = query__pref_separator_char_0_f_0();
  Var_72 = query__time_format_to_string_1_f_0(Time_13);
  Var_75 = query__pref_separator_char_0_f_0();
  Var_78 = query__module_qual_to_string_1_f_0(ModuleQual_14);
  Var_81 = query__pref_separator_char_0_f_0();
  Var_84 = query__inactive_items_to_string_1_f_0(InactiveItems_15);
  Var_87 = query__pref_separator_char_0_f_0();
  Var_90 = query__developer_mode_to_string_1_f_0(DeveloperMode_16);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_87, &Var_98);
  Var_105 = mercury__string__f_43_43_2_f_0(Var_98, Var_90);
  Var_106 = mercury__string__f_43_43_2_f_0(Var_84, Var_105);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_81, &Var_107);
  Var_114 = mercury__string__f_43_43_2_f_0(Var_107, Var_106);
  Var_115 = mercury__string__f_43_43_2_f_0(Var_78, Var_114);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_75, &Var_116);
  Var_123 = mercury__string__f_43_43_2_f_0(Var_116, Var_115);
  Var_124 = mercury__string__f_43_43_2_f_0(Var_72, Var_123);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_69, &Var_125);
  Var_132 = mercury__string__f_43_43_2_f_0(Var_125, Var_124);
  Var_133 = mercury__string__f_43_43_2_f_0(Var_66, Var_132);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_63, &Var_134);
  Var_141 = mercury__string__f_43_43_2_f_0(Var_134, Var_133);
  Var_142 = mercury__string__f_43_43_2_f_0(Var_60, Var_141);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_57, &Var_143);
  Var_150 = mercury__string__f_43_43_2_f_0(Var_143, Var_142);
  Var_151 = mercury__string__f_43_43_2_f_0(Var_54, Var_150);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_51, &Var_152);
  Var_159 = mercury__string__f_43_43_2_f_0(Var_152, Var_151);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), ProcStaticsPerRecTypeLimit_9, &Var_160);
  Var_167 = mercury__string__f_43_43_2_f_0(Var_160, Var_159);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_46, &Var_168);
  Var_175 = mercury__string__f_43_43_2_f_0(Var_168, Var_167);
  Var_176 = mercury__string__f_43_43_2_f_0(MaybeAncestorLimitStr_18, Var_175);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_41, &Var_177);
  Var_184 = mercury__string__f_43_43_2_f_0(Var_177, Var_176);
  Var_185 = mercury__string__f_43_43_2_f_0(Var_38, Var_184);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_35, &Var_186);
  Var_193 = mercury__string__f_43_43_2_f_0(Var_186, Var_185);
  Var_194 = mercury__string__f_43_43_2_f_0(Var_32, Var_193);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_29, &Var_195);
  Var_202 = mercury__string__f_43_43_2_f_0(Var_195, Var_194);
  PrefStr_4 = mercury__string__f_43_43_2_f_0(Var_26, Var_202);
  return PrefStr_4;
}

static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void)
{
  return (MR_Char) 47;
}

static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
  MR_Word DevMode_3)
{
  MR_String String_4;

  switch (DevMode_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      String_4 = (MR_String) "nodev";
      break;
    case (MR_Integer) 0:
      String_4 = (MR_String) "dev";
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
  MR_Word Items_3)
{
  MR_String String_4;
  MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(0, Items_3, 0))) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Items_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Items_3, 0))) >> 2)) & (MR_Integer) 1);

  switch (Var_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Var_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (Var_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              String_4 = (MR_String) "hhh";
              break;
            case (MR_Integer) 1:
              String_4 = (MR_String) "shh";
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (Var_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              String_4 = (MR_String) "hsh";
              break;
            case (MR_Integer) 1:
              String_4 = (MR_String) "ssh";
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Var_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (Var_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              String_4 = (MR_String) "hhs";
              break;
            case (MR_Integer) 1:
              String_4 = (MR_String) "shs";
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (Var_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              String_4 = (MR_String) "hss";
              break;
            case (MR_Integer) 1:
              String_4 = (MR_String) "sss";
              break;
          }
          break;
      }
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "mqa";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "mqn";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "mqwd";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "no";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "mi";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "th";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "context";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "name";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CostKind_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 7);
        MR_Word InclDesc_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Scope_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
        MR_String Var_7;
        MR_String Var_8;
        MR_String Var_10;
        MR_String Var_11;
        MR_String Var_12;
        MR_String Var_13;
        MR_String Var_15;
        MR_String Var_16;
        MR_String Var_17;
        MR_String Var_18;
        MR_String Var_20;

        Var_8 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
        Var_11 = ((&query_vector_common_3[16 + CostKind_3]))->query__vector_common_type_3_0__vct_3_f_0;
        Var_13 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
        switch (InclDesc_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_16 = (MR_String) "self";
            break;
          case (MR_Integer) 1:
            Var_16 = (MR_String) "both";
            break;
        }
        Var_18 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
        switch (Scope_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_20 = (MR_String) "oa";
            break;
          case (MR_Integer) 0:
            Var_20 = (MR_String) "pc";
            break;
        }
        Var_17 = mercury__string__f_43_43_2_f_0(Var_18, Var_20);
        Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
        Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_15);
        Var_10 = mercury__string__f_43_43_2_f_0(Var_11, Var_12);
        Var_7 = mercury__string__f_43_43_2_f_0(Var_8, Var_10);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cost", Var_7);
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "nosum";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "sum";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
  MR_Word Scheme_3)
{
  MR_String String_4;

  switch (Scheme_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_4 = (MR_String) "cols";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "none";
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__box_to_string_1_f_0(
  MR_Word Box_3)
{
  MR_String String_4;

  switch (Box_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_4 = (MR_String) "box";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "nobox";
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__fields_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word Port_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Time_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 7);
  MR_Word CallSeqs_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 3);
  MR_Word Allocs_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
  MR_Word Memory_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_10;
  MR_String Var_12;
  MR_String Var_13;
  MR_String Var_14;
  MR_String Var_15;
  MR_String Var_17;
  MR_String Var_18;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_22;
  MR_String Var_23;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_27;

  switch (Port_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_8 = (MR_String) "_";
      break;
    case (MR_Integer) 1:
      Var_8 = (MR_String) "p";
      break;
  }
  Var_10 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
  Var_13 = ((&query_vector_common_3[10 + Time_4]))->query__vector_common_type_3_0__vct_3_f_0;
  Var_15 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
  switch (CallSeqs_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_18 = (MR_String) "s";
      break;
    case (MR_Integer) 2:
      Var_18 = (MR_String) "S";
      break;
    case (MR_Integer) 0:
      Var_18 = (MR_String) "_";
      break;
  }
  Var_20 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
  switch (Allocs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_23 = (MR_String) "a";
      break;
    case (MR_Integer) 2:
      Var_23 = (MR_String) "A";
      break;
    case (MR_Integer) 0:
      Var_23 = (MR_String) "_";
      break;
  }
  Var_25 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
  switch (MR_tag((MR_Word) Memory_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_27 = (MR_String) "_";
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(1, Memory_7, 0))) & (MR_Integer) 1);

        switch (Var_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_27 = (MR_String) "b";
            break;
          case (MR_Integer) 0:
            Var_27 = (MR_String) "w";
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(2, Memory_7, 0))) & (MR_Integer) 1);

        switch (Var_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_27 = (MR_String) "B";
            break;
          case (MR_Integer) 0:
            Var_27 = (MR_String) "W";
            break;
        }
      }
      break;
  }
  Var_24 = mercury__string__f_43_43_2_f_0(Var_25, Var_27);
  Var_22 = mercury__string__f_43_43_2_f_0(Var_23, Var_24);
  Var_19 = mercury__string__f_43_43_2_f_0(Var_20, Var_22);
  Var_17 = mercury__string__f_43_43_2_f_0(Var_18, Var_19);
  Var_14 = mercury__string__f_43_43_2_f_0(Var_15, Var_17);
  Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
  Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_12);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
  MR_Word Cmd_3)
{
  MR_String CmdStr_4;

  switch (MR_tag((MR_Word) Cmd_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Cmd_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CmdStr_4 = query__cmd_str_quit_0_f_0();
          break;
        case (MR_Integer) 1:
          CmdStr_4 = query__cmd_str_restart_0_f_0();
          break;
        case (MR_Integer) 2:
          CmdStr_4 = query__cmd_str_menu_0_f_0();
          break;
        case (MR_Integer) 3:
          CmdStr_4 = query__cmd_str_recursion_types_frequency_0_f_0();
          break;
        case (MR_Integer) 4:
          CmdStr_4 = query__cmd_str_program_modules_0_f_0();
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Minutes_5 = ((MR_Integer) ((MR_hl_field(1, Cmd_3, 0))));
        MR_String Var_37;
        MR_Char Var_40;
        MR_String Var_310;
        MR_String Var_317;
        MR_String Var_324;

        Var_37 = query__cmd_str_timeout_0_f_0();
        Var_40 = query__cmd_separator_char_0_f_0();
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), Minutes_5, &Var_310);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_40, &Var_317);
        Var_324 = mercury__string__f_43_43_2_f_0(Var_317, Var_310);
        CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_37, Var_324);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybePercent_6 = ((MR_Word) ((MR_hl_field(2, Cmd_3, 0))));

        if ((MaybePercent_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_57;
          MR_Char Var_60;
          MR_String Var_355;
          MR_String Var_362;

          Var_57 = query__cmd_str_root_0_f_0();
          Var_60 = query__cmd_separator_char_0_f_0();
          mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_60, &Var_355);
          Var_362 = mercury__string__f_43_43_2_f_0(Var_355, (MR_String) "no");
          CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_57, Var_362);
        }
        else
        {
          MR_Integer Percent_7 = ((MR_Integer) ((MR_hl_field(1, MaybePercent_6, 0))));
          MR_String Var_47;
          MR_Char Var_50;
          MR_String Var_340;
          MR_String Var_347;
          MR_String Var_354;

          Var_47 = query__cmd_str_root_0_f_0();
          Var_50 = query__cmd_separator_char_0_f_0();
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), Percent_7, &Var_340);
          mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_50, &Var_347);
          Var_354 = mercury__string__f_43_43_2_f_0(Var_347, Var_340);
          CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_47, Var_354);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Cmd_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CliquePtr_8 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_String Name_9;
            MR_Integer CliqueNum_10;
            MR_Char Var_70;
            MR_String Var_572;
            MR_String Var_579;
            MR_String Var_586;

            Name_9 = query__cmd_str_clique_0_f_0();
            CliqueNum_10 = (MR_Integer) (CliquePtr_8);
            Var_70 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CliqueNum_10, &Var_572);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_70, &Var_579);
            Var_586 = mercury__string__f_43_43_2_f_0(Var_579, Var_572);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Name_9, Var_586);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CliquePtr_263 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_String Name_264;
            MR_Integer CliqueNum_265;
            MR_Char Var_271;
            MR_String Var_557;
            MR_String Var_564;
            MR_String Var_571;

            Name_264 = query__cmd_str_clique_recursive_costs_0_f_0();
            CliqueNum_265 = (MR_Integer) (CliquePtr_263);
            Var_271 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CliqueNum_265, &Var_557);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_271, &Var_564);
            Var_571 = mercury__string__f_43_43_2_f_0(Var_564, Var_557);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Name_264, Var_571);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PSPtr_11 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer PSI_12 = (MR_Integer) (PSPtr_11);
            MR_String Var_77;
            MR_Char Var_80;
            MR_String Var_428;
            MR_String Var_435;
            MR_String Var_442;

            Var_77 = query__cmd_str_proc_0_f_0();
            Var_80 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), PSI_12, &Var_428);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_80, &Var_435);
            Var_442 = mercury__string__f_43_43_2_f_0(Var_435, Var_428);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_77, Var_442);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GroupCallers_13 = ((MR_Unsigned) ((MR_hl_field(3, Cmd_3, 2))) & (MR_Integer) 3);
            MR_Integer BunchNum_14 = ((MR_Integer) ((MR_hl_field(3, Cmd_3, 3))));
            MR_Integer CallersPerBunch_15 = ((MR_Integer) ((MR_hl_field(3, Cmd_3, 4))));
            MR_Word Contour_16 = ((MR_Unsigned) ((MR_hl_field(3, Cmd_3, 5))) & (MR_Integer) 1);
            MR_String GroupCallersStr_17;
            MR_String ContourStr_18;
            MR_String Var_87;
            MR_Char Var_90;
            MR_Char Var_95;
            MR_Char Var_100;
            MR_Char Var_105;
            MR_Char Var_110;
            MR_Word PSPtr_249 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer PSI_250 = (MR_Integer) (PSPtr_249);
            MR_String Var_363;
            MR_String Var_370;
            MR_String Var_371;
            MR_String Var_378;
            MR_String Var_379;
            MR_String Var_386;
            MR_String Var_387;
            MR_String Var_394;
            MR_String Var_395;
            MR_String Var_402;
            MR_String Var_403;
            MR_String Var_404;
            MR_String Var_411;
            MR_String Var_412;
            MR_String Var_419;
            MR_String Var_420;
            MR_String Var_427;

            GroupCallersStr_17 = query__caller_groups_to_string_1_f_0(GroupCallers_13);
            ContourStr_18 = query__contour_exclusion_to_string_1_f_0(Contour_16);
            Var_87 = query__cmd_str_proc_callers_0_f_0();
            Var_90 = query__cmd_separator_char_0_f_0();
            Var_95 = query__cmd_separator_char_0_f_0();
            Var_100 = query__cmd_separator_char_0_f_0();
            Var_105 = query__cmd_separator_char_0_f_0();
            Var_110 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_110, &Var_363);
            Var_370 = mercury__string__f_43_43_2_f_0(Var_363, ContourStr_18);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CallersPerBunch_15, &Var_371);
            Var_378 = mercury__string__f_43_43_2_f_0(Var_371, Var_370);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_105, &Var_379);
            Var_386 = mercury__string__f_43_43_2_f_0(Var_379, Var_378);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), BunchNum_14, &Var_387);
            Var_394 = mercury__string__f_43_43_2_f_0(Var_387, Var_386);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_100, &Var_395);
            Var_402 = mercury__string__f_43_43_2_f_0(Var_395, Var_394);
            Var_403 = mercury__string__f_43_43_2_f_0(GroupCallersStr_17, Var_402);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_95, &Var_404);
            Var_411 = mercury__string__f_43_43_2_f_0(Var_404, Var_403);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), PSI_250, &Var_412);
            Var_419 = mercury__string__f_43_43_2_f_0(Var_412, Var_411);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_90, &Var_420);
            Var_427 = mercury__string__f_43_43_2_f_0(Var_420, Var_419);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_87, Var_427);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_172;
            MR_Char Var_175;
            MR_Word PSPtr_253 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer PSI_254 = (MR_Integer) (PSPtr_253);
            MR_String Var_325;
            MR_String Var_332;
            MR_String Var_339;

            Var_172 = query__cmd_str_static_coverage_0_f_0();
            Var_175 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), PSI_254, &Var_325);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_175, &Var_332);
            Var_339 = mercury__string__f_43_43_2_f_0(Var_332, Var_325);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_172, Var_339);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word PDPtr_28 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer PDI_29 = (MR_Integer) (PDPtr_28);
            MR_String Var_182;
            MR_Char Var_185;
            MR_String Var_467;
            MR_String Var_474;
            MR_String Var_481;

            Var_182 = query__cmd_str_dynamic_coverage_0_f_0();
            Var_185 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), PDI_29, &Var_467);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_185, &Var_474);
            Var_481 = mercury__string__f_43_43_2_f_0(Var_474, Var_467);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_182, Var_481);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_242;
            MR_Char Var_245;
            MR_Word CSDPtr_261 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer CSDI_262 = (MR_Integer) (CSDPtr_261);
            MR_String Var_587;
            MR_String Var_594;
            MR_String Var_601;

            Var_242 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
            Var_245 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CSDI_262, &Var_587);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_245, &Var_594);
            Var_601 = mercury__string__f_43_43_2_f_0(Var_594, Var_587);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_242, Var_601);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String ModuleName_19 = ((MR_String) ((MR_hl_field(3, Cmd_3, 1))));
            MR_String Var_117;
            MR_Char Var_120;
            MR_String Var_459;
            MR_String Var_466;

            Var_117 = query__cmd_str_module_0_f_0();
            Var_120 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_120, &Var_459);
            Var_466 = mercury__string__f_43_43_2_f_0(Var_459, ModuleName_19);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_117, Var_466);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Var_127;
            MR_Char Var_130;
            MR_String ModuleName_251 = ((MR_String) ((MR_hl_field(3, Cmd_3, 1))));
            MR_String Var_451;
            MR_String Var_458;

            Var_127 = query__cmd_str_module_getter_setters_0_f_0();
            Var_130 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_130, &Var_451);
            Var_458 = mercury__string__f_43_43_2_f_0(Var_451, ModuleName_251);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_127, Var_458);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String Var_137;
            MR_Char Var_140;
            MR_String ModuleName_252 = ((MR_String) ((MR_hl_field(3, Cmd_3, 1))));
            MR_String Var_443;
            MR_String Var_450;

            Var_137 = query__cmd_str_module_rep_0_f_0();
            Var_140 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_140, &Var_443);
            Var_450 = mercury__string__f_43_43_2_f_0(Var_443, ModuleName_252);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_137, Var_450);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Limit_20 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Word CostKind_21 = ((((MR_Unsigned) ((MR_hl_field(3, Cmd_3, 2))) >> 2)) & (MR_Integer) 7);
            MR_Word InclDesc_22 = ((((MR_Unsigned) ((MR_hl_field(3, Cmd_3, 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Scope_23 = ((MR_Unsigned) ((MR_hl_field(3, Cmd_3, 2))) & (MR_Integer) 1);
            MR_String LimitStr_24;
            MR_String CostKindStr_25;
            MR_String InclDescStr_26;
            MR_String ScopeStr_27;
            MR_String Var_147;
            MR_Char Var_150;
            MR_Char Var_155;
            MR_Char Var_160;
            MR_Char Var_165;
            MR_String Var_275;
            MR_String Var_282;
            MR_String Var_283;
            MR_String Var_284;
            MR_String Var_291;
            MR_String Var_292;
            MR_String Var_293;
            MR_String Var_300;
            MR_String Var_301;
            MR_String Var_302;
            MR_String Var_309;

            LimitStr_24 = query__limit_to_string_1_f_0(Limit_20);
            CostKindStr_25 = query__cost_kind_to_string_1_f_0(CostKind_21);
            InclDescStr_26 = query__incl_desc_to_string_1_f_0(InclDesc_22);
            ScopeStr_27 = query__scope_to_string_1_f_0(Scope_23);
            Var_147 = query__cmd_str_top_procs_0_f_0();
            Var_150 = query__cmd_separator_char_0_f_0();
            Var_155 = query__cmd_separator_char_0_f_0();
            Var_160 = query__cmd_separator_char_0_f_0();
            Var_165 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_165, &Var_275);
            Var_282 = mercury__string__f_43_43_2_f_0(Var_275, ScopeStr_27);
            Var_283 = mercury__string__f_43_43_2_f_0(InclDescStr_26, Var_282);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_160, &Var_284);
            Var_291 = mercury__string__f_43_43_2_f_0(Var_284, Var_283);
            Var_292 = mercury__string__f_43_43_2_f_0(CostKindStr_25, Var_291);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_155, &Var_293);
            Var_300 = mercury__string__f_43_43_2_f_0(Var_293, Var_292);
            Var_301 = mercury__string__f_43_43_2_f_0(LimitStr_24, Var_300);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_150, &Var_302);
            Var_309 = mercury__string__f_43_43_2_f_0(Var_302, Var_301);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_147, Var_309);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Var_232;
            MR_Char Var_235;
            MR_Word CliquePtr_259 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer CliqueNum_260 = (MR_Integer) (CliquePtr_259);
            MR_String Var_512;
            MR_String Var_519;
            MR_String Var_526;

            Var_232 = query__cmd_str_dump_raw_clique_0_f_0();
            Var_235 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CliqueNum_260, &Var_512);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_235, &Var_519);
            Var_526 = mercury__string__f_43_43_2_f_0(Var_519, Var_512);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_232, Var_526);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String Var_192;
            MR_Char Var_195;
            MR_Word PSPtr_255 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer PSI_256 = (MR_Integer) (PSPtr_255);
            MR_String Var_482;
            MR_String Var_489;
            MR_String Var_496;

            Var_192 = query__cmd_str_dump_proc_static_0_f_0();
            Var_195 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), PSI_256, &Var_482);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_195, &Var_489);
            Var_496 = mercury__string__f_43_43_2_f_0(Var_489, Var_482);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_192, Var_496);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String Var_202;
            MR_Char Var_205;
            MR_Word PDPtr_257 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer PDI_258 = (MR_Integer) (PDPtr_257);
            MR_String Var_497;
            MR_String Var_504;
            MR_String Var_511;

            Var_202 = query__cmd_str_dump_proc_dynamic_0_f_0();
            Var_205 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), PDI_258, &Var_497);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_205, &Var_504);
            Var_511 = mercury__string__f_43_43_2_f_0(Var_504, Var_497);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_202, Var_511);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word CSSPtr_30 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer CSSI_31 = (MR_Integer) (CSSPtr_30);
            MR_String Var_212;
            MR_Char Var_215;
            MR_String Var_527;
            MR_String Var_534;
            MR_String Var_541;

            Var_212 = query__cmd_str_dump_call_site_static_0_f_0();
            Var_215 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CSSI_31, &Var_527);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_215, &Var_534);
            Var_541 = mercury__string__f_43_43_2_f_0(Var_534, Var_527);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_212, Var_541);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CSDPtr_32 = ((MR_Word) ((MR_hl_field(3, Cmd_3, 1))));
            MR_Integer CSDI_33 = (MR_Integer) (CSDPtr_32);
            MR_String Var_222;
            MR_Char Var_225;
            MR_String Var_542;
            MR_String Var_549;
            MR_String Var_556;

            Var_222 = query__cmd_str_dump_call_site_dynamic_0_f_0();
            Var_225 = query__cmd_separator_char_0_f_0();
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), CSDI_33, &Var_542);
            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), Var_225, &Var_549);
            Var_556 = mercury__string__f_43_43_2_f_0(Var_549, Var_542);
            CmdStr_4 = mercury__string__f_43_43_2_f_0(Var_222, Var_556);
          }
          break;
      }
      break;
  }
  return CmdStr_4;
}

static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void)
{
  return (MR_Char) 47;
}

static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
  MR_Word Contour_3)
{
  MR_String String_4;

  switch (Contour_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_4 = (MR_String) "ac";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "nc";
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__scope_to_string_1_f_0(
  MR_Word Scope_3)
{
  MR_String String_4;

  switch (Scope_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      String_4 = (MR_String) "oa";
      break;
    case (MR_Integer) 0:
      String_4 = (MR_String) "pc";
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
  MR_Word InclDesc_3)
{
  MR_String String_4;

  switch (InclDesc_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_4 = (MR_String) "self";
      break;
    case (MR_Integer) 1:
      String_4 = (MR_String) "both";
      break;
  }
  return String_4;
}

static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
  MR_Word CostKind_3)
{
  MR_String String_4 = ((&query_vector_common_3[4 + CostKind_3]))->query__vector_common_type_3_0__vct_3_f_0;

  return String_4;
}

static MR_String MR_CALL 
query__limit_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Lo_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
        MR_Integer Hi_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
        MR_String Var_42;
        MR_String Var_49;
        MR_String Var_56;
        MR_String Var_57;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), Hi_4, &Var_42);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&query_scalar_common_2[8]), (MR_Char) 45, &Var_49);
        Var_56 = mercury__string__f_43_43_2_f_0(Var_49, Var_42);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&query_scalar_common_2[8]), Lo_3, &Var_57);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_57, Var_56);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Float Threshold_14 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 0)));
        MR_String Var_33;

        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&query_scalar_common_2[8]), (MR_Integer) 4, Threshold_14, &Var_33);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "p", Var_33);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Value_19 = MR_unbox_float((MR_hl_field(2, HeadVar__1_1, 0)));
        MR_String Var_24;

        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&query_scalar_common_2[8]), (MR_Integer) 4, Value_19, &Var_24);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "v", Var_24);
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
  MR_Word CallerGroups_3)
{
  MR_String String_4 = ((&query_vector_common_3[0 + CallerGroups_3]))->query__vector_common_type_3_0__vct_3_f_0;

  return String_4;
}

static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void)
{
  return (MR_String) "call_site_dynamic_var_use";
}

static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void)
{
  return (MR_String) "dump_raw_clique";
}

static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void)
{
  return (MR_String) "dump_call_site_dynamic";
}

static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void)
{
  return (MR_String) "dump_call_site_static";
}

static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void)
{
  return (MR_String) "dump_proc_dynamic";
}

static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void)
{
  return (MR_String) "dump_proc_static";
}

static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void)
{
  return (MR_String) "proc_dynamic_coverage";
}

static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void)
{
  return (MR_String) "proc_static_coverage";
}

static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void)
{
  return (MR_String) "top_procs";
}

static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void)
{
  return (MR_String) "module_rep";
}

static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void)
{
  return (MR_String) "module_getter_setters";
}

static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void)
{
  return (MR_String) "module";
}

static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void)
{
  return (MR_String) "program_modules";
}

static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void)
{
  return (MR_String) "proc_callers";
}

static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void)
{
  return (MR_String) "proc";
}

static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void)
{
  return (MR_String) "recursion_type_freq";
}

static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void)
{
  return (MR_String) "clique_rc";
}

static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void)
{
  return (MR_String) "clique";
}

static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void)
{
  return (MR_String) "root";
}

static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void)
{
  return (MR_String) "menu";
}

static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void)
{
  return (MR_String) "timeout";
}

static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void)
{
  return (MR_String) "restart";
}

static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void)
{
  return (MR_String) "quit";
}

static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____alloc_fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____alloc_fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____box_tables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____box_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____box_tables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____caller_groups_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____caller_groups_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____callseqs_fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____cmd_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____cmd_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____colour_column_groups_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____contour_exclusion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____cost_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____cost_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____deep_query_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____deep_query_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____deep_query_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____descendants_meaningful_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____developer_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____developer_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____display_limit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____display_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____display_limit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____inactive_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____inactive_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____inactive_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____inactive_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____include_descendants_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____include_descendants_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____measurement_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____measurement_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____memory_fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____memory_fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____module_qual_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____module_qual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____module_qual_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____order_criteria_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____order_criteria_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____port_fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____port_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____port_fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____preferences_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____preferences_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____preferences_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____preferences_indication_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____preferences_indication_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____summarize_ho_call_sites_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____time_fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____time_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____time_fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = query____Unify____time_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
query____Compare____time_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  query____Compare____time_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__query__init(void)
{
}

void mercury__query__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&query__query__type_ctor_info_alloc_fields_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_box_tables_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_caller_groups_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_callseqs_fields_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_cmd_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_colour_column_groups_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_contour_exclusion_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_cost_kind_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_deep_query_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_descendants_meaningful_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_developer_mode_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_display_limit_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_fields_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_inactive_items_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_inactive_status_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_include_descendants_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_measurement_scope_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_memory_fields_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_module_qual_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_order_criteria_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_port_fields_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_preferences_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_preferences_indication_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_summarize_ho_call_sites_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_time_fields_0);
  MR_register_type_ctor_info(&query__query__type_ctor_info_time_format_0);
}

void mercury__query__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__query__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module query.
