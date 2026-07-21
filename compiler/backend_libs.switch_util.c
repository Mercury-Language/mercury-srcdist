/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2026-07-21
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


// :- module backend_libs.switch_util.
// :- implementation.

/*
INIT mercury__backend_libs__switch_util__init
ENDINIT
*/

#include "backend_libs.switch_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_classify.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_int_switch_info_0_0[4];

static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_int_switch_info_0_0[4];

static const MR_DuArgLocn backend_libs__switch_util__backend_libs__switch_util__field_locns_int_switch_info_0_0[4];

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_info_0_0;

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_int_switch_info_0_0[1];

static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_int_switch_info_0[1];

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_int_switch_info_0[1];

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_int_switch_info_0[1];

static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_int_switch_limits_0_0[2];

static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_int_switch_limits_0_0[2];

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_limits_0_0;

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_int_switch_limits_0_0[1];

static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_int_switch_limits_0[1];

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_int_switch_limits_0[1];

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_int_switch_limits_0[1];

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0;

static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_1[1];

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1;

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1];

static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2];

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2];

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2];

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0;

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1;

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2;

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3;

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_4;

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_5;

static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_ordinal_ordered_switch_category_0[6];

static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[6];

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[6];

static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__type_class_id_var_names_int_tag_value_1[1];

static const MR_TypeClassMethod backend_libs__switch_util__backend_libs__switch_util__type_class_id_method_ids_int_tag_value_1[4];

static const MR_TypeClassId backend_libs__switch_util__backend_libs__switch_util__type_class_id_int_tag_value_1;

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  MR_Integer IW_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  MR_Integer * TagVal_4);

static MR_Integer MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static MR_Integer MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int8_t I8_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int8_t * TagVal_4);

static int8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2);

static int8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int16_t I16_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int16_t * TagVal_4);

static int16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int16_t HeadVar__1_1,
  int16_t HeadVar__2_2);

static int16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int16_t HeadVar__1_1,
  int16_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int32_t I32_5,
  int32_t * I32_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int32_t * TagVal_4);

static int32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2);

static int32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int64_t I64_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int64_t * TagVal_4);

static int64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2);

static int64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  MR_Unsigned UW_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  MR_Unsigned * TagVal_4);

static MR_Unsigned MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2);

static MR_Unsigned MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint8_t U8_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint8_t * TagVal_4);

static uint8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2);

static uint8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint16_t U16_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint16_t * TagVal_4);

static uint16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2);

static uint16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint32_t U32_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint32_t * TagVal_4);

static uint32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2);

static uint32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint64_t U64_5,
  int32_t * I32_6);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint64_t * TagVal_4);

static uint64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2);

static uint64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__fit_into_int32_2_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_3,
  MR_Box HeadVar__1_1,
  int32_t * HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__cons_tag_is_int_tag_2_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_3,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2);

static MR_Box MR_CALL 
backend_libs__switch_util__int_tag_max_2_f_0(
  MR_Word TypeClassInfo_for_int_tag_value_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_Box MR_CALL 
backend_libs__switch_util__int_tag_min_2_f_0(
  MR_Word TypeClassInfo_for_int_tag_value_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__switch_util__num_is_in_range_3_p_0(
  MR_Integer PredIdInt_4,
  MR_String MinStr_5,
  MR_String MaxStr_6);

static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5,
  MR_Word * TaggedConsId_6);

static MR_Word MR_CALL 
backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(
  MR_Word CtorCat_3);

static MR_Word MR_CALL 
backend_libs__switch_util__is_smart_indexing_allowed_for_category_2_f_0(
  MR_Word Globals_4,
  MR_Word SwitchCategory_5);

static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumConsIds_0_2,
  MR_Integer * STATE_VARIABLE_NumConsIds_3,
  MR_Integer STATE_VARIABLE_NumArms_0_4,
  MR_Integer * STATE_VARIABLE_NumArms_5);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer CaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_45,
  MR_Word ModuleInfo_12,
  MR_Word IntType_14,
  MR_Word TaggedMainConsId_15,
  MR_Word OtherConsIds_16,
  MR_Word Goal_17,
  MR_Word Cases_18,
  MR_Box IntTagVal_19,
  MR_Word * TaggedCase_20,
  MR_Word * TaggedCases_21,
  MR_Word * MaybeIntSwitchInfo_22);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_58,
  MR_Word ModuleInfo_1,
  MR_Integer CaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box STATE_VARIABLE_LowerLimit_0_6,
  MR_Box * STATE_VARIABLE_LowerLimit_7,
  MR_Box STATE_VARIABLE_UpperLimit_0_8,
  MR_Box * STATE_VARIABLE_UpperLimit_9,
  MR_Unsigned STATE_VARIABLE_NumValues_0_10,
  MR_Unsigned * STATE_VARIABLE_NumValues_11);

static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_9_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_30,
  MR_Word ModuleInfo_10,
  MR_Word ConsId_11,
  MR_Word * TaggedConsId_12,
  MR_Box STATE_VARIABLE_LowerLimit_0_18,
  MR_Box * STATE_VARIABLE_LowerLimit_19,
  MR_Box STATE_VARIABLE_UpperLimit_0_20,
  MR_Box * STATE_VARIABLE_UpperLimit_21,
  MR_Unsigned STATE_VARIABLE_NumValues_0_22,
  MR_Unsigned * STATE_VARIABLE_NumValues_23);

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____int_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__switch_util____Compare____int_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____int_switch_limits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__switch_util____Compare____int_switch_limits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[10][2];

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_2[1][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_3[1][13];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_4[1][6];


struct backend_libs__switch_util__vector_common_type_5_0_s {
  const MR_Word backend_libs__switch_util__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct backend_libs__switch_util__vector_common_type_5_0_s backend_libs__switch_util_vector_common_5[10];



static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int8__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int8_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint8__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int16__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int16_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint16__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint16_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int32__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int32_0))
  },
  /* row   7 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint32__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0))
  },
  /* row   8 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int64__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int64_0))
  },
  /* row   9 */
  {
    ((MR_Box) (base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint64__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint64_0))
  },
};

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_2[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_3[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0))
  },
};


