/*
** Automatically generated from `rtti_out.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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



struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s {
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13;
  MR_bool ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded;
  jmp_buf ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0;
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17;
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20;
  MR_Box ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17;
};

struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s {
  MR_bool ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21;
  jmp_buf ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_119_119;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_43_43;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_118_118;
  MR_Box ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_V_118_118;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3];

static const MR_ConstString ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0[3];

static const MR_DuArgLocn ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0[3];

static const MR_DuFunctorDesc ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0;

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1];

static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1];

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1];

static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1];

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
  MR_Box * ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1424__1_2_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_33,
  MR_Word * ll_backend__rtti_out__HeadVar__2_34);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1389__1_2_p_0(
  MR_Integer ll_backend__rtti_out__NumSymbolicResFunctorReps_19,
  MR_Integer ll_backend__rtti_out__HeadVar__2_30);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1339__1_2_p_0(
  MR_Integer ll_backend__rtti_out__HeadVar__3_3,
  MR_Integer ll_backend__rtti_out__Ptag_12);

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1283__1_2_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_34,
  MR_Word * ll_backend__rtti_out__HeadVar__2_35);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1153__1_1_p_0(
  MR_Word ll_backend__rtti_out__MaybeNames_12);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1140__1_1_p_0(
  MR_Word ll_backend__rtti_out__ArgTypes_12);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__729__1_2_p_0(
  MR_Word ll_backend__rtti_out__Lang_25,
  MR_Word ll_backend__rtti_out__HeadVar__2_95);

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
  MR_Word ll_backend__rtti_out__TypeInfo_for_T_9,
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
  MR_Word * ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_3_p_0(
  MR_Word ll_backend__rtti_out__CodeAddr_4);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_static_code_addr_3_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_3_p_0(
  MR_Word ll_backend__rtti_out__Locn_4);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(
  MR_Word ll_backend__rtti_out__MaybeName_4);

static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__RttiName_6);

static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__RttiName_6);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(
  MR_String ll_backend__rtti_out__Cast_5,
  MR_Word ll_backend__rtti_out__RttiId_6);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0(
  MR_String ll_backend__rtti_out__Cast_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0(
  MR_String ll_backend__rtti_out__Cast_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__RttiId_12,
  MR_String ll_backend__rtti_out__FirstIndent_13,
  MR_String ll_backend__rtti_out__LaterIndent_14,
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_18,
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_19,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__RttiData_12,
  MR_String ll_backend__rtti_out__FirstIndent_13,
  MR_String ll_backend__rtti_out__LaterIndent_14,
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_20,
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_21,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(
  MR_Word ll_backend__rtti_out__Info_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_String ll_backend__rtti_out__FirstIndent_3,
  MR_String ll_backend__rtti_out__LaterIndent_4,
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_5,
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_6,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_8);

static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_6_p_0(
  MR_Integer ll_backend__rtti_out__FieldNum_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__TCName_3,
  MR_String ll_backend__rtti_out__InstanceStr_4);

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
  MR_Word ll_backend__rtti_out__TCRttiName_1,
  MR_Integer * ll_backend__rtti_out__Arity_2);

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
  MR_Word ll_backend__rtti_out__RttiName_1,
  MR_Integer * ll_backend__rtti_out__NumArgTypes_2);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_5_p_0(
  MR_Word ll_backend__rtti_out__RttiId_6,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__RttiId_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_11,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_12);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_4);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__Group_9,
  MR_Word ll_backend__rtti_out__RttiIds_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_14,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_15);

static void MR_CALL 
ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_GroupMap_3);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorNumberMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
  MR_Word ll_backend__rtti_out__ProcLabel_3);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__MaybeResFunctor_6);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__NameArityMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Word ll_backend__rtti_out__ResFunctors_11,
  MR_Word ll_backend__rtti_out__DuPtagTable_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_res_addr_functors_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__ResFunctor_6);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Integer ll_backend__rtti_out__HeadVar__3_3);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__PtagMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__HeadVar__3_3,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__NameArityMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_2_4_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Integer ll_backend__rtti_out__PrevSlotNum_2);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_3(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0(
  MR_Word ll_backend__rtti_out__Info_10,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_11,
  MR_Integer ll_backend__rtti_out__Ordinal_12,
  MR_Word ll_backend__rtti_out__ArgInfos_13,
  MR_Word * ll_backend__rtti_out__HaveArgLocns_14,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__MaybeNames_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__ArgTypes_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__ExistInfo_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_24,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
  MR_Box * ll_backend__rtti_out__wrapper_arg_8);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__Constraints_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_18,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_19);

static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_6,
  MR_Integer ll_backend__rtti_out__Ordinal_7,
  MR_Integer ll_backend__rtti_out__TCNum_8,
  MR_Integer ll_backend__rtti_out__Arity_9,
  MR_Word * ll_backend__rtti_out__RttiId_10);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__Locns_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__MaybeResFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_functor_subtype_info_3_p_0(
  MR_Word ll_backend__rtti_out__FunctorSubtypeInfo_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_5(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(
  void * ll_backend__rtti_out__env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__DuFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_37,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38);

static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__NotagFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__ForeignEnumFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__EnumFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_12,
  MR_Word ll_backend__rtti_out__TypeCtorDetails_13,
  MR_Word * ll_backend__rtti_out__MaybeFunctorsName_14,
  MR_Word * ll_backend__rtti_out__MaybeLayoutName_15,
  MR_Word * ll_backend__rtti_out__HaveFunctorNumberMap_16,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TypeCtorData_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_34,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__ArgRttiDatas_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__MakeRttiId_12,
  MR_Word ll_backend__rtti_out__Constraint_13,
  MR_Word * ll_backend__rtti_out__TCDeclSuperRttiId_14,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_Counter_0_24,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_Counter_25,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_26,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_27);

static void MR_CALL 
ll_backend__rtti_out__output_code_addr_in_list_3_p_0(
  MR_Word ll_backend__rtti_out__CodeAddr_4);

static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
  MR_Word ll_backend__rtti_out__TCName_6,
  MR_Word ll_backend__rtti_out__TCTypes_7,
  MR_Integer ll_backend__rtti_out__Ordinal_8,
  MR_Integer ll_backend__rtti_out__NumTypes_9,
  MR_Word * ll_backend__rtti_out__RttiId_10);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
  MR_Box * ll_backend__rtti_out__wrapper_arg_8);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__Instance_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_28,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29);

static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
  MR_Word ll_backend__rtti_out__TCName_5,
  MR_Integer ll_backend__rtti_out__Ordinal_6,
  MR_Integer ll_backend__rtti_out__NumTypes_7,
  MR_Word * ll_backend__rtti_out__RttiId_8);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(
  MR_Word ll_backend__rtti_out__MethodId_4);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(
  MR_String ll_backend__rtti_out__TVarName_4);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
  MR_Box * ll_backend__rtti_out__wrapper_arg_8);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TCDecl_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(
  MR_Word ll_backend__rtti_out__Info_10,
  MR_Word ll_backend__rtti_out__TCName_11,
  MR_Word ll_backend__rtti_out__InstanceModuleName_12,
  MR_String ll_backend__rtti_out__InstanceString_13,
  MR_Word ll_backend__rtti_out__BaseTypeClassInfo_14,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_25,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26);

static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);


static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_2[32][3];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_3[5][9];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_4[14][5];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_5[6][6];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_6[6][7];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_7[1][13];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_8[2][8];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_9[6][10];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_10[10][1];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_11[5][4];




static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 5 */
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
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[0])),
    ((MR_Box) (ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[0])),
    ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[0])),
    ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[2])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[1])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[1])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[2])),
    ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[2])),
    ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[1])),
    ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[1])),
    ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[4])),
    ((MR_Box) (ll_backend__rtti_out__output_du_functor_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[5])),
    ((MR_Box) (ll_backend__rtti_out__output_du_functor_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[4])),
    ((MR_Box) (ll_backend__rtti_out__output_exist_locns_array_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[6])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[5])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[7])),
    ((MR_Box) (ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[7])),
    ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[8])),
    ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[8])),
    ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[9])),
    ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[10])),
    ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[10])),
    ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[12])),
    ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[4])),
    ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[13])),
    ((MR_Box) (ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[0])),
    ((MR_Box) (ll_backend__rtti_out__output_functor_number_map_7_p_0_1)),
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_4[14][5] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_5[6][6] = {
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_6[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_7[1][13] = {
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_8[2][8] = {
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_9[6][10] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
  /* row 3 */
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
  /* row 4 */
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_10[10][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_11[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[1])),
    ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_TypeClassConstraint) "))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[2])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_PseudoTypeInfo) "))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1] = {
  &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0
};

