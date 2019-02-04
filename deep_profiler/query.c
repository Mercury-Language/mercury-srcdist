/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module query. */
/* :- implementation. */

/*
INIT mercury__query__init
ENDINIT
*/

#include "query.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "create_report.mih"
#include "display.mih"
#include "display_report.mih"
#include "exclude.mih"
#include "html_format.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "report.mih"
#include "util.mih"
#include "var_use_analysis.mih"
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
#include "exception.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3];

static const MR_Integer query__query__functor_number_map_alloc_fields_0[3];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2];

static const MR_Integer query__query__functor_number_map_box_tables_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4];

static const MR_Integer query__query__functor_number_map_caller_groups_0[4];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3];

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

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1];

static const MR_ConstString query__query__field_names_cmd_0_8[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5];

static const MR_ConstString query__query__field_names_cmd_0_9[5];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9;

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1];

static const MR_ConstString query__query__field_names_cmd_0_11[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1];

static const MR_ConstString query__query__field_names_cmd_0_12[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1];

static const MR_ConstString query__query__field_names_cmd_0_13[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4];

static const MR_ConstString query__query__field_names_cmd_0_14[4];

static const MR_DuArgLocn query__query__field_locns_cmd_0_14[4];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1];

static const MR_ConstString query__query__field_names_cmd_0_15[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1];

static const MR_ConstString query__query__field_names_cmd_0_16[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16;

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1];

static const MR_ConstString query__query__field_names_cmd_0_17[1];

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

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2];

static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2];

static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6];

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

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2];

static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2];

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

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2];

static const MR_Integer query__query__functor_number_map_inactive_status_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2];

static const MR_Integer query__query__functor_number_map_include_descendants_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2];

static const MR_Integer query__query__functor_number_map_measurement_scope_0[2];

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0;

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1];

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1;

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1];

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

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3];

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

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2];

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

static const MR_Integer query__query__functor_number_map_resp_0[1];

static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2];

static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6];

static const MR_Integer query__query__functor_number_map_time_fields_0[6];

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1;

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2;

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3];

static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3];

static const MR_Integer query__query__functor_number_map_time_format_0[3];

static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____box_tables_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____cmd_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____deep_query_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____display_limit_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____module_qual_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____port_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____preferences_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____resp_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____time_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2);

static void MR_CALL 
query____Compare____time_format_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3);

static /* sealed */ const MR_TableStepDesc query__table_input_steps_for_create_and_memoize_report_3_p_0[2];

static /* sealed */ MR_TableStepStats query__table_call_step_stats_for_create_and_memoize_report_3_p_0[2];

static /* sealed */ MR_TableStepStats query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2];

static /* sealed */ MR_TableStepStats query__table_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

static /* sealed */ MR_TableStepStats query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

static /* sealed */ MR_ProcTableInfo query__table_info_for_create_and_memoize_report_3_p_0;

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

static MR_String MR_CALL 
query__box_to_string_1_f_0(
  MR_Word query__Box_3);

static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
  MR_Word query__Scheme_3);

static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
  MR_Word query__DevMode_3);

static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2);

static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
  MR_Word query__Items_3);

static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
  MR_Word query__HeadVar__1_1);

static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2);

static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
  MR_Word query__Contour_3);

static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2);

static MR_String MR_CALL 
query__scope_to_string_1_f_0(
  MR_Word query__Scope_3);

static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
  MR_Word query__HeadVar__1_1);

static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
  MR_Word query__HeadVar__1_1);

static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
  MR_Word query__HeadVar__1_1);

static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
  MR_String query__LimitStr_3,
  MR_Word * query__Limit_4);

static MR_String MR_CALL 
query__limit_to_string_1_f_0(
  MR_Word query__HeadVar__1_1);

static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2);

static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
  MR_Word query__InclDesc_3);

static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2);

static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
  MR_Word query__CostKind_3);

static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2);

static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
  MR_Word query__CallerGroups_3);

static MR_String MR_CALL 
query__fields_to_string_1_f_0(
  MR_Word query__HeadVar__1_1);

static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
  MR_Word query__Pref_3);

static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
  MR_Word query__Cmd_3);

static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void);

static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void);

static void MR_CALL 
query__create_and_memoize_report_3_p_0(
  MR_Word query__Cmd_4,
  MR_Word query__Deep_5,
  MR_Word * query__Report_6);

static void MR_CALL 
query__exec_4_p_0(
  MR_Word query__Cmd_5,
  MR_Word query__Prefs_6,
  MR_Word query__Deep_7,
  MR_String * query__HTMLStr_8);

static void MR_CALL 
query__try_exec_4_p_0_1(
  MR_Box query__closure_arg,
  MR_Box * query__wrapper_arg_1);


static /* final */ const MR_Box query_scalar_common_1[4][2];

static /* final */ const MR_Box query_scalar_common_2[17][1];

static /* final */ const MR_Box query_scalar_common_3[1][7];