static /* final */ const struct backend_libs__switch_util__vector_common_type_5_0_s backend_libs__switch_util_vector_common_5[10] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 1 },
  /* row   8 */   { (MR_Integer) 2 },
  /* row   9 */   { (MR_Integer) 2 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_int_switch_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_int_switch_limits_0)
};

static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_int_switch_info_0_0[4] = {
  (MR_String) "isi_orig_type",
  (MR_String) "isi_num_values_in_range",
  (MR_String) "isi_num_values_in_cases",
  (MR_String) "isi_limits"
};

static const MR_DuArgLocn backend_libs__switch_util__backend_libs__switch_util__field_locns_int_switch_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
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
  }
};

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_info_0_0 = {
  (MR_String) "int_switch_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__switch_util__backend_libs__switch_util__field_types_int_switch_info_0_0,
  backend_libs__switch_util__backend_libs__switch_util__field_names_int_switch_info_0_0,
  backend_libs__switch_util__backend_libs__switch_util__field_locns_int_switch_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_int_switch_info_0_0[1] = { &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_info_0_0 };

static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_int_switch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_int_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_int_switch_info_0[1] = { &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_info_0_0 };

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_int_switch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_int_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____int_switch_info_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____int_switch_info_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "int_switch_info",
  { backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_int_switch_info_0 },
  { backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_int_switch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_int_switch_info_0,

};

static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_int_switch_limits_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0)
};

static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_int_switch_limits_0_0[2] = {
  (MR_String) "isl_min_value",
  (MR_String) "isl_max_value"
};

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_limits_0_0 = {
  (MR_String) "int_switch_limits",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__switch_util__backend_libs__switch_util__field_types_int_switch_limits_0_0,
  backend_libs__switch_util__backend_libs__switch_util__field_names_int_switch_limits_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_int_switch_limits_0_0[1] = { &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_limits_0_0 };

static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_int_switch_limits_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_int_switch_limits_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_int_switch_limits_0[1] = { &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_int_switch_limits_0_0 };

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_int_switch_limits_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_int_switch_limits_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____int_switch_limits_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____int_switch_limits_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "int_switch_limits",
  { backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_int_switch_limits_0 },
  { backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_int_switch_limits_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_int_switch_limits_0,

};

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0 = {
  (MR_String) "not_int_switch",
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

static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_int_switch_info_0) };

static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1 = {
  (MR_String) "int_switch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1] = { &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0 };

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1] = { &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1 };

static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0
};

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "maybe_int_switch_info",
  { backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0 },
  { backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0,

};

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
  (MR_String) "ite_chain_switch",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
  (MR_String) "int_max_32_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
  (MR_String) "int_64_switch",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
  (MR_String) "string_switch",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_4 = {
  (MR_String) "float_switch",
  INT32_C(4)
};

static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_5 = {
  (MR_String) "tag_switch",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_ordinal_ordered_switch_category_0[6] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_4,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_5
};

static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[6] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_4,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_5
};

static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_switch_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____switch_category_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____switch_category_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "switch_category",
  { backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0 },
  { backend_libs__switch_util__backend_libs__switch_util__enum_ordinal_ordered_switch_category_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint64__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint32__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint16__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint8__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__uint__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int64__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int32__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int16__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int8__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_backend_libs__switch_util__int_tag_value__arity1__int__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001)),
  ((MR_Box) (backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001))
};

static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__type_class_id_var_names_int_tag_value_1[1] = { (MR_String) "T" };

static const MR_TypeClassMethod backend_libs__switch_util__backend_libs__switch_util__type_class_id_method_ids_int_tag_value_1[4] = {
  {
    (MR_String) "int_tag_min",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "int_tag_max",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "cons_tag_is_int_tag",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "fit_into_int32",
    (MR_Integer) 2,
    MR_PREDICATE
  }
};

static const MR_TypeClassId backend_libs__switch_util__backend_libs__switch_util__type_class_id_int_tag_value_1 = {
  (MR_String) "backend_libs.switch_util",
  (MR_String) "int_tag_value",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__type_class_id_var_names_int_tag_value_1,
  backend_libs__switch_util__backend_libs__switch_util__type_class_id_method_ids_int_tag_value_1
};

const MR_TypeClassDeclStruct backend_libs__switch_util__backend_libs__switch_util__type_class_decl_int_tag_value_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_class_id_int_tag_value_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  MR_Integer IW_5,
  int32_t * I32_6)
{
  MR_bool succeeded;

  succeeded = mercury__int32__from_int_2_p_0(IW_5, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  MR_Integer * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_7;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
      *TagVal_4 = ((MR_Integer) ((MR_hl_field(0, Var_7, 0))));
  }
  return succeeded;
}

static MR_Integer MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Integer HeadVar__3_3;

  HeadVar__3_3 = mercury__int__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_Integer MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Integer HeadVar__3_3;

  HeadVar__3_3 = mercury__int__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int8_t I8_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__int8__to_int_1_f_0(I8_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int8_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2);
    if (succeeded)
      *TagVal_4 = ((int8_t) (MR_Word) (MR_hl_field(2, Var_8, 0)));
  }
  return succeeded;
}

static int8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int8__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static int8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int8__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int16_t I16_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__int16__to_int_1_f_0(I16_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int16_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, 0)))) == (MR_Integer) 1)));
    if (succeeded)
      *TagVal_4 = ((int16_t) (MR_Word) (MR_hl_field(3, Var_8, 1)));
  }
  return succeeded;
}

static int16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int16_t HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  int16_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int16__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static int16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int16_t HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  int16_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int16__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int32_t I32_5,
  int32_t * I32_2)
{
  *I32_2 = I32_5;
  return MR_TRUE;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int32_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_6, 0)))) == (MR_Integer) 3)));
    if (succeeded)
      *TagVal_4 = ((int32_t) (MR_Word) (MR_hl_field(3, Var_6, 1)));
  }
  return succeeded;
}