static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out____Unify____data_group_0_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
  MR_Box * ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Word ll_backend__rtti_out__conv0_HeadVar__1_1;

    {
      ll_backend__rtti_out____Compare____data_group_0_0(&ll_backend__rtti_out__conv0_HeadVar__1_1, ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), ((MR_Word) ll_backend__rtti_out__wrapper_arg_3));
    }
    *ll_backend__rtti_out__wrapper_arg_1 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1424__1_2_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_33,
  MR_Word * ll_backend__rtti_out__HeadVar__2_34)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ll_backend__rtti_out__HeadVar__1_33, ll_backend__rtti_out__HeadVar__2_34);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1389__1_2_p_0(
  MR_Integer ll_backend__rtti_out__NumSymbolicResFunctorReps_19,
  MR_Integer ll_backend__rtti_out__HeadVar__2_30)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__NumSymbolicResFunctorReps_19 == ll_backend__rtti_out__HeadVar__2_30);

    return ll_backend__rtti_out__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1339__1_2_p_0(
  MR_Integer ll_backend__rtti_out__HeadVar__3_3,
  MR_Integer ll_backend__rtti_out__Ptag_12)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Ptag_12 == ll_backend__rtti_out__HeadVar__3_3);

    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1283__1_2_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_34,
  MR_Word * ll_backend__rtti_out__HeadVar__2_35)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ll_backend__rtti_out__HeadVar__1_34, ll_backend__rtti_out__HeadVar__2_35);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1153__1_1_p_0(
  MR_Word ll_backend__rtti_out__MaybeNames_12)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      ll_backend__rtti_out__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_1[2], ll_backend__rtti_out__MaybeNames_12);
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1140__1_1_p_0(
  MR_Word ll_backend__rtti_out__ArgTypes_12)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      ll_backend__rtti_out__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, ll_backend__rtti_out__ArgTypes_12);
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__729__1_2_p_0(
  MR_Word ll_backend__rtti_out__Lang_25,
  MR_Word ll_backend__rtti_out__HeadVar__2_95)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Lang_25 == ll_backend__rtti_out__HeadVar__2_95);

    return ll_backend__rtti_out__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
  MR_Word ll_backend__rtti_out__TypeInfo_for_T_9,
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box ll_backend__rtti_out__V_6_6;

    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_6_6 = (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0));
        (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)) = ll_backend__rtti_out__V_6_6;
        ll_backend__rtti_out__succeeded = MR_TRUE;
      }
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
  MR_Word * ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__HeadVar__3_3)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Integer ll_backend__rtti_out__CastX_12 = (MR_Integer) ll_backend__rtti_out__HeadVar__2_2;
    MR_Integer ll_backend__rtti_out__CastY_13 = (MR_Integer) ll_backend__rtti_out__HeadVar__3_3;

    ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__CastX_12 == ll_backend__rtti_out__CastY_13);
    if (ll_backend__rtti_out__succeeded)
      *ll_backend__rtti_out__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String ll_backend__rtti_out__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__rtti_out__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_String ll_backend__rtti_out__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__rtti_out__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__rtti_out__V_10_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__rtti_out__V_10_10, ll_backend__rtti_out__V_4_4, ll_backend__rtti_out__V_7_7);
        }
        ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_10_10 == (MR_Integer) 0);
        ll_backend__rtti_out__succeeded = !(ll_backend__rtti_out__succeeded);
        if (ll_backend__rtti_out__succeeded)
          *ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__V_10_10;
        else
          {
            MR_Word ll_backend__rtti_out__V_11_11;
            MR_Integer ll_backend__rtti_out__V_17_17 = (MR_Integer) ll_backend__rtti_out__V_5_5;
            MR_Integer ll_backend__rtti_out__V_18_18 = (MR_Integer) ll_backend__rtti_out__V_8_8;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__rtti_out__V_11_11, ll_backend__rtti_out__V_17_17, ll_backend__rtti_out__V_18_18);
            }
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_11_11 == (MR_Integer) 0);
            ll_backend__rtti_out__succeeded = !(ll_backend__rtti_out__succeeded);
            if (ll_backend__rtti_out__succeeded)
              *ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__V_11_11;
            else
              {
                MR_Integer ll_backend__rtti_out__V_19_19 = (MR_Integer) ll_backend__rtti_out__V_6_6;
                MR_Integer ll_backend__rtti_out__V_20_20 = (MR_Integer) ll_backend__rtti_out__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__rtti_out__HeadVar__1_1, ll_backend__rtti_out__V_19_19, ll_backend__rtti_out__V_20_20);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Integer ll_backend__rtti_out__CastX_9 = (MR_Integer) ll_backend__rtti_out__HeadVar__1_1;
    MR_Integer ll_backend__rtti_out__CastY_10 = (MR_Integer) ll_backend__rtti_out__HeadVar__2_2;

    ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__CastX_9 == ll_backend__rtti_out__CastY_10);
    if (ll_backend__rtti_out__succeeded)
      ll_backend__rtti_out__succeeded = MR_TRUE;
    else
      {
        MR_String ll_backend__rtti_out__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__rtti_out__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_String ll_backend__rtti_out__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__rtti_out__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        ll_backend__rtti_out__succeeded = (strcmp(ll_backend__rtti_out__V_3_3, ll_backend__rtti_out__V_6_6) == 0);
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_4_4 == ll_backend__rtti_out__V_7_7);
            if (ll_backend__rtti_out__succeeded)
              ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_5_5 == ll_backend__rtti_out__V_8_8);
          }
      }
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_3_p_0(
  MR_Word ll_backend__rtti_out__CodeAddr_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
    }
    {
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__rtti_out__CodeAddr_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_static_code_addr_3_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if ((ll_backend__rtti_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__CodeAddr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
        }
        {
          ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__rtti_out__CodeAddr_4);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_3_p_0(
  MR_Word ll_backend__rtti_out__Locn_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if (((MR_tag((MR_Word) ll_backend__rtti_out__Locn_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ll_backend__rtti_out__SlotInCell_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Locn_4, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__SlotInCell_6);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", -1 }");
        }
      }
    else
      {
        MR_Integer ll_backend__rtti_out__SlotInTci_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__Locn_4, (MR_Integer) 1)));
        MR_Integer ll_backend__rtti_out__SlotInCell_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__Locn_4, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__SlotInCell_23);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__SlotInTci_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(
  MR_Word ll_backend__rtti_out__MaybeName_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if ((ll_backend__rtti_out__MaybeName_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_String ll_backend__rtti_out__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeName_4, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
        {
          backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__Name_6);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__RttiName_6)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_10_10;
    MR_String ll_backend__rtti_out__Str_16;
    MR_String ll_backend__rtti_out__V_17_17;

    {
      ll_backend__rtti_out__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_6));
    }
    {
      ll_backend__rtti_out__V_17_17 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_17_17);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_10_10, &ll_backend__rtti_out__Str_16);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_16);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__RttiName_6)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_10_10;
    MR_Integer ll_backend__rtti_out__VarNum_17;
    MR_Word ll_backend__rtti_out__V_19_19;
    MR_Word ll_backend__rtti_out__V_20_20;
    MR_Word ll_backend__rtti_out__V_16_16;

    {
      ll_backend__rtti_out__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_6));
    }
    ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_10_10)) == (MR_mktag((MR_Integer) 0)));
    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, (MR_Integer) 0)));
        ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_20_20)) == (MR_mktag((MR_Integer) 3)));
            if (ll_backend__rtti_out__succeeded)
              ll_backend__rtti_out__VarNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 0)));
          }
      }
    if (ll_backend__rtti_out__succeeded)
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_17);
      }
    else
      {
        MR_Word ll_backend__rtti_out__IsArray_18;

        {
          ll_backend__rtti_out__IsArray_18 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__V_10_10);
        }
        switch (ll_backend__rtti_out__IsArray_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__rtti_out__Str_30;
              MR_String ll_backend__rtti_out__V_31_31;

              {
                ll_backend__rtti_out__V_31_31 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_31_31);
              }
              {
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_10_10, &ll_backend__rtti_out__Str_30);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_30);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__rtti_out__Str_38;
              MR_String ll_backend__rtti_out__V_39_39;

              {
                mercury__io__write_string_3_p_0((MR_String) "&");
              }
              {
                ll_backend__rtti_out__V_39_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_39_39);
              }
              {
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_10_10, &ll_backend__rtti_out__Str_38);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_38);
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(
  MR_String ll_backend__rtti_out__Cast_5,
  MR_Word ll_backend__rtti_out__RttiId_6)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Integer ll_backend__rtti_out__VarNum_17;
    MR_Word ll_backend__rtti_out__V_19_19;
    MR_Word ll_backend__rtti_out__V_20_20;
    MR_Word ll_backend__rtti_out__V_16_16;

    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Cast_5);
    }
    ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_6)) == (MR_mktag((MR_Integer) 0)));
    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 0)));
        ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_20_20)) == (MR_mktag((MR_Integer) 3)));
            if (ll_backend__rtti_out__succeeded)
              ll_backend__rtti_out__VarNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 0)));
          }
      }
    if (ll_backend__rtti_out__succeeded)
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_17);
      }
    else
      {
        MR_Word ll_backend__rtti_out__IsArray_18;

        {
          ll_backend__rtti_out__IsArray_18 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_6);
        }
        switch (ll_backend__rtti_out__IsArray_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__rtti_out__Str_30;
              MR_String ll_backend__rtti_out__V_31_31;

              {
                ll_backend__rtti_out__V_31_31 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_31_31);
              }
              {
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_6, &ll_backend__rtti_out__Str_30);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_30);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__rtti_out__Str_38;
              MR_String ll_backend__rtti_out__V_39_39;

              {
                mercury__io__write_string_3_p_0((MR_String) "&");
              }
              {
                ll_backend__rtti_out__V_39_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_39_39);
              }
              {
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_6, &ll_backend__rtti_out__Str_38);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_38);
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0(
  MR_String ll_backend__rtti_out__Cast_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_23_23;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 3) = ((MR_Box) (ll_backend__rtti_out__Cast_1));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__rtti_out__HeadVar__2_2, (MR_String) ",\n\t", ll_backend__rtti_out__V_23_23);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0(
  MR_String ll_backend__rtti_out__Cast_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_23_23;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 3) = ((MR_Box) (ll_backend__rtti_out__Cast_1));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ll_backend__rtti_out__HeadVar__2_2, (MR_String) ",\n\t", ll_backend__rtti_out__V_23_23);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__RttiId_12,
  MR_String ll_backend__rtti_out__FirstIndent_13,
  MR_String ll_backend__rtti_out__LaterIndent_14,
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_18,
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_19,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_24_24;

    {
      ll_backend__rtti_out__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_24_24, 0) = ((MR_Box) (ll_backend__rtti_out__RttiId_12));
    }
    {
      ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__V_24_24, ll_backend__rtti_out__FirstIndent_13, ll_backend__rtti_out__LaterIndent_14, ll_backend__rtti_out__STATE_VARIABLE_N_0_18, ll_backend__rtti_out__STATE_VARIABLE_N_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__RttiData_12,
  MR_String ll_backend__rtti_out__FirstIndent_13,
  MR_String ll_backend__rtti_out__LaterIndent_14,
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_20,
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_21,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__V_26_26;
    MR_Integer ll_backend__rtti_out__V_18_18;

    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_12, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_26_26)) == (MR_mktag((MR_Integer) 3)));
        if (ll_backend__rtti_out__succeeded)
          ll_backend__rtti_out__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_26_26, (MR_Integer) 0)));
      }
    if (ll_backend__rtti_out__succeeded)
      {
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22;
        *ll_backend__rtti_out__STATE_VARIABLE_N_21 = ll_backend__rtti_out__STATE_VARIABLE_N_0_20;
      }
    else
      {
        MR_Word ll_backend__rtti_out__RttiId_19;
        MR_Word ll_backend__rtti_out__V_43_43;

        {
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_12, &ll_backend__rtti_out__RttiId_19);
        }
        {
          ll_backend__rtti_out__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_43_43, 0) = ((MR_Box) (ll_backend__rtti_out__RttiId_19));
        }
        {
          ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__V_43_43, ll_backend__rtti_out__FirstIndent_13, ll_backend__rtti_out__LaterIndent_14, ll_backend__rtti_out__STATE_VARIABLE_N_0_20, ll_backend__rtti_out__STATE_VARIABLE_N_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23);
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(
  MR_Word ll_backend__rtti_out__Info_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_String ll_backend__rtti_out__FirstIndent_3,
  MR_String ll_backend__rtti_out__LaterIndent_4,
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_5,
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_6,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__rtti_out__succeeded;

        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_8 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7;
            *ll_backend__rtti_out__STATE_VARIABLE_N_6 = ll_backend__rtti_out__STATE_VARIABLE_N_0_5;
          }
        else
          {
            MR_Word ll_backend__rtti_out__RttiData_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__RttiDatas_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_37_37;
            MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38;
            MR_Word ll_backend__rtti_out__V_58_58;
            MR_Integer ll_backend__rtti_out__V_56_56;

            ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__rtti_out__succeeded)
              {
                ll_backend__rtti_out__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_24, (MR_Integer) 1)));
                ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_58_58)) == (MR_mktag((MR_Integer) 3)));
                if (ll_backend__rtti_out__succeeded)
                  ll_backend__rtti_out__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_58_58, (MR_Integer) 0)));
              }
            if (ll_backend__rtti_out__succeeded)
              {
                ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7;
                ll_backend__rtti_out__STATE_VARIABLE_N_37_37 = ll_backend__rtti_out__STATE_VARIABLE_N_0_5;
              }
            else
              {
                MR_Word ll_backend__rtti_out__RttiId_57;
                MR_Word ll_backend__rtti_out__V_75_75;

                {
                  backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_24, &ll_backend__rtti_out__RttiId_57);
                }
                {
                  ll_backend__rtti_out__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_75_75, 0) = ((MR_Box) (ll_backend__rtti_out__RttiId_57));
                }
                {
                  ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__rtti_out__Info_1, ll_backend__rtti_out__V_75_75, ll_backend__rtti_out__FirstIndent_3, ll_backend__rtti_out__LaterIndent_4, ll_backend__rtti_out__STATE_VARIABLE_N_0_5, &ll_backend__rtti_out__STATE_VARIABLE_N_37_37, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__RttiDatas_25;
              MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0__tmp_copy_5 = ll_backend__rtti_out__STATE_VARIABLE_N_37_37;
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_7 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38;

              ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_7;
              ll_backend__rtti_out__STATE_VARIABLE_N_0_5 = ll_backend__rtti_out__STATE_VARIABLE_N_0__tmp_copy_5;
              ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_6_p_0(
  MR_Integer ll_backend__rtti_out__FieldNum_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__TCName_3,
  MR_String ll_backend__rtti_out__InstanceStr_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__rtti_out__succeeded;

        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__rtti_out__Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__rtti_out__V_34_34;
            MR_String ll_backend__rtti_out__V_40_40;

            {
              mercury__io__write_string_3_p_0((MR_String) "\t\t");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_field(MR_mktag(0), ");
            }
            {
              backend_libs__name_mangle__output_base_typeclass_info_name_4_p_0(ll_backend__rtti_out__TCName_3, ll_backend__rtti_out__InstanceStr_4);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_10[9], ll_backend__rtti_out__FieldNum_1, &ll_backend__rtti_out__V_40_40);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_40_40);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ") =\n\t\t\t");
            }
            {
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__rtti_out__Arg_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            ll_backend__rtti_out__V_34_34 = (ll_backend__rtti_out__FieldNum_1 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__rtti_out__FieldNum__tmp_copy_1 = ll_backend__rtti_out__V_34_34;
              MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__Args_15;

              ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
              ll_backend__rtti_out__FieldNum_1 = ll_backend__rtti_out__FieldNum__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    return (MR_Integer) 10;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
  MR_Word ll_backend__rtti_out__TCRttiName_1,
  MR_Integer * ll_backend__rtti_out__Arity_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if (((MR_tag((MR_Word) ll_backend__rtti_out__TCRttiName_1)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Integer ll_backend__rtti_out__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 0)));

        *ll_backend__rtti_out__Arity_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = MR_TRUE;
      }
    else
    if (((((MR_tag((MR_Word) ll_backend__rtti_out__TCRttiName_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
      {
        MR_Word ll_backend__rtti_out__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 1)));
        MR_Integer ll_backend__rtti_out__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 2)));

        *ll_backend__rtti_out__Arity_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 3)));
        ll_backend__rtti_out__succeeded = MR_TRUE;
      }
    else
      ll_backend__rtti_out__succeeded = MR_FALSE;
    return ll_backend__rtti_out__succeeded;
  }
}

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    return (MR_Integer) 20;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
  MR_Word ll_backend__rtti_out__RttiName_1,
  MR_Integer * ll_backend__rtti_out__NumArgTypes_2)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if (((((MR_tag((MR_Word) ll_backend__rtti_out__RttiName_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
      {
        MR_Word ll_backend__rtti_out__TypeCtorInfo_16_16;
        MR_Word ll_backend__rtti_out__PseudoTypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 1)));
        MR_Word ll_backend__rtti_out__ArgTypes_13;

        if (((MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_11)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__rtti_out__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 0)));

            ll_backend__rtti_out__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_11)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 0)));

            ll_backend__rtti_out__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = MR_TRUE;
          }
        else
          ll_backend__rtti_out__succeeded = MR_FALSE;
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__TypeCtorInfo_16_16 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
            {
              *ll_backend__rtti_out__NumArgTypes_2 = mercury__list__length_1_f_0(ll_backend__rtti_out__TypeCtorInfo_16_16, ll_backend__rtti_out__ArgTypes_13);
            }
            ll_backend__rtti_out__succeeded = MR_TRUE;
          }
      }
    else
    if (((((MR_tag((MR_Word) ll_backend__rtti_out__RttiName_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
      {
        MR_Word ll_backend__rtti_out__TypeCtorInfo_15_15;
        MR_Word ll_backend__rtti_out__TypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 1)));
        MR_Word ll_backend__rtti_out__ArgTypes_7;

        if (((MR_tag((MR_Word) ll_backend__rtti_out__TypeInfo_5)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__rtti_out__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 0)));

            ll_backend__rtti_out__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) ll_backend__rtti_out__TypeInfo_5)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word ll_backend__rtti_out__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 0)));

            ll_backend__rtti_out__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = MR_TRUE;
          }
        else
          ll_backend__rtti_out__succeeded = MR_FALSE;
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__TypeCtorInfo_15_15 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
            {
              *ll_backend__rtti_out__NumArgTypes_2 = mercury__list__length_1_f_0(ll_backend__rtti_out__TypeCtorInfo_15_15, ll_backend__rtti_out__ArgTypes_7);
            }
            ll_backend__rtti_out__succeeded = MR_TRUE;
          }
      }
    else
      ll_backend__rtti_out__succeeded = MR_FALSE;
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_5_p_0(
  MR_Word ll_backend__rtti_out__RttiId_6,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__Arity_11;
    MR_Word ll_backend__rtti_out__RttiName_10;
    MR_Integer ll_backend__rtti_out__V_20_20;
    MR_Word ll_backend__rtti_out__V_9_9;

    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 0)));
        ll_backend__rtti_out__RttiName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 1)));
        {
          ll_backend__rtti_out__succeeded = ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(ll_backend__rtti_out__RttiName_10, &ll_backend__rtti_out__Arity_11);
        }
        if (ll_backend__rtti_out__succeeded)
          {
            {
              ll_backend__rtti_out__V_20_20 = ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0();
            }
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Arity_11 > ll_backend__rtti_out__V_20_20);
          }
      }
    if (ll_backend__rtti_out__succeeded)
      {
        MR_Word ll_backend__rtti_out__DeclId_12;

        {
          ll_backend__rtti_out__DeclId_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_12, 1) = ((MR_Box) (ll_backend__rtti_out__Arity_11));
        }
        {
          ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__DeclId_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16);
        }
        if (ll_backend__rtti_out__succeeded)
          *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16;
        else
          {
            MR_String ll_backend__rtti_out__V_52_52;
            MR_Word ll_backend__rtti_out__V_58_58;
            MR_String ll_backend__rtti_out__V_62_62;
            MR_String ll_backend__rtti_out__V_72_72;

            {
              mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
            }
            ll_backend__rtti_out__V_58_58 = (MR_Word) &ll_backend__rtti_out_scalar_common_10[9];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_58_58, ll_backend__rtti_out__Arity_11, &ll_backend__rtti_out__V_52_52);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_52_52);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "_GUARD\n#define MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_58_58, ll_backend__rtti_out__Arity_11, &ll_backend__rtti_out__V_62_62);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_62_62);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "_GUARD\nMR_DECLARE_ALL_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY(");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_58_58, ll_backend__rtti_out__Arity_11, &ll_backend__rtti_out__V_72_72);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_72_72);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ");\n#endif\n");
            }
            {
              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__DeclId_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
            }
          }
      }
    else
      {
        MR_Integer ll_backend__rtti_out__Arity_46;
        MR_Word ll_backend__rtti_out__TCRttiName_15;
        MR_Integer ll_backend__rtti_out__V_30_30;
        MR_Word ll_backend__rtti_out__V_14_14;

        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_6)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_6, (MR_Integer) 0)));
            ll_backend__rtti_out__TCRttiName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_6, (MR_Integer) 1)));
            {
              ll_backend__rtti_out__succeeded = ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(ll_backend__rtti_out__TCRttiName_15, &ll_backend__rtti_out__Arity_46);
            }
            if (ll_backend__rtti_out__succeeded)
              {
                {
                  ll_backend__rtti_out__V_30_30 = ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0();
                }
                ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Arity_46 > ll_backend__rtti_out__V_30_30);
              }
          }
        if (ll_backend__rtti_out__succeeded)
          {
            MR_Word ll_backend__rtti_out__DeclId_44;

            {
              ll_backend__rtti_out__DeclId_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_44, 1) = ((MR_Box) (ll_backend__rtti_out__Arity_46));
            }
            {
              ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__DeclId_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16);
            }
            if (ll_backend__rtti_out__succeeded)
              *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16;
            else
              {
                MR_String ll_backend__rtti_out__V_83_83;
                MR_Word ll_backend__rtti_out__V_89_89;
                MR_String ll_backend__rtti_out__V_93_93;
                MR_String ll_backend__rtti_out__V_103_103;
                MR_String ll_backend__rtti_out__V_113_113;

                {
                  mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_TYPECLASS_CONSTRAINT_STRUCT_");
                }
                ll_backend__rtti_out__V_89_89 = (MR_Word) &ll_backend__rtti_out_scalar_common_10[9];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_83_83);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_83_83);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "_GUARD\n#define MR_TYPECLASS_CONSTRAINT_STRUCT_");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_93_93);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_93_93);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "_GUARD\nMR_DEFINE_TYPECLASS_CONSTRAINT_STRUCT(MR_TypeClassConstraint_");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_103_103);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_103_103);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_113_113);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_113_113);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ");\n#endif\n");
                }
                {
                  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__DeclId_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
                }
              }
          }
        else
          *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16;
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__RttiId_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_11,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_12)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_18;
    MR_Word ll_backend__rtti_out__V_20_20;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__RttiId_8, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_11, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_18);
    }
    {
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_8));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_20_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_12);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__rtti_out__succeeded;

        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk_entries\'/6", (MR_String) "empty list");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__rtti_out__RttiId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__RttiIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__rtti_out__V_28_28;
            MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
            MR_String ll_backend__rtti_out__Str_45;
            MR_String ll_backend__rtti_out__V_46_46;

            {
              ll_backend__rtti_out__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_18));
            }
            {
              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_28_28, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              ll_backend__rtti_out__V_46_46 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_46_46);
            }
            {
              backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_18, &ll_backend__rtti_out__Str_45);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_45);
            }
            switch (ll_backend__rtti_out__HeadVar__1_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "[]");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            if ((ll_backend__rtti_out__RttiIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
                *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_4 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__RttiIds_19;
                  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;

                  ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
                  ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__Group_9,
  MR_Word ll_backend__rtti_out__RttiIds_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__RttiId_13;
    MR_String ll_backend__rtti_out__CType_15;
    MR_Word ll_backend__rtti_out__IsArray_16;
    MR_Word ll_backend__rtti_out__Linkage_17;
    MR_Word ll_backend__rtti_out__Globals_18;
    MR_String ll_backend__rtti_out__LinkageStr_19;
    MR_Word ll_backend__rtti_out__InclCodeAddr_20;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
    MR_String ll_backend__rtti_out__V_33_33;
    MR_Word ll_backend__rtti_out__V_39_39;
    MR_String ll_backend__rtti_out__V_40_40;
    MR_String ll_backend__rtti_out__V_41_41;
    MR_Word ll_backend__rtti_out__V_42_42;
    MR_Word ll_backend__rtti_out__V_43_43;
    MR_Word ll_backend__rtti_out__V_44_44;
    MR_Word ll_backend__rtti_out__V_45_45;
    MR_Word ll_backend__rtti_out__V_46_46;
    MR_Word ll_backend__rtti_out__V_47_47;
    MR_Word ll_backend__rtti_out__V_48_48;
    MR_Word ll_backend__rtti_out__V_49_49;
    MR_Word ll_backend__rtti_out__V_50_50;
    MR_Word ll_backend__rtti_out__V_51_51;
    MR_Word ll_backend__rtti_out__V_52_52;
    MR_Word ll_backend__rtti_out__V_53_53;
    MR_Word ll_backend__rtti_out__V_54_54;
    MR_Word ll_backend__rtti_out__V_55_55;
    MR_Word ll_backend__rtti_out__V_56_56;
    MR_Word ll_backend__rtti_out__V_57_57;
    MR_Word ll_backend__rtti_out__V_58_58;
    MR_Word ll_backend__rtti_out__V_59_59;

    if ((ll_backend__rtti_out__RttiIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk\'/7", (MR_String) "empty list");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_14_14;

        ll_backend__rtti_out__RttiId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiIds_10, (MR_Integer) 0)));
        ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiIds_10, (MR_Integer) 1)));
      }
    ll_backend__rtti_out__CType_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_9, (MR_Integer) 0)));
    ll_backend__rtti_out__IsArray_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_9, (MR_Integer) 1)))) & (MR_Integer) 1);
    ll_backend__rtti_out__Linkage_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      mercury__io__nl_2_p_0();
    }
    {
      ll_backend__rtti_out__output_rtti_type_decl_5_p_0(ll_backend__rtti_out__RttiId_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29);
    }
    ll_backend__rtti_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 0)));
    ll_backend__rtti_out__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 1)));
    ll_backend__rtti_out__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 2)));
    ll_backend__rtti_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 3)));
    ll_backend__rtti_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 4)));
    ll_backend__rtti_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 5)));
    ll_backend__rtti_out__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 6)));
    ll_backend__rtti_out__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__rtti_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__rtti_out__Globals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 8)));
    {
      ll_backend__rtti_out__LinkageStr_19 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(ll_backend__rtti_out__Linkage_17, (MR_Integer) 0);
    }
    {
      ll_backend__rtti_out__InclCodeAddr_20 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(ll_backend__rtti_out__RttiId_13);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__LinkageStr_19);
    }
    {
      ll_backend__rtti_out__V_33_33 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(ll_backend__rtti_out__Globals_18, ll_backend__rtti_out__InclCodeAddr_20);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_33_33);
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__CType_15);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(ll_backend__rtti_out__IsArray_16, ll_backend__rtti_out__RttiIds_10, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_22;

    {
      ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_22);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_22));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_14,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_15)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
    MR_Word ll_backend__rtti_out__Group_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__rtti_out__RttiIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__RttiIdChunks_13;
    MR_Word ll_backend__rtti_out__V_18_18;
    MR_Word ll_backend__rtti_out__V_19_19;
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_15;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_17;

    {
      ll_backend__rtti_out__V_18_18 = mercury__list__reverse_1_f_0(ll_backend__rtti_out__TypeCtorInfo_22_22, ll_backend__rtti_out__RttiIds_9);
    }
    {
      mercury__list__chunk_3_p_0(ll_backend__rtti_out__TypeCtorInfo_22_22, ll_backend__rtti_out__V_18_18, (MR_Integer) 10, &ll_backend__rtti_out__RttiIdChunks_13);
    }
    {
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 4) = ((MR_Box) (ll_backend__rtti_out__Group_8));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_1[0], (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_19_19, ll_backend__rtti_out__RttiIdChunks_13, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_14)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_17);
    }
    *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_15 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_15);
  }
}