/* sealed */ struct query__vector_common_type_4_0_s {
  const MR_String query__vector_common_type_4_0__vct_4_f_0;
  const MR_Word query__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[6];

/* sealed */ struct query__vector_common_type_5_0_s {
  const MR_String query__vector_common_type_5_0__vct_5_f_0;
  const MR_Word query__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[5];

/* sealed */ struct query__vector_common_type_6_0_s {
  const MR_String query__vector_common_type_6_0__vct_6_f_0;
  const MR_Word query__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[12];

/* sealed */ struct query__vector_common_type_7_0_s {
  const MR_String query__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[22];

/* sealed */ struct query__vector_common_type_8_0_s {
  const MR_String query__vector_common_type_8_0__vct_8_f_0;
  const MR_Word query__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[4];

/* sealed */ struct query__vector_common_type_9_0_s {
  const MR_String query__vector_common_type_9_0__vct_9_f_0;
  const MR_Word query__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct query__vector_common_type_9_0_s query_vector_common_9[16];



static /* final */ const MR_Box query_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 5 << (MR_Integer) 1)) | (((((MR_Integer) 2 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 6))))))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box query_scalar_common_2[17][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 14 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 15 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 16 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
};

static /* final */ const MR_Box query_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[6] = {
  /* row 0 */
  {
    (MR_String) "_",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "q",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "qt",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "qtp",
    (MR_Integer) 5
  },
  /* row 4 */
  {
    (MR_String) "t",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "tp",
    (MR_Integer) 4
  },
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[5] = {
  /* row 0 */
  {
    (MR_String) "B",
    (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[6])
  },
  /* row 1 */
  {
    (MR_String) "W",
    (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[0])
  },
  /* row 2 */
  {
    (MR_String) "_",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 3 */
  {
    (MR_String) "b",
    (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[6])
  },
  /* row 4 */
  {
    (MR_String) "w",
    (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[0])
  },
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[12] = {
  /* row 0 */
  {
    (MR_String) "allocs",
    (MR_Integer) 4
  },
  /* row 1 */
  {
    (MR_String) "calls",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "callseqs",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "redos",
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "time",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "words",
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_String) "allocs",
    (MR_Integer) 4
  },
  /* row 7 */
  {
    (MR_String) "calls",
    (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "callseqs",
    (MR_Integer) 3
  },
  /* row 9 */
  {
    (MR_String) "redos",
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "time",
    (MR_Integer) 2
  },
  /* row 11 */
  {
    (MR_String) "words",
    (MR_Integer) 5
  },
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[22] = {
  /* row 0 */   {     (MR_String) "_" },
  /* row 1 */   {     (MR_String) "q" },
  /* row 2 */   {     (MR_String) "t" },
  /* row 3 */   {     (MR_String) "qt" },
  /* row 4 */   {     (MR_String) "tp" },
  /* row 5 */   {     (MR_String) "qtp" },
  /* row 6 */   {     (MR_String) "cs" },
  /* row 7 */   {     (MR_String) "pr" },
  /* row 8 */   {     (MR_String) "mo" },
  /* row 9 */   {     (MR_String) "cl" },
  /* row 10 */   {     (MR_String) "calls" },
  /* row 11 */   {     (MR_String) "redos" },
  /* row 12 */   {     (MR_String) "time" },
  /* row 13 */   {     (MR_String) "callseqs" },
  /* row 14 */   {     (MR_String) "allocs" },
  /* row 15 */   {     (MR_String) "words" },
  /* row 16 */   {     (MR_String) "calls" },
  /* row 17 */   {     (MR_String) "redos" },
  /* row 18 */   {     (MR_String) "time" },
  /* row 19 */   {     (MR_String) "callseqs" },
  /* row 20 */   {     (MR_String) "allocs" },
  /* row 21 */   {     (MR_String) "words" },
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[4] = {
  /* row 0 */
  {
    (MR_String) "cl",
    (MR_Integer) 3
  },
  /* row 1 */
  {
    (MR_String) "cs",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "mo",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "pr",
    (MR_Integer) 1
  },
};

static /* final */ const struct query__vector_common_type_9_0_s query_vector_common_9[16] = {
  /* row 0 */
  {
    (MR_String) "hhs",
    (MR_Word) &query_scalar_common_2[10]
  },
  /* row 1 */
  {
    (MR_String) "ssh",
    (MR_Word) &query_scalar_common_2[15]
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "shs",
    (MR_Word) &query_scalar_common_2[14]
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "shh",
    (MR_Word) &query_scalar_common_2[13]
  },
  /* row 9 */
  {
    (MR_String) "hss",
    (MR_Word) &query_scalar_common_2[12]
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    (MR_String) "hhh",
    (MR_Word) &query_scalar_common_2[8]
  },
  /* row 12 */
  {
    (MR_String) "hsh",
    (MR_Word) &query_scalar_common_2[11]
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    (MR_String) "sss",
    (MR_Word) &query_scalar_common_2[16]
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____alloc_fields_0_0_10001)),
  ((MR_Box) (query____Compare____alloc_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "alloc_fields",
  {     query__query__enum_name_ordered_alloc_fields_0 },
  {     query__query__enum_value_ordered_alloc_fields_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_alloc_fields_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____box_tables_0_0_10001)),
  ((MR_Box) (query____Compare____box_tables_0_0_10001)),
  (MR_String) "query",
  (MR_String) "box_tables",
  {     query__query__enum_name_ordered_box_tables_0 },
  {     query__query__enum_value_ordered_box_tables_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_box_tables_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____caller_groups_0_0_10001)),
  ((MR_Box) (query____Compare____caller_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "caller_groups",
  {     query__query__enum_name_ordered_caller_groups_0 },
  {     query__query__enum_value_ordered_caller_groups_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  query__query__functor_number_map_caller_groups_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____callseqs_fields_0_0_10001)),
  ((MR_Box) (query____Compare____callseqs_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "callseqs_fields",
  {     query__query__enum_name_ordered_callseqs_fields_0 },
  {     query__query__enum_value_ordered_callseqs_fields_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_callseqs_fields_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0 = {
  (MR_String) "deep_cmd_quit",
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

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1 = {
  (MR_String) "deep_cmd_restart",
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

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString query__query__field_names_cmd_0_2[1] = {
  (MR_String) "cmd_timeout_minutes"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2 = {
  (MR_String) "deep_cmd_timeout",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_cmd_0_2,
  query__query__field_names_cmd_0_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3 = {
  (MR_String) "deep_cmd_menu",
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

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_ConstString query__query__field_names_cmd_0_4[1] = {
  (MR_String) "cmd_root_maybe_action"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4 = {
  (MR_String) "deep_cmd_root",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  query__query__field_types_cmd_0_4,
  query__query__field_names_cmd_0_4,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_5[1] = {
  (MR_String) "cmd_clique_clique_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5 = {
  (MR_String) "deep_cmd_clique",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 5,
  query__query__field_types_cmd_0_5,
  query__query__field_names_cmd_0_5,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_6[1] = {
  (MR_String) "cmd_crc_clique_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6 = {
  (MR_String) "deep_cmd_clique_recursive_costs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 6,
  query__query__field_types_cmd_0_6,
  query__query__field_names_cmd_0_6,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7 = {
  (MR_String) "deep_cmd_recursion_types_frequency",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_8[1] = {
  (MR_String) "cmd_proc_proc_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8 = {
  (MR_String) "deep_cmd_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  query__query__field_types_cmd_0_8,
  query__query__field_names_cmd_0_8,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_caller_groups_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0
};

static const MR_ConstString query__query__field_names_cmd_0_9[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9 = {
  (MR_String) "deep_cmd_proc_callers",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 9,
  query__query__field_types_cmd_0_9,
  query__query__field_names_cmd_0_9,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10 = {
  (MR_String) "deep_cmd_program_modules",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString query__query__field_names_cmd_0_11[1] = {
  (MR_String) "cmd_module_module_name"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11 = {
  (MR_String) "deep_cmd_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 11,
  query__query__field_types_cmd_0_11,
  query__query__field_names_cmd_0_11,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString query__query__field_names_cmd_0_12[1] = {
  (MR_String) "cmd_mgs_module_name"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12 = {
  (MR_String) "deep_cmd_module_getter_setters",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 12,
  query__query__field_types_cmd_0_12,
  query__query__field_names_cmd_0_12,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString query__query__field_names_cmd_0_13[1] = {
  (MR_String) "cmd_mr_module_name"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13 = {
  (MR_String) "deep_cmd_module_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 13,
  query__query__field_types_cmd_0_13,
  query__query__field_names_cmd_0_13,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

static const MR_ConstString query__query__field_names_cmd_0_14[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

static const MR_DuArgLocn query__query__field_locns_cmd_0_14[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14 = {
  (MR_String) "deep_cmd_top_procs",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 14,
  query__query__field_types_cmd_0_14,
  query__query__field_names_cmd_0_14,
  query__query__field_locns_cmd_0_14,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_15[1] = {
  (MR_String) "cmd_static_coverage_ps"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15 = {
  (MR_String) "deep_cmd_static_procrep_coverage",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 15,
  query__query__field_types_cmd_0_15,
  query__query__field_names_cmd_0_15,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_16[1] = {
  (MR_String) "cmd_dynamic_coverage_pd"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16 = {
  (MR_String) "deep_cmd_dynamic_procrep_coverage",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 16,
  query__query__field_types_cmd_0_16,
  query__query__field_names_cmd_0_16,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_17[1] = {
  (MR_String) "cmd_dps_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17 = {
  (MR_String) "deep_cmd_dump_proc_static",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 17,
  query__query__field_types_cmd_0_17,
  query__query__field_names_cmd_0_17,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_18[1] = {
  (MR_String) "cmd_dpd_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18 = {
  (MR_String) "deep_cmd_dump_proc_dynamic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 18,
  query__query__field_types_cmd_0_18,
  query__query__field_names_cmd_0_18,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_19[1] = {
  (MR_String) "cmd_dcss_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19 = {
  (MR_String) "deep_cmd_dump_call_site_static",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 19,
  query__query__field_types_cmd_0_19,
  query__query__field_names_cmd_0_19,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_20[1] = {
  (MR_String) "cmd_dcsd_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20 = {
  (MR_String) "deep_cmd_dump_call_site_dynamic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 20,
  query__query__field_types_cmd_0_20,
  query__query__field_names_cmd_0_20,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_21[1] = {
  (MR_String) "cmd_dcl_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21 = {
  (MR_String) "deep_cmd_dump_clique",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 21,
  query__query__field_types_cmd_0_21,
  query__query__field_names_cmd_0_21,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

static const MR_ConstString query__query__field_names_cmd_0_22[1] = {
  (MR_String) "cmd_csdvu_id"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22 = {
  (MR_String) "deep_cmd_call_site_dynamic_var_use",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 22,
  query__query__field_types_cmd_0_22,
  query__query__field_names_cmd_0_22,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_10
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = {
  &query__query__du_functor_desc_cmd_0_2
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = {
  &query__query__du_functor_desc_cmd_0_4
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16] = {
  &query__query__du_functor_desc_cmd_0_5,
  &query__query__du_functor_desc_cmd_0_6,
  &query__query__du_functor_desc_cmd_0_8,
  &query__query__du_functor_desc_cmd_0_9,
  &query__query__du_functor_desc_cmd_0_11,
  &query__query__du_functor_desc_cmd_0_12,
  &query__query__du_functor_desc_cmd_0_13,
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
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_cmd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_cmd_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_cmd_0_2
  },
  {
    (MR_Integer) 16,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    query__query__du_stag_ordered_cmd_0_3
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23] = {
  &query__query__du_functor_desc_cmd_0_22,
  &query__query__du_functor_desc_cmd_0_5,
  &query__query__du_functor_desc_cmd_0_6,
  &query__query__du_functor_desc_cmd_0_20,
  &query__query__du_functor_desc_cmd_0_19,
  &query__query__du_functor_desc_cmd_0_21,
  &query__query__du_functor_desc_cmd_0_18,
  &query__query__du_functor_desc_cmd_0_17,
  &query__query__du_functor_desc_cmd_0_16,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_11,
  &query__query__du_functor_desc_cmd_0_12,
  &query__query__du_functor_desc_cmd_0_13,
  &query__query__du_functor_desc_cmd_0_8,
  &query__query__du_functor_desc_cmd_0_9,
  &query__query__du_functor_desc_cmd_0_10,
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_4,
  &query__query__du_functor_desc_cmd_0_15,
  &query__query__du_functor_desc_cmd_0_2,
  &query__query__du_functor_desc_cmd_0_14
};

static const MR_Integer query__query__functor_number_map_cmd_0[23] = {
  (MR_Integer) 16,
  (MR_Integer) 18,
  (MR_Integer) 21,
  (MR_Integer) 9,
  (MR_Integer) 19,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 22,
  (MR_Integer) 20,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____cmd_0_0_10001)),
  ((MR_Box) (query____Compare____cmd_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cmd",
  {     query__query__du_name_ordered_cmd_0 },
  {     query__query__du_ptag_ordered_cmd_0 },
  (MR_Integer) 23,
  (MR_Integer) 4,
  query__query__functor_number_map_cmd_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____colour_column_groups_0_0_10001)),
  ((MR_Box) (query____Compare____colour_column_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "colour_column_groups",
  {     query__query__enum_name_ordered_colour_column_groups_0 },
  {     query__query__enum_value_ordered_colour_column_groups_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_colour_column_groups_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____contour_exclusion_0_0_10001)),
  ((MR_Box) (query____Compare____contour_exclusion_0_0_10001)),
  (MR_String) "query",
  (MR_String) "contour_exclusion",
  {     query__query__enum_name_ordered_contour_exclusion_0 },
  {     query__query__enum_value_ordered_contour_exclusion_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_contour_exclusion_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____cost_kind_0_0_10001)),
  ((MR_Box) (query____Compare____cost_kind_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cost_kind",
  {     query__query__enum_name_ordered_cost_kind_0 },
  {     query__query__enum_value_ordered_cost_kind_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  query__query__functor_number_map_cost_kind_0
};

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_cmd_0
  }
};

static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0 = {
  (MR_String) "deep_query",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_deep_query_0_0,
  query__query__field_names_deep_query_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

static const MR_Integer query__query__functor_number_map_deep_query_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_deep_query_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____deep_query_0_0_10001)),
  ((MR_Box) (query____Compare____deep_query_0_0_10001)),
  (MR_String) "query",
  (MR_String) "deep_query",
  {     query__query__du_name_ordered_deep_query_0 },
  {     query__query__du_ptag_ordered_deep_query_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_deep_query_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____descendants_meaningful_0_0_10001)),
  ((MR_Box) (query____Compare____descendants_meaningful_0_0_10001)),
  (MR_String) "query",
  (MR_String) "descendants_meaningful",
  {     query__query__enum_name_ordered_descendants_meaningful_0 },
  {     query__query__enum_value_ordered_descendants_meaningful_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_descendants_meaningful_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____developer_mode_0_0_10001)),
  ((MR_Box) (query____Compare____developer_mode_0_0_10001)),
  (MR_String) "query",
  (MR_String) "developer_mode",
  {     query__query__enum_name_ordered_developer_mode_0 },
  {     query__query__enum_value_ordered_developer_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_developer_mode_0
};

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0 = {
  (MR_String) "rank_range",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_display_limit_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1 = {
  (MR_String) "threshold_percent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  query__query__field_types_display_limit_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2 = {
  (MR_String) "threshold_value",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_display_limit_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = {
  &query__query__du_functor_desc_display_limit_0_0
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = {
  &query__query__du_functor_desc_display_limit_0_1
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = {
  &query__query__du_functor_desc_display_limit_0_2
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____display_limit_0_0_10001)),
  ((MR_Box) (query____Compare____display_limit_0_0_10001)),
  (MR_String) "query",
  (MR_String) "display_limit",
  {     query__query__du_name_ordered_display_limit_0 },
  {     query__query__du_ptag_ordered_display_limit_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_display_limit_0
};

static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_port_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_callseqs_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_alloc_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_memory_fields_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_fields_0_0,
  query__query__field_names_fields_0_0,
  query__query__field_locns_fields_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

static const MR_Integer query__query__functor_number_map_fields_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____fields_0_0_10001)),
  ((MR_Box) (query____Compare____fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "fields",
  {     query__query__du_name_ordered_fields_0 },
  {     query__query__du_ptag_ordered_fields_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_fields_0
};

static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0
};

static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0 = {
  (MR_String) "inactive_items",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_inactive_items_0_0,
  query__query__field_names_inactive_items_0_0,
  query__query__field_locns_inactive_items_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____inactive_items_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_items_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_items",
  {     query__query__du_name_ordered_inactive_items_0 },
  {     query__query__du_ptag_ordered_inactive_items_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_inactive_items_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____inactive_status_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_status_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_status",
  {     query__query__enum_name_ordered_inactive_status_0 },
  {     query__query__enum_value_ordered_inactive_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_inactive_status_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____include_descendants_0_0_10001)),
  ((MR_Box) (query____Compare____include_descendants_0_0_10001)),
  (MR_String) "query",
  (MR_String) "include_descendants",
  {     query__query__enum_name_ordered_include_descendants_0 },
  {     query__query__enum_value_ordered_include_descendants_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_include_descendants_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____measurement_scope_0_0_10001)),
  ((MR_Box) (query____Compare____measurement_scope_0_0_10001)),
  (MR_String) "query",
  (MR_String) "measurement_scope",
  {     query__query__enum_name_ordered_measurement_scope_0 },
  {     query__query__enum_value_ordered_measurement_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_measurement_scope_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0 = {
  (MR_String) "no_memory",
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

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1 = {
  (MR_String) "memory",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  query__query__field_types_memory_fields_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2 = {
  (MR_String) "memory_and_percall",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_memory_fields_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = {
  &query__query__du_functor_desc_memory_fields_0_0
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = {
  &query__query__du_functor_desc_memory_fields_0_1
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = {
  &query__query__du_functor_desc_memory_fields_0_2
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_memory_fields_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_memory_fields_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_memory_fields_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____memory_fields_0_0_10001)),
  ((MR_Box) (query____Compare____memory_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "memory_fields",
  {     query__query__du_name_ordered_memory_fields_0 },
  {     query__query__du_ptag_ordered_memory_fields_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_memory_fields_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____module_qual_0_0_10001)),
  ((MR_Box) (query____Compare____module_qual_0_0_10001)),
  (MR_String) "query",
  (MR_String) "module_qual",
  {     query__query__enum_name_ordered_module_qual_0 },
  {     query__query__enum_value_ordered_module_qual_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_module_qual_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0 = {
  (MR_String) "by_context",
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

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1 = {
  (MR_String) "by_name",
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

static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2 = {
  (MR_String) "by_cost",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_order_criteria_0_2,
  NULL,
  query__query__field_locns_order_criteria_0_2,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = {
  &query__query__du_functor_desc_order_criteria_0_2
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_order_criteria_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_order_criteria_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____order_criteria_0_0_10001)),
  ((MR_Box) (query____Compare____order_criteria_0_0_10001)),
  (MR_String) "query",
  (MR_String) "order_criteria",
  {     query__query__du_name_ordered_order_criteria_0 },
  {     query__query__du_ptag_ordered_order_criteria_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_order_criteria_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____port_fields_0_0_10001)),
  ((MR_Box) (query____Compare____port_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "port_fields",
  {     query__query__enum_name_ordered_port_fields_0 },
  {     query__query__enum_value_ordered_port_fields_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_port_fields_0
};

static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_box_tables_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_colour_column_groups_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_summarize_ho_call_sites_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_order_criteria_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_format_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_module_qual_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_items_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_developer_mode_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 3,
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
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0 = {
  (MR_String) "preferences",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_preferences_0_0,
  query__query__field_names_preferences_0_0,
  query__query__field_locns_preferences_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0
  }
};

static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

static const MR_Integer query__query__functor_number_map_preferences_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences",
  {     query__query__du_name_ordered_preferences_0 },
  {     query__query__du_ptag_ordered_preferences_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_preferences_0
};

static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_0
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0 = {
  (MR_String) "given_pref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_preferences_indication_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1 = {
  (MR_String) "default_pref",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2 = {
  (MR_String) "all_pref",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = {
  &query__query__du_functor_desc_preferences_indication_0_0
};

static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_preferences_indication_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    query__query__du_stag_ordered_preferences_indication_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_indication_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_indication_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences_indication",
  {     query__query__du_name_ordered_preferences_indication_0 },
  {     query__query__du_ptag_ordered_preferences_indication_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_preferences_indication_0
};

static const MR_Integer query__query__functor_number_map_resp_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0 = {
  (MR_String) "html",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct query__query__type_ctor_info_resp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (query____Unify____resp_0_0_10001)),
  ((MR_Box) (query____Compare____resp_0_0_10001)),
  (MR_String) "query",
  (MR_String) "resp",
  {     &query__query__notag_functor_desc_resp_0 },
  {     &query__query__notag_functor_desc_resp_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_resp_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____summarize_ho_call_sites_0_0_10001)),
  ((MR_Box) (query____Compare____summarize_ho_call_sites_0_0_10001)),
  (MR_String) "query",
  (MR_String) "summarize_ho_call_sites",
  {     query__query__enum_name_ordered_summarize_ho_call_sites_0 },
  {     query__query__enum_value_ordered_summarize_ho_call_sites_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_summarize_ho_call_sites_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_fields_0_0_10001)),
  ((MR_Box) (query____Compare____time_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_fields",
  {     query__query__enum_name_ordered_time_fields_0 },
  {     query__query__enum_value_ordered_time_fields_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  query__query__functor_number_map_time_fields_0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_format_0_0_10001)),
  ((MR_Box) (query____Compare____time_format_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_format",
  {     query__query__enum_name_ordered_time_format_0 },
  {     query__query__enum_value_ordered_time_format_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_time_format_0
};

static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____alloc_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____alloc_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____box_tables_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____box_tables_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____box_tables_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____caller_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____caller_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____callseqs_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____cmd_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____cmd_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____cmd_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____colour_column_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____contour_exclusion_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____cost_kind_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____cost_kind_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____deep_query_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____deep_query_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____deep_query_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____descendants_meaningful_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____developer_mode_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____developer_mode_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____display_limit_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____display_limit_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____display_limit_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____inactive_items_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____inactive_items_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____inactive_status_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____inactive_status_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____include_descendants_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____include_descendants_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____measurement_scope_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____measurement_scope_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____memory_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____memory_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____module_qual_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____module_qual_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____module_qual_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____order_criteria_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____order_criteria_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____port_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____port_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____port_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____preferences_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____preferences_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____preferences_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____preferences_indication_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____preferences_indication_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____resp_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____resp_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____resp_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____summarize_ho_call_sites_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____time_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____time_fields_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____time_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
  MR_Box query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2)
{
  {
    MR_bool query__succeeded;

    {
      query__succeeded = query____Unify____time_format_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
    return query__succeeded;
  }
}

static void MR_CALL 
query____Compare____time_format_0_0_10001(
  MR_Box * query__wrapper_arg_1,
  MR_Box query__wrapper_arg_2,
  MR_Box query__wrapper_arg_3)
{
  {
    MR_Word query__conv0_HeadVar__1_1;

    {
      query____Compare____time_format_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
  }
}

static /* sealed */ const MR_TableStepDesc query__table_input_steps_for_create_and_memoize_report_3_p_0[2] = {
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

static /* sealed */ MR_TableStepStats query__table_call_step_stats_for_create_and_memoize_report_3_p_0[2] = {
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

static /* sealed */ MR_TableStepStats query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2] = {
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

static /* sealed */ MR_TableStepStats query__table_answer_step_stats_for_create_and_memoize_report_3_p_0[2] = {
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

static /* sealed */ MR_TableStepStats query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2] = {
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

static /* sealed */ MR_ProcTableInfo query__table_info_for_create_and_memoize_report_3_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {     (MR_Integer) 0 },
  {
    query__table_input_steps_for_create_and_memoize_report_3_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_call_step_stats_for_create_and_memoize_report_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_answer_step_stats_for_create_and_memoize_report_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0
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
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____time_format_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____time_fields_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____time_fields_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____resp_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_6 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_7 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_6 == query__CastY_7);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String query__V_4_4 = (MR_String) query__HeadVar__2_2;
        MR_String query__V_5_5 = (MR_String) query__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(query__HeadVar__1_1, query__V_4_4, query__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
query____Unify____resp_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_5 == query__CastY_6);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      {
        MR_String query__V_3_3 = (MR_String) query__HeadVar__1_1;
        MR_String query__V_4_4 = (MR_String) query__HeadVar__2_2;

        query__succeeded = (strcmp(query__V_3_3, query__V_4_4) == 0);
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____preferences_indication_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_10 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_11 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_10 == query__CastY_11);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(query__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word query__V_13_13 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word query__V_5_5 = (MR_Word) MR_body(((MR_Word) query__HeadVar__3_3), (MR_Integer) 1);

                  {
                    query____Compare____preferences_0_0(query__HeadVar__1_1, query__V_13_13, query__V_5_5);
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
query____Unify____preferences_indication_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_9 == query__CastY_10);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(query__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_6 == query__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer query__CastX_7 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_8 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_8 == query__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word query__V_3_3 = (MR_Word) MR_body(((MR_Word) query__HeadVar__1_1), (MR_Integer) 1);
            MR_Word query__V_4_4;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__V_4_4 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);
                {
                  query__succeeded = query____Unify____preferences_0_0(query__V_3_3, query__V_4_4);
                }
              }
          }
          break;
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____preferences_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_39 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_40 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_39 == query__CastY_40);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word query__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word query__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word query__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
        MR_Word query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word query__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer query__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word query__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word query__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word query__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
        MR_Word query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word query__V_28_28;

        {
          query____Compare____fields_0_0(&query__V_28_28, query__V_4_4, query__V_16_16);
        }
        query__succeeded = (query__V_28_28 == (MR_Integer) 0);
        query__succeeded = !(query__succeeded);
        if (query__succeeded)
          *query__HeadVar__1_1 = query__V_28_28;
        else
          {
            MR_Word query__V_29_29;
            MR_Integer query__V_53_53 = (MR_Integer) query__V_5_5;
            MR_Integer query__V_54_54 = (MR_Integer) query__V_17_17;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_29_29, query__V_53_53, query__V_54_54);
            }
            query__succeeded = (query__V_29_29 == (MR_Integer) 0);
            query__succeeded = !(query__succeeded);
            if (query__succeeded)
              *query__HeadVar__1_1 = query__V_29_29;
            else
              {
                MR_Word query__V_30_30;
                MR_Integer query__V_55_55 = (MR_Integer) query__V_6_6;
                MR_Integer query__V_56_56 = (MR_Integer) query__V_18_18;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_30_30, query__V_55_55, query__V_56_56);
                }
                query__succeeded = (query__V_30_30 == (MR_Integer) 0);
                query__succeeded = !(query__succeeded);
                if (query__succeeded)
                  *query__HeadVar__1_1 = query__V_30_30;
                else
                  {
                    MR_Word query__V_31_31;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[0], &query__V_31_31, ((MR_Box) (query__V_7_7)), ((MR_Box) (query__V_19_19)));
                    }
                    query__succeeded = (query__V_31_31 == (MR_Integer) 0);
                    query__succeeded = !(query__succeeded);
                    if (query__succeeded)
                      *query__HeadVar__1_1 = query__V_31_31;
                    else
                      {
                        MR_Word query__V_32_32;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_32_32, query__V_8_8, query__V_20_20);
                        }
                        query__succeeded = (query__V_32_32 == (MR_Integer) 0);
                        query__succeeded = !(query__succeeded);
                        if (query__succeeded)
                          *query__HeadVar__1_1 = query__V_32_32;
                        else
                          {
                            MR_Word query__V_33_33;
                            MR_Integer query__V_57_57 = (MR_Integer) query__V_9_9;
                            MR_Integer query__V_58_58 = (MR_Integer) query__V_21_21;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_33_33, query__V_57_57, query__V_58_58);
                            }
                            query__succeeded = (query__V_33_33 == (MR_Integer) 0);
                            query__succeeded = !(query__succeeded);
                            if (query__succeeded)
                              *query__HeadVar__1_1 = query__V_33_33;
                            else
                              {
                                MR_Word query__V_34_34;

                                {
                                  query____Compare____order_criteria_0_0(&query__V_34_34, query__V_10_10, query__V_22_22);
                                }
                                query__succeeded = (query__V_34_34 == (MR_Integer) 0);
                                query__succeeded = !(query__succeeded);
                                if (query__succeeded)
                                  *query__HeadVar__1_1 = query__V_34_34;
                                else
                                  {
                                    MR_Word query__V_35_35;
                                    MR_Integer query__V_59_59 = (MR_Integer) query__V_11_11;
                                    MR_Integer query__V_60_60 = (MR_Integer) query__V_23_23;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_35_35, query__V_59_59, query__V_60_60);
                                    }
                                    query__succeeded = (query__V_35_35 == (MR_Integer) 0);
                                    query__succeeded = !(query__succeeded);
                                    if (query__succeeded)
                                      *query__HeadVar__1_1 = query__V_35_35;
                                    else
                                      {
                                        MR_Word query__V_36_36;
                                        MR_Integer query__V_61_61 = (MR_Integer) query__V_12_12;
                                        MR_Integer query__V_62_62 = (MR_Integer) query__V_24_24;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_36_36, query__V_61_61, query__V_62_62);
                                        }
                                        query__succeeded = (query__V_36_36 == (MR_Integer) 0);
                                        query__succeeded = !(query__succeeded);
                                        if (query__succeeded)
                                          *query__HeadVar__1_1 = query__V_36_36;
                                        else
                                          {
                                            MR_Word query__V_37_37;
                                            MR_Integer query__V_63_63 = (MR_Integer) query__V_13_13;
                                            MR_Integer query__V_64_64 = (MR_Integer) query__V_25_25;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_37_37, query__V_63_63, query__V_64_64);
                                            }
                                            query__succeeded = (query__V_37_37 == (MR_Integer) 0);
                                            query__succeeded = !(query__succeeded);
                                            if (query__succeeded)
                                              *query__HeadVar__1_1 = query__V_37_37;
                                            else
                                              {
                                                MR_Word query__V_38_38;

                                                {
                                                  query____Compare____inactive_items_0_0(&query__V_38_38, query__V_14_14, query__V_26_26);
                                                }
                                                query__succeeded = (query__V_38_38 == (MR_Integer) 0);
                                                query__succeeded = !(query__succeeded);
                                                if (query__succeeded)
                                                  *query__HeadVar__1_1 = query__V_38_38;
                                                else
                                                  {
                                                    MR_Integer query__V_65_65 = (MR_Integer) query__V_15_15;
                                                    MR_Integer query__V_66_66 = (MR_Integer) query__V_27_27;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_65_65, query__V_66_66);
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
query____Unify____preferences_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_27 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_28 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_27 == query__CastY_28);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      {
        MR_Word query__TypeInfo_29_29;
        MR_Word query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
        MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer query__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word query__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word query__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word query__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
        MR_Word query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 8)));

        {
          query__succeeded = query____Unify____fields_0_0(query__V_3_3, query__V_15_15);
        }
        if (query__succeeded)
          {
            query__succeeded = (query__V_4_4 == query__V_16_16);
            if (query__succeeded)
              {
                query__succeeded = (query__V_5_5 == query__V_17_17);
                if (query__succeeded)
                  {
                    query__TypeInfo_29_29 = (MR_Word) &query_scalar_common_1[0];
                    {
                      query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_29_29, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_18_18)));
                    }
                    if (query__succeeded)
                      {
                        query__succeeded = (query__V_7_7 == query__V_19_19);
                        if (query__succeeded)
                          {
                            query__succeeded = (query__V_8_8 == query__V_20_20);
                            if (query__succeeded)
                              {
                                {
                                  query__succeeded = query____Unify____order_criteria_0_0(query__V_9_9, query__V_21_21);
                                }
                                if (query__succeeded)
                                  {
                                    query__succeeded = (query__V_10_10 == query__V_22_22);
                                    if (query__succeeded)
                                      {
                                        query__succeeded = (query__V_11_11 == query__V_23_23);
                                        if (query__succeeded)
                                          {
                                            query__succeeded = (query__V_12_12 == query__V_24_24);
                                            if (query__succeeded)
                                              {
                                                {
                                                  query__succeeded = query____Unify____inactive_items_0_0(query__V_13_13, query__V_25_25);
                                                }
                                                if (query__succeeded)
                                                  query__succeeded = (query__V_14_14 == query__V_26_26);
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
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____port_fields_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____port_fields_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____order_criteria_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_24 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_25 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_24 == query__CastY_25);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(query__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word query__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 7);
                  MR_Word query__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word query__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word query__V_22_22;
                  MR_Integer query__V_32_32 = (MR_Integer) query__V_31_31;
                  MR_Integer query__V_33_33 = (MR_Integer) query__V_19_19;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_22_22, query__V_32_32, query__V_33_33);
                  }
                  query__succeeded = (query__V_22_22 == (MR_Integer) 0);
                  query__succeeded = !(query__succeeded);
                  if (query__succeeded)
                    *query__HeadVar__1_1 = query__V_22_22;
                  else
                    {
                      MR_Word query__V_23_23;
                      MR_Integer query__V_34_34 = (MR_Integer) query__V_30_30;
                      MR_Integer query__V_35_35 = (MR_Integer) query__V_20_20;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_23_23, query__V_34_34, query__V_35_35);
                      }
                      query__succeeded = (query__V_23_23 == (MR_Integer) 0);
                      query__succeeded = !(query__succeeded);
                      if (query__succeeded)
                        *query__HeadVar__1_1 = query__V_23_23;
                      else
                        {
                          MR_Integer query__V_36_36 = (MR_Integer) query__V_29_29;
                          MR_Integer query__V_37_37 = (MR_Integer) query__V_21_21;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_36_36, query__V_37_37);
                          }
                        }
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
query____Unify____order_criteria_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_13 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_14 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_13 == query__CastY_14);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(query__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_4 == query__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_6 == query__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word query__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 7);
            MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word query__V_10_10;
            MR_Word query__V_11_11;
            MR_Word query__V_12_12;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);
                query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                query__succeeded = (query__V_7_7 == query__V_10_10);
                if (query__succeeded)
                  {
                    query__succeeded = (query__V_8_8 == query__V_11_11);
                    if (query__succeeded)
                      query__succeeded = (query__V_9_9 == query__V_12_12);
                  }
              }
          }
          break;
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____module_qual_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____module_qual_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____memory_fields_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_16 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_17 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_16 == query__CastY_17);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *query__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *query__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *query__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer query__V_22_22 = (MR_Integer) query__V_20_20;
                  MR_Integer query__V_23_23 = (MR_Integer) query__V_8_8;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_22_22, query__V_23_23);
                  }
                }
                break;
              case (MR_Integer) 2:
                *query__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer query__V_24_24 = (MR_Integer) query__V_21_21;
                  MR_Integer query__V_25_25 = (MR_Integer) query__V_15_15;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_24_24, query__V_25_25);
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
query____Unify____memory_fields_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_9 == query__CastY_10);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
            MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

            query__succeeded = (query__CastY_4 == query__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word query__V_6_6;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
                query__succeeded = (query__V_5_5 == query__V_6_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word query__V_8_8;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (query__succeeded)
              {
                query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
                query__succeeded = (query__V_7_7 == query__V_8_8);
              }
          }
          break;
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____measurement_scope_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____measurement_scope_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____include_descendants_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____include_descendants_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____inactive_status_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____inactive_status_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____inactive_items_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_12 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_13 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_12 == query__CastY_13);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word query__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word query__V_10_10;
        MR_Integer query__V_17_17 = (MR_Integer) query__V_4_4;
        MR_Integer query__V_18_18 = (MR_Integer) query__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_10_10, query__V_17_17, query__V_18_18);
        }
        query__succeeded = (query__V_10_10 == (MR_Integer) 0);
        query__succeeded = !(query__succeeded);
        if (query__succeeded)
          *query__HeadVar__1_1 = query__V_10_10;
        else
          {
            MR_Word query__V_11_11;
            MR_Integer query__V_19_19 = (MR_Integer) query__V_5_5;
            MR_Integer query__V_20_20 = (MR_Integer) query__V_8_8;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_11_11, query__V_19_19, query__V_20_20);
            }
            query__succeeded = (query__V_11_11 == (MR_Integer) 0);
            query__succeeded = !(query__succeeded);
            if (query__succeeded)
              *query__HeadVar__1_1 = query__V_11_11;
            else
              {
                MR_Integer query__V_21_21 = (MR_Integer) query__V_6_6;
                MR_Integer query__V_22_22 = (MR_Integer) query__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_21_21, query__V_22_22);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
query____Unify____inactive_items_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_9 == query__CastY_10);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      {
        MR_Word query__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word query__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        query__succeeded = (query__V_3_3 == query__V_6_6);
        if (query__succeeded)
          {
            query__succeeded = (query__V_4_4 == query__V_7_7);
            if (query__succeeded)
              query__succeeded = (query__V_5_5 == query__V_8_8);
          }
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____fields_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_18 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_19 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_18 == query__CastY_19);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word query__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word query__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
        MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word query__V_14_14;
        MR_Integer query__V_25_25 = (MR_Integer) query__V_4_4;
        MR_Integer query__V_26_26 = (MR_Integer) query__V_9_9;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_14_14, query__V_25_25, query__V_26_26);
        }
        query__succeeded = (query__V_14_14 == (MR_Integer) 0);
        query__succeeded = !(query__succeeded);
        if (query__succeeded)
          *query__HeadVar__1_1 = query__V_14_14;
        else
          {
            MR_Word query__V_15_15;
            MR_Integer query__V_27_27 = (MR_Integer) query__V_5_5;
            MR_Integer query__V_28_28 = (MR_Integer) query__V_10_10;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_15_15, query__V_27_27, query__V_28_28);
            }
            query__succeeded = (query__V_15_15 == (MR_Integer) 0);
            query__succeeded = !(query__succeeded);
            if (query__succeeded)
              *query__HeadVar__1_1 = query__V_15_15;
            else
              {
                MR_Word query__V_16_16;
                MR_Integer query__V_29_29 = (MR_Integer) query__V_6_6;
                MR_Integer query__V_30_30 = (MR_Integer) query__V_11_11;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_16_16, query__V_29_29, query__V_30_30);
                }
                query__succeeded = (query__V_16_16 == (MR_Integer) 0);
                query__succeeded = !(query__succeeded);
                if (query__succeeded)
                  *query__HeadVar__1_1 = query__V_16_16;
                else
                  {
                    MR_Word query__V_17_17;
                    MR_Integer query__V_31_31 = (MR_Integer) query__V_7_7;
                    MR_Integer query__V_32_32 = (MR_Integer) query__V_12_12;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_17_17, query__V_31_31, query__V_32_32);
                    }
                    query__succeeded = (query__V_17_17 == (MR_Integer) 0);
                    query__succeeded = !(query__succeeded);
                    if (query__succeeded)
                      *query__HeadVar__1_1 = query__V_17_17;
                    else
                      {
                        query____Compare____memory_fields_0_0(query__HeadVar__1_1, query__V_8_8, query__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
query____Unify____fields_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_13 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_14 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_13 == query__CastY_14);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      {
        MR_Word query__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word query__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
        MR_Word query__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
        MR_Word query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));

        query__succeeded = (query__V_3_3 == query__V_8_8);
        if (query__succeeded)
          {
            query__succeeded = (query__V_4_4 == query__V_9_9);
            if (query__succeeded)
              {
                query__succeeded = (query__V_5_5 == query__V_10_10);
                if (query__succeeded)
                  {
                    query__succeeded = (query__V_6_6 == query__V_11_11);
                    if (query__succeeded)
                      {
                        query__succeeded = query____Unify____memory_fields_0_0(query__V_7_7, query__V_12_12);
                      }
                  }
              }
          }
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____display_limit_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_29 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_30 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_29 == query__CastY_30);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer query__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer query__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer query__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word query__V_8_8;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_8_8, query__V_36_36, query__V_6_6);
                  }
                  query__succeeded = (query__V_8_8 == (MR_Integer) 0);
                  query__succeeded = !(query__succeeded);
                  if (query__succeeded)
                    *query__HeadVar__1_1 = query__V_8_8;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_35_35, query__V_7_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *query__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *query__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float query__V_37_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Float query__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_float_3_p_0(query__HeadVar__1_1, query__V_37_37, query__V_19_19);
                  }
                }
                break;
              case (MR_Integer) 2:
                *query__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float query__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Float query__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_float_3_p_0(query__HeadVar__1_1, query__V_38_38, query__V_28_28);
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
query____Unify____display_limit_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_11 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_12 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_11 == query__CastY_12);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer query__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer query__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer query__V_5_5;
            MR_Integer query__V_6_6;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (query__succeeded)
              {
                query__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
                query__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
                query__succeeded = (query__V_3_3 == query__V_5_5);
                if (query__succeeded)
                  query__succeeded = (query__V_4_4 == query__V_6_6);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float query__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float query__V_8_8;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
                query__succeeded = (query__V_7_7 == query__V_8_8);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float query__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float query__V_10_10;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (query__succeeded)
              {
                query__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
                query__succeeded = (query__V_9_9 == query__V_10_10);
              }
          }
          break;
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____developer_mode_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____developer_mode_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____descendants_meaningful_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____deep_query_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_12 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_13 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_12 == query__CastY_13);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
        MR_String query__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
        MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word query__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[1], &query__V_10_10, ((MR_Box) (query__V_4_4)), ((MR_Box) (query__V_7_7)));
        }
        query__succeeded = (query__V_10_10 == (MR_Integer) 0);
        query__succeeded = !(query__succeeded);
        if (query__succeeded)
          *query__HeadVar__1_1 = query__V_10_10;
        else
          {
            MR_Word query__V_11_11;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_11_11, query__V_5_5, query__V_8_8);
            }
            query__succeeded = (query__V_11_11 == (MR_Integer) 0);
            query__succeeded = !(query__succeeded);
            if (query__succeeded)
              *query__HeadVar__1_1 = query__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[2], query__HeadVar__1_1, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
query____Unify____deep_query_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_9 == query__CastY_10);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      {
        MR_Word query__TypeInfo_12_12;
        MR_Word query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
        MR_String query__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
        MR_String query__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));

        {
          query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &query_scalar_common_1[1], ((MR_Box) (query__V_3_3)), ((MR_Box) (query__V_6_6)));
        }
        if (query__succeeded)
          {
            query__succeeded = (strcmp(query__V_4_4, query__V_7_7) == 0);
            if (query__succeeded)
              {
                query__TypeInfo_12_12 = (MR_Word) &query_scalar_common_1[2];
                {
                  query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_12_12, ((MR_Box) (query__V_5_5)), ((MR_Box) (query__V_8_8)));
                }
              }
          }
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____cost_kind_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____cost_kind_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____contour_exclusion_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____colour_column_groups_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____cmd_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_64 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__CastY_65 = (MR_Integer) query__HeadVar__3_3;

    query__succeeded = (query__CastX_64 == query__CastY_65);
    if (query__succeeded)
      *query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer query__V_4_4;
        MR_Integer query__V_5_5;

        {
          query____Index____cmd_0_0(query__HeadVar__2_2, &query__V_4_4);
        }
        {
          query____Index____cmd_0_0(query__HeadVar__3_3, &query__V_5_5);
        }
        query__succeeded = (query__V_4_4 < query__V_5_5);
        if (query__succeeded)
          *query__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            query__succeeded = (query__V_4_4 > query__V_5_5);
            if (query__succeeded)
              *query__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word query__V_6_6;

                switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(query__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          query__V_6_6 = (MR_Integer) 0;
                          query__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          query__V_6_6 = (MR_Integer) 0;
                          query__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          query__V_6_6 = (MR_Integer) 0;
                          query__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          query__V_6_6 = (MR_Integer) 0;
                          query__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          query__V_6_6 = (MR_Integer) 0;
                          query__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer query__V_8_8;

                      query__succeeded = ((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (query__succeeded)
                        {
                          query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_7_7, query__V_8_8);
                          }
                          query__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word query__TypeInfo_67_67;
                      MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word query__V_10_10;

                      query__succeeded = ((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (query__succeeded)
                        {
                          query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));
                          query__TypeInfo_67_67 = (MR_Word) &query_scalar_common_1[0];
                          {
                            mercury__builtin__compare_3_p_0(query__TypeInfo_67_67, &query__V_6_6, ((MR_Box) (query__V_9_9)), ((MR_Box) (query__V_10_10)));
                          }
                          query__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_12_12;
                          MR_Integer query__V_93_93;
                          MR_Integer query__V_94_94;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (query__succeeded)
                            {
                              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_93_93 = (MR_Integer) query__V_11_11;
                              query__V_94_94 = (MR_Integer) query__V_12_12;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_93_93, query__V_94_94);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_14_14;
                          MR_Integer query__V_95_95;
                          MR_Integer query__V_96_96;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (query__succeeded)
                            {
                              query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_95_95 = (MR_Integer) query__V_13_13;
                              query__V_96_96 = (MR_Integer) query__V_14_14;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_95_95, query__V_96_96);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_16_16;
                          MR_Integer query__V_109_109;
                          MR_Integer query__V_110_110;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (query__succeeded)
                            {
                              query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_109_109 = (MR_Integer) query__V_15_15;
                              query__V_110_110 = (MR_Integer) query__V_16_16;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_109_109, query__V_110_110);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Integer query__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Integer query__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 4)));
                          MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 5)));
                          MR_Word query__V_22_22;
                          MR_Word query__V_23_23;
                          MR_Integer query__V_24_24;
                          MR_Integer query__V_25_25;
                          MR_Word query__V_26_26;
                          MR_Word query__V_27_27;
                          MR_Integer query__V_111_111;
                          MR_Integer query__V_112_112;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (query__succeeded)
                            {
                              query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)));
                              query__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 3)));
                              query__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 4)));
                              query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 5)));
                              query__V_111_111 = (MR_Integer) query__V_17_17;
                              query__V_112_112 = (MR_Integer) query__V_22_22;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_27_27, query__V_111_111, query__V_112_112);
                              }
                              query__succeeded = (query__V_27_27 == (MR_Integer) 0);
                              query__succeeded = !(query__succeeded);
                              if (query__succeeded)
                                query__V_6_6 = query__V_27_27;
                              else
                                {
                                  MR_Word query__V_28_28;
                                  MR_Integer query__V_113_113 = (MR_Integer) query__V_18_18;
                                  MR_Integer query__V_114_114 = (MR_Integer) query__V_23_23;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_28_28, query__V_113_113, query__V_114_114);
                                  }
                                  query__succeeded = (query__V_28_28 == (MR_Integer) 0);
                                  query__succeeded = !(query__succeeded);
                                  if (query__succeeded)
                                    query__V_6_6 = query__V_28_28;
                                  else
                                    {
                                      MR_Word query__V_29_29;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_29_29, query__V_19_19, query__V_24_24);
                                      }
                                      query__succeeded = (query__V_29_29 == (MR_Integer) 0);
                                      query__succeeded = !(query__succeeded);
                                      if (query__succeeded)
                                        query__V_6_6 = query__V_29_29;
                                      else
                                        {
                                          MR_Word query__V_30_30;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_30_30, query__V_20_20, query__V_25_25);
                                          }
                                          query__succeeded = (query__V_30_30 == (MR_Integer) 0);
                                          query__succeeded = !(query__succeeded);
                                          if (query__succeeded)
                                            query__V_6_6 = query__V_30_30;
                                          else
                                            {
                                              MR_Integer query__V_115_115 = (MR_Integer) query__V_21_21;
                                              MR_Integer query__V_116_116 = (MR_Integer) query__V_26_26;

                                              {
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_115_115, query__V_116_116);
                                              }
                                            }
                                        }
                                    }
                                }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_String query__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String query__V_32_32;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (query__succeeded)
                            {
                              query__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_31_31, query__V_32_32);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String query__V_34_34;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (query__succeeded)
                            {
                              query__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_33_33, query__V_34_34);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String query__V_36_36;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (query__succeeded)
                            {
                              query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_35_35, query__V_36_36);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
                          MR_Word query__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          MR_Word query__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          MR_Word query__V_41_41;
                          MR_Word query__V_42_42;
                          MR_Word query__V_43_43;
                          MR_Word query__V_44_44;
                          MR_Word query__V_45_45;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (query__succeeded)
                            {
                              query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 7);
                              query__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                              query__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                              {
                                query____Compare____display_limit_0_0(&query__V_45_45, query__V_37_37, query__V_41_41);
                              }
                              query__succeeded = (query__V_45_45 == (MR_Integer) 0);
                              query__succeeded = !(query__succeeded);
                              if (query__succeeded)
                                query__V_6_6 = query__V_45_45;
                              else
                                {
                                  MR_Word query__V_46_46;
                                  MR_Integer query__V_119_119 = (MR_Integer) query__V_38_38;
                                  MR_Integer query__V_120_120 = (MR_Integer) query__V_42_42;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_46_46, query__V_119_119, query__V_120_120);
                                  }
                                  query__succeeded = (query__V_46_46 == (MR_Integer) 0);
                                  query__succeeded = !(query__succeeded);
                                  if (query__succeeded)
                                    query__V_6_6 = query__V_46_46;
                                  else
                                    {
                                      MR_Word query__V_47_47;
                                      MR_Integer query__V_121_121 = (MR_Integer) query__V_39_39;
                                      MR_Integer query__V_122_122 = (MR_Integer) query__V_43_43;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_47_47, query__V_121_121, query__V_122_122);
                                      }
                                      query__succeeded = (query__V_47_47 == (MR_Integer) 0);
                                      query__succeeded = !(query__succeeded);
                                      if (query__succeeded)
                                        query__V_6_6 = query__V_47_47;
                                      else
                                        {
                                          MR_Integer query__V_123_123 = (MR_Integer) query__V_40_40;
                                          MR_Integer query__V_124_124 = (MR_Integer) query__V_44_44;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_123_123, query__V_124_124);
                                          }
                                        }
                                    }
                                }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_49_49;
                          MR_Integer query__V_117_117;
                          MR_Integer query__V_118_118;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (query__succeeded)
                            {
                              query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_117_117 = (MR_Integer) query__V_48_48;
                              query__V_118_118 = (MR_Integer) query__V_49_49;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_117_117, query__V_118_118);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Word query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_51_51;
                          MR_Integer query__V_107_107;
                          MR_Integer query__V_108_108;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                          if (query__succeeded)
                            {
                              query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_107_107 = (MR_Integer) query__V_50_50;
                              query__V_108_108 = (MR_Integer) query__V_51_51;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_107_107, query__V_108_108);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Word query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_53_53;
                          MR_Integer query__V_105_105;
                          MR_Integer query__V_106_106;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (query__succeeded)
                            {
                              query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_105_105 = (MR_Integer) query__V_52_52;
                              query__V_106_106 = (MR_Integer) query__V_53_53;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_105_105, query__V_106_106);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          MR_Word query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_55_55;
                          MR_Integer query__V_103_103;
                          MR_Integer query__V_104_104;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                          if (query__succeeded)
                            {
                              query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_103_103 = (MR_Integer) query__V_54_54;
                              query__V_104_104 = (MR_Integer) query__V_55_55;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_103_103, query__V_104_104);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_57_57;
                          MR_Integer query__V_99_99;
                          MR_Integer query__V_100_100;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                          if (query__succeeded)
                            {
                              query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_99_99 = (MR_Integer) query__V_56_56;
                              query__V_100_100 = (MR_Integer) query__V_57_57;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_99_99, query__V_100_100);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          MR_Word query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_59_59;
                          MR_Integer query__V_97_97;
                          MR_Integer query__V_98_98;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                          if (query__succeeded)
                            {
                              query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_97_97 = (MR_Integer) query__V_58_58;
                              query__V_98_98 = (MR_Integer) query__V_59_59;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_97_97, query__V_98_98);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Word query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_61_61;
                          MR_Integer query__V_101_101;
                          MR_Integer query__V_102_102;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                          if (query__succeeded)
                            {
                              query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_101_101 = (MR_Integer) query__V_60_60;
                              query__V_102_102 = (MR_Integer) query__V_61_61;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_101_101, query__V_102_102);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          MR_Word query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word query__V_63_63;
                          MR_Integer query__V_91_91;
                          MR_Integer query__V_92_92;

                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                          if (query__succeeded)
                            {
                              query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
                              query__V_91_91 = (MR_Integer) query__V_62_62;
                              query__V_92_92 = (MR_Integer) query__V_63_63;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_91_91, query__V_92_92);
                              }
                              query__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (query__succeeded)
                  *query__HeadVar__1_1 = query__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
