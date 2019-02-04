/*
** Automatically generated from `rtti_out.m'
** by the Mercury compiler,
** version rotd-2017-09-02
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


/* :- module ll_backend.rtti_out. */
/* :- implementation. */

/*
INIT mercury__ll_backend__rtti_out__init
ENDINIT
*/

#include "ll_backend.rtti_out.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_file.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s {
  MR_bool ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21;
  jmp_buf ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_119_119;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__Var_43;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__Var_118;
  MR_Box ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_Var_118;
};

struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s {
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13;
  MR_bool ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded;
  jmp_buf ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0;
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17;
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20;
  MR_Box ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3];

static const MR_ConstString ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0[3];

static const MR_DuArgLocn ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0[3];

static const MR_DuFunctorDesc ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0;

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1];

static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1];

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1];

static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1];

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1424__1_2_p_0(
  MR_Word HeadVar__1_33,
  MR_Word * HeadVar__2_34);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1389__1_2_p_0(
  MR_Integer NumSymbolicResFunctorReps_19,
  MR_Integer HeadVar__2_30);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1339__1_2_p_0(
  MR_Integer HeadVar__3_3,
  MR_Integer Ptag_12);

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1283__1_2_p_0(
  MR_Word HeadVar__1_34,
  MR_Word * HeadVar__2_35);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1153__1_1_p_0(
  MR_Word MaybeNames_12);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1140__1_1_p_0(
  MR_Word ArgTypes_12);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__729__1_2_p_0(
  MR_Word Lang_25,
  MR_Word HeadVar__2_95);

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_static_code_addr_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_3_p_0(
  MR_Word Locn_4);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(
  MR_Word MaybeName_4);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(
  MR_Word Info_8,
  MR_Word Group_9,
  MR_Word RttiIds_10,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_3,
  MR_Word * STATE_VARIABLE_DeclSet_4);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word MaybeResFunctor_6);

static void MR_CALL 
ll_backend__rtti_out__output_res_addr_functors_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word ResFunctor_6);

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  MR_Integer Ordinal_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word MaybeResFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word DuFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_37,
  MR_Word * STATE_VARIABLE_DeclSet_38);

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word RttiName_6);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0(
  MR_Word Info_10,
  MR_Word RttiTypeCtor_11,
  MR_Integer Ordinal_12,
  MR_Word ArgInfos_13,
  MR_Word * HaveArgLocns_14,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer PrevSlotNum_2);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word MaybeNames_12,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word ArgTypes_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word ExistInfo_12,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2(
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
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word Constraints_12,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word Locns_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word ForeignEnumFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word EnumFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(
  MR_Word Info_7,
  MR_Word MaybePseudoTypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0(
  MR_Word Info_11,
  MR_Word MakeRttiId_12,
  MR_Word Constraint_13,
  MR_Word * TCDeclSuperRttiId_14,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25,
  MR_Word STATE_VARIABLE_DeclSet_0_26,
  MR_Word * STATE_VARIABLE_DeclSet_27);

static void MR_CALL 
ll_backend__rtti_out__output_code_addr_in_list_3_p_0(
  MR_Word CodeAddr_4);

static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
  MR_Word TCName_6,
  MR_Word TCTypes_7,
  MR_Integer Ordinal_8,
  MR_Integer NumTypes_9,
  MR_Word * RttiId_10);

static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
  MR_Word TCName_5,
  MR_Integer Ordinal_6,
  MR_Integer NumTypes_7,
  MR_Word * RttiId_8);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(
  MR_Word MethodId_4);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(
  MR_String TVarName_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_6_p_0(
  MR_Integer FieldNum_1,
  MR_Word HeadVar__2_2,
  MR_Word TCName_3,
  MR_String InstanceStr_4);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word TypeCtorData_8,
  MR_Word STATE_VARIABLE_DeclSet_0_35,
  MR_Word * STATE_VARIABLE_DeclSet_36);

static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_3_p_0(
  MR_Word CodeAddr_4);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(
  MR_String Cast_5,
  MR_Word RttiId_6);

static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
  MR_Word ProcLabel_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(
  MR_Word Info_11,
  MR_Word RttiTypeCtor_12,
  MR_Word TypeCtorDetails_13,
  MR_Word * MaybeFunctorsName_14,
  MR_Word * MaybeLayoutName_15,
  MR_Word * HaveFunctorNumberMap_16,
  MR_Word STATE_VARIABLE_DeclSet_0_49,
  MR_Word * STATE_VARIABLE_DeclSet_50);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorNumberMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NameArityMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Word ResFunctors_11,
  MR_Word DuPtagTable_12,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word PtagMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NameArityMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NotagFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(
  MR_Word Info_11,
  MR_Word RttiData_12,
  MR_String FirstIndent_13,
  MR_String LaterIndent_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__output_functor_subtype_info_3_p_0(
  MR_Word FunctorSubtypeInfo_4);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(
  MR_Word Info_7,
  MR_Word MaybePseudoTypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(
  MR_Word Info_7,
  MR_Word PseudoTypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0(
  MR_Word Info_7,
  MR_Word TypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word RttiName_6);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(
  MR_Word Info_7,
  MR_Word ArgRttiDatas_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_String FirstIndent_3,
  MR_String LaterIndent_4,
  MR_Integer STATE_VARIABLE_N_0_5,
  MR_Integer * STATE_VARIABLE_N_6,
  MR_Word STATE_VARIABLE_DeclSet_0_7,
  MR_Word * STATE_VARIABLE_DeclSet_8);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4(
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
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Instance_8,
  MR_Word STATE_VARIABLE_DeclSet_0_28,
  MR_Word * STATE_VARIABLE_DeclSet_29);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(
  MR_Word Info_11,
  MR_Word RttiId_12,
  MR_String FirstIndent_13,
  MR_String LaterIndent_14,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4(
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
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(
  MR_Word Info_7,
  MR_Word TCDecl_8,
  MR_Word STATE_VARIABLE_DeclSet_0_47,
  MR_Word * STATE_VARIABLE_DeclSet_48);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(
  MR_Word Info_7,
  MR_Word RttiId_8,
  MR_Word STATE_VARIABLE_DeclSet_0_11,
  MR_Word * STATE_VARIABLE_DeclSet_12);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(
  MR_Word Info_10,
  MR_Word TCName_11,
  MR_Word InstanceModuleName_12,
  MR_String InstanceString_13,
  MR_Word BaseTypeClassInfo_14,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_5_p_0(
  MR_Word RttiId_6,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17);

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
  MR_Word TCRttiName_3,
  MR_Integer * Arity_4);

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
  MR_Word RttiName_3,
  MR_Integer * NumArgTypes_4);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GroupMap_0_2,
  MR_Word * STATE_VARIABLE_GroupMap_3);

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_2[32][3];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_3[5][9];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_4[10][1];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_5[14][5];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_6[6][6];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_7[6][7];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_8[1][13];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_9[2][8];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_10[6][10];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_11[5][4];




static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_2[32][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0)),
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[0])),
    ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[0])),
    ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[1])),
    ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[2])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[2])),
    ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[2])),
    ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3])),
    ((MR_Box) (ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3])),
    ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[4])),
    ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[4])),
    ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[5])),
    ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[6])),
    ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[8])),
    ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[0])),
    ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[9])),
    ((MR_Box) (ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[0])),
    ((MR_Box) (ll_backend__rtti_out__output_functor_number_map_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[0])),
    ((MR_Box) (ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[4])),
    ((MR_Box) (ll_backend__rtti_out__output_exist_locns_array_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[11])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[5])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[12])),
    ((MR_Box) (ll_backend__rtti_out__output_du_functor_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[13])),
    ((MR_Box) (ll_backend__rtti_out__output_du_functor_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[6])),
    ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_3[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_4[10][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_5[14][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_6[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_7[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_10[6][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&ll_backend__rtti_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_11[5][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0])),
    ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_TypeClassConstraint) "))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[2])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_PseudoTypeInfo) "))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0,
    (MR_PseudoTypeInfo) &ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_is_array_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0
};

static const MR_ConstString ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0[3] = {
  (MR_String) "data_c_type",
  (MR_String) "data_is_array",
  (MR_String) "data_linkage"
};

static const MR_DuArgLocn ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0[3] = {
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
  }
};

static const MR_DuFunctorDesc ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0 = {
  (MR_String) "data_group",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1] = {
  &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0
};

static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1] = {
  &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0
};