static void MR_CALL 
ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_GroupMap_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__rtti_out__succeeded;

        if ((ll_backend__rtti_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__rtti_out__STATE_VARIABLE_GroupMap_3 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2;
        else
          {
            MR_Word ll_backend__rtti_out__RttiData_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__RttiDatas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19;
            MR_Word ll_backend__rtti_out__V_18_18;
            MR_Integer ll_backend__rtti_out__V_10_10;

            ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__rtti_out__succeeded)
              {
                ll_backend__rtti_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_7, (MR_Integer) 1)));
                ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_18_18)) == (MR_mktag((MR_Integer) 3)));
                if (ll_backend__rtti_out__succeeded)
                  ll_backend__rtti_out__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_18_18, (MR_Integer) 0)));
              }
            if (ll_backend__rtti_out__succeeded)
              ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2;
            else
              {
                MR_Word ll_backend__rtti_out__RttiId_11;
                MR_String ll_backend__rtti_out__CType_12;
                MR_Word ll_backend__rtti_out__IsArray_13;
                MR_Word ll_backend__rtti_out__Linkage_14;
                MR_Word ll_backend__rtti_out__Group_15;
                MR_Word ll_backend__rtti_out__IsArray_25;

                {
                  backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_7, &ll_backend__rtti_out__RttiId_11);
                }
                {
                  backend_libs__rtti__rtti_id_c_type_3_p_0(ll_backend__rtti_out__RttiId_11, &ll_backend__rtti_out__CType_12, &ll_backend__rtti_out__IsArray_13);
                }
                {
                  ll_backend__rtti_out__IsArray_25 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_11);
                }
                switch (ll_backend__rtti_out__IsArray_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__rtti_out__Linkage_14 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__rtti_out__Exported_26;

                      {
                        ll_backend__rtti_out__Exported_26 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ll_backend__rtti_out__RttiId_11);
                      }
                      switch (ll_backend__rtti_out__Exported_26) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__rtti_out__Linkage_14 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          ll_backend__rtti_out__Linkage_14 = (MR_Integer) 0;
                          break;
                      }
                    }
                    break;
                }
                {
                  ll_backend__rtti_out__Group_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_15, 0) = ((MR_Box) (ll_backend__rtti_out__CType_12));
                  MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_15, 1) = ((MR_Box) ((ll_backend__rtti_out__IsArray_13 | ((ll_backend__rtti_out__Linkage_14 << (MR_Integer) 1)))));
                }
                {
                  mercury__multi_map__set_4_p_0((MR_Word) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ((MR_Box) (ll_backend__rtti_out__Group_15)), ((MR_Box) (ll_backend__rtti_out__RttiId_11)), ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2, &ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__rtti_out__HeadVar__1__tmp_copy_1 = ll_backend__rtti_out__RttiDatas_8;
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0__tmp_copy_2 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19;

              ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0__tmp_copy_2;
              ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorNumberMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_17_17;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43;
    MR_Word ll_backend__rtti_out__V_45_45;

    {
      ll_backend__rtti_out__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_17_17, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_17_17, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43);
    }
    {
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__V_17_17));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_45_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__FunctorNumberMap_10, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[31]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " };\n\t");
    }
  }
}