query____Index____cmd_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Integer * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;

    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(query__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *query__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *query__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *query__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            *query__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 4:
            *query__HeadVar__2_2 = (MR_Integer) 10;
            break;
        }
        break;
      case (MR_Integer) 1:
        *query__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        *query__HeadVar__2_2 = (MR_Integer) 4;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *query__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 1:
            *query__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 2:
            *query__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 3:
            *query__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 4:
            *query__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 5:
            *query__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 6:
            *query__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 7:
            *query__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 8:
            *query__HeadVar__2_2 = (MR_Integer) 15;
            break;
          case (MR_Integer) 9:
            *query__HeadVar__2_2 = (MR_Integer) 16;
            break;
          case (MR_Integer) 10:
            *query__HeadVar__2_2 = (MR_Integer) 17;
            break;
          case (MR_Integer) 11:
            *query__HeadVar__2_2 = (MR_Integer) 18;
            break;
          case (MR_Integer) 12:
            *query__HeadVar__2_2 = (MR_Integer) 19;
            break;
          case (MR_Integer) 13:
            *query__HeadVar__2_2 = (MR_Integer) 20;
            break;
          case (MR_Integer) 14:
            *query__HeadVar__2_2 = (MR_Integer) 21;
            break;
          case (MR_Integer) 15:
            *query__HeadVar__2_2 = (MR_Integer) 22;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
query____Unify____cmd_0_0(
  MR_Word query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__CastX_63 = (MR_Integer) query__HeadVar__1_1;
    MR_Integer query__CastY_64 = (MR_Integer) query__HeadVar__2_2;

    query__succeeded = (query__CastX_63 == query__CastY_64);
    if (query__succeeded)
      query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(query__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_4 == query__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_6 == query__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_10 == query__CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer query__CastX_17 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_18 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_18 == query__CastX_17);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer query__CastX_31 = (MR_Integer) query__HeadVar__1_1;
                MR_Integer query__CastY_32 = (MR_Integer) query__HeadVar__2_2;

                query__succeeded = (query__CastY_32 == query__CastX_31);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer query__V_8_8;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
                query__succeeded = (query__V_7_7 == query__V_8_8);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word query__TypeInfo_76_76;
            MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word query__V_12_12;

            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (query__succeeded)
              {
                query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
                query__TypeInfo_76_76 = (MR_Word) &query_scalar_common_1[0];
                {
                  query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_76_76, ((MR_Box) (query__V_11_11)), ((MR_Box) (query__V_12_12)));
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_14_14;
                MR_Integer query__V_80_80;
                MR_Integer query__V_81_81;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (query__succeeded)
                  {
                    query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_80_80 = (MR_Integer) query__V_13_13;
                    query__V_81_81 = (MR_Integer) query__V_14_14;
                    query__succeeded = (query__V_80_80 == query__V_81_81);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_16_16;
                MR_Integer query__V_82_82;
                MR_Integer query__V_83_83;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (query__succeeded)
                  {
                    query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_82_82 = (MR_Integer) query__V_15_15;
                    query__V_83_83 = (MR_Integer) query__V_16_16;
                    query__succeeded = (query__V_82_82 == query__V_83_83);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_20_20;
                MR_Integer query__V_96_96;
                MR_Integer query__V_97_97;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (query__succeeded)
                  {
                    query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_96_96 = (MR_Integer) query__V_19_19;
                    query__V_97_97 = (MR_Integer) query__V_20_20;
                    query__succeeded = (query__V_96_96 == query__V_97_97);
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer query__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer query__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word query__V_26_26;
                MR_Word query__V_27_27;
                MR_Integer query__V_28_28;
                MR_Integer query__V_29_29;
                MR_Word query__V_30_30;
                MR_Integer query__V_98_98;
                MR_Integer query__V_99_99;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (query__succeeded)
                  {
                    query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)));
                    query__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 3)));
                    query__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 4)));
                    query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 5)));
                    query__succeeded = (query__V_22_22 == query__V_27_27);
                    if (query__succeeded)
                      {
                        query__succeeded = (query__V_23_23 == query__V_28_28);
                        if (query__succeeded)
                          {
                            query__succeeded = (query__V_24_24 == query__V_29_29);
                            if (query__succeeded)
                              {
                                query__succeeded = (query__V_25_25 == query__V_30_30);
                                if (query__succeeded)
                                  {
                                    query__V_98_98 = (MR_Integer) query__V_21_21;
                                    query__V_99_99 = (MR_Integer) query__V_26_26;
                                    query__succeeded = (query__V_98_98 == query__V_99_99);
                                  }
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_String query__V_34_34;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (query__succeeded)
                  {
                    query__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__succeeded = (strcmp(query__V_33_33, query__V_34_34) == 0);
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_String query__V_36_36;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (query__succeeded)
                  {
                    query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__succeeded = (strcmp(query__V_35_35, query__V_36_36) == 0);
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String query__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_String query__V_38_38;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (query__succeeded)
                  {
                    query__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__succeeded = (strcmp(query__V_37_37, query__V_38_38) == 0);
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 7);
                MR_Word query__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word query__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                MR_Word query__V_43_43;
                MR_Word query__V_44_44;
                MR_Word query__V_45_45;
                MR_Word query__V_46_46;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (query__succeeded)
                  {
                    query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
                    query__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    query__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    {
                      query__succeeded = query____Unify____display_limit_0_0(query__V_39_39, query__V_43_43);
                    }
                    if (query__succeeded)
                      {
                        query__succeeded = (query__V_40_40 == query__V_44_44);
                        if (query__succeeded)
                          {
                            query__succeeded = (query__V_41_41 == query__V_45_45);
                            if (query__succeeded)
                              query__succeeded = (query__V_42_42 == query__V_46_46);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_48_48;
                MR_Integer query__V_100_100;
                MR_Integer query__V_101_101;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (query__succeeded)
                  {
                    query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_100_100 = (MR_Integer) query__V_47_47;
                    query__V_101_101 = (MR_Integer) query__V_48_48;
                    query__succeeded = (query__V_100_100 == query__V_101_101);
                  }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_50_50;
                MR_Integer query__V_94_94;
                MR_Integer query__V_95_95;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (query__succeeded)
                  {
                    query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_94_94 = (MR_Integer) query__V_49_49;
                    query__V_95_95 = (MR_Integer) query__V_50_50;
                    query__succeeded = (query__V_94_94 == query__V_95_95);
                  }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_52_52;
                MR_Integer query__V_92_92;
                MR_Integer query__V_93_93;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (query__succeeded)
                  {
                    query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_92_92 = (MR_Integer) query__V_51_51;
                    query__V_93_93 = (MR_Integer) query__V_52_52;
                    query__succeeded = (query__V_92_92 == query__V_93_93);
                  }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_54_54;
                MR_Integer query__V_90_90;
                MR_Integer query__V_91_91;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (query__succeeded)
                  {
                    query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_90_90 = (MR_Integer) query__V_53_53;
                    query__V_91_91 = (MR_Integer) query__V_54_54;
                    query__succeeded = (query__V_90_90 == query__V_91_91);
                  }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_56_56;
                MR_Integer query__V_86_86;
                MR_Integer query__V_87_87;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
                if (query__succeeded)
                  {
                    query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_86_86 = (MR_Integer) query__V_55_55;
                    query__V_87_87 = (MR_Integer) query__V_56_56;
                    query__succeeded = (query__V_86_86 == query__V_87_87);
                  }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_58_58;
                MR_Integer query__V_84_84;
                MR_Integer query__V_85_85;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (query__succeeded)
                  {
                    query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_84_84 = (MR_Integer) query__V_57_57;
                    query__V_85_85 = (MR_Integer) query__V_58_58;
                    query__succeeded = (query__V_84_84 == query__V_85_85);
                  }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_60_60;
                MR_Integer query__V_88_88;
                MR_Integer query__V_89_89;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
                if (query__succeeded)
                  {
                    query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_88_88 = (MR_Integer) query__V_59_59;
                    query__V_89_89 = (MR_Integer) query__V_60_60;
                    query__succeeded = (query__V_88_88 == query__V_89_89);
                  }
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word query__V_62_62;
                MR_Integer query__V_78_78;
                MR_Integer query__V_79_79;

                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
                if (query__succeeded)
                  {
                    query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
                    query__V_78_78 = (MR_Integer) query__V_61_61;
                    query__V_79_79 = (MR_Integer) query__V_62_62;
                    query__succeeded = (query__V_78_78 == query__V_79_79);
                  }
              }
              break;
          }
          break;
      }
    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____callseqs_fields_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____caller_groups_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____caller_groups_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____box_tables_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____box_tables_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

void MR_CALL 
query____Compare____alloc_fields_0_0(
  MR_Word * query__HeadVar__1_1,
  MR_Word query__HeadVar__2_2,
  MR_Word query__HeadVar__3_3)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
query____Unify____alloc_fields_0_0(
  MR_Word query__HeadVar__2_1,
  MR_Word query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "call_site_dynamic_var_use";
  }
}

static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "dump_raw_clique";
  }
}

static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "dump_call_site_dynamic";
  }
}

static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "dump_call_site_static";
  }
}

static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "dump_proc_dynamic";
  }
}

static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "dump_proc_static";
  }
}

static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "proc_dynamic_coverage";
  }
}

static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "proc_static_coverage";
  }
}

static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "top_procs";
  }
}

static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "module_rep";
  }
}

static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "module_getter_setters";
  }
}

static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "module";
  }
}

static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "program_modules";
  }
}

static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "proc_callers";
  }
}

static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "proc";
  }
}

static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "recursion_type_freq";
  }
}

static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "clique_rc";
  }
}

static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "clique";
  }
}

static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "root";
  }
}

static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "menu";
  }
}

static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "timeout";
  }
}

static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "restart";
  }
}

static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_String) "quit";
  }
}

static MR_String MR_CALL 
query__box_to_string_1_f_0(
  MR_Word query__Box_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;

    switch (query__Box_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__String_4 = (MR_String) "box";
        break;
      case (MR_Integer) 1:
        query__String_4 = (MR_String) "nobox";
        break;
    }
    return query__String_4;
  }
}

static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
  MR_Word query__Scheme_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;

    switch (query__Scheme_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__String_4 = (MR_String) "cols";
        break;
      case (MR_Integer) 1:
        query__String_4 = (MR_String) "none";
        break;
    }
    return query__String_4;
  }
}

static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
  MR_Word query__DevMode_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;

    switch (query__DevMode_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        query__String_4 = (MR_String) "nodev";
        break;
      case (MR_Integer) 0:
        query__String_4 = (MR_String) "dev";
        break;
    }
    return query__String_4;
  }
}