static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__rtti_out____Unify____data_group_0_0_10001)),
  ((MR_Box) (ll_backend__rtti_out____Compare____data_group_0_0_10001)),
  (MR_String) "ll_backend.rtti_out",
  (MR_String) "data_group",
  {     ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0 },
  {     ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0
};

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1424__1_2_p_0(
  MR_Word HeadVar__1_33,
  MR_Word * HeadVar__2_34)
{
  {
    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, HeadVar__1_33, HeadVar__2_34);
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1389__1_2_p_0(
  MR_Integer NumSymbolicResFunctorReps_19,
  MR_Integer HeadVar__2_30)
{
  {
    MR_bool succeeded = (NumSymbolicResFunctorReps_19 == HeadVar__2_30);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1339__1_2_p_0(
  MR_Integer HeadVar__3_3,
  MR_Integer Ptag_12)
{
  {
    MR_bool succeeded = (Ptag_12 == HeadVar__3_3);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1283__1_2_p_0(
  MR_Word HeadVar__1_34,
  MR_Word * HeadVar__2_35)
{
  {
    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, HeadVar__1_34, HeadVar__2_35);
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1153__1_1_p_0(
  MR_Word MaybeNames_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_1[1], MaybeNames_12);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1140__1_1_p_0(
  MR_Word ArgTypes_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, ArgTypes_12);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__729__1_2_p_0(
  MR_Word Lang_25,
  MR_Word HeadVar__2_95)
{
  {
    MR_bool succeeded = (Lang_25 == HeadVar__2_95);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_17 = (MR_Integer) ArgX2_6;
        MR_Integer Var_18 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_17, Var_18);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_19 = (MR_Integer) ArgX3_8;
          MR_Integer Var_20 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_19, Var_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_static_code_addr_3_p_0(
  MR_Word HeadVar__1_1)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "NULL");
  }
  else
  {
    MR_Word CodeAddr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
    ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(CodeAddr_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_3_p_0(
  MR_Word Locn_4)
{
  if (((MR_tag((MR_Word) Locn_4)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Integer SlotInCell_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Locn_4, (MR_Integer) 0)));

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    mercury__io__write_int_3_p_0(SlotInCell_6);
    mercury__io__write_string_3_p_0((MR_String) ", -1 }");
  }
  else
  {
    MR_Integer SlotInTci_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_4, (MR_Integer) 1)));
    MR_Integer SlotInCell_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_4, (MR_Integer) 0)));

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    mercury__io__write_int_3_p_0(SlotInCell_23);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(SlotInTci_7);
    mercury__io__write_string_3_p_0((MR_String) " }");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(
  MR_Word MaybeName_4)
{
  if ((MaybeName_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "NULL");
  }
  else
  {
    MR_String Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeName_4, (MR_Integer) 0)));

    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Name_6);
    mercury__io__write_string_3_p_0((MR_String) "\"");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(
  MR_Word Info_8,
  MR_Word Group_9,
  MR_Word RttiIds_10,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22)
{
  {
    MR_Word RttiId_13;
    MR_String CType_15;
    MR_Word IsArray_16;
    MR_Word Linkage_17;
    MR_Word Globals_18;
    MR_String LinkageStr_19;
    MR_Word InclCodeAddr_20;
    MR_Word STATE_VARIABLE_DeclSet_29_29;
    MR_String Var_33;
    MR_Word Var_39;
    MR_String Var_40;
    MR_String Var_41;
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
    MR_Word Var_59;

    if ((RttiIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk\'/7", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word Var_14;

      RttiId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), RttiIds_10, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RttiIds_10, (MR_Integer) 1)));
    }
    CType_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Group_9, (MR_Integer) 0)));
    IsArray_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Group_9, (MR_Integer) 1)))) & (MR_Integer) 1);
    Linkage_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Group_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    mercury__io__nl_2_p_0();
    ll_backend__rtti_out__output_rtti_type_decl_5_p_0(RttiId_13, STATE_VARIABLE_DeclSet_0_21, &STATE_VARIABLE_DeclSet_29_29);
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
    Var_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
    Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    Globals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 8)));
    LinkageStr_19 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(Linkage_17, (MR_Integer) 0);
    InclCodeAddr_20 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(RttiId_13);
    mercury__io__write_string_3_p_0(LinkageStr_19);
    Var_33 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(Globals_18, InclCodeAddr_20);
    mercury__io__write_string_3_p_0(Var_33);
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(CType_15);
    mercury__io__nl_2_p_0();
    ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(IsArray_16, RttiIds_10, STATE_VARIABLE_DeclSet_29_29, STATE_VARIABLE_DeclSet_22);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_3,
  MR_Word * STATE_VARIABLE_DeclSet_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk_entries\'/6", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word RttiId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word RttiIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_DeclSet_29_29;
      MR_String Str_45;
      MR_String Var_46;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (RttiId_18));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_28, STATE_VARIABLE_DeclSet_0_3, &STATE_VARIABLE_DeclSet_29_29);
      mercury__io__write_string_3_p_0((MR_String) "\t");
      Var_46 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
      mercury__io__write_string_3_p_0(Var_46);
      backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_18, &Str_45);
      mercury__io__write_string_3_p_0(Str_45);
      switch (HeadVar__1_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "[]");
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      if ((RttiIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) ";\n");
        *STATE_VARIABLE_DeclSet_4 = STATE_VARIABLE_DeclSet_29_29;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_3;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        /* direct tailcall eliminated */
        next_value_of_HeadVar__2_2 = RttiIds_19;
        next_value_of_STATE_VARIABLE_DeclSet_0_3 = STATE_VARIABLE_DeclSet_29_29;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_DeclSet_0_3 = next_value_of_STATE_VARIABLE_DeclSet_0_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_22;

    ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_22));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  {
    MR_Word TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
    MR_Word Group_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word RttiIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word RttiIdChunks_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv2_STATE_VARIABLE_DeclSet_15;
    MR_Box conv1_STATE_VARIABLE_IO_17;

    Var_18 = mercury__list__reverse_1_f_0(TypeCtorInfo_22_22, RttiIds_9);
    mercury__list__chunk_3_p_0(TypeCtorInfo_22_22, Var_18, (MR_Integer) 10, &RttiIdChunks_13);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Group_8));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_19, RttiIdChunks_13, ((MR_Box) (STATE_VARIABLE_DeclSet_0_14)), &conv2_STATE_VARIABLE_DeclSet_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
    *STATE_VARIABLE_DeclSet_15 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_15);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word MaybeResFunctor_6)
{
  {
    MR_Word RttiName_12;
    MR_Word Var_55;
    MR_String Str_61;
    MR_String Var_62;

    mercury__io__write_string_3_p_0((MR_String) "\t{ \"");
    if (((MR_tag((MR_Word) MaybeResFunctor_6)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word DuFunctor_10 = (MR_Word) MR_body(((MR_Word) MaybeResFunctor_6), (MR_Integer) 1);
      MR_Integer Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 1)));
      MR_String Name_35 = ((MR_String) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 0)));
      MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 2)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 3)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 4)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 5)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 6)));

      mercury__io__write_string_3_p_0(Name_35);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__io__write_int_3_p_0(Arity_11);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_string_3_p_0((MR_String) "MR_FALSE, ");
    }
    else
    {
      MR_Word ResFunctor_8 = (MR_Word) MR_body(((MR_Word) MaybeResFunctor_6), (MR_Integer) 0);
      MR_String Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ResFunctor_8, (MR_Integer) 0)));
      MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ResFunctor_8, (MR_Integer) 1)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResFunctor_8, (MR_Integer) 2)));

      mercury__io__write_string_3_p_0(Name_9);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__io__write_string_3_p_0((MR_String) "0, ");
      mercury__io__write_string_3_p_0((MR_String) "MR_TRUE, ");
    }
    RttiName_12 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(MaybeResFunctor_6);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (RttiName_12));
    }
    Var_62 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_62);
    backend_libs__rtti__id_to_c_identifier_2_p_0(Var_55, &Str_61);
    mercury__io__write_string_3_p_0(Str_61);
    mercury__io__write_string_3_p_0((MR_String) " },\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_addr_functors_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word ResFunctor_6)
{
  {
    MR_Word Var_10;
    MR_Word Var_19;
    MR_String Str_25;
    MR_String Var_26;

    Var_10 = backend_libs__rtti__res_functor_rtti_name_1_f_0(ResFunctor_6);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_10));
    }
    Var_26 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_26);
    backend_libs__rtti__id_to_c_identifier_2_p_0(Var_19, &Str_25);
    mercury__io__write_string_3_p_0(Str_25);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  {
    MR_Word TypeCtorInfo_34_34 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    MR_Integer Ptag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word SectagTable_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word SectagMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectagTable_11, (MR_Integer) 2)));
    MR_Word SectagFunctors_17;
    MR_Word FunctorNames_18;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_DeclSet_18_49;
    MR_Word Var_51;
    MR_Word _SectagLocn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectagTable_11, (MR_Integer) 0)));
    MR_Integer _NumSharers_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SectagTable_11, (MR_Integer) 1)));

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_34_34, SectagMap_16, &SectagFunctors_17);
    FunctorNames_18 = mercury__list__map_2_f_0(TypeCtorInfo_34_34, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[31], SectagFunctors_17);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Ptag_10));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_27));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_24, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_19, &STATE_VARIABLE_DeclSet_18_49);
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_24));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_51, STATE_VARIABLE_DeclSet_18_49, STATE_VARIABLE_DeclSet_20);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if (!((FunctorNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_67;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (RttiTypeCtor_9));
      }
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, FunctorNames_18, (MR_String) ",\n\t", Var_67);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  MR_Integer Ordinal_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10)
{
  {
    MR_Word RttiName_11;

    {
      RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RttiName_11, 0) = ((MR_Box) (Ordinal_7));
      MR_hl_field(MR_mktag(2), RttiName_11, 1) = ((MR_Box) (TCNum_8));
      MR_hl_field(MR_mktag(2), RttiName_11, 2) = ((MR_Box) (Arity_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *RttiId_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RttiTypeCtor_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RttiName_11));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word MaybeResFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  if (((MR_tag((MR_Word) MaybeResFunctor_10)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word DuFunctor_14 = (MR_Word) MR_body(((MR_Word) MaybeResFunctor_10), (MR_Integer) 1);

    ll_backend__rtti_out__output_du_functor_defn_7_p_0(Info_8, RttiTypeCtor_9, DuFunctor_14, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
  }
  else
  {
    MR_Word ResFunctor_13 = (MR_Word) MR_body(((MR_Word) MaybeResFunctor_10), (MR_Integer) 0);
    MR_String FunctorName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ResFunctor_13, (MR_Integer) 0)));
    MR_Integer Ordinal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ResFunctor_13, (MR_Integer) 1)));
    MR_Word Rep_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResFunctor_13, (MR_Integer) 2)));
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_DeclSet_18_72;
    MR_Word Var_74;

    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Ordinal_33));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_42));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_39, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_72);
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Var_39));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_74, STATE_VARIABLE_DeclSet_18_72, STATE_VARIABLE_DeclSet_16);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FunctorName_32);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    mercury__io__write_int_3_p_0(Ordinal_33);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_string_3_p_0((MR_String) "(void *) ");
    switch (MR_tag((MR_Word) Rep_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer SmallPtr_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Rep_34, (MR_Integer) 0)));

          mercury__io__write_int_3_p_0(SmallPtr_35);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_res_functor_defn\'/7", (MR_String) "reserved object");
            return;
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__Var_118 = ((MR_Word) (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_Var_118);
    ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(env_ptr);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = ll_backend__rtti_out____Unify____maybe__maybe_1_2((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_119_119, (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__Var_43, (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__Var_118);
    if ((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded)
      ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_String Var_23;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__Var_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
          }
          mercury__list__member_2_p_1((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115, &(env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_Var_118, (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21, ll_backend__rtti_out__output_du_functor_defn_7_p_0_5, env_ptr);
        }
        (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word DuFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_37,
  MR_Word * STATE_VARIABLE_DeclSet_38)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s env;

    {
      MR_Word TypeCtorInfo_111_111 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
      MR_String FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 0)));
      MR_Integer OrigArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 1)));
      MR_Integer Ordinal_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 2)));
      MR_Word Rep_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 3)));
      MR_Word ArgInfos_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 4)));
      MR_Word MaybeExistInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 5)));
      MR_Word FunctorSubtypeInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_10, (MR_Integer) 6)));
      MR_Word ArgTypes_20;
      MR_Word HaveArgNames_22;
      MR_Word HaveArgLocns_26;
      MR_Integer ContainsVarBitVector_28;
      MR_Integer Ptag_29;
      MR_Word SectagAndLocn_30;
      MR_String Locn_32;
      MR_Integer Stag_33;
      MR_Word STATE_VARIABLE_DeclSet_44_44;
      MR_Word STATE_VARIABLE_DeclSet_46_46;
      MR_Word STATE_VARIABLE_DeclSet_48_48;
      MR_Word STATE_VARIABLE_DeclSet_50_50;
      MR_Word Var_52;
      MR_Word Var_55;

      ArgTypes_20 = mercury__list__map_2_f_0(TypeCtorInfo_111_111, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[29], ArgInfos_17);
      (env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115 = (MR_Word) &ll_backend__rtti_out_scalar_common_1[1];
      (env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21 = mercury__list__map_2_f_0(TypeCtorInfo_111_111, (env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115, (MR_Word) &ll_backend__rtti_out_scalar_common_2[30], ArgInfos_17);
      if ((ArgInfos_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_DeclSet_44_44 = STATE_VARIABLE_DeclSet_0_37;
      else
        ll_backend__rtti_out__output_du_arg_types_8_p_0(Info_8, RttiTypeCtor_9, Ordinal_15, ArgTypes_20, STATE_VARIABLE_DeclSet_0_37, &STATE_VARIABLE_DeclSet_44_44);
      ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(&env);
      if ((env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded)
      {
        HaveArgNames_22 = (MR_Integer) 1;
        ll_backend__rtti_out__output_du_arg_names_8_p_0(Info_8, RttiTypeCtor_9, Ordinal_15, (env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21, STATE_VARIABLE_DeclSet_44_44, &STATE_VARIABLE_DeclSet_46_46);
      }
      else
      {
        HaveArgNames_22 = (MR_Integer) 0;
        STATE_VARIABLE_DeclSet_46_46 = STATE_VARIABLE_DeclSet_44_44;
      }
      ll_backend__rtti_out__output_du_arg_locns_9_p_0(Info_8, RttiTypeCtor_9, Ordinal_15, ArgInfos_17, &HaveArgLocns_26, STATE_VARIABLE_DeclSet_46_46, &STATE_VARIABLE_DeclSet_48_48);
      if ((MaybeExistInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_DeclSet_50_50 = STATE_VARIABLE_DeclSet_48_48;
      else
      {
        MR_Word ExistInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeExistInfo_18, (MR_Integer) 0)));

        ll_backend__rtti_out__output_exist_info_8_p_0(Info_8, RttiTypeCtor_9, Ordinal_15, ExistInfo_27, STATE_VARIABLE_DeclSet_48_48, &STATE_VARIABLE_DeclSet_50_50);
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Ordinal_15));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (RttiTypeCtor_9));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_55));
      }
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_8, Var_52, STATE_VARIABLE_DeclSet_50_50, STATE_VARIABLE_DeclSet_38);
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FunctorName_13);
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
      mercury__io__write_int_3_p_0(OrigArity_14);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      ContainsVarBitVector_28 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ArgTypes_20);
      mercury__io__write_int_3_p_0(ContainsVarBitVector_28);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      if (((MR_tag((MR_Word) Rep_16)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_functor_defn\'/7", (MR_String) "du_hl_rep");
          return;
        }
      }
      else
      {
        Ptag_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Rep_16, (MR_Integer) 0)));
        SectagAndLocn_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rep_16, (MR_Integer) 1)));
      }
      switch (MR_tag((MR_Word) SectagAndLocn_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(SectagAndLocn_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Locn_32 = (MR_String) "MR_SECTAG_NONE";
                Stag_33 = (MR_Integer) -1;
              }
              break;
            case (MR_Integer) 1:
              {
                Locn_32 = (MR_String) "MR_SECTAG_NONE_DIRECT_ARG";
                Stag_33 = (MR_Integer) -1;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            Stag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SectagAndLocn_30, (MR_Integer) 0)));
            Locn_32 = (MR_String) "MR_SECTAG_LOCAL";
          }
          break;
        case (MR_Integer) 2:
          {
            Stag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), SectagAndLocn_30, (MR_Integer) 0)));
            Locn_32 = (MR_String) "MR_SECTAG_REMOTE";
          }
          break;
      }
      mercury__io__write_string_3_p_0(Locn_32);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      mercury__io__write_int_3_p_0(Ptag_29);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      mercury__io__write_int_3_p_0(Stag_33);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      mercury__io__write_int_3_p_0(Ordinal_15);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      mercury__io__write_string_3_p_0((MR_String) "(MR_PseudoTypeInfo *) ");
      if ((ArgInfos_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "NULL");
      }
      else
      {
        MR_Word Var_86;

        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Ordinal_15));
        }
        ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(RttiTypeCtor_9, Var_86);
      }
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      switch (HaveArgNames_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_92;

            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Ordinal_15));
            }
            ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(RttiTypeCtor_9, Var_92);
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      switch (HaveArgLocns_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_98;

            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (Ordinal_15));
            }
            ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(RttiTypeCtor_9, Var_98);
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      if ((MaybeExistInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "NULL");
      }
      else
      {
        MR_Word Var_104;

        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Ordinal_15));
        }
        ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(RttiTypeCtor_9, Var_104);
      }
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      ll_backend__rtti_out__output_functor_subtype_info_3_p_0(FunctorSubtypeInfo_19);
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box ArgX1_5;

    if (succeeded)
    {
      ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word RttiName_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Integer VarNum_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_16;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (RttiName_6));
    }
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
          VarNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)));
      }
    }
    if (succeeded)
      mercury__io__write_int_3_p_0(VarNum_17);
    else
    {
      MR_Word IsArray_18;

      IsArray_18 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(Var_10);
      switch (IsArray_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Str_30;
            MR_String Var_31;

            Var_31 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_31);
            backend_libs__rtti__id_to_c_identifier_2_p_0(Var_10, &Str_30);
            mercury__io__write_string_3_p_0(Str_30);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Str_38;
            MR_String Var_39;

            mercury__io__write_string_3_p_0((MR_String) "&");
            Var_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_39);
            backend_libs__rtti__id_to_c_identifier_2_p_0(Var_10, &Str_38);
            mercury__io__write_string_3_p_0(Str_38);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17 = ((MR_Word) (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17);
    ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 1)));

      (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 2)));
      (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = ((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = !((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded);
      if ((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded)
        ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13, ll_backend__rtti_out__output_du_arg_locns_9_p_0_3, env_ptr);
        }
        (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0(
  MR_Word Info_10,
  MR_Word RttiTypeCtor_11,
  MR_Integer Ordinal_12,
  MR_Word ArgInfos_13,
  MR_Word * HaveArgLocns_14,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s env;

    (env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13 = ArgInfos_13;
    ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(&env);
    if ((env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded)
    {
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_DeclSet_18_47;
      MR_Word Var_49;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Ordinal_12));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (RttiTypeCtor_11));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Var_28));
      }
      mercury__io__write_string_3_p_0((MR_String) "\n");
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_10, Var_25, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_21, &STATE_VARIABLE_DeclSet_18_47);
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_25));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_49, STATE_VARIABLE_DeclSet_18_47, STATE_VARIABLE_DeclSet_22);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      ll_backend__rtti_out__output_du_arg_locns_2_4_p_0((env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13, (MR_Integer) -1);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
      *HaveArgLocns_14 = (MR_Integer) 1;
    }
    else
    {
      *HaveArgLocns_14 = (MR_Integer) 0;
      *STATE_VARIABLE_DeclSet_22 = STATE_VARIABLE_DeclSet_0_21;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer PrevSlotNum_2)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ArgInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgWidth_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_9, (MR_Integer) 2)));
      MR_Integer Shift_14;
      MR_Integer Bits_15;
      MR_Integer SlotNum_16;
      MR_Integer Skip_17;
      MR_Integer Var_37;
      MR_String Var_45;
      MR_Word Var_51;
      MR_String Var_55;
      MR_String Var_65;
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_9, (MR_Integer) 0)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_9, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_PrevSlotNum_2;

      switch (MR_tag((MR_Word) ArgWidth_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgWidth_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Shift_14 = (MR_Integer) 0;
                Bits_15 = (MR_Integer) 0;
                SlotNum_16 = (PrevSlotNum_2 + (MR_Integer) 1);
                Skip_17 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                Shift_14 = (MR_Integer) 0;
                Bits_15 = (MR_Integer) -1;
                SlotNum_16 = (PrevSlotNum_2 + (MR_Integer) 1);
                Skip_17 = (MR_Integer) 1;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Mask_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ArgWidth_13, (MR_Integer) 0)));
            MR_Integer Var_23;

            Shift_14 = (MR_Integer) 0;
            Var_23 = (Mask_18 + (MR_Integer) 1);
            mercury__int__log2_2_p_0(Var_23, &Bits_15);
            SlotNum_16 = (PrevSlotNum_2 + (MR_Integer) 1);
            Skip_17 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_21;
            MR_Integer Mask_39;

            Shift_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ArgWidth_13, (MR_Integer) 0)));
            Mask_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ArgWidth_13, (MR_Integer) 1)));
            Var_21 = (Mask_39 + (MR_Integer) 1);
            mercury__int__log2_2_p_0(Var_21, &Bits_15);
            SlotNum_16 = PrevSlotNum_2;
            Skip_17 = (MR_Integer) 0;
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "\t{ ");
      Var_51 = (MR_Word) &ll_backend__rtti_out_scalar_common_4[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_51, SlotNum_16, &Var_45);
      mercury__io__write_string_3_p_0(Var_45);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_51, Shift_14, &Var_55);
      mercury__io__write_string_3_p_0(Var_55);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_51, Bits_15, &Var_65);
      mercury__io__write_string_3_p_0(Var_65);
      mercury__io__write_string_3_p_0((MR_String) " },\n");
      Var_37 = (SlotNum_16 + Skip_17);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = ArgInfos_10;
      next_value_of_PrevSlotNum_2 = Var_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      PrevSlotNum_2 = next_value_of_PrevSlotNum_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1153__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word MaybeNames_12,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool succeeded;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_DeclSet_18_44;
    MR_Word Var_46;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Ordinal_11));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_22));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_9, Var_19, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_44);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_19));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_46, STATE_VARIABLE_DeclSet_18_44, STATE_VARIABLE_DeclSet_16);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[4]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeNames_12));
    }
    mercury__require__expect_4_p_0(Var_25, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_names\'/8", (MR_String) "empty list");
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_list_5_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_1[1], MaybeNames_12, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[28]);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1140__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_14;

    ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word ArgTypes_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_49_49;
    MR_Word ArgTypeDatas_15;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_DeclSet_22_22;
    MR_Word STATE_VARIABLE_DeclSet_28_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_DeclSet_18_67;
    MR_Word Var_69;
    MR_Box conv2_STATE_VARIABLE_DeclSet_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;
    MR_Integer Var_16;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_9));
    }
    TypeCtorInfo_49_49 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;
    mercury__list__foldl2_6_p_2(TypeCtorInfo_49_49, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, ArgTypes_12, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_22_22);
    ArgTypeDatas_15 = mercury__list__map_2_f_0(TypeCtorInfo_49_49, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[27], ArgTypes_12);
    ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(Info_9, ArgTypeDatas_15, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_16, STATE_VARIABLE_DeclSet_22_22, &STATE_VARIABLE_DeclSet_28_28);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Ordinal_11));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_33));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_9, Var_30, (MR_Integer) 1, STATE_VARIABLE_DeclSet_28_28, &STATE_VARIABLE_DeclSet_18_67);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_30));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_69, STATE_VARIABLE_DeclSet_18_67, STATE_VARIABLE_DeclSet_18);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ArgTypes_12));
    }
    mercury__require__expect_4_p_0(Var_36, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_types\'/8", (MR_String) "empty list");
    if ((ArgTypeDatas_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
      mercury__io__write_string_3_p_0((MR_String) "\t0\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ArgTypeDatas_15, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_11[3]);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word ExistInfo_12,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25)
{
  {
    MR_Integer Plain_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ExistInfo_12, (MR_Integer) 0)));
    MR_Integer InTci_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ExistInfo_12, (MR_Integer) 1)));
    MR_Word Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistInfo_12, (MR_Integer) 2)));
    MR_Word Locns_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistInfo_12, (MR_Integer) 3)));
    MR_Integer Tci_21;
    MR_Word STATE_VARIABLE_DeclSet_28_28;
    MR_Word STATE_VARIABLE_DeclSet_30_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_DeclSet_18_67;
    MR_Word Var_69;
    MR_Word Var_76;
    MR_String Str_82;
    MR_String Var_83;

    ll_backend__rtti_out__output_exist_locns_array_8_p_0(Info_9, RttiTypeCtor_10, Ordinal_11, Locns_18, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_28_28);
    if ((Constraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_DeclSet_30_30 = STATE_VARIABLE_DeclSet_28_28;
    else
      ll_backend__rtti_out__output_exist_constraints_data_8_p_0(Info_9, RttiTypeCtor_10, Ordinal_11, Constraints_17, STATE_VARIABLE_DeclSet_28_28, &STATE_VARIABLE_DeclSet_30_30);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Ordinal_11));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_35));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_9, Var_32, (MR_Integer) 1, STATE_VARIABLE_DeclSet_30_30, &STATE_VARIABLE_DeclSet_18_67);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_32));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_69, STATE_VARIABLE_DeclSet_18_67, STATE_VARIABLE_DeclSet_25);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    mercury__io__write_int_3_p_0(Plain_15);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(InTci_16);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, Constraints_17, &Tci_21);
    mercury__io__write_int_3_p_0(Tci_21);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Ordinal_11));
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_47));
    }
    Var_83 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_83);
    backend_libs__rtti__id_to_c_identifier_2_p_0(Var_76, &Str_82);
    mercury__io__write_string_3_p_0(Str_82);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if (!((Constraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Ordinal_11));
      }
      ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_10, Var_51);
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_TCDeclSuperRttiId_14;
    MR_Word conv2_STATE_VARIABLE_Counter_25;
    MR_Word conv1_STATE_VARIABLE_DeclSet_27;

    ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv3_TCDeclSuperRttiId_14, ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_Counter_25, ((MR_Word) wrapper_arg_5), &conv1_STATE_VARIABLE_DeclSet_27);
    *wrapper_arg_2 = ((MR_Box) (conv3_TCDeclSuperRttiId_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Counter_25));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_DeclSet_27));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RttiId_10;

    ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_RttiId_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_RttiId_10));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word Constraints_12,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19)
{
  {
    MR_Word ConstraintIds_15;
    MR_Word RttiId_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_DeclSet_24_24;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_DeclSet_18_64;
    MR_Word Var_66;
    MR_Word Var_16;
    MR_Box conv6_Var_16;
    MR_Box conv5_STATE_VARIABLE_DeclSet_24_24;
    MR_Box conv4_STATE_VARIABLE_IO_25_25;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Ordinal_11));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Var_26));
    }
    Var_23 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_22, Constraints_12, &ConstraintIds_15, ((MR_Box) (Var_23)), &conv6_Var_16, ((MR_Box) (STATE_VARIABLE_DeclSet_0_18)), &conv5_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_25_25);
    Var_16 = ((MR_Word) conv6_Var_16);
    STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) conv5_STATE_VARIABLE_DeclSet_24_24);
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Ordinal_11));
    }
    {
      RttiId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiId_17, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), RttiId_17, 1) = ((MR_Box) (Var_28));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_9, RttiId_17, (MR_Integer) 1, STATE_VARIABLE_DeclSet_24_24, &STATE_VARIABLE_DeclSet_18_64);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (RttiId_17));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_66, STATE_VARIABLE_DeclSet_18_64, STATE_VARIABLE_DeclSet_19);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    if ((ConstraintIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
      mercury__io__write_string_3_p_0((MR_String) "\t0\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ConstraintIds_15, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_11[1]);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_exist_locn_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Integer Ordinal_11,
  MR_Word Locns_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_DeclSet_18_43;
    MR_Word Var_45;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Ordinal_11));
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (Var_24));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_9, Var_21, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_18_43);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_21));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_45, STATE_VARIABLE_DeclSet_18_43, STATE_VARIABLE_DeclSet_18);
    if ((Locns_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "= { {0, 0} };\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, Locns_12, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[26]);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word ForeignEnumFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_String FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_10, (MR_Integer) 0)));
    MR_Integer FunctorOrdinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_10, (MR_Integer) 1)));
    MR_String FunctorValue_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_10, (MR_Integer) 2)));
    MR_Word RttiId_16;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_DeclSet_18_46;
    MR_Word Var_48;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (FunctorOrdinal_14));
    }
    {
      RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiId_16, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), RttiId_16, 1) = ((MR_Box) (Var_21));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, RttiId_16, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_18_46);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (RttiId_16));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_48, STATE_VARIABLE_DeclSet_18_46, STATE_VARIABLE_DeclSet_18);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FunctorName_13);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    mercury__io__write_int_3_p_0(FunctorOrdinal_14);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_string_3_p_0(FunctorValue_15);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word EnumFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_String FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), EnumFunctor_10, (MR_Integer) 0)));
    MR_Integer Ordinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EnumFunctor_10, (MR_Integer) 1)));
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_DeclSet_18_42;
    MR_Word Var_44;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Ordinal_14));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_22));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_19, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_42);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_19));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_44, STATE_VARIABLE_DeclSet_18_42, STATE_VARIABLE_DeclSet_16);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FunctorName_13);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    mercury__io__write_int_3_p_0(Ordinal_14);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(
  MR_Word Info_7,
  MR_Word MaybePseudoTypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) MaybePseudoTypeInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePseudoTypeInfo_8, (MR_Integer) 0)));
          MR_Integer Var_42;

          succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_12)) == (MR_mktag((MR_Integer) 3)));
          if (succeeded)
          {
            Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), PseudoTypeInfo_12, (MR_Integer) 0)));
            *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
          }
          else
          {
            MR_Word RttiId_43;
            MR_Word Var_44;
            MR_Word Var_45;

            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PseudoTypeInfo_12));
            }
            backend_libs__rtti__rtti_data_to_id_2_p_0(Var_44, &RttiId_43);
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (RttiId_43));
            }
            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_45, STATE_VARIABLE_DeclSet_0_13);
            if (succeeded)
              *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
            else
              ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(Info_7, PseudoTypeInfo_12, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybePseudoTypeInfo_8, (MR_Integer) 0)));
          MR_Word RttiId_29;
          MR_Word Var_30;
          MR_Word Var_31;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (TypeInfo_11));
          }
          backend_libs__rtti__rtti_data_to_id_2_p_0(Var_30, &RttiId_29);
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (RttiId_29));
          }
          succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_31, STATE_VARIABLE_DeclSet_0_13);
          if (succeeded)
            *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
          else
            ll_backend__rtti_out__do_output_type_info_defn_6_p_0(Info_7, TypeInfo_11, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_DeclSet_14;

    ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_DeclSet_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0(
  MR_Word Info_11,
  MR_Word MakeRttiId_12,
  MR_Word Constraint_13,
  MR_Word * TCDeclSuperRttiId_14,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25,
  MR_Word STATE_VARIABLE_DeclSet_0_26,
  MR_Word * STATE_VARIABLE_DeclSet_27)
{
  {
    MR_Word TypeCtorInfo_49_49 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
    MR_Word TCName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_13, (MR_Integer) 0)));
    MR_Word Types_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_13, (MR_Integer) 1)));
    MR_Integer NumTypes_20;
    MR_Integer TCNum_21;
    MR_Word TCDeclRttiId_22;
    MR_Word TypeRttiDatas_23;
    MR_Word STATE_VARIABLE_DeclSet_32_32;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_DeclSet_35_35;
    MR_Word STATE_VARIABLE_DeclSet_16_69;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_DeclSet_18_86;
    MR_Word Var_88;
    MR_String Str_94;
    MR_String Var_95;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_TCDeclSuperRttiId_14;
    MR_Box conv4_STATE_VARIABLE_DeclSet_35_35;
    MR_Box conv3_STATE_VARIABLE_IO_36_36;

    mercury__list__length_2_p_0(TypeCtorInfo_49_49, Types_19, &NumTypes_20);
    mercury__counter__allocate_3_p_0(&TCNum_21, STATE_VARIABLE_Counter_0_24, STATE_VARIABLE_Counter_25);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), MakeRttiId_12, (MR_Integer) 1)));
    func_0(((MR_Box) MakeRttiId_12), ((MR_Box) (TCNum_21)), ((MR_Box) (NumTypes_20)), &conv1_TCDeclSuperRttiId_14);
    *TCDeclSuperRttiId_14 = ((MR_Word) conv1_TCDeclSuperRttiId_14);
    {
      TCDeclRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCDeclRttiId_22, 0) = ((MR_Box) (TCName_18));
      MR_hl_field(MR_mktag(1), TCDeclRttiId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_11, TCDeclRttiId_22, (MR_Integer) 0, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_16_69);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (TCDeclRttiId_22));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_73, STATE_VARIABLE_DeclSet_16_69, &STATE_VARIABLE_DeclSet_32_32);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Info_11));
    }
    mercury__list__foldl2_6_p_2(TypeCtorInfo_49_49, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_34, Types_19, ((MR_Box) (STATE_VARIABLE_DeclSet_32_32)), &conv4_STATE_VARIABLE_DeclSet_35_35, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_36_36);
    STATE_VARIABLE_DeclSet_35_35 = ((MR_Word) conv4_STATE_VARIABLE_DeclSet_35_35);
    TypeRttiDatas_23 = mercury__list__map_2_f_0(TypeCtorInfo_49_49, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[25], Types_19);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_11, *TCDeclSuperRttiId_14, (MR_Integer) 1, STATE_VARIABLE_DeclSet_35_35, &STATE_VARIABLE_DeclSet_18_86);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (*TCDeclSuperRttiId_14));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_88, STATE_VARIABLE_DeclSet_18_86, STATE_VARIABLE_DeclSet_27);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    Var_95 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_95);
    backend_libs__rtti__id_to_c_identifier_2_p_0(TCDeclRttiId_22, &Str_94);
    mercury__io__write_string_3_p_0(Str_94);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t{\n");
    ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", TypeRttiDatas_23);
    mercury__io__write_string_3_p_0((MR_String) "\t}\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_code_addr_in_list_3_p_0(
  MR_Word CodeAddr_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
    ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(CodeAddr_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0((MR_String) ",\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
  MR_Word TCName_6,
  MR_Word TCTypes_7,
  MR_Integer Ordinal_8,
  MR_Integer NumTypes_9,
  MR_Word * RttiId_10)
{
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (TCTypes_7));
      MR_hl_field(MR_mktag(3), Var_11, 2) = ((MR_Box) (Ordinal_8));
      MR_hl_field(MR_mktag(3), Var_11, 3) = ((MR_Box) (NumTypes_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *RttiId_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TCName_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_11));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
  MR_Word TCName_5,
  MR_Integer Ordinal_6,
  MR_Integer NumTypes_7,
  MR_Word * RttiId_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Ordinal_6));
      MR_hl_field(MR_mktag(2), Var_9, 1) = ((MR_Box) (NumTypes_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *RttiId_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TCName_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_9));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(
  MR_Word MethodId_4)
{
  {
    MR_String MethodName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), MethodId_4, (MR_Integer) 0)));
    MR_Integer MethodArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MethodId_4, (MR_Integer) 1)));
    MR_Word PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MethodId_4, (MR_Integer) 2)));

    mercury__io__write_string_3_p_0((MR_String) "\t{ \"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(MethodName_6);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    mercury__io__write_int_3_p_0(MethodArity_7);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ll_backend__layout_out__output_pred_or_func_3_p_0(PredOrFunc_8);
    mercury__io__write_string_3_p_0((MR_String) " },\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(
  MR_String TVarName_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(TVarName_4);
    mercury__io__write_string_3_p_0((MR_String) "\",\n");
  }
}