static int32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  int32_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int32__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static int32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  int32_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int32__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  int64_t I64_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  succeeded = mercury__int64__to_int_2_p_0(I64_5, &IW_7);
  if (succeeded)
    succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  int64_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, 0)))) == (MR_Integer) 5)));
    if (succeeded)
      *TagVal_4 = MR_unbox_int64((MR_hl_field(3, Var_8, 1)));
  }
  return succeeded;
}

static int64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int64__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static int64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3;

  HeadVar__3_3 = mercury__int64__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  MR_Unsigned UW_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__uint__cast_to_int_1_f_0(UW_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  MR_Unsigned * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 1);
    if (succeeded)
      *TagVal_4 = ((MR_Unsigned) ((MR_hl_field(1, Var_8, 0))));
  }
  return succeeded;
}

static MR_Unsigned MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  MR_Unsigned HeadVar__3_3;

  HeadVar__3_3 = mercury__uint__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_Unsigned MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  MR_Unsigned HeadVar__3_3;

  HeadVar__3_3 = mercury__uint__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint8_t U8_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__uint8__to_int_1_f_0(U8_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint8_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, 0)))) == (MR_Integer) 0)));
    if (succeeded)
      *TagVal_4 = ((uint8_t) (MR_Word) (MR_hl_field(3, Var_8, 1)));
  }
  return succeeded;
}

static uint8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint8__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static uint8_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint8__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint16_t U16_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__uint16__cast_to_int_1_f_0(U16_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint16_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, 0)))) == (MR_Integer) 2)));
    if (succeeded)
      *TagVal_4 = ((uint16_t) (MR_Word) (MR_hl_field(3, Var_8, 1)));
  }
  return succeeded;
}

static uint16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  uint16_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint16__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static uint16_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  uint16_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint16__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint32_t U32_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__uint32__cast_to_int_1_f_0(U32_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint32_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, 0)))) == (MR_Integer) 4)));
    if (succeeded)
      *TagVal_4 = ((uint32_t) (MR_Word) (MR_hl_field(3, Var_8, 1)));
  }
  return succeeded;
}

static uint32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint32__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static uint32_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint32__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(
  uint64_t U64_5,
  int32_t * I32_6)
{
  MR_bool succeeded;
  MR_Integer IW_7;

  IW_7 = mercury__uint64__cast_to_int_1_f_0(U64_5);
  succeeded = mercury__int32__from_int_2_p_0(IW_7, I32_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(
  MR_Word ConsTag_3,
  uint64_t * TagVal_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, 0)))) == (MR_Integer) 6)));
    if (succeeded)
      *TagVal_4 = MR_unbox_uint64((MR_hl_field(3, Var_8, 1)));
  }
  return succeeded;
}

static uint64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  uint64_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint64__max_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static uint64_t MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  uint64_t HeadVar__3_3;

  HeadVar__3_3 = mercury__uint64__min_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0(
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
backend_libs__switch_util____Unify____switch_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    backend_libs__switch_util____Compare____int_switch_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = backend_libs__switch_util____Unify____int_switch_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__switch_util____Compare____int_switch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 15);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 15);
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          backend_libs__switch_util____Compare____int_switch_limits_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

void MR_CALL 
backend_libs__switch_util____Compare____int_switch_limits_0_0(
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
    int32_t ArgX1_4 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, 0)));
    int32_t ArgY1_5 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__3_3, 0)));
    int32_t ArgX2_7 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, 1)));
    int32_t ArgY2_8 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__3_3, 1)));
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
}

MR_bool MR_CALL 
backend_libs__switch_util____Unify____int_switch_info_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 15);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 15);
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = backend_libs__switch_util____Unify____int_switch_limits_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__switch_util____Unify____int_switch_limits_0_0(
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
    int32_t ArgX1_3 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__1_1, 0)));
    int32_t ArgY1_4 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, 0)));
    int32_t ArgX2_5 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__1_1, 1)));
    int32_t ArgY2_6 = ((int32_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, 1)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__fit_into_int32_2_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_3,
  MR_Box HeadVar__1_1,
  int32_t * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_3, 0)), 8))));
  MR_Box conv1_HeadVar__2_2;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_int_tag_value_3)), HeadVar__1_1, &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *HeadVar__2_2 = ((int32_t) (MR_Word) conv1_HeadVar__2_2);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__cons_tag_is_int_tag_2_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_3,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_3, 0)), 7))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_int_tag_value_3)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__int_tag_max_2_f_0(
  MR_Word TypeClassInfo_for_int_tag_value_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_4, 0)), 6))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_int_tag_value_4)), HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__int_tag_min_2_f_0(
  MR_Word TypeClassInfo_for_int_tag_value_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_4, 0)), 5))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_int_tag_value_4)), HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__num_is_in_range_3_p_0(
  MR_Integer PredIdInt_4,
  MR_String MinStr_5,
  MR_String MaxStr_6)
{
  MR_bool succeeded = (strcmp(MinStr_5, (MR_String) "") == 0);

  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer Min_7;

    succeeded = mercury__string__to_int_2_p_0(MinStr_5, &Min_7);
    if (succeeded)
      succeeded = (Min_7 <= PredIdInt_4);
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.switch_util.num_is_in_range\'/3", (MR_String) "minimum is not a number");
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    succeeded = (strcmp(MaxStr_6, (MR_String) "") == 0);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer Max_8;

      succeeded = mercury__string__to_int_2_p_0(MaxStr_6, &Max_8);
      if (succeeded)
        succeeded = (PredIdInt_4 <= Max_8);
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.switch_util.num_is_in_range\'/3", (MR_String) "maximum is not a number");
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5,
  MR_Word * TaggedConsId_6)
{
  MR_Word ConsTag_7;

  ConsTag_7 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_4, ConsId_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TaggedConsId_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConsTag_7));
  }
}

