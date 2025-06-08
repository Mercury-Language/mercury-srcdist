/*
** Automatically generated from `grade_vars.m'
** by the Mercury compiler,
** version rotd-2025-06-08
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


// :- module grade_lib.grade_vars.
// :- implementation.

/*
INIT mercury__grade_lib__grade_vars__init
ENDINIT
*/

#include "grade_lib.grade_vars.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "grade_lib.grade_solver.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"




static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_vars__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_backend_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_backend_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_backend_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_debug_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_debug_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_debug_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_deep_prof_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_deep_prof_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_deep_prof_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_2;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_3;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_4;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_5;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_gc_0[6];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_gc_0[6];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_gc_0[6];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_2;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_3;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_4;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_5;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_gcc_conf_0[6];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_gcc_conf_0[6];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_gcc_conf_0[6];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_low_tag_bits_use_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_low_tag_bits_use_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_low_tag_bits_use_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_merc_file_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_merc_file_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_merc_file_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_merc_float_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_merc_float_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_merc_float_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_2;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_3;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_4;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_minmodel_0[5];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_minmodel_0[5];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_minmodel_0[5];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_call_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_call_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_call_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_memory_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_memory_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_memory_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_time_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_time_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_time_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_nested_funcs_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_nested_funcs_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_nested_funcs_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_pregen_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_pregen_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_pregen_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_debug_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_debug_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_debug_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_prof_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_prof_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_prof_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_ssdebug_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_ssdebug_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_ssdebug_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_stack_len_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_stack_len_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_stack_len_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_target_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_target_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_target_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_target_debug_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_target_debug_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_target_debug_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_term_size_prof_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_term_size_prof_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_term_size_prof_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_thread_safe_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_thread_safe_0[3];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_thread_safe_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_trail_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_trail_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_trail_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_tscope_prof_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_tscope_prof_0[2];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_tscope_prof_0[2];

static const MR_PseudoTypeInfo grade_lib__grade_vars__grade_lib__grade_vars__field_types_grade_vars_0_0[24];

static const MR_ConstString grade_lib__grade_vars__grade_lib__grade_vars__field_names_grade_vars_0_0[24];

static const MR_DuArgLocn grade_lib__grade_vars__grade_lib__grade_vars__field_locns_grade_vars_0_0[24];

static const MR_DuFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__du_functor_desc_grade_vars_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__du_stag_ordered_grade_vars_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_vars__grade_lib__grade_vars__du_ptag_ordered_grade_vars_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__du_name_ordered_grade_vars_0[1];

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_vars_0[1];

static MR_bool MR_CALL 
grade_lib__grade_vars__IntroducedFrom__pred__success_map_to_grade_vars__247__1_1_p_0(
  MR_Word STATE_VARIABLE_SuccMap_30_119);

static MR_bool MR_CALL 
grade_lib__grade_vars__success_map_to_grade_vars_1_f_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_debug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_debug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_deep_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_deep_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_gc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_gc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_gcc_conf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_gcc_conf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_low_tag_bits_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_low_tag_bits_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_merc_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_merc_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_merc_float_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_merc_float_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_minmodel_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_minmodel_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_mprof_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_mprof_memory_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_memory_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_mprof_time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_nested_funcs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_nested_funcs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_pregen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_pregen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_rbmm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_rbmm_debug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_debug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_rbmm_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_ssdebug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_ssdebug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_stack_len_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_stack_len_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_target_debug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_target_debug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_term_size_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_term_size_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_trail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_trail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_tscope_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_tscope_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box grade_lib__grade_vars_scalar_common_1[1][4];




static /* final */ const MR_Box grade_lib__grade_vars_scalar_common_1[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&grade_lib__grade_vars__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
};