static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
  MR_Word ll_backend__rtti_out__ProcLabel_3)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__HeadVar__2_2;

    {
      ll_backend__rtti_out__HeadVar__2_2 = ll_backend__code_util__make_entry_label_from_rtti_2_f_0(ll_backend__rtti_out__ProcLabel_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    return ll_backend__rtti_out__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__MaybeResFunctor_6)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__RttiName_12;
    MR_Word ll_backend__rtti_out__V_55_55;
    MR_String ll_backend__rtti_out__Str_61;
    MR_String ll_backend__rtti_out__V_62_62;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t{ \"");
    }
    if (((MR_tag((MR_Word) ll_backend__rtti_out__MaybeResFunctor_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__rtti_out__DuFunctor_10 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_6), (MR_Integer) 1);
        MR_Integer ll_backend__rtti_out__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 1)));
        MR_String ll_backend__rtti_out__Name_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 0)));
        MR_Integer ll_backend__rtti_out__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 2)));
        MR_Word ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 3)));
        MR_Word ll_backend__rtti_out__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 4)));
        MR_Word ll_backend__rtti_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 5)));
        MR_Word ll_backend__rtti_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 6)));

        {
          mercury__io__write_string_3_p_0(ll_backend__rtti_out__Name_35);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_11);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_FALSE, ");
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__ResFunctor_8 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_6), (MR_Integer) 0);
        MR_String ll_backend__rtti_out__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_8, (MR_Integer) 0)));
        MR_Integer ll_backend__rtti_out__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_8, (MR_Integer) 1)));
        MR_Word ll_backend__rtti_out__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_8, (MR_Integer) 2)));

        {
          mercury__io__write_string_3_p_0(ll_backend__rtti_out__Name_9);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0, ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_TRUE, ");
        }
      }
    {
      ll_backend__rtti_out__RttiName_12 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ll_backend__rtti_out__MaybeResFunctor_6);
    }
    {
      ll_backend__rtti_out__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_55_55, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_55_55, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_12));
    }
    {
      ll_backend__rtti_out__V_62_62 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_62_62);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_55_55, &ll_backend__rtti_out__Str_61);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_61);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_34;

    {
      ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1424__1_2_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv0_HeadVar__2_34);
    }
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_34));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__NameArityMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeInfo_32_32 = (MR_Word) &ll_backend__rtti_out_scalar_common_2[3];
    MR_Word ll_backend__rtti_out__TypeCtorInfo_38_38;
    MR_Word ll_backend__rtti_out__ArityMaps_13;
    MR_Word ll_backend__rtti_out__FunctorLists_14;
    MR_Word ll_backend__rtti_out__Functors_15;
    MR_Word ll_backend__rtti_out__V_21_21;
    MR_Word ll_backend__rtti_out__V_27_27;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54;
    MR_Word ll_backend__rtti_out__V_56_56;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_28_28;

    {
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeInfo_32_32, ll_backend__rtti_out__NameArityMap_10, &ll_backend__rtti_out__ArityMaps_13);
    }
    {
      mercury__list__map_3_p_0(ll_backend__rtti_out__TypeInfo_32_32, (MR_Word) &ll_backend__rtti_out_scalar_common_1[4], (MR_Word) &ll_backend__rtti_out_scalar_common_2[30], ll_backend__rtti_out__ArityMaps_13, &ll_backend__rtti_out__FunctorLists_14);
    }
    ll_backend__rtti_out__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
    {
      mercury__list__condense_2_p_0(ll_backend__rtti_out__TypeCtorInfo_38_38, ll_backend__rtti_out__FunctorLists_14, &ll_backend__rtti_out__Functors_15);
    }
    {
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_21_21, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54);
    }
    {
      ll_backend__rtti_out__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 1) = ((MR_Box) (ll_backend__rtti_out__V_21_21));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_56_56, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
    {
      ll_backend__rtti_out__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
    }
    {
      mercury__list__foldl_4_p_2(ll_backend__rtti_out__TypeCtorInfo_38_38, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_27_27, ll_backend__rtti_out__Functors_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_28_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_res_addr_functors_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1389__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Word ll_backend__rtti_out__ResFunctors_11,
  MR_Word ll_backend__rtti_out__DuPtagTable_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_67_67 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
    MR_Word ll_backend__rtti_out__ResFunctorReps_15;
    MR_Word ll_backend__rtti_out__NumericResFunctorReps_16;
    MR_Word ll_backend__rtti_out__SymbolicResFunctorReps_17;
    MR_Integer ll_backend__rtti_out__NumNumericResFunctorReps_18;
    MR_Integer ll_backend__rtti_out__NumSymbolicResFunctorReps_19;
    MR_Word ll_backend__rtti_out__V_26_26;
    MR_Word ll_backend__rtti_out__V_31_31;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32;
    MR_Word ll_backend__rtti_out__V_37_37;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_41_41;
    MR_Word ll_backend__rtti_out__V_43_43;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_88;
    MR_Word ll_backend__rtti_out__V_90_90;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_38_38;

    {
      ll_backend__rtti_out__ResFunctorReps_15 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_67_67, ll_backend__rtti_out__TypeCtorInfo_68_68, (MR_Word) &ll_backend__rtti_out_scalar_common_2[28], ll_backend__rtti_out__ResFunctors_11);
    }
    {
      mercury__list__filter_4_p_0(ll_backend__rtti_out__TypeCtorInfo_68_68, (MR_Word) &ll_backend__rtti_out_scalar_common_2[29], ll_backend__rtti_out__ResFunctorReps_15, &ll_backend__rtti_out__NumericResFunctorReps_16, &ll_backend__rtti_out__SymbolicResFunctorReps_17);
    }
    {
      mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_68_68, ll_backend__rtti_out__NumericResFunctorReps_16, &ll_backend__rtti_out__NumNumericResFunctorReps_18);
    }
    {
      mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_68_68, ll_backend__rtti_out__SymbolicResFunctorReps_17, &ll_backend__rtti_out__NumSymbolicResFunctorReps_19);
    }
    {
      ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 3) = ((MR_Box) (ll_backend__rtti_out__NumSymbolicResFunctorReps_19));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__rtti_out__V_26_26, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_res_value_ordered_table\'/8", (MR_String) "symbolic functors");
    }
    {
      ll_backend__rtti_out__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_31_31, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_31_31, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_88);
    }
    {
      ll_backend__rtti_out__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_90_90, 1) = ((MR_Box) (ll_backend__rtti_out__V_31_31));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_90_90, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_88, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      ll_backend__rtti_out__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
    }
    {
      mercury__list__foldl_4_p_2(ll_backend__rtti_out__TypeCtorInfo_67_67, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_37_37, ll_backend__rtti_out__ResFunctors_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_38_38);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__DuPtagTable_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_41_41);
    }
    {
      ll_backend__rtti_out__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_43_43, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
    }
    {
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_43_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_41_41, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumNumericResFunctorReps_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumSymbolicResFunctorReps_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_res_addr_functors_4_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
  MR_Word ll_backend__rtti_out__ResFunctor_6)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_10_10;
    MR_Word ll_backend__rtti_out__V_19_19;
    MR_String ll_backend__rtti_out__Str_25;
    MR_String ll_backend__rtti_out__V_26_26;

    {
      ll_backend__rtti_out__V_10_10 = backend_libs__rtti__res_functor_rtti_name_1_f_0(ll_backend__rtti_out__ResFunctor_6);
    }
    {
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__V_10_10));
    }
    {
      ll_backend__rtti_out__V_26_26 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_26_26);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_19_19, &ll_backend__rtti_out__Str_25);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_25);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1339__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
  MR_Integer ll_backend__rtti_out__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__rtti_out__succeeded;

        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer ll_backend__rtti_out__Ptag_12;
            MR_Word ll_backend__rtti_out__SectagTable_13;
            MR_Word ll_backend__rtti_out__PtagTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__rtti_out__SectagLocn_17;
            MR_Integer ll_backend__rtti_out__NumSharers_18;
            MR_String ll_backend__rtti_out__LocnStr_20;
            MR_Word ll_backend__rtti_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__V_26_26;
            MR_Word ll_backend__rtti_out__V_38_38;
            MR_Word ll_backend__rtti_out__V_53_53;
            MR_String ll_backend__rtti_out__Str_59;
            MR_String ll_backend__rtti_out__V_60_60;
            MR_Word ll_backend__rtti_out___SectagMap_19;

            ll_backend__rtti_out__Ptag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, (MR_Integer) 0)));
            ll_backend__rtti_out__SectagTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, (MR_Integer) 1)));
            {
              ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[11]));
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 3) = ((MR_Box) (ll_backend__rtti_out__HeadVar__3_3));
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 4) = ((MR_Box) (ll_backend__rtti_out__Ptag_12));
            }
            {
              mercury__require__expect_4_p_0(ll_backend__rtti_out__V_26_26, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table_body\'/5", (MR_String) "ptag mismatch");
            }
            ll_backend__rtti_out__SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_13, (MR_Integer) 0)));
            ll_backend__rtti_out__NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_13, (MR_Integer) 1)));
            ll_backend__rtti_out___SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_13, (MR_Integer) 2)));
            {
              mercury__io__write_string_3_p_0((MR_String) "\t{ ");
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumSharers_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              backend_libs__rtti__sectag_locn_to_string_2_p_0(ll_backend__rtti_out__SectagLocn_17, &ll_backend__rtti_out__LocnStr_20);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__LocnStr_20);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n\t");
            }
            {
              ll_backend__rtti_out__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_38_38, 1) = ((MR_Box) (ll_backend__rtti_out__Ptag_12));
            }
            {
              ll_backend__rtti_out__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_53_53, 0) = ((MR_Box) (ll_backend__rtti_out__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_53_53, 1) = ((MR_Box) (ll_backend__rtti_out__V_38_38));
            }
            {
              ll_backend__rtti_out__V_60_60 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_60_60);
            }
            {
              backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_53_53, &ll_backend__rtti_out__Str_59);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_59);
            }
            if ((ll_backend__rtti_out__PtagTail_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " }\n");
                }
              }
            else
              {
                MR_Integer ll_backend__rtti_out__V_42_42;

                {
                  mercury__io__write_string_3_p_0((MR_String) " },\n");
                }
                ll_backend__rtti_out__V_42_42 = (ll_backend__rtti_out__HeadVar__3_3 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__PtagTail_14;
                  MR_Integer ll_backend__rtti_out__HeadVar__3__tmp_copy_3 = ll_backend__rtti_out__V_42_42;

                  ll_backend__rtti_out__HeadVar__3_3 = ll_backend__rtti_out__HeadVar__3__tmp_copy_3;
                  ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_20;

    {
      ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_20);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_20));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__PtagMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__PtagList_13;
    MR_Integer ll_backend__rtti_out__FirstPtag_16;
    MR_Word ll_backend__rtti_out__V_23_23;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24;
    MR_Word ll_backend__rtti_out__V_26_26;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64;
    MR_Word ll_backend__rtti_out__V_66_66;
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_24_24;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_25_25;
    MR_Word ll_backend__rtti_out__V_32_32;
    MR_Integer ll_backend__rtti_out__V_33_33;
    MR_Word ll_backend__rtti_out__V_15_15;
    MR_Word ll_backend__rtti_out__V_14_14;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, ll_backend__rtti_out__PtagMap_10, &ll_backend__rtti_out__PtagList_13);
    }
    {
      ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 3) = ((MR_Box) (ll_backend__rtti_out__Info_8));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_2[2], (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_23_23, ll_backend__rtti_out__PtagList_13, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_25_25);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_24_24);
    {
      ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_26_26, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64);
    }
    {
      ll_backend__rtti_out__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 1) = ((MR_Box) (ll_backend__rtti_out__V_26_26));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_66_66, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__PtagList_13)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 0)));
        ll_backend__rtti_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 1)));
        ll_backend__rtti_out__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, (MR_Integer) 0)));
        ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_33_33 == (MR_Integer) 1);
      }
    if (ll_backend__rtti_out__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t{ 0, MR_SECTAG_VARIABLE, NULL },\n");
        }
        ll_backend__rtti_out__FirstPtag_16 = (MR_Integer) 1;
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_35_35;
        MR_Integer ll_backend__rtti_out__V_36_36;
        MR_Word ll_backend__rtti_out__V_18_18;
        MR_Word ll_backend__rtti_out__V_17_17;

        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__PtagList_13)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 0)));
            ll_backend__rtti_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 1)));
            ll_backend__rtti_out__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_35_35, (MR_Integer) 0)));
            ll_backend__rtti_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_35_35, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_36_36 == (MR_Integer) 0);
          }
        if (ll_backend__rtti_out__succeeded)
          ll_backend__rtti_out__FirstPtag_16 = (MR_Integer) 0;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table\'/7", (MR_String) "bad ptag list");
              return;
            }
          }
      }
    {
      ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__PtagList_13, ll_backend__rtti_out__FirstPtag_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__HeadVar__3_3,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_34_34 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    MR_Integer ll_backend__rtti_out__Ptag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ll_backend__rtti_out__SectagTable_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__SectagMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_11, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__SectagFunctors_17;
    MR_Word ll_backend__rtti_out__FunctorNames_18;
    MR_Word ll_backend__rtti_out__V_24_24;
    MR_Word ll_backend__rtti_out__V_27_27;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_49;
    MR_Word ll_backend__rtti_out__V_51_51;
    MR_Word ll_backend__rtti_out___SectagLocn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_11, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out___NumSharers_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_11, (MR_Integer) 1)));

    {
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__TypeCtorInfo_34_34, ll_backend__rtti_out__SectagMap_16, &ll_backend__rtti_out__SectagFunctors_17);
    }
    {
      ll_backend__rtti_out__FunctorNames_18 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_34_34, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[27], ll_backend__rtti_out__SectagFunctors_17);
    }
    {
      ll_backend__rtti_out__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_27_27, 1) = ((MR_Box) (ll_backend__rtti_out__Ptag_10));
    }
    {
      ll_backend__rtti_out__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_24_24, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_24_24, 1) = ((MR_Box) (ll_backend__rtti_out__V_27_27));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_24_24, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_49);
    }
    {
      ll_backend__rtti_out__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 1) = ((MR_Box) (ll_backend__rtti_out__V_24_24));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_49, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__rtti_out__FunctorNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_67_67;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorNames_18, (MR_String) ",\n\t", ll_backend__rtti_out__V_67_67);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_35;

    {
      ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1283__1_2_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv0_HeadVar__2_35);
    }
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_35));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__NameArityMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeInfo_33_33 = (MR_Word) &ll_backend__rtti_out_scalar_common_2[1];
    MR_Word ll_backend__rtti_out__TypeCtorInfo_39_39;
    MR_Word ll_backend__rtti_out__ArityMaps_13;
    MR_Word ll_backend__rtti_out__FunctorLists_14;
    MR_Word ll_backend__rtti_out__Functors_15;
    MR_Word ll_backend__rtti_out__FunctorRttiNames_16;
    MR_Word ll_backend__rtti_out__V_23_23;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54;
    MR_Word ll_backend__rtti_out__V_56_56;

    {
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeInfo_33_33, ll_backend__rtti_out__NameArityMap_10, &ll_backend__rtti_out__ArityMaps_13);
    }
    {
      mercury__list__map_3_p_0(ll_backend__rtti_out__TypeInfo_33_33, (MR_Word) &ll_backend__rtti_out_scalar_common_1[3], (MR_Word) &ll_backend__rtti_out_scalar_common_2[25], ll_backend__rtti_out__ArityMaps_13, &ll_backend__rtti_out__FunctorLists_14);
    }
    ll_backend__rtti_out__TypeCtorInfo_39_39 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    {
      mercury__list__condense_2_p_0(ll_backend__rtti_out__TypeCtorInfo_39_39, ll_backend__rtti_out__FunctorLists_14, &ll_backend__rtti_out__Functors_15);
    }
    {
      ll_backend__rtti_out__FunctorRttiNames_16 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_39_39, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[26], ll_backend__rtti_out__Functors_15);
    }
    {
      ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_23_23, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54);
    }
    {
      ll_backend__rtti_out__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 1) = ((MR_Box) (ll_backend__rtti_out__V_23_23));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_56_56, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__rtti_out__FunctorRttiNames_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_72_72;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_16, (MR_String) ",\n\t", ll_backend__rtti_out__V_72_72);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_Word ll_backend__rtti_out__Functors_13;
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
    MR_Word ll_backend__rtti_out__V_20_20;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
    MR_Word ll_backend__rtti_out__V_47_47;

    {
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
    {
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[24], ll_backend__rtti_out__Functors_13);
    }
    {
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_20_20, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
    {
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_20_20));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_63_63;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_Word ll_backend__rtti_out__Functors_13;
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
    MR_Word ll_backend__rtti_out__RttiId_15;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
    MR_Word ll_backend__rtti_out__V_47_47;

    {
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
    {
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[23], ll_backend__rtti_out__Functors_13);
    }
    {
      ll_backend__rtti_out__RttiId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_15, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiId_15, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
    {
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_15));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_63_63;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_Word ll_backend__rtti_out__Functors_13;
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
    MR_Word ll_backend__rtti_out__V_20_20;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
    MR_Word ll_backend__rtti_out__V_47_47;

    {
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
    {
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[22], ll_backend__rtti_out__Functors_13);
    }
    {
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_20_20, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
    {
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_20_20));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_63_63;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__FunctorMap_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_Word ll_backend__rtti_out__Functors_13;
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
    MR_Word ll_backend__rtti_out__V_20_20;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
    MR_Word ll_backend__rtti_out__V_47_47;

    {
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
    {
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[21], ll_backend__rtti_out__Functors_13);
    }
    {
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_20_20, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
    {
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_20_20));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_63_63;

        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_2_4_p_0(
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
  MR_Integer ll_backend__rtti_out__PrevSlotNum_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__rtti_out__succeeded;

        if ((ll_backend__rtti_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__rtti_out__ArgInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__ArgInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__rtti_out__ArgWidth_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgInfo_9, (MR_Integer) 2)));
            MR_Integer ll_backend__rtti_out__Shift_14;
            MR_Integer ll_backend__rtti_out__Bits_15;
            MR_Integer ll_backend__rtti_out__SlotNum_16;
            MR_Integer ll_backend__rtti_out__Skip_17;
            MR_Integer ll_backend__rtti_out__V_37_37;
            MR_String ll_backend__rtti_out__V_45_45;
            MR_Word ll_backend__rtti_out__V_51_51;
            MR_String ll_backend__rtti_out__V_55_55;
            MR_String ll_backend__rtti_out__V_65_65;
            MR_Word ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgInfo_9, (MR_Integer) 0)));
            MR_Word ll_backend__rtti_out__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgInfo_9, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__rtti_out__ArgWidth_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ll_backend__rtti_out__ArgWidth_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__rtti_out__Shift_14 = (MR_Integer) 0;
                      ll_backend__rtti_out__Bits_15 = (MR_Integer) 0;
                      ll_backend__rtti_out__SlotNum_16 = (ll_backend__rtti_out__PrevSlotNum_2 + (MR_Integer) 1);
                      ll_backend__rtti_out__Skip_17 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__rtti_out__Shift_14 = (MR_Integer) 0;
                      ll_backend__rtti_out__Bits_15 = (MR_Integer) -1;
                      ll_backend__rtti_out__SlotNum_16 = (ll_backend__rtti_out__PrevSlotNum_2 + (MR_Integer) 1);
                      ll_backend__rtti_out__Skip_17 = (MR_Integer) 1;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ll_backend__rtti_out__Mask_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__ArgWidth_13, (MR_Integer) 0)));
                  MR_Integer ll_backend__rtti_out__V_23_23;

                  ll_backend__rtti_out__Shift_14 = (MR_Integer) 0;
                  ll_backend__rtti_out__V_23_23 = (ll_backend__rtti_out__Mask_18 + (MR_Integer) 1);
                  {
                    mercury__int__log2_2_p_0(ll_backend__rtti_out__V_23_23, &ll_backend__rtti_out__Bits_15);
                  }
                  ll_backend__rtti_out__SlotNum_16 = (ll_backend__rtti_out__PrevSlotNum_2 + (MR_Integer) 1);
                  ll_backend__rtti_out__Skip_17 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ll_backend__rtti_out__V_21_21;
                  MR_Integer ll_backend__rtti_out__Mask_39;

                  ll_backend__rtti_out__Shift_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__ArgWidth_13, (MR_Integer) 0)));
                  ll_backend__rtti_out__Mask_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__ArgWidth_13, (MR_Integer) 1)));
                  ll_backend__rtti_out__V_21_21 = (ll_backend__rtti_out__Mask_39 + (MR_Integer) 1);
                  {
                    mercury__int__log2_2_p_0(ll_backend__rtti_out__V_21_21, &ll_backend__rtti_out__Bits_15);
                  }
                  ll_backend__rtti_out__SlotNum_16 = ll_backend__rtti_out__PrevSlotNum_2;
                  ll_backend__rtti_out__Skip_17 = (MR_Integer) 0;
                }
                break;
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t{ ");
            }
            ll_backend__rtti_out__V_51_51 = (MR_Word) &ll_backend__rtti_out_scalar_common_10[9];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__SlotNum_16, &ll_backend__rtti_out__V_45_45);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_45_45);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__Shift_14, &ll_backend__rtti_out__V_55_55);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_55_55);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__Bits_15, &ll_backend__rtti_out__V_65_65);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_65_65);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
            ll_backend__rtti_out__V_37_37 = (ll_backend__rtti_out__SlotNum_16 + ll_backend__rtti_out__Skip_17);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__rtti_out__HeadVar__1__tmp_copy_1 = ll_backend__rtti_out__ArgInfos_10;
              MR_Integer ll_backend__rtti_out__PrevSlotNum__tmp_copy_2 = ll_backend__rtti_out__V_37_37;

              ll_backend__rtti_out__PrevSlotNum_2 = ll_backend__rtti_out__PrevSlotNum__tmp_copy_2;
              ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_3(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17 = ((MR_Word) (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17);
    {
      ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(ll_backend__rtti_out__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    {
      MR_Word ll_backend__rtti_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 0)));
      MR_Word ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 1)));

      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 2)));
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = ((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = !((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded);
      if ((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded)
        {
          ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(ll_backend__rtti_out__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13, ll_backend__rtti_out__output_du_arg_locns_9_p_0_3, ll_backend__rtti_out__env_ptr);
          }
        }
        (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0(
  MR_Word ll_backend__rtti_out__Info_10,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_11,
  MR_Integer ll_backend__rtti_out__Ordinal_12,
  MR_Word ll_backend__rtti_out__ArgInfos_13,
  MR_Word * ll_backend__rtti_out__HaveArgLocns_14,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
{
  {
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s ll_backend__rtti_out__env;

    (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13 = ll_backend__rtti_out__ArgInfos_13;
    {
      ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(&ll_backend__rtti_out__env);
    }
    if ((ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded)
      {
        MR_Word ll_backend__rtti_out__V_25_25;
        MR_Word ll_backend__rtti_out__V_28_28;
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_47;
        MR_Word ll_backend__rtti_out__V_49_49;

        {
          ll_backend__rtti_out__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_12));
        }
        {
          ll_backend__rtti_out__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 1) = ((MR_Box) (ll_backend__rtti_out__V_28_28));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_10, ll_backend__rtti_out__V_25_25, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_47);
        }
        {
          ll_backend__rtti_out__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_49_49, 1) = ((MR_Box) (ll_backend__rtti_out__V_25_25));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_49_49, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          ll_backend__rtti_out__output_du_arg_locns_2_4_p_0((ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13, (MR_Integer) -1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
        *ll_backend__rtti_out__HaveArgLocns_14 = (MR_Integer) 1;
      }
    else
      {
        *ll_backend__rtti_out__HaveArgLocns_14 = (MR_Integer) 0;
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21;
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1153__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__MaybeNames_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_19_19;
    MR_Word ll_backend__rtti_out__V_22_22;
    MR_Word ll_backend__rtti_out__V_25_25;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_44;
    MR_Word ll_backend__rtti_out__V_46_46;

    {
      ll_backend__rtti_out__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__V_22_22));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_19_19, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_44);
    }
    {
      ll_backend__rtti_out__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__V_19_19));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_46_46, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      ll_backend__rtti_out__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[3]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_8_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 3) = ((MR_Box) (ll_backend__rtti_out__MaybeNames_12));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__rtti_out__V_25_25, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_names\'/8", (MR_String) "empty list");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_1[2], ll_backend__rtti_out__MaybeNames_12, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[20]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1140__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv3_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv3_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14;

    {
      ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__ArgTypes_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_49_49;
    MR_Word ll_backend__rtti_out__ArgTypeDatas_15;
    MR_Word ll_backend__rtti_out__V_21_21;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22_22;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
    MR_Word ll_backend__rtti_out__V_30_30;
    MR_Word ll_backend__rtti_out__V_33_33;
    MR_Word ll_backend__rtti_out__V_36_36;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67;
    MR_Word ll_backend__rtti_out__V_69_69;
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_22_22;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_23_23;
    MR_Integer ll_backend__rtti_out__V_16_16;

    {
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 3) = ((MR_Box) (ll_backend__rtti_out__Info_9));
    }
    ll_backend__rtti_out__TypeCtorInfo_49_49 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;
    {
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_21_21, ll_backend__rtti_out__ArgTypes_12, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_22_22);
    {
      ll_backend__rtti_out__ArgTypeDatas_15 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[19], ll_backend__rtti_out__ArgTypes_12);
    }
    {
      ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__ArgTypeDatas_15, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_16_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22_22, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28);
    }
    {
      ll_backend__rtti_out__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 1) = ((MR_Box) (ll_backend__rtti_out__V_33_33));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_30_30, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67);
    }
    {
      ll_backend__rtti_out__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 1) = ((MR_Box) (ll_backend__rtti_out__V_30_30));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_69_69, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      ll_backend__rtti_out__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 3) = ((MR_Box) (ll_backend__rtti_out__ArgTypes_12));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__rtti_out__V_36_36, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_types\'/8", (MR_String) "empty list");
    }
    if ((ll_backend__rtti_out__ArgTypeDatas_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
        }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__rtti_out__ArgTypeDatas_15, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_11[2]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__ExistInfo_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_24,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Integer ll_backend__rtti_out__Plain_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__InTci_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__Locns_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 3)));
    MR_Integer ll_backend__rtti_out__Tci_21;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30;
    MR_Word ll_backend__rtti_out__V_32_32;
    MR_Word ll_backend__rtti_out__V_35_35;
    MR_Word ll_backend__rtti_out__V_47_47;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67;
    MR_Word ll_backend__rtti_out__V_69_69;
    MR_Word ll_backend__rtti_out__V_76_76;
    MR_String ll_backend__rtti_out__Str_82;
    MR_String ll_backend__rtti_out__V_83_83;

    {
      ll_backend__rtti_out__output_exist_locns_array_8_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__Ordinal_11, ll_backend__rtti_out__Locns_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_24, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28);
    }
    if ((ll_backend__rtti_out__Constraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
    else
      {
        ll_backend__rtti_out__output_exist_constraints_data_8_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__Ordinal_11, ll_backend__rtti_out__Constraints_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30);
      }
    {
      ll_backend__rtti_out__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_35_35, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 1) = ((MR_Box) (ll_backend__rtti_out__V_35_35));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_32_32, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67);
    }
    {
      ll_backend__rtti_out__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 1) = ((MR_Box) (ll_backend__rtti_out__V_32_32));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_69_69, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Plain_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__InTci_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ll_backend__rtti_out__Constraints_17, &ll_backend__rtti_out__Tci_21);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Tci_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_76_76, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_76_76, 1) = ((MR_Box) (ll_backend__rtti_out__V_47_47));
    }
    {
      ll_backend__rtti_out__V_83_83 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_83_83);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_76_76, &ll_backend__rtti_out__Str_82);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_82);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__Constraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__rtti_out__V_51_51;

        {
          ll_backend__rtti_out__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
        }
        {
          ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__V_51_51);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
  MR_Box * ll_backend__rtti_out__wrapper_arg_8)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv3_TCDeclSuperRttiId_14;
    MR_Word ll_backend__rtti_out__conv2_STATE_VARIABLE_Counter_25;
    MR_Word ll_backend__rtti_out__conv1_STATE_VARIABLE_DeclSet_27;

    {
      ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv3_TCDeclSuperRttiId_14, ((MR_Word) ll_backend__rtti_out__wrapper_arg_3), &ll_backend__rtti_out__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ll_backend__rtti_out__wrapper_arg_5), &ll_backend__rtti_out__conv1_STATE_VARIABLE_DeclSet_27);
    }
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv3_TCDeclSuperRttiId_14));
    *ll_backend__rtti_out__wrapper_arg_4 = ((MR_Box) (ll_backend__rtti_out__conv2_STATE_VARIABLE_Counter_25));
    *ll_backend__rtti_out__wrapper_arg_6 = ((MR_Box) (ll_backend__rtti_out__conv1_STATE_VARIABLE_DeclSet_27));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_RttiId_10;

    {
      ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_1), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_RttiId_10);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_RttiId_10));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__Constraints_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_18,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_19)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__ConstraintIds_15;
    MR_Word ll_backend__rtti_out__RttiId_17;
    MR_Word ll_backend__rtti_out__V_22_22;
    MR_Word ll_backend__rtti_out__V_23_23;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24;
    MR_Word ll_backend__rtti_out__V_26_26;
    MR_Word ll_backend__rtti_out__V_28_28;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64;
    MR_Word ll_backend__rtti_out__V_66_66;
    MR_Word ll_backend__rtti_out__V_16_16;
    MR_Box ll_backend__rtti_out__conv6_V_16_16;
    MR_Box ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_24_24;
    MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_25_25;

    {
      ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 4) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 3) = ((MR_Box) (ll_backend__rtti_out__Info_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 4) = ((MR_Box) (ll_backend__rtti_out__V_26_26));
    }
    {
      ll_backend__rtti_out__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_22_22, ll_backend__rtti_out__Constraints_12, &ll_backend__rtti_out__ConstraintIds_15, ((MR_Box) (ll_backend__rtti_out__V_23_23)), &ll_backend__rtti_out__conv6_V_16_16, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_18)), &ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_25_25);
    }
    ll_backend__rtti_out__V_16_16 = ((MR_Word) ll_backend__rtti_out__conv6_V_16_16);
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_24_24);
    {
      ll_backend__rtti_out__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__RttiId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_17, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_17, 1) = ((MR_Box) (ll_backend__rtti_out__V_28_28));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiId_17, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64);
    }
    {
      ll_backend__rtti_out__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_17));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_66_66, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
    if ((ll_backend__rtti_out__ConstraintIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
        }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ll_backend__rtti_out__ConstraintIds_15, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_11[0]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
  MR_Word ll_backend__rtti_out__RttiTypeCtor_6,
  MR_Integer ll_backend__rtti_out__Ordinal_7,
  MR_Integer ll_backend__rtti_out__TCNum_8,
  MR_Integer ll_backend__rtti_out__Arity_9,
  MR_Word * ll_backend__rtti_out__RttiId_10)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__RttiName_11;

    {
      ll_backend__rtti_out__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__RttiName_11, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_7));
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__RttiName_11, 1) = ((MR_Box) (ll_backend__rtti_out__TCNum_8));
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__RttiName_11, 2) = ((MR_Box) (ll_backend__rtti_out__Arity_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__rtti_out__RttiId_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_11));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_exist_locn_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0(
  MR_Word ll_backend__rtti_out__Info_9,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
  MR_Integer ll_backend__rtti_out__Ordinal_11,
  MR_Word ll_backend__rtti_out__Locns_12,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_21_21;
    MR_Word ll_backend__rtti_out__V_24_24;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43;
    MR_Word ll_backend__rtti_out__V_45_45;

    {
      ll_backend__rtti_out__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_24_24, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
    }
    {
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (ll_backend__rtti_out__V_24_24));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_21_21, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43);
    }
    {
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__V_21_21));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_45_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
    if ((ll_backend__rtti_out__Locns_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "= { {0, 0} };\n");
        }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ll_backend__rtti_out__Locns_12, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[18]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__MaybeResFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if (((MR_tag((MR_Word) ll_backend__rtti_out__MaybeResFunctor_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__rtti_out__DuFunctor_14 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_10), (MR_Integer) 1);

        {
          ll_backend__rtti_out__output_du_functor_defn_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__DuFunctor_14, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__ResFunctor_13 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_10), (MR_Integer) 0);
        MR_String ll_backend__rtti_out__FunctorName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_13, (MR_Integer) 0)));
        MR_Integer ll_backend__rtti_out__Ordinal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_13, (MR_Integer) 1)));
        MR_Word ll_backend__rtti_out__Rep_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_13, (MR_Integer) 2)));
        MR_Word ll_backend__rtti_out__V_39_39;
        MR_Word ll_backend__rtti_out__V_42_42;
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_72;
        MR_Word ll_backend__rtti_out__V_74_74;

        {
          ll_backend__rtti_out__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_42_42, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_33));
        }
        {
          ll_backend__rtti_out__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_39_39, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_39_39, 1) = ((MR_Box) (ll_backend__rtti_out__V_42_42));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_39_39, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_72);
        }
        {
          ll_backend__rtti_out__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_74_74, 1) = ((MR_Box) (ll_backend__rtti_out__V_39_39));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_74_74, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_72, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
        }
        {
          backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__FunctorName_32);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ordinal_33);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n\t");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "(void *) ");
        }
        switch (MR_tag((MR_Word) ll_backend__rtti_out__Rep_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "NULL");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ll_backend__rtti_out__SmallPtr_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__Rep_34, (MR_Integer) 0)));

              {
                mercury__io__write_int_3_p_0(ll_backend__rtti_out__SmallPtr_35);
              }
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
        {
          mercury__io__write_string_3_p_0((MR_String) "\n};\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_subtype_info_3_p_0(
  MR_Word ll_backend__rtti_out__FunctorSubtypeInfo_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (ll_backend__rtti_out__FunctorSubtypeInfo_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTOR_SUBTYPE_EXISTS");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTOR_SUBTYPE_NONE");
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_5(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_118_118 = ((MR_Word) (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_V_118_118);
    {
      ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(ll_backend__rtti_out__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = ll_backend__rtti_out____Unify____maybe__maybe_1_2((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_119_119, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_43_43, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_118_118);
    }
    if ((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded)
      {
        ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(ll_backend__rtti_out__env_ptr);
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(
  void * ll_backend__rtti_out__env_ptr_arg)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_String ll_backend__rtti_out__V_23_23;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_43_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
          }
          {
            mercury__list__member_2_p_1((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115, &(ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_V_118_118, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21, ll_backend__rtti_out__output_du_functor_defn_7_p_0_5, ll_backend__rtti_out__env_ptr);
          }
        }
        (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__DuFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_37,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38)
{
  {
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s ll_backend__rtti_out__env;

    {
      MR_Word ll_backend__rtti_out__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
      MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 0)));
      MR_Integer ll_backend__rtti_out__OrigArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 1)));
      MR_Integer ll_backend__rtti_out__Ordinal_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 2)));
      MR_Word ll_backend__rtti_out__Rep_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 3)));
      MR_Word ll_backend__rtti_out__ArgInfos_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 4)));
      MR_Word ll_backend__rtti_out__MaybeExistInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 5)));
      MR_Word ll_backend__rtti_out__FunctorSubtypeInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 6)));
      MR_Word ll_backend__rtti_out__ArgTypes_20;
      MR_Word ll_backend__rtti_out__HaveArgNames_22;
      MR_Word ll_backend__rtti_out__HaveArgLocns_26;
      MR_Integer ll_backend__rtti_out__ContainsVarBitVector_28;
      MR_Integer ll_backend__rtti_out__Ptag_29;
      MR_Word ll_backend__rtti_out__SectagAndLocn_30;
      MR_String ll_backend__rtti_out__Locn_32;
      MR_Integer ll_backend__rtti_out__Stag_33;
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_44_44;
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_46_46;
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48;
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50_50;
      MR_Word ll_backend__rtti_out__V_52_52;
      MR_Word ll_backend__rtti_out__V_55_55;

      {
        ll_backend__rtti_out__ArgTypes_20 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_111_111, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[16], ll_backend__rtti_out__ArgInfos_17);
      }
      (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115 = (MR_Word) &ll_backend__rtti_out_scalar_common_1[2];
      {
        (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_111_111, (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_115_115, (MR_Word) &ll_backend__rtti_out_scalar_common_2[17], ll_backend__rtti_out__ArgInfos_17);
      }
      if ((ll_backend__rtti_out__ArgInfos_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_44_44 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_37;
      else
        {
          ll_backend__rtti_out__output_du_arg_types_8_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, ll_backend__rtti_out__ArgTypes_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_37, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_44_44);
        }
      {
        ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(&ll_backend__rtti_out__env);
      }
      if ((ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded)
        {
          ll_backend__rtti_out__HaveArgNames_22 = (MR_Integer) 1;
          {
            ll_backend__rtti_out__output_du_arg_names_8_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_44_44, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_46_46);
          }
        }
      else
        {
          ll_backend__rtti_out__HaveArgNames_22 = (MR_Integer) 0;
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_46_46 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_44_44;
        }
      {
        ll_backend__rtti_out__output_du_arg_locns_9_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, ll_backend__rtti_out__ArgInfos_17, &ll_backend__rtti_out__HaveArgLocns_26, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_46_46, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48);
      }
      if ((ll_backend__rtti_out__MaybeExistInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50_50 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48;
      else
        {
          MR_Word ll_backend__rtti_out__ExistInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeExistInfo_18, (MR_Integer) 0)));

          {
            ll_backend__rtti_out__output_exist_info_8_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, ll_backend__rtti_out__ExistInfo_27, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50_50);
          }
        }
      {
        ll_backend__rtti_out__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_55_55, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
      }
      {
        ll_backend__rtti_out__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_52_52, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
        MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_52_52, 1) = ((MR_Box) (ll_backend__rtti_out__V_55_55));
      }
      {
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_52_52, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50_50, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
      }
      {
        backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__FunctorName_13);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
      }
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__OrigArity_14);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      {
        ll_backend__rtti_out__ContainsVarBitVector_28 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ll_backend__rtti_out__ArgTypes_20);
      }
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__ContainsVarBitVector_28);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      if (((MR_tag((MR_Word) ll_backend__rtti_out__Rep_16)) == (MR_mktag((MR_Integer) 1))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_functor_defn\'/7", (MR_String) "du_hl_rep");
            return;
          }
        }
      else
        {
          ll_backend__rtti_out__Ptag_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Rep_16, (MR_Integer) 0)));
          ll_backend__rtti_out__SectagAndLocn_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Rep_16, (MR_Integer) 1)));
        }
      switch (MR_tag((MR_Word) ll_backend__rtti_out__SectagAndLocn_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ll_backend__rtti_out__SectagAndLocn_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__rtti_out__Locn_32 = (MR_String) "MR_SECTAG_NONE";
                ll_backend__rtti_out__Stag_33 = (MR_Integer) -1;
              }
              break;
            case (MR_Integer) 1:
              {
                ll_backend__rtti_out__Locn_32 = (MR_String) "MR_SECTAG_NONE_DIRECT_ARG";
                ll_backend__rtti_out__Stag_33 = (MR_Integer) -1;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            ll_backend__rtti_out__Stag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__SectagAndLocn_30, (MR_Integer) 0)));
            ll_backend__rtti_out__Locn_32 = (MR_String) "MR_SECTAG_LOCAL";
          }
          break;
        case (MR_Integer) 2:
          {
            ll_backend__rtti_out__Stag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__SectagAndLocn_30, (MR_Integer) 0)));
            ll_backend__rtti_out__Locn_32 = (MR_String) "MR_SECTAG_REMOTE";
          }
          break;
      }
      {
        mercury__io__write_string_3_p_0(ll_backend__rtti_out__Locn_32);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ptag_29);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__Stag_33);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ordinal_15);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "(MR_PseudoTypeInfo *) ");
      }
      if ((ll_backend__rtti_out__ArgInfos_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
        }
      else
        {
          MR_Word ll_backend__rtti_out__V_86_86;

          {
            ll_backend__rtti_out__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_86_86, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
          }
          {
            ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_86_86);
          }
        }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      switch (ll_backend__rtti_out__HaveArgNames_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__rtti_out__V_92_92;

            {
              ll_backend__rtti_out__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_92_92, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
            }
            {
              ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_92_92);
            }
          }
          break;
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      switch (ll_backend__rtti_out__HaveArgLocns_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__rtti_out__V_98_98;

            {
              ll_backend__rtti_out__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_98_98, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
            }
            {
              ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_98_98);
            }
          }
          break;
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      if ((ll_backend__rtti_out__MaybeExistInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
        }
      else
        {
          MR_Word ll_backend__rtti_out__V_104_104;

          {
            ll_backend__rtti_out__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_104_104, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
          }
          {
            ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_104_104);
          }
        }
      {
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
      {
        ll_backend__rtti_out__output_functor_subtype_info_3_p_0(ll_backend__rtti_out__FunctorSubtypeInfo_19);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "\n};\n");
      }
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__NotagFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 0)));
    MR_Word ll_backend__rtti_out__ArgType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__MaybeArgName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__FunctorSubtypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 3)));
    MR_Word ll_backend__rtti_out__ArgTypeData_17;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26_26;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31;
    MR_Word ll_backend__rtti_out__V_33_33;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_87;
    MR_Word ll_backend__rtti_out__V_89_89;
    MR_Integer ll_backend__rtti_out__V_18_18;

    if (((MR_tag((MR_Word) ll_backend__rtti_out__ArgType_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__rtti_out__TypeInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));

        {
          ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__TypeInfo_70, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26_26);
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__PseudoTypeInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));

        {
          ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__PseudoTypeInfo_71, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26_26);
        }
      }
    {
      ll_backend__rtti_out__ArgTypeData_17 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ll_backend__rtti_out__ArgType_14);
    }
    {
      ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__ArgTypeData_17, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26_26, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31);
    }
    {
      ll_backend__rtti_out__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_33_33, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_87);
    }
    {
      ll_backend__rtti_out__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_89_89, 1) = ((MR_Box) (ll_backend__rtti_out__V_33_33));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_87, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__FunctorName_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
    if (((MR_tag((MR_Word) ll_backend__rtti_out__ArgType_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__rtti_out__ArgTypeInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__V_46_46;

        {
          ll_backend__rtti_out__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__ArgTypeInfo_19));
        }
        {
          ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__V_46_46);
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__ArgPseudoTypeInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__V_43_43;

        {
          ll_backend__rtti_out__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_43_43, 1) = ((MR_Box) (ll_backend__rtti_out__ArgPseudoTypeInfo_20));
        }
        {
          ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__V_43_43);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__MaybeArgName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_String ll_backend__rtti_out__ArgName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeArgName_15, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__rtti_out__ArgName_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__output_functor_subtype_info_3_p_0(ll_backend__rtti_out__FunctorSubtypeInfo_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__ForeignEnumFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ForeignEnumFunctor_10, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__FunctorOrdinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ForeignEnumFunctor_10, (MR_Integer) 1)));
    MR_String ll_backend__rtti_out__FunctorValue_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ForeignEnumFunctor_10, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__RttiId_16;
    MR_Word ll_backend__rtti_out__V_21_21;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_46;
    MR_Word ll_backend__rtti_out__V_48_48;

    {
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (ll_backend__rtti_out__FunctorOrdinal_14));
    }
    {
      ll_backend__rtti_out__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_16, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_16, 1) = ((MR_Box) (ll_backend__rtti_out__V_21_21));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiId_16, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_46);
    }
    {
      ll_backend__rtti_out__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_48_48, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_16));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_48_48, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_46, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__FunctorName_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__FunctorOrdinal_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__FunctorValue_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
  MR_Word ll_backend__rtti_out__EnumFunctor_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__EnumFunctor_10, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__Ordinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__EnumFunctor_10, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__V_19_19;
    MR_Word ll_backend__rtti_out__V_22_22;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_42;
    MR_Word ll_backend__rtti_out__V_44_44;

    {
      ll_backend__rtti_out__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_14));
    }
    {
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__V_22_22));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_19_19, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_42);
    }
    {
      ll_backend__rtti_out__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_44_44, 1) = ((MR_Box) (ll_backend__rtti_out__V_19_19));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_44_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_42, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__FunctorName_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ordinal_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_16;

    {
      ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_16);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_16));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv6_STATE_VARIABLE_DeclSet_18;

    {
      ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv6_STATE_VARIABLE_DeclSet_18);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv6_STATE_VARIABLE_DeclSet_18));
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__729__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))));
    }
    return ll_backend__rtti_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_16;

    {
      ll_backend__rtti_out__output_enum_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_16);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_16));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_38;

    {
      ll_backend__rtti_out__output_du_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_38);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_38));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__RttiTypeCtor_12,
  MR_Word ll_backend__rtti_out__TypeCtorDetails_13,
  MR_Word * ll_backend__rtti_out__MaybeFunctorsName_14,
  MR_Word * ll_backend__rtti_out__MaybeLayoutName_15,
  MR_Word * ll_backend__rtti_out__HaveFunctorNumberMap_16,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__TypeCtorDetails_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__rtti_out__EnumFunctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__EnumByRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ll_backend__rtti_out__EnumByName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ll_backend__rtti_out__FunctorNumberMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 5)));
          MR_Word ll_backend__rtti_out__V_107_107;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_108_108;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_110_110;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_112_112;
          MR_Word ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Word ll_backend__rtti_out___IsDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Box ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_108_108;
          MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_109_109;

          {
            ll_backend__rtti_out__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[1]));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_107_107, ll_backend__rtti_out__EnumFunctors_20, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_109_109);
          }
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_108_108);
          {
            ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__EnumByRep_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_108_108, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_110_110);
          }
          {
            ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__EnumByName_22, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_110_110, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_112_112);
          }
          {
            ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_24, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_112_112, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
          }
          *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[2]);
          *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[3]);
          *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__Lang_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Word ll_backend__rtti_out__ForeignEnumFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ll_backend__rtti_out__ForeignEnumByOrdinal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ll_backend__rtti_out__ForeignEnumByName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Word ll_backend__rtti_out__V_91_91;
          MR_Word ll_backend__rtti_out__V_96_96;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_97_97;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_101_101;
          MR_Word ll_backend__rtti_out__FunctorNumberMap_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 5)));
          MR_Word ll_backend__rtti_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Box ll_backend__rtti_out__conv8_STATE_VARIABLE_DeclSet_97_97;
          MR_Box ll_backend__rtti_out__conv7_STATE_VARIABLE_IO_98_98;

          {
            ll_backend__rtti_out__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 3) = ((MR_Box) (ll_backend__rtti_out__Lang_25));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(ll_backend__rtti_out__V_91_91, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_type_ctor_details_defn\'/10", (MR_String) "language other than C for foreign enumeration");
          }
          {
            ll_backend__rtti_out__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[2]));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_96_96, ll_backend__rtti_out__ForeignEnumFunctors_27, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv8_STATE_VARIABLE_DeclSet_97_97, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv7_STATE_VARIABLE_IO_98_98);
          }
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_97_97 = ((MR_Word) ll_backend__rtti_out__conv8_STATE_VARIABLE_DeclSet_97_97);
          {
            ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__ForeignEnumByOrdinal_28, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_97_97, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99);
          }
          {
            ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__ForeignEnumByName_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_101_101);
          }
          {
            ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_118, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_101_101, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
          }
          *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[4]);
          *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[5]);
          *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__rtti_out__DuFunctors_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__DuByRep_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ll_backend__rtti_out__DuByName_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ll_backend__rtti_out__V_80_80;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_81_81;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_83_83;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_85_85;
          MR_Word ll_backend__rtti_out__FunctorNumberMap_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Word ll_backend__rtti_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_81_81;
          MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_82_82;

          {
            ll_backend__rtti_out__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_80_80, ll_backend__rtti_out__DuFunctors_31, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_81_81, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_82_82);
          }
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_81_81 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_81_81);
          {
            ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__DuByRep_32, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_81_81, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_83_83);
          }
          {
            ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__DuByName_33, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_83_83, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_85_85);
          }
          {
            ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_119, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_85_85, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
          }
          *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[0]);
          *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[1]);
          *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__rtti_out__MaybeResFunctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
              MR_Word ll_backend__rtti_out__ResFunctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
              MR_Word ll_backend__rtti_out__MaybeResByName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 5)));
              MR_Word ll_backend__rtti_out__V_69_69;
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_70_70;
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_72_72;
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_74_74;
              MR_Word ll_backend__rtti_out__FunctorNumberMap_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 6)));
              MR_Word ll_backend__rtti_out__DuByRep_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
              MR_Word ll_backend__rtti_out__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
              MR_Box ll_backend__rtti_out__conv11_STATE_VARIABLE_DeclSet_70_70;
              MR_Box ll_backend__rtti_out__conv10_STATE_VARIABLE_IO_71_71;

              {
                ll_backend__rtti_out__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[3]));
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5));
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
              }
              {
                mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_69_69, ll_backend__rtti_out__MaybeResFunctors_35, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv11_STATE_VARIABLE_DeclSet_70_70, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv10_STATE_VARIABLE_IO_71_71);
              }
              ll_backend__rtti_out__STATE_VARIABLE_DeclSet_70_70 = ((MR_Word) ll_backend__rtti_out__conv11_STATE_VARIABLE_DeclSet_70_70);
              {
                ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__ResFunctors_36, ll_backend__rtti_out__DuByRep_121, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_70_70, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_72_72);
              }
              {
                ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__MaybeResByName_37, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_72_72, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_74_74);
              }
              {
                ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_120, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_74_74, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
              }
              *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[7]);
              *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[8]);
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__rtti_out__NotagFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_60_60;
              MR_Word ll_backend__rtti_out__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));

              {
                ll_backend__rtti_out__output_notag_functor_defn_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__NotagFunctor_39, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_60_60);
              }
              {
                ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_1[5]), ll_backend__rtti_out__STATE_VARIABLE_DeclSet_60_60, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
              }
              *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[6]);
              *ll_backend__rtti_out__MaybeFunctorsName_14 = *ll_backend__rtti_out__MaybeLayoutName_15;
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__rtti_out__EqvType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
              MR_Word ll_backend__rtti_out__TypeData_41;
              MR_Word ll_backend__rtti_out__LayoutName_44;
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_53_53;
              MR_Integer ll_backend__rtti_out__V_42_42;

              {
                ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__EqvType_40, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_53_53);
              }
              {
                ll_backend__rtti_out__TypeData_41 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ll_backend__rtti_out__EqvType_40);
              }
              {
                ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__TypeData_41, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_42_42, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_53_53, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
              }
              if (((MR_tag((MR_Word) ll_backend__rtti_out__EqvType_40)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ll_backend__rtti_out__TypeInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__EqvType_40, (MR_Integer) 0)));

                  {
                    ll_backend__rtti_out__LayoutName_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_43));
                  }
                }
              else
                {
                  MR_Word ll_backend__rtti_out__PseudoTypeInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__EqvType_40, (MR_Integer) 0)));

                  {
                    ll_backend__rtti_out__LayoutName_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_45));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__rtti_out__MaybeLayoutName_15 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__rtti_out__LayoutName_44));
              }
              *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 0;
              *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv2_HeadVar__4_4;

    {
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv2_HeadVar__4_4);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TypeCtorData_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_34,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_111_111;
    MR_Word ll_backend__rtti_out__RttiTypeCtor_11;
    MR_Integer ll_backend__rtti_out__Version_12;
    MR_Word ll_backend__rtti_out__Module_13;
    MR_String ll_backend__rtti_out__TypeName_14;
    MR_Integer ll_backend__rtti_out__TypeArity_15;
    MR_Word ll_backend__rtti_out__UnifyUniv_16;
    MR_Word ll_backend__rtti_out__CompareUniv_17;
    MR_Word ll_backend__rtti_out__Flags_18;
    MR_Word ll_backend__rtti_out__TypeCtorDetails_19;
    MR_Word ll_backend__rtti_out__MaybeFunctorsName_20;
    MR_Word ll_backend__rtti_out__MaybeLayoutName_21;
    MR_Word ll_backend__rtti_out__HaveFunctorNumberMap_22;
    MR_Word ll_backend__rtti_out__UnifyProcLabel_23;
    MR_Word ll_backend__rtti_out__UnifyCodeAddr_24;
    MR_Word ll_backend__rtti_out__CompareProcLabel_25;
    MR_Word ll_backend__rtti_out__CompareCodeAddr_26;
    MR_Word ll_backend__rtti_out__CodeAddrs_27;
    MR_String ll_backend__rtti_out__CtorRepStr_28;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38;
    MR_Word ll_backend__rtti_out__V_40_40;
    MR_Word ll_backend__rtti_out__V_42_42;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43;
    MR_Word ll_backend__rtti_out__V_45_45;
    MR_Integer ll_backend__rtti_out__V_57_57;
    MR_String ll_backend__rtti_out__V_70_70;
    MR_Integer ll_backend__rtti_out__V_97_97;
    MR_Integer ll_backend__rtti_out__V_101_101;
    MR_Box ll_backend__rtti_out__conv0_UnifyProcLabel_23;
    MR_Box ll_backend__rtti_out__conv1_CompareProcLabel_25;
    MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_43_43;
    MR_Box ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_44_44;

    {
      ll_backend__rtti_out__RttiTypeCtor_11 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(ll_backend__rtti_out__TypeCtorData_8);
    }
    ll_backend__rtti_out__Version_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 0)));
    ll_backend__rtti_out__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 1)));
    ll_backend__rtti_out__TypeName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 2)));
    ll_backend__rtti_out__TypeArity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 3)));
    ll_backend__rtti_out__UnifyUniv_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 4)));
    ll_backend__rtti_out__CompareUniv_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 5)));
    ll_backend__rtti_out__Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 6)));
    ll_backend__rtti_out__TypeCtorDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 7)));
    {
      ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__RttiTypeCtor_11, ll_backend__rtti_out__TypeCtorDetails_19, &ll_backend__rtti_out__MaybeFunctorsName_20, &ll_backend__rtti_out__MaybeLayoutName_21, &ll_backend__rtti_out__HaveFunctorNumberMap_22, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_34, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38);
    }
    ll_backend__rtti_out__TypeCtorInfo_111_111 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
    {
      mercury__univ__det_univ_to_type_2_p_0(ll_backend__rtti_out__TypeCtorInfo_111_111, ll_backend__rtti_out__UnifyUniv_16, &ll_backend__rtti_out__conv0_UnifyProcLabel_23);
    }
    ll_backend__rtti_out__UnifyProcLabel_23 = ((MR_Word) ll_backend__rtti_out__conv0_UnifyProcLabel_23);
    {
      ll_backend__rtti_out__UnifyCodeAddr_24 = ll_backend__rtti_out__make_code_addr_1_f_0(ll_backend__rtti_out__UnifyProcLabel_23);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(ll_backend__rtti_out__TypeCtorInfo_111_111, ll_backend__rtti_out__CompareUniv_17, &ll_backend__rtti_out__conv1_CompareProcLabel_25);
    }
    ll_backend__rtti_out__CompareProcLabel_25 = ((MR_Word) ll_backend__rtti_out__conv1_CompareProcLabel_25);
    {
      ll_backend__rtti_out__CompareCodeAddr_26 = ll_backend__rtti_out__make_code_addr_1_f_0(ll_backend__rtti_out__CompareProcLabel_25);
    }
    {
      ll_backend__rtti_out__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_40_40, 0) = ((MR_Box) (ll_backend__rtti_out__CompareCodeAddr_26));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__rtti_out__CodeAddrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__CodeAddrs_27, 0) = ((MR_Box) (ll_backend__rtti_out__UnifyCodeAddr_24));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__CodeAddrs_27, 1) = ((MR_Box) (ll_backend__rtti_out__V_40_40));
    }
    {
      ll_backend__rtti_out__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_42_42, ll_backend__rtti_out__CodeAddrs_27, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_43_43, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_44_44);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43 = ((MR_Word) ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_43_43);
    {
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
    }
    {
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_45_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__TypeArity_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Version_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__V_57_57 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(ll_backend__rtti_out__TypeCtorDetails_19);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_57_57);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      backend_libs__rtti__type_ctor_rep_to_string_2_p_0(ll_backend__rtti_out__TypeCtorData_8, &ll_backend__rtti_out__CtorRepStr_28);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__CtorRepStr_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__output_static_code_addr_3_p_0(ll_backend__rtti_out__UnifyCodeAddr_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__output_static_code_addr_3_p_0(ll_backend__rtti_out__CompareCodeAddr_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t\"");
    }
    {
      ll_backend__rtti_out__V_70_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__rtti_out__Module_13);
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__V_70_70);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t\"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__TypeName_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
    if ((ll_backend__rtti_out__MaybeFunctorsName_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "{ 0 }");
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__FunctorsName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeFunctorsName_20, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__FunctorsRttiId_30;

        {
          ll_backend__rtti_out__FunctorsRttiId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorsRttiId_30, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorsRttiId_30, 1) = ((MR_Box) (ll_backend__rtti_out__FunctorsName_29));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
        {
          ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0((MR_String) "(void *)", ll_backend__rtti_out__FunctorsRttiId_30);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__MaybeLayoutName_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "{ 0 }");
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__LayoutName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeLayoutName_21, (MR_Integer) 0)));
        MR_Word ll_backend__rtti_out__LayoutRttiId_32;

        {
          ll_backend__rtti_out__LayoutRttiId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__LayoutRttiId_32, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__LayoutRttiId_32, 1) = ((MR_Box) (ll_backend__rtti_out__LayoutName_31));
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
        {
          ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0((MR_String) "(void *)", ll_backend__rtti_out__LayoutRttiId_32);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__V_97_97 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(ll_backend__rtti_out__TypeCtorDetails_19);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_97_97);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__V_101_101 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(ll_backend__rtti_out__Flags_18);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_101_101);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    switch (ll_backend__rtti_out__HaveFunctorNumberMap_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__FunctorNumberMapRttiId_33;

          {
            ll_backend__rtti_out__FunctorNumberMapRttiId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorNumberMapRttiId_33, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorNumberMapRttiId_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
          }
          {
            ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__FunctorNumberMapRttiId_33);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_21;

    {
      ll_backend__rtti_out__output_rtti_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_21);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_21));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__ArgRttiDatas_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_16_16;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17_17;
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_17_17;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_18_18;
    MR_Integer ll_backend__rtti_out__V_11_11;

    {
      ll_backend__rtti_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_16_16, ll_backend__rtti_out__ArgRttiDatas_8, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_17_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_18_18);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17_17 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_17_17);
    {
      ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_11_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__rtti_out__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_8), (MR_Integer) 0);
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_12;
          MR_Integer ll_backend__rtti_out__V_13_13;

          {
            ll_backend__rtti_out__TypeCtorRttiId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_12, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_13_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__ArgRttiDatas_16;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_55_55;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_58_58;
          MR_Word ll_backend__rtti_out__V_60_60;
          MR_Word ll_backend__rtti_out__V_63_63;
          MR_Word ll_backend__rtti_out__RttiTypeCtor_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 0)));
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_81;
          MR_Integer ll_backend__rtti_out__V_15_15;

          {
            ll_backend__rtti_out__TypeCtorRttiId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_81, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_80));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_81, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_15_15, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_55_55);
          }
          {
            ll_backend__rtti_out__ArgRttiDatas_16 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[14], ll_backend__rtti_out__Args_14);
          }
          {
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_55_55, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_58_58);
          }
          {
            ll_backend__rtti_out__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_8));
          }
          {
            ll_backend__rtti_out__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_60_60, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_80));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_60_60, 1) = ((MR_Box) (ll_backend__rtti_out__V_63_63));
          }
          {
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_60_60, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_58_58, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
          {
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
          {
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__rtti_out__TypeCtorInfo_90_90;
          MR_Word ll_backend__rtti_out__RttiVarArityId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 0)));
          MR_Integer ll_backend__rtti_out__Arity_19;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32;
          MR_Word ll_backend__rtti_out__V_34_34;
          MR_Word ll_backend__rtti_out__V_37_37;
          MR_Word ll_backend__rtti_out__RttiTypeCtor_82;
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_83;
          MR_Word ll_backend__rtti_out__Args_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__ArgRttiDatas_85;
          MR_Integer ll_backend__rtti_out__V_18_18;

          {
            ll_backend__rtti_out__RttiTypeCtor_82 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__rtti_out__RttiVarArityId_17);
          }
          {
            ll_backend__rtti_out__TypeCtorRttiId_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_83, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_82));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_83, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29);
          }
          ll_backend__rtti_out__TypeCtorInfo_90_90 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
          {
            ll_backend__rtti_out__ArgRttiDatas_85 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_90_90, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[15], ll_backend__rtti_out__Args_84);
          }
          {
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_85, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32);
          }
          {
            ll_backend__rtti_out__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_37_37, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_8));
          }
          {
            ll_backend__rtti_out__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_82));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 1) = ((MR_Box) (ll_backend__rtti_out__V_37_37));
          }
          {
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_34_34, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
          {
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
          {
            mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_90_90, ll_backend__rtti_out__Args_84, &ll_backend__rtti_out__Arity_19);
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
          {
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_85);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
          }
        }
        break;
      case (MR_Integer) 3:
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 3)));
    MR_Integer ll_backend__rtti_out__V_11_11;

    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 0)));
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
      }
    else
      {
        MR_Word ll_backend__rtti_out__RttiId_12;
        MR_Word ll_backend__rtti_out__V_17_17;
        MR_Word ll_backend__rtti_out__V_18_18;

        {
          ll_backend__rtti_out__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_8));
        }
        {
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__V_17_17, &ll_backend__rtti_out__RttiId_12);
        }
        {
          ll_backend__rtti_out__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_18_18, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_12));
        }
        {
          ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13);
        }
        if (ll_backend__rtti_out__succeeded)
          *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
        else
          {
            ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_8, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
          }
      }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__TypeInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__rtti_out__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__TypeInfo_8), (MR_Integer) 0);
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_12;
          MR_Integer ll_backend__rtti_out__V_13_13;

          {
            ll_backend__rtti_out__TypeCtorRttiId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_12, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_13_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__ArgRttiDatas_16;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_54_54;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_57_57;
          MR_Word ll_backend__rtti_out__V_59_59;
          MR_Word ll_backend__rtti_out__V_62_62;
          MR_Word ll_backend__rtti_out__RttiTypeCtor_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 0)));
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_80;
          MR_Integer ll_backend__rtti_out__V_15_15;

          {
            ll_backend__rtti_out__TypeCtorRttiId_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_80, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_79));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_80, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_15_15, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_54_54);
          }
          {
            ll_backend__rtti_out__ArgRttiDatas_16 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[12], ll_backend__rtti_out__Args_14);
          }
          {
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_54_54, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_57_57);
          }
          {
            ll_backend__rtti_out__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_62_62, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_8));
          }
          {
            ll_backend__rtti_out__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_59_59, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_79));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_59_59, 1) = ((MR_Box) (ll_backend__rtti_out__V_62_62));
          }
          {
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_59_59, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_57_57, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
          {
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
          {
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_TypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__rtti_out__TypeCtorInfo_89_89;
          MR_Word ll_backend__rtti_out__RttiVarArityId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 0)));
          MR_Integer ll_backend__rtti_out__Arity_19;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31;
          MR_Word ll_backend__rtti_out__V_33_33;
          MR_Word ll_backend__rtti_out__V_36_36;
          MR_Word ll_backend__rtti_out__RttiTypeCtor_81;
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_82;
          MR_Word ll_backend__rtti_out__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__ArgRttiDatas_84;
          MR_Integer ll_backend__rtti_out__V_18_18;

          {
            ll_backend__rtti_out__RttiTypeCtor_81 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__rtti_out__RttiVarArityId_17);
          }
          {
            ll_backend__rtti_out__TypeCtorRttiId_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_82, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_81));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_82, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28);
          }
          ll_backend__rtti_out__TypeCtorInfo_89_89 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
          {
            ll_backend__rtti_out__ArgRttiDatas_84 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_89_89, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[13], ll_backend__rtti_out__Args_83);
          }
          {
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_84, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31);
          }
          {
            ll_backend__rtti_out__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_8));
          }
          {
            ll_backend__rtti_out__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_81));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (ll_backend__rtti_out__V_36_36));
          }
          {
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_33_33, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
          {
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
          {
            mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_89_89, ll_backend__rtti_out__Args_83, &ll_backend__rtti_out__Arity_19);
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
          {
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_TypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_84);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__RttiId_11;
    MR_Word ll_backend__rtti_out__V_16_16;
    MR_Word ll_backend__rtti_out__V_17_17;

    {
      ll_backend__rtti_out__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_16_16, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_8));
    }
    {
      backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__V_16_16, &ll_backend__rtti_out__RttiId_11);
    }
    {
      ll_backend__rtti_out__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_11));
    }
    {
      ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__V_17_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12);
    }
    if (ll_backend__rtti_out__succeeded)
      *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12;
    else
      {
        ll_backend__rtti_out__do_output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_8, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    if (((MR_tag((MR_Word) ll_backend__rtti_out__MaybePseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__rtti_out__TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

        {
          ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
        }
      }
    else
      {
        MR_Word ll_backend__rtti_out__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

        {
          ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__MaybePseudoTypeInfo_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

          {
            ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__rtti_out__TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

          {
            ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv5_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv5_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14;

    {
      ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0(
  MR_Word ll_backend__rtti_out__Info_11,
  MR_Word ll_backend__rtti_out__MakeRttiId_12,
  MR_Word ll_backend__rtti_out__Constraint_13,
  MR_Word * ll_backend__rtti_out__TCDeclSuperRttiId_14,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_Counter_0_24,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_Counter_25,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_26,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_27)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_49_49 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
    MR_Word ll_backend__rtti_out__TCName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Constraint_13, (MR_Integer) 0)));
    MR_Word ll_backend__rtti_out__Types_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Constraint_13, (MR_Integer) 1)));
    MR_Integer ll_backend__rtti_out__NumTypes_20;
    MR_Integer ll_backend__rtti_out__TCNum_21;
    MR_Word ll_backend__rtti_out__TCDeclRttiId_22;
    MR_Word ll_backend__rtti_out__TypeRttiDatas_23;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32;
    MR_Word ll_backend__rtti_out__V_34_34;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35_35;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_69;
    MR_Word ll_backend__rtti_out__V_73_73;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_86;
    MR_Word ll_backend__rtti_out__V_88_88;
    MR_String ll_backend__rtti_out__Str_94;
    MR_String ll_backend__rtti_out__V_95_95;
    void MR_CALL (* ll_backend__rtti_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box ll_backend__rtti_out__conv1_TCDeclSuperRttiId_14;
    MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_35_35;
    MR_Box ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_36_36;

    {
      mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_49_49, ll_backend__rtti_out__Types_19, &ll_backend__rtti_out__NumTypes_20);
    }
    {
      mercury__counter__allocate_3_p_0(&ll_backend__rtti_out__TCNum_21, ll_backend__rtti_out__STATE_VARIABLE_Counter_0_24, ll_backend__rtti_out__STATE_VARIABLE_Counter_25);
    }
    ll_backend__rtti_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MakeRttiId_12, (MR_Integer) 1)));
    {
      ll_backend__rtti_out__func_0(((MR_Box) ll_backend__rtti_out__MakeRttiId_12), ((MR_Box) (ll_backend__rtti_out__TCNum_21)), ((MR_Box) (ll_backend__rtti_out__NumTypes_20)), &ll_backend__rtti_out__conv1_TCDeclSuperRttiId_14);
    }
    *ll_backend__rtti_out__TCDeclSuperRttiId_14 = ((MR_Word) ll_backend__rtti_out__conv1_TCDeclSuperRttiId_14);
    {
      ll_backend__rtti_out__TCDeclRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_22, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_18));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__TCDeclRttiId_22, (MR_Integer) 0, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_26, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_69);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    {
      ll_backend__rtti_out__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_73_73, 1) = ((MR_Box) (ll_backend__rtti_out__TCDeclRttiId_22));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_73_73, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_69, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32);
    }
    {
      ll_backend__rtti_out__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_10_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_34_34, ll_backend__rtti_out__Types_19, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_35_35, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_36_36);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35_35 = ((MR_Word) ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_35_35);
    {
      ll_backend__rtti_out__TypeRttiDatas_23 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[11], ll_backend__rtti_out__Types_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_11, *ll_backend__rtti_out__TCDeclSuperRttiId_14, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35_35, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_86);
    }
    {
      ll_backend__rtti_out__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_88_88, 1) = ((MR_Box) (*ll_backend__rtti_out__TCDeclSuperRttiId_14));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_88_88, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_86, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_27);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    }
    {
      ll_backend__rtti_out__V_95_95 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_95_95);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__TCDeclRttiId_22, &ll_backend__rtti_out__Str_94);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_94);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{\n");
    }
    {
      ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__TypeRttiDatas_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t}\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_code_addr_in_list_3_p_0(
  MR_Word ll_backend__rtti_out__CodeAddr_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
    }
    {
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__rtti_out__CodeAddr_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
  MR_Word ll_backend__rtti_out__TCName_6,
  MR_Word ll_backend__rtti_out__TCTypes_7,
  MR_Integer ll_backend__rtti_out__Ordinal_8,
  MR_Integer ll_backend__rtti_out__NumTypes_9,
  MR_Word * ll_backend__rtti_out__RttiId_10)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_11_11;

    {
      ll_backend__rtti_out__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_7));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 2) = ((MR_Box) (ll_backend__rtti_out__Ordinal_8));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 3) = ((MR_Box) (ll_backend__rtti_out__NumTypes_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__rtti_out__RttiId_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__rtti_out__V_11_11));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
  MR_Box * ll_backend__rtti_out__wrapper_arg_8)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv7_TCDeclSuperRttiId_14;
    MR_Word ll_backend__rtti_out__conv6_STATE_VARIABLE_Counter_25;
    MR_Word ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_27;

    {
      ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv7_TCDeclSuperRttiId_14, ((MR_Word) ll_backend__rtti_out__wrapper_arg_3), &ll_backend__rtti_out__conv6_STATE_VARIABLE_Counter_25, ((MR_Word) ll_backend__rtti_out__wrapper_arg_5), &ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_27);
    }
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv7_TCDeclSuperRttiId_14));
    *ll_backend__rtti_out__wrapper_arg_4 = ((MR_Box) (ll_backend__rtti_out__conv6_STATE_VARIABLE_Counter_25));
    *ll_backend__rtti_out__wrapper_arg_6 = ((MR_Box) (ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_27));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv4_RttiId_10;

    {
      ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_1), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv4_RttiId_10);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv4_RttiId_10));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv3_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv3_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14;

    {
      ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__Instance_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_28,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_94_94;
    MR_Word ll_backend__rtti_out__TypeInfo_95_95;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_96_96;
    MR_Word ll_backend__rtti_out__TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 0)));
    MR_Word ll_backend__rtti_out__TCTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 1)));
    MR_Integer ll_backend__rtti_out__NumTypeVars_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 3)));
    MR_Word ll_backend__rtti_out__TCTypeRttiDatas_16;
    MR_Word ll_backend__rtti_out__TCInstanceTypesRttiId_17;
    MR_Word ll_backend__rtti_out__TCInstanceConstraintsRttiId_18;
    MR_Word ll_backend__rtti_out__TCDeclRttiId_23;
    MR_Word ll_backend__rtti_out__TCInstanceRttiId_25;
    MR_Word ll_backend__rtti_out__V_32_32;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_33_33;
    MR_Word ll_backend__rtti_out__V_36_36;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37;
    MR_Word ll_backend__rtti_out__V_45_45;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_64_64;
    MR_Word ll_backend__rtti_out__V_66_66;
    MR_Integer ll_backend__rtti_out__V_77_77;
    MR_Word ll_backend__rtti_out___MethodProcLabels_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 4)));
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_33_33;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_34_34;
    MR_Integer ll_backend__rtti_out__V_24_24;

    {
      ll_backend__rtti_out__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
    }
    ll_backend__rtti_out__TypeCtorInfo_94_94 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
    ll_backend__rtti_out__TypeInfo_95_95 = (MR_Word) &ll_backend__rtti_out_scalar_common_1[1];
    ll_backend__rtti_out__TypeCtorInfo_96_96 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_94_94, ll_backend__rtti_out__TypeInfo_95_95, ll_backend__rtti_out__TypeCtorInfo_96_96, ll_backend__rtti_out__V_32_32, ll_backend__rtti_out__TCTypes_12, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_28)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_33_33, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_34_34);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_33_33 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_33_33);
    {
      ll_backend__rtti_out__TCTypeRttiDatas_16 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_94_94, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[10], ll_backend__rtti_out__TCTypes_12);
    }
    {
      ll_backend__rtti_out__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
    }
    {
      ll_backend__rtti_out__TCInstanceTypesRttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceTypesRttiId_17, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceTypesRttiId_17, 1) = ((MR_Box) (ll_backend__rtti_out__V_36_36));
    }
    {
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCInstanceTypesRttiId_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_33_33, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__TCTypeRttiDatas_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
    }
    {
      ll_backend__rtti_out__TCInstanceConstraintsRttiId_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceConstraintsRttiId_18, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceConstraintsRttiId_18, 1) = ((MR_Box) (ll_backend__rtti_out__V_45_45));
    }
    if ((ll_backend__rtti_out__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37;
    else
      {
        MR_Word ll_backend__rtti_out__ConstraintIds_21;
        MR_Word ll_backend__rtti_out__V_46_46;
        MR_Word ll_backend__rtti_out__V_47_47;
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48;
        MR_Word ll_backend__rtti_out__V_50_50;
        MR_Word ll_backend__rtti_out__V_22_22;
        MR_Box ll_backend__rtti_out__conv10_V_22_22;
        MR_Box ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_48_48;
        MR_Box ll_backend__rtti_out__conv8_STATE_VARIABLE_IO_49_49;

        {
          ll_backend__rtti_out__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 3) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 4) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
        }
        {
          ll_backend__rtti_out__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 4) = ((MR_Box) (ll_backend__rtti_out__V_50_50));
        }
        {
          ll_backend__rtti_out__V_47_47 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
        {
          mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, ll_backend__rtti_out__TypeInfo_95_95, ll_backend__rtti_out__TypeCtorInfo_96_96, ll_backend__rtti_out__V_46_46, ll_backend__rtti_out__Constraints_14, &ll_backend__rtti_out__ConstraintIds_21, ((MR_Box) (ll_backend__rtti_out__V_47_47)), &ll_backend__rtti_out__conv10_V_22_22, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37)), &ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_48_48, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv8_STATE_VARIABLE_IO_49_49);
        }
        ll_backend__rtti_out__V_22_22 = ((MR_Word) ll_backend__rtti_out__conv10_V_22_22);
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48 = ((MR_Word) ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_48_48);
        {
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCInstanceConstraintsRttiId_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0((MR_String) "(MR_TypeClassConstraint) ", ll_backend__rtti_out__ConstraintIds_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
      }
    {
      ll_backend__rtti_out__TCDeclRttiId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_23, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    {
      ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDeclRttiId_23, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_24_24, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_64_64);
    }
    {
      ll_backend__rtti_out__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
    }
    {
      ll_backend__rtti_out__TCInstanceRttiId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceRttiId_25, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceRttiId_25, 1) = ((MR_Box) (ll_backend__rtti_out__V_66_66));
    }
    {
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCInstanceRttiId_25, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_64_64, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    }
    {
      ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCDeclRttiId_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumTypeVars_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__V_77_77 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ll_backend__rtti_out__Constraints_14);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_77_77);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCInstanceTypesRttiId_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCInstanceConstraintsRttiId_18);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
  MR_Word ll_backend__rtti_out__TCName_5,
  MR_Integer ll_backend__rtti_out__Ordinal_6,
  MR_Integer ll_backend__rtti_out__NumTypes_7,
  MR_Word * ll_backend__rtti_out__RttiId_8)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__V_9_9;

    {
      ll_backend__rtti_out__V_9_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__V_9_9, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_6));
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__V_9_9, 1) = ((MR_Box) (ll_backend__rtti_out__NumTypes_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__rtti_out__RttiId_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__rtti_out__V_9_9));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(
  MR_Word ll_backend__rtti_out__MethodId_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_String ll_backend__rtti_out__MethodName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MethodId_4, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__MethodArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MethodId_4, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MethodId_4, (MR_Integer) 2)));

    {
      mercury__io__write_string_3_p_0((MR_String) "\t{ \"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__MethodName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__MethodArity_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      ll_backend__layout_out__output_pred_or_func_3_p_0(ll_backend__rtti_out__PredOrFunc_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(
  MR_String ll_backend__rtti_out__TVarName_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t\"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__TVarName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
  MR_Box * ll_backend__rtti_out__wrapper_arg_8)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv5_TCDeclSuperRttiId_14;
    MR_Word ll_backend__rtti_out__conv4_STATE_VARIABLE_Counter_25;
    MR_Word ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_27;

    {
      ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv5_TCDeclSuperRttiId_14, ((MR_Word) ll_backend__rtti_out__wrapper_arg_3), &ll_backend__rtti_out__conv4_STATE_VARIABLE_Counter_25, ((MR_Word) ll_backend__rtti_out__wrapper_arg_5), &ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_27);
    }
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv5_TCDeclSuperRttiId_14));
    *ll_backend__rtti_out__wrapper_arg_4 = ((MR_Box) (ll_backend__rtti_out__conv4_STATE_VARIABLE_Counter_25));
    *ll_backend__rtti_out__wrapper_arg_6 = ((MR_Box) (ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_27));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv2_RttiId_8;

    {
      ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_1), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv2_RttiId_8);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv2_RttiId_8));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(((MR_String) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__TCDecl_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TCId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_8, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__Version_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_8, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__Supers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_8, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_11, (MR_Integer) 0)));
    MR_Word ll_backend__rtti_out__TVarNames_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_11, (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__MethodIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_11, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__ModuleSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCName_14, (MR_Integer) 0)));
    MR_String ll_backend__rtti_out__ClassName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCName_14, (MR_Integer) 1)));
    MR_Integer ll_backend__rtti_out__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCName_14, (MR_Integer) 2)));
    MR_Word ll_backend__rtti_out__TCIdVarNamesRttiId_21;
    MR_Word ll_backend__rtti_out__TCIdMethodIdsRttiId_23;
    MR_Word ll_backend__rtti_out__TCIdRttiId_25;
    MR_Word ll_backend__rtti_out__TCDeclSupersRttiId_27;
    MR_Word ll_backend__rtti_out__TCDeclRttiId_29;
    MR_Integer ll_backend__rtti_out__NumTVarNames_34;
    MR_Integer ll_backend__rtti_out__NumMethodIds_35;
    MR_Integer ll_backend__rtti_out__NumSupers_44;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67;
    MR_String ll_backend__rtti_out__V_71_71;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103;

    {
      ll_backend__rtti_out__TCIdVarNamesRttiId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdVarNamesRttiId_21, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdVarNamesRttiId_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    {
      ll_backend__rtti_out__TCIdMethodIdsRttiId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdMethodIdsRttiId_23, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdMethodIdsRttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ll_backend__rtti_out__TCIdRttiId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdRttiId_25, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdRttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__rtti_out__TCDeclSupersRttiId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclSupersRttiId_27, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclSupersRttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    {
      ll_backend__rtti_out__TCDeclRttiId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_29, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    if ((ll_backend__rtti_out__TVarNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47;
    else
      {
        MR_Box ll_backend__rtti_out__conv0_STATE_VARIABLE_IO_56_56;

        {
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCIdVarNamesRttiId_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[8], ll_backend__rtti_out__TVarNames_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv0_STATE_VARIABLE_IO_56_56);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
      }
    if ((ll_backend__rtti_out__MethodIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51;
    else
      {
        MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_64_64;

        {
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCIdMethodIdsRttiId_23, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[9], ll_backend__rtti_out__MethodIds_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_64_64);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
      }
    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TVarNames_15, &ll_backend__rtti_out__NumTVarNames_34);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ll_backend__rtti_out__MethodIds_16, &ll_backend__rtti_out__NumMethodIds_35);
    }
    {
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCIdRttiId_25, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
    {
      ll_backend__rtti_out__V_71_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__rtti_out__ModuleSymName_17);
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__V_71_71);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t\"");
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__ClassName_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumTVarNames_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumMethodIds_35);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__TVarNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCIdVarNamesRttiId_21);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__MethodIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCIdMethodIdsRttiId_23);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
    if ((ll_backend__rtti_out__Supers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67;
    else
      {
        MR_Word ll_backend__rtti_out__SuperIds_42;
        MR_Word ll_backend__rtti_out__V_97_97;
        MR_Word ll_backend__rtti_out__V_98_98;
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99;
        MR_Word ll_backend__rtti_out__V_101_101;
        MR_Word ll_backend__rtti_out__V_43_43;
        MR_Box ll_backend__rtti_out__conv8_V_43_43;
        MR_Box ll_backend__rtti_out__conv7_STATE_VARIABLE_DeclSet_99_99;
        MR_Box ll_backend__rtti_out__conv6_STATE_VARIABLE_IO_100_100;

        {
          ll_backend__rtti_out__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 3) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
        }
        {
          ll_backend__rtti_out__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 4) = ((MR_Box) (ll_backend__rtti_out__V_101_101));
        }
        {
          ll_backend__rtti_out__V_98_98 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
        {
          mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_97_97, ll_backend__rtti_out__Supers_13, &ll_backend__rtti_out__SuperIds_42, ((MR_Box) (ll_backend__rtti_out__V_98_98)), &ll_backend__rtti_out__conv8_V_43_43, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67)), &ll_backend__rtti_out__conv7_STATE_VARIABLE_DeclSet_99_99, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv6_STATE_VARIABLE_IO_100_100);
        }
        ll_backend__rtti_out__V_43_43 = ((MR_Word) ll_backend__rtti_out__conv8_V_43_43);
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99 = ((MR_Word) ll_backend__rtti_out__conv7_STATE_VARIABLE_DeclSet_99_99);
        {
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDeclSupersRttiId_27, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0((MR_String) "(MR_TypeClassConstraint) ", ll_backend__rtti_out__SuperIds_42);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
      }
    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ll_backend__rtti_out__Supers_13, &ll_backend__rtti_out__NumSupers_44);
    }
    {
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDeclRttiId_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    }
    {
      ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCIdRttiId_25);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Version_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumSupers_44);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__rtti_out__Supers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCDeclSupersRttiId_27);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      ll_backend__rtti_out__output_static_code_addr_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__rtti_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv1_HeadVar__4_4;

    {
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv1_HeadVar__4_4);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(
  MR_Word ll_backend__rtti_out__Info_10,
  MR_Word ll_backend__rtti_out__TCName_11,
  MR_Word ll_backend__rtti_out__InstanceModuleName_12,
  MR_String ll_backend__rtti_out__InstanceString_13,
  MR_Word ll_backend__rtti_out__BaseTypeClassInfo_14,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_25,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_58_58 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0;
    MR_Integer ll_backend__rtti_out__N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 0)));
    MR_Integer ll_backend__rtti_out__N2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 1)));
    MR_Integer ll_backend__rtti_out__N3_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 2)));
    MR_Integer ll_backend__rtti_out__N4_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 3)));
    MR_Integer ll_backend__rtti_out__N5_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 4)));
    MR_Word ll_backend__rtti_out__Methods_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 5)));
    MR_Word ll_backend__rtti_out__CodeAddrs_23;
    MR_Word ll_backend__rtti_out__RttiId_24;
    MR_Word ll_backend__rtti_out__V_30_30;
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31;
    MR_Word ll_backend__rtti_out__V_35_35;
    MR_Word ll_backend__rtti_out__V_41_41;
    MR_Word ll_backend__rtti_out__V_45_45;
    MR_Word ll_backend__rtti_out__V_46_46;
    MR_Word ll_backend__rtti_out__V_47_47;
    MR_Word ll_backend__rtti_out__V_48_48;
    MR_Box ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_31_31;
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_IO_32_32;

    {
      ll_backend__rtti_out__CodeAddrs_23 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ll_backend__rtti_out__TypeCtorInfo_58_58, (MR_Word) &ll_backend__rtti_out_scalar_common_2[5], ll_backend__rtti_out__Methods_22);
    }
    {
      ll_backend__rtti_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 1) = ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 3) = ((MR_Box) (ll_backend__rtti_out__Info_10));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_58_58, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_30_30, ll_backend__rtti_out__CodeAddrs_23, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_25)), &ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_31_31, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_IO_32_32);
    }
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31 = ((MR_Word) ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_31_31);
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__rtti_out__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_35_35, 0) = ((MR_Box) (ll_backend__rtti_out__InstanceModuleName_12));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_35_35, 1) = ((MR_Box) (ll_backend__rtti_out__InstanceString_13));
    }
    {
      ll_backend__rtti_out__RttiId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_24, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_24, 1) = ((MR_Box) (ll_backend__rtti_out__V_35_35));
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_10, ll_backend__rtti_out__RttiId_24, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t(MR_Code *) ");
    }
    {
      ll_backend__rtti_out__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_48_48, 0) = ((MR_Box) (ll_backend__rtti_out__N5_21));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (ll_backend__rtti_out__N4_20));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_48_48));
    }
    {
      ll_backend__rtti_out__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (ll_backend__rtti_out__N3_19));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__V_47_47));
    }
    {
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (ll_backend__rtti_out__N2_18));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__V_46_46));
    }
    {
      ll_backend__rtti_out__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_41_41, 0) = ((MR_Box) (ll_backend__rtti_out__N1_17));
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_41_41, 1) = ((MR_Box) (ll_backend__rtti_out__V_45_45));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__V_41_41, (MR_String) ",\n\t(MR_Code *) ", (MR_Word) &ll_backend__rtti_out_scalar_common_2[6]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      mercury__io__write_list_5_p_0(ll_backend__rtti_out__TypeCtorInfo_58_58, ll_backend__rtti_out__CodeAddrs_23, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[7]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
  }
}