static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__slot_0;
    MR_String query__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    query__slot_0 = ((MR_hash_string5(query__HeadVar__1_1)) & (MR_Integer) 15);
    /* no collisions; no hash chain loop */
    /* lookup the string for this hash slot */
    query__str_1 = ((&query_vector_common_9[0 + query__slot_0]))->query__vector_common_type_9_0__vct_9_f_0;
    /* did we find a match? */
    if ((((query__str_1 != NULL)) && ((strcmp(query__str_1, query__HeadVar__1_1) == 0))))
      {
        /* we found a match; look up the results */
        *query__HeadVar__2_2 = ((&query_vector_common_9[0 + query__slot_0]))->query__vector_common_type_9_0__vct_9_f_1;
        query__succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
    query__succeeded = MR_FALSE;
  label_0:;
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
  MR_Word query__Items_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;
    MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) & (MR_Integer) 1);

    switch (query__V_29_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (query__V_30_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (query__V_31_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                query__String_4 = (MR_String) "hhh";
                break;
              case (MR_Integer) 1:
                query__String_4 = (MR_String) "shh";
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (query__V_31_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                query__String_4 = (MR_String) "hsh";
                break;
              case (MR_Integer) 1:
                query__String_4 = (MR_String) "ssh";
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (query__V_30_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (query__V_31_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                query__String_4 = (MR_String) "hhs";
                break;
              case (MR_Integer) 1:
                query__String_4 = (MR_String) "shs";
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (query__V_31_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                query__String_4 = (MR_String) "hss";
                break;
              case (MR_Integer) 1:
                query__String_4 = (MR_String) "sss";
                break;
            }
            break;
        }
        break;
    }
    return query__String_4;
  }
}

static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
  MR_Word query__HeadVar__1_1)
{
  {
    MR_bool query__succeeded;
    MR_String query__HeadVar__2_2;

    switch (query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__HeadVar__2_2 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        query__HeadVar__2_2 = (MR_String) "mi";
        break;
      case (MR_Integer) 2:
        query__HeadVar__2_2 = (MR_String) "th";
        break;
    }
    return query__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;

    if ((strcmp(query__HeadVar__1_1, (MR_String) "ac") == 0))
      {
        *query__HeadVar__2_2 = (MR_Integer) 0;
        query__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(query__HeadVar__1_1, (MR_String) "nc") == 0))
      {
        *query__HeadVar__2_2 = (MR_Integer) 1;
        query__succeeded = MR_TRUE;
      }
    else
      query__succeeded = MR_FALSE;
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
  MR_Word query__Contour_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;

    switch (query__Contour_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__String_4 = (MR_String) "ac";
        break;
      case (MR_Integer) 1:
        query__String_4 = (MR_String) "nc";
        break;
    }
    return query__String_4;
  }
}

static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;

    if ((strcmp(query__HeadVar__1_1, (MR_String) "oa") == 0))
      {
        *query__HeadVar__2_2 = (MR_Integer) 1;
        query__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(query__HeadVar__1_1, (MR_String) "pc") == 0))
      {
        *query__HeadVar__2_2 = (MR_Integer) 0;
        query__succeeded = MR_TRUE;
      }
    else
      query__succeeded = MR_FALSE;
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__scope_to_string_1_f_0(
  MR_Word query__Scope_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;

    switch (query__Scope_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        query__String_4 = (MR_String) "oa";
        break;
      case (MR_Integer) 0:
        query__String_4 = (MR_String) "pc";
        break;
    }
    return query__String_4;
  }
}

static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
  MR_Word query__HeadVar__1_1)
{
  {
    MR_bool query__succeeded;
    MR_String query__HeadVar__2_2;

    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(query__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            query__HeadVar__2_2 = (MR_String) "context";
            break;
          case (MR_Integer) 1:
            query__HeadVar__2_2 = (MR_String) "name";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word query__CostKind_3 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 7);
          MR_Word query__InclDesc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word query__Scope_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_String query__V_7_7;
          MR_String query__V_8_8;
          MR_String query__V_10_10;
          MR_String query__V_11_11;
          MR_String query__V_12_12;
          MR_String query__V_13_13;
          MR_String query__V_15_15;
          MR_String query__V_16_16;
          MR_String query__V_17_17;
          MR_String query__V_18_18;
          MR_String query__V_20_20;

          {
            query__V_8_8 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
          query__V_11_11 = ((&query_vector_common_7[16 + query__CostKind_3]))->query__vector_common_type_7_0__vct_7_f_0;
          {
            query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
          switch (query__InclDesc_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              query__V_16_16 = (MR_String) "self";
              break;
            case (MR_Integer) 1:
              query__V_16_16 = (MR_String) "both";
              break;
          }
          {
            query__V_18_18 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
          switch (query__Scope_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              query__V_20_20 = (MR_String) "oa";
              break;
            case (MR_Integer) 0:
              query__V_20_20 = (MR_String) "pc";
              break;
          }
          {
            query__V_17_17 = mercury__string__f_43_43_2_f_0(query__V_18_18, query__V_20_20);
          }
          {
            query__V_15_15 = mercury__string__f_43_43_2_f_0(query__V_16_16, query__V_17_17);
          }
          {
            query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
          }
          {
            query__V_10_10 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
          }
          {
            query__V_7_7 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_10_10);
          }
          {
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cost", query__V_7_7);
          }
        }
        break;
    }
    return query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
  MR_Word query__HeadVar__1_1)
{
  {
    MR_bool query__succeeded;
    MR_String query__HeadVar__2_2;

    switch (query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__HeadVar__2_2 = (MR_String) "mqa";
        break;
      case (MR_Integer) 2:
        query__HeadVar__2_2 = (MR_String) "mqn";
        break;
      case (MR_Integer) 1:
        query__HeadVar__2_2 = (MR_String) "mqwd";
        break;
    }
    return query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
  MR_Word query__HeadVar__1_1)
{
  {
    MR_bool query__succeeded;
    MR_String query__HeadVar__2_2;

    switch (query__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        query__HeadVar__2_2 = (MR_String) "nosum";
        break;
      case (MR_Integer) 0:
        query__HeadVar__2_2 = (MR_String) "sum";
        break;
    }
    return query__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
  MR_String query__LimitStr_3,
  MR_Word * query__Limit_4)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__First_8;
    MR_Integer query__Last_9;
    MR_Word query__Pieces_5;
    MR_String query__FirstStr_6;
    MR_String query__LastStr_7;
    MR_Word query__V_15_15;
    MR_Word query__V_16_16;

    {
      util__split_3_p_0(query__LimitStr_3, (MR_Char) 45, &query__Pieces_5);
    }
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
    if (query__succeeded)
      {
        query__FirstStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
        query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
        query__succeeded = ((MR_tag((MR_Word) query__V_15_15)) == (MR_mktag((MR_Integer) 1)));
        if (query__succeeded)
          {
            query__LastStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_15_15, (MR_Integer) 0)));
            query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_15_15, (MR_Integer) 1)));
            query__succeeded = (query__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (query__succeeded)
              {
                {
                  query__succeeded = mercury__string__to_int_2_p_0(query__FirstStr_6, &query__First_8);
                }
                if (query__succeeded)
                  {
                    query__succeeded = mercury__string__to_int_2_p_0(query__LastStr_7, &query__Last_9);
                  }
              }
          }
      }
    if (query__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *query__Limit_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (query__First_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (query__Last_9));
        }
        query__succeeded = MR_TRUE;
      }
    else
      {
        MR_Float query__Threshold_11;
        MR_String query__PercentStr_10;

        {
          query__succeeded = mercury__string__append_3_p_1((MR_String) "p", &query__PercentStr_10, query__LimitStr_3);
        }
        if (query__succeeded)
          {
            query__succeeded = mercury__string__to_float_2_p_0(query__PercentStr_10, &query__Threshold_11);
          }
        if (query__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *query__Limit_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(query__Threshold_11);
            }
            query__succeeded = MR_TRUE;
          }
        else
          {
            MR_String query__ValueStr_12;
            MR_Float query__Value_13;

            {
              query__succeeded = mercury__string__append_3_p_1((MR_String) "v", &query__ValueStr_12, query__LimitStr_3);
            }
            if (query__succeeded)
              {
                {
                  query__succeeded = mercury__string__to_float_2_p_0(query__ValueStr_12, &query__Value_13);
                }
                if (query__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *query__Limit_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = MR_box_float(query__Value_13);
                    }
                    query__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__limit_to_string_1_f_0(
  MR_Word query__HeadVar__1_1)
{
  {
    MR_bool query__succeeded;
    MR_String query__HeadVar__2_2;

    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer query__Lo_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer query__Hi_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
          MR_String query__V_42_42;
          MR_Word query__V_48_48 = (MR_Word) &query_scalar_common_2[9];
          MR_String query__V_49_49;
          MR_String query__V_56_56;
          MR_String query__V_57_57;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_48_48, query__Hi_4, &query__V_42_42);
          }
          {
            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_48_48, (MR_Char) 45, &query__V_49_49);
          }
          {
            query__V_56_56 = mercury__string__f_43_43_2_f_0(query__V_49_49, query__V_42_42);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_48_48, query__Lo_3, &query__V_57_57);
          }
          {
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_57_57, query__V_56_56);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float query__Threshold_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
          MR_String query__V_33_33;

          {
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[9], (MR_Integer) 4, query__Threshold_14, &query__V_33_33);
          }
          {
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "p", query__V_33_33);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float query__Value_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
          MR_String query__V_24_24;

          {
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[9], (MR_Integer) 4, query__Value_19, &query__V_24_24);
          }
          {
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "v", query__V_24_24);
          }
        }
        break;
    }
    return query__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;

    if ((strcmp(query__HeadVar__1_1, (MR_String) "both") == 0))
      {
        *query__HeadVar__2_2 = (MR_Integer) 1;
        query__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(query__HeadVar__1_1, (MR_String) "self") == 0))
      {
        *query__HeadVar__2_2 = (MR_Integer) 0;
        query__succeeded = MR_TRUE;
      }
    else
      query__succeeded = MR_FALSE;
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
  MR_Word query__InclDesc_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;

    switch (query__InclDesc_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__String_4 = (MR_String) "self";
        break;
      case (MR_Integer) 1:
        query__String_4 = (MR_String) "both";
        break;
    }
    return query__String_4;
  }
}

static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__lo_0;
    MR_Integer query__hi_1;
    MR_Integer query__mid_2;
    MR_Integer query__result_3;

    /* binary string simple lookup switch */
    query__lo_0 = (MR_Integer) 0;
    query__hi_1 = (MR_Integer) 5;
    do
      {
        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
        query__result_3 = MR_strcmp(query__HeadVar__1_1, ((&query_vector_common_6[6 + query__mid_2]))->query__vector_common_type_6_0__vct_6_f_0);
        if ((query__result_3 == (MR_Integer) 0))
          {
            *query__HeadVar__2_2 = ((&query_vector_common_6[6 + query__mid_2]))->query__vector_common_type_6_0__vct_6_f_1;
            query__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((query__result_3 < (MR_Integer) 0))
          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
        else
          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
      }
    while ((query__lo_0 <= query__hi_1));
    query__succeeded = MR_FALSE;
  label_0:;
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
  MR_Word query__CostKind_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4 = ((&query_vector_common_7[10 + query__CostKind_3]))->query__vector_common_type_7_0__vct_7_f_0;

    return query__String_4;
  }
}

static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
  MR_String query__HeadVar__1_1,
  MR_Word * query__HeadVar__2_2)
{
  {
    MR_bool query__succeeded;
    MR_Integer query__lo_0;
    MR_Integer query__hi_1;
    MR_Integer query__mid_2;
    MR_Integer query__result_3;

    /* binary string simple lookup switch */
    query__lo_0 = (MR_Integer) 0;
    query__hi_1 = (MR_Integer) 3;
    do
      {
        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
        query__result_3 = MR_strcmp(query__HeadVar__1_1, ((&query_vector_common_8[0 + query__mid_2]))->query__vector_common_type_8_0__vct_8_f_0);
        if ((query__result_3 == (MR_Integer) 0))
          {
            *query__HeadVar__2_2 = ((&query_vector_common_8[0 + query__mid_2]))->query__vector_common_type_8_0__vct_8_f_1;
            query__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((query__result_3 < (MR_Integer) 0))
          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
        else
          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
      }
    while ((query__lo_0 <= query__hi_1));
    query__succeeded = MR_FALSE;
  label_0:;
    return query__succeeded;
  }
}

static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
  MR_Word query__CallerGroups_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4 = ((&query_vector_common_7[6 + query__CallerGroups_3]))->query__vector_common_type_7_0__vct_7_f_0;

    return query__String_4;
  }
}

static MR_String MR_CALL 
query__fields_to_string_1_f_0(
  MR_Word query__HeadVar__1_1)
{
  {
    MR_bool query__succeeded;
    MR_String query__HeadVar__2_2;
    MR_Word query__Port_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word query__Time_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
    MR_Word query__CallSeqs_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
    MR_Word query__Allocs_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
    MR_Word query__Memory_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
    MR_String query__V_8_8;
    MR_String query__V_9_9;
    MR_String query__V_10_10;
    MR_String query__V_12_12;
    MR_String query__V_13_13;
    MR_String query__V_14_14;
    MR_String query__V_15_15;
    MR_String query__V_17_17;
    MR_String query__V_18_18;
    MR_String query__V_19_19;
    MR_String query__V_20_20;
    MR_String query__V_22_22;
    MR_String query__V_23_23;
    MR_String query__V_24_24;
    MR_String query__V_25_25;
    MR_String query__V_27_27;

    switch (query__Port_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__V_8_8 = (MR_String) "_";
        break;
      case (MR_Integer) 1:
        query__V_8_8 = (MR_String) "p";
        break;
    }
    {
      query__V_10_10 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
    query__V_13_13 = ((&query_vector_common_7[0 + query__Time_4]))->query__vector_common_type_7_0__vct_7_f_0;
    {
      query__V_15_15 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
    switch (query__CallSeqs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        query__V_18_18 = (MR_String) "s";
        break;
      case (MR_Integer) 2:
        query__V_18_18 = (MR_String) "S";
        break;
      case (MR_Integer) 0:
        query__V_18_18 = (MR_String) "_";
        break;
    }
    {
      query__V_20_20 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
    switch (query__Allocs_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        query__V_23_23 = (MR_String) "a";
        break;
      case (MR_Integer) 2:
        query__V_23_23 = (MR_String) "A";
        break;
      case (MR_Integer) 0:
        query__V_23_23 = (MR_String) "_";
        break;
    }
    {
      query__V_25_25 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
    switch (MR_tag((MR_Word) query__Memory_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        query__V_27_27 = (MR_String) "_";
        break;
      case (MR_Integer) 1:
        {
          MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Memory_7, (MR_Integer) 0)));

          switch (query__V_42_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              query__V_27_27 = (MR_String) "b";
              break;
            case (MR_Integer) 0:
              query__V_27_27 = (MR_String) "w";
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Memory_7, (MR_Integer) 0)));

          switch (query__V_43_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              query__V_27_27 = (MR_String) "B";
              break;
            case (MR_Integer) 0:
              query__V_27_27 = (MR_String) "W";
              break;
          }
        }
        break;
    }
    {
      query__V_24_24 = mercury__string__f_43_43_2_f_0(query__V_25_25, query__V_27_27);
    }
    {
      query__V_22_22 = mercury__string__f_43_43_2_f_0(query__V_23_23, query__V_24_24);
    }
    {
      query__V_19_19 = mercury__string__f_43_43_2_f_0(query__V_20_20, query__V_22_22);
    }
    {
      query__V_17_17 = mercury__string__f_43_43_2_f_0(query__V_18_18, query__V_19_19);
    }
    {
      query__V_14_14 = mercury__string__f_43_43_2_f_0(query__V_15_15, query__V_17_17);
    }
    {
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_14_14);
    }
    {
      query__V_9_9 = mercury__string__f_43_43_2_f_0(query__V_10_10, query__V_12_12);
    }
    {
      query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_9_9);
    }
    return query__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
  MR_Word query__Pref_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__PrefStr_4;
    MR_Word query__Fields_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 0)));
    MR_Word query__Box_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word query__Colour_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word query__MaybeAncestorLimit_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 2)));
    MR_Integer query__ProcStaticsPerRecTypeLimit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 3)));
    MR_Word query__SummarizeHoCallSites_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 4)));
    MR_Word query__Order_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 5)));
    MR_Word query__Contour_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word query__Time_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word query__ModuleQual_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
    MR_Word query__InactiveItems_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 7)));
    MR_Word query__DeveloperMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 8)));
    MR_String query__MaybeAncestorLimitStr_18;
    MR_String query__V_26_26;
    MR_Char query__V_29_29;
    MR_String query__V_32_32;
    MR_Char query__V_35_35;
    MR_String query__V_38_38;
    MR_Char query__V_41_41;
    MR_Char query__V_46_46;
    MR_Char query__V_51_51;
    MR_String query__V_54_54;
    MR_Char query__V_57_57;
    MR_String query__V_60_60;
    MR_Char query__V_63_63;
    MR_String query__V_66_66;
    MR_Char query__V_69_69;
    MR_String query__V_72_72;
    MR_Char query__V_75_75;
    MR_String query__V_78_78;
    MR_Char query__V_81_81;
    MR_String query__V_84_84;
    MR_Char query__V_87_87;
    MR_String query__V_90_90;
    MR_String query__V_98_98;
    MR_Word query__V_104_104;
    MR_String query__V_105_105;
    MR_String query__V_106_106;
    MR_String query__V_107_107;
    MR_String query__V_114_114;
    MR_String query__V_115_115;
    MR_String query__V_116_116;
    MR_String query__V_123_123;
    MR_String query__V_124_124;
    MR_String query__V_125_125;
    MR_String query__V_132_132;
    MR_String query__V_133_133;
    MR_String query__V_134_134;
    MR_String query__V_141_141;
    MR_String query__V_142_142;
    MR_String query__V_143_143;
    MR_String query__V_150_150;
    MR_String query__V_151_151;
    MR_String query__V_152_152;
    MR_String query__V_159_159;
    MR_String query__V_160_160;
    MR_String query__V_167_167;
    MR_String query__V_168_168;
    MR_String query__V_175_175;
    MR_String query__V_176_176;
    MR_String query__V_177_177;
    MR_String query__V_184_184;
    MR_String query__V_185_185;
    MR_String query__V_186_186;
    MR_String query__V_193_193;
    MR_String query__V_194_194;
    MR_String query__V_195_195;
    MR_String query__V_202_202;

    if ((query__MaybeAncestorLimit_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      query__MaybeAncestorLimitStr_18 = (MR_String) "no";
    else
      {
        MR_Integer query__AncestorLimit_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_8, (MR_Integer) 0)));

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[9], query__AncestorLimit_17, &query__MaybeAncestorLimitStr_18);
        }
      }
    {
      query__V_26_26 = query__fields_to_string_1_f_0(query__Fields_5);
    }
    {
      query__V_29_29 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_32_32 = query__box_to_string_1_f_0(query__Box_6);
    }
    {
      query__V_35_35 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_38_38 = query__colour_scheme_to_string_1_f_0(query__Colour_7);
    }
    {
      query__V_41_41 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_46_46 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_51_51 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_54_54 = query__summarize_to_string_1_f_0(query__SummarizeHoCallSites_10);
    }
    {
      query__V_57_57 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_60_60 = query__order_criteria_to_string_1_f_0(query__Order_11);
    }
    {
      query__V_63_63 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_66_66 = query__contour_exclusion_to_string_1_f_0(query__Contour_12);
    }
    {
      query__V_69_69 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_72_72 = query__time_format_to_string_1_f_0(query__Time_13);
    }
    {
      query__V_75_75 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_78_78 = query__module_qual_to_string_1_f_0(query__ModuleQual_14);
    }
    {
      query__V_81_81 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_84_84 = query__inactive_items_to_string_1_f_0(query__InactiveItems_15);
    }
    {
      query__V_87_87 = query__pref_separator_char_0_f_0();
    }
    {
      query__V_90_90 = query__developer_mode_to_string_1_f_0(query__DeveloperMode_16);
    }
    query__V_104_104 = (MR_Word) &query_scalar_common_2[9];
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_87_87, &query__V_98_98);
    }
    {
      query__V_105_105 = mercury__string__f_43_43_2_f_0(query__V_98_98, query__V_90_90);
    }
    {
      query__V_106_106 = mercury__string__f_43_43_2_f_0(query__V_84_84, query__V_105_105);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_81_81, &query__V_107_107);
    }
    {
      query__V_114_114 = mercury__string__f_43_43_2_f_0(query__V_107_107, query__V_106_106);
    }
    {
      query__V_115_115 = mercury__string__f_43_43_2_f_0(query__V_78_78, query__V_114_114);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_75_75, &query__V_116_116);
    }
    {
      query__V_123_123 = mercury__string__f_43_43_2_f_0(query__V_116_116, query__V_115_115);
    }
    {
      query__V_124_124 = mercury__string__f_43_43_2_f_0(query__V_72_72, query__V_123_123);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_69_69, &query__V_125_125);
    }
    {
      query__V_132_132 = mercury__string__f_43_43_2_f_0(query__V_125_125, query__V_124_124);
    }
    {
      query__V_133_133 = mercury__string__f_43_43_2_f_0(query__V_66_66, query__V_132_132);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_63_63, &query__V_134_134);
    }
    {
      query__V_141_141 = mercury__string__f_43_43_2_f_0(query__V_134_134, query__V_133_133);
    }
    {
      query__V_142_142 = mercury__string__f_43_43_2_f_0(query__V_60_60, query__V_141_141);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_57_57, &query__V_143_143);
    }
    {
      query__V_150_150 = mercury__string__f_43_43_2_f_0(query__V_143_143, query__V_142_142);
    }
    {
      query__V_151_151 = mercury__string__f_43_43_2_f_0(query__V_54_54, query__V_150_150);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_51_51, &query__V_152_152);
    }
    {
      query__V_159_159 = mercury__string__f_43_43_2_f_0(query__V_152_152, query__V_151_151);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_104_104, query__ProcStaticsPerRecTypeLimit_9, &query__V_160_160);
    }
    {
      query__V_167_167 = mercury__string__f_43_43_2_f_0(query__V_160_160, query__V_159_159);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_46_46, &query__V_168_168);
    }
    {
      query__V_175_175 = mercury__string__f_43_43_2_f_0(query__V_168_168, query__V_167_167);
    }
    {
      query__V_176_176 = mercury__string__f_43_43_2_f_0(query__MaybeAncestorLimitStr_18, query__V_175_175);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_41_41, &query__V_177_177);
    }
    {
      query__V_184_184 = mercury__string__f_43_43_2_f_0(query__V_177_177, query__V_176_176);
    }
    {
      query__V_185_185 = mercury__string__f_43_43_2_f_0(query__V_38_38, query__V_184_184);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_35_35, &query__V_186_186);
    }
    {
      query__V_193_193 = mercury__string__f_43_43_2_f_0(query__V_186_186, query__V_185_185);
    }
    {
      query__V_194_194 = mercury__string__f_43_43_2_f_0(query__V_32_32, query__V_193_193);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_29_29, &query__V_195_195);
    }
    {
      query__V_202_202 = mercury__string__f_43_43_2_f_0(query__V_195_195, query__V_194_194);
    }
    {
      query__PrefStr_4 = mercury__string__f_43_43_2_f_0(query__V_26_26, query__V_202_202);
    }
    return query__PrefStr_4;
  }
}