void MR_CALL 
backend_libs__switch_util__get_target_host_min_word_size_2_p_0(
  MR_Word Globals_3,
  MR_Word * MinWordSize_4)
{
  MR_bool succeeded;
  MR_Word TargetWordSize_5;
  MR_Integer HostWordBits_6;
  MR_Word HostWordSize_7;

  libs__globals__get_word_size_2_p_0(Globals_3, &TargetWordSize_5);
  mercury__int__bits_per_int_1_p_0(&HostWordBits_6);
  succeeded = (HostWordBits_6 == (MR_Integer) 64);
  if (succeeded)
    HostWordSize_7 = (MR_Integer) 1;
  else
  {
    succeeded = (HostWordBits_6 == (MR_Integer) 32);
    if (succeeded)
      HostWordSize_7 = (MR_Integer) 0;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.switch_util.get_target_host_min_word_size\'/2", (MR_String) "HostWordSize not 64 or 32 bits");
        return;
      }
  }
  succeeded = (TargetWordSize_5 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (HostWordSize_7 == (MR_Integer) 1);
  if (succeeded)
    *MinWordSize_4 = (MR_Integer) 1;
  else
    *MinWordSize_4 = (MR_Integer) 0;
}

void MR_CALL 
backend_libs__switch_util__find_switch_category_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word SwitchVarType_5,
  MR_Word * SwitchCategory_6)
{
  MR_bool succeeded;
  MR_Word SwitchTypeCtorCat_7;
  MR_Word SwitchCategory0_8;
  MR_Word Globals_9;
  MR_Word OptTuple_10;

  SwitchTypeCtorCat_7 = hlds__type_classify__classify_type_2_f_0(ModuleInfo_4, SwitchVarType_5);
  SwitchCategory0_8 = backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(SwitchTypeCtorCat_7);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_9);
  libs__globals__get_opt_tuple_2_p_0(Globals_9, &OptTuple_10);
  {
    MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, 1))) >> 20)) & (MR_Integer) 1);

    succeeded = (Var_12 == (MR_Integer) 1);
  }
  if (!(succeeded))
  {
    MR_Word SmartIndexingForCategory_11;

    SmartIndexingForCategory_11 = backend_libs__switch_util__is_smart_indexing_allowed_for_category_2_f_0(Globals_9, SwitchCategory0_8);
    succeeded = (SmartIndexingForCategory_11 == (MR_Integer) 0);
  }
  if (succeeded)
    *SwitchCategory_6 = (MR_Integer) 0;
  else
    *SwitchCategory_6 = SwitchCategory0_8;
}

static MR_Word MR_CALL 
backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(
  MR_Word CtorCat_3)
{
  MR_Word SwitchCat_4;

  switch (MR_tag((MR_Word) CtorCat_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          break;
        case (MR_Integer) 2:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          break;
        case (MR_Integer) 3:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          break;
        case (MR_Integer) 4:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, CtorCat_3, 0))));

        switch (MR_tag((MR_Word) Var_39)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_39)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SwitchCat_4 = (MR_Integer) 4;
                break;
              case (MR_Integer) 1:
                SwitchCat_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                SwitchCat_4 = (MR_Integer) 3;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_5 = ((MR_Unsigned) ((MR_hl_field(1, Var_39, 0))) & (MR_Integer) 15);

              SwitchCat_4 = ((&backend_libs__switch_util_vector_common_5[0 + IntType_5]))->backend_libs__switch_util__vector_common_type_5_0__vct_5_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      SwitchCat_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CtorCat_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_40 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_3, 1))) & (MR_Integer) 7);

            switch (Var_40) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                break;
              case (MR_Integer) 3:
                mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                break;
              case (MR_Integer) 0:
                mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                break;
              case (MR_Integer) 4:
                SwitchCat_4 = (MR_Integer) 5;
                break;
              case (MR_Integer) 2:
                mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                break;
            }
          }
          break;
      }
      break;
  }
  return SwitchCat_4;
}

static MR_Word MR_CALL 
backend_libs__switch_util__is_smart_indexing_allowed_for_category_2_f_0(
  MR_Word Globals_4,
  MR_Word SwitchCategory_5)
{
  MR_Word Allowed_6;
  MR_Word OptTuple_7;

  libs__globals__get_opt_tuple_2_p_0(Globals_4, &OptTuple_7);
  switch (SwitchCategory_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      {
        MR_Word Float_11 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 1))) >> 16)) & (MR_Integer) 1);

        switch (Float_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Allowed_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            Allowed_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Gen_12 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 1))) >> 20)) & (MR_Integer) 1);

        switch (Gen_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Allowed_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            Allowed_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Atomic_8 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 1))) >> 19)) & (MR_Integer) 1);

        switch (Atomic_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Allowed_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            Allowed_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      Allowed_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      {
        MR_Word String_9 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 1))) >> 18)) & (MR_Integer) 1);

        switch (String_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Allowed_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            Allowed_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word Tag_10 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 1))) >> 17)) & (MR_Integer) 1);

        switch (Tag_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Allowed_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            Allowed_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
  }
  return Allowed_6;
}

MR_Integer MR_CALL 
backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(
  MR_Word ConsTag_3)
{
  MR_Integer Cost_4;

  switch (MR_tag((MR_Word) ConsTag_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.estimate_switch_tag_test_cost\'/1", (MR_String) "non-switch tag");
      break;
    case (MR_Integer) 1:
      Cost_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Cost_4 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_23 = ((MR_String) ((MR_hl_field(3, ConsTag_3, 1))));
            MR_Integer Var_45;
            MR_Integer Var_47;

            Var_47 = mercury__string__length_1_f_0(String_23);
            Var_45 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) Var_47);
            Cost_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_45);
          }
          break;
        case (MR_Integer) 1:
          Cost_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_3, 3))) & (MR_Integer) 1);

            switch (Var_50) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cost_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                Cost_4 = (MR_Integer) 4;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 14:
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.switch_util.estimate_switch_tag_test_cost\'/1", (MR_String) "non-switch tag");
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_11 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cost_4 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                Cost_4 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_14 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_11, 1))));
                  MR_Word SectagSize_16 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_14, 1))));

                  if ((SectagSize_16 == (MR_Word) ((MR_Unsigned) 0U)))
                    Cost_4 = (MR_Integer) 5;
                  else
                    Cost_4 = (MR_Integer) 6;
                }
                break;
              case (MR_Integer) 3:
                Cost_4 = (MR_Integer) 4;
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          Cost_4 = (MR_Integer) 4;
          break;
        case (MR_Integer) 13:
          Cost_4 = (MR_Integer) 2;
          break;
      }
      break;
  }
  return Cost_4;
}