MR_String MR_CALL 
ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(
  MR_Word ll_backend__rtti_out__ProcLabel_4,
  MR_Word ll_backend__rtti_out__Id_5)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_String ll_backend__rtti_out__HeadVar__3_3;
    MR_String ll_backend__rtti_out__V_6_6;
    MR_String ll_backend__rtti_out__V_7_7;
    MR_String ll_backend__rtti_out__V_9_9;
    MR_String ll_backend__rtti_out__V_10_10;
    MR_String ll_backend__rtti_out__V_11_11;
    MR_String ll_backend__rtti_out__V_13_13;

    {
      ll_backend__rtti_out__V_6_6 = backend_libs__name_mangle__mercury_var_prefix_0_f_0();
    }
    {
      ll_backend__rtti_out__V_10_10 = backend_libs__rtti__tabling_info_id_str_1_f_0(ll_backend__rtti_out__Id_5);
    }
    {
      ll_backend__rtti_out__V_13_13 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__rtti_out__ProcLabel_4, (MR_Integer) 0);
    }
    {
      ll_backend__rtti_out__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__rtti_out__V_13_13);
    }
    {
      ll_backend__rtti_out__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__rtti_out__V_10_10, ll_backend__rtti_out__V_11_11);
    }
    {
      ll_backend__rtti_out__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "_proc", ll_backend__rtti_out__V_9_9);
    }
    {
      ll_backend__rtti_out__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__rtti_out__V_6_6, ll_backend__rtti_out__V_7_7);
    }
    return ll_backend__rtti_out__HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_5_p_0(
  MR_Word ll_backend__rtti_out__Info_6,
  MR_Word ll_backend__rtti_out__RttiId_7,
  MR_Word ll_backend__rtti_out__BeingDefined_8)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__DeclSet0_10;
    MR_Word ll_backend__rtti_out__V_11_11;

    {
      ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&ll_backend__rtti_out__DeclSet0_10);
    }
    {
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_6, ll_backend__rtti_out__RttiId_7, ll_backend__rtti_out__BeingDefined_8, ll_backend__rtti_out__DeclSet0_10, &ll_backend__rtti_out__V_11_11);
    }
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(
  MR_Word ll_backend__rtti_out__Info_8,
  MR_Word ll_backend__rtti_out__RttiId_9,
  MR_Word ll_backend__rtti_out__BeingDefined_10,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__Linkage_13;
    MR_String ll_backend__rtti_out__LinkageStr_14;
    MR_Word ll_backend__rtti_out__Globals_15;
    MR_Word ll_backend__rtti_out__InclCodeAddr_16;
    MR_String ll_backend__rtti_out__CType_17;
    MR_Word ll_backend__rtti_out__IsArray_18;
    MR_String ll_backend__rtti_out__V_26_26;
    MR_Word ll_backend__rtti_out__IsArray_57;
    MR_String ll_backend__rtti_out__Str_63;
    MR_String ll_backend__rtti_out__V_64_64;
    MR_Word ll_backend__rtti_out__V_34_34;
    MR_String ll_backend__rtti_out__V_35_35;
    MR_String ll_backend__rtti_out__V_36_36;
    MR_Word ll_backend__rtti_out__V_37_37;
    MR_Word ll_backend__rtti_out__V_38_38;
    MR_Word ll_backend__rtti_out__V_39_39;
    MR_Word ll_backend__rtti_out__V_40_40;
    MR_Word ll_backend__rtti_out__V_41_41;
    MR_Word ll_backend__rtti_out__V_42_42;
    MR_Word ll_backend__rtti_out__V_43_43;
    MR_Word ll_backend__rtti_out__V_44_44;
    MR_Word ll_backend__rtti_out__V_45_45;
    MR_Word ll_backend__rtti_out__V_46_46;
    MR_Word ll_backend__rtti_out__V_47_47;
    MR_Word ll_backend__rtti_out__V_48_48;
    MR_Word ll_backend__rtti_out__V_49_49;
    MR_Word ll_backend__rtti_out__V_50_50;
    MR_Word ll_backend__rtti_out__V_51_51;
    MR_Word ll_backend__rtti_out__V_52_52;
    MR_Word ll_backend__rtti_out__V_53_53;
    MR_Word ll_backend__rtti_out__V_54_54;

    {
      ll_backend__rtti_out__output_rtti_type_decl_5_p_0(ll_backend__rtti_out__RttiId_9, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);
    }
    {
      ll_backend__rtti_out__IsArray_57 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_9);
    }
    switch (ll_backend__rtti_out__IsArray_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__rtti_out__Linkage_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__Exported_58;

          {
            ll_backend__rtti_out__Exported_58 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ll_backend__rtti_out__RttiId_9);
          }
          switch (ll_backend__rtti_out__Exported_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__rtti_out__Linkage_13 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              ll_backend__rtti_out__Linkage_13 = (MR_Integer) 0;
              break;
          }
        }
        break;
    }
    {
      ll_backend__rtti_out__LinkageStr_14 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(ll_backend__rtti_out__Linkage_13, ll_backend__rtti_out__BeingDefined_10);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__LinkageStr_14);
    }
    ll_backend__rtti_out__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 0)));
    ll_backend__rtti_out__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 1)));
    ll_backend__rtti_out__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 2)));
    ll_backend__rtti_out__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 3)));
    ll_backend__rtti_out__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 4)));
    ll_backend__rtti_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 5)));
    ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 6)));
    ll_backend__rtti_out__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__rtti_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__rtti_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__rtti_out__Globals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 8)));
    {
      ll_backend__rtti_out__InclCodeAddr_16 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(ll_backend__rtti_out__RttiId_9);
    }
    {
      ll_backend__rtti_out__V_26_26 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(ll_backend__rtti_out__Globals_15, ll_backend__rtti_out__InclCodeAddr_16);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_26_26);
    }
    {
      backend_libs__rtti__rtti_id_c_type_3_p_0(ll_backend__rtti_out__RttiId_9, &ll_backend__rtti_out__CType_17, &ll_backend__rtti_out__IsArray_18);
    }
    {
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__rtti_out__CType_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      ll_backend__rtti_out__V_64_64 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_64_64);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_9, &ll_backend__rtti_out__Str_63);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_63);
    }
    switch (ll_backend__rtti_out__IsArray_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "[]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_3_p_0(
  MR_Word ll_backend__rtti_out__RttiId_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_String ll_backend__rtti_out__Str_6;
    MR_String ll_backend__rtti_out__V_9_9;

    {
      ll_backend__rtti_out__V_9_9 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_9_9);
    }
    {
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_4, &ll_backend__rtti_out__Str_6);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_6);
    }
  }
}