static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
  MR_Word query__Cmd_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__CmdStr_4;

    switch (MR_tag((MR_Word) query__Cmd_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(query__Cmd_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              query__CmdStr_4 = query__cmd_str_quit_0_f_0();
            }
            break;
          case (MR_Integer) 1:
            {
              query__CmdStr_4 = query__cmd_str_restart_0_f_0();
            }
            break;
          case (MR_Integer) 2:
            {
              query__CmdStr_4 = query__cmd_str_menu_0_f_0();
            }
            break;
          case (MR_Integer) 3:
            {
              query__CmdStr_4 = query__cmd_str_recursion_types_frequency_0_f_0();
            }
            break;
          case (MR_Integer) 4:
            {
              query__CmdStr_4 = query__cmd_str_program_modules_0_f_0();
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer query__Minutes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__Cmd_3, (MR_Integer) 0)));
          MR_String query__V_242_242;
          MR_Char query__V_245_245;
          MR_String query__V_310_310;
          MR_Word query__V_316_316;
          MR_String query__V_317_317;
          MR_String query__V_324_324;

          {
            query__V_242_242 = query__cmd_str_timeout_0_f_0();
          }
          {
            query__V_245_245 = query__cmd_separator_char_0_f_0();
          }
          query__V_316_316 = (MR_Word) &query_scalar_common_2[9];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_316_316, query__Minutes_5, &query__V_310_310);
          }
          {
            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_316_316, query__V_245_245, &query__V_317_317);
          }
          {
            query__V_324_324 = mercury__string__f_43_43_2_f_0(query__V_317_317, query__V_310_310);
          }
          {
            query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_242_242, query__V_324_324);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word query__MaybePercent_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Cmd_3, (MR_Integer) 0)));

          if ((query__MaybePercent_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String query__V_221_221;
              MR_Char query__V_224_224;
              MR_String query__V_355_355;
              MR_String query__V_362_362;

              {
                query__V_221_221 = query__cmd_str_root_0_f_0();
              }
              {
                query__V_224_224 = query__cmd_separator_char_0_f_0();
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) &query_scalar_common_2[9], query__V_224_224, &query__V_355_355);
              }
              {
                query__V_362_362 = mercury__string__f_43_43_2_f_0(query__V_355_355, (MR_String) "no");
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_221_221, query__V_362_362);
              }
            }
          else
            {
              MR_Integer query__Percent_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybePercent_6, (MR_Integer) 0)));
              MR_String query__V_232_232;
              MR_Char query__V_235_235;
              MR_String query__V_340_340;
              MR_Word query__V_346_346;
              MR_String query__V_347_347;
              MR_String query__V_354_354;

              {
                query__V_232_232 = query__cmd_str_root_0_f_0();
              }
              {
                query__V_235_235 = query__cmd_separator_char_0_f_0();
              }
              query__V_346_346 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_346_346, query__Percent_7, &query__V_340_340);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_346_346, query__V_235_235, &query__V_347_347);
              }
              {
                query__V_354_354 = mercury__string__f_43_43_2_f_0(query__V_347_347, query__V_340_340);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_232_232, query__V_354_354);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word query__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_String query__Name_9;
              MR_Integer query__CliqueNum_10;
              MR_Char query__V_214_214;
              MR_String query__V_572_572;
              MR_Word query__V_578_578;
              MR_String query__V_579_579;
              MR_String query__V_586_586;

              {
                query__Name_9 = query__cmd_str_clique_0_f_0();
              }
              query__CliqueNum_10 = (MR_Integer) query__CliquePtr_8;
              {
                query__V_214_214 = query__cmd_separator_char_0_f_0();
              }
              query__V_578_578 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_578_578, query__CliqueNum_10, &query__V_572_572);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_578_578, query__V_214_214, &query__V_579_579);
              }
              {
                query__V_586_586 = mercury__string__f_43_43_2_f_0(query__V_579_579, query__V_572_572);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__Name_9, query__V_586_586);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word query__CliquePtr_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_String query__Name_264;
              MR_Integer query__CliqueNum_265;
              MR_Char query__V_271_271;
              MR_String query__V_557_557;
              MR_Word query__V_563_563;
              MR_String query__V_564_564;
              MR_String query__V_571_571;

              {
                query__Name_264 = query__cmd_str_clique_recursive_costs_0_f_0();
              }
              query__CliqueNum_265 = (MR_Integer) query__CliquePtr_263;
              {
                query__V_271_271 = query__cmd_separator_char_0_f_0();
              }
              query__V_563_563 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_563_563, query__CliqueNum_265, &query__V_557_557);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_563_563, query__V_271_271, &query__V_564_564);
              }
              {
                query__V_571_571 = mercury__string__f_43_43_2_f_0(query__V_564_564, query__V_557_557);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__Name_264, query__V_571_571);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word query__PSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__PSI_12 = (MR_Integer) query__PSPtr_11;
              MR_String query__V_202_202;
              MR_Char query__V_205_205;
              MR_String query__V_428_428;
              MR_Word query__V_434_434;
              MR_String query__V_435_435;
              MR_String query__V_442_442;

              {
                query__V_202_202 = query__cmd_str_proc_0_f_0();
              }
              {
                query__V_205_205 = query__cmd_separator_char_0_f_0();
              }
              query__V_434_434 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_434_434, query__PSI_12, &query__V_428_428);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_434_434, query__V_205_205, &query__V_435_435);
              }
              {
                query__V_442_442 = mercury__string__f_43_43_2_f_0(query__V_435_435, query__V_428_428);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_202_202, query__V_442_442);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word query__GroupCallers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)));
              MR_Integer query__BunchNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 3)));
              MR_Integer query__CallersPerBunch_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 4)));
              MR_Word query__Contour_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 5)));
              MR_String query__GroupCallersStr_17;
              MR_String query__ContourStr_18;
              MR_String query__V_172_172;
              MR_Char query__V_175_175;
              MR_Char query__V_180_180;
              MR_Char query__V_185_185;
              MR_Char query__V_190_190;
              MR_Char query__V_195_195;
              MR_Word query__PSPtr_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__PSI_250 = (MR_Integer) query__PSPtr_249;
              MR_String query__V_363_363;
              MR_Word query__V_369_369;
              MR_String query__V_370_370;
              MR_String query__V_371_371;
              MR_String query__V_378_378;
              MR_String query__V_379_379;
              MR_String query__V_386_386;
              MR_String query__V_387_387;
              MR_String query__V_394_394;
              MR_String query__V_395_395;
              MR_String query__V_402_402;
              MR_String query__V_403_403;
              MR_String query__V_404_404;
              MR_String query__V_411_411;
              MR_String query__V_412_412;
              MR_String query__V_419_419;
              MR_String query__V_420_420;
              MR_String query__V_427_427;

              {
                query__GroupCallersStr_17 = query__caller_groups_to_string_1_f_0(query__GroupCallers_13);
              }
              {
                query__ContourStr_18 = query__contour_exclusion_to_string_1_f_0(query__Contour_16);
              }
              {
                query__V_172_172 = query__cmd_str_proc_callers_0_f_0();
              }
              {
                query__V_175_175 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_180_180 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_185_185 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_190_190 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_195_195 = query__cmd_separator_char_0_f_0();
              }
              query__V_369_369 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_369_369, query__V_195_195, &query__V_363_363);
              }
              {
                query__V_370_370 = mercury__string__f_43_43_2_f_0(query__V_363_363, query__ContourStr_18);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_369_369, query__CallersPerBunch_15, &query__V_371_371);
              }
              {
                query__V_378_378 = mercury__string__f_43_43_2_f_0(query__V_371_371, query__V_370_370);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_369_369, query__V_190_190, &query__V_379_379);
              }
              {
                query__V_386_386 = mercury__string__f_43_43_2_f_0(query__V_379_379, query__V_378_378);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_369_369, query__BunchNum_14, &query__V_387_387);
              }
              {
                query__V_394_394 = mercury__string__f_43_43_2_f_0(query__V_387_387, query__V_386_386);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_369_369, query__V_185_185, &query__V_395_395);
              }
              {
                query__V_402_402 = mercury__string__f_43_43_2_f_0(query__V_395_395, query__V_394_394);
              }
              {
                query__V_403_403 = mercury__string__f_43_43_2_f_0(query__GroupCallersStr_17, query__V_402_402);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_369_369, query__V_180_180, &query__V_404_404);
              }
              {
                query__V_411_411 = mercury__string__f_43_43_2_f_0(query__V_404_404, query__V_403_403);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_369_369, query__PSI_250, &query__V_412_412);
              }
              {
                query__V_419_419 = mercury__string__f_43_43_2_f_0(query__V_412_412, query__V_411_411);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_369_369, query__V_175_175, &query__V_420_420);
              }
              {
                query__V_427_427 = mercury__string__f_43_43_2_f_0(query__V_420_420, query__V_419_419);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_172_172, query__V_427_427);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String query__ModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_String query__V_162_162;
              MR_Char query__V_165_165;
              MR_String query__V_459_459;
              MR_String query__V_466_466;

              {
                query__V_162_162 = query__cmd_str_module_0_f_0();
              }
              {
                query__V_165_165 = query__cmd_separator_char_0_f_0();
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) &query_scalar_common_2[9], query__V_165_165, &query__V_459_459);
              }
              {
                query__V_466_466 = mercury__string__f_43_43_2_f_0(query__V_459_459, query__ModuleName_19);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_162_162, query__V_466_466);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String query__V_152_152;
              MR_Char query__V_155_155;
              MR_String query__ModuleName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_String query__V_451_451;
              MR_String query__V_458_458;

              {
                query__V_152_152 = query__cmd_str_module_getter_setters_0_f_0();
              }
              {
                query__V_155_155 = query__cmd_separator_char_0_f_0();
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) &query_scalar_common_2[9], query__V_155_155, &query__V_451_451);
              }
              {
                query__V_458_458 = mercury__string__f_43_43_2_f_0(query__V_451_451, query__ModuleName_251);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_152_152, query__V_458_458);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String query__V_142_142;
              MR_Char query__V_145_145;
              MR_String query__ModuleName_252 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_String query__V_443_443;
              MR_String query__V_450_450;

              {
                query__V_142_142 = query__cmd_str_module_rep_0_f_0();
              }
              {
                query__V_145_145 = query__cmd_separator_char_0_f_0();
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) &query_scalar_common_2[9], query__V_145_145, &query__V_443_443);
              }
              {
                query__V_450_450 = mercury__string__f_43_43_2_f_0(query__V_443_443, query__ModuleName_252);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_142_142, query__V_450_450);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word query__Limit_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Word query__CostKind_21 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word query__InclDesc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word query__Scope_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_String query__LimitStr_24;
              MR_String query__CostKindStr_25;
              MR_String query__InclDescStr_26;
              MR_String query__ScopeStr_27;
              MR_String query__V_117_117;
              MR_Char query__V_120_120;
              MR_Char query__V_125_125;
              MR_Char query__V_130_130;
              MR_Char query__V_135_135;
              MR_String query__V_275_275;
              MR_Word query__V_281_281;
              MR_String query__V_282_282;
              MR_String query__V_283_283;
              MR_String query__V_284_284;
              MR_String query__V_291_291;
              MR_String query__V_292_292;
              MR_String query__V_293_293;
              MR_String query__V_300_300;
              MR_String query__V_301_301;
              MR_String query__V_302_302;
              MR_String query__V_309_309;

              {
                query__LimitStr_24 = query__limit_to_string_1_f_0(query__Limit_20);
              }
              {
                query__CostKindStr_25 = query__cost_kind_to_string_1_f_0(query__CostKind_21);
              }
              {
                query__InclDescStr_26 = query__incl_desc_to_string_1_f_0(query__InclDesc_22);
              }
              {
                query__ScopeStr_27 = query__scope_to_string_1_f_0(query__Scope_23);
              }
              {
                query__V_117_117 = query__cmd_str_top_procs_0_f_0();
              }
              {
                query__V_120_120 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_125_125 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_130_130 = query__cmd_separator_char_0_f_0();
              }
              {
                query__V_135_135 = query__cmd_separator_char_0_f_0();
              }
              query__V_281_281 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_135_135, &query__V_275_275);
              }
              {
                query__V_282_282 = mercury__string__f_43_43_2_f_0(query__V_275_275, query__ScopeStr_27);
              }
              {
                query__V_283_283 = mercury__string__f_43_43_2_f_0(query__InclDescStr_26, query__V_282_282);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_130_130, &query__V_284_284);
              }
              {
                query__V_291_291 = mercury__string__f_43_43_2_f_0(query__V_284_284, query__V_283_283);
              }
              {
                query__V_292_292 = mercury__string__f_43_43_2_f_0(query__CostKindStr_25, query__V_291_291);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_125_125, &query__V_293_293);
              }
              {
                query__V_300_300 = mercury__string__f_43_43_2_f_0(query__V_293_293, query__V_292_292);
              }
              {
                query__V_301_301 = mercury__string__f_43_43_2_f_0(query__LimitStr_24, query__V_300_300);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_120_120, &query__V_302_302);
              }
              {
                query__V_309_309 = mercury__string__f_43_43_2_f_0(query__V_302_302, query__V_301_301);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_117_117, query__V_309_309);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String query__V_107_107;
              MR_Char query__V_110_110;
              MR_Word query__PSPtr_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__PSI_254 = (MR_Integer) query__PSPtr_253;
              MR_String query__V_325_325;
              MR_Word query__V_331_331;
              MR_String query__V_332_332;
              MR_String query__V_339_339;

              {
                query__V_107_107 = query__cmd_str_static_coverage_0_f_0();
              }
              {
                query__V_110_110 = query__cmd_separator_char_0_f_0();
              }
              query__V_331_331 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_331_331, query__PSI_254, &query__V_325_325);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_331_331, query__V_110_110, &query__V_332_332);
              }
              {
                query__V_339_339 = mercury__string__f_43_43_2_f_0(query__V_332_332, query__V_325_325);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_107_107, query__V_339_339);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word query__PDPtr_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__PDI_29 = (MR_Integer) query__PDPtr_28;
              MR_String query__V_97_97;
              MR_Char query__V_100_100;
              MR_String query__V_467_467;
              MR_Word query__V_473_473;
              MR_String query__V_474_474;
              MR_String query__V_481_481;

              {
                query__V_97_97 = query__cmd_str_dynamic_coverage_0_f_0();
              }
              {
                query__V_100_100 = query__cmd_separator_char_0_f_0();
              }
              query__V_473_473 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_473_473, query__PDI_29, &query__V_467_467);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_473_473, query__V_100_100, &query__V_474_474);
              }
              {
                query__V_481_481 = mercury__string__f_43_43_2_f_0(query__V_474_474, query__V_467_467);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_97_97, query__V_481_481);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String query__V_87_87;
              MR_Char query__V_90_90;
              MR_Word query__PSPtr_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__PSI_256 = (MR_Integer) query__PSPtr_255;
              MR_String query__V_482_482;
              MR_Word query__V_488_488;
              MR_String query__V_489_489;
              MR_String query__V_496_496;

              {
                query__V_87_87 = query__cmd_str_dump_proc_static_0_f_0();
              }
              {
                query__V_90_90 = query__cmd_separator_char_0_f_0();
              }
              query__V_488_488 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_488_488, query__PSI_256, &query__V_482_482);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_488_488, query__V_90_90, &query__V_489_489);
              }
              {
                query__V_496_496 = mercury__string__f_43_43_2_f_0(query__V_489_489, query__V_482_482);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_87_87, query__V_496_496);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String query__V_77_77;
              MR_Char query__V_80_80;
              MR_Word query__PDPtr_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__PDI_258 = (MR_Integer) query__PDPtr_257;
              MR_String query__V_497_497;
              MR_Word query__V_503_503;
              MR_String query__V_504_504;
              MR_String query__V_511_511;

              {
                query__V_77_77 = query__cmd_str_dump_proc_dynamic_0_f_0();
              }
              {
                query__V_80_80 = query__cmd_separator_char_0_f_0();
              }
              query__V_503_503 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_503_503, query__PDI_258, &query__V_497_497);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_503_503, query__V_80_80, &query__V_504_504);
              }
              {
                query__V_511_511 = mercury__string__f_43_43_2_f_0(query__V_504_504, query__V_497_497);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_77_77, query__V_511_511);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word query__CSSPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__CSSI_31 = (MR_Integer) query__CSSPtr_30;
              MR_String query__V_67_67;
              MR_Char query__V_70_70;
              MR_String query__V_527_527;
              MR_Word query__V_533_533;
              MR_String query__V_534_534;
              MR_String query__V_541_541;

              {
                query__V_67_67 = query__cmd_str_dump_call_site_static_0_f_0();
              }
              {
                query__V_70_70 = query__cmd_separator_char_0_f_0();
              }
              query__V_533_533 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_533_533, query__CSSI_31, &query__V_527_527);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_533_533, query__V_70_70, &query__V_534_534);
              }
              {
                query__V_541_541 = mercury__string__f_43_43_2_f_0(query__V_534_534, query__V_527_527);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_67_67, query__V_541_541);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word query__CSDPtr_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__CSDI_33 = (MR_Integer) query__CSDPtr_32;
              MR_String query__V_57_57;
              MR_Char query__V_60_60;
              MR_String query__V_542_542;
              MR_Word query__V_548_548;
              MR_String query__V_549_549;
              MR_String query__V_556_556;

              {
                query__V_57_57 = query__cmd_str_dump_call_site_dynamic_0_f_0();
              }
              {
                query__V_60_60 = query__cmd_separator_char_0_f_0();
              }
              query__V_548_548 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_548_548, query__CSDI_33, &query__V_542_542);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_548_548, query__V_60_60, &query__V_549_549);
              }
              {
                query__V_556_556 = mercury__string__f_43_43_2_f_0(query__V_549_549, query__V_542_542);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_57_57, query__V_556_556);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String query__V_47_47;
              MR_Char query__V_50_50;
              MR_Word query__CliquePtr_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__CliqueNum_260 = (MR_Integer) query__CliquePtr_259;
              MR_String query__V_512_512;
              MR_Word query__V_518_518;
              MR_String query__V_519_519;
              MR_String query__V_526_526;

              {
                query__V_47_47 = query__cmd_str_dump_raw_clique_0_f_0();
              }
              {
                query__V_50_50 = query__cmd_separator_char_0_f_0();
              }
              query__V_518_518 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_518_518, query__CliqueNum_260, &query__V_512_512);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_518_518, query__V_50_50, &query__V_519_519);
              }
              {
                query__V_526_526 = mercury__string__f_43_43_2_f_0(query__V_519_519, query__V_512_512);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_47_47, query__V_526_526);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String query__V_37_37;
              MR_Char query__V_40_40;
              MR_Word query__CSDPtr_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
              MR_Integer query__CSDI_262 = (MR_Integer) query__CSDPtr_261;
              MR_String query__V_587_587;
              MR_Word query__V_593_593;
              MR_String query__V_594_594;
              MR_String query__V_601_601;

              {
                query__V_37_37 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
              }
              {
                query__V_40_40 = query__cmd_separator_char_0_f_0();
              }
              query__V_593_593 = (MR_Word) &query_scalar_common_2[9];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_593_593, query__CSDI_262, &query__V_587_587);
              }
              {
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_593_593, query__V_40_40, &query__V_594_594);
              }
              {
                query__V_601_601 = mercury__string__f_43_43_2_f_0(query__V_594_594, query__V_587_587);
              }
              {
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_37_37, query__V_601_601);
              }
            }
            break;
        }
        break;
    }
    return query__CmdStr_4;
  }
}

static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Char) 47;
  }
}

static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Char) 47;
  }
}

static void MR_CALL 
query__create_and_memoize_report_3_p_0(
  MR_Word query__Cmd_4,
  MR_Word query__Deep_5,
  MR_Word * query__Report_6)
{
  {
    MR_bool query__succeeded;
    MR_Box query__CallTableTipVar_10;
    MR_Word query__Status_11;

{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo0;
	MR_Word arg0;
	MR_Word input_typeinfo1;
	MR_Word arg1;

	proc_table_info = (MR_ProcTableInfoPtr) (MR_Box) &query__table_info_for_create_and_memoize_report_3_p_0 ;
	input_typeinfo0 =  (MR_Word) &query__query__type_ctor_info_cmd_0 ;
	arg0 =  query__Cmd_4 ;
	input_typeinfo1 =  (MR_Word) &profile__profile__type_ctor_info_deep_0 ;
	arg1 =  query__Deep_5 ;
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
	 query__CallTableTipVar_10  = (MR_Box) CallTableTipVar;
	 query__Status_11  = status;
}
    switch (query__Status_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred query.create_and_memoize_report/3");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            create_report__create_report_3_p_0(query__Cmd_4, query__Deep_5, query__Report_6);
          }
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) query__CallTableTipVar_10 ;
	arg0 = (MR_Word) ((MR_Box) (*query__Report_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &report__report__type_ctor_info_deep_report_0 ;
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
          MR_Box query__conv0_restore_arg0;

{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) query__CallTableTipVar_10 ;
		{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);


		;}
#undef MR_PROC_LABEL
	 query__conv0_restore_arg0  = (MR_Box) restore_arg0;
          *query__Report_6 = ((MR_Word) query__conv0_restore_arg0);
}
        }
        break;
    }
  }
}

static void MR_CALL 
query__exec_4_p_0(
  MR_Word query__Cmd_5,
  MR_Word query__Prefs_6,
  MR_Word query__Deep_7,
  MR_String * query__HTMLStr_8)
{
  {
    MR_bool query__succeeded = (query__Cmd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    MR_Word query__Report_9;
    MR_Word query__Display_10;
    MR_Word query__HTML_11;

    if (query__succeeded)
      {
        query__create_and_memoize_report_3_p_0(query__Cmd_5, query__Deep_7, &query__Report_9);
      }
    else
      {
        create_report__create_report_3_p_0(query__Cmd_5, query__Deep_7, &query__Report_9);
      }
    {
      query__Display_10 = display_report__report_to_display_3_f_0(query__Deep_7, query__Prefs_6, query__Report_9);
    }
    {
      query__HTML_11 = html_format__htmlize_display_3_f_0(query__Deep_7, query__Prefs_6, query__Display_10);
    }
    {
      *query__HTMLStr_8 = html_format__html_to_string_1_f_0(query__HTML_11);
    }
  }
}

MR_Word MR_CALL 
query__default_developer_mode_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 1;
  }
}

MR_Word MR_CALL 
query__default_inactive_items_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Word) &query_scalar_common_2[8];
  }
}

MR_Word MR_CALL 
query__default_module_qual_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 1;
  }
}

MR_Word MR_CALL 
query__default_time_format_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 2;
  }
}

MR_Word MR_CALL 
query__default_contour_exclusion_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 1;
  }
}

MR_Word MR_CALL 
query__default_scope_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 1;
  }
}

MR_Word MR_CALL 
query__default_incl_desc_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 1;
  }
}

MR_Word MR_CALL 
query__default_cost_kind_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 3;
  }
}

MR_Word MR_CALL 
query__default_order_criteria_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
query__default_summarize_ho_call_sites_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 1;
  }
}

MR_Integer MR_CALL 
query__default_proc_statics_per_rec_type_limit_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 20;
  }
}

MR_Word MR_CALL 
query__default_ancestor_limit_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[7]);
  }
}

MR_Word MR_CALL 
query__default_colour_column_groups_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
query__default_box_tables_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
query__all_fields_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Word) &query_scalar_common_1[3];
  }
}