void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(
  MR_Word TaggedCases_4,
  MR_Integer * NumConsIds_5,
  MR_Integer * NumArms_6)
{
  backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(TaggedCases_4, (MR_Integer) 0, NumConsIds_5, (MR_Integer) 0, NumArms_6);
}

static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumConsIds_0_2,
  MR_Integer * STATE_VARIABLE_NumConsIds_3,
  MR_Integer STATE_VARIABLE_NumArms_0_4,
  MR_Integer * STATE_VARIABLE_NumArms_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumArms_5 = STATE_VARIABLE_NumArms_0_4;
      *STATE_VARIABLE_NumConsIds_3 = STATE_VARIABLE_NumConsIds_0_2;
    }
    else
    {
      MR_Word TaggedCase_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TaggedCases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word OtherCondIds_17 = ((MR_Word) ((MR_hl_field(0, TaggedCase_12, 1))));
      MR_Integer STATE_VARIABLE_NumConsIds_1_24;
      MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumConsIds_0_2 + (MR_Unsigned) 1);
      MR_Integer Var_27;
      MR_Integer STATE_VARIABLE_NumArms_1_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_NumConsIds_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_NumArms_0_4;

      Var_27 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), OtherCondIds_17);
      STATE_VARIABLE_NumConsIds_1_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) Var_27);
      STATE_VARIABLE_NumArms_1_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumArms_0_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TaggedCases_13;
      next_value_of_STATE_VARIABLE_NumConsIds_0_2 = STATE_VARIABLE_NumConsIds_1_24;
      next_value_of_STATE_VARIABLE_NumArms_0_4 = STATE_VARIABLE_NumArms_1_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NumConsIds_0_2 = next_value_of_STATE_VARIABLE_NumConsIds_0_2;
      STATE_VARIABLE_NumArms_0_4 = next_value_of_STATE_VARIABLE_NumArms_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__switch_util__tag_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * MaybeIntSwitchLimits_5)
{
  backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4, MaybeIntSwitchLimits_5);
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TaggedConsId_6;

  backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TaggedConsId_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_TaggedConsId_6));
}