MR_String MR_CALL 
ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(
  MR_Word ProcLabel_4,
  MR_Word Id_5)
{
  {
    MR_String HeadVar__3_3;
    MR_String Var_6;
    MR_String Var_7;
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_6 = backend_libs__name_mangle__mercury_var_prefix_0_f_0();
    Var_10 = backend_libs__rtti__tabling_info_id_str_1_f_0(Id_5);
    Var_13 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_4, (MR_Integer) 0);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_13);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "_proc", Var_9);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_6, Var_7);
    return HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_5_p_0(
  MR_Word Info_6,
  MR_Word RttiId_7,
  MR_Word BeingDefined_8)
{
  {
    MR_Word DeclSet0_10;
    MR_Word Var_11;

    ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&DeclSet0_10);
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_6, RttiId_7, BeingDefined_8, DeclSet0_10, &Var_11);
  }
}

void MR_CALL 
ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(
  MR_Word Data_4)
{
  switch (MR_tag((MR_Word) Data_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorData_6 = (MR_Word) MR_body(((MR_Word) Data_4), (MR_Integer) 0);
        MR_Word RttiTypeCtor_7;
        MR_Word RttiId_8;
        MR_String Str_76;
        MR_String Var_77;

        RttiTypeCtor_7 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(TypeCtorData_6);
        {
          RttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RttiId_8, 0) = ((MR_Box) (RttiTypeCtor_7));
          MR_hl_field(MR_mktag(0), RttiId_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
        mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_ctor_info(\n\t\t&");
        Var_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_77);
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_8, &Str_76);
        mercury__io__write_string_3_p_0(Str_76);
        mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCDecl_9 = (MR_Word) MR_body(((MR_Word) Data_4), (MR_Integer) 1);
        MR_Word TCId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCDecl_9, (MR_Integer) 0)));
        MR_Word TCName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCId_10, (MR_Integer) 0)));
        MR_Word RttiId_53;
        MR_String Str_60;
        MR_String Var_61;
        MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TCDecl_9, (MR_Integer) 1)));
        MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCDecl_9, (MR_Integer) 2)));
        MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCId_10, (MR_Integer) 1)));
        MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCId_10, (MR_Integer) 2)));

        {
          RttiId_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RttiId_53, 0) = ((MR_Box) (TCName_13));
          MR_hl_field(MR_mktag(1), RttiId_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        }
        mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
        mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_class_decl(\n\t\t&");
        Var_61 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_61);
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_53, &Str_60);
        mercury__io__write_string_3_p_0(Str_60);
        mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TCInstance_16 = (MR_Word) MR_body(((MR_Word) Data_4), (MR_Integer) 2);
        MR_Word TCTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCInstance_16, (MR_Integer) 1)));
        MR_Word Var_29;
        MR_Word RttiId_54;
        MR_Word TCName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCInstance_16, (MR_Integer) 0)));
        MR_String Str_68;
        MR_String Var_69;
        MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TCInstance_16, (MR_Integer) 2)));
        MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCInstance_16, (MR_Integer) 3)));
        MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCInstance_16, (MR_Integer) 4)));

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TCTypes_17));
        }
        {
          RttiId_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RttiId_54, 0) = ((MR_Box) (TCName_55));
          MR_hl_field(MR_mktag(1), RttiId_54, 1) = ((MR_Box) (Var_29));
        }
        mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
        mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_class_instance(\n\t\t&");
        Var_69 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_69);
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_54, &Str_68);
        mercury__io__write_string_3_p_0(Str_68);
        mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Data_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(
  MR_Word Data_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Data_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorData_6 = (MR_Word) MR_body(((MR_Word) Data_4), (MR_Integer) 0);
          MR_Word RttiTypeCtor_7;
          MR_Word ModuleName_8;
          MR_String TypeName_9;
          MR_Integer Arity_10;
          MR_String ModuleNameString_11;
          MR_String UnderscoresModule_12;
          MR_String MangledTypeName_14;
          MR_Word Var_70;
          MR_String Str_76;
          MR_String Var_77;
          MR_String Var_13;

          RttiTypeCtor_7 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(TypeCtorData_6);
          mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_TYPE_CTOR_INFO(\n\t\t");
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (RttiTypeCtor_7));
            MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          Var_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          mercury__io__write_string_3_p_0(Var_77);
          backend_libs__rtti__id_to_c_identifier_2_p_0(Var_70, &Str_76);
          mercury__io__write_string_3_p_0(Str_76);
          mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor_7, (MR_Integer) 0)));
          TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor_7, (MR_Integer) 1)));
          Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor_7, (MR_Integer) 2)));
          ModuleNameString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_8);
          mercury__string__append_3_p_2(ModuleNameString_11, (MR_String) "__", &UnderscoresModule_12);
          succeeded = mercury__string__append_3_p_1(UnderscoresModule_12, &Var_13, TypeName_9);
          if (!(succeeded))
            mercury__io__write_string_3_p_0(UnderscoresModule_12);
          MangledTypeName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_9);
          mercury__io__write_string_3_p_0(MangledTypeName_14);
          mercury__io__write_string_3_p_0((MR_String) "_");
          mercury__io__write_int_3_p_0(Arity_10);
          mercury__io__write_string_3_p_0((MR_String) "_0);\n");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
          mercury__io__write_string_3_p_0((MR_String) "#error \"type_class_instance not yet supported without static code addresses\"\n");
          mercury__io__write_string_3_p_0((MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Data_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Data_4, (MR_Integer) 1)));
              MR_String ClassArity_17 = ((MR_String) (MR_hl_field(MR_mktag(3), Data_4, (MR_Integer) 3)));
              MR_Word Methods_23;
              MR_Word CodeAddrs_25;
              MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Data_4, (MR_Integer) 4)));
              MR_Word _ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Data_4, (MR_Integer) 2)));
              MR_Integer _N1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0)));
              MR_Integer _N2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1)));
              MR_Integer _N3_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 2)));
              MR_Integer _N4_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 3)));
              MR_Integer _N5_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 4)));

              Methods_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 5)));
              mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
              CodeAddrs_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[24], Methods_23);
              ll_backend__rtti_out__output_init_method_pointers_6_p_0((MR_Integer) 5, CodeAddrs_25, TCName_15, ClassArity_17);
              mercury__io__write_string_3_p_0((MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_6_p_0(
  MR_Integer FieldNum_1,
  MR_Word HeadVar__2_2,
  MR_Word TCName_3,
  MR_String InstanceStr_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Var_34;
      MR_String Var_40;
      MR_Integer next_value_of_FieldNum_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "\t\t");
      mercury__io__write_string_3_p_0((MR_String) "MR_field(MR_mktag(0), ");
      backend_libs__name_mangle__output_base_typeclass_info_name_4_p_0(TCName_3, InstanceStr_4);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_4[0], FieldNum_1, &Var_40);
      mercury__io__write_string_3_p_0(Var_40);
      mercury__io__write_string_3_p_0((MR_String) ") =\n\t\t\t");
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(Arg_14);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      Var_34 = (FieldNum_1 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_FieldNum_1 = Var_34;
      next_value_of_HeadVar__2_2 = Args_15;
      FieldNum_1 = next_value_of_FieldNum_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word RttiDefn_8,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RttiDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorData_13 = (MR_Word) MR_body(((MR_Word) RttiDefn_8), (MR_Integer) 0);

          ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(Info_7, TypeCtorData_13, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TCDecl_18 = (MR_Word) MR_body(((MR_Word) RttiDefn_8), (MR_Integer) 1);

          ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(Info_7, TCDecl_18, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstanceDecl_19 = (MR_Word) MR_body(((MR_Word) RttiDefn_8), (MR_Integer) 2);

          ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(Info_7, InstanceDecl_19, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 1)));
              MR_Word RttiId_58;
              MR_Word Var_60;

              backend_libs__rtti__rtti_data_to_id_2_p_0(RttiDefn_8, &RttiId_58);
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (RttiId_58));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_60, STATE_VARIABLE_DeclSet_0_20);
              if (succeeded)
                *STATE_VARIABLE_DeclSet_21 = STATE_VARIABLE_DeclSet_0_20;
              else
                ll_backend__rtti_out__do_output_type_info_defn_6_p_0(Info_7, TypeInfo_11, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 1)));
              MR_Integer Var_44;

              succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_12)) == (MR_mktag((MR_Integer) 3)));
              if (succeeded)
              {
                Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), PseudoTypeInfo_12, (MR_Integer) 0)));
                *STATE_VARIABLE_DeclSet_21 = STATE_VARIABLE_DeclSet_0_20;
              }
              else
              {
                MR_Word RttiId_45;
                MR_Word Var_47;

                backend_libs__rtti__rtti_data_to_id_2_p_0(RttiDefn_8, &RttiId_45);
                {
                  Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (RttiId_45));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_47, STATE_VARIABLE_DeclSet_0_20);
                if (succeeded)
                  *STATE_VARIABLE_DeclSet_21 = STATE_VARIABLE_DeclSet_0_20;
                else
                  ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(Info_7, PseudoTypeInfo_12, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 1)));
              MR_Word InstanceModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 2)));
              MR_String InstanceString_16 = ((MR_String) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 3)));
              MR_Word BaseTypeClassInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiDefn_8, (MR_Integer) 4)));

              ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(Info_7, TCName_14, InstanceModuleName_15, InstanceString_16, BaseTypeClassInfo_17, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word TypeCtorData_8,
  MR_Word STATE_VARIABLE_DeclSet_0_35,
  MR_Word * STATE_VARIABLE_DeclSet_36)
{
  {
    MR_Word TypeCtorInfo_112_112;
    MR_Word RttiTypeCtor_11;
    MR_Integer Version_12;
    MR_Word Module_13;
    MR_String TypeName_14;
    MR_Integer TypeArity_15;
    MR_Word UnifyUniv_16;
    MR_Word CompareUniv_17;
    MR_Word Flags_18;
    MR_Word TypeCtorDetails_19;
    MR_Word MaybeFunctorsName_20;
    MR_Word MaybeLayoutName_21;
    MR_Word HaveFunctorNumberMap_22;
    MR_Word UnifyProcLabel_23;
    MR_Word UnifyCodeAddr_24;
    MR_Word CompareProcLabel_25;
    MR_Word CompareCodeAddr_26;
    MR_Word CodeAddrs_27;
    MR_String CtorRepStr_29;
    MR_Word STATE_VARIABLE_DeclSet_39_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_DeclSet_44_44;
    MR_Word Var_46;
    MR_Integer Var_58;
    MR_String Var_71;
    MR_Integer Var_98;
    MR_Integer Var_102;
    MR_Box conv0_UnifyProcLabel_23;
    MR_Box conv1_CompareProcLabel_25;
    MR_Box conv4_STATE_VARIABLE_DeclSet_44_44;
    MR_Box conv3_STATE_VARIABLE_IO_45_45;
    MR_Word _TargetPrefixes_28;

    RttiTypeCtor_11 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(TypeCtorData_8);
    Version_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 0)));
    Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 1)));
    TypeName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 2)));
    TypeArity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 3)));
    UnifyUniv_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 4)));
    CompareUniv_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 5)));
    Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 6)));
    TypeCtorDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_8, (MR_Integer) 7)));
    ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(Info_7, RttiTypeCtor_11, TypeCtorDetails_19, &MaybeFunctorsName_20, &MaybeLayoutName_21, &HaveFunctorNumberMap_22, STATE_VARIABLE_DeclSet_0_35, &STATE_VARIABLE_DeclSet_39_39);
    TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_112_112, UnifyUniv_16, &conv0_UnifyProcLabel_23);
    UnifyProcLabel_23 = ((MR_Word) conv0_UnifyProcLabel_23);
    UnifyCodeAddr_24 = ll_backend__rtti_out__make_code_addr_1_f_0(UnifyProcLabel_23);
    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_112_112, CompareUniv_17, &conv1_CompareProcLabel_25);
    CompareProcLabel_25 = ((MR_Word) conv1_CompareProcLabel_25);
    CompareCodeAddr_26 = ll_backend__rtti_out__make_code_addr_1_f_0(CompareProcLabel_25);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CompareCodeAddr_26));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      CodeAddrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CodeAddrs_27, 0) = ((MR_Box) (UnifyCodeAddr_24));
      MR_hl_field(MR_mktag(1), CodeAddrs_27, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_43, CodeAddrs_27, ((MR_Box) (STATE_VARIABLE_DeclSet_39_39)), &conv4_STATE_VARIABLE_DeclSet_44_44, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_45_45);
    STATE_VARIABLE_DeclSet_44_44 = ((MR_Word) conv4_STATE_VARIABLE_DeclSet_44_44);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (RttiTypeCtor_11));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
    }
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, Var_46, STATE_VARIABLE_DeclSet_44_44, STATE_VARIABLE_DeclSet_36);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    mercury__io__write_int_3_p_0(TypeArity_15);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(Version_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    Var_58 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(TypeCtorDetails_19);
    mercury__io__write_int_3_p_0(Var_58);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    backend_libs__rtti__type_ctor_rep_to_string_3_p_0(TypeCtorData_8, &_TargetPrefixes_28, &CtorRepStr_29);
    mercury__io__write_string_3_p_0(CtorRepStr_29);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    ll_backend__rtti_out__output_static_code_addr_3_p_0(UnifyCodeAddr_24);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    ll_backend__rtti_out__output_static_code_addr_3_p_0(CompareCodeAddr_26);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t\"");
    Var_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_13);
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Var_71);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(TypeName_14);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    if ((MaybeFunctorsName_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "{ 0 }");
    }
    else
    {
      MR_Word FunctorsName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorsName_20, (MR_Integer) 0)));
      MR_Word FunctorsRttiId_31;

      {
        FunctorsRttiId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FunctorsRttiId_31, 0) = ((MR_Box) (RttiTypeCtor_11));
        MR_hl_field(MR_mktag(0), FunctorsRttiId_31, 1) = ((MR_Box) (FunctorsName_30));
      }
      mercury__io__write_string_3_p_0((MR_String) "{ ");
      ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0((MR_String) "(void *)", FunctorsRttiId_31);
      mercury__io__write_string_3_p_0((MR_String) " }");
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((MaybeLayoutName_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "{ 0 }");
    }
    else
    {
      MR_Word LayoutName_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeLayoutName_21, (MR_Integer) 0)));
      MR_Word LayoutRttiId_33;

      {
        LayoutRttiId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LayoutRttiId_33, 0) = ((MR_Box) (RttiTypeCtor_11));
        MR_hl_field(MR_mktag(0), LayoutRttiId_33, 1) = ((MR_Box) (LayoutName_32));
      }
      mercury__io__write_string_3_p_0((MR_String) "{ ");
      ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0((MR_String) "(void *)", LayoutRttiId_33);
      mercury__io__write_string_3_p_0((MR_String) " }");
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    Var_98 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(TypeCtorDetails_19);
    mercury__io__write_int_3_p_0(Var_98);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    Var_102 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(Flags_18);
    mercury__io__write_int_3_p_0(Var_102);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    switch (HaveFunctorNumberMap_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FunctorNumberMapRttiId_34;

          {
            FunctorNumberMapRttiId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FunctorNumberMapRttiId_34, 0) = ((MR_Box) (RttiTypeCtor_11));
            MR_hl_field(MR_mktag(0), FunctorNumberMapRttiId_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
          }
          ll_backend__rtti_out__output_rtti_id_3_p_0(FunctorNumberMapRttiId_34);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_3_p_0(
  MR_Word CodeAddr_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
    ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(CodeAddr_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(
  MR_String Cast_5,
  MR_Word RttiId_6)
{
  {
    MR_bool succeeded;
    MR_Integer VarNum_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_16;

    mercury__io__write_string_3_p_0(Cast_5);
    succeeded = ((MR_tag((MR_Word) RttiId_6)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_6, (MR_Integer) 0)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_6, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
          VarNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)));
      }
    }
    if (succeeded)
      mercury__io__write_int_3_p_0(VarNum_17);
    else
    {
      MR_Word IsArray_18;

      IsArray_18 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_6);
      switch (IsArray_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Str_30;
            MR_String Var_31;

            Var_31 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_31);
            backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_6, &Str_30);
            mercury__io__write_string_3_p_0(Str_30);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Str_38;
            MR_String Var_39;

            mercury__io__write_string_3_p_0((MR_String) "&");
            Var_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_39);
            backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_6, &Str_38);
            mercury__io__write_string_3_p_0(Str_38);
          }
          break;
      }
    }
  }
}