MR_Word MR_CALL 
query__default_fields_1_f_0(
  MR_Word query__Deep_3)
{
  {
    MR_bool query__succeeded;
    MR_Word query__Fields_4;
    MR_Word query__Time_6;
    MR_Integer query__UserQuanta_14;
    MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
    MR_String query__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
    MR_String query__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
    MR_String query__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
    MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr query__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr query__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr query__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr query__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr query__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr query__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr query__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr query__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr query__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
    MR_Word query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
    MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
    MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
    MR_Word query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
    MR_String query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 0)));
    MR_Integer query__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 1)));
    MR_Integer query__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 2)));
    MR_Integer query__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 3)));
    MR_Integer query__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 4)));
    MR_Integer query__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 5)));
    MR_Integer query__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 6)));
    MR_Integer query__V_52_52;
    MR_Word query__V_53_53;

    query__UserQuanta_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 7)));
    query__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 8)));
    query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 9)));
    query__succeeded = (query__UserQuanta_14 > (MR_Integer) 10);
    if (query__succeeded)
      query__Time_6 = (MR_Integer) 1;
    else
      query__Time_6 = (MR_Integer) 0;
    {
      query__Fields_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), query__Fields_4, 0) = ((MR_Box) (((MR_Integer) 1 | ((((query__Time_6 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))));
      MR_hl_field(MR_mktag(0), query__Fields_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[0])));
    }
    return query__Fields_4;
  }
}

MR_Word MR_CALL 
query__default_preferences_1_f_0(
  MR_Word query__Deep_3)
{
  {
    MR_bool query__succeeded;
    MR_Word query__HeadVar__2_2;
    MR_Word query__V_4_4;

    {
      query__V_4_4 = query__default_fields_1_f_0(query__Deep_3);
    }
    {
      query__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 0) = ((MR_Box) (query__V_4_4));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[7])));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 20));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 6) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 2 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 7) = ((MR_Box) (&query_scalar_common_2[8]));
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 8) = ((MR_Box) ((MR_Integer) 1));
    }
    return query__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
query__solidify_preference_2_f_0(
  MR_Word query__Deep_4,
  MR_Word query__PrefInd_5)
{
  {
    MR_bool query__succeeded;
    MR_Word query__Pref_6;

    switch (MR_tag((MR_Word) query__PrefInd_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(query__PrefInd_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              query__Pref_6 = query__default_preferences_1_f_0(query__Deep_4);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word query__V_7_7;
              MR_Word query__V_10_10;
              MR_Word query__V_11_11;
              MR_Word query__V_12_12;
              MR_Integer query__V_13_13;
              MR_Word query__V_14_14;
              MR_Word query__V_15_15;
              MR_Word query__V_16_16;
              MR_Word query__V_17_17;
              MR_Word query__V_18_18;
              MR_Word query__V_19_19;
              MR_Word query__V_20_20;
              MR_Word query__V_9_9;

              {
                query__V_7_7 = query__default_preferences_1_f_0(query__Deep_4);
              }
              query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 0)));
              query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 2)));
              query__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 3)));
              query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 4)));
              query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 5)));
              query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) & (MR_Integer) 1);
              query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
              query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 7)));
              query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 8)));
              {
                query__Pref_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), query__Pref_6, 0) = ((MR_Box) (&query_scalar_common_1[3]));
                MR_hl_field(MR_mktag(0), query__Pref_6, 1) = ((MR_Box) ((query__V_10_10 | ((query__V_11_11 << (MR_Integer) 1)))));
                MR_hl_field(MR_mktag(0), query__Pref_6, 2) = ((MR_Box) (query__V_12_12));
                MR_hl_field(MR_mktag(0), query__Pref_6, 3) = ((MR_Box) (query__V_13_13));
                MR_hl_field(MR_mktag(0), query__Pref_6, 4) = ((MR_Box) (query__V_14_14));
                MR_hl_field(MR_mktag(0), query__Pref_6, 5) = ((MR_Box) (query__V_15_15));
                MR_hl_field(MR_mktag(0), query__Pref_6, 6) = ((MR_Box) ((query__V_16_16 | ((((query__V_17_17 << (MR_Integer) 1)) | ((query__V_18_18 << (MR_Integer) 3)))))));
                MR_hl_field(MR_mktag(0), query__Pref_6, 7) = ((MR_Box) (query__V_19_19));
                MR_hl_field(MR_mktag(0), query__Pref_6, 8) = ((MR_Box) (query__V_20_20));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        query__Pref_6 = (MR_Word) MR_body(((MR_Word) query__PrefInd_5), (MR_Integer) 1);
        break;
    }
    return query__Pref_6;
  }
}

MR_Word MR_CALL 
query__default_command_0_f_0(void)
{
  {
    MR_bool query__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
  }
}

MR_Word MR_CALL 
query__should_display_times_1_f_0(
  MR_Word query__Deep_3)
{
  {
    MR_bool query__succeeded;
    MR_Word query__ShouldDisplayTimes_4;
    MR_Integer query__UserQuanta_5;
    MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
    MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
    MR_String query__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
    MR_String query__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
    MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr query__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr query__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr query__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr query__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr query__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr query__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr query__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr query__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
    MR_Word query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
    MR_Word query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
    MR_Word query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
    MR_Word query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
    MR_String query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 0)));
    MR_Integer query__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 1)));
    MR_Integer query__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 2)));
    MR_Integer query__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 3)));
    MR_Integer query__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 4)));
    MR_Integer query__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 5)));
    MR_Integer query__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 6)));
    MR_Integer query__V_43_43;
    MR_Word query__V_44_44;

    query__UserQuanta_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 7)));
    query__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 8)));
    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 9)));
    query__succeeded = (query__UserQuanta_5 > (MR_Integer) 10);
    if (query__succeeded)
      query__ShouldDisplayTimes_4 = (MR_Integer) 1;
    else
      query__ShouldDisplayTimes_4 = (MR_Integer) 0;
    return query__ShouldDisplayTimes_4;
  }
}