void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * MaybeIntSwitchLimits_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.switch_util.tag_cases\'/5", (MR_String) "no cases");
      return;
    }
  }
  else
  {
    MR_Word Case_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TaggedCase_15;
    MR_Word TaggedCases_16;
    MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(0, Case_13, 0))));
    MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(0, Case_13, 1))));
    MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(0, Case_13, 2))));
    MR_Word MainConsTag_21;
    MR_Word TaggedMainConsId_22;
    MR_Word IntTag_23;

    MainConsTag_21 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(HeadVar__1_1, MainConsId_18);
    {
      TaggedMainConsId_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TaggedMainConsId_22, 0) = ((MR_Box) (MainConsId_18));
      MR_hl_field(0, TaggedMainConsId_22, 1) = ((MR_Box) (MainConsTag_21));
    }
    succeeded = ((MR_tag((MR_Word) MainConsTag_21)) == (MR_Integer) 1);
    if (succeeded)
    {
      IntTag_23 = ((MR_Word) ((MR_hl_field(1, MainConsTag_21, 0))));
      switch (MR_tag((MR_Word) IntTag_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer IntTagVal_24 = ((MR_Integer) ((MR_hl_field(0, IntTag_23, 0))));

            backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[0]), HeadVar__1_1, (MR_Integer) 0, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (IntTagVal_24)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned UIntTagVal_25 = ((MR_Unsigned) ((MR_hl_field(1, IntTag_23, 0))));

            backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[1]), HeadVar__1_1, (MR_Integer) 1, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (UIntTagVal_25)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
          }
          break;
        case (MR_Integer) 2:
          {
            int8_t Int8TagVal_26 = ((int8_t) (MR_Word) (MR_hl_field(2, IntTag_23, 0)));

            backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[2]), HeadVar__1_1, (MR_Integer) 2, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (MR_Word) (Int8TagVal_26)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, IntTag_23, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                uint8_t UInt8TagVal_27 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[3]), HeadVar__1_1, (MR_Integer) 3, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (MR_Word) (UInt8TagVal_27)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
            case (MR_Integer) 1:
              {
                int16_t Int16TagVal_28 = ((int16_t) (MR_Word) (MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[4]), HeadVar__1_1, (MR_Integer) 4, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (MR_Word) (Int16TagVal_28)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
            case (MR_Integer) 2:
              {
                uint16_t UInt16TagVal_29 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[5]), HeadVar__1_1, (MR_Integer) 5, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (MR_Word) (UInt16TagVal_29)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
            case (MR_Integer) 3:
              {
                int32_t Int32TagVal_30 = ((int32_t) (MR_Word) (MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[6]), HeadVar__1_1, (MR_Integer) 6, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (MR_Word) (Int32TagVal_30)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
            case (MR_Integer) 4:
              {
                uint32_t UInt32TagVal_31 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[7]), HeadVar__1_1, (MR_Integer) 7, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, ((MR_Box) (MR_Word) (UInt32TagVal_31)), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
            case (MR_Integer) 5:
              {
                int64_t Int64TagVal_32 = MR_unbox_int64((MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[8]), HeadVar__1_1, (MR_Integer) 8, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, MR_box_int64(Int64TagVal_32), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
            case (MR_Integer) 6:
              {
                uint64_t UInt64TagVal_33 = MR_unbox_uint64((MR_hl_field(3, IntTag_23, 1)));

                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0((MR_Word) (&backend_libs__switch_util_scalar_common_1[9]), HeadVar__1_1, (MR_Integer) 9, TaggedMainConsId_22, OtherConsIds_19, Goal_20, Cases_14, MR_box_uint64(UInt64TagVal_33), &TaggedCase_15, &TaggedCases_16, MaybeIntSwitchLimits_5);
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word TaggedOtherConsIds_34;
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_45, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[0]));
        MR_hl_field(0, Var_45, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1));
        MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_45, 3) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), Var_45, OtherConsIds_19, &TaggedOtherConsIds_34);
      {
        TaggedCase_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TaggedCase_15, 0) = ((MR_Box) (TaggedMainConsId_22));
        MR_hl_field(0, TaggedCase_15, 1) = ((MR_Box) (TaggedOtherConsIds_34));
        MR_hl_field(0, TaggedCase_15, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
        MR_hl_field(0, TaggedCase_15, 3) = ((MR_Box) (Goal_20));
      }
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(HeadVar__1_1, (MR_Integer) 1, Cases_14, &TaggedCases_16);
      *MaybeIntSwitchLimits_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TaggedCase_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (TaggedCases_16));
    }
  }
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TaggedConsId_6;

  backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_TaggedConsId_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_TaggedConsId_6));
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer CaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word TaggedCase_14;
    MR_Word TaggedCases_15;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case_12, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case_12, 1))));
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(0, Case_12, 2))));
    MR_Word TaggedMainConsId_19;
    MR_Word TaggedOtherConsIds_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Integer Var_23;
    MR_Word ConsTag_29;

    ConsTag_29 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, MainConsId_16);
    {
      TaggedMainConsId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TaggedMainConsId_19, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, TaggedMainConsId_19, 1) = ((MR_Box) (ConsTag_29));
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), Var_21, OtherConsIds_17, &TaggedOtherConsIds_20);
    Var_22 = (MR_Word) (CaseNum_3);
    {
      TaggedCase_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TaggedCase_14, 0) = ((MR_Box) (TaggedMainConsId_19));
      MR_hl_field(0, TaggedCase_14, 1) = ((MR_Box) (TaggedOtherConsIds_20));
      MR_hl_field(0, TaggedCase_14, 2) = ((MR_Box) (Var_22));
      MR_hl_field(0, TaggedCase_14, 3) = ((MR_Box) (Goal_18));
    }
    Var_23 = (MR_Integer) ((MR_Unsigned) CaseNum_3 + (MR_Unsigned) 1);
    backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(ModuleInfo_1, Var_23, Cases_13, &TaggedCases_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TaggedCase_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TaggedCases_15));
    }
  }
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TaggedConsId_12;
  MR_Unsigned conv0_STATE_VARIABLE_NumValues_23;

  backend_libs__switch_util__tag_cons_id_in_int_switch_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TaggedConsId_12, wrapper_arg_3, wrapper_arg_4, wrapper_arg_5, wrapper_arg_6, ((MR_Unsigned) (wrapper_arg_7)), &conv0_STATE_VARIABLE_NumValues_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_TaggedConsId_12));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_NumValues_23));
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_45,
  MR_Word ModuleInfo_12,
  MR_Word IntType_14,
  MR_Word TaggedMainConsId_15,
  MR_Word OtherConsIds_16,
  MR_Word Goal_17,
  MR_Word Cases_18,
  MR_Box IntTagVal_19,
  MR_Word * TaggedCase_20,
  MR_Word * TaggedCases_21,
  MR_Word * MaybeIntSwitchInfo_22)
{
  MR_bool succeeded;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_58_58;
  MR_Word TaggedOtherConsIds_24;
  MR_Box LowerLimit1_25;
  MR_Box UpperLimit1_26;
  MR_Unsigned NumValuesInCasesU1_27;
  MR_Box LowerLimit_28;
  MR_Box UpperLimit_29;
  MR_Unsigned NumValuesInCasesU_30;
  MR_Word Var_38;
  MR_Box conv2_NumValuesInCasesU1_27;
  int32_t LowerLimitI32_31;
  int32_t UpperLimitI32_32;
  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_LowerLimitI32_31;
  MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box *);
  MR_Box conv6_UpperLimitI32_32;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (TypeClassInfo_for_int_tag_value_45));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (ModuleInfo_12));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_int_tag_value_45, (MR_Integer) 1, &TypeInfo_57_57);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_int_tag_value_45, (MR_Integer) 1, &TypeInfo_58_58);
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), TypeInfo_57_57, TypeInfo_58_58, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_38, OtherConsIds_16, &TaggedOtherConsIds_24, IntTagVal_19, &LowerLimit1_25, IntTagVal_19, &UpperLimit1_26, ((MR_Box) ((MR_Unsigned) 1U)), &conv2_NumValuesInCasesU1_27);
  NumValuesInCasesU1_27 = ((MR_Unsigned) (conv2_NumValuesInCasesU1_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *TaggedCase_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TaggedMainConsId_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (TaggedOtherConsIds_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
    MR_hl_field(0, base, 3) = ((MR_Box) (Goal_17));
  }
  backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0(TypeClassInfo_for_int_tag_value_45, ModuleInfo_12, (MR_Integer) 1, Cases_18, TaggedCases_21, LowerLimit1_25, &LowerLimit_28, UpperLimit1_26, &UpperLimit_29, NumValuesInCasesU1_27, &NumValuesInCasesU_30);
  func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_45, 0)), 8))));
  succeeded = func_3(((MR_Box) (TypeClassInfo_for_int_tag_value_45)), LowerLimit_28, &conv4_LowerLimitI32_31);
  if (succeeded)
  {
    LowerLimitI32_31 = ((int32_t) (MR_Word) conv4_LowerLimitI32_31);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_45, 0)), 8))));
    succeeded = func_5(((MR_Box) (TypeClassInfo_for_int_tag_value_45)), UpperLimit_29, &conv6_UpperLimitI32_32);
    if (succeeded)
    {
      UpperLimitI32_32 = ((int32_t) (MR_Word) conv6_UpperLimitI32_32);
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word LimitsU32_33;
    int32_t NumValuesInRangeI32_34;
    MR_Integer NumValuesInRangeI_35;
    MR_Unsigned NumValuesInRangeU_36;
    MR_Word IntSwitchInfo_37;
    int32_t Var_43;

    {
      LimitsU32_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LimitsU32_33, 0) = ((MR_Box) (MR_Word) (LowerLimitI32_31));
      MR_hl_field(0, LimitsU32_33, 1) = ((MR_Box) (MR_Word) (UpperLimitI32_32));
    }
    Var_43 = (int32_t) ((uint32_t) UpperLimitI32_32 - (uint32_t) LowerLimitI32_31);
    NumValuesInRangeI32_34 = (int32_t) ((uint32_t) Var_43 + (uint32_t) 1);
    NumValuesInRangeI_35 = mercury__int32__to_int_1_f_0(NumValuesInRangeI32_34);
    NumValuesInRangeU_36 = mercury__uint__det_from_int_1_f_0(NumValuesInRangeI_35);
    {
      IntSwitchInfo_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntSwitchInfo_37, 0) = (MR_Box) ((MR_Unsigned) (IntType_14));
      MR_hl_field(0, IntSwitchInfo_37, 1) = ((MR_Box) (NumValuesInRangeU_36));
      MR_hl_field(0, IntSwitchInfo_37, 2) = ((MR_Box) (NumValuesInCasesU_30));
      MR_hl_field(0, IntSwitchInfo_37, 3) = ((MR_Box) (LimitsU32_33));
    }
    *MaybeIntSwitchInfo_22 = (MR_Word) (MR_mkword(1, (MR_Word) (IntSwitchInfo_37)));
  }
  else
    *MaybeIntSwitchInfo_22 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TaggedConsId_12;
  MR_Unsigned conv0_STATE_VARIABLE_NumValues_23;

  backend_libs__switch_util__tag_cons_id_in_int_switch_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TaggedConsId_12, wrapper_arg_3, wrapper_arg_4, wrapper_arg_5, wrapper_arg_6, ((MR_Unsigned) (wrapper_arg_7)), &conv0_STATE_VARIABLE_NumValues_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_TaggedConsId_12));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_NumValues_23));
}