void MR_CALL 
ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(
  MR_Word ll_backend__rtti_out__Data_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__Data_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__rtti_out__TypeCtorData_6 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 0);
          MR_Word ll_backend__rtti_out__RttiTypeCtor_7;
          MR_Word ll_backend__rtti_out__RttiId_8;
          MR_String ll_backend__rtti_out__Str_76;
          MR_String ll_backend__rtti_out__V_77_77;

          {
            ll_backend__rtti_out__RttiTypeCtor_7 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(ll_backend__rtti_out__TypeCtorData_6);
          }
          {
            ll_backend__rtti_out__RttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_8, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_7));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_ctor_info(\n\t\t&");
          }
          {
            ll_backend__rtti_out__V_77_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_77_77);
          }
          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_8, &ll_backend__rtti_out__Str_76);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_76);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__TCDecl_9 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 1);
          MR_Word ll_backend__rtti_out__TCId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_9, (MR_Integer) 0)));
          MR_Word ll_backend__rtti_out__TCName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_10, (MR_Integer) 0)));
          MR_Word ll_backend__rtti_out__RttiId_53;
          MR_String ll_backend__rtti_out__Str_60;
          MR_String ll_backend__rtti_out__V_61_61;
          MR_Integer ll_backend__rtti_out__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_9, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_9, (MR_Integer) 2)));
          MR_Word ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_10, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_10, (MR_Integer) 2)));

          {
            ll_backend__rtti_out__RttiId_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_53, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_13));
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_class_decl(\n\t\t&");
          }
          {
            ll_backend__rtti_out__V_61_61 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_61_61);
          }
          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_53, &ll_backend__rtti_out__Str_60);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_60);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__rtti_out__TCInstance_16 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 2);
          MR_Word ll_backend__rtti_out__TCTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 1)));
          MR_Word ll_backend__rtti_out__V_29_29;
          MR_Word ll_backend__rtti_out__RttiId_54;
          MR_Word ll_backend__rtti_out__TCName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 0)));
          MR_String ll_backend__rtti_out__Str_68;
          MR_String ll_backend__rtti_out__V_69_69;
          MR_Integer ll_backend__rtti_out__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 2)));
          MR_Word ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 3)));
          MR_Word ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 4)));

          {
            ll_backend__rtti_out__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_29_29, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_17));
          }
          {
            ll_backend__rtti_out__RttiId_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_54, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_55));
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_54, 1) = ((MR_Box) (ll_backend__rtti_out__V_29_29));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_class_instance(\n\t\t&");
          }
          {
            ll_backend__rtti_out__V_69_69 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_69_69);
          }
          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_54, &ll_backend__rtti_out__Str_68);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_68);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 0)))) {
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
}