MR_Word MR_CALL 
query__string_to_maybe_pref_1_f_0(
  MR_String query__QueryString_3)
{
  {
    MR_bool query__succeeded;
    MR_Word query__MaybePreferences_4;
    MR_Word query__Pieces_5;
    MR_Word query__Fields_18;
    MR_Word query__Box_19;
    MR_Word query__Colour_20;
    MR_Word query__MaybeAncestorLimit_22;
    MR_Integer query__ProcStaticsPerRecTypeLimit_23;
    MR_Word query__SummarizeHoCallSites_24;
    MR_Word query__Order_25;
    MR_Word query__Contour_26;
    MR_Word query__Time_27;
    MR_Word query__ModuleQual_28;
    MR_Word query__InactiveItems_29;
    MR_Word query__DeveloperMode_30;
    MR_String query__FieldsStr_6;
    MR_String query__BoxStr_7;
    MR_String query__ColourStr_8;
    MR_String query__MaybeAncestorLimitStr_9;
    MR_String query__ProcStaticsPerRecTypeLimitStr_10;
    MR_String query__SummarizeHoCallSitesStr_11;
    MR_String query__OrderStr_12;
    MR_String query__ContourStr_13;
    MR_String query__TimeStr_14;
    MR_String query__ModuleQualStr_15;
    MR_String query__InactiveItemsStr_16;
    MR_String query__DeveloperModeStr_17;
    MR_Word query__V_33_33;
    MR_Word query__V_34_34;
    MR_Word query__V_35_35;
    MR_Word query__V_36_36;
    MR_Word query__V_37_37;
    MR_Word query__V_38_38;
    MR_Word query__V_39_39;
    MR_Word query__V_40_40;
    MR_Word query__V_41_41;
    MR_Word query__V_42_42;
    MR_Word query__V_43_43;
    MR_Word query__V_44_44;
    MR_Word query__Pieces_47;
    MR_String query__PortStr_48;
    MR_String query__TimeStr_49;
    MR_String query__CallSeqsStr_50;
    MR_String query__AllocStr_51;
    MR_String query__MemoryStr_52;
    MR_Word query__Port_53;
    MR_Word query__Time_54;
    MR_Word query__CallSeqs_55;
    MR_Word query__Alloc_56;
    MR_Word query__Memory_57;
    MR_Char query__V_58_58;
    MR_Word query__V_59_59;
    MR_Word query__V_60_60;
    MR_Word query__V_61_61;
    MR_Word query__V_62_62;
    MR_Word query__V_63_63;
    MR_Integer query__lo_0;
    MR_Integer query__hi_1;
    MR_Integer query__mid_2;
    MR_Integer query__result_3;
    MR_Integer query__lo_4;
    MR_Integer query__hi_5;
    MR_Integer query__mid_6;
    MR_Integer query__result_7;
    MR_Integer query__AncestorLimit_21;

    {
      util__split_3_p_0(query__QueryString_3, (MR_Char) 47, &query__Pieces_5);
    }
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
    if (query__succeeded)
      {
        query__FieldsStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
        query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
        query__succeeded = ((MR_tag((MR_Word) query__V_33_33)) == (MR_mktag((MR_Integer) 1)));
        if (query__succeeded)
          {
            query__BoxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 0)));
            query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 1)));
            query__succeeded = ((MR_tag((MR_Word) query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__ColourStr_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 0)));
                query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 1)));
                query__succeeded = ((MR_tag((MR_Word) query__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                if (query__succeeded)
                  {
                    query__MaybeAncestorLimitStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 0)));
                    query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 1)));
                    query__succeeded = ((MR_tag((MR_Word) query__V_36_36)) == (MR_mktag((MR_Integer) 1)));
                    if (query__succeeded)
                      {
                        query__ProcStaticsPerRecTypeLimitStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 0)));
                        query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 1)));
                        query__succeeded = ((MR_tag((MR_Word) query__V_37_37)) == (MR_mktag((MR_Integer) 1)));
                        if (query__succeeded)
                          {
                            query__SummarizeHoCallSitesStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 0)));
                            query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 1)));
                            query__succeeded = ((MR_tag((MR_Word) query__V_38_38)) == (MR_mktag((MR_Integer) 1)));
                            if (query__succeeded)
                              {
                                query__OrderStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 0)));
                                query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 1)));
                                query__succeeded = ((MR_tag((MR_Word) query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                                if (query__succeeded)
                                  {
                                    query__ContourStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 0)));
                                    query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 1)));
                                    query__succeeded = ((MR_tag((MR_Word) query__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                                    if (query__succeeded)
                                      {
                                        query__TimeStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 0)));
                                        query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 1)));
                                        query__succeeded = ((MR_tag((MR_Word) query__V_41_41)) == (MR_mktag((MR_Integer) 1)));
                                        if (query__succeeded)
                                          {
                                            query__ModuleQualStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 0)));
                                            query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 1)));
                                            query__succeeded = ((MR_tag((MR_Word) query__V_42_42)) == (MR_mktag((MR_Integer) 1)));
                                            if (query__succeeded)
                                              {
                                                query__InactiveItemsStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 0)));
                                                query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 1)));
                                                query__succeeded = ((MR_tag((MR_Word) query__V_43_43)) == (MR_mktag((MR_Integer) 1)));
                                                if (query__succeeded)
                                                  {
                                                    query__DeveloperModeStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 0)));
                                                    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 1)));
                                                    query__succeeded = (query__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (query__succeeded)
                                                      {
                                                        query__V_58_58 = (MR_Char) 45;
                                                        {
                                                          util__split_3_p_0(query__FieldsStr_6, query__V_58_58, &query__Pieces_47);
                                                        }
                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_47)) == (MR_mktag((MR_Integer) 1)));
                                                        if (query__succeeded)
                                                          {
                                                            query__PortStr_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_47, (MR_Integer) 0)));
                                                            query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_47, (MR_Integer) 1)));
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_59_59)) == (MR_mktag((MR_Integer) 1)));
                                                            if (query__succeeded)
                                                              {
                                                                query__TimeStr_49 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_59_59, (MR_Integer) 0)));
                                                                query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_59_59, (MR_Integer) 1)));
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
                                                                if (query__succeeded)
                                                                  {
                                                                    query__CallSeqsStr_50 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
                                                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
                                                                    if (query__succeeded)
                                                                      {
                                                                        query__AllocStr_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
                                                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
                                                                        if (query__succeeded)
                                                                          {
                                                                            query__MemoryStr_52 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
                                                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
                                                                            query__succeeded = (query__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                            if (query__succeeded)
                                                                              {
                                                                                if ((strcmp(query__PortStr_48, (MR_String) "_") == 0))
                                                                                  {
                                                                                    query__Port_53 = (MR_Integer) 0;
                                                                                    query__succeeded = MR_TRUE;
                                                                                  }
                                                                                else
                                                                                if ((strcmp(query__PortStr_48, (MR_String) "p") == 0))
                                                                                  {
                                                                                    query__Port_53 = (MR_Integer) 1;
                                                                                    query__succeeded = MR_TRUE;
                                                                                  }
                                                                                else
                                                                                  query__succeeded = MR_FALSE;
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    /* binary string simple lookup switch */
                                                                                    query__lo_0 = (MR_Integer) 0;
                                                                                    query__hi_1 = (MR_Integer) 5;
                                                                                    do
                                                                                      {
                                                                                        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
                                                                                        query__result_3 = MR_strcmp(query__TimeStr_49, ((&query_vector_common_4[0 + query__mid_2]))->query__vector_common_type_4_0__vct_4_f_0);
                                                                                        if ((query__result_3 == (MR_Integer) 0))
                                                                                          {
                                                                                            query__Time_54 = ((&query_vector_common_4[0 + query__mid_2]))->query__vector_common_type_4_0__vct_4_f_1;
                                                                                            query__succeeded = MR_TRUE;
                                                                                            /* jump out of search loop */
                                                                                            goto label_0;
                                                                                          }
                                                                                        else
                                                                                        if ((query__result_3 < (MR_Integer) 0))
                                                                                          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
                                                                                        else
                                                                                          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
                                                                                      }
                                                                                    while ((query__lo_0 <= query__hi_1));
                                                                                    query__succeeded = MR_FALSE;
                                                                                  label_0:;
                                                                                    if (query__succeeded)
                                                                                      {
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "S") == 0))
                                                                                          {
                                                                                            query__CallSeqs_55 = (MR_Integer) 2;
                                                                                            query__succeeded = MR_TRUE;
                                                                                          }
                                                                                        else
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "_") == 0))
                                                                                          {
                                                                                            query__CallSeqs_55 = (MR_Integer) 0;
                                                                                            query__succeeded = MR_TRUE;
                                                                                          }
                                                                                        else
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "s") == 0))
                                                                                          {
                                                                                            query__CallSeqs_55 = (MR_Integer) 1;
                                                                                            query__succeeded = MR_TRUE;
                                                                                          }
                                                                                        else
                                                                                          query__succeeded = MR_FALSE;
                                                                                        if (query__succeeded)
                                                                                          {
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "A") == 0))
                                                                                              {
                                                                                                query__Alloc_56 = (MR_Integer) 2;
                                                                                                query__succeeded = MR_TRUE;
                                                                                              }
                                                                                            else
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "_") == 0))
                                                                                              {
                                                                                                query__Alloc_56 = (MR_Integer) 0;
                                                                                                query__succeeded = MR_TRUE;
                                                                                              }
                                                                                            else
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "a") == 0))
                                                                                              {
                                                                                                query__Alloc_56 = (MR_Integer) 1;
                                                                                                query__succeeded = MR_TRUE;
                                                                                              }
                                                                                            else
                                                                                              query__succeeded = MR_FALSE;
                                                                                            if (query__succeeded)
                                                                                              {
                                                                                                /* binary string simple lookup switch */
                                                                                                query__lo_4 = (MR_Integer) 0;
                                                                                                query__hi_5 = (MR_Integer) 4;
                                                                                                do
                                                                                                  {
                                                                                                    query__mid_6 = (((query__lo_4 + query__hi_5)) / (MR_Integer) 2);
                                                                                                    query__result_7 = MR_strcmp(query__MemoryStr_52, ((&query_vector_common_5[0 + query__mid_6]))->query__vector_common_type_5_0__vct_5_f_0);
                                                                                                    if ((query__result_7 == (MR_Integer) 0))
                                                                                                      {
                                                                                                        query__Memory_57 = ((&query_vector_common_5[0 + query__mid_6]))->query__vector_common_type_5_0__vct_5_f_1;
                                                                                                        query__succeeded = MR_TRUE;
                                                                                                        /* jump out of search loop */
                                                                                                        goto label_1;
                                                                                                      }
                                                                                                    else
                                                                                                    if ((query__result_7 < (MR_Integer) 0))
                                                                                                      query__hi_5 = (query__mid_6 - (MR_Integer) 1);
                                                                                                    else
                                                                                                      query__lo_4 = (query__mid_6 + (MR_Integer) 1);
                                                                                                  }
                                                                                                while ((query__lo_4 <= query__hi_5));
                                                                                                query__succeeded = MR_FALSE;
                                                                                              label_1:;
                                                                                                if (query__succeeded)
                                                                                                  {
                                                                                                    {
                                                                                                      query__Fields_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                                      MR_hl_field(MR_mktag(0), query__Fields_18, 0) = ((MR_Box) ((query__Port_53 | ((((query__Time_54 << (MR_Integer) 1)) | ((((query__CallSeqs_55 << (MR_Integer) 4)) | ((query__Alloc_56 << (MR_Integer) 6)))))))));
                                                                                                      MR_hl_field(MR_mktag(0), query__Fields_18, 1) = ((MR_Box) (query__Memory_57));
                                                                                                    }
                                                                                                    if ((strcmp(query__BoxStr_7, (MR_String) "box") == 0))
                                                                                                      {
                                                                                                        query__Box_19 = (MR_Integer) 0;
                                                                                                        query__succeeded = MR_TRUE;
                                                                                                      }
                                                                                                    else
                                                                                                    if ((strcmp(query__BoxStr_7, (MR_String) "nobox") == 0))
                                                                                                      {
                                                                                                        query__Box_19 = (MR_Integer) 1;
                                                                                                        query__succeeded = MR_TRUE;
                                                                                                      }
                                                                                                    else
                                                                                                      query__succeeded = MR_FALSE;
                                                                                                    if (query__succeeded)
                                                                                                      {
                                                                                                        if ((strcmp(query__ColourStr_8, (MR_String) "cols") == 0))
                                                                                                          {
                                                                                                            query__Colour_20 = (MR_Integer) 0;
                                                                                                            query__succeeded = MR_TRUE;
                                                                                                          }
                                                                                                        else
                                                                                                        if ((strcmp(query__ColourStr_8, (MR_String) "none") == 0))
                                                                                                          {
                                                                                                            query__Colour_20 = (MR_Integer) 1;
                                                                                                            query__succeeded = MR_TRUE;
                                                                                                          }
                                                                                                        else
                                                                                                          query__succeeded = MR_FALSE;
                                                                                                        if (query__succeeded)
                                                                                                          {
                                                                                                            {
                                                                                                              query__succeeded = mercury__string__to_int_2_p_0(query__MaybeAncestorLimitStr_9, &query__AncestorLimit_21);
                                                                                                            }
                                                                                                            if (query__succeeded)
                                                                                                              {
                                                                                                                {
                                                                                                                  query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                                                  MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_22, 0) = ((MR_Box) (query__AncestorLimit_21));
                                                                                                                }
                                                                                                                query__succeeded = MR_TRUE;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                query__succeeded = (strcmp(query__MaybeAncestorLimitStr_9, (MR_String) "no") == 0);
                                                                                                                if (query__succeeded)
                                                                                                                  {
                                                                                                                    query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                                                                    query__succeeded = MR_TRUE;
                                                                                                                  }
                                                                                                              }
                                                                                                            if (query__succeeded)
                                                                                                              {
                                                                                                                {
                                                                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__ProcStaticsPerRecTypeLimitStr_10, &query__ProcStaticsPerRecTypeLimit_23);
                                                                                                                }
                                                                                                                if (query__succeeded)
                                                                                                                  {
                                                                                                                    if ((strcmp(query__SummarizeHoCallSitesStr_11, (MR_String) "sum") == 0))
                                                                                                                      {
                                                                                                                        query__SummarizeHoCallSites_24 = (MR_Integer) 0;
                                                                                                                        query__succeeded = MR_TRUE;
                                                                                                                      }
                                                                                                                    else
                                                                                                                    if ((strcmp(query__SummarizeHoCallSitesStr_11, (MR_String) "nosum") == 0))
                                                                                                                      {
                                                                                                                        query__SummarizeHoCallSites_24 = (MR_Integer) 1;
                                                                                                                        query__succeeded = MR_TRUE;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      query__succeeded = MR_FALSE;
                                                                                                                    if (query__succeeded)
                                                                                                                      {
                                                                                                                        query__succeeded = (strcmp(query__OrderStr_12, (MR_String) "context") == 0);
                                                                                                                        if (query__succeeded)
                                                                                                                          {
                                                                                                                            query__Order_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                                                                            query__succeeded = MR_TRUE;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            query__succeeded = (strcmp(query__OrderStr_12, (MR_String) "name") == 0);
                                                                                                                            if (query__succeeded)
                                                                                                                              {
                                                                                                                                query__Order_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                MR_Word query__Pieces_70;
                                                                                                                                MR_String query__CostKindStr_71;
                                                                                                                                MR_String query__InclDescStr_72;
                                                                                                                                MR_String query__ScopeStr_73;
                                                                                                                                MR_Word query__CostKind_74;
                                                                                                                                MR_Word query__InclDesc_75;
                                                                                                                                MR_Word query__Scope_76;
                                                                                                                                MR_String query__V_78_78;
                                                                                                                                MR_Word query__V_79_79;
                                                                                                                                MR_Word query__V_80_80;
                                                                                                                                MR_Word query__V_81_81;
                                                                                                                                MR_Word query__V_82_82;
                                                                                                                                MR_Integer query__lo_8;
                                                                                                                                MR_Integer query__hi_9;
                                                                                                                                MR_Integer query__mid_10;
                                                                                                                                MR_Integer query__result_11;

                                                                                                                                {
                                                                                                                                  util__split_3_p_0(query__OrderStr_12, (MR_Char) 45, &query__Pieces_70);
                                                                                                                                }
                                                                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_70)) == (MR_mktag((MR_Integer) 1)));
                                                                                                                                if (query__succeeded)
                                                                                                                                  {
                                                                                                                                    query__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_70, (MR_Integer) 0)));
                                                                                                                                    query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_70, (MR_Integer) 1)));
                                                                                                                                    query__succeeded = (strcmp(query__V_78_78, (MR_String) "cost") == 0);
                                                                                                                                    if (query__succeeded)
                                                                                                                                      {
                                                                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
                                                                                                                                        if (query__succeeded)
                                                                                                                                          {
                                                                                                                                            query__CostKindStr_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
                                                                                                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
                                                                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
                                                                                                                                            if (query__succeeded)
                                                                                                                                              {
                                                                                                                                                query__InclDescStr_72 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
                                                                                                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
                                                                                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
                                                                                                                                                if (query__succeeded)
                                                                                                                                                  {
                                                                                                                                                    query__ScopeStr_73 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
                                                                                                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
                                                                                                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                                                                                    if (query__succeeded)
                                                                                                                                                      {
                                                                                                                                                        /* binary string simple lookup switch */
                                                                                                                                                        query__lo_8 = (MR_Integer) 0;
                                                                                                                                                        query__hi_9 = (MR_Integer) 5;
                                                                                                                                                        do
                                                                                                                                                          {
                                                                                                                                                            query__mid_10 = (((query__lo_8 + query__hi_9)) / (MR_Integer) 2);
                                                                                                                                                            query__result_11 = MR_strcmp(query__CostKindStr_71, ((&query_vector_common_6[0 + query__mid_10]))->query__vector_common_type_6_0__vct_6_f_0);
                                                                                                                                                            if ((query__result_11 == (MR_Integer) 0))
                                                                                                                                                              {
                                                                                                                                                                query__CostKind_74 = ((&query_vector_common_6[0 + query__mid_10]))->query__vector_common_type_6_0__vct_6_f_1;
                                                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                                                                /* jump out of search loop */
                                                                                                                                                                goto label_2;
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                            if ((query__result_11 < (MR_Integer) 0))
                                                                                                                                                              query__hi_9 = (query__mid_10 - (MR_Integer) 1);
                                                                                                                                                            else
                                                                                                                                                              query__lo_8 = (query__mid_10 + (MR_Integer) 1);
                                                                                                                                                          }
                                                                                                                                                        while ((query__lo_8 <= query__hi_9));
                                                                                                                                                        query__succeeded = MR_FALSE;
                                                                                                                                                      label_2:;
                                                                                                                                                        if (query__succeeded)
                                                                                                                                                          {
                                                                                                                                                            if ((strcmp(query__InclDescStr_72, (MR_String) "both") == 0))
                                                                                                                                                              {
                                                                                                                                                                query__InclDesc_75 = (MR_Integer) 1;
                                                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                            if ((strcmp(query__InclDescStr_72, (MR_String) "self") == 0))
                                                                                                                                                              {
                                                                                                                                                                query__InclDesc_75 = (MR_Integer) 0;
                                                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              query__succeeded = MR_FALSE;
                                                                                                                                                            if (query__succeeded)
                                                                                                                                                              {
                                                                                                                                                                if ((strcmp(query__ScopeStr_73, (MR_String) "oa") == 0))
                                                                                                                                                                  {
                                                                                                                                                                    query__Scope_76 = (MR_Integer) 1;
                                                                                                                                                                    query__succeeded = MR_TRUE;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                if ((strcmp(query__ScopeStr_73, (MR_String) "pc") == 0))
                                                                                                                                                                  {
                                                                                                                                                                    query__Scope_76 = (MR_Integer) 0;
                                                                                                                                                                    query__succeeded = MR_TRUE;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  query__succeeded = MR_FALSE;
                                                                                                                                                                if (query__succeeded)
                                                                                                                                                                  {
                                                                                                                                                                    {
                                                                                                                                                                      query__Order_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                                                                                                      MR_hl_field(MR_mktag(1), query__Order_25, 0) = ((MR_Box) ((query__CostKind_74 | ((((query__InclDesc_75 << (MR_Integer) 3)) | ((query__Scope_76 << (MR_Integer) 4)))))));
                                                                                                                                                                    }
                                                                                                                                                                    query__succeeded = MR_TRUE;
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
                                                                                                                        if (query__succeeded)
                                                                                                                          {
                                                                                                                            if ((strcmp(query__ContourStr_13, (MR_String) "ac") == 0))
                                                                                                                              {
                                                                                                                                query__Contour_26 = (MR_Integer) 0;
                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                              }
                                                                                                                            else
                                                                                                                            if ((strcmp(query__ContourStr_13, (MR_String) "nc") == 0))
                                                                                                                              {
                                                                                                                                query__Contour_26 = (MR_Integer) 1;
                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              query__succeeded = MR_FALSE;
                                                                                                                            if (query__succeeded)
                                                                                                                              {
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "mi") == 0))
                                                                                                                                  {
                                                                                                                                    query__Time_27 = (MR_Integer) 1;
                                                                                                                                    query__succeeded = MR_TRUE;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "no") == 0))
                                                                                                                                  {
                                                                                                                                    query__Time_27 = (MR_Integer) 0;
                                                                                                                                    query__succeeded = MR_TRUE;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "th") == 0))
                                                                                                                                  {
                                                                                                                                    query__Time_27 = (MR_Integer) 2;
                                                                                                                                    query__succeeded = MR_TRUE;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  query__succeeded = MR_FALSE;
                                                                                                                                if (query__succeeded)
                                                                                                                                  {
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqa") == 0))
                                                                                                                                      {
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 0;
                                                                                                                                        query__succeeded = MR_TRUE;
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqn") == 0))
                                                                                                                                      {
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 2;
                                                                                                                                        query__succeeded = MR_TRUE;
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqwd") == 0))
                                                                                                                                      {
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 1;
                                                                                                                                        query__succeeded = MR_TRUE;
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      query__succeeded = MR_FALSE;
                                                                                                                                    if (query__succeeded)
                                                                                                                                      {
                                                                                                                                        {
                                                                                                                                          query__succeeded = query__string_to_inactive_items_2_p_0(query__InactiveItemsStr_16, &query__InactiveItems_29);
                                                                                                                                        }
                                                                                                                                        if (query__succeeded)
                                                                                                                                          {
                                                                                                                                            if ((strcmp(query__DeveloperModeStr_17, (MR_String) "dev") == 0))
                                                                                                                                              {
                                                                                                                                                query__DeveloperMode_30 = (MR_Integer) 0;
                                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                            if ((strcmp(query__DeveloperModeStr_17, (MR_String) "nodev") == 0))
                                                                                                                                              {
                                                                                                                                                query__DeveloperMode_30 = (MR_Integer) 1;
                                                                                                                                                query__succeeded = MR_TRUE;
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              query__succeeded = MR_FALSE;
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
    if (query__succeeded)
      {
        MR_Word query__Preferences_31;

        {
          query__Preferences_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), query__Preferences_31, 0) = ((MR_Box) (query__Fields_18));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 1) = ((MR_Box) ((query__Box_19 | ((query__Colour_20 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 2) = ((MR_Box) (query__MaybeAncestorLimit_22));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 3) = ((MR_Box) (query__ProcStaticsPerRecTypeLimit_23));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 4) = ((MR_Box) (query__SummarizeHoCallSites_24));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 5) = ((MR_Box) (query__Order_25));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 6) = ((MR_Box) ((query__Contour_26 | ((((query__Time_27 << (MR_Integer) 1)) | ((query__ModuleQual_28 << (MR_Integer) 3)))))));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 7) = ((MR_Box) (query__InactiveItems_29));
          MR_hl_field(MR_mktag(0), query__Preferences_31, 8) = ((MR_Box) (query__DeveloperMode_30));
        }
        {
          query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), query__MaybePreferences_4, 0) = ((MR_Box) (query__Preferences_31));
        }
      }
    else
      query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return query__MaybePreferences_4;
  }
}

MR_Word MR_CALL 
query__string_to_maybe_cmd_1_f_0(
  MR_String query__QueryString_3)
{
  {
    MR_bool query__succeeded;
    MR_Word query__MaybeCmd_4;
    MR_Word query__Pieces_5;
    MR_Char query__V_44_44;
    MR_Word query__MaybePercent_7;
    MR_String query__MaybePercentStr_6;
    MR_String query__V_45_45;
    MR_Word query__V_46_46;
    MR_Word query__V_47_47;
    MR_String query__V_272_272;

    {
      query__V_44_44 = query__pref_separator_char_0_f_0();
    }
    {
      util__split_3_p_0(query__QueryString_3, query__V_44_44, &query__Pieces_5);
    }
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
    if (query__succeeded)
      {
        query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
        query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
        {
          query__V_272_272 = query__cmd_str_root_0_f_0();
        }
        query__succeeded = (strcmp(query__V_45_45, query__V_272_272) == 0);
        if (query__succeeded)
          {
            query__succeeded = ((MR_tag((MR_Word) query__V_46_46)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__MaybePercentStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 0)));
                query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 1)));
                query__succeeded = (query__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (query__succeeded)
                  {
                    query__succeeded = (strcmp(query__MaybePercentStr_6, (MR_String) "no") == 0);
                    if (query__succeeded)
                      {
                        query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        query__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Integer query__Percent_8;

                        {
                          query__succeeded = mercury__string__to_int_2_p_0(query__MaybePercentStr_6, &query__Percent_8);
                        }
                        if (query__succeeded)
                          {
                            {
                              query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), query__MaybePercent_7, 0) = ((MR_Box) (query__Percent_8));
                            }
                            query__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    if (query__succeeded)
      {
        MR_Word query__Cmd_9;

        {
          query__Cmd_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), query__Cmd_9, 0) = ((MR_Box) (query__MaybePercent_7));
        }
        {
          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_9));
        }
      }
    else
      {
        MR_Integer query__CliqueNum_11;
        MR_String query__CliqueNumStr_10;
        MR_String query__V_48_48;
        MR_Word query__V_49_49;
        MR_Word query__V_50_50;
        MR_String query__V_273_273;

        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
        if (query__succeeded)
          {
            query__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
            query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
            {
              query__V_273_273 = query__cmd_str_clique_0_f_0();
            }
            query__succeeded = (strcmp(query__V_48_48, query__V_273_273) == 0);
            if (query__succeeded)
              {
                query__succeeded = ((MR_tag((MR_Word) query__V_49_49)) == (MR_mktag((MR_Integer) 1)));
                if (query__succeeded)
                  {
                    query__CliqueNumStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 0)));
                    query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 1)));
                    query__succeeded = (query__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (query__succeeded)
                      {
                        query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_10, &query__CliqueNum_11);
                      }
                  }
              }
          }
        if (query__succeeded)
          {
            MR_Word query__CliquePtr_12 = (MR_Word) query__CliqueNum_11;
            MR_Word query__Cmd_118;

            {
              query__Cmd_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), query__Cmd_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), query__Cmd_118, 1) = ((MR_Box) (query__CliquePtr_12));
            }
            {
              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_118));
            }
          }
        else
          {
            MR_Integer query__CliqueNum_269;
            MR_String query__V_51_51;
            MR_Word query__V_52_52;
            MR_Word query__V_53_53;
            MR_String query__CliqueNumStr_119;
            MR_String query__V_274_274;

            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                {
                  query__V_274_274 = query__cmd_str_clique_recursive_costs_0_f_0();
                }
                query__succeeded = (strcmp(query__V_51_51, query__V_274_274) == 0);
                if (query__succeeded)
                  {
                    query__succeeded = ((MR_tag((MR_Word) query__V_52_52)) == (MR_mktag((MR_Integer) 1)));
                    if (query__succeeded)
                      {
                        query__CliqueNumStr_119 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 0)));
                        query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 1)));
                        query__succeeded = (query__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (query__succeeded)
                          {
                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_119, &query__CliqueNum_269);
                          }
                      }
                  }
              }
            if (query__succeeded)
              {
                MR_Word query__Cmd_120;
                MR_Word query__CliquePtr_121 = (MR_Word) query__CliqueNum_269;

                {
                  query__Cmd_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 1) = ((MR_Box) (query__CliquePtr_121));
                }
                {
                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_120));
                }
              }
            else
              {
                MR_String query__V_54_54;
                MR_Word query__V_55_55;
                MR_String query__V_275_275;

                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                if (query__succeeded)
                  {
                    query__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                    query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                    {
                      query__V_275_275 = query__cmd_str_recursion_types_frequency_0_f_0();
                    }
                    query__succeeded = (strcmp(query__V_54_54, query__V_275_275) == 0);
                    if (query__succeeded)
                      query__succeeded = (query__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (query__succeeded)
                  {
                    query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[1]);
                  }
                else
                  {
                    MR_Integer query__PSI_14;
                    MR_String query__PSIStr_13;
                    MR_String query__V_56_56;
                    MR_Word query__V_57_57;
                    MR_Word query__V_58_58;
                    MR_String query__V_276_276;

                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                    if (query__succeeded)
                      {
                        query__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                        query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                        {
                          query__V_276_276 = query__cmd_str_proc_0_f_0();
                        }
                        query__succeeded = (strcmp(query__V_56_56, query__V_276_276) == 0);
                        if (query__succeeded)
                          {
                            query__succeeded = ((MR_tag((MR_Word) query__V_57_57)) == (MR_mktag((MR_Integer) 1)));
                            if (query__succeeded)
                              {
                                query__PSIStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 0)));
                                query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 1)));
                                query__succeeded = (query__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (query__succeeded)
                                  {
                                    query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_13, &query__PSI_14);
                                  }
                              }
                          }
                      }
                    if (query__succeeded)
                      {
                        MR_Word query__PSPtr_15 = (MR_Word) query__PSI_14;
                        MR_Word query__Cmd_123;

                        {
                          query__Cmd_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 1) = ((MR_Box) (query__PSPtr_15));
                        }
                        {
                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_123));
                        }
                      }
                    else
                      {
                        MR_Word query__GroupCallers_20;
                        MR_Integer query__BunchNum_21;
                        MR_Integer query__CallersPerBunch_22;
                        MR_Word query__Contour_23;
                        MR_Integer query__PSI_257;
                        MR_String query__GroupCallersStr_16;
                        MR_String query__BunchNumStr_17;
                        MR_String query__CallersPerBunchStr_18;
                        MR_String query__ContourStr_19;
                        MR_String query__V_59_59;
                        MR_Word query__V_60_60;
                        MR_Word query__V_61_61;
                        MR_Word query__V_62_62;
                        MR_Word query__V_63_63;
                        MR_Word query__V_64_64;
                        MR_Word query__V_65_65;
                        MR_String query__PSIStr_124;
                        MR_String query__V_277_277;

                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                        if (query__succeeded)
                          {
                            query__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                            query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                            {
                              query__V_277_277 = query__cmd_str_proc_callers_0_f_0();
                            }
                            query__succeeded = (strcmp(query__V_59_59, query__V_277_277) == 0);
                            if (query__succeeded)
                              {
                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
                                if (query__succeeded)
                                  {
                                    query__PSIStr_124 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
                                    if (query__succeeded)
                                      {
                                        query__GroupCallersStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
                                        if (query__succeeded)
                                          {
                                            query__BunchNumStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
                                            query__succeeded = ((MR_tag((MR_Word) query__V_63_63)) == (MR_mktag((MR_Integer) 1)));
                                            if (query__succeeded)
                                              {
                                                query__CallersPerBunchStr_18 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 0)));
                                                query__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 1)));
                                                query__succeeded = ((MR_tag((MR_Word) query__V_64_64)) == (MR_mktag((MR_Integer) 1)));
                                                if (query__succeeded)
                                                  {
                                                    query__ContourStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 0)));
                                                    query__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 1)));
                                                    query__succeeded = (query__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (query__succeeded)
                                                      {
                                                        {
                                                          query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_124, &query__PSI_257);
                                                        }
                                                        if (query__succeeded)
                                                          {
                                                            {
                                                              query__succeeded = query__string_to_caller_groups_2_p_0(query__GroupCallersStr_16, &query__GroupCallers_20);
                                                            }
                                                            if (query__succeeded)
                                                              {
                                                                {
                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__BunchNumStr_17, &query__BunchNum_21);
                                                                }
                                                                if (query__succeeded)
                                                                  {
                                                                    {
                                                                      query__succeeded = mercury__string__to_int_2_p_0(query__CallersPerBunchStr_18, &query__CallersPerBunch_22);
                                                                    }
                                                                    if (query__succeeded)
                                                                      {
                                                                        query__succeeded = query__string_to_contour_exclusion_2_p_0(query__ContourStr_19, &query__Contour_23);
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
                        if (query__succeeded)
                          {
                            MR_Word query__Cmd_125;
                            MR_Word query__PSPtr_126 = (MR_Word) query__PSI_257;

                            {
                              query__Cmd_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 1) = ((MR_Box) (query__PSPtr_126));
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 2) = ((MR_Box) (query__GroupCallers_20));
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 3) = ((MR_Box) (query__BunchNum_21));
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 4) = ((MR_Box) (query__CallersPerBunch_22));
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 5) = ((MR_Box) (query__Contour_23));
                            }
                            {
                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_125));
                            }
                          }
                        else
                          {
                            MR_String query__V_66_66;
                            MR_Word query__V_67_67;
                            MR_String query__V_278_278;

                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                            if (query__succeeded)
                              {
                                query__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                query__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                {
                                  query__V_278_278 = query__cmd_str_program_modules_0_f_0();
                                }
                                query__succeeded = (strcmp(query__V_66_66, query__V_278_278) == 0);
                                if (query__succeeded)
                                  query__succeeded = (query__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            if (query__succeeded)
                              {
                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[2]);
                              }
                            else
                              {
                                MR_String query__ModuleName_24;
                                MR_String query__V_68_68;
                                MR_Word query__V_69_69;
                                MR_Word query__V_70_70;
                                MR_String query__V_279_279;

                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                if (query__succeeded)
                                  {
                                    query__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                    query__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                    {
                                      query__V_279_279 = query__cmd_str_module_0_f_0();
                                    }
                                    query__succeeded = (strcmp(query__V_68_68, query__V_279_279) == 0);
                                    if (query__succeeded)
                                      {
                                        query__succeeded = ((MR_tag((MR_Word) query__V_69_69)) == (MR_mktag((MR_Integer) 1)));
                                        if (query__succeeded)
                                          {
                                            query__ModuleName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 0)));
                                            query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 1)));
                                            query__succeeded = (query__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                  }
                                if (query__succeeded)
                                  {
                                    MR_Word query__Cmd_128;

                                    {
                                      query__Cmd_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 1) = ((MR_Box) (query__ModuleName_24));
                                    }
                                    {
                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_128));
                                    }
                                  }
                                else
                                  {
                                    MR_String query__ModuleName_237;
                                    MR_String query__V_71_71;
                                    MR_Word query__V_72_72;
                                    MR_Word query__V_73_73;
                                    MR_String query__V_280_280;

                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                    if (query__succeeded)
                                      {
                                        query__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                        query__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                        {
                                          query__V_280_280 = query__cmd_str_module_getter_setters_0_f_0();
                                        }
                                        query__succeeded = (strcmp(query__V_71_71, query__V_280_280) == 0);
                                        if (query__succeeded)
                                          {
                                            query__succeeded = ((MR_tag((MR_Word) query__V_72_72)) == (MR_mktag((MR_Integer) 1)));
                                            if (query__succeeded)
                                              {
                                                query__ModuleName_237 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 0)));
                                                query__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 1)));
                                                query__succeeded = (query__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                          }
                                      }
                                    if (query__succeeded)
                                      {
                                        MR_Word query__Cmd_129;

                                        {
                                          query__Cmd_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 1) = ((MR_Box) (query__ModuleName_237));
                                        }
                                        {
                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_129));
                                        }
                                      }
                                    else
                                      {
                                        MR_String query__ModuleName_229;
                                        MR_String query__V_74_74;
                                        MR_Word query__V_75_75;
                                        MR_Word query__V_76_76;
                                        MR_String query__V_281_281;

                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                        if (query__succeeded)
                                          {
                                            query__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                            query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                            {
                                              query__V_281_281 = query__cmd_str_module_rep_0_f_0();
                                            }
                                            query__succeeded = (strcmp(query__V_74_74, query__V_281_281) == 0);
                                            if (query__succeeded)
                                              {
                                                query__succeeded = ((MR_tag((MR_Word) query__V_75_75)) == (MR_mktag((MR_Integer) 1)));
                                                if (query__succeeded)
                                                  {
                                                    query__ModuleName_229 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 0)));
                                                    query__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 1)));
                                                    query__succeeded = (query__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        if (query__succeeded)
                                          {
                                            MR_Word query__Cmd_130;

                                            {
                                              query__Cmd_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 1) = ((MR_Box) (query__ModuleName_229));
                                            }
                                            {
                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_130));
                                            }
                                          }
                                        else
                                          {
                                            MR_Word query__Limit_29;
                                            MR_Word query__CostKind_30;
                                            MR_Word query__InclDesc_31;
                                            MR_Word query__Scope_32;
                                            MR_String query__LimitStr_25;
                                            MR_String query__CostKindStr_26;
                                            MR_String query__InclDescStr_27;
                                            MR_String query__ScopeStr_28;
                                            MR_String query__V_77_77;
                                            MR_Word query__V_78_78;
                                            MR_Word query__V_79_79;
                                            MR_Word query__V_80_80;
                                            MR_Word query__V_81_81;
                                            MR_Word query__V_82_82;
                                            MR_String query__V_282_282;

                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                            if (query__succeeded)
                                              {
                                                query__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                {
                                                  query__V_282_282 = query__cmd_str_top_procs_0_f_0();
                                                }
                                                query__succeeded = (strcmp(query__V_77_77, query__V_282_282) == 0);
                                                if (query__succeeded)
                                                  {
                                                    query__succeeded = ((MR_tag((MR_Word) query__V_78_78)) == (MR_mktag((MR_Integer) 1)));
                                                    if (query__succeeded)
                                                      {
                                                        query__LimitStr_25 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 0)));
                                                        query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 1)));
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
                                                        if (query__succeeded)
                                                          {
                                                            query__CostKindStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
                                                            if (query__succeeded)
                                                              {
                                                                query__InclDescStr_27 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
                                                                if (query__succeeded)
                                                                  {
                                                                    query__ScopeStr_28 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                    if (query__succeeded)
                                                                      {
                                                                        {
                                                                          query__succeeded = query__string_to_limit_2_p_0(query__LimitStr_25, &query__Limit_29);
                                                                        }
                                                                        if (query__succeeded)
                                                                          {
                                                                            {
                                                                              query__succeeded = query__string_to_cost_kind_2_p_0(query__CostKindStr_26, &query__CostKind_30);
                                                                            }
                                                                            if (query__succeeded)
                                                                              {
                                                                                {
                                                                                  query__succeeded = query__string_to_incl_desc_2_p_0(query__InclDescStr_27, &query__InclDesc_31);
                                                                                }
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    query__succeeded = query__string_to_scope_2_p_0(query__ScopeStr_28, &query__Scope_32);
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
                                            if (query__succeeded)
                                              {
                                                MR_Word query__Cmd_131;

                                                {
                                                  query__Cmd_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 1) = ((MR_Box) (query__Limit_29));
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 2) = ((MR_Box) ((query__CostKind_30 | ((((query__InclDesc_31 << (MR_Integer) 3)) | ((query__Scope_32 << (MR_Integer) 4)))))));
                                                }
                                                {
                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_131));
                                                }
                                              }
                                            else
                                              {
                                                MR_Integer query__PSI_213;
                                                MR_String query__V_83_83;
                                                MR_Word query__V_84_84;
                                                MR_Word query__V_85_85;
                                                MR_String query__PSIStr_132;
                                                MR_String query__V_283_283;

                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                if (query__succeeded)
                                                  {
                                                    query__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                    query__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                    {
                                                      query__V_283_283 = query__cmd_str_static_coverage_0_f_0();
                                                    }
                                                    query__succeeded = (strcmp(query__V_83_83, query__V_283_283) == 0);
                                                    if (query__succeeded)
                                                      {
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_84_84)) == (MR_mktag((MR_Integer) 1)));
                                                        if (query__succeeded)
                                                          {
                                                            query__PSIStr_132 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 0)));
                                                            query__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 1)));
                                                            query__succeeded = (query__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                            if (query__succeeded)
                                                              {
                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_132, &query__PSI_213);
                                                              }
                                                          }
                                                      }
                                                  }
                                                if (query__succeeded)
                                                  {
                                                    MR_Word query__V_86_86;
                                                    MR_Word query__PSPtr_133 = (MR_Word) query__PSI_213;

                                                    {
                                                      query__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 1) = ((MR_Box) (query__PSPtr_133));
                                                    }
                                                    {
                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_86_86));
                                                    }
                                                  }
                                                else
                                                  {
                                                    MR_Integer query__PDI_34;
                                                    MR_String query__PDIStr_33;
                                                    MR_String query__V_87_87;
                                                    MR_Word query__V_88_88;
                                                    MR_Word query__V_89_89;
                                                    MR_String query__V_284_284;

                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                    if (query__succeeded)
                                                      {
                                                        query__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                        query__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                        {
                                                          query__V_284_284 = query__cmd_str_dynamic_coverage_0_f_0();
                                                        }
                                                        query__succeeded = (strcmp(query__V_87_87, query__V_284_284) == 0);
                                                        if (query__succeeded)
                                                          {
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_88_88)) == (MR_mktag((MR_Integer) 1)));
                                                            if (query__succeeded)
                                                              {
                                                                query__PDIStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 0)));
                                                                query__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 1)));
                                                                query__succeeded = (query__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                if (query__succeeded)
                                                                  {
                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_33, &query__PDI_34);
                                                                  }
                                                              }
                                                          }
                                                      }
                                                    if (query__succeeded)
                                                      {
                                                        MR_Word query__PDPtr_35 = (MR_Word) query__PDI_34;
                                                        MR_Word query__V_90_90;

                                                        {
                                                          query__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 1) = ((MR_Box) (query__PDPtr_35));
                                                        }
                                                        {
                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_90_90));
                                                        }
                                                      }
                                                    else
                                                      {
                                                        MR_String query__V_91_91;
                                                        MR_Word query__V_92_92;
                                                        MR_String query__V_285_285;

                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                        if (query__succeeded)
                                                          {
                                                            query__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                            query__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                            {
                                                              query__V_285_285 = query__cmd_str_menu_0_f_0();
                                                            }
                                                            query__succeeded = (strcmp(query__V_91_91, query__V_285_285) == 0);
                                                            if (query__succeeded)
                                                              query__succeeded = (query__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                          }
                                                        if (query__succeeded)
                                                          {
                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[3]);
                                                          }
                                                        else
                                                          {
                                                            MR_Integer query__PSI_186;
                                                            MR_String query__V_93_93;
                                                            MR_Word query__V_94_94;
                                                            MR_Word query__V_95_95;
                                                            MR_String query__PSIStr_135;
                                                            MR_String query__V_286_286;

                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                            if (query__succeeded)
                                                              {
                                                                query__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                query__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                {
                                                                  query__V_286_286 = query__cmd_str_dump_proc_static_0_f_0();
                                                                }
                                                                query__succeeded = (strcmp(query__V_93_93, query__V_286_286) == 0);
                                                                if (query__succeeded)
                                                                  {
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_94_94)) == (MR_mktag((MR_Integer) 1)));
                                                                    if (query__succeeded)
                                                                      {
                                                                        query__PSIStr_135 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 0)));
                                                                        query__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 1)));
                                                                        query__succeeded = (query__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                        if (query__succeeded)
                                                                          {
                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_135, &query__PSI_186);
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                            if (query__succeeded)
                                                              {
                                                                MR_Word query__Cmd_136;
                                                                MR_Word query__PSPtr_137 = (MR_Word) query__PSI_186;

                                                                {
                                                                  query__Cmd_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 1) = ((MR_Box) (query__PSPtr_137));
                                                                }
                                                                {
                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_136));
                                                                }
                                                              }
                                                            else
                                                              {
                                                                MR_Integer query__PDI_179;
                                                                MR_String query__V_96_96;
                                                                MR_Word query__V_97_97;
                                                                MR_Word query__V_98_98;
                                                                MR_String query__PDIStr_138;
                                                                MR_String query__V_287_287;

                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                if (query__succeeded)
                                                                  {
                                                                    query__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                    query__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                    {
                                                                      query__V_287_287 = query__cmd_str_dump_proc_dynamic_0_f_0();
                                                                    }
                                                                    query__succeeded = (strcmp(query__V_96_96, query__V_287_287) == 0);
                                                                    if (query__succeeded)
                                                                      {
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_97_97)) == (MR_mktag((MR_Integer) 1)));
                                                                        if (query__succeeded)
                                                                          {
                                                                            query__PDIStr_138 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 0)));
                                                                            query__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 1)));
                                                                            query__succeeded = (query__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                            if (query__succeeded)
                                                                              {
                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_138, &query__PDI_179);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                                if (query__succeeded)
                                                                  {
                                                                    MR_Word query__Cmd_139;
                                                                    MR_Word query__PDPtr_140 = (MR_Word) query__PDI_179;

                                                                    {
                                                                      query__Cmd_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 1) = ((MR_Box) (query__PDPtr_140));
                                                                    }
                                                                    {
                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_139));
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    MR_Integer query__CSSI_37;
                                                                    MR_String query__CSSIStr_36;
                                                                    MR_String query__V_99_99;
                                                                    MR_Word query__V_100_100;
                                                                    MR_Word query__V_101_101;
                                                                    MR_String query__V_288_288;

                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                    if (query__succeeded)
                                                                      {
                                                                        query__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                        query__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                        {
                                                                          query__V_288_288 = query__cmd_str_dump_call_site_static_0_f_0();
                                                                        }
                                                                        query__succeeded = (strcmp(query__V_99_99, query__V_288_288) == 0);
                                                                        if (query__succeeded)
                                                                          {
                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_100_100)) == (MR_mktag((MR_Integer) 1)));
                                                                            if (query__succeeded)
                                                                              {
                                                                                query__CSSIStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 0)));
                                                                                query__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 1)));
                                                                                query__succeeded = (query__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__CSSIStr_36, &query__CSSI_37);
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                    if (query__succeeded)
                                                                      {
                                                                        MR_Word query__CSSPtr_38 = (MR_Word) query__CSSI_37;
                                                                        MR_Word query__Cmd_141;

                                                                        {
                                                                          query__Cmd_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 1) = ((MR_Box) (query__CSSPtr_38));
                                                                        }
                                                                        {
                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_141));
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        MR_Integer query__CSDI_40;
                                                                        MR_String query__CSDIStr_39;
                                                                        MR_String query__V_102_102;
                                                                        MR_Word query__V_103_103;
                                                                        MR_Word query__V_104_104;
                                                                        MR_String query__V_289_289;

                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                        if (query__succeeded)
                                                                          {
                                                                            query__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                            query__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                            {
                                                                              query__V_289_289 = query__cmd_str_dump_call_site_dynamic_0_f_0();
                                                                            }
                                                                            query__succeeded = (strcmp(query__V_102_102, query__V_289_289) == 0);
                                                                            if (query__succeeded)
                                                                              {
                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_103_103)) == (MR_mktag((MR_Integer) 1)));
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    query__CSDIStr_39 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 0)));
                                                                                    query__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 1)));
                                                                                    query__succeeded = (query__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                    if (query__succeeded)
                                                                                      {
                                                                                        query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_39, &query__CSDI_40);
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                        if (query__succeeded)
                                                                          {
                                                                            MR_Word query__CSDPtr_41 = (MR_Word) query__CSDI_40;
                                                                            MR_Word query__Cmd_142;

                                                                            {
                                                                              query__Cmd_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 1) = ((MR_Box) (query__CSDPtr_41));
                                                                            }
                                                                            {
                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_142));
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            MR_Integer query__CliqueNum_161;
                                                                            MR_String query__V_105_105;
                                                                            MR_Word query__V_106_106;
                                                                            MR_Word query__V_107_107;
                                                                            MR_String query__CliqueNumStr_143;
                                                                            MR_String query__V_290_290;

                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                            if (query__succeeded)
                                                                              {
                                                                                query__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                                query__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                                {
                                                                                  query__V_290_290 = query__cmd_str_dump_raw_clique_0_f_0();
                                                                                }
                                                                                query__succeeded = (strcmp(query__V_105_105, query__V_290_290) == 0);
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_106_106)) == (MR_mktag((MR_Integer) 1)));
                                                                                    if (query__succeeded)
                                                                                      {
                                                                                        query__CliqueNumStr_143 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 0)));
                                                                                        query__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 1)));
                                                                                        query__succeeded = (query__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                        if (query__succeeded)
                                                                                          {
                                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_143, &query__CliqueNum_161);
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                            if (query__succeeded)
                                                                              {
                                                                                MR_Word query__Cmd_144;
                                                                                MR_Word query__CliquePtr_145 = (MR_Word) query__CliqueNum_161;

                                                                                {
                                                                                  query__Cmd_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 1) = ((MR_Box) (query__CliquePtr_145));
                                                                                }
                                                                                {
                                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_144));
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                MR_Integer query__CSDI_157;
                                                                                MR_String query__V_108_108;
                                                                                MR_Word query__V_109_109;
                                                                                MR_Word query__V_110_110;
                                                                                MR_String query__CSDIStr_146;
                                                                                MR_String query__V_291_291;

                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    query__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                                    query__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                                    {
                                                                                      query__V_291_291 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
                                                                                    }
                                                                                    query__succeeded = (strcmp(query__V_108_108, query__V_291_291) == 0);
                                                                                    if (query__succeeded)
                                                                                      {
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_109_109)) == (MR_mktag((MR_Integer) 1)));
                                                                                        if (query__succeeded)
                                                                                          {
                                                                                            query__CSDIStr_146 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 0)));
                                                                                            query__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 1)));
                                                                                            query__succeeded = (query__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                            if (query__succeeded)
                                                                                              {
                                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_146, &query__CSDI_157);
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                                if (query__succeeded)
                                                                                  {
                                                                                    MR_Word query__Cmd_147;
                                                                                    MR_Word query__CSDPtr_148 = (MR_Word) query__CSDI_157;

                                                                                    {
                                                                                      query__Cmd_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 1) = ((MR_Box) (query__CSDPtr_148));
                                                                                    }
                                                                                    {
                                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_147));
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    MR_Integer query__TimeOut_43;
                                                                                    MR_String query__TimeOutStr_42;
                                                                                    MR_String query__V_111_111;
                                                                                    MR_Word query__V_112_112;
                                                                                    MR_Word query__V_113_113;
                                                                                    MR_String query__V_292_292;

                                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                                    if (query__succeeded)
                                                                                      {
                                                                                        query__V_111_111 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                                        query__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                                        {
                                                                                          query__V_292_292 = query__cmd_str_timeout_0_f_0();
                                                                                        }
                                                                                        query__succeeded = (strcmp(query__V_111_111, query__V_292_292) == 0);
                                                                                        if (query__succeeded)
                                                                                          {
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_112_112)) == (MR_mktag((MR_Integer) 1)));
                                                                                            if (query__succeeded)
                                                                                              {
                                                                                                query__TimeOutStr_42 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 0)));
                                                                                                query__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 1)));
                                                                                                query__succeeded = (query__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                                if (query__succeeded)
                                                                                                  {
                                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__TimeOutStr_42, &query__TimeOut_43);
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                    if (query__succeeded)
                                                                                      {
                                                                                        MR_Word query__Cmd_149;

                                                                                        {
                                                                                          query__Cmd_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                          MR_hl_field(MR_mktag(1), query__Cmd_149, 0) = ((MR_Box) (query__TimeOut_43));
                                                                                        }
                                                                                        {
                                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_149));
                                                                                        }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        MR_String query__V_114_114;
                                                                                        MR_Word query__V_115_115;
                                                                                        MR_String query__V_293_293;

                                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                                        if (query__succeeded)
                                                                                          {
                                                                                            query__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                                            query__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                                            {
                                                                                              query__V_293_293 = query__cmd_str_restart_0_f_0();
                                                                                            }
                                                                                            query__succeeded = (strcmp(query__V_114_114, query__V_293_293) == 0);
                                                                                            if (query__succeeded)
                                                                                              query__succeeded = (query__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                          }
                                                                                        if (query__succeeded)
                                                                                          {
                                                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[4]);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            MR_String query__V_116_116;
                                                                                            MR_Word query__V_117_117;
                                                                                            MR_String query__V_294_294;

                                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
                                                                                            if (query__succeeded)
                                                                                              {
                                                                                                query__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
                                                                                                query__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
                                                                                                {
                                                                                                  query__V_294_294 = query__cmd_str_quit_0_f_0();
                                                                                                }
                                                                                                query__succeeded = (strcmp(query__V_116_116, query__V_294_294) == 0);
                                                                                                if (query__succeeded)
                                                                                                  query__succeeded = (query__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                              }
                                                                                            if (query__succeeded)
                                                                                              {
                                                                                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[5]);
                                                                                              }
                                                                                            else
                                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
    return query__MaybeCmd_4;
  }
}