static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
  MR_Word ProcLabel_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = ll_backend__code_util__make_entry_label_from_rtti_2_f_0(ProcLabel_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_DeclSet_16;

    ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv9_STATE_VARIABLE_DeclSet_16);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_DeclSet_16));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_DeclSet_18;

    ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_DeclSet_18);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DeclSet_18));
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__729__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_DeclSet_16;

    ll_backend__rtti_out__output_enum_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_DeclSet_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_16));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_38;

    ll_backend__rtti_out__output_du_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_38);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_38));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(
  MR_Word Info_11,
  MR_Word RttiTypeCtor_12,
  MR_Word TypeCtorDetails_13,
  MR_Word * MaybeFunctorsName_14,
  MR_Word * MaybeLayoutName_15,
  MR_Word * HaveFunctorNumberMap_16,
  MR_Word STATE_VARIABLE_DeclSet_0_49,
  MR_Word * STATE_VARIABLE_DeclSet_50)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeCtorDetails_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EnumFunctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Word EnumByRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word EnumByName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word FunctorNumberMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDetails_13, (MR_Integer) 5)));
          MR_Word Var_107;
          MR_Word STATE_VARIABLE_DeclSet_108_108;
          MR_Word STATE_VARIABLE_DeclSet_110_110;
          MR_Word STATE_VARIABLE_DeclSet_112_112;
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Word _IsDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Box conv5_STATE_VARIABLE_DeclSet_108_108;
          MR_Box conv4_STATE_VARIABLE_IO_109_109;

          {
            Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[2]));
            MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2));
            MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (Info_11));
            MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (RttiTypeCtor_12));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_107, EnumFunctors_20, ((MR_Box) (STATE_VARIABLE_DeclSet_0_49)), &conv5_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_109_109);
          STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) conv5_STATE_VARIABLE_DeclSet_108_108);
          ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, EnumByRep_21, STATE_VARIABLE_DeclSet_108_108, &STATE_VARIABLE_DeclSet_110_110);
          ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, EnumByName_22, STATE_VARIABLE_DeclSet_110_110, &STATE_VARIABLE_DeclSet_112_112);
          ll_backend__rtti_out__output_functor_number_map_7_p_0(Info_11, RttiTypeCtor_12, FunctorNumberMap_24, STATE_VARIABLE_DeclSet_112_112, STATE_VARIABLE_DeclSet_50);
          *MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[3]);
          *MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[4]);
          *HaveFunctorNumberMap_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Lang_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Word ForeignEnumFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ForeignEnumByOrdinal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ForeignEnumByName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Word Var_91;
          MR_Word Var_96;
          MR_Word STATE_VARIABLE_DeclSet_97_97;
          MR_Word STATE_VARIABLE_DeclSet_99_99;
          MR_Word STATE_VARIABLE_DeclSet_101_101;
          MR_Word FunctorNumberMap_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorDetails_13, (MR_Integer) 5)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Box conv8_STATE_VARIABLE_DeclSet_97_97;
          MR_Box conv7_STATE_VARIABLE_IO_98_98;

          {
            Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[10]));
            MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3));
            MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (Lang_25));
            MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_4_p_0(Var_91, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_type_ctor_details_defn\'/10", (MR_String) "language other than C for foreign enumeration");
          {
            Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[3]));
            MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4));
            MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (Info_11));
            MR_hl_field(MR_mktag(0), Var_96, 4) = ((MR_Box) (RttiTypeCtor_12));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_96, ForeignEnumFunctors_27, ((MR_Box) (STATE_VARIABLE_DeclSet_0_49)), &conv8_STATE_VARIABLE_DeclSet_97_97, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_98_98);
          STATE_VARIABLE_DeclSet_97_97 = ((MR_Word) conv8_STATE_VARIABLE_DeclSet_97_97);
          ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, ForeignEnumByOrdinal_28, STATE_VARIABLE_DeclSet_97_97, &STATE_VARIABLE_DeclSet_99_99);
          ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, ForeignEnumByName_29, STATE_VARIABLE_DeclSet_99_99, &STATE_VARIABLE_DeclSet_101_101);
          ll_backend__rtti_out__output_functor_number_map_7_p_0(Info_11, RttiTypeCtor_12, FunctorNumberMap_118, STATE_VARIABLE_DeclSet_101_101, STATE_VARIABLE_DeclSet_50);
          *MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[5]);
          *MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[6]);
          *HaveFunctorNumberMap_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuFunctors_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Word DuByRep_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word DuByName_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word Var_80;
          MR_Word STATE_VARIABLE_DeclSet_81_81;
          MR_Word STATE_VARIABLE_DeclSet_83_83;
          MR_Word STATE_VARIABLE_DeclSet_85_85;
          MR_Word FunctorNumberMap_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Box conv2_STATE_VARIABLE_DeclSet_81_81;
          MR_Box conv1_STATE_VARIABLE_IO_82_82;

          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Info_11));
            MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (RttiTypeCtor_12));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_80, DuFunctors_31, ((MR_Box) (STATE_VARIABLE_DeclSet_0_49)), &conv2_STATE_VARIABLE_DeclSet_81_81, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_82_82);
          STATE_VARIABLE_DeclSet_81_81 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_81_81);
          ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, DuByRep_32, STATE_VARIABLE_DeclSet_81_81, &STATE_VARIABLE_DeclSet_83_83);
          ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, DuByName_33, STATE_VARIABLE_DeclSet_83_83, &STATE_VARIABLE_DeclSet_85_85);
          ll_backend__rtti_out__output_functor_number_map_7_p_0(Info_11, RttiTypeCtor_12, FunctorNumberMap_119, STATE_VARIABLE_DeclSet_85_85, STATE_VARIABLE_DeclSet_50);
          *MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[1]);
          *MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[2]);
          *HaveFunctorNumberMap_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MaybeResFunctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 2)));
              MR_Word ResFunctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 3)));
              MR_Word MaybeResByName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 5)));
              MR_Word Var_69;
              MR_Word STATE_VARIABLE_DeclSet_70_70;
              MR_Word STATE_VARIABLE_DeclSet_72_72;
              MR_Word STATE_VARIABLE_DeclSet_74_74;
              MR_Word FunctorNumberMap_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 6)));
              MR_Word DuByRep_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 4)));
              MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 1)));
              MR_Box conv11_STATE_VARIABLE_DeclSet_70_70;
              MR_Box conv10_STATE_VARIABLE_IO_71_71;

              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[4]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Info_11));
                MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (RttiTypeCtor_12));
              }
              mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_69, MaybeResFunctors_35, ((MR_Box) (STATE_VARIABLE_DeclSet_0_49)), &conv11_STATE_VARIABLE_DeclSet_70_70, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_71_71);
              STATE_VARIABLE_DeclSet_70_70 = ((MR_Word) conv11_STATE_VARIABLE_DeclSet_70_70);
              ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(Info_11, RttiTypeCtor_12, ResFunctors_36, DuByRep_121, STATE_VARIABLE_DeclSet_70_70, &STATE_VARIABLE_DeclSet_72_72);
              ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(Info_11, RttiTypeCtor_12, MaybeResByName_37, STATE_VARIABLE_DeclSet_72_72, &STATE_VARIABLE_DeclSet_74_74);
              ll_backend__rtti_out__output_functor_number_map_7_p_0(Info_11, RttiTypeCtor_12, FunctorNumberMap_120, STATE_VARIABLE_DeclSet_74_74, STATE_VARIABLE_DeclSet_50);
              *MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[8]);
              *MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[9]);
              *HaveFunctorNumberMap_16 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NotagFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 2)));
              MR_Word STATE_VARIABLE_DeclSet_60_60;
              MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 1)));

              ll_backend__rtti_out__output_notag_functor_defn_7_p_0(Info_11, RttiTypeCtor_12, NotagFunctor_39, STATE_VARIABLE_DeclSet_0_49, &STATE_VARIABLE_DeclSet_60_60);
              ll_backend__rtti_out__output_functor_number_map_7_p_0(Info_11, RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_1[4]), STATE_VARIABLE_DeclSet_60_60, STATE_VARIABLE_DeclSet_50);
              *MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_4[7]);
              *MaybeFunctorsName_14 = *MaybeLayoutName_15;
              *HaveFunctorNumberMap_16 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorDetails_13, (MR_Integer) 1)));
              MR_Word TypeData_41;
              MR_Word LayoutName_44;
              MR_Word STATE_VARIABLE_DeclSet_53_53;
              MR_Integer Var_42;

              ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(Info_11, EqvType_40, STATE_VARIABLE_DeclSet_0_49, &STATE_VARIABLE_DeclSet_53_53);
              TypeData_41 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(EqvType_40);
              ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(Info_11, TypeData_41, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_42, STATE_VARIABLE_DeclSet_53_53, STATE_VARIABLE_DeclSet_50);
              if (((MR_tag((MR_Word) EqvType_40)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word TypeInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), EqvType_40, (MR_Integer) 0)));

                {
                  LayoutName_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), LayoutName_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), LayoutName_44, 1) = ((MR_Box) (TypeInfo_43));
                }
              }
              else
              {
                MR_Word PseudoTypeInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqvType_40, (MR_Integer) 0)));

                {
                  LayoutName_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), LayoutName_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), LayoutName_44, 1) = ((MR_Box) (PseudoTypeInfo_45));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeLayoutName_15 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LayoutName_44));
              }
              *MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *HaveFunctorNumberMap_16 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              *MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *HaveFunctorNumberMap_16 = (MR_Integer) 0;
              *STATE_VARIABLE_DeclSet_50 = STATE_VARIABLE_DeclSet_0_49;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorNumberMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_DeclSet_18_43;
    MR_Word Var_45;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_17, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_13, &STATE_VARIABLE_DeclSet_18_43);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_17));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_45, STATE_VARIABLE_DeclSet_18_43, STATE_VARIABLE_DeclSet_14);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, FunctorNumberMap_10, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[23]);
    mercury__io__write_string_3_p_0((MR_String) " };\n\t");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_34;

    ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1424__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_34);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_34));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NameArityMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17)
{
  {
    MR_Word TypeInfo_32_32 = (MR_Word) &ll_backend__rtti_out_scalar_common_2[3];
    MR_Word TypeCtorInfo_38_38;
    MR_Word ArityMaps_13;
    MR_Word FunctorLists_14;
    MR_Word Functors_15;
    MR_Word Var_21;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_DeclSet_18_54;
    MR_Word Var_56;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeInfo_32_32, NameArityMap_10, &ArityMaps_13);
    mercury__list__map_3_p_0(TypeInfo_32_32, (MR_Word) &ll_backend__rtti_out_scalar_common_1[3], (MR_Word) &ll_backend__rtti_out_scalar_common_2[22], ArityMaps_13, &FunctorLists_14);
    TypeCtorInfo_38_38 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
    mercury__list__condense_2_p_0(TypeCtorInfo_38_38, FunctorLists_14, &Functors_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_21, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_16, &STATE_VARIABLE_DeclSet_18_54);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_21));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_56, STATE_VARIABLE_DeclSet_18_54, STATE_VARIABLE_DeclSet_17);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (RttiTypeCtor_9));
    }
    mercury__list__foldl_4_p_2(TypeCtorInfo_38_38, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_27, Functors_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_res_addr_functors_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1389__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word RttiTypeCtor_10,
  MR_Word ResFunctors_11,
  MR_Word DuPtagTable_12,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_67_67 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0;
    MR_Word TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
    MR_Word ResFunctorReps_15;
    MR_Word NumericResFunctorReps_16;
    MR_Word SymbolicResFunctorReps_17;
    MR_Integer NumNumericResFunctorReps_18;
    MR_Integer NumSymbolicResFunctorReps_19;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_DeclSet_32_32;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_DeclSet_41_41;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_DeclSet_18_88;
    MR_Word Var_90;
    MR_Box conv1_STATE_VARIABLE_IO_38_38;

    ResFunctorReps_15 = mercury__list__map_2_f_0(TypeCtorInfo_67_67, TypeCtorInfo_68_68, (MR_Word) &ll_backend__rtti_out_scalar_common_2[20], ResFunctors_11);
    mercury__list__filter_4_p_0(TypeCtorInfo_68_68, (MR_Word) &ll_backend__rtti_out_scalar_common_2[21], ResFunctorReps_15, &NumericResFunctorReps_16, &SymbolicResFunctorReps_17);
    mercury__list__length_2_p_0(TypeCtorInfo_68_68, NumericResFunctorReps_16, &NumNumericResFunctorReps_18);
    mercury__list__length_2_p_0(TypeCtorInfo_68_68, SymbolicResFunctorReps_17, &NumSymbolicResFunctorReps_19);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[7]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (NumSymbolicResFunctorReps_19));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_4_p_0(Var_26, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_res_value_ordered_table\'/8", (MR_String) "symbolic functors");
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_9, Var_31, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_20, &STATE_VARIABLE_DeclSet_18_88);
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_31));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_90, STATE_VARIABLE_DeclSet_18_88, &STATE_VARIABLE_DeclSet_32_32);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (RttiTypeCtor_10));
    }
    mercury__list__foldl_4_p_2(TypeCtorInfo_67_67, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_37, ResFunctors_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_38);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(Info_9, RttiTypeCtor_10, DuPtagTable_12, STATE_VARIABLE_DeclSet_32_32, &STATE_VARIABLE_DeclSet_41_41);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
    }
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_9, Var_43, STATE_VARIABLE_DeclSet_41_41, STATE_VARIABLE_DeclSet_21);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    mercury__io__write_int_3_p_0(NumNumericResFunctorReps_18);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(NumSymbolicResFunctorReps_19);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_string_3_p_0((MR_String) "NULL");
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_20;

    ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_20));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word PtagMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  {
    MR_bool succeeded;
    MR_Word PtagList_13;
    MR_Integer FirstPtag_16;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_DeclSet_24_24;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_DeclSet_18_64;
    MR_Word Var_66;
    MR_Box conv2_STATE_VARIABLE_DeclSet_24_24;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;
    MR_Word Var_32;
    MR_Integer Var_33;
    MR_Word Var_15;
    MR_Word Var_14;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, PtagMap_10, &PtagList_13);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (RttiTypeCtor_9));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_2[2], (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_23, PtagList_13, ((MR_Box) (STATE_VARIABLE_DeclSet_0_19)), &conv2_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_24_24);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_26, (MR_Integer) 1, STATE_VARIABLE_DeclSet_24_24, &STATE_VARIABLE_DeclSet_18_64);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_26));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_66, STATE_VARIABLE_DeclSet_18_64, STATE_VARIABLE_DeclSet_20);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    succeeded = ((MR_tag((MR_Word) PtagList_13)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), PtagList_13, (MR_Integer) 0)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), PtagList_13, (MR_Integer) 1)));
      Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1)));
      succeeded = (Var_33 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "\t{ 0, MR_SECTAG_VARIABLE, NULL },\n");
      FirstPtag_16 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_35;
      MR_Integer Var_36;
      MR_Word Var_18;
      MR_Word Var_17;

      succeeded = ((MR_tag((MR_Word) PtagList_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), PtagList_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), PtagList_13, (MR_Integer) 1)));
        Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1)));
        succeeded = (Var_36 == (MR_Integer) 0);
      }
      if (succeeded)
        FirstPtag_16 = (MR_Integer) 0;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table\'/7", (MR_String) "bad ptag list");
          return;
        }
      }
    }
    ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(RttiTypeCtor_9, PtagList_13, FirstPtag_16);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1339__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Integer Ptag_12;
      MR_Word SectagTable_13;
      MR_Word PtagTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SectagLocn_17;
      MR_Integer NumSharers_18;
      MR_String LocnStr_21;
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Var_27;
      MR_Word Var_39;
      MR_Word Var_54;
      MR_String Str_60;
      MR_String Var_61;
      MR_Word _SectagMap_19;
      MR_Word _TargetPrefixes_20;

      Ptag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
      SectagTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1)));
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[7]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Ptag_12));
      }
      mercury__require__expect_4_p_0(Var_27, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table_body\'/5", (MR_String) "ptag mismatch");
      SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectagTable_13, (MR_Integer) 0)));
      NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SectagTable_13, (MR_Integer) 1)));
      _SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectagTable_13, (MR_Integer) 2)));
      mercury__io__write_string_3_p_0((MR_String) "\t{ ");
      mercury__io__write_int_3_p_0(NumSharers_18);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      backend_libs__rtti__sectag_locn_to_string_3_p_0(SectagLocn_17, &_TargetPrefixes_20, &LocnStr_21);
      mercury__io__write_string_3_p_0(LocnStr_21);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Ptag_12));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Var_39));
      }
      Var_61 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
      mercury__io__write_string_3_p_0(Var_61);
      backend_libs__rtti__id_to_c_identifier_2_p_0(Var_54, &Str_60);
      mercury__io__write_string_3_p_0(Str_60);
      if ((PtagTail_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) " }\n");
      }
      else
      {
        MR_Integer Var_43;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_HeadVar__3_3;

        mercury__io__write_string_3_p_0((MR_String) " },\n");
        Var_43 = (HeadVar__3_3 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        next_value_of_HeadVar__2_2 = PtagTail_14;
        next_value_of_HeadVar__3_3 = Var_43;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_35;

    ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1283__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_35);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_35));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NameArityMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_Word TypeInfo_33_33 = (MR_Word) &ll_backend__rtti_out_scalar_common_2[1];
    MR_Word TypeCtorInfo_39_39;
    MR_Word ArityMaps_13;
    MR_Word FunctorLists_14;
    MR_Word Functors_15;
    MR_Word FunctorRttiNames_16;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_DeclSet_18_54;
    MR_Word Var_56;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeInfo_33_33, NameArityMap_10, &ArityMaps_13);
    mercury__list__map_3_p_0(TypeInfo_33_33, (MR_Word) &ll_backend__rtti_out_scalar_common_1[2], (MR_Word) &ll_backend__rtti_out_scalar_common_2[18], ArityMaps_13, &FunctorLists_14);
    TypeCtorInfo_39_39 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    mercury__list__condense_2_p_0(TypeCtorInfo_39_39, FunctorLists_14, &Functors_15);
    FunctorRttiNames_16 = mercury__list__map_2_f_0(TypeCtorInfo_39_39, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[19], Functors_15);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_23, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_18_54);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_23));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_56, STATE_VARIABLE_DeclSet_18_54, STATE_VARIABLE_DeclSet_18);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if (!((FunctorRttiNames_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_72;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (RttiTypeCtor_9));
      }
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, FunctorRttiNames_16, (MR_String) ",\n\t", Var_72);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_Word TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_Word Functors_13;
    MR_Word FunctorRttiNames_14;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_DeclSet_18_45;
    MR_Word Var_47;

    Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_30_30, FunctorMap_10);
    FunctorRttiNames_14 = mercury__list__map_2_f_0(TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[17], Functors_13);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_20, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_45);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_20));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_47, STATE_VARIABLE_DeclSet_18_45, STATE_VARIABLE_DeclSet_16);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if (!((FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_63;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (RttiTypeCtor_9));
      }
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, FunctorRttiNames_14, (MR_String) ",\n\t", Var_63);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17)
{
  {
    MR_Word TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_Word Functors_13;
    MR_Word FunctorRttiNames_14;
    MR_Word RttiId_15;
    MR_Word STATE_VARIABLE_DeclSet_18_45;
    MR_Word Var_47;

    Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_30_30, FunctorMap_10);
    FunctorRttiNames_14 = mercury__list__map_2_f_0(TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[16], Functors_13);
    {
      RttiId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiId_15, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), RttiId_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, RttiId_15, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_16, &STATE_VARIABLE_DeclSet_18_45);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (RttiId_15));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_47, STATE_VARIABLE_DeclSet_18_45, STATE_VARIABLE_DeclSet_17);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if (!((FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_63;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (RttiTypeCtor_9));
      }
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, FunctorRttiNames_14, (MR_String) ",\n\t", Var_63);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_Word TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_Word Functors_13;
    MR_Word FunctorRttiNames_14;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_DeclSet_18_45;
    MR_Word Var_47;

    Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_30_30, FunctorMap_10);
    FunctorRttiNames_14 = mercury__list__map_2_f_0(TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[15], Functors_13);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_20, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_45);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_20));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_47, STATE_VARIABLE_DeclSet_18_45, STATE_VARIABLE_DeclSet_16);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if (!((FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_63;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (RttiTypeCtor_9));
      }
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, FunctorRttiNames_14, (MR_String) ",\n\t", Var_63);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word FunctorMap_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_Word TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_Word Functors_13;
    MR_Word FunctorRttiNames_14;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_DeclSet_18_45;
    MR_Word Var_47;

    Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_30_30, FunctorMap_10);
    FunctorRttiNames_14 = mercury__list__map_2_f_0(TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[14], Functors_13);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_20, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_45);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_20));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_47, STATE_VARIABLE_DeclSet_18_45, STATE_VARIABLE_DeclSet_16);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if (!((FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_63;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (RttiTypeCtor_9));
      }
      mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, FunctorRttiNames_14, (MR_String) ",\n\t", Var_63);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_7_p_0(
  MR_Word Info_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NotagFunctor_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  {
    MR_String FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), NotagFunctor_10, (MR_Integer) 0)));
    MR_Word ArgType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotagFunctor_10, (MR_Integer) 1)));
    MR_Word MaybeArgName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotagFunctor_10, (MR_Integer) 2)));
    MR_Word FunctorSubtypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotagFunctor_10, (MR_Integer) 3)));
    MR_Word ArgTypeData_17;
    MR_Word STATE_VARIABLE_DeclSet_26_26;
    MR_Word STATE_VARIABLE_DeclSet_31_31;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_DeclSet_18_73;
    MR_Word Var_75;
    MR_Integer Var_18;

    ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(Info_8, ArgType_14, STATE_VARIABLE_DeclSet_0_22, &STATE_VARIABLE_DeclSet_26_26);
    ArgTypeData_17 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ArgType_14);
    ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(Info_8, ArgTypeData_17, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_18, STATE_VARIABLE_DeclSet_26_26, &STATE_VARIABLE_DeclSet_31_31);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_8, Var_33, (MR_Integer) 1, STATE_VARIABLE_DeclSet_31_31, &STATE_VARIABLE_DeclSet_18_73);
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_33));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_75, STATE_VARIABLE_DeclSet_18_73, STATE_VARIABLE_DeclSet_23);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FunctorName_13);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    if (((MR_tag((MR_Word) ArgType_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgTypeInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgType_14, (MR_Integer) 0)));
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ArgTypeInfo_19));
      }
      mercury__io__write_string_3_p_0((MR_String) "(MR_PseudoTypeInfo) ");
      ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(Var_46);
    }
    else
    {
      MR_Word ArgPseudoTypeInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgType_14, (MR_Integer) 0)));
      MR_Word Var_43;

      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (ArgPseudoTypeInfo_20));
      }
      mercury__io__write_string_3_p_0((MR_String) "(MR_PseudoTypeInfo) ");
      ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(Var_43);
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((MaybeArgName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
    {
      MR_String ArgName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArgName_15, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) "\"");
      mercury__io__write_string_3_p_0(ArgName_21);
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    ll_backend__rtti_out__output_functor_subtype_info_3_p_0(FunctorSubtypeInfo_16);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(
  MR_Word Info_11,
  MR_Word RttiData_12,
  MR_String FirstIndent_13,
  MR_String LaterIndent_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiData_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Var_26;
    MR_Integer Var_18;

    if (succeeded)
    {
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_12, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)));
      if (succeeded)
        Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
      *STATE_VARIABLE_N_21 = STATE_VARIABLE_N_0_20;
    }
    else
    {
      MR_Word RttiId_19;
      MR_Word Var_43;

      backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_12, &RttiId_19);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (RttiId_19));
      }
      ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, Var_43, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_20, STATE_VARIABLE_N_21, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_subtype_info_3_p_0(
  MR_Word FunctorSubtypeInfo_4)
{
  switch (FunctorSubtypeInfo_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTOR_SUBTYPE_EXISTS");
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTOR_SUBTYPE_NONE");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(
  MR_Word Info_7,
  MR_Word MaybePseudoTypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) MaybePseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePseudoTypeInfo_8, (MR_Integer) 0)));
      MR_Word RttiId_29;
      MR_Word Var_30;
      MR_Word Var_31;

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (TypeInfo_11));
      }
      backend_libs__rtti__rtti_data_to_id_2_p_0(Var_30, &RttiId_29);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (RttiId_29));
      }
      succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_31, STATE_VARIABLE_DeclSet_0_13);
      if (succeeded)
        *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
      else
        ll_backend__rtti_out__do_output_type_info_defn_6_p_0(Info_7, TypeInfo_11, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
    }
    else
    {
      MR_Word PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePseudoTypeInfo_8, (MR_Integer) 0)));
      MR_Integer Var_42;

      succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_12)) == (MR_mktag((MR_Integer) 3)));
      if (succeeded)
      {
        Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), PseudoTypeInfo_12, (MR_Integer) 0)));
        *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
      }
      else
      {
        MR_Word RttiId_43;
        MR_Word Var_44;
        MR_Word Var_45;

        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PseudoTypeInfo_12));
        }
        backend_libs__rtti__rtti_data_to_id_2_p_0(Var_44, &RttiId_43);
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (RttiId_43));
        }
        succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_45, STATE_VARIABLE_DeclSet_0_13);
        if (succeeded)
          *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
        else
          ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(Info_7, PseudoTypeInfo_12, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
      }
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(
  MR_Word Info_7,
  MR_Word PseudoTypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22)
{
  switch (MR_tag((MR_Word) PseudoTypeInfo_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) PseudoTypeInfo_8), (MR_Integer) 0);
        MR_Word TypeCtorRttiId_12;
        MR_Integer Var_13;

        {
          TypeCtorRttiId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_12, 0) = ((MR_Box) (RttiTypeCtor_11));
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TypeCtorRttiId_12, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_21, STATE_VARIABLE_DeclSet_22);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_8, (MR_Integer) 1)));
        MR_Word ArgRttiDatas_16;
        MR_Word STATE_VARIABLE_DeclSet_55_55;
        MR_Word STATE_VARIABLE_DeclSet_58_58;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word RttiTypeCtor_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_8, (MR_Integer) 0)));
        MR_Word TypeCtorRttiId_81;
        MR_Integer Var_15;

        {
          TypeCtorRttiId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_81, 0) = ((MR_Box) (RttiTypeCtor_80));
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TypeCtorRttiId_81, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_15, STATE_VARIABLE_DeclSet_0_21, &STATE_VARIABLE_DeclSet_55_55);
        ArgRttiDatas_16 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[12], Args_14);
        ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(Info_7, ArgRttiDatas_16, STATE_VARIABLE_DeclSet_55_55, &STATE_VARIABLE_DeclSet_58_58);
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (PseudoTypeInfo_8));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (RttiTypeCtor_80));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (Var_63));
        }
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, Var_60, STATE_VARIABLE_DeclSet_58_58, STATE_VARIABLE_DeclSet_22);
        mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        mercury__io__write_string_3_p_0((MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ArgRttiDatas_16);
        mercury__io__write_string_3_p_0((MR_String) "}};\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeCtorInfo_90_90;
        MR_Word RttiVarArityId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_8, (MR_Integer) 0)));
        MR_Integer Arity_19;
        MR_Word STATE_VARIABLE_DeclSet_29_29;
        MR_Word STATE_VARIABLE_DeclSet_32_32;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word RttiTypeCtor_82;
        MR_Word TypeCtorRttiId_83;
        MR_Word Args_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_8, (MR_Integer) 1)));
        MR_Word ArgRttiDatas_85;
        MR_Integer Var_18;

        RttiTypeCtor_82 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(RttiVarArityId_17);
        {
          TypeCtorRttiId_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_83, 0) = ((MR_Box) (RttiTypeCtor_82));
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TypeCtorRttiId_83, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_18, STATE_VARIABLE_DeclSet_0_21, &STATE_VARIABLE_DeclSet_29_29);
        TypeCtorInfo_90_90 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
        ArgRttiDatas_85 = mercury__list__map_2_f_0(TypeCtorInfo_90_90, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[13], Args_84);
        ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(Info_7, ArgRttiDatas_85, STATE_VARIABLE_DeclSet_29_29, &STATE_VARIABLE_DeclSet_32_32);
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (PseudoTypeInfo_8));
        }
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (RttiTypeCtor_82));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_37));
        }
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, Var_34, STATE_VARIABLE_DeclSet_32_32, STATE_VARIABLE_DeclSet_22);
        mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
        mercury__list__length_2_p_0(TypeCtorInfo_90_90, Args_84, &Arity_19);
        mercury__io__write_int_3_p_0(Arity_19);
        mercury__io__write_string_3_p_0((MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ArgRttiDatas_85);
        mercury__io__write_string_3_p_0((MR_String) "}};\n");
      }
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_DeclSet_22 = STATE_VARIABLE_DeclSet_0_21;
      break;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0(
  MR_Word Info_7,
  MR_Word TypeInfo_8,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  switch (MR_tag((MR_Word) TypeInfo_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) TypeInfo_8), (MR_Integer) 0);
        MR_Word TypeCtorRttiId_12;
        MR_Integer Var_13;

        {
          TypeCtorRttiId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_12, 0) = ((MR_Box) (RttiTypeCtor_11));
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TypeCtorRttiId_12, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_8, (MR_Integer) 1)));
        MR_Word ArgRttiDatas_16;
        MR_Word STATE_VARIABLE_DeclSet_54_54;
        MR_Word STATE_VARIABLE_DeclSet_57_57;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word RttiTypeCtor_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_8, (MR_Integer) 0)));
        MR_Word TypeCtorRttiId_80;
        MR_Integer Var_15;

        {
          TypeCtorRttiId_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_80, 0) = ((MR_Box) (RttiTypeCtor_79));
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TypeCtorRttiId_80, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_15, STATE_VARIABLE_DeclSet_0_20, &STATE_VARIABLE_DeclSet_54_54);
        ArgRttiDatas_16 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[10], Args_14);
        ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(Info_7, ArgRttiDatas_16, STATE_VARIABLE_DeclSet_54_54, &STATE_VARIABLE_DeclSet_57_57);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (TypeInfo_8));
        }
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (RttiTypeCtor_79));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Var_62));
        }
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, Var_59, STATE_VARIABLE_DeclSet_57_57, STATE_VARIABLE_DeclSet_21);
        mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        mercury__io__write_string_3_p_0((MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_TypeInfo) ", ArgRttiDatas_16);
        mercury__io__write_string_3_p_0((MR_String) "}};\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeCtorInfo_89_89;
        MR_Word RttiVarArityId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_8, (MR_Integer) 0)));
        MR_Integer Arity_19;
        MR_Word STATE_VARIABLE_DeclSet_28_28;
        MR_Word STATE_VARIABLE_DeclSet_31_31;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word RttiTypeCtor_81;
        MR_Word TypeCtorRttiId_82;
        MR_Word Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_8, (MR_Integer) 1)));
        MR_Word ArgRttiDatas_84;
        MR_Integer Var_18;

        RttiTypeCtor_81 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(RttiVarArityId_17);
        {
          TypeCtorRttiId_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_82, 0) = ((MR_Box) (RttiTypeCtor_81));
          MR_hl_field(MR_mktag(0), TypeCtorRttiId_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TypeCtorRttiId_82, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_18, STATE_VARIABLE_DeclSet_0_20, &STATE_VARIABLE_DeclSet_28_28);
        TypeCtorInfo_89_89 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
        ArgRttiDatas_84 = mercury__list__map_2_f_0(TypeCtorInfo_89_89, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[11], Args_83);
        ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(Info_7, ArgRttiDatas_84, STATE_VARIABLE_DeclSet_28_28, &STATE_VARIABLE_DeclSet_31_31);
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TypeInfo_8));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (RttiTypeCtor_81));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_36));
        }
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, Var_33, STATE_VARIABLE_DeclSet_31_31, STATE_VARIABLE_DeclSet_21);
        mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(RttiTypeCtor_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
        mercury__list__length_2_p_0(TypeCtorInfo_89_89, Args_83, &Arity_19);
        mercury__io__write_int_3_p_0(Arity_19);
        mercury__io__write_string_3_p_0((MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_TypeInfo) ", ArgRttiDatas_84);
        mercury__io__write_string_3_p_0((MR_String) "}};\n");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word RttiName_6)
{
  {
    MR_Word Var_10;
    MR_String Str_16;
    MR_String Var_17;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (RttiName_6));
    }
    Var_17 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_17);
    backend_libs__rtti__id_to_c_identifier_2_p_0(Var_10, &Str_16);
    mercury__io__write_string_3_p_0(Str_16);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_21;

    ll_backend__rtti_out__output_rtti_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_21));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(
  MR_Word Info_7,
  MR_Word ArgRttiDatas_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_DeclSet_17_17;
    MR_Box conv2_STATE_VARIABLE_DeclSet_17_17;
    MR_Box conv1_STATE_VARIABLE_IO_18_18;
    MR_Integer Var_11;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_16, ArgRttiDatas_8, ((MR_Box) (STATE_VARIABLE_DeclSet_0_12)), &conv2_STATE_VARIABLE_DeclSet_17_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
    STATE_VARIABLE_DeclSet_17_17 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_17_17);
    ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(Info_7, ArgRttiDatas_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_17_17, STATE_VARIABLE_DeclSet_13);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_String FirstIndent_3,
  MR_String LaterIndent_4,
  MR_Integer STATE_VARIABLE_N_0_5,
  MR_Integer * STATE_VARIABLE_N_6,
  MR_Word STATE_VARIABLE_DeclSet_0_7,
  MR_Word * STATE_VARIABLE_DeclSet_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_DeclSet_8 = STATE_VARIABLE_DeclSet_0_7;
      *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
    }
    else
    {
      MR_Word RttiData_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word RttiDatas_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer STATE_VARIABLE_N_37_37;
      MR_Word STATE_VARIABLE_DeclSet_38_38;
      MR_Word Var_58;
      MR_Integer Var_56;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_7;

      succeeded = ((((MR_tag((MR_Word) RttiData_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiData_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_24, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
          Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_58, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        STATE_VARIABLE_DeclSet_38_38 = STATE_VARIABLE_DeclSet_0_7;
        STATE_VARIABLE_N_37_37 = STATE_VARIABLE_N_0_5;
      }
      else
      {
        MR_Word RttiId_57;
        MR_Word Var_75;

        backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_24, &RttiId_57);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (RttiId_57));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_1, Var_75, FirstIndent_3, LaterIndent_4, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_37_37, STATE_VARIABLE_DeclSet_0_7, &STATE_VARIABLE_DeclSet_38_38);
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = RttiDatas_25;
      next_value_of_STATE_VARIABLE_N_0_5 = STATE_VARIABLE_N_37_37;
      next_value_of_STATE_VARIABLE_DeclSet_0_7 = STATE_VARIABLE_DeclSet_38_38;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_N_0_5 = next_value_of_STATE_VARIABLE_N_0_5;
      STATE_VARIABLE_DeclSet_0_7 = next_value_of_STATE_VARIABLE_DeclSet_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_TCDeclSuperRttiId_14;
    MR_Word conv6_STATE_VARIABLE_Counter_25;
    MR_Word conv5_STATE_VARIABLE_DeclSet_27;

    ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv7_TCDeclSuperRttiId_14, ((MR_Word) wrapper_arg_3), &conv6_STATE_VARIABLE_Counter_25, ((MR_Word) wrapper_arg_5), &conv5_STATE_VARIABLE_DeclSet_27);
    *wrapper_arg_2 = ((MR_Box) (conv7_TCDeclSuperRttiId_14));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Counter_25));
    *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_DeclSet_27));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_RttiId_10;

    ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv4_RttiId_10);
    *wrapper_arg_3 = ((MR_Box) (conv4_RttiId_10));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_14;

    ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Instance_8,
  MR_Word STATE_VARIABLE_DeclSet_0_28,
  MR_Word * STATE_VARIABLE_DeclSet_29)
{
  {
    MR_Word TypeCtorInfo_94_94;
    MR_Word TypeCtorInfo_95_95;
    MR_Word TypeCtorInfo_96_96;
    MR_Word TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_8, (MR_Integer) 0)));
    MR_Word TCTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_8, (MR_Integer) 1)));
    MR_Integer NumTypeVars_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Instance_8, (MR_Integer) 2)));
    MR_Word Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_8, (MR_Integer) 3)));
    MR_Word TCTypeRttiDatas_16;
    MR_Word TCInstanceTypesRttiId_17;
    MR_Word TCInstanceConstraintsRttiId_18;
    MR_Word TCDeclRttiId_23;
    MR_Word TCInstanceRttiId_25;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_DeclSet_33_33;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_DeclSet_37_37;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_DeclSet_52_52;
    MR_Word STATE_VARIABLE_DeclSet_64_64;
    MR_Word Var_66;
    MR_Integer Var_77;
    MR_Word _MethodProcLabels_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance_8, (MR_Integer) 4)));
    MR_Box conv2_STATE_VARIABLE_DeclSet_33_33;
    MR_Box conv1_STATE_VARIABLE_IO_34_34;
    MR_Integer Var_24;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Info_7));
    }
    TypeCtorInfo_94_94 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
    TypeCtorInfo_95_95 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
    TypeCtorInfo_96_96 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl2_6_p_2(TypeCtorInfo_94_94, TypeCtorInfo_95_95, TypeCtorInfo_96_96, Var_32, TCTypes_12, ((MR_Box) (STATE_VARIABLE_DeclSet_0_28)), &conv2_STATE_VARIABLE_DeclSet_33_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    STATE_VARIABLE_DeclSet_33_33 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_33_33);
    TCTypeRttiDatas_16 = mercury__list__map_2_f_0(TypeCtorInfo_94_94, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[9], TCTypes_12);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TCTypes_12));
    }
    {
      TCInstanceTypesRttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCInstanceTypesRttiId_17, 0) = ((MR_Box) (TCName_11));
      MR_hl_field(MR_mktag(1), TCInstanceTypesRttiId_17, 1) = ((MR_Box) (Var_36));
    }
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCInstanceTypesRttiId_17, STATE_VARIABLE_DeclSet_33_33, &STATE_VARIABLE_DeclSet_37_37);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", TCTypeRttiDatas_16);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (TCTypes_12));
    }
    {
      TCInstanceConstraintsRttiId_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCInstanceConstraintsRttiId_18, 0) = ((MR_Box) (TCName_11));
      MR_hl_field(MR_mktag(1), TCInstanceConstraintsRttiId_18, 1) = ((MR_Box) (Var_45));
    }
    if ((Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_DeclSet_52_52 = STATE_VARIABLE_DeclSet_37_37;
    else
    {
      MR_Word ConstraintIds_21;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word STATE_VARIABLE_DeclSet_48_48;
      MR_Word Var_50;
      MR_Word Var_22;
      MR_Box conv10_Var_22;
      MR_Box conv9_STATE_VARIABLE_DeclSet_48_48;
      MR_Box conv8_STATE_VARIABLE_IO_49_49;

      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TCName_11));
        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (TCTypes_12));
      }
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_7));
        MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Var_50));
      }
      Var_47 = mercury__counter__init_1_f_0((MR_Integer) 1);
      mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, TypeCtorInfo_95_95, TypeCtorInfo_96_96, Var_46, Constraints_14, &ConstraintIds_21, ((MR_Box) (Var_47)), &conv10_Var_22, ((MR_Box) (STATE_VARIABLE_DeclSet_37_37)), &conv9_STATE_VARIABLE_DeclSet_48_48, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_49_49);
      Var_22 = ((MR_Word) conv10_Var_22);
      STATE_VARIABLE_DeclSet_48_48 = ((MR_Word) conv9_STATE_VARIABLE_DeclSet_48_48);
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCInstanceConstraintsRttiId_18, STATE_VARIABLE_DeclSet_48_48, &STATE_VARIABLE_DeclSet_52_52);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0((MR_String) "(MR_TypeClassConstraint) ", ConstraintIds_21);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      TCDeclRttiId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCDeclRttiId_23, 0) = ((MR_Box) (TCName_11));
      MR_hl_field(MR_mktag(1), TCDeclRttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(Info_7, TCDeclRttiId_23, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_24, STATE_VARIABLE_DeclSet_52_52, &STATE_VARIABLE_DeclSet_64_64);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (TCTypes_12));
    }
    {
      TCInstanceRttiId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCInstanceRttiId_25, 0) = ((MR_Box) (TCName_11));
      MR_hl_field(MR_mktag(1), TCInstanceRttiId_25, 1) = ((MR_Box) (Var_66));
    }
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCInstanceRttiId_25, STATE_VARIABLE_DeclSet_64_64, STATE_VARIABLE_DeclSet_29);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    ll_backend__rtti_out__output_rtti_id_3_p_0(TCDeclRttiId_23);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(NumTypeVars_13);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    Var_77 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, Constraints_14);
    mercury__io__write_int_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    ll_backend__rtti_out__output_rtti_id_3_p_0(TCInstanceTypesRttiId_17);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
      ll_backend__rtti_out__output_rtti_id_3_p_0(TCInstanceConstraintsRttiId_18);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_3_p_0((MR_String) "\t0\n");
  }
  else
  {
    MR_Word Var_23;

    mercury__io__write_string_3_p_0((MR_String) "\t");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Cast_1));
    }
    mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, HeadVar__2_2, (MR_String) ",\n\t", Var_23);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(
  MR_Word Info_11,
  MR_Word RttiId_12,
  MR_String FirstIndent_13,
  MR_String LaterIndent_14,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  {
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (RttiId_12));
    }
    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, Var_24, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_TCDeclSuperRttiId_14;
    MR_Word conv4_STATE_VARIABLE_Counter_25;
    MR_Word conv3_STATE_VARIABLE_DeclSet_27;

    ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv5_TCDeclSuperRttiId_14, ((MR_Word) wrapper_arg_3), &conv4_STATE_VARIABLE_Counter_25, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_DeclSet_27);
    *wrapper_arg_2 = ((MR_Box) (conv5_TCDeclSuperRttiId_14));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Counter_25));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_27));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_RttiId_8;

    ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_RttiId_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_RttiId_8));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(
  MR_Word Info_7,
  MR_Word TCDecl_8,
  MR_Word STATE_VARIABLE_DeclSet_0_47,
  MR_Word * STATE_VARIABLE_DeclSet_48)
{
  {
    MR_Word TCId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCDecl_8, (MR_Integer) 0)));
    MR_Integer Version_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TCDecl_8, (MR_Integer) 1)));
    MR_Word Supers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCDecl_8, (MR_Integer) 2)));
    MR_Word TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCId_11, (MR_Integer) 0)));
    MR_Word TVarNames_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCId_11, (MR_Integer) 1)));
    MR_Word MethodIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCId_11, (MR_Integer) 2)));
    MR_Word ModuleSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCName_14, (MR_Integer) 0)));
    MR_String ClassName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), TCName_14, (MR_Integer) 1)));
    MR_Integer Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TCName_14, (MR_Integer) 2)));
    MR_Word TCIdVarNamesRttiId_21;
    MR_Word TCIdMethodIdsRttiId_23;
    MR_Word TCIdRttiId_25;
    MR_Word TCDeclSupersRttiId_27;
    MR_Word TCDeclRttiId_29;
    MR_Integer NumTVarNames_34;
    MR_Integer NumMethodIds_35;
    MR_Integer NumSupers_44;
    MR_Word STATE_VARIABLE_DeclSet_51_51;
    MR_Word STATE_VARIABLE_DeclSet_59_59;
    MR_Word STATE_VARIABLE_DeclSet_67_67;
    MR_String Var_71;
    MR_Word STATE_VARIABLE_DeclSet_103_103;

    {
      TCIdVarNamesRttiId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCIdVarNamesRttiId_21, 0) = ((MR_Box) (TCName_14));
      MR_hl_field(MR_mktag(1), TCIdVarNamesRttiId_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    {
      TCIdMethodIdsRttiId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCIdMethodIdsRttiId_23, 0) = ((MR_Box) (TCName_14));
      MR_hl_field(MR_mktag(1), TCIdMethodIdsRttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      TCIdRttiId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCIdRttiId_25, 0) = ((MR_Box) (TCName_14));
      MR_hl_field(MR_mktag(1), TCIdRttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      TCDeclSupersRttiId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCDeclSupersRttiId_27, 0) = ((MR_Box) (TCName_14));
      MR_hl_field(MR_mktag(1), TCDeclSupersRttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    {
      TCDeclRttiId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TCDeclRttiId_29, 0) = ((MR_Box) (TCName_14));
      MR_hl_field(MR_mktag(1), TCDeclRttiId_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    if ((TVarNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_DeclSet_51_51 = STATE_VARIABLE_DeclSet_0_47;
    else
    {
      MR_Box conv0_STATE_VARIABLE_IO_56_56;

      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCIdVarNamesRttiId_21, STATE_VARIABLE_DeclSet_0_47, &STATE_VARIABLE_DeclSet_51_51);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[7], TVarNames_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    if ((MethodIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_DeclSet_59_59 = STATE_VARIABLE_DeclSet_51_51;
    else
    {
      MR_Box conv1_STATE_VARIABLE_IO_64_64;

      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCIdMethodIdsRttiId_23, STATE_VARIABLE_DeclSet_51_51, &STATE_VARIABLE_DeclSet_59_59);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[8], MethodIds_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_64_64);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TVarNames_15, &NumTVarNames_34);
    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, MethodIds_16, &NumMethodIds_35);
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCIdRttiId_25, STATE_VARIABLE_DeclSet_59_59, &STATE_VARIABLE_DeclSet_67_67);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    Var_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_17);
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Var_71);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ClassName_18);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    mercury__io__write_int_3_p_0(Arity_19);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(NumTVarNames_34);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(NumMethodIds_35);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((TVarNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
      ll_backend__rtti_out__output_rtti_id_3_p_0(TCIdVarNamesRttiId_21);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((MethodIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
      ll_backend__rtti_out__output_rtti_id_3_p_0(TCIdMethodIdsRttiId_23);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    if ((Supers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_DeclSet_103_103 = STATE_VARIABLE_DeclSet_67_67;
    else
    {
      MR_Word SuperIds_42;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word STATE_VARIABLE_DeclSet_99_99;
      MR_Word Var_101;
      MR_Word Var_43;
      MR_Box conv8_Var_43;
      MR_Box conv7_STATE_VARIABLE_DeclSet_99_99;
      MR_Box conv6_STATE_VARIABLE_IO_100_100;

      {
        Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (TCName_14));
      }
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4));
        MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Info_7));
        MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (Var_101));
      }
      Var_98 = mercury__counter__init_1_f_0((MR_Integer) 1);
      mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_97, Supers_13, &SuperIds_42, ((MR_Box) (Var_98)), &conv8_Var_43, ((MR_Box) (STATE_VARIABLE_DeclSet_67_67)), &conv7_STATE_VARIABLE_DeclSet_99_99, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_100_100);
      Var_43 = ((MR_Word) conv8_Var_43);
      STATE_VARIABLE_DeclSet_99_99 = ((MR_Word) conv7_STATE_VARIABLE_DeclSet_99_99);
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCDeclSupersRttiId_27, STATE_VARIABLE_DeclSet_99_99, &STATE_VARIABLE_DeclSet_103_103);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0((MR_String) "(MR_TypeClassConstraint) ", SuperIds_42);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, Supers_13, &NumSupers_44);
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(Info_7, TCDeclRttiId_29, STATE_VARIABLE_DeclSet_103_103, STATE_VARIABLE_DeclSet_48);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    ll_backend__rtti_out__output_rtti_id_3_p_0(TCIdRttiId_25);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(Version_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_int_3_p_0(NumSupers_44);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((Supers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
      ll_backend__rtti_out__output_rtti_id_3_p_0(TCDeclSupersRttiId_27);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_3_p_0((MR_String) "\t0\n");
  }
  else
  {
    MR_Word Var_23;

    mercury__io__write_string_3_p_0((MR_String) "\t");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Cast_1));
    }
    mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, HeadVar__2_2, (MR_String) ",\n\t", Var_23);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(
  MR_Word Info_7,
  MR_Word RttiId_8,
  MR_Word STATE_VARIABLE_DeclSet_0_11,
  MR_Word * STATE_VARIABLE_DeclSet_12)
{
  {
    MR_Word STATE_VARIABLE_DeclSet_18_18;
    MR_Word Var_20;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_7, RttiId_8, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_11, &STATE_VARIABLE_DeclSet_18_18);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (RttiId_8));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_20, STATE_VARIABLE_DeclSet_18_18, STATE_VARIABLE_DeclSet_12);
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_3_p_0(
  MR_Word RttiId_4)
{
  {
    MR_String Str_6;
    MR_String Var_9;

    Var_9 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_9);
    backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_4, &Str_6);
    mercury__io__write_string_3_p_0(Str_6);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__rtti_out__output_static_code_addr_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(
  MR_Word Info_10,
  MR_Word TCName_11,
  MR_Word InstanceModuleName_12,
  MR_String InstanceString_13,
  MR_Word BaseTypeClassInfo_14,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26)
{
  {
    MR_Word TypeCtorInfo_58_58 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0;
    MR_Integer N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_14, (MR_Integer) 0)));
    MR_Integer N2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_14, (MR_Integer) 1)));
    MR_Integer N3_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_14, (MR_Integer) 2)));
    MR_Integer N4_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_14, (MR_Integer) 3)));
    MR_Integer N5_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_14, (MR_Integer) 4)));
    MR_Word Methods_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_14, (MR_Integer) 5)));
    MR_Word CodeAddrs_23;
    MR_Word RttiId_24;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_DeclSet_31_31;
    MR_Word Var_35;
    MR_Word Var_41;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Box conv3_STATE_VARIABLE_DeclSet_31_31;
    MR_Box conv2_STATE_VARIABLE_IO_32_32;

    CodeAddrs_23 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, TypeCtorInfo_58_58, (MR_Word) &ll_backend__rtti_out_scalar_common_2[4], Methods_22);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Info_10));
    }
    mercury__list__foldl2_6_p_2(TypeCtorInfo_58_58, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_30, CodeAddrs_23, ((MR_Box) (STATE_VARIABLE_DeclSet_0_25)), &conv3_STATE_VARIABLE_DeclSet_31_31, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_32_32);
    STATE_VARIABLE_DeclSet_31_31 = ((MR_Word) conv3_STATE_VARIABLE_DeclSet_31_31);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (InstanceModuleName_12));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (InstanceString_13));
    }
    {
      RttiId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RttiId_24, 0) = ((MR_Box) (TCName_11));
      MR_hl_field(MR_mktag(1), RttiId_24, 1) = ((MR_Box) (Var_35));
    }
    ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_10, RttiId_24, (MR_Integer) 1, STATE_VARIABLE_DeclSet_31_31, STATE_VARIABLE_DeclSet_26);
    mercury__io__write_string_3_p_0((MR_String) " = {\n\t(MR_Code *) ");
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (N5_21));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (N4_20));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (N3_19));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (N2_18));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (N1_17));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_45));
    }
    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Var_41, (MR_String) ",\n\t(MR_Code *) ", (MR_Word) &ll_backend__rtti_out_scalar_common_2[5]);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    mercury__io__write_list_5_p_0(TypeCtorInfo_58_58, CodeAddrs_23, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[6]);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_6_p_0(
  MR_Word Info_7,
  MR_Word RttiData_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiData_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Var_17;
    MR_Integer Var_11;

    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_8, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 3)));
      if (succeeded)
        Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)));
    }
    if (succeeded)
      *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
    else
    {
      MR_Word RttiId_12;
      MR_Word STATE_VARIABLE_DeclSet_16_29;
      MR_Word Var_33;

      backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_8, &RttiId_12);
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(Info_7, RttiId_12, (MR_Integer) 0, STATE_VARIABLE_DeclSet_0_13, &STATE_VARIABLE_DeclSet_16_29);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (RttiId_12));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_33, STATE_VARIABLE_DeclSet_16_29, STATE_VARIABLE_DeclSet_14);
    }
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(
  MR_Word Info_8,
  MR_Word RttiId_9,
  MR_Word BeingDefined_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  {
    MR_Word Linkage_13;
    MR_String LinkageStr_14;
    MR_Word Globals_15;
    MR_Word InclCodeAddr_16;
    MR_String CType_17;
    MR_Word IsArray_18;
    MR_String Var_26;
    MR_Word IsArray_57;
    MR_String Str_63;
    MR_String Var_64;
    MR_Word Var_34;
    MR_String Var_35;
    MR_String Var_36;
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

    ll_backend__rtti_out__output_rtti_type_decl_5_p_0(RttiId_9, STATE_VARIABLE_DeclSet_0_19, STATE_VARIABLE_DeclSet_20);
    IsArray_57 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_9);
    switch (IsArray_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Linkage_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Exported_58;

          Exported_58 = backend_libs__rtti__rtti_id_is_exported_1_f_0(RttiId_9);
          switch (Exported_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Linkage_13 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Linkage_13 = (MR_Integer) 0;
              break;
          }
        }
        break;
    }
    LinkageStr_14 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(Linkage_13, BeingDefined_10);
    mercury__io__write_string_3_p_0(LinkageStr_14);
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
    Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
    Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    Globals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 8)));
    InclCodeAddr_16 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(RttiId_9);
    Var_26 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(Globals_15, InclCodeAddr_16);
    mercury__io__write_string_3_p_0(Var_26);
    backend_libs__rtti__rtti_id_c_type_3_p_0(RttiId_9, &CType_17, &IsArray_18);
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(CType_17);
    mercury__io__write_string_3_p_0((MR_String) " ");
    Var_64 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_64);
    backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_9, &Str_63);
    mercury__io__write_string_3_p_0(Str_63);
    switch (IsArray_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "[]");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_5_p_0(
  MR_Word RttiId_6,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) RttiId_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer Arity_11;
    MR_Word RttiName_10;
    MR_Integer Var_20;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_6, (MR_Integer) 0)));
      RttiName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_6, (MR_Integer) 1)));
      succeeded = ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(RttiName_10, &Arity_11);
      if (succeeded)
      {
        Var_20 = ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0();
        succeeded = (Arity_11 > Var_20);
      }
    }
    if (succeeded)
    {
      MR_Word DeclId_12;

      {
        DeclId_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), DeclId_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), DeclId_12, 1) = ((MR_Box) (Arity_11));
      }
      succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(DeclId_12, STATE_VARIABLE_DeclSet_0_16);
      if (succeeded)
        *STATE_VARIABLE_DeclSet_17 = STATE_VARIABLE_DeclSet_0_16;
      else
      {
        MR_String Var_52;
        MR_Word Var_58;
        MR_String Var_62;
        MR_String Var_72;

        mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
        Var_58 = (MR_Word) &ll_backend__rtti_out_scalar_common_4[0];
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_58, Arity_11, &Var_52);
        mercury__io__write_string_3_p_0(Var_52);
        mercury__io__write_string_3_p_0((MR_String) "_GUARD\n#define MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_58, Arity_11, &Var_62);
        mercury__io__write_string_3_p_0(Var_62);
        mercury__io__write_string_3_p_0((MR_String) "_GUARD\nMR_DECLARE_ALL_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_58, Arity_11, &Var_72);
        mercury__io__write_string_3_p_0(Var_72);
        mercury__io__write_string_3_p_0((MR_String) ");\n#endif\n");
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_12, STATE_VARIABLE_DeclSet_0_16, STATE_VARIABLE_DeclSet_17);
      }
    }
    else
    {
      MR_Integer Arity_46;
      MR_Word TCRttiName_15;
      MR_Integer Var_30;
      MR_Word Var_14;

      succeeded = ((MR_tag((MR_Word) RttiId_6)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RttiId_6, (MR_Integer) 0)));
        TCRttiName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), RttiId_6, (MR_Integer) 1)));
        succeeded = ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(TCRttiName_15, &Arity_46);
        if (succeeded)
        {
          Var_30 = ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0();
          succeeded = (Arity_46 > Var_30);
        }
      }
      if (succeeded)
      {
        MR_Word DeclId_44;

        {
          DeclId_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), DeclId_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), DeclId_44, 1) = ((MR_Box) (Arity_46));
        }
        succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(DeclId_44, STATE_VARIABLE_DeclSet_0_16);
        if (succeeded)
          *STATE_VARIABLE_DeclSet_17 = STATE_VARIABLE_DeclSet_0_16;
        else
        {
          MR_String Var_83;
          MR_Word Var_89;
          MR_String Var_93;
          MR_String Var_103;
          MR_String Var_113;

          mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_TYPECLASS_CONSTRAINT_STRUCT_");
          Var_89 = (MR_Word) &ll_backend__rtti_out_scalar_common_4[0];
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_89, Arity_46, &Var_83);
          mercury__io__write_string_3_p_0(Var_83);
          mercury__io__write_string_3_p_0((MR_String) "_GUARD\n#define MR_TYPECLASS_CONSTRAINT_STRUCT_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_89, Arity_46, &Var_93);
          mercury__io__write_string_3_p_0(Var_93);
          mercury__io__write_string_3_p_0((MR_String) "_GUARD\nMR_DEFINE_TYPECLASS_CONSTRAINT_STRUCT(MR_TypeClassConstraint_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_89, Arity_46, &Var_103);
          mercury__io__write_string_3_p_0(Var_103);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_89, Arity_46, &Var_113);
          mercury__io__write_string_3_p_0(Var_113);
          mercury__io__write_string_3_p_0((MR_String) ");\n#endif\n");
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_44, STATE_VARIABLE_DeclSet_0_16, STATE_VARIABLE_DeclSet_17);
        }
      }
      else
        *STATE_VARIABLE_DeclSet_17 = STATE_VARIABLE_DeclSet_0_16;
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void)
{
  {
    return (MR_Integer) 10;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
  MR_Word TCRttiName_3,
  MR_Integer * Arity_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) TCRttiName_3)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), TCRttiName_3, (MR_Integer) 0)));

      *Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), TCRttiName_3, (MR_Integer) 1)));
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) TCRttiName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
    {
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 1)));
      MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 2)));

      *Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 3)));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void)
{
  {
    return (MR_Integer) 20;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
  MR_Word RttiName_3,
  MR_Integer * NumArgTypes_4)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) RttiName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
    {
      MR_Word PseudoTypeInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) PseudoTypeInfo_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            *NumArgTypes_4 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_10, (MR_Integer) 1)));
            MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_10, (MR_Integer) 0)));

            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ArgTypes_15, NumArgTypes_4);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_10, (MR_Integer) 1)));
            MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_10, (MR_Integer) 0)));

            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ArgTypes_21, NumArgTypes_4);
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    else
    if (((((MR_tag((MR_Word) RttiName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
    {
      MR_Word TypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) TypeInfo_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *NumArgTypes_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_5, (MR_Integer) 1)));
            MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_5, (MR_Integer) 0)));

            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ArgTypes_7, NumArgTypes_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_5, (MR_Integer) 1)));
            MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_5, (MR_Integer) 0)));

            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ArgTypes_23, NumArgTypes_4);
          }
          break;
      }
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_15;

    ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeclSet_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_15));
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(
  MR_Word Info_7,
  MR_Word RttiDatas_8,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_Word TypeCtorInfo_21_21 = (MR_Word) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0;
    MR_Word TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
    MR_Word GroupMap_11;
    MR_Word GroupList_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv2_STATE_VARIABLE_DeclSet_14;
    MR_Box conv1_STATE_VARIABLE_IO_16;

    Var_17 = mercury__multi_map__init_0_f_0(TypeCtorInfo_21_21, TypeCtorInfo_22_22);
    ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(RttiDatas_8, Var_17, &GroupMap_11);
    mercury__multi_map__to_assoc_list_2_p_0(TypeCtorInfo_21_21, TypeCtorInfo_22_22, GroupMap_11, &GroupList_12);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_2[0], (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_18, GroupList_12, ((MR_Box) (STATE_VARIABLE_DeclSet_0_13)), &conv2_STATE_VARIABLE_DeclSet_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    *STATE_VARIABLE_DeclSet_14 = ((MR_Word) conv2_STATE_VARIABLE_DeclSet_14);
  }
}