static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_58,
  MR_Word ModuleInfo_1,
  MR_Integer CaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box STATE_VARIABLE_LowerLimit_0_6,
  MR_Box * STATE_VARIABLE_LowerLimit_7,
  MR_Box STATE_VARIABLE_UpperLimit_0_8,
  MR_Box * STATE_VARIABLE_UpperLimit_9,
  MR_Unsigned STATE_VARIABLE_NumValues_0_10,
  MR_Unsigned * STATE_VARIABLE_NumValues_11)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_NumValues_11 = STATE_VARIABLE_NumValues_0_10;
    *STATE_VARIABLE_UpperLimit_9 = STATE_VARIABLE_UpperLimit_0_8;
    *STATE_VARIABLE_LowerLimit_7 = STATE_VARIABLE_LowerLimit_0_6;
  }
  else
  {
    MR_Word TypeInfo_70_70;
    MR_Word TypeInfo_71_71;
    MR_Word Case_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Cases_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word TaggedCase_29;
    MR_Word TaggedCases_30;
    MR_Word MainConsId_34 = ((MR_Word) ((MR_hl_field(0, Case_27, 0))));
    MR_Word OtherConsIds_35 = ((MR_Word) ((MR_hl_field(0, Case_27, 1))));
    MR_Word Goal_36 = ((MR_Word) ((MR_hl_field(0, Case_27, 2))));
    MR_Word TaggedMainConsId_37;
    MR_Word TaggedOtherConsIds_38;
    MR_Box STATE_VARIABLE_LowerLimit_1_45;
    MR_Box STATE_VARIABLE_UpperLimit_1_46;
    MR_Unsigned STATE_VARIABLE_NumValues_1_47;
    MR_Word Var_48;
    MR_Box STATE_VARIABLE_LowerLimit_2_49;
    MR_Box STATE_VARIABLE_UpperLimit_2_50;
    MR_Unsigned STATE_VARIABLE_NumValues_2_51;
    MR_Word Var_52;
    MR_Integer Var_53;
    MR_Box conv2_STATE_VARIABLE_NumValues_2_51;

    backend_libs__switch_util__tag_cons_id_in_int_switch_9_p_0(TypeClassInfo_for_int_tag_value_58, ModuleInfo_1, MainConsId_34, &TaggedMainConsId_37, STATE_VARIABLE_LowerLimit_0_6, &STATE_VARIABLE_LowerLimit_1_45, STATE_VARIABLE_UpperLimit_0_8, &STATE_VARIABLE_UpperLimit_1_46, STATE_VARIABLE_NumValues_0_10, &STATE_VARIABLE_NumValues_1_47);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (TypeClassInfo_for_int_tag_value_58));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (ModuleInfo_1));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_int_tag_value_58, (MR_Integer) 1, &TypeInfo_70_70);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_int_tag_value_58, (MR_Integer) 1, &TypeInfo_71_71);
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), TypeInfo_70_70, TypeInfo_71_71, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_48, OtherConsIds_35, &TaggedOtherConsIds_38, STATE_VARIABLE_LowerLimit_1_45, &STATE_VARIABLE_LowerLimit_2_49, STATE_VARIABLE_UpperLimit_1_46, &STATE_VARIABLE_UpperLimit_2_50, ((MR_Box) (STATE_VARIABLE_NumValues_1_47)), &conv2_STATE_VARIABLE_NumValues_2_51);
    STATE_VARIABLE_NumValues_2_51 = ((MR_Unsigned) (conv2_STATE_VARIABLE_NumValues_2_51));
    Var_52 = (MR_Word) (CaseNum_3);
    {
      TaggedCase_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TaggedCase_29, 0) = ((MR_Box) (TaggedMainConsId_37));
      MR_hl_field(0, TaggedCase_29, 1) = ((MR_Box) (TaggedOtherConsIds_38));
      MR_hl_field(0, TaggedCase_29, 2) = ((MR_Box) (Var_52));
      MR_hl_field(0, TaggedCase_29, 3) = ((MR_Box) (Goal_36));
    }
    Var_53 = (MR_Integer) ((MR_Unsigned) CaseNum_3 + (MR_Unsigned) 1);
    backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_51_93_95_48_11_p_0(TypeClassInfo_for_int_tag_value_58, ModuleInfo_1, Var_53, Cases_28, &TaggedCases_30, STATE_VARIABLE_LowerLimit_2_49, STATE_VARIABLE_LowerLimit_7, STATE_VARIABLE_UpperLimit_2_50, STATE_VARIABLE_UpperLimit_9, STATE_VARIABLE_NumValues_2_51, STATE_VARIABLE_NumValues_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TaggedCase_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (TaggedCases_30));
    }
  }
}