MR_Word MR_CALL 
query__string_to_maybe_query_1_f_0(
  MR_String query__String_3)
{
  {
    MR_bool query__succeeded;
    MR_Word query__MaybeDeepQuery_4;
    MR_Word query__MaybeCmdStr_5;
    MR_Word query__MaybePrefStr_6;
    MR_String query__DeepFileName_7;
    MR_Word query__Pieces_19;
    MR_String query__DeepFileName0_20;
    MR_Word query__V_24_24;

    {
      util__split_3_p_0(query__String_3, (MR_Char) 38, &query__Pieces_19);
    }
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
    if (query__succeeded)
      {
        query__DeepFileName0_20 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
        query__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
        query__succeeded = (query__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (query__succeeded)
      {
        query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        query__DeepFileName_7 = query__DeepFileName0_20;
        query__succeeded = MR_TRUE;
      }
    else
      {
        MR_String query__CmdStr_21;
        MR_String query__DeepFileName0_32;
        MR_Word query__V_25_25;
        MR_Word query__V_26_26;

        query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
        if (query__succeeded)
          {
            query__CmdStr_21 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
            query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
            query__succeeded = ((MR_tag((MR_Word) query__V_25_25)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__DeepFileName0_32 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_25_25, (MR_Integer) 0)));
                query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_25_25, (MR_Integer) 1)));
                query__succeeded = (query__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        if (query__succeeded)
          {
            {
              query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, 0) = ((MR_Box) (query__CmdStr_21));
            }
            query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            query__DeepFileName_7 = query__DeepFileName0_32;
            query__succeeded = MR_TRUE;
          }
        else
          {
            MR_String query__PrefsStr_22;
            MR_Word query__V_27_27;
            MR_Word query__V_28_28;
            MR_Word query__V_29_29;
            MR_String query__CmdStr_31;

            query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
            if (query__succeeded)
              {
                query__CmdStr_31 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
                query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
                query__succeeded = ((MR_tag((MR_Word) query__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                if (query__succeeded)
                  {
                    query__PrefsStr_22 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_27_27, (MR_Integer) 0)));
                    query__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_27_27, (MR_Integer) 1)));
                    query__succeeded = ((MR_tag((MR_Word) query__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                    if (query__succeeded)
                      {
                        query__DeepFileName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_28_28, (MR_Integer) 0)));
                        query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_28_28, (MR_Integer) 1)));
                        query__succeeded = (query__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (query__succeeded)
                          {
                            {
                              query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, 0) = ((MR_Box) (query__CmdStr_31));
                            }
                            {
                              query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, 0) = ((MR_Box) (query__PrefsStr_22));
                            }
                            query__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    if (query__succeeded)
      {
        MR_Word query__MaybeCmd_8;
        MR_Word query__MaybePreferences_11;
        MR_Word query__V_14_14;

        if ((query__MaybeCmdStr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String query__CmdStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, (MR_Integer) 0)));
            MR_Word query__V_12_12;
            MR_Word query__MaybeCmd_36;

            {
              query__MaybeCmd_36 = query__string_to_maybe_cmd_1_f_0(query__CmdStr_9);
            }
            if ((query__MaybeCmd_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              query__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
            else
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybeCmd_36, (MR_Integer) 0)));
            {
              query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), query__MaybeCmd_8, 0) = ((MR_Box) (query__V_12_12));
            }
          }
        if ((query__MaybePrefStr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          query__MaybePreferences_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String query__PrefStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, (MR_Integer) 0)));

            {
              query__MaybePreferences_11 = query__string_to_maybe_pref_1_f_0(query__PrefStr_10);
            }
          }
        {
          query__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), query__V_14_14, 0) = ((MR_Box) (query__MaybeCmd_8));
          MR_hl_field(MR_mktag(0), query__V_14_14, 1) = ((MR_Box) (query__DeepFileName_7));
          MR_hl_field(MR_mktag(0), query__V_14_14, 2) = ((MR_Box) (query__MaybePreferences_11));
        }
        {
          query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), query__MaybeDeepQuery_4, 0) = ((MR_Box) (query__V_14_14));
        }
      }
    else
      query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return query__MaybeDeepQuery_4;
  }
}

MR_String MR_CALL 
query__query_to_string_1_f_0(
  MR_Word query__DeepQuery_3)
{
  {
    MR_bool query__succeeded;
    MR_String query__String_4;
    MR_Word query__Cmd_5;
    MR_String query__DeepFileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 1)));
    MR_Word query__MaybePreferences_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 2)));
    MR_String query__PreferencesString_9;
    MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 0)));
    MR_String query__V_11_11;
    MR_String query__V_12_12;
    MR_String query__V_13_13;
    MR_String query__V_15_15;
    MR_String query__V_16_16;
    MR_String query__V_17_17;

    query__Cmd_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_10_10, (MR_Integer) 0)));
    if ((query__MaybePreferences_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      query__PreferencesString_9 = (MR_String) "";
    else
      {
        MR_Word query__Preferences_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybePreferences_7, (MR_Integer) 0)));

        {
          query__PreferencesString_9 = query__preferences_to_string_1_f_0(query__Preferences_8);
        }
      }
    {
      query__V_11_11 = query__cmd_to_string_1_f_0(query__Cmd_5);
    }
    {
      query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
    {
      query__V_17_17 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
    {
      query__V_16_16 = mercury__string__f_43_43_2_f_0(query__V_17_17, query__DeepFileName_6);
    }
    {
      query__V_15_15 = mercury__string__f_43_43_2_f_0(query__PreferencesString_9, query__V_16_16);
    }
    {
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
    }
    {
      query__String_4 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
    }
    return query__String_4;
  }
}

static void MR_CALL 
query__try_exec_4_p_0_1(
  MR_Box query__closure_arg,
  MR_Box * query__wrapper_arg_1)
{
  {
    MR_Box query__closure = query__closure_arg;
    MR_String query__conv0_HTMLStr_8;

    {
      query__exec_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 5))), &query__conv0_HTMLStr_8);
    }
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HTMLStr_8));
  }
}

void MR_CALL 
query__try_exec_4_p_0(
  MR_Word query__Cmd_5,
  MR_Word query__Pref_6,
  MR_Word query__Deep_7,
  MR_String * query__HTML_8)
{
  {
    MR_bool query__succeeded;
    MR_Word query__TypeCtorInfo_34_34;
    MR_Word query__Result_9;
    MR_Word query__V_19_19;

    {
      query__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), query__V_19_19, 0) = ((MR_Box) (&query_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), query__V_19_19, 1) = ((MR_Box) (query__try_exec_4_p_0_1));
      MR_hl_field(MR_mktag(0), query__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), query__V_19_19, 3) = ((MR_Box) (query__Cmd_5));
      MR_hl_field(MR_mktag(0), query__V_19_19, 4) = ((MR_Box) (query__Pref_6));
      MR_hl_field(MR_mktag(0), query__V_19_19, 5) = ((MR_Box) (query__Deep_7));
    }
    query__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__exception__try_2_p_0(query__TypeCtorInfo_34_34, query__V_19_19, &query__Result_9);
    }
    if (((MR_tag((MR_Word) query__Result_9)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word query__Exception_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Result_9, (MR_Integer) 0)));
        MR_String query__Msg_12;
        MR_String query__V_39_39;
        MR_String query__MsgPrime_11;
        MR_Box query__conv1_MsgPrime_11;

        {
          query__succeeded = mercury__univ__univ_to_type_2_p_0(query__TypeCtorInfo_34_34, query__Exception_10, &query__conv1_MsgPrime_11);
        }
        if (query__succeeded)
          {
            query__MsgPrime_11 = ((MR_String) query__conv1_MsgPrime_11);
            query__succeeded = MR_TRUE;
          }
        if (query__succeeded)
          query__Msg_12 = query__MsgPrime_11;
        else
          {
            MR_String query__ErrorMsg_13;
            MR_Word query__V_20_20;
            MR_Box query__conv2_V_20_20;

            {
              query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0, query__Exception_10, &query__conv2_V_20_20);
            }
            if (query__succeeded)
              {
                query__V_20_20 = ((MR_Word) query__conv2_V_20_20);
                query__succeeded = MR_TRUE;
              }
            if (query__succeeded)
              {
                query__ErrorMsg_13 = (MR_String) query__V_20_20;
                query__succeeded = MR_TRUE;
              }
            if (query__succeeded)
              {
                {
                  query__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "internal software error: ", query__ErrorMsg_13);
                }
              }
            else
              {
                MR_String query__DomainMsg_14;
                MR_Word query__V_22_22;
                MR_Box query__conv3_V_22_22;

                {
                  query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__math__math__type_ctor_info_domain_error_0, query__Exception_10, &query__conv3_V_22_22);
                }
                if (query__succeeded)
                  {
                    query__V_22_22 = ((MR_Word) query__conv3_V_22_22);
                    query__succeeded = MR_TRUE;
                  }
                if (query__succeeded)
                  {
                    query__DomainMsg_14 = (MR_String) query__V_22_22;
                    query__succeeded = MR_TRUE;
                  }
                if (query__succeeded)
                  {
                    {
                      query__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "domain error: ", query__DomainMsg_14);
                    }
                  }
                else
                  query__Msg_12 = (MR_String) "unknown exception";
              }
          }
        {
          query__V_39_39 = mercury__string__f_43_43_2_f_0(query__Msg_12, (MR_String) "</H3>\n");
        }
        {
          *query__HTML_8 = mercury__string__f_43_43_2_f_0((MR_String) "<H3>AN EXCEPTION HAS OCCURRED: ", query__V_39_39);
        }
      }
    else
      *query__HTML_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Result_9, (MR_Integer) 0)));
  }
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
	MR_register_type_ctor_info(&query__query__type_ctor_info_resp_0);
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

/* :- end_module query. */