static void MR_CALL 
ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GroupMap_0_2,
  MR_Word * STATE_VARIABLE_GroupMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_GroupMap_3 = STATE_VARIABLE_GroupMap_0_2;
    else
    {
      MR_Word RttiData_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RttiDatas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_GroupMap_19_19;
      MR_Word Var_18;
      MR_Integer Var_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GroupMap_0_2;

      succeeded = ((((MR_tag((MR_Word) RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_7, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
          Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 0)));
      }
      if (succeeded)
        STATE_VARIABLE_GroupMap_19_19 = STATE_VARIABLE_GroupMap_0_2;
      else
      {
        MR_Word RttiId_11;
        MR_String CType_12;
        MR_Word IsArray_13;
        MR_Word Linkage_14;
        MR_Word Group_15;
        MR_Word IsArray_25;

        backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_7, &RttiId_11);
        backend_libs__rtti__rtti_id_c_type_3_p_0(RttiId_11, &CType_12, &IsArray_13);
        IsArray_25 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_11);
        switch (IsArray_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Linkage_14 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Exported_26;

              Exported_26 = backend_libs__rtti__rtti_id_is_exported_1_f_0(RttiId_11);
              switch (Exported_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Linkage_14 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Linkage_14 = (MR_Integer) 0;
                  break;
              }
            }
            break;
        }
        {
          Group_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Group_15, 0) = ((MR_Box) (CType_12));
          MR_hl_field(MR_mktag(0), Group_15, 1) = ((MR_Box) ((IsArray_13 | ((Linkage_14 << (MR_Integer) 1)))));
        }
        mercury__multi_map__set_4_p_0((MR_Word) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ((MR_Box) (Group_15)), ((MR_Box) (RttiId_11)), STATE_VARIABLE_GroupMap_0_2, &STATE_VARIABLE_GroupMap_19_19);
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = RttiDatas_8;
      next_value_of_STATE_VARIABLE_GroupMap_0_2 = STATE_VARIABLE_GroupMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GroupMap_0_2 = next_value_of_STATE_VARIABLE_GroupMap_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(
  MR_String Cast_5,
  MR_Word RttiData_6)
{
  {
    mercury__io__write_string_3_p_0(Cast_5);
    ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(RttiData_6);
  }
}