static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_9_p_0(
  MR_Word TypeClassInfo_for_int_tag_value_30,
  MR_Word ModuleInfo_10,
  MR_Word ConsId_11,
  MR_Word * TaggedConsId_12,
  MR_Box STATE_VARIABLE_LowerLimit_0_18,
  MR_Box * STATE_VARIABLE_LowerLimit_19,
  MR_Box STATE_VARIABLE_UpperLimit_0_20,
  MR_Box * STATE_VARIABLE_UpperLimit_21,
  MR_Unsigned STATE_VARIABLE_NumValues_0_22,
  MR_Unsigned * STATE_VARIABLE_NumValues_23)
{
  MR_bool succeeded;
  MR_Word ConsTag_16;
  MR_Box IntTag_17;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);

  ConsTag_16 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_10, ConsId_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TaggedConsId_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConsTag_16));
  }
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_30, 0)), 7))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_int_tag_value_30)), ((MR_Box) (ConsTag_16)), &IntTag_17);
  if (succeeded)
  {
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_30, 0)), 5))));
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);

    *STATE_VARIABLE_LowerLimit_19 = func_1(((MR_Box) (TypeClassInfo_for_int_tag_value_30)), IntTag_17, STATE_VARIABLE_LowerLimit_0_18);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_int_tag_value_30, 0)), 6))));
    *STATE_VARIABLE_UpperLimit_21 = func_2(((MR_Box) (TypeClassInfo_for_int_tag_value_30)), IntTag_17, STATE_VARIABLE_UpperLimit_0_20);
    *STATE_VARIABLE_NumValues_23 = (STATE_VARIABLE_NumValues_0_22 + (MR_Unsigned) 1U);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.switch_util.tag_cons_id_in_int_switch\'/9", (MR_String) "ConsId is not int_tag");
      return;
    }
}

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____int_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__switch_util____Unify____int_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__switch_util____Compare____int_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__switch_util____Compare____int_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____int_switch_limits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__switch_util____Unify____int_switch_limits_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__switch_util____Compare____int_switch_limits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__switch_util____Compare____int_switch_limits_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__switch_util____Unify____switch_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__switch_util____Compare____switch_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint64_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(MR_unbox_uint64(wrapper_arg_1), MR_unbox_uint64(wrapper_arg_2));
  wrapper_arg_3 = MR_box_uint64(conv0_HeadVar__3_3);
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint64_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(MR_unbox_uint64(wrapper_arg_1), MR_unbox_uint64(wrapper_arg_2));
  wrapper_arg_3 = MR_box_uint64(conv0_HeadVar__3_3);
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  uint64_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = MR_box_uint64(conv0_TagVal_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(MR_unbox_uint64(wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint32_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((uint32_t) (MR_Word) wrapper_arg_1), ((uint32_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint32_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((uint32_t) (MR_Word) wrapper_arg_1), ((uint32_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  uint32_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((uint32_t) (MR_Word) wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint16_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((uint16_t) (MR_Word) wrapper_arg_1), ((uint16_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint16_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((uint16_t) (MR_Word) wrapper_arg_1), ((uint16_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  uint16_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((uint16_t) (MR_Word) wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint8_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((uint8_t) (MR_Word) wrapper_arg_1), ((uint8_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  uint8_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((uint8_t) (MR_Word) wrapper_arg_1), ((uint8_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  uint8_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((uint8_t) (MR_Word) wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((MR_Unsigned) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____uint__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((MR_Unsigned) (wrapper_arg_1)), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int64_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(MR_unbox_int64(wrapper_arg_1), MR_unbox_int64(wrapper_arg_2));
  wrapper_arg_3 = MR_box_int64(conv0_HeadVar__3_3);
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int64_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(MR_unbox_int64(wrapper_arg_1), MR_unbox_int64(wrapper_arg_2));
  wrapper_arg_3 = MR_box_int64(conv0_HeadVar__3_3);
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int64_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = MR_box_int64(conv0_TagVal_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int64__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(MR_unbox_int64(wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int32_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((int32_t) (MR_Word) wrapper_arg_1), ((int32_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int32_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((int32_t) (MR_Word) wrapper_arg_1), ((int32_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_2;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int32__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((int32_t) (MR_Word) wrapper_arg_1), &conv0_I32_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int16_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((int16_t) (MR_Word) wrapper_arg_1), ((int16_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int16_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((int16_t) (MR_Word) wrapper_arg_1), ((int16_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int16_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int16__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((int16_t) (MR_Word) wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int8_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((int8_t) (MR_Word) wrapper_arg_1), ((int8_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  int8_t conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((int8_t) (MR_Word) wrapper_arg_1), ((int8_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int8_t conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int8__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((int8_t) (MR_Word) wrapper_arg_1), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_min_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__int_tag_max_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_TagVal_4;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__cons_tag_is_int_tag_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TagVal_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_TagVal_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  int32_t conv0_I32_6;

  succeeded = backend_libs__switch_util__ClassMethod_for_backend_libs__switch_util__int_tag_value____int__arity0______backend_libs__switch_util__fit_into_int32_2_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_I32_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_I32_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void mercury__backend_libs__switch_util__init(void)
{
}

void mercury__backend_libs__switch_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_int_switch_info_0);
  MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_int_switch_limits_0);
  MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0);
  MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_switch_category_0);
}

void mercury__backend_libs__switch_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__switch_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.switch_util.