static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

    {
      ll_backend__rtti_out__conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
    return ll_backend__rtti_out__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(
  MR_Word ll_backend__rtti_out__Data_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__Data_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__rtti_out__TypeCtorData_6 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 0);
          MR_Word ll_backend__rtti_out__RttiTypeCtor_7;
          MR_Word ll_backend__rtti_out__ModuleName_8;
          MR_String ll_backend__rtti_out__TypeName_9;
          MR_Integer ll_backend__rtti_out__Arity_10;
          MR_String ll_backend__rtti_out__ModuleNameString_11;
          MR_String ll_backend__rtti_out__UnderscoresModule_12;
          MR_String ll_backend__rtti_out__MangledTypeName_14;
          MR_Word ll_backend__rtti_out__V_70_70;
          MR_String ll_backend__rtti_out__Str_76;
          MR_String ll_backend__rtti_out__V_77_77;
          MR_String ll_backend__rtti_out__V_13_13;

          {
            ll_backend__rtti_out__RttiTypeCtor_7 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(ll_backend__rtti_out__TypeCtorData_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_TYPE_CTOR_INFO(\n\t\t");
          }
          {
            ll_backend__rtti_out__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_70_70, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_7));
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            ll_backend__rtti_out__V_77_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_77_77);
          }
          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_70_70, &ll_backend__rtti_out__Str_76);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_76);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
          ll_backend__rtti_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiTypeCtor_7, (MR_Integer) 0)));
          ll_backend__rtti_out__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiTypeCtor_7, (MR_Integer) 1)));
          ll_backend__rtti_out__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiTypeCtor_7, (MR_Integer) 2)));
          {
            ll_backend__rtti_out__ModuleNameString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__rtti_out__ModuleName_8);
          }
          {
            mercury__string__append_3_p_2(ll_backend__rtti_out__ModuleNameString_11, (MR_String) "__", &ll_backend__rtti_out__UnderscoresModule_12);
          }
          {
            ll_backend__rtti_out__succeeded = mercury__string__append_3_p_1(ll_backend__rtti_out__UnderscoresModule_12, &ll_backend__rtti_out__V_13_13, ll_backend__rtti_out__TypeName_9);
          }
          if (ll_backend__rtti_out__succeeded)
            {
            }
          else
            {
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__UnderscoresModule_12);
            }
          {
            ll_backend__rtti_out__MangledTypeName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__rtti_out__TypeName_9);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__MangledTypeName_14);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_");
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_0);\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "#error \"type_class_instance not yet supported without static code addresses\"\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 0)))) {
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
              MR_Word ll_backend__rtti_out__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 1)));
              MR_String ll_backend__rtti_out__ClassArity_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 3)));
              MR_Word ll_backend__rtti_out__Methods_23;
              MR_Word ll_backend__rtti_out__CodeAddrs_25;
              MR_Word ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 4)));
              MR_Word ll_backend__rtti_out___ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 2)));
              MR_Integer ll_backend__rtti_out___N1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 0)));
              MR_Integer ll_backend__rtti_out___N2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 1)));
              MR_Integer ll_backend__rtti_out___N3_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 2)));
              MR_Integer ll_backend__rtti_out___N4_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 3)));
              MR_Integer ll_backend__rtti_out___N5_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 4)));

              ll_backend__rtti_out__Methods_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 5)));
              {
                mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
              }
              {
                ll_backend__rtti_out__CodeAddrs_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[4], ll_backend__rtti_out__Methods_23);
              }
              {
                ll_backend__rtti_out__output_init_method_pointers_6_p_0((MR_Integer) 5, ll_backend__rtti_out__CodeAddrs_25, ll_backend__rtti_out__TCName_15, ll_backend__rtti_out__ClassArity_17);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__RttiDefn_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__rtti_out__RttiDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__rtti_out__TypeCtorData_13 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__RttiDefn_8), (MR_Integer) 0);

          {
            ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorData_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__rtti_out__TCDecl_18 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__RttiDefn_8), (MR_Integer) 1);

          {
            ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDecl_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__rtti_out__InstanceDecl_19 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__RttiDefn_8), (MR_Integer) 2);

          {
            ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__InstanceDecl_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__rtti_out__TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 1)));

              {
                ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__rtti_out__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 1)));

              {
                ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__rtti_out__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 1)));
              MR_Word ll_backend__rtti_out__InstanceModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 2)));
              MR_String ll_backend__rtti_out__InstanceString_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 3)));
              MR_Word ll_backend__rtti_out__BaseTypeClassInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 4)));

              {
                ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCName_14, ll_backend__rtti_out__InstanceModuleName_15, ll_backend__rtti_out__InstanceString_16, ll_backend__rtti_out__BaseTypeClassInfo_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__RttiData_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ll_backend__rtti_out__V_17_17;
    MR_Integer ll_backend__rtti_out__V_11_11;

    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_8, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_17_17)) == (MR_mktag((MR_Integer) 3)));
        if (ll_backend__rtti_out__succeeded)
          ll_backend__rtti_out__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, (MR_Integer) 0)));
      }
    if (ll_backend__rtti_out__succeeded)
      *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
    else
      {
        MR_Word ll_backend__rtti_out__RttiId_12;
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_29;
        MR_Word ll_backend__rtti_out__V_33_33;

        {
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_8, &ll_backend__rtti_out__RttiId_12);
        }
        {
          ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__RttiId_12, (MR_Integer) 0, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        {
          ll_backend__rtti_out__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_12));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_33_33, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
        }
      }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1(
  MR_Box ll_backend__rtti_out__closure_arg,
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_15;

    {
      ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_15);
    }
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_15));
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(
  MR_Word ll_backend__rtti_out__Info_7,
  MR_Word ll_backend__rtti_out__RttiDatas_8,
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0;
    MR_Word ll_backend__rtti_out__TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
    MR_Word ll_backend__rtti_out__GroupMap_11;
    MR_Word ll_backend__rtti_out__GroupList_12;
    MR_Word ll_backend__rtti_out__V_17_17;
    MR_Word ll_backend__rtti_out__V_18_18;
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14;
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_16;

    {
      ll_backend__rtti_out__V_17_17 = mercury__multi_map__init_0_f_0(ll_backend__rtti_out__TypeCtorInfo_21_21, ll_backend__rtti_out__TypeCtorInfo_22_22);
    }
    {
      ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(ll_backend__rtti_out__RttiDatas_8, ll_backend__rtti_out__V_17_17, &ll_backend__rtti_out__GroupMap_11);
    }
    {
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__rtti_out__TypeCtorInfo_21_21, ll_backend__rtti_out__TypeCtorInfo_22_22, ll_backend__rtti_out__GroupMap_11, &ll_backend__rtti_out__GroupList_12);
    }
    {
      ll_backend__rtti_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_2[0], (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__GroupList_12, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_16);
    }
    *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14);
  }
}