void MR_CALL 
ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(
  MR_Word RttiData_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiData_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Integer VarNum_6;
    MR_Word Var_10;

    if (succeeded)
    {
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_4, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 3)));
      if (succeeded)
        VarNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_10, (MR_Integer) 0)));
    }
    if (succeeded)
      mercury__io__write_int_3_p_0(VarNum_6);
    else
    {
      MR_Word RttiId_7;
      MR_Integer VarNum_18;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_17;

      backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_4, &RttiId_7);
      succeeded = ((MR_tag((MR_Word) RttiId_7)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_7, (MR_Integer) 0)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiId_7, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 12)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 3)));
          if (succeeded)
            VarNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 0)));
        }
      }
      if (succeeded)
        mercury__io__write_int_3_p_0(VarNum_18);
      else
      {
        MR_Word IsArray_19;

        IsArray_19 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_7);
        switch (IsArray_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Str_31;
              MR_String Var_32;

              Var_32 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              mercury__io__write_string_3_p_0(Var_32);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, &Str_31);
              mercury__io__write_string_3_p_0(Str_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Str_39;
              MR_String Var_40;

              mercury__io__write_string_3_p_0((MR_String) "&");
              Var_40 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              mercury__io__write_string_3_p_0(Var_40);
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, &Str_39);
              mercury__io__write_string_3_p_0(Str_39);
            }
            break;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__rtti_out____Unify____data_group_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__rtti_out____Compare____data_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__rtti_out__init(void)
{
}

void mercury__ll_backend__rtti_out__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0);
}

void mercury__ll_backend__rtti_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__rtti_out__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.rtti_out. */