static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_vars__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_0 = {
  (MR_String) "grade_var_backend_mlds",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_1 = {
  (MR_String) "grade_var_backend_llds",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_backend_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_backend_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_backend_0_0
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_backend_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_backend_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_backend_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_backend_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_backend",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_backend_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_backend_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_backend_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_0 = {
  (MR_String) "grade_var_debug_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_1 = {
  (MR_String) "grade_var_debug_debug",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_2 = {
  (MR_String) "grade_var_debug_decldebug",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_debug_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_debug_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_debug_0_0
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_debug_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_debug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_debug_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_debug_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_debug",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_debug_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_debug_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_debug_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_0 = {
  (MR_String) "grade_var_deep_prof_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_1 = {
  (MR_String) "grade_var_deep_prof_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_deep_prof_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_deep_prof_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_deep_prof_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_deep_prof_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_deep_prof_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_deep_prof_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_deep_prof_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_deep_prof",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_deep_prof_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_deep_prof_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_deep_prof_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_0 = {
  (MR_String) "grade_var_gc_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_1 = {
  (MR_String) "grade_var_gc_bdw",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_2 = {
  (MR_String) "grade_var_gc_bdw_debug",
  INT32_C(2)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_3 = {
  (MR_String) "grade_var_gc_target_native",
  INT32_C(3)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_4 = {
  (MR_String) "grade_var_gc_accurate",
  INT32_C(4)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_5 = {
  (MR_String) "grade_var_gc_history",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_gc_0[6] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_3,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_4,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_5
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_gc_0[6] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_4,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_5,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gc_0_3
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_gc_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_gc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_gc_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_gc_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_gc",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_gc_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_gc_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_gc_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_0 = {
  (MR_String) "grade_var_gcc_conf_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_1 = {
  (MR_String) "grade_var_gcc_conf_reg",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_2 = {
  (MR_String) "grade_var_gcc_conf_jump",
  INT32_C(2)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_3 = {
  (MR_String) "grade_var_gcc_conf_fast",
  INT32_C(3)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_4 = {
  (MR_String) "grade_var_gcc_conf_asm_jump",
  INT32_C(4)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_5 = {
  (MR_String) "grade_var_gcc_conf_asm_fast",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_gcc_conf_0[6] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_3,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_4,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_5
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_gcc_conf_0[6] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_5,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_4,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_3,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_gcc_conf_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_gcc_conf_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_gcc_conf_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_gcc_conf_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_gcc_conf_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_gcc_conf",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_gcc_conf_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_gcc_conf_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_gcc_conf_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_0 = {
  (MR_String) "grade_var_low_tag_bits_use_0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_1 = {
  (MR_String) "grade_var_low_tag_bits_use_2",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_2 = {
  (MR_String) "grade_var_low_tag_bits_use_3",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_low_tag_bits_use_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_low_tag_bits_use_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_low_tag_bits_use_0_2
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_low_tag_bits_use_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_low_tag_bits_use_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_low_tag_bits_use_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_low_tag_bits_use_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_low_tag_bits_use",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_low_tag_bits_use_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_low_tag_bits_use_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_low_tag_bits_use_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_0 = {
  (MR_String) "grade_var_merc_file_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_1 = {
  (MR_String) "grade_var_merc_file_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_merc_file_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_merc_file_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_file_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_merc_file_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_merc_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_merc_file_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_merc_file_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_merc_file",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_merc_file_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_merc_file_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_merc_file_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_0 = {
  (MR_String) "grade_var_merc_float_is_boxed_c_double",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_1 = {
  (MR_String) "grade_var_merc_float_is_unboxed_c_double",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_2 = {
  (MR_String) "grade_var_merc_float_is_unboxed_c_float",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_merc_float_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_merc_float_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_merc_float_0_2
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_merc_float_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_merc_float_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_merc_float_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_merc_float_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_merc_float",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_merc_float_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_merc_float_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_merc_float_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_0 = {
  (MR_String) "grade_var_minmodel_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_1 = {
  (MR_String) "grade_var_minmodel_stack_copy",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_2 = {
  (MR_String) "grade_var_minmodel_stack_copy_debug",
  INT32_C(2)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_3 = {
  (MR_String) "grade_var_minmodel_own_stack",
  INT32_C(3)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_4 = {
  (MR_String) "grade_var_minmodel_own_stack_debug",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_minmodel_0[5] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_3,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_4
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_minmodel_0[5] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_3,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_4,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_minmodel_0_2
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_minmodel_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_minmodel_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_minmodel_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_minmodel_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_minmodel",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_minmodel_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_minmodel_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_minmodel_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_0 = {
  (MR_String) "grade_var_mprof_call_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_1 = {
  (MR_String) "grade_var_mprof_call_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_call_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_call_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_call_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_mprof_call_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_mprof_call_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_mprof_call",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_call_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_call_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_0 = {
  (MR_String) "grade_var_mprof_memory_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_1 = {
  (MR_String) "grade_var_mprof_memory_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_memory_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_memory_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_memory_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_memory_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_memory_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_mprof_memory_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_mprof_memory_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_mprof_memory",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_memory_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_memory_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_memory_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_0 = {
  (MR_String) "grade_var_mprof_time_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_1 = {
  (MR_String) "grade_var_mprof_time_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_time_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_time_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_mprof_time_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_time_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_time_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_mprof_time_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_mprof_time_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_mprof_time",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_mprof_time_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_mprof_time_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_mprof_time_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_0 = {
  (MR_String) "grade_var_nested_funcs_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_1 = {
  (MR_String) "grade_var_nested_funcs_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_nested_funcs_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_nested_funcs_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_nested_funcs_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_nested_funcs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_nested_funcs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_nested_funcs_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_nested_funcs_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_nested_funcs",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_nested_funcs_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_nested_funcs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_nested_funcs_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_0 = {
  (MR_String) "grade_var_pregen_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_1 = {
  (MR_String) "grade_var_pregen_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_pregen_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_pregen_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_pregen_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_pregen_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_pregen_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_pregen_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_pregen_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_pregen",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_pregen_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_pregen_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_pregen_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_0 = {
  (MR_String) "grade_var_rbmm_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_1 = {
  (MR_String) "grade_var_rbmm_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_rbmm_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_rbmm_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_rbmm",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_0 = {
  (MR_String) "grade_var_rbmm_debug_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_1 = {
  (MR_String) "grade_var_rbmm_debug_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_debug_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_debug_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_debug_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_debug_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_debug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_rbmm_debug_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_rbmm_debug_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_rbmm_debug",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_debug_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_debug_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_debug_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_0 = {
  (MR_String) "grade_var_rbmm_prof_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_1 = {
  (MR_String) "grade_var_rbmm_prof_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_prof_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_prof_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_rbmm_prof_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_prof_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_prof_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_rbmm_prof_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_rbmm_prof_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_rbmm_prof",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_rbmm_prof_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_rbmm_prof_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_rbmm_prof_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_0 = {
  (MR_String) "grade_var_ssdebug_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_1 = {
  (MR_String) "grade_var_ssdebug_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_ssdebug_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_ssdebug_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_ssdebug_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_ssdebug_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_ssdebug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_ssdebug_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_ssdebug_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_ssdebug",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_ssdebug_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_ssdebug_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_ssdebug_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_0 = {
  (MR_String) "grade_var_stack_len_std",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_1 = {
  (MR_String) "grade_var_stack_len_segments",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_2 = {
  (MR_String) "grade_var_stack_len_extend",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_stack_len_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_stack_len_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_2,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_stack_len_0_0
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_stack_len_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_stack_len_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_stack_len_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_stack_len_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_stack_len",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_stack_len_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_stack_len_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_stack_len_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_0 = {
  (MR_String) "grade_var_target_c",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_1 = {
  (MR_String) "grade_var_target_csharp",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_2 = {
  (MR_String) "grade_var_target_java",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_target_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_target_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_0_2
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_target_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_target_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_target_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_target_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_target",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_target_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_target_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_target_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_0 = {
  (MR_String) "grade_var_target_debug_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_1 = {
  (MR_String) "grade_var_target_debug_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_target_debug_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_target_debug_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_target_debug_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_target_debug_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_target_debug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_target_debug_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_target_debug_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_target_debug",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_target_debug_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_target_debug_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_target_debug_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_0 = {
  (MR_String) "grade_var_term_size_prof_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_1 = {
  (MR_String) "grade_var_term_size_prof_cells",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_2 = {
  (MR_String) "grade_var_term_size_prof_words",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_term_size_prof_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_term_size_prof_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_term_size_prof_0_2
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_term_size_prof_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_term_size_prof_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_term_size_prof_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_term_size_prof_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_term_size_prof",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_term_size_prof_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_term_size_prof_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_term_size_prof_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_0 = {
  (MR_String) "grade_var_thread_safe_c_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_1 = {
  (MR_String) "grade_var_thread_safe_c_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_2 = {
  (MR_String) "grade_var_thread_safe_target_native",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_thread_safe_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_thread_safe_0[3] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_1,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_thread_safe_0_2
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_thread_safe_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_thread_safe_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_thread_safe_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_thread_safe_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_thread_safe",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_thread_safe_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_thread_safe_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_thread_safe_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_0 = {
  (MR_String) "grade_var_trail_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_1 = {
  (MR_String) "grade_var_trail_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_trail_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_trail_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_trail_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_trail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_trail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_trail_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_trail_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_trail",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_trail_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_trail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_trail_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_0 = {
  (MR_String) "grade_var_tscope_prof_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_1 = {
  (MR_String) "grade_var_tscope_prof_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_tscope_prof_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_tscope_prof_0[2] = {
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_0,
  &grade_lib__grade_vars__grade_lib__grade_vars__enum_functor_desc_grade_var_tscope_prof_0_1
};

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_tscope_prof_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_tscope_prof_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_var_tscope_prof_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_var_tscope_prof_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_var_tscope_prof",
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_name_ordered_grade_var_tscope_prof_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__enum_ordinal_ordered_grade_var_tscope_prof_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_var_tscope_prof_0,

};

static const MR_PseudoTypeInfo grade_lib__grade_vars__grade_lib__grade_vars__field_types_grade_vars_0_0[24] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_pregen_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_backend_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_target_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_gcc_conf_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_low_tag_bits_use_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_stack_len_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_trail_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_minmodel_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_thread_safe_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_gc_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_deep_prof_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_call_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_time_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_memory_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_tscope_prof_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_term_size_prof_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_debug_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_ssdebug_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_target_debug_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_debug_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_prof_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_merc_file_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_merc_float_0)
};

static const MR_ConstString grade_lib__grade_vars__grade_lib__grade_vars__field_names_grade_vars_0_0[24] = {
  (MR_String) "gv_pregen",
  (MR_String) "gv_backend",
  (MR_String) "gv_target",
  (MR_String) "gv_gcc_conf",
  (MR_String) "gv_low_tag_bits_use",
  (MR_String) "gv_stack_len",
  (MR_String) "gv_trail",
  (MR_String) "gv_minmodel",
  (MR_String) "gv_thread_safe",
  (MR_String) "gv_gc",
  (MR_String) "gv_deep_prof",
  (MR_String) "gv_mprof_call",
  (MR_String) "gv_mprof_time",
  (MR_String) "gv_mprof_memory",
  (MR_String) "gv_tscope_prof",
  (MR_String) "gv_term_size_prof",
  (MR_String) "gv_debug",
  (MR_String) "gv_ssdebug",
  (MR_String) "gv_target_debug",
  (MR_String) "gv_rbmm",
  (MR_String) "gv_rbmm_debug",
  (MR_String) "gv_rbmm_prof",
  (MR_String) "gv_merc_file",
  (MR_String) "gv_merc_float"
};

static const MR_DuArgLocn grade_lib__grade_vars__grade_lib__grade_vars__field_locns_grade_vars_0_0[24] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 31,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 30,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 28,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 25,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 23,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 21,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 20,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 17,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 15,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 12,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 2
  },
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
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc grade_lib__grade_vars__grade_lib__grade_vars__du_functor_desc_grade_vars_0_0 = {
  (MR_String) "grade_vars",
  INT16_C(24),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_vars__grade_lib__grade_vars__field_types_grade_vars_0_0,
  grade_lib__grade_vars__grade_lib__grade_vars__field_names_grade_vars_0_0,
  grade_lib__grade_vars__grade_lib__grade_vars__field_locns_grade_vars_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__du_stag_ordered_grade_vars_0_0[1] = { &grade_lib__grade_vars__grade_lib__grade_vars__du_functor_desc_grade_vars_0_0 };

static const MR_DuPtagLayout grade_lib__grade_vars__grade_lib__grade_vars__du_ptag_ordered_grade_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_vars__grade_lib__grade_vars__du_stag_ordered_grade_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_vars__grade_lib__grade_vars__du_name_ordered_grade_vars_0[1] = { &grade_lib__grade_vars__grade_lib__grade_vars__du_functor_desc_grade_vars_0_0 };

static const MR_Integer grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_vars_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_vars____Unify____grade_vars_0_0_10001)),
  ((MR_Box) (grade_lib__grade_vars____Compare____grade_vars_0_0_10001)),
  (MR_String) "grade_lib.grade_vars",
  (MR_String) "grade_vars",
  { grade_lib__grade_vars__grade_lib__grade_vars__du_name_ordered_grade_vars_0 },
  { grade_lib__grade_vars__grade_lib__grade_vars__du_ptag_ordered_grade_vars_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_vars__grade_lib__grade_vars__functor_number_map_grade_vars_0,

};

static MR_bool MR_CALL 
grade_lib__grade_vars__IntroducedFrom__pred__success_map_to_grade_vars__247__1_1_p_0(
  MR_Word STATE_VARIABLE_SuccMap_30_119)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), STATE_VARIABLE_SuccMap_30_119);
  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_75 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_76 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_75 == CastY_76);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 28)) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 28)) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 25)) & (MR_Integer) 7);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 25)) & (MR_Integer) 7);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 21)) & (MR_Integer) 3);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 21)) & (MR_Integer) 3);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 17)) & (MR_Integer) 7);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 17)) & (MR_Integer) 7);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 12)) & (MR_Integer) 7);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 12)) & (MR_Integer) 7);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 3);
    MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 3);
    MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX20_61 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY20_62 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX23_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY23_71 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX24_73 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY24_74 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word SubResult1_6;
    MR_Integer Var_101 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_102 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_101 < Var_102);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_101 > Var_102);
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
      MR_Integer Var_103 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_104 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_103 < Var_104);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_103 > Var_104);
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
        MR_Integer Var_105 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_106 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_105 < Var_106);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_105 > Var_106);
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
          MR_Integer Var_107 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_108 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_107 < Var_108);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_107 > Var_108);
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
          {
            MR_Word SubResult5_18;
            MR_Integer Var_109 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_110 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_109 < Var_110);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_109 > Var_110);
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
              MR_Integer Var_111 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_112 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_111 < Var_112);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_111 > Var_112);
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
                MR_Integer Var_113 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_114 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_113 < Var_114);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_113 > Var_114);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_115 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_116 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_115 < Var_116);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_115 > Var_116);
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
                    MR_Integer Var_117 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_118 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_117 < Var_118);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_117 > Var_118);
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
                      MR_Integer Var_119 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_120 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_119 < Var_120);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_119 > Var_120);
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
                        MR_Integer Var_121 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_122 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_121 < Var_122);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_121 > Var_122);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_123 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_124 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_123 < Var_124);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_123 > Var_124);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;
                            MR_Integer Var_125 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_126 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_125 < Var_126);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_125 > Var_126);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_127 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_128 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_127 < Var_128);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_127 > Var_128);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_129 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_130 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_129 < Var_130);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_129 > Var_130);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_131 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_132 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_131 < Var_132);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_131 > Var_132);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;
                                    MR_Integer Var_133 = (MR_Integer) (ArgX17_52);
                                    MR_Integer Var_134 = (MR_Integer) (ArgY17_53);

                                    succeeded = (Var_133 < Var_134);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_133 > Var_134);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;
                                      MR_Integer Var_135 = (MR_Integer) (ArgX18_55);
                                      MR_Integer Var_136 = (MR_Integer) (ArgY18_56);

                                      succeeded = (Var_135 < Var_136);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_135 > Var_136);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;
                                        MR_Integer Var_137 = (MR_Integer) (ArgX19_58);
                                        MR_Integer Var_138 = (MR_Integer) (ArgY19_59);

                                        succeeded = (Var_137 < Var_138);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_137 > Var_138);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;
                                          MR_Integer Var_139 = (MR_Integer) (ArgX20_61);
                                          MR_Integer Var_140 = (MR_Integer) (ArgY20_62);

                                          succeeded = (Var_139 < Var_140);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_139 > Var_140);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;
                                            MR_Integer Var_141 = (MR_Integer) (ArgX21_64);
                                            MR_Integer Var_142 = (MR_Integer) (ArgY21_65);

                                            succeeded = (Var_141 < Var_142);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_141 > Var_142);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;
                                              MR_Integer Var_143 = (MR_Integer) (ArgX22_67);
                                              MR_Integer Var_144 = (MR_Integer) (ArgY22_68);

                                              succeeded = (Var_143 < Var_144);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_143 > Var_144);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;
                                                MR_Integer Var_145 = (MR_Integer) (ArgX23_70);
                                                MR_Integer Var_146 = (MR_Integer) (ArgY23_71);

                                                succeeded = (Var_145 < Var_146);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_145 > Var_146);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Integer Var_147 = (MR_Integer) (ArgX24_73);
                                                  MR_Integer Var_148 = (MR_Integer) (ArgY24_74);

                                                  succeeded = (Var_147 < Var_148);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = (MR_Integer) 1;
                                                  else
                                                  {
                                                    succeeded = (Var_147 > Var_148);
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
grade_lib__grade_vars____Unify____grade_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_51 == CastY_52);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 28)) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 28)) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 25)) & (MR_Integer) 7);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 25)) & (MR_Integer) 7);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 21)) & (MR_Integer) 3);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 21)) & (MR_Integer) 3);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 17)) & (MR_Integer) 7);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 17)) & (MR_Integer) 7);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 12)) & (MR_Integer) 7);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 12)) & (MR_Integer) 7);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 5)) & (MR_Integer) 3);
    MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 3);
    MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 3);
    MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX20_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY20_42 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX23_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY23_48 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX24_49 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY24_50 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);

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
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
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
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX17_35 == ArgY17_36);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX18_37 == ArgY18_38);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX20_41 == ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX23_47 == ArgY23_48);
                                                if (succeeded)
                                                  succeeded = (ArgX24_49 == ArgY24_50);
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
grade_lib__grade_vars____Compare____grade_var_tscope_prof_0_0(
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
grade_lib__grade_vars____Unify____grade_var_tscope_prof_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_trail_0_0(
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
grade_lib__grade_vars____Unify____grade_var_trail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_thread_safe_0_0(
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
grade_lib__grade_vars____Unify____grade_var_thread_safe_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_term_size_prof_0_0(
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
grade_lib__grade_vars____Unify____grade_var_term_size_prof_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_target_debug_0_0(
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
grade_lib__grade_vars____Unify____grade_var_target_debug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_target_0_0(
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
grade_lib__grade_vars____Unify____grade_var_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_stack_len_0_0(
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
grade_lib__grade_vars____Unify____grade_var_stack_len_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_ssdebug_0_0(
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
grade_lib__grade_vars____Unify____grade_var_ssdebug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_prof_0_0(
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
grade_lib__grade_vars____Unify____grade_var_rbmm_prof_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_debug_0_0(
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
grade_lib__grade_vars____Unify____grade_var_rbmm_debug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_0_0(
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
grade_lib__grade_vars____Unify____grade_var_rbmm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_pregen_0_0(
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
grade_lib__grade_vars____Unify____grade_var_pregen_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_nested_funcs_0_0(
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
grade_lib__grade_vars____Unify____grade_var_nested_funcs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_time_0_0(
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
grade_lib__grade_vars____Unify____grade_var_mprof_time_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_memory_0_0(
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
grade_lib__grade_vars____Unify____grade_var_mprof_memory_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_call_0_0(
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
grade_lib__grade_vars____Unify____grade_var_mprof_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_minmodel_0_0(
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
grade_lib__grade_vars____Unify____grade_var_minmodel_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_merc_float_0_0(
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
grade_lib__grade_vars____Unify____grade_var_merc_float_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_merc_file_0_0(
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
grade_lib__grade_vars____Unify____grade_var_merc_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_low_tag_bits_use_0_0(
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
grade_lib__grade_vars____Unify____grade_var_low_tag_bits_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_gcc_conf_0_0(
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
grade_lib__grade_vars____Unify____grade_var_gcc_conf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_gc_0_0(
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
grade_lib__grade_vars____Unify____grade_var_gc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_deep_prof_0_0(
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
grade_lib__grade_vars____Unify____grade_var_deep_prof_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_debug_0_0(
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
grade_lib__grade_vars____Unify____grade_var_debug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_backend_0_0(
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
grade_lib__grade_vars____Unify____grade_var_backend_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
grade_lib__grade_vars__success_map_to_grade_vars_1_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = grade_lib__grade_vars__IntroducedFrom__pred__success_map_to_grade_vars__247__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

MR_Word MR_CALL 
grade_lib__grade_vars__success_map_to_grade_vars_1_f_0(
  MR_Word STATE_VARIABLE_SuccMap_0_59)
{
  MR_bool succeeded;
  MR_Word GradeVars_4;
  MR_Word MercFile_10;
  MR_Word Pregen_11;
  MR_Word Backend_12;
  MR_Word Target_13;
  MR_Word GccConf_14;
  MR_Word LowTagBitsUse_15;
  MR_Word StackLen_16;
  MR_Word Trail_17;
  MR_Word MinimalModel_18;
  MR_Word ThreadSafe_19;
  MR_Word Gc_20;
  MR_Word DeepProf_21;
  MR_Word MprofCall_22;
  MR_Word MprofTime_23;
  MR_Word MprofMemory_24;
  MR_Word TScopeProf_25;
  MR_Word TermSizeProf_26;
  MR_Word Debug_27;
  MR_Word SSDebug_28;
  MR_Word TargetDebug_29;
  MR_Word RBMM_30;
  MR_Word RBMMDebug_31;
  MR_Word RBMMProf_32;
  MR_Word MercFloat_34;
  MR_Word GradeVarPregen_35;
  MR_Word GradeVarBackend_36;
  MR_Word GradeVarTarget_37;
  MR_Word GradeVarGccConf_38;
  MR_Word GradeVarLowTagBitsUse_39;
  MR_Word GradeVarStackLen_40;
  MR_Word GradeVarTrail_41;
  MR_Word GradeVarMinimalModel_42;
  MR_Word GradeVarThreadSafe_43;
  MR_Word GradeVarGc_44;
  MR_Word GradeVarDeepProf_45;
  MR_Word GradeVarMprofCall_46;
  MR_Word GradeVarMprofTime_47;
  MR_Word GradeVarMprofMemory_48;
  MR_Word GradeVarTScopeProf_49;
  MR_Word GradeVarTermSizeProf_50;
  MR_Word GradeVarDebug_51;
  MR_Word GradeVarSSDebug_52;
  MR_Word GradeVarTargetDebug_53;
  MR_Word GradeVarRBMM_54;
  MR_Word GradeVarRBMMDebug_55;
  MR_Word GradeVarRBMMProf_56;
  MR_Word GradeVarMercFile_57;
  MR_Word GradeVarMercFloat_58;
  MR_Word STATE_VARIABLE_SuccMap_1_61;
  MR_Word STATE_VARIABLE_SuccMap_2_63;
  MR_Word STATE_VARIABLE_SuccMap_3_65;
  MR_Word STATE_VARIABLE_SuccMap_4_67;
  MR_Word STATE_VARIABLE_SuccMap_5_69;
  MR_Word STATE_VARIABLE_SuccMap_6_71;
  MR_Word STATE_VARIABLE_SuccMap_7_73;
  MR_Word STATE_VARIABLE_SuccMap_8_75;
  MR_Word STATE_VARIABLE_SuccMap_9_77;
  MR_Word STATE_VARIABLE_SuccMap_10_79;
  MR_Word STATE_VARIABLE_SuccMap_11_81;
  MR_Word STATE_VARIABLE_SuccMap_12_83;
  MR_Word STATE_VARIABLE_SuccMap_13_85;
  MR_Word STATE_VARIABLE_SuccMap_14_87;
  MR_Word STATE_VARIABLE_SuccMap_15_89;
  MR_Word STATE_VARIABLE_SuccMap_16_91;
  MR_Word STATE_VARIABLE_SuccMap_17_93;
  MR_Word STATE_VARIABLE_SuccMap_18_95;
  MR_Word STATE_VARIABLE_SuccMap_19_97;
  MR_Word STATE_VARIABLE_SuccMap_20_99;
  MR_Word STATE_VARIABLE_SuccMap_21_101;
  MR_Word STATE_VARIABLE_SuccMap_22_103;
  MR_Word STATE_VARIABLE_SuccMap_23_105;
  MR_Word STATE_VARIABLE_SuccMap_24_107;
  MR_Word STATE_VARIABLE_SuccMap_25_109;
  MR_Word STATE_VARIABLE_SuccMap_26_111;
  MR_Word STATE_VARIABLE_SuccMap_27_113;
  MR_Word STATE_VARIABLE_SuccMap_28_115;
  MR_Word STATE_VARIABLE_SuccMap_29_117;
  MR_Word STATE_VARIABLE_SuccMap_30_119;
  MR_Word Var_120;
  MR_Box conv0__GccRegsAvail_5;
  MR_Box conv1__GccGotosAvail_6;
  MR_Box conv2__GccLabelsAvail_7;
  MR_Box conv3__LowTagBitsAvail_8;
  MR_Box conv4__SizeOfDouble_9;
  MR_Box conv5_MercFile_10;
  MR_Box conv6_Pregen_11;
  MR_Box conv7_Backend_12;
  MR_Box conv8_Target_13;
  MR_Box conv9_GccConf_14;
  MR_Box conv10_LowTagBitsUse_15;
  MR_Box conv11_StackLen_16;
  MR_Box conv12_Trail_17;
  MR_Box conv13_MinimalModel_18;
  MR_Box conv14_ThreadSafe_19;
  MR_Box conv15_Gc_20;
  MR_Box conv16_DeepProf_21;
  MR_Box conv17_MprofCall_22;
  MR_Box conv18_MprofTime_23;
  MR_Box conv19_MprofMemory_24;
  MR_Box conv20_TScopeProf_25;
  MR_Box conv21_TermSizeProf_26;
  MR_Box conv22_Debug_27;
  MR_Box conv23_SSDebug_28;
  MR_Box conv24_TargetDebug_29;
  MR_Box conv25_RBMM_30;
  MR_Box conv26_RBMMDebug_31;
  MR_Box conv27_RBMMProf_32;
  MR_Box conv28__ReqSinglePrecFloat_33;
  MR_Box conv29_MercFloat_34;

  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 0)), &conv0__GccRegsAvail_5, STATE_VARIABLE_SuccMap_0_59, &STATE_VARIABLE_SuccMap_1_61);
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 1)), &conv1__GccGotosAvail_6, STATE_VARIABLE_SuccMap_1_61, &STATE_VARIABLE_SuccMap_2_63);
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 2)), &conv2__GccLabelsAvail_7, STATE_VARIABLE_SuccMap_2_63, &STATE_VARIABLE_SuccMap_3_65);
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 3)), &conv3__LowTagBitsAvail_8, STATE_VARIABLE_SuccMap_3_65, &STATE_VARIABLE_SuccMap_4_67);
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 4)), &conv4__SizeOfDouble_9, STATE_VARIABLE_SuccMap_4_67, &STATE_VARIABLE_SuccMap_5_69);
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 5)), &conv5_MercFile_10, STATE_VARIABLE_SuccMap_5_69, &STATE_VARIABLE_SuccMap_6_71);
  MercFile_10 = ((MR_Word) (conv5_MercFile_10));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 27)), &conv6_Pregen_11, STATE_VARIABLE_SuccMap_6_71, &STATE_VARIABLE_SuccMap_7_73);
  Pregen_11 = ((MR_Word) (conv6_Pregen_11));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 6)), &conv7_Backend_12, STATE_VARIABLE_SuccMap_7_73, &STATE_VARIABLE_SuccMap_8_75);
  Backend_12 = ((MR_Word) (conv7_Backend_12));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 7)), &conv8_Target_13, STATE_VARIABLE_SuccMap_8_75, &STATE_VARIABLE_SuccMap_9_77);
  Target_13 = ((MR_Word) (conv8_Target_13));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 8)), &conv9_GccConf_14, STATE_VARIABLE_SuccMap_9_77, &STATE_VARIABLE_SuccMap_10_79);
  GccConf_14 = ((MR_Word) (conv9_GccConf_14));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 9)), &conv10_LowTagBitsUse_15, STATE_VARIABLE_SuccMap_10_79, &STATE_VARIABLE_SuccMap_11_81);
  LowTagBitsUse_15 = ((MR_Word) (conv10_LowTagBitsUse_15));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 10)), &conv11_StackLen_16, STATE_VARIABLE_SuccMap_11_81, &STATE_VARIABLE_SuccMap_12_83);
  StackLen_16 = ((MR_Word) (conv11_StackLen_16));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 11)), &conv12_Trail_17, STATE_VARIABLE_SuccMap_12_83, &STATE_VARIABLE_SuccMap_13_85);
  Trail_17 = ((MR_Word) (conv12_Trail_17));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 12)), &conv13_MinimalModel_18, STATE_VARIABLE_SuccMap_13_85, &STATE_VARIABLE_SuccMap_14_87);
  MinimalModel_18 = ((MR_Word) (conv13_MinimalModel_18));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 13)), &conv14_ThreadSafe_19, STATE_VARIABLE_SuccMap_14_87, &STATE_VARIABLE_SuccMap_15_89);
  ThreadSafe_19 = ((MR_Word) (conv14_ThreadSafe_19));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 14)), &conv15_Gc_20, STATE_VARIABLE_SuccMap_15_89, &STATE_VARIABLE_SuccMap_16_91);
  Gc_20 = ((MR_Word) (conv15_Gc_20));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 15)), &conv16_DeepProf_21, STATE_VARIABLE_SuccMap_16_91, &STATE_VARIABLE_SuccMap_17_93);
  DeepProf_21 = ((MR_Word) (conv16_DeepProf_21));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 16)), &conv17_MprofCall_22, STATE_VARIABLE_SuccMap_17_93, &STATE_VARIABLE_SuccMap_18_95);
  MprofCall_22 = ((MR_Word) (conv17_MprofCall_22));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 17)), &conv18_MprofTime_23, STATE_VARIABLE_SuccMap_18_95, &STATE_VARIABLE_SuccMap_19_97);
  MprofTime_23 = ((MR_Word) (conv18_MprofTime_23));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 18)), &conv19_MprofMemory_24, STATE_VARIABLE_SuccMap_19_97, &STATE_VARIABLE_SuccMap_20_99);
  MprofMemory_24 = ((MR_Word) (conv19_MprofMemory_24));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 19)), &conv20_TScopeProf_25, STATE_VARIABLE_SuccMap_20_99, &STATE_VARIABLE_SuccMap_21_101);
  TScopeProf_25 = ((MR_Word) (conv20_TScopeProf_25));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 20)), &conv21_TermSizeProf_26, STATE_VARIABLE_SuccMap_21_101, &STATE_VARIABLE_SuccMap_22_103);
  TermSizeProf_26 = ((MR_Word) (conv21_TermSizeProf_26));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 21)), &conv22_Debug_27, STATE_VARIABLE_SuccMap_22_103, &STATE_VARIABLE_SuccMap_23_105);
  Debug_27 = ((MR_Word) (conv22_Debug_27));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 22)), &conv23_SSDebug_28, STATE_VARIABLE_SuccMap_23_105, &STATE_VARIABLE_SuccMap_24_107);
  SSDebug_28 = ((MR_Word) (conv23_SSDebug_28));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 23)), &conv24_TargetDebug_29, STATE_VARIABLE_SuccMap_24_107, &STATE_VARIABLE_SuccMap_25_109);
  TargetDebug_29 = ((MR_Word) (conv24_TargetDebug_29));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 24)), &conv25_RBMM_30, STATE_VARIABLE_SuccMap_25_109, &STATE_VARIABLE_SuccMap_26_111);
  RBMM_30 = ((MR_Word) (conv25_RBMM_30));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 25)), &conv26_RBMMDebug_31, STATE_VARIABLE_SuccMap_26_111, &STATE_VARIABLE_SuccMap_27_113);
  RBMMDebug_31 = ((MR_Word) (conv26_RBMMDebug_31));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 26)), &conv27_RBMMProf_32, STATE_VARIABLE_SuccMap_27_113, &STATE_VARIABLE_SuccMap_28_115);
  RBMMProf_32 = ((MR_Word) (conv27_RBMMProf_32));
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 28)), &conv28__ReqSinglePrecFloat_33, STATE_VARIABLE_SuccMap_28_115, &STATE_VARIABLE_SuccMap_29_117);
  mercury__map__det_remove_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) ((MR_Integer) 29)), &conv29_MercFloat_34, STATE_VARIABLE_SuccMap_29_117, &STATE_VARIABLE_SuccMap_30_119);
  MercFloat_34 = ((MR_Word) (conv29_MercFloat_34));
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (&grade_lib__grade_vars_scalar_common_1[0]));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (grade_lib__grade_vars__success_map_to_grade_vars_1_f_0_1));
    MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_120, 3) = ((MR_Box) (STATE_VARIABLE_SuccMap_30_119));
  }
  mercury__require__expect_3_p_0(Var_120, (MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected entries in SuccMap");
  succeeded = (Pregen_11 == (MR_Integer) 72);
  if (succeeded)
    GradeVarPregen_35 = (MR_Integer) 0;
  else
  {
    succeeded = (Pregen_11 == (MR_Integer) 73);
    if (succeeded)
      GradeVarPregen_35 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of Pregen");
  }
  succeeded = (Backend_12 == (MR_Integer) 13);
  if (succeeded)
    GradeVarBackend_36 = (MR_Integer) 0;
  else
  {
    succeeded = (Backend_12 == (MR_Integer) 14);
    if (succeeded)
      GradeVarBackend_36 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of Backend");
  }
  succeeded = (Target_13 == (MR_Integer) 15);
  if (succeeded)
    GradeVarTarget_37 = (MR_Integer) 0;
  else
  {
    succeeded = (Target_13 == (MR_Integer) 16);
    if (succeeded)
      GradeVarTarget_37 = (MR_Integer) 1;
    else
    {
      succeeded = (Target_13 == (MR_Integer) 17);
      if (succeeded)
        GradeVarTarget_37 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of Target");
    }
  }
  succeeded = (GccConf_14 == (MR_Integer) 18);
  if (succeeded)
    GradeVarGccConf_38 = (MR_Integer) 0;
  else
  {
    succeeded = (GccConf_14 == (MR_Integer) 19);
    if (succeeded)
      GradeVarGccConf_38 = (MR_Integer) 1;
    else
    {
      succeeded = (GccConf_14 == (MR_Integer) 20);
      if (succeeded)
        GradeVarGccConf_38 = (MR_Integer) 2;
      else
      {
        succeeded = (GccConf_14 == (MR_Integer) 21);
        if (succeeded)
          GradeVarGccConf_38 = (MR_Integer) 3;
        else
        {
          succeeded = (GccConf_14 == (MR_Integer) 22);
          if (succeeded)
            GradeVarGccConf_38 = (MR_Integer) 4;
          else
          {
            succeeded = (GccConf_14 == (MR_Integer) 23);
            if (succeeded)
              GradeVarGccConf_38 = (MR_Integer) 5;
            else
              mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of GccConf");
          }
        }
      }
    }
  }
  succeeded = (LowTagBitsUse_15 == (MR_Integer) 24);
  if (succeeded)
    GradeVarLowTagBitsUse_39 = (MR_Integer) 0;
  else
  {
    succeeded = (LowTagBitsUse_15 == (MR_Integer) 25);
    if (succeeded)
      GradeVarLowTagBitsUse_39 = (MR_Integer) 1;
    else
    {
      succeeded = (LowTagBitsUse_15 == (MR_Integer) 26);
      if (succeeded)
        GradeVarLowTagBitsUse_39 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of LowTagBitsUse");
    }
  }
  succeeded = (StackLen_16 == (MR_Integer) 27);
  if (succeeded)
    GradeVarStackLen_40 = (MR_Integer) 0;
  else
  {
    succeeded = (StackLen_16 == (MR_Integer) 28);
    if (succeeded)
      GradeVarStackLen_40 = (MR_Integer) 1;
    else
    {
      succeeded = (StackLen_16 == (MR_Integer) 29);
      if (succeeded)
        GradeVarStackLen_40 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of StackLen");
    }
  }
  succeeded = (Trail_17 == (MR_Integer) 30);
  if (succeeded)
    GradeVarTrail_41 = (MR_Integer) 0;
  else
  {
    succeeded = (Trail_17 == (MR_Integer) 31);
    if (succeeded)
      GradeVarTrail_41 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of Trail");
  }
  succeeded = (MinimalModel_18 == (MR_Integer) 32);
  if (succeeded)
    GradeVarMinimalModel_42 = (MR_Integer) 0;
  else
  {
    succeeded = (MinimalModel_18 == (MR_Integer) 33);
    if (succeeded)
      GradeVarMinimalModel_42 = (MR_Integer) 1;
    else
    {
      succeeded = (MinimalModel_18 == (MR_Integer) 34);
      if (succeeded)
        GradeVarMinimalModel_42 = (MR_Integer) 2;
      else
      {
        succeeded = (MinimalModel_18 == (MR_Integer) 35);
        if (succeeded)
          GradeVarMinimalModel_42 = (MR_Integer) 3;
        else
        {
          succeeded = (MinimalModel_18 == (MR_Integer) 36);
          if (succeeded)
            GradeVarMinimalModel_42 = (MR_Integer) 4;
          else
            mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of MinimalModel");
        }
      }
    }
  }
  succeeded = (ThreadSafe_19 == (MR_Integer) 37);
  if (succeeded)
    GradeVarThreadSafe_43 = (MR_Integer) 0;
  else
  {
    succeeded = (ThreadSafe_19 == (MR_Integer) 38);
    if (succeeded)
      GradeVarThreadSafe_43 = (MR_Integer) 1;
    else
    {
      succeeded = (ThreadSafe_19 == (MR_Integer) 39);
      if (succeeded)
        GradeVarThreadSafe_43 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of ThreadSafe");
    }
  }
  succeeded = (Gc_20 == (MR_Integer) 40);
  if (succeeded)
    GradeVarGc_44 = (MR_Integer) 0;
  else
  {
    succeeded = (Gc_20 == (MR_Integer) 41);
    if (succeeded)
      GradeVarGc_44 = (MR_Integer) 1;
    else
    {
      succeeded = (Gc_20 == (MR_Integer) 42);
      if (succeeded)
        GradeVarGc_44 = (MR_Integer) 2;
      else
      {
        succeeded = (Gc_20 == (MR_Integer) 43);
        if (succeeded)
          GradeVarGc_44 = (MR_Integer) 3;
        else
        {
          succeeded = (Gc_20 == (MR_Integer) 44);
          if (succeeded)
            GradeVarGc_44 = (MR_Integer) 4;
          else
          {
            succeeded = (Gc_20 == (MR_Integer) 45);
            if (succeeded)
              GradeVarGc_44 = (MR_Integer) 5;
            else
              mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of Gc");
          }
        }
      }
    }
  }
  succeeded = (DeepProf_21 == (MR_Integer) 46);
  if (succeeded)
    GradeVarDeepProf_45 = (MR_Integer) 0;
  else
  {
    succeeded = (DeepProf_21 == (MR_Integer) 47);
    if (succeeded)
      GradeVarDeepProf_45 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of DeepProf");
  }
  succeeded = (MprofCall_22 == (MR_Integer) 48);
  if (succeeded)
    GradeVarMprofCall_46 = (MR_Integer) 0;
  else
  {
    succeeded = (MprofCall_22 == (MR_Integer) 49);
    if (succeeded)
      GradeVarMprofCall_46 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of MprofCall");
  }
  succeeded = (MprofTime_23 == (MR_Integer) 50);
  if (succeeded)
    GradeVarMprofTime_47 = (MR_Integer) 0;
  else
  {
    succeeded = (MprofTime_23 == (MR_Integer) 51);
    if (succeeded)
      GradeVarMprofTime_47 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of MprofTime");
  }
  succeeded = (MprofMemory_24 == (MR_Integer) 52);
  if (succeeded)
    GradeVarMprofMemory_48 = (MR_Integer) 0;
  else
  {
    succeeded = (MprofMemory_24 == (MR_Integer) 53);
    if (succeeded)
      GradeVarMprofMemory_48 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of MprofMemory");
  }
  succeeded = (TScopeProf_25 == (MR_Integer) 54);
  if (succeeded)
    GradeVarTScopeProf_49 = (MR_Integer) 0;
  else
  {
    succeeded = (TScopeProf_25 == (MR_Integer) 55);
    if (succeeded)
      GradeVarTScopeProf_49 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of TScopeProf");
  }
  succeeded = (TermSizeProf_26 == (MR_Integer) 56);
  if (succeeded)
    GradeVarTermSizeProf_50 = (MR_Integer) 0;
  else
  {
    succeeded = (TermSizeProf_26 == (MR_Integer) 57);
    if (succeeded)
      GradeVarTermSizeProf_50 = (MR_Integer) 1;
    else
    {
      succeeded = (TermSizeProf_26 == (MR_Integer) 58);
      if (succeeded)
        GradeVarTermSizeProf_50 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of TermSizeProf");
    }
  }
  succeeded = (Debug_27 == (MR_Integer) 59);
  if (succeeded)
    GradeVarDebug_51 = (MR_Integer) 0;
  else
  {
    succeeded = (Debug_27 == (MR_Integer) 60);
    if (succeeded)
      GradeVarDebug_51 = (MR_Integer) 1;
    else
    {
      succeeded = (Debug_27 == (MR_Integer) 61);
      if (succeeded)
        GradeVarDebug_51 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of Debug");
    }
  }
  succeeded = (SSDebug_28 == (MR_Integer) 62);
  if (succeeded)
    GradeVarSSDebug_52 = (MR_Integer) 0;
  else
  {
    succeeded = (SSDebug_28 == (MR_Integer) 63);
    if (succeeded)
      GradeVarSSDebug_52 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of SSDebug");
  }
  succeeded = (TargetDebug_29 == (MR_Integer) 64);
  if (succeeded)
    GradeVarTargetDebug_53 = (MR_Integer) 0;
  else
  {
    succeeded = (TargetDebug_29 == (MR_Integer) 65);
    if (succeeded)
      GradeVarTargetDebug_53 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of TargetDebug");
  }
  succeeded = (RBMM_30 == (MR_Integer) 66);
  if (succeeded)
    GradeVarRBMM_54 = (MR_Integer) 0;
  else
  {
    succeeded = (RBMM_30 == (MR_Integer) 67);
    if (succeeded)
      GradeVarRBMM_54 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of RBMM");
  }
  succeeded = (RBMMDebug_31 == (MR_Integer) 68);
  if (succeeded)
    GradeVarRBMMDebug_55 = (MR_Integer) 0;
  else
  {
    succeeded = (RBMMDebug_31 == (MR_Integer) 69);
    if (succeeded)
      GradeVarRBMMDebug_55 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of RBMMDebug");
  }
  succeeded = (RBMMProf_32 == (MR_Integer) 70);
  if (succeeded)
    GradeVarRBMMProf_56 = (MR_Integer) 0;
  else
  {
    succeeded = (RBMMProf_32 == (MR_Integer) 71);
    if (succeeded)
      GradeVarRBMMProf_56 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of RBMMProf");
  }
  succeeded = (MercFile_10 == (MR_Integer) 11);
  if (succeeded)
    GradeVarMercFile_57 = (MR_Integer) 0;
  else
  {
    succeeded = (MercFile_10 == (MR_Integer) 12);
    if (succeeded)
      GradeVarMercFile_57 = (MR_Integer) 1;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of MercFile");
  }
  succeeded = (MercFloat_34 == (MR_Integer) 76);
  if (succeeded)
    GradeVarMercFloat_58 = (MR_Integer) 0;
  else
  {
    succeeded = (MercFloat_34 == (MR_Integer) 77);
    if (succeeded)
      GradeVarMercFloat_58 = (MR_Integer) 1;
    else
    {
      succeeded = (MercFloat_34 == (MR_Integer) 78);
      if (succeeded)
        GradeVarMercFloat_58 = (MR_Integer) 2;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_vars.success_map_to_grade_vars\'/1", (MR_String) "unexpected value of MercFloat");
    }
  }
  {
    GradeVars_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GradeVars_4, 0) = (MR_Box) (((((MR_Unsigned) (GradeVarPregen_35) << 31)) | (((((MR_Unsigned) (GradeVarBackend_36) << 30)) | (((((MR_Unsigned) (GradeVarTarget_37) << 28)) | (((((MR_Unsigned) (GradeVarGccConf_38) << 25)) | (((((MR_Unsigned) (GradeVarLowTagBitsUse_39) << 23)) | (((((MR_Unsigned) (GradeVarStackLen_40) << 21)) | (((((MR_Unsigned) (GradeVarTrail_41) << 20)) | (((((MR_Unsigned) (GradeVarMinimalModel_42) << 17)) | (((((MR_Unsigned) (GradeVarThreadSafe_43) << 15)) | (((((MR_Unsigned) (GradeVarGc_44) << 12)) | (((((MR_Unsigned) (GradeVarDeepProf_45) << 11)) | (((((MR_Unsigned) (GradeVarMprofCall_46) << 10)) | (((((MR_Unsigned) (GradeVarMprofTime_47) << 9)) | (((((MR_Unsigned) (GradeVarMprofMemory_48) << 8)) | (((((MR_Unsigned) (GradeVarTScopeProf_49) << 7)) | (((((MR_Unsigned) (GradeVarTermSizeProf_50) << 5)) | (((((MR_Unsigned) (GradeVarDebug_51) << 3)) | (((((MR_Unsigned) (GradeVarSSDebug_52) << 2)) | (((((MR_Unsigned) (GradeVarTargetDebug_53) << 1)) | (MR_Unsigned) (GradeVarRBMM_54)))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, GradeVars_4, 1) = (MR_Box) (((((MR_Unsigned) (GradeVarRBMMDebug_55) << 4)) | (((((MR_Unsigned) (GradeVarRBMMProf_56) << 3)) | (((((MR_Unsigned) (GradeVarMercFile_57) << 2)) | (MR_Unsigned) (GradeVarMercFloat_58)))))));
  }
  return GradeVars_4;
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_backend_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_backend_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_debug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_debug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_debug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_debug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_deep_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_deep_prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_deep_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_deep_prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_gc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_gc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_gc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_gc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_gcc_conf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_gcc_conf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_gcc_conf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_gcc_conf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_low_tag_bits_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_low_tag_bits_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_low_tag_bits_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_low_tag_bits_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_merc_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_merc_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_merc_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_merc_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_merc_float_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_merc_float_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_merc_float_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_merc_float_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_minmodel_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_minmodel_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_minmodel_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_minmodel_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_mprof_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_mprof_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_mprof_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_mprof_memory_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_mprof_memory_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_memory_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_mprof_memory_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_mprof_time_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_mprof_time_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_mprof_time_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_mprof_time_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_nested_funcs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_nested_funcs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_nested_funcs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_nested_funcs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_pregen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_pregen_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_pregen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_pregen_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_rbmm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_rbmm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_rbmm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_rbmm_debug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_rbmm_debug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_debug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_rbmm_debug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_rbmm_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_rbmm_prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_rbmm_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_rbmm_prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_ssdebug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_ssdebug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_ssdebug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_ssdebug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_stack_len_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_stack_len_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_stack_len_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_stack_len_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_target_debug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_target_debug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_target_debug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_target_debug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_term_size_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_term_size_prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_term_size_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_term_size_prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_thread_safe_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_thread_safe_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_trail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_trail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_trail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_trail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_var_tscope_prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_var_tscope_prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_var_tscope_prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_var_tscope_prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_vars____Unify____grade_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_vars____Unify____grade_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_vars____Compare____grade_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_vars____Compare____grade_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__grade_lib__grade_vars__init(void)
{
}

void mercury__grade_lib__grade_vars__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_backend_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_debug_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_deep_prof_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_gc_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_gcc_conf_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_low_tag_bits_use_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_merc_file_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_merc_float_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_minmodel_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_call_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_memory_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_mprof_time_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_nested_funcs_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_pregen_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_debug_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_rbmm_prof_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_ssdebug_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_stack_len_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_target_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_target_debug_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_term_size_prof_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_thread_safe_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_trail_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_var_tscope_prof_0);
  MR_register_type_ctor_info(&grade_lib__grade_vars__grade_lib__grade_vars__type_ctor_info_grade_vars_0);
}

void mercury__grade_lib__grade_vars__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_vars__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module grade_lib.grade_vars.