void MR_CALL 
ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(
  MR_Word ll_backend__rtti_out__RttiData_4)
{
  {
    MR_bool ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Integer ll_backend__rtti_out__VarNum_6;
    MR_Word ll_backend__rtti_out__V_10_10;

    if (ll_backend__rtti_out__succeeded)
      {
        ll_backend__rtti_out__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_4, (MR_Integer) 1)));
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_10_10)) == (MR_mktag((MR_Integer) 3)));
        if (ll_backend__rtti_out__succeeded)
          ll_backend__rtti_out__VarNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_10_10, (MR_Integer) 0)));
      }
    if (ll_backend__rtti_out__succeeded)
      {
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_6);
      }
    else
      {
        MR_Word ll_backend__rtti_out__RttiId_7;
        MR_Integer ll_backend__rtti_out__VarNum_18;
        MR_Word ll_backend__rtti_out__V_20_20;
        MR_Word ll_backend__rtti_out__V_21_21;
        MR_Word ll_backend__rtti_out__V_17_17;

        {
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_4, &ll_backend__rtti_out__RttiId_7);
        }
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_7)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__rtti_out__succeeded)
          {
            ll_backend__rtti_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_7, (MR_Integer) 0)));
            ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_7, (MR_Integer) 1)));
            ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (ll_backend__rtti_out__succeeded)
              {
                ll_backend__rtti_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 1)));
                ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_21_21)) == (MR_mktag((MR_Integer) 3)));
                if (ll_backend__rtti_out__succeeded)
                  ll_backend__rtti_out__VarNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_21_21, (MR_Integer) 0)));
              }
          }
        if (ll_backend__rtti_out__succeeded)
          {
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_18);
          }
        else
          {
            MR_Word ll_backend__rtti_out__IsArray_19;

            {
              ll_backend__rtti_out__IsArray_19 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_7);
            }
            switch (ll_backend__rtti_out__IsArray_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ll_backend__rtti_out__Str_31;
                  MR_String ll_backend__rtti_out__V_32_32;

                  {
                    ll_backend__rtti_out__V_32_32 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_32_32);
                  }
                  {
                    backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_7, &ll_backend__rtti_out__Str_31);
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_31);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ll_backend__rtti_out__Str_39;
                  MR_String ll_backend__rtti_out__V_40_40;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "&");
                  }
                  {
                    ll_backend__rtti_out__V_40_40 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_40_40);
                  }
                  {
                    backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_7, &ll_backend__rtti_out__Str_39);
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_39);
                  }
                }
                break;
            }
          }
      }
  }
}

void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(
  MR_String ll_backend__rtti_out__Cast_5,
  MR_Word ll_backend__rtti_out__RttiData_6)
{
  {
    MR_bool ll_backend__rtti_out__succeeded;

    {
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Cast_5);
    }
    {
      ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(ll_backend__rtti_out__RttiData_6);
    }
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
