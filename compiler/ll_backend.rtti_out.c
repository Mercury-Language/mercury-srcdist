/*
** Automatically generated from `rtti_out.m'
** by the Mercury compiler,
** version rotd-2024-09-30
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


// :- module ll_backend.rtti_out.
// :- implementation.

/*
INIT mercury__ll_backend__rtti_out__init
ENDINIT
*/

#include "ll_backend.rtti_out.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
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
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_file.mih"
#include "ll_backend.llds_out.llds_out_util.mih"



struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s {
  MR_bool ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__succeeded;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__MaybeArgNames_23;
  jmp_buf ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__commit_0;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__TypeCtorInfo_139_139;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__Var_51;
  MR_Word ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__Var_138;
  MR_Box ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__conv2_Var_138;
};

struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s {
  MR_Word ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfos_15;
  MR_bool ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded;
  jmp_buf ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__commit_0;
  MR_Word ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__Width_22;
  MR_Word ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfo_38;
  MR_Box ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__conv0_ArgInfo_38;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint16_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3];

static const MR_ConstString ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0[3];

static const MR_DuArgLocn ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0[3];

static const MR_DuFunctorDesc ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0;

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1];

static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1];

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1];

static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1];

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1535__1_2_p_0(
  MR_Word HeadVar__1_35,
  MR_Word * HeadVar__2_36);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1345__1_1_p_0(
  MR_Word MaybeNames_14);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1330__1_1_p_0(
  MR_Word ArgTypes_14);

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__918__1_2_p_0(
  MR_Word Lang_28,
  MR_Word HeadVar__2_66);

static MR_String MR_CALL 
ll_backend__rtti_out__IntroducedFrom__func__output_base_typeclass_info_defn__311__1_1_f_0(
  MR_Integer LambdaHeadVar__1_46);

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
ll_backend__rtti_out__output_maybe_static_code_addr_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_2);

static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_4_p_0(
  MR_Word Locn_5,
  MR_Word Stream_6);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_4_p_0(
  MR_Word MaybeName_5,
  MR_Word Stream_6);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_value_4_p_0(
  uint32_t NumUint32_5,
  MR_Word Stream_6);

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  uint32_t Ordinal_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word DuFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_45,
  MR_Word * STATE_VARIABLE_DeclSet_46);

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  MR_Word RttiName_7,
  MR_Word Stream_8);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word RttiTypeCtor_13,
  uint32_t Ordinal_14,
  MR_Word ArgInfos_15,
  MR_Word * HaveArgLocns_16,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_loop_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word MaybeNames_14,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word ArgTypes_14,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word ExistInfo_14,
  MR_Word STATE_VARIABLE_DeclSet_0_26,
  MR_Word * STATE_VARIABLE_DeclSet_27);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0_2(
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
ll_backend__rtti_out__output_exist_constraints_data_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word Constraints_14,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word ForeignEnumFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word EnumFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word MaybePseudoTypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word MaybePseudoTypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word MakeRttiId_14,
  MR_Word Constraint_15,
  MR_Word * TCDeclSuperRttiId_16,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_DeclSet_0_28,
  MR_Word * STATE_VARIABLE_DeclSet_29);

static void MR_CALL 
ll_backend__rtti_out__output_code_addr_in_list_4_p_0(
  MR_Word Stream_5,
  MR_Word CodeAddr_6);

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
ll_backend__rtti_out__output_type_class_id_method_id_4_p_0(
  MR_Word Stream_5,
  MR_Word MethodId_6);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_4_p_0(
  MR_Word Stream_5,
  MR_String TVarName_6);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Group_11,
  MR_Word RttiIds_12,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_7_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_4,
  MR_Word * STATE_VARIABLE_DeclSet_5);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17);

static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_7_p_0(
  MR_Word Stream_1,
  MR_Integer FieldNum_2,
  MR_Word HeadVar__3_3,
  MR_Word TCName_4,
  MR_String InstanceStr_5);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TypeCtorData_10,
  MR_Word STATE_VARIABLE_DeclSet_0_43,
  MR_Word * STATE_VARIABLE_DeclSet_44);

static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_4_p_0(
  MR_Word CodeAddr_5,
  MR_Word Stream_6);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_5_p_0(
  MR_String Cast_6,
  MR_Word RttiId_7,
  MR_Word Stream_8);

static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
  MR_Word ProcLabel_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word RttiTypeCtor_14,
  MR_Word TypeCtorDetails_15,
  MR_Word * MaybeFunctorsName_16,
  MR_Word * MaybeLayoutName_17,
  MR_Word * HaveFunctorNumberMap_18,
  MR_Word STATE_VARIABLE_DeclSet_0_48,
  MR_Word * STATE_VARIABLE_DeclSet_49);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word RttiData_14,
  MR_String FirstIndent_15,
  MR_String LaterIndent_16,
  MR_Integer STATE_VARIABLE_N_0_22,
  MR_Integer * STATE_VARIABLE_N_23,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorNumberMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word PtagMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21);

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_6_p_0(
  MR_Word Stream_1,
  MR_Word RttiTypeCtor_2,
  MR_Word HeadVar__3_3,
  uint8_t LeastPtag_4);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word NameArityMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19);

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word NotagFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_26,
  MR_Word * STATE_VARIABLE_DeclSet_27);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word PseudoTypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_23,
  MR_Word * STATE_VARIABLE_DeclSet_24);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_5_p_0(
  MR_Word Stream_6,
  MR_Word RttiTypeCtor_7,
  MR_Word RttiName_8);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ArgRttiDatas_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_11_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_String FirstIndent_4,
  MR_String LaterIndent_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7,
  MR_Word STATE_VARIABLE_DeclSet_0_8,
  MR_Word * STATE_VARIABLE_DeclSet_9);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_4(
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
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instance_10,
  MR_Word STATE_VARIABLE_DeclSet_0_30,
  MR_Word * STATE_VARIABLE_DeclSet_31);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2,
  MR_Word Stream_3);

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word RttiId_14,
  MR_String FirstIndent_15,
  MR_String LaterIndent_16,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_4(
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
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TCDecl_10,
  MR_Word STATE_VARIABLE_DeclSet_0_49,
  MR_Word * STATE_VARIABLE_DeclSet_50);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2,
  MR_Word Stream_3);

static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word RttiId_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14);

static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word RttiId_8,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19);

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
ll_backend__rtti_out__output_rtti_data_decl_list_7_p_0_1(
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


static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_2[26][3];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_3[8][1];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_4[5][10];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_5[5][8];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_6[7][7];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_7[1][14];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_8[13][5];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_9[5][11];

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_10[5][4];




static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) (UINT32_C(0))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_2[26][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0)),
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint16_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[1])),
    ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[1])),
    ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[2])),
    ((MR_Box) (ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[2])),
    ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[3])),
    ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[3])),
    ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[4])),
    ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[5])),
    ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3])),
    ((MR_Box) (ll_backend__rtti_out__output_functor_number_map_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[8])),
    ((MR_Box) (ll_backend__rtti_out__output_rtti_data_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[9])),
    ((MR_Box) (ll_backend__rtti_out__output_rtti_data_defn_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[4])),
    ((MR_Box) (ll_backend__rtti_out__output_rtti_data_defn_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[8])),
    ((MR_Box) (ll_backend__rtti_out__init_rtti_data_if_nec_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[5])),
    ((MR_Box) (ll_backend__rtti_out__output_exist_info_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[10])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[6])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[11])),
    ((MR_Box) (ll_backend__rtti_out__output_du_functor_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[12])),
    ((MR_Box) (ll_backend__rtti_out__output_du_functor_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[5])),
    ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_3[8][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 28U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_4[5][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_5[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_6[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_7[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_8[13][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint16_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_9[5][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&ll_backend__rtti_out__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__rtti_out_scalar_common_10[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_PseudoTypeInfo) "))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[0])),
    ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_TypeClassConstraint) "))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1])),
    ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "(MR_PseudoTypeInfo) "))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0),
    (MR_PseudoTypeInfo) (&ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint16_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_is_array_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0)
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0 = {
  (MR_String) "data_group",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0,
  ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1] = { &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0 };

static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1] = { &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0 };

static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__rtti_out____Unify____data_group_0_0_10001)),
  ((MR_Box) (ll_backend__rtti_out____Compare____data_group_0_0_10001)),
  (MR_String) "ll_backend.rtti_out",
  (MR_String) "data_group",
  { ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0 },
  { ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0,

};

static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1535__1_2_p_0(
  MR_Word HeadVar__1_35,
  MR_Word * HeadVar__2_36)
{
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), HeadVar__1_35, HeadVar__2_36);
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1345__1_1_p_0(
  MR_Word MaybeNames_14)
{
  MR_bool succeeded;

  succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_1[1]), MaybeNames_14);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1330__1_1_p_0(
  MR_Word ArgTypes_14)
{
  MR_bool succeeded;

  succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0), ArgTypes_14);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__918__1_2_p_0(
  MR_Word Lang_28,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded = (Lang_28 == HeadVar__2_66);

  return succeeded;
}

static MR_String MR_CALL 
ll_backend__rtti_out__IntroducedFrom__func__output_base_typeclass_info_defn__311__1_1_f_0(
  MR_Integer LambdaHeadVar__1_46)
{
  MR_String LambdaHeadVar__2_47;
  MR_Word Var_49;
  MR_Word Var_50;

  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (LambdaHeadVar__1_46));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LambdaHeadVar__2_47 = mercury__string__format_2_f_0((MR_String) "\t(MR_Code *) %d,\n", Var_49);
  return LambdaHeadVar__2_47;
}

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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

static void MR_CALL 
ll_backend__rtti_out__output_maybe_static_code_addr_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_2, (MR_String) "NULL");
  else
  {
    MR_Word CodeAddr_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_2, (MR_String) "MR_MAYBE_STATIC_CODE(");
    ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_2, CodeAddr_5);
    mercury__io__write_string_4_p_0(Stream_2, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_4_p_0(
  MR_Word Locn_5,
  MR_Word Stream_6)
{
  if (((MR_tag((MR_Word) Locn_5)) == (MR_Integer) 0))
  {
    uint16_t SlotInCell_8 = ((uint16_t) (MR_Word) (MR_hl_field(0, Locn_5, (MR_Integer) 0)));
    int16_t Var_14;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "{ ");
    Var_14 = mercury__int16__cast_from_uint16_1_f_0(SlotInCell_8);
    mercury__io__write_int16_4_p_0(Stream_6, Var_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", -1 }");
  }
  else
  {
    uint16_t SlotInTci_9 = ((uint16_t) (MR_Word) (MR_hl_field(1, Locn_5, (MR_Integer) 1)));
    int16_t Var_20;
    int16_t Var_24;
    uint16_t SlotInCell_28 = ((uint16_t) (MR_Word) (MR_hl_field(1, Locn_5, (MR_Integer) 0)));

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "{ ");
    Var_20 = mercury__int16__cast_from_uint16_1_f_0(SlotInCell_28);
    mercury__io__write_int16_4_p_0(Stream_6, Var_20);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    Var_24 = mercury__int16__cast_from_uint16_1_f_0(SlotInTci_9);
    mercury__io__write_int16_4_p_0(Stream_6, Var_24);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " }");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_4_p_0(
  MR_Word MaybeName_5,
  MR_Word Stream_6)
{
  if ((MaybeName_5 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "NULL");
  else
  {
    MR_String Name_8 = ((MR_String) ((MR_hl_field(1, MaybeName_5, (MR_Integer) 0))));

    backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_6, Name_8);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_value_4_p_0(
  uint32_t NumUint32_5,
  MR_Word Stream_6)
{
  MR_Integer Num_8;

  Num_8 = mercury__uint32__cast_to_int_1_f_0(NumUint32_5);
  mercury__io__write_int_4_p_0(Stream_6, Num_8);
}

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  MR_Word Ptag_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word SectagTable_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word SectagMap_19 = ((MR_Word) ((MR_hl_field(0, SectagTable_13, (MR_Integer) 3))));
  MR_Word SectagFunctors_20;
  MR_Word FunctorNames_21;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_DeclSet_20_41;
  MR_Word Var_42;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), SectagMap_19, &SectagFunctors_20);
  FunctorNames_21 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[25]), SectagFunctors_20);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (Ptag_12));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (Var_30));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_27, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_22, &STATE_VARIABLE_DeclSet_20_41);
  {
    Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_42, 1) = ((MR_Box) (Var_27));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_42, STATE_VARIABLE_DeclSet_20_41, STATE_VARIABLE_DeclSet_23);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if (!((FunctorNames_21 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_45;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0_2));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (RttiTypeCtor_11));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_45, (MR_String) ",\n\t", FunctorNames_21, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  uint32_t Ordinal_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10)
{
  MR_Word RttiName_11;

  {
    RttiName_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, RttiName_11, 0) = ((MR_Box) (MR_Word) (Ordinal_7));
    MR_hl_field(2, RttiName_11, 1) = ((MR_Box) (TCNum_8));
    MR_hl_field(2, RttiName_11, 2) = ((MR_Box) (Arity_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *RttiId_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RttiTypeCtor_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (RttiName_11));
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_5(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__Var_138 = ((MR_Word) ((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__conv2_Var_138));
  ll_backend__rtti_out__output_du_functor_defn_8_p_0_4(env_ptr);
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__TypeCtorInfo_139_139 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
  (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__succeeded = ll_backend__rtti_out____Unify____maybe__maybe_1_2((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__TypeCtorInfo_139_139, (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__Var_51, (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__Var_138);
  if ((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__succeeded)
    ll_backend__rtti_out__output_du_functor_defn_8_p_0_3(env_ptr);
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0_6(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__commit_0) == 0)
    {
      {
        MR_String Var_25;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__Var_51 = base;
          MR_hl_field(1, base, 0) = NULL;
        }
        mercury__list__member_2_p_1((MR_Word) (&ll_backend__rtti_out_scalar_common_1[1]), &(env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__conv2_Var_138, (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__MaybeArgNames_23, ll_backend__rtti_out__output_du_functor_defn_8_p_0_5, env_ptr);
      }
      (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word DuFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_45,
  MR_Word * STATE_VARIABLE_DeclSet_46)
{
  struct ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0_s env;

  {
    MR_String FunctorName_15 = ((MR_String) ((MR_hl_field(0, DuFunctor_12, (MR_Integer) 0))));
    uint16_t OrigArity_16 = ((uint16_t) (MR_Word) (MR_hl_field(0, DuFunctor_12, (MR_Integer) 1)));
    uint32_t Ordinal_17 = ((uint32_t) (MR_Word) (MR_hl_field(0, DuFunctor_12, (MR_Integer) 2)));
    MR_Word Rep_18 = ((MR_Word) ((MR_hl_field(0, DuFunctor_12, (MR_Integer) 3))));
    MR_Word ArgInfos_19 = ((MR_Word) ((MR_hl_field(0, DuFunctor_12, (MR_Integer) 4))));
    MR_Word MaybeExistInfo_20 = ((MR_Word) ((MR_hl_field(0, DuFunctor_12, (MR_Integer) 5))));
    MR_Word FunctorSubtypeInfo_21 = ((MR_Unsigned) ((MR_hl_field(0, DuFunctor_12, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgTypes_22;
    MR_Word HaveArgNames_24;
    MR_Word HaveArgLocns_28;
    uint16_t ContainsVarBitVector_30;
    MR_Word Ptag_31;
    MR_Word SectagAndLocn_32;
    uint8_t PtagUint8_34;
    MR_String Locn_35;
    int32_t StagEncoding_36;
    uint8_t NumSectagBits_37;
    MR_String FunctorSubtypeInfoStr_44;
    MR_Word STATE_VARIABLE_DeclSet_52_52;
    MR_Word STATE_VARIABLE_DeclSet_54_54;
    MR_Word STATE_VARIABLE_DeclSet_56_56;
    MR_Word STATE_VARIABLE_DeclSet_58_58;
    MR_Word Var_60;
    MR_Word Var_63;
    int16_t Var_69;
    int32_t Var_91;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, DuFunctor_12, (MR_Integer) 6)));
    MR_Word Var_43;

    ArgTypes_22 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[23]), ArgInfos_19);
    (env).ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__MaybeArgNames_23 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_1[1]), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[24]), ArgInfos_19);
    if ((ArgInfos_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_DeclSet_52_52 = STATE_VARIABLE_DeclSet_0_45;
    else
      ll_backend__rtti_out__output_du_arg_types_9_p_0(Info_9, Stream_10, RttiTypeCtor_11, Ordinal_17, ArgTypes_22, STATE_VARIABLE_DeclSet_0_45, &STATE_VARIABLE_DeclSet_52_52);
    ll_backend__rtti_out__output_du_functor_defn_8_p_0_6(&env);
    if ((env).ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__succeeded)
    {
      HaveArgNames_24 = (MR_Integer) 1;
      ll_backend__rtti_out__output_du_arg_names_9_p_0(Info_9, Stream_10, RttiTypeCtor_11, Ordinal_17, (env).ll_backend__rtti_out__output_du_functor_defn_8_p_0_env_0__MaybeArgNames_23, STATE_VARIABLE_DeclSet_52_52, &STATE_VARIABLE_DeclSet_54_54);
    }
    else
    {
      HaveArgNames_24 = (MR_Integer) 0;
      STATE_VARIABLE_DeclSet_54_54 = STATE_VARIABLE_DeclSet_52_52;
    }
    ll_backend__rtti_out__output_du_arg_locns_10_p_0(Info_9, Stream_10, RttiTypeCtor_11, Ordinal_17, ArgInfos_19, &HaveArgLocns_28, STATE_VARIABLE_DeclSet_54_54, &STATE_VARIABLE_DeclSet_56_56);
    if ((MaybeExistInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_DeclSet_58_58 = STATE_VARIABLE_DeclSet_56_56;
    else
    {
      MR_Word ExistInfo_29 = ((MR_Word) ((MR_hl_field(1, MaybeExistInfo_20, (MR_Integer) 0))));

      ll_backend__rtti_out__output_exist_info_9_p_0(Info_9, Stream_10, RttiTypeCtor_11, Ordinal_17, ExistInfo_29, STATE_VARIABLE_DeclSet_56_56, &STATE_VARIABLE_DeclSet_58_58);
    }
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (MR_Word) (Ordinal_17));
    }
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_60, 0) = ((MR_Box) (RttiTypeCtor_11));
      MR_hl_field(0, Var_60, 1) = ((MR_Box) (Var_63));
    }
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_9, Stream_10, Var_60, STATE_VARIABLE_DeclSet_58_58, STATE_VARIABLE_DeclSet_46);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n\t");
    backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_10, FunctorName_15);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    Var_69 = mercury__int16__cast_from_uint16_1_f_0(OrigArity_16);
    mercury__io__write_int16_4_p_0(Stream_10, Var_69);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    ContainsVarBitVector_30 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ArgTypes_22);
    mercury__io__write_uint16_4_p_0(Stream_10, ContainsVarBitVector_30);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    if (((MR_tag((MR_Word) Rep_18)) == (MR_Integer) 1))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.rtti_out.output_du_functor_defn\'/8", (MR_String) "du_hl_rep");
        return;
      }
    else
    {
      Ptag_31 = ((MR_Word) ((MR_hl_field(0, Rep_18, (MR_Integer) 0))));
      SectagAndLocn_32 = ((MR_Word) ((MR_hl_field(0, Rep_18, (MR_Integer) 1))));
    }
    PtagUint8_34 = (uint8_t) (Ptag_31);
    switch (MR_tag((MR_Word) SectagAndLocn_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SectagAndLocn_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Locn_35 = (MR_String) "MR_SECTAG_NONE";
              StagEncoding_36 = INT32_C(-1);
              NumSectagBits_37 = UINT8_C(0);
            }
            break;
          case (MR_Integer) 1:
            {
              Locn_35 = (MR_String) "MR_SECTAG_NONE_DIRECT_ARG";
              StagEncoding_36 = INT32_C(-1);
              NumSectagBits_37 = UINT8_C(0);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned StagUint_38 = ((MR_Unsigned) ((MR_hl_field(1, SectagAndLocn_32, (MR_Integer) 0))));
          MR_Integer Var_78;

          Locn_35 = (MR_String) "MR_SECTAG_LOCAL_REST_OF_WORD";
          Var_78 = mercury__uint__cast_to_int_1_f_0(StagUint_38);
          StagEncoding_36 = mercury__int32__det_from_int_1_f_0(Var_78);
          NumSectagBits_37 = UINT8_C(0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_79;
          MR_Unsigned StagUint_127 = ((MR_Unsigned) ((MR_hl_field(2, SectagAndLocn_32, (MR_Integer) 0))));
          MR_Unsigned _Mask_39;

          NumSectagBits_37 = ((uint8_t) (MR_Word) (MR_hl_field(2, SectagAndLocn_32, (MR_Integer) 1)));
          _Mask_39 = ((MR_Unsigned) ((MR_hl_field(2, SectagAndLocn_32, (MR_Integer) 2))));
          Locn_35 = (MR_String) "MR_SECTAG_LOCAL_BITS";
          Var_79 = mercury__uint__cast_to_int_1_f_0(StagUint_127);
          StagEncoding_36 = mercury__int32__det_from_int_1_f_0(Var_79);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, SectagAndLocn_32, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_80;
              MR_Unsigned StagUint_128 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_32, (MR_Integer) 1))));

              Locn_35 = (MR_String) "MR_SECTAG_REMOTE_FULL_WORD";
              Var_80 = mercury__uint__cast_to_int_1_f_0(StagUint_128);
              StagEncoding_36 = mercury__int32__det_from_int_1_f_0(Var_80);
              NumSectagBits_37 = UINT8_C(0);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_81;
              MR_Unsigned StagUint_130 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_32, (MR_Integer) 1))));
              MR_Unsigned _Mask_129;

              NumSectagBits_37 = ((uint8_t) (MR_Word) (MR_hl_field(3, SectagAndLocn_32, (MR_Integer) 2)));
              _Mask_129 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_32, (MR_Integer) 3))));
              Locn_35 = (MR_String) "MR_SECTAG_REMOTE_BITS";
              Var_81 = mercury__uint__cast_to_int_1_f_0(StagUint_130);
              StagEncoding_36 = mercury__int32__det_from_int_1_f_0(Var_81);
            }
            break;
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_10, Locn_35);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    mercury__io__write_uint8_4_p_0(Stream_10, PtagUint8_34);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    mercury__io__write_int32_4_p_0(Stream_10, StagEncoding_36);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    Var_91 = mercury__int32__cast_from_uint32_1_f_0(Ordinal_17);
    mercury__io__write_int32_4_p_0(Stream_10, Var_91);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(MR_PseudoTypeInfo *) ");
    if ((ArgInfos_19 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "NULL");
    else
    {
      MR_Word Var_97;

      {
        Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_97, 1) = ((MR_Box) (MR_Word) (Ordinal_17));
      }
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(RttiTypeCtor_11, Var_97, Stream_10);
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    switch (HaveArgNames_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "NULL");
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_103;

          {
            Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_103, 1) = ((MR_Box) (MR_Word) (Ordinal_17));
          }
          ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(RttiTypeCtor_11, Var_103, Stream_10);
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    switch (HaveArgLocns_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "NULL");
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_109;

          {
            Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_109, 1) = ((MR_Box) (MR_Word) (Ordinal_17));
          }
          ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(RttiTypeCtor_11, Var_109, Stream_10);
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    if ((MaybeExistInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "NULL");
    else
    {
      MR_Word Var_115;

      {
        Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_115, 1) = ((MR_Box) (MR_Word) (Ordinal_17));
      }
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(RttiTypeCtor_11, Var_115, Stream_10);
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    backend_libs__rtti__functor_subtype_info_to_string_3_p_0(FunctorSubtypeInfo_21, &Var_43, &FunctorSubtypeInfoStr_44);
    mercury__io__write_string_4_p_0(Stream_10, FunctorSubtypeInfoStr_44);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
    mercury__io__write_uint8_4_p_0(Stream_10, NumSectagBits_37);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n");
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box ArgX1_5;

  if (succeeded)
  {
    ArgX1_5 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  MR_Word RttiName_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word Var_12;
  MR_Integer VarNum_14;
  MR_Word Var_16;
  MR_Word Var_17;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (RttiTypeCtor_6));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (RttiName_7));
  }
  succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 11)));
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3);
      if (succeeded)
        VarNum_14 = ((MR_Integer) ((MR_hl_field(3, Var_17, (MR_Integer) 0))));
    }
  }
  if (succeeded)
    mercury__io__write_int_4_p_0(Stream_8, VarNum_14);
  else
  {
    MR_Word IsArray_15;

    IsArray_15 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(Var_12);
    switch (IsArray_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Str_20;
          MR_String Var_21;

          backend_libs__rtti__id_to_c_identifier_2_p_0(Var_12, &Str_20);
          Var_21 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          mercury__io__write_string_4_p_0(Stream_8, Var_21);
          mercury__io__write_string_4_p_0(Stream_8, Str_20);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Str_23;
          MR_String Var_24;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          backend_libs__rtti__id_to_c_identifier_2_p_0(Var_12, &Str_23);
          Var_24 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          mercury__io__write_string_4_p_0(Stream_8, Var_24);
          mercury__io__write_string_4_p_0(Stream_8, Str_23);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfo_38 = ((MR_Word) ((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__conv0_ArgInfo_38));
  ll_backend__rtti_out__output_du_arg_locns_10_p_0_2(env_ptr);
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfo_38, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfo_38, (MR_Integer) 1))));
    MR_Word Var_23;
    MR_Word Var_24;

    (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__Width_22 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfo_38, (MR_Integer) 2))));
    (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__Width_22)) == (MR_Integer) 1);
    if ((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__Width_22, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__Width_22, (MR_Integer) 1))));
    }
    (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded = !((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded);
    if ((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded)
      ll_backend__rtti_out__output_du_arg_locns_10_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s * env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), &(env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__conv0_ArgInfo_38, (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfos_15, ll_backend__rtti_out__output_du_arg_locns_10_p_0_3, env_ptr);
      (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word RttiTypeCtor_13,
  uint32_t Ordinal_14,
  MR_Word ArgInfos_15,
  MR_Word * HaveArgLocns_16,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26)
{
  struct ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0_s env;

  (env).ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfos_15 = ArgInfos_15;
  ll_backend__rtti_out__output_du_arg_locns_10_p_0_4(&env);
  if ((env).ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__succeeded)
  {
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_DeclSet_20_43;
    MR_Word Var_44;

    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (MR_Word) (Ordinal_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (RttiTypeCtor_13));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (Var_32));
    }
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_11, Stream_12, Var_29, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_25, &STATE_VARIABLE_DeclSet_20_43);
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (Var_29));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_44, STATE_VARIABLE_DeclSet_20_43, STATE_VARIABLE_DeclSet_26);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " = {\n");
    ll_backend__rtti_out__output_du_arg_locns_loop_4_p_0(Stream_12, (env).ll_backend__rtti_out__output_du_arg_locns_10_p_0_env_0__ArgInfos_15);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "};\n");
    *HaveArgLocns_16 = (MR_Integer) 1;
  }
  else
  {
    *HaveArgLocns_16 = (MR_Integer) 0;
    *STATE_VARIABLE_DeclSet_26 = STATE_VARIABLE_DeclSet_0_25;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_loop_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgInfo_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgInfos_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgWidth_13 = ((MR_Word) ((MR_hl_field(0, ArgInfo_10, (MR_Integer) 2))));
      MR_Integer ArgOnlyOffset_14;
      MR_Integer Shift_16;
      MR_Integer NumBits_17;
      MR_String Var_56;
      MR_String Var_66;
      MR_String Var_76;
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) ArgWidth_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArgOnlyOffset_14 = (MR_Integer) -1;
            Shift_16 = (MR_Integer) 0;
            NumBits_17 = (MR_Integer) -10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, ArgWidth_13, (MR_Integer) 0))));

            ArgOnlyOffset_14 = (MR_Integer) (Var_27);
            Shift_16 = (MR_Integer) 0;
            NumBits_17 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DoubleWordKind_18 = ((MR_Unsigned) ((MR_hl_field(2, ArgWidth_13, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(2, ArgWidth_13, (MR_Integer) 0))));

            ArgOnlyOffset_14 = (MR_Integer) (Var_28);
            Shift_16 = (MR_Integer) 0;
            switch (DoubleWordKind_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                NumBits_17 = (MR_Integer) -1;
                break;
              case (MR_Integer) 1:
                NumBits_17 = (MR_Integer) -2;
                break;
              case (MR_Integer) 2:
                NumBits_17 = (MR_Integer) -3;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer NumBits0_20;
                MR_Word Fill_22 = ((MR_Unsigned) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 1))));
                MR_Word Var_30 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 3))));
                MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 4))));

                ArgOnlyOffset_14 = (MR_Integer) (Var_29);
                Shift_16 = (MR_Integer) (Var_30);
                NumBits0_20 = (MR_Integer) (Var_31);
                switch (Fill_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 7:
                  case (MR_Integer) 0:
                    NumBits_17 = NumBits0_20;
                    break;
                  case (MR_Integer) 2:
                    NumBits_17 = (MR_Integer) -6;
                    break;
                  case (MR_Integer) 3:
                    NumBits_17 = (MR_Integer) -8;
                    break;
                  case (MR_Integer) 1:
                    NumBits_17 = (MR_Integer) -4;
                    break;
                  case (MR_Integer) 5:
                    NumBits_17 = (MR_Integer) -7;
                    break;
                  case (MR_Integer) 6:
                    NumBits_17 = (MR_Integer) -9;
                    break;
                  case (MR_Integer) 4:
                    NumBits_17 = (MR_Integer) -5;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_32 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 1))));
                MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 3))));
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 4))));
                MR_Integer NumBits0_51;
                MR_Word Fill_52 = ((MR_Unsigned) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);

                ArgOnlyOffset_14 = (MR_Integer) (Var_32);
                Shift_16 = (MR_Integer) (Var_33);
                NumBits0_51 = (MR_Integer) (Var_34);
                switch (Fill_52) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 7:
                  case (MR_Integer) 0:
                    NumBits_17 = NumBits0_51;
                    break;
                  case (MR_Integer) 2:
                    NumBits_17 = (MR_Integer) -6;
                    break;
                  case (MR_Integer) 3:
                    NumBits_17 = (MR_Integer) -8;
                    break;
                  case (MR_Integer) 1:
                    NumBits_17 = (MR_Integer) -4;
                    break;
                  case (MR_Integer) 5:
                    NumBits_17 = (MR_Integer) -7;
                    break;
                  case (MR_Integer) 6:
                    NumBits_17 = (MR_Integer) -9;
                    break;
                  case (MR_Integer) 4:
                    NumBits_17 = (MR_Integer) -5;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, ArgWidth_13, (MR_Integer) 1))));

                ArgOnlyOffset_14 = (MR_Integer) (Var_35);
                Shift_16 = (MR_Integer) 0;
                NumBits_17 = (MR_Integer) -10;
              }
              break;
          }
          break;
      }
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t{ ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), ArgOnlyOffset_14, &Var_56);
      mercury__io__write_string_4_p_0(Stream_1, Var_56);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Shift_16, &Var_66);
      mercury__io__write_string_4_p_0(Stream_1, Var_66);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), NumBits_17, &Var_76);
      mercury__io__write_string_4_p_0(Stream_1, Var_76);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " },\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArgInfos_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_maybe_quoted_string_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1345__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word MaybeNames_14,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_bool succeeded;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_DeclSet_20_35;
  MR_Word Var_36;

  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (RttiTypeCtor_12));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (Var_24));
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_10, Stream_11, Var_21, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_20_35);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_21));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_36, STATE_VARIABLE_DeclSet_20_35, STATE_VARIABLE_DeclSet_18);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = {\n");
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[4]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_9_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (MaybeNames_14));
  }
  mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_names\'/9", (MR_String) "empty list");
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t");
  parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_1[1]), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[22]), (MR_String) ",\n\t", MaybeNames_14, Stream_11);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_cast_addr_of_rtti_data_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1330__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_16;

  ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_16));
}

static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word ArgTypes_14,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  MR_bool succeeded;
  MR_Word ArgTypeDatas_17;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_DeclSet_24_24;
  MR_Word STATE_VARIABLE_DeclSet_30_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_DeclSet_20_56;
  MR_Word Var_57;
  MR_Box conv2_STATE_VARIABLE_DeclSet_24_24;
  MR_Box conv1_STATE_VARIABLE_IO_25_25;
  MR_Integer Var_18;

  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[4]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_9_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Info_10));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (Stream_11));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ArgTypes_14, ((MR_Box) (STATE_VARIABLE_DeclSet_0_19)), &conv2_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
  STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_24_24));
  ArgTypeDatas_17 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[21]), ArgTypes_14);
  ll_backend__rtti_out__output_record_rtti_datas_decls_11_p_0(Info_10, Stream_11, ArgTypeDatas_17, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_18, STATE_VARIABLE_DeclSet_24_24, &STATE_VARIABLE_DeclSet_30_30);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (RttiTypeCtor_12));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (Var_35));
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_10, Stream_11, Var_32, (MR_Integer) 1, STATE_VARIABLE_DeclSet_30_30, &STATE_VARIABLE_DeclSet_20_56);
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_32));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_57, STATE_VARIABLE_DeclSet_20_56, STATE_VARIABLE_DeclSet_20);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = {\n");
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_10[2]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_9_p_0_3));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (ArgTypes_14));
  }
  mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_types\'/9", (MR_String) "empty list");
  if ((ArgTypeDatas_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t0\n");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t");
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_10[3]), (MR_String) ",\n\t", ArgTypeDatas_17, Stream_11);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_exist_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_info_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word ExistInfo_14,
  MR_Word STATE_VARIABLE_DeclSet_0_26,
  MR_Word * STATE_VARIABLE_DeclSet_27)
{
  uint16_t Plain_17 = ((uint16_t) (MR_Word) (MR_hl_field(0, ExistInfo_14, (MR_Integer) 0)));
  uint16_t InTci_18 = ((uint16_t) (MR_Word) (MR_hl_field(0, ExistInfo_14, (MR_Integer) 1)));
  MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(0, ExistInfo_14, (MR_Integer) 2))));
  MR_Word Locns_20 = ((MR_Word) ((MR_hl_field(0, ExistInfo_14, (MR_Integer) 3))));
  MR_Integer Tci_23;
  MR_Word STATE_VARIABLE_DeclSet_30_30;
  MR_Word STATE_VARIABLE_DeclSet_32_32;
  MR_Word Var_34;
  MR_Word Var_37;
  int16_t Var_40;
  int16_t Var_44;
  int16_t Var_48;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word STATE_VARIABLE_DeclSet_20_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_DeclSet_20_87;
  MR_Word Var_88;
  MR_String Str_90;
  MR_String Var_91;

  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (RttiTypeCtor_12));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (Var_66));
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_10, Stream_11, Var_64, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_20_75);
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_64));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_76, STATE_VARIABLE_DeclSet_20_75, &STATE_VARIABLE_DeclSet_30_30);
  if ((Locns_20 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "= { {0, 0} };\n");
  else
  {
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = {\n");
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t");
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[20]), (MR_String) ",\n\t", Locns_20, Stream_11);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "};\n");
  }
  if ((Constraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DeclSet_32_32 = STATE_VARIABLE_DeclSet_30_30;
  else
    ll_backend__rtti_out__output_exist_constraints_data_9_p_0(Info_10, Stream_11, RttiTypeCtor_12, Ordinal_13, Constraints_19, STATE_VARIABLE_DeclSet_30_30, &STATE_VARIABLE_DeclSet_32_32);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (RttiTypeCtor_12));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_37));
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_10, Stream_11, Var_34, (MR_Integer) 1, STATE_VARIABLE_DeclSet_32_32, &STATE_VARIABLE_DeclSet_20_87);
  {
    Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_88, 1) = ((MR_Box) (Var_34));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_88, STATE_VARIABLE_DeclSet_20_87, STATE_VARIABLE_DeclSet_27);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = {\n\t");
  Var_40 = mercury__int16__cast_from_uint16_1_f_0(Plain_17);
  mercury__io__write_int16_4_p_0(Stream_11, Var_40);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ",\n\t");
  Var_44 = mercury__int16__cast_from_uint16_1_f_0(InTci_18);
  mercury__io__write_int16_4_p_0(Stream_11, Var_44);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ",\n\t");
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), Constraints_19, &Tci_23);
  Var_48 = mercury__int16__det_from_int_1_f_0(Tci_23);
  mercury__io__write_int16_4_p_0(Stream_11, Var_48);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ",\n\t");
  backend_libs__rtti__id_to_c_identifier_2_p_0(Var_64, &Str_90);
  Var_91 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_11, Var_91);
  mercury__io__write_string_4_p_0(Stream_11, Str_90);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ",\n\t");
  if ((Constraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "NULL");
  else
  {
    MR_Word Var_56;
    MR_Word Var_93;
    MR_String Str_94;
    MR_String Var_95;

    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (MR_Word) (Ordinal_13));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_93, 0) = ((MR_Box) (RttiTypeCtor_12));
      MR_hl_field(0, Var_93, 1) = ((MR_Box) (Var_56));
    }
    backend_libs__rtti__id_to_c_identifier_2_p_0(Var_93, &Str_94);
    Var_95 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    mercury__io__write_string_4_p_0(Stream_11, Var_95);
    mercury__io__write_string_4_p_0(Stream_11, Str_94);
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_cast_addr_of_rtti_id_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0_2(
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
  MR_Word conv3_TCDeclSuperRttiId_16;
  MR_Word conv2_STATE_VARIABLE_Counter_27;
  MR_Word conv1_STATE_VARIABLE_DeclSet_29;

  ll_backend__rtti_out__output_type_class_constraint_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_TCDeclSuperRttiId_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_DeclSet_29);
  *wrapper_arg_2 = ((MR_Box) (conv3_TCDeclSuperRttiId_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Counter_27));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_DeclSet_29));
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RttiId_10;

  ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RttiId_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_RttiId_10));
}

static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word RttiTypeCtor_12,
  uint32_t Ordinal_13,
  MR_Word Constraints_14,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  MR_Word ConstraintIds_17;
  MR_Word RttiId_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_DeclSet_26_26;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_DeclSet_20_57;
  MR_Word Var_58;
  MR_Box conv6_Var_18;
  MR_Box conv5_STATE_VARIABLE_DeclSet_26_26;
  MR_Box conv4_STATE_VARIABLE_IO_27_27;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[4]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_9_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (RttiTypeCtor_12));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_9_p_0_2));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Info_10));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (Stream_11));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (Var_28));
  }
  Var_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
  mercury__list__map_foldl3_9_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Constraints_14, &ConstraintIds_17, ((MR_Box) (Var_25)), &conv6_Var_18, ((MR_Box) (STATE_VARIABLE_DeclSet_0_20)), &conv5_STATE_VARIABLE_DeclSet_26_26, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_27_27);
  STATE_VARIABLE_DeclSet_26_26 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_26_26));
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    RttiId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_19, 0) = ((MR_Box) (RttiTypeCtor_12));
    MR_hl_field(0, RttiId_19, 1) = ((MR_Box) (Var_30));
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_10, Stream_11, RttiId_19, (MR_Integer) 1, STATE_VARIABLE_DeclSet_26_26, &STATE_VARIABLE_DeclSet_20_57);
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (RttiId_19));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_58, STATE_VARIABLE_DeclSet_20_57, STATE_VARIABLE_DeclSet_21);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = {\n\t");
  if ((ConstraintIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t0\n");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\t");
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_10[1]), (MR_String) ",\n\t", ConstraintIds_17, Stream_11);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word ForeignEnumFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  MR_String FunctorName_15 = ((MR_String) ((MR_hl_field(0, ForeignEnumFunctor_12, (MR_Integer) 0))));
  uint32_t FunctorOrdinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(0, ForeignEnumFunctor_12, (MR_Integer) 1)));
  MR_String FunctorValue_17 = ((MR_String) ((MR_hl_field(0, ForeignEnumFunctor_12, (MR_Integer) 2))));
  MR_Word RttiId_18;
  MR_Word Var_23;
  int32_t Var_31;
  MR_Word STATE_VARIABLE_DeclSet_20_40;
  MR_Word Var_41;

  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (MR_Word) (FunctorOrdinal_16));
  }
  {
    RttiId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_18, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, RttiId_18, 1) = ((MR_Box) (Var_23));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, RttiId_18, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_19, &STATE_VARIABLE_DeclSet_20_40);
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (RttiId_18));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_41, STATE_VARIABLE_DeclSet_20_40, STATE_VARIABLE_DeclSet_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n\t");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_10, FunctorName_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
  Var_31 = mercury__int32__cast_from_uint32_1_f_0(FunctorOrdinal_16);
  mercury__io__write_int32_4_p_0(Stream_10, Var_31);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
  mercury__io__write_string_4_p_0(Stream_10, FunctorValue_17);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word EnumFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19)
{
  MR_String FunctorName_15 = ((MR_String) ((MR_hl_field(0, EnumFunctor_12, (MR_Integer) 0))));
  uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(0, EnumFunctor_12, (MR_Integer) 1)));
  uint32_t Value_17;
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, EnumFunctor_12, (MR_Integer) 2))));
  MR_Word Var_23;
  MR_Word Var_26;
  int32_t Var_32;
  MR_Word STATE_VARIABLE_DeclSet_20_38;
  MR_Word Var_39;

  Value_17 = (uint32_t) (Var_22);
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (MR_Word) (Ordinal_16));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (Var_26));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_23, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_18, &STATE_VARIABLE_DeclSet_20_38);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_23));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_39, STATE_VARIABLE_DeclSet_20_38, STATE_VARIABLE_DeclSet_19);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n\t");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_10, FunctorName_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
  Var_32 = mercury__int32__cast_from_uint32_1_f_0(Value_17);
  mercury__io__write_int32_4_p_0(Stream_10, Var_32);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word MaybePseudoTypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) MaybePseudoTypeInfo_10)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13 = ((MR_Word) ((MR_hl_field(1, MaybePseudoTypeInfo_10, (MR_Integer) 0))));
    MR_Word RttiId_19;
    MR_Word Var_20;
    MR_Word Var_21;

    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (TypeInfo_13));
    }
    backend_libs__rtti__rtti_data_to_id_2_p_0(Var_20, &RttiId_19);
    {
      Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_21, 1) = ((MR_Box) (RttiId_19));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_21, STATE_VARIABLE_DeclSet_0_15);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
    else
      ll_backend__rtti_out__do_output_type_info_defn_7_p_0(Info_8, Stream_9, TypeInfo_13, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
  }
  else
  {
    MR_Word PseudoTypeInfo_14 = ((MR_Word) ((MR_hl_field(0, MaybePseudoTypeInfo_10, (MR_Integer) 0))));

    succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_14)) == (MR_Integer) 3);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
    else
    {
      MR_Word RttiId_23;
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_24, 1) = ((MR_Box) (PseudoTypeInfo_14));
      }
      backend_libs__rtti__rtti_data_to_id_2_p_0(Var_24, &RttiId_23);
      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (RttiId_23));
      }
      succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_25, STATE_VARIABLE_DeclSet_0_15);
      if (succeeded)
        *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
      else
        ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(Info_8, Stream_9, PseudoTypeInfo_14, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
    }
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word MaybePseudoTypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) MaybePseudoTypeInfo_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PseudoTypeInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybePseudoTypeInfo_10, (MR_Integer) 0))));

        succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_14)) == (MR_Integer) 3);
        if (succeeded)
          *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
        else
        {
          MR_Word RttiId_23;
          MR_Word Var_24;
          MR_Word Var_25;

          {
            Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_24, 1) = ((MR_Box) (PseudoTypeInfo_14));
          }
          backend_libs__rtti__rtti_data_to_id_2_p_0(Var_24, &RttiId_23);
          {
            Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_25, 1) = ((MR_Box) (RttiId_23));
          }
          succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_25, STATE_VARIABLE_DeclSet_0_15);
          if (succeeded)
            *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
          else
            ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(Info_8, Stream_9, PseudoTypeInfo_14, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_13 = ((MR_Word) ((MR_hl_field(2, MaybePseudoTypeInfo_10, (MR_Integer) 0))));
        MR_Word RttiId_19;
        MR_Word Var_20;
        MR_Word Var_21;

        {
          Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_20, 1) = ((MR_Box) (TypeInfo_13));
        }
        backend_libs__rtti__rtti_data_to_id_2_p_0(Var_20, &RttiId_19);
        {
          Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_21, 1) = ((MR_Box) (RttiId_19));
        }
        succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_21, STATE_VARIABLE_DeclSet_0_15);
        if (succeeded)
          *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
        else
          ll_backend__rtti_out__do_output_type_info_defn_7_p_0(Info_8, Stream_9, TypeInfo_13, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_cast_addr_of_rtti_data_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_DeclSet_16;

  ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_DeclSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DeclSet_16));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word MakeRttiId_14,
  MR_Word Constraint_15,
  MR_Word * TCDeclSuperRttiId_16,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_DeclSet_0_28,
  MR_Word * STATE_VARIABLE_DeclSet_29)
{
  MR_Word TCName_20 = ((MR_Word) ((MR_hl_field(0, Constraint_15, (MR_Integer) 0))));
  MR_Word Types_21 = ((MR_Word) ((MR_hl_field(0, Constraint_15, (MR_Integer) 1))));
  MR_Integer NumTypes_22;
  MR_Integer TCNum_23;
  MR_Word TCDeclRttiId_24;
  MR_Word TypeRttiDatas_25;
  MR_Word STATE_VARIABLE_DeclSet_34_34;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_DeclSet_37_37;
  MR_Word STATE_VARIABLE_DeclSet_18_60;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_DeclSet_20_67;
  MR_Word Var_68;
  MR_String Str_69;
  MR_String Var_70;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_TCDeclSuperRttiId_16;
  MR_Box conv4_STATE_VARIABLE_DeclSet_37_37;
  MR_Box conv3_STATE_VARIABLE_IO_38_38;

  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Types_21, &NumTypes_22);
  mercury__counter__allocate_3_p_0(&TCNum_23, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, MakeRttiId_14, (MR_Integer) 1))));
  func_0(((MR_Box) (MakeRttiId_14)), ((MR_Box) (TCNum_23)), ((MR_Box) (NumTypes_22)), &conv1_TCDeclSuperRttiId_16);
  *TCDeclSuperRttiId_16 = ((MR_Word) (conv1_TCDeclSuperRttiId_16));
  {
    TCDeclRttiId_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCDeclRttiId_24, 0) = ((MR_Box) (TCName_20));
    MR_hl_field(1, TCDeclRttiId_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_12, Stream_13, TCDeclRttiId_24, (MR_Integer) 0, STATE_VARIABLE_DeclSet_0_28, &STATE_VARIABLE_DeclSet_18_60);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (TCDeclRttiId_24));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_63, STATE_VARIABLE_DeclSet_18_60, &STATE_VARIABLE_DeclSet_34_34);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_11_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Info_12));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (Stream_13));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, Types_21, ((MR_Box) (STATE_VARIABLE_DeclSet_34_34)), &conv4_STATE_VARIABLE_DeclSet_37_37, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_38_38);
  STATE_VARIABLE_DeclSet_37_37 = ((MR_Word) (conv4_STATE_VARIABLE_DeclSet_37_37));
  TypeRttiDatas_25 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[19]), Types_21);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_12, Stream_13, *TCDeclSuperRttiId_16, (MR_Integer) 1, STATE_VARIABLE_DeclSet_37_37, &STATE_VARIABLE_DeclSet_20_67);
  {
    Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_68, 1) = ((MR_Box) (*TCDeclSuperRttiId_16));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_68, STATE_VARIABLE_DeclSet_20_67, STATE_VARIABLE_DeclSet_29);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = {\n\t&");
  backend_libs__rtti__id_to_c_identifier_2_p_0(TCDeclRttiId_24, &Str_69);
  Var_70 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_13, Var_70);
  mercury__io__write_string_4_p_0(Stream_13, Str_69);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ",\n\t{\n");
  if ((TypeRttiDatas_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\t0\n");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\t");
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_10[0]), (MR_String) ",\n\t", TypeRttiDatas_25, Stream_13);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\t}\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_code_addr_in_list_4_p_0(
  MR_Word Stream_5,
  MR_Word CodeAddr_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\t");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_MAYBE_STATIC_CODE(");
  ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_5, CodeAddr_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
}

static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
  MR_Word TCName_6,
  MR_Word TCTypes_7,
  MR_Integer Ordinal_8,
  MR_Integer NumTypes_9,
  MR_Word * RttiId_10)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (TCTypes_7));
    MR_hl_field(3, Var_11, 2) = ((MR_Box) (Ordinal_8));
    MR_hl_field(3, Var_11, 3) = ((MR_Box) (NumTypes_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *RttiId_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TCName_6));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_11));
  }
}

static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
  MR_Word TCName_5,
  MR_Integer Ordinal_6,
  MR_Integer NumTypes_7,
  MR_Word * RttiId_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_9, 0) = ((MR_Box) (Ordinal_6));
    MR_hl_field(2, Var_9, 1) = ((MR_Box) (NumTypes_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *RttiId_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TCName_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_9));
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_4_p_0(
  MR_Word Stream_5,
  MR_Word MethodId_6)
{
  MR_String MethodName_8 = ((MR_String) ((MR_hl_field(0, MethodId_6, (MR_Integer) 0))));
  MR_Integer MethodArity_9;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, MethodId_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, MethodId_6, (MR_Integer) 1))));
  MR_String Var_22;

  MethodArity_9 = (MR_Integer) (Var_13);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\t{ ");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_5, MethodName_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  mercury__io__write_int_4_p_0(Stream_5, MethodArity_9);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", ");
  Var_22 = ll_backend__layout_out__mr_pred_or_func_to_string_1_f_0(PredOrFunc_10);
  mercury__io__write_string_4_p_0(Stream_5, Var_22);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " },\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_4_p_0(
  MR_Word Stream_5,
  MR_String TVarName_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\t");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_5, TVarName_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Group_11,
  MR_Word RttiIds_12,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25)
{
  MR_Word RttiId_15;
  MR_String CType_17;
  MR_Word IsArray_18;
  MR_Word Linkage_19;
  MR_Word Globals_20;
  MR_String LinkageStr_21;
  MR_Word InclCodeAddr_22;
  MR_String ConstStr_23;
  MR_Word STATE_VARIABLE_DeclSet_31_31;

  if ((RttiIds_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk\'/8", (MR_String) "empty list");
      return;
    }
  else
    RttiId_15 = ((MR_Word) ((MR_hl_field(1, RttiIds_12, (MR_Integer) 0))));
  CType_17 = ((MR_String) ((MR_hl_field(0, Group_11, (MR_Integer) 0))));
  IsArray_18 = ((((MR_Unsigned) ((MR_hl_field(0, Group_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  Linkage_19 = ((MR_Unsigned) ((MR_hl_field(0, Group_11, (MR_Integer) 1))) & (MR_Integer) 1);
  mercury__io__nl_3_p_0(Stream_10);
  ll_backend__rtti_out__output_rtti_type_decl_6_p_0(Stream_10, RttiId_15, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_31_31);
  Globals_20 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 8))));
  LinkageStr_21 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(Linkage_19, (MR_Integer) 0);
  InclCodeAddr_22 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(RttiId_15);
  ConstStr_23 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(Globals_20, InclCodeAddr_22);
  mercury__io__write_string_4_p_0(Stream_10, LinkageStr_21);
  mercury__io__write_string_4_p_0(Stream_10, ConstStr_23);
  mercury__io__write_string_4_p_0(Stream_10, CType_17);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_7_p_0(Stream_10, IsArray_18, RttiIds_12, STATE_VARIABLE_DeclSet_31_31, STATE_VARIABLE_DeclSet_25);
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_7_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_4,
  MR_Word * STATE_VARIABLE_DeclSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk_entries\'/7", (MR_String) "empty list");
        return;
      }
    else
    {
      MR_Word RttiId_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RttiIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_DeclSet_31_31;
      MR_String Str_42;
      MR_String Var_43;

      {
        Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_30, 1) = ((MR_Box) (RttiId_20));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_30, STATE_VARIABLE_DeclSet_0_4, &STATE_VARIABLE_DeclSet_31_31);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_20, &Str_42);
      Var_43 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
      mercury__io__write_string_4_p_0(Stream_1, Var_43);
      mercury__io__write_string_4_p_0(Stream_1, Str_42);
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "[]");
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      if ((RttiIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ";\n");
        *STATE_VARIABLE_DeclSet_5 = STATE_VARIABLE_DeclSet_31_31;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_4;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = RttiIds_21;
        next_value_of_STATE_VARIABLE_DeclSet_0_4 = STATE_VARIABLE_DeclSet_31_31;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_DeclSet_0_4 = next_value_of_STATE_VARIABLE_DeclSet_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_25;

  ll_backend__rtti_out__output_rtti_data_decl_chunk_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_25));
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17)
{
  MR_Word Group_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word RttiIds_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word RttiIdChunks_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box conv2_STATE_VARIABLE_DeclSet_17;
  MR_Box conv1_STATE_VARIABLE_IO_19;

  Var_20 = mercury__list__reverse_1_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), RttiIds_11);
  mercury__list__chunk_3_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), Var_20, (MR_Integer) 10, &RttiIdChunks_15);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[4]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_group_7_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (Group_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__rtti_out_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, RttiIdChunks_15, ((MR_Box) (STATE_VARIABLE_DeclSet_0_16)), &conv2_STATE_VARIABLE_DeclSet_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19);
  *STATE_VARIABLE_DeclSet_17 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_17));
}

MR_String MR_CALL 
ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(
  MR_Word ProcLabel_4,
  MR_Word Id_5)
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
  Var_13 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_4);
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_13);
  Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
  Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "_proc", Var_9);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_6, Var_7);
  return HeadVar__3_3;
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word RttiId_9,
  MR_Word BeingDefined_10)
{
  MR_Word DeclSet0_12;
  MR_Word Var_13;

  ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&DeclSet0_12);
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_7, Stream_8, RttiId_9, BeingDefined_10, DeclSet0_12, &Var_13);
}

void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_data_5_p_0(
  MR_String Cast_6,
  MR_Word RttiData_7,
  MR_Word Stream_8)
{
  mercury__io__write_string_4_p_0(Stream_8, Cast_6);
  ll_backend__rtti_out__output_addr_of_rtti_data_4_p_0(Stream_8, RttiData_7);
}

void MR_CALL 
ll_backend__rtti_out__register_rtti_data_if_nec_4_p_0(
  MR_Word Stream_5,
  MR_Word Data_6)
{
  switch (MR_tag((MR_Word) Data_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorData_8 = (MR_Word) ((MR_Word) (Data_6));
        MR_Word RttiTypeCtor_9;
        MR_Word RttiId_10;
        MR_String Str_64;
        MR_String Var_65;

        RttiTypeCtor_9 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(TypeCtorData_8);
        {
          RttiId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RttiId_10, 0) = ((MR_Box) (RttiTypeCtor_9));
          MR_hl_field(0, RttiId_10, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\t{\n\t");
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\tMR_register_type_ctor_info(\n\t\t&");
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_10, &Str_64);
        Var_65 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_65);
        mercury__io__write_string_4_p_0(Stream_5, Str_64);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) ");\n\t}\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCDecl_11 = (MR_Word) (MR_body((MR_Word) (Data_6), (MR_Integer) 1));
        MR_Word TCId_12 = ((MR_Word) ((MR_hl_field(0, TCDecl_11, (MR_Integer) 0))));
        MR_Word TCName_15 = ((MR_Word) ((MR_hl_field(0, TCId_12, (MR_Integer) 0))));
        MR_Word RttiId_55;
        MR_String Str_58;
        MR_String Var_59;

        {
          RttiId_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RttiId_55, 0) = ((MR_Box) (TCName_15));
          MR_hl_field(1, RttiId_55, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        }
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\t{\n\t");
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\tMR_register_type_class_decl(\n\t\t&");
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_55, &Str_58);
        Var_59 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_59);
        mercury__io__write_string_4_p_0(Stream_5, Str_58);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) ");\n\t}\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TCInstance_18 = (MR_Word) (MR_body((MR_Word) (Data_6), (MR_Integer) 2));
        MR_Word TCTypes_19 = ((MR_Word) ((MR_hl_field(0, TCInstance_18, (MR_Integer) 1))));
        MR_Word Var_47;
        MR_Word RttiId_56;
        MR_Word TCName_57 = ((MR_Word) ((MR_hl_field(0, TCInstance_18, (MR_Integer) 0))));
        MR_String Str_61;
        MR_String Var_62;

        {
          Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_47, 1) = ((MR_Box) (TCTypes_19));
        }
        {
          RttiId_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RttiId_56, 0) = ((MR_Box) (TCName_57));
          MR_hl_field(1, RttiId_56, 1) = ((MR_Box) (Var_47));
        }
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\t{\n\t");
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\tMR_register_type_class_instance(\n\t\t&");
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_56, &Str_61);
        Var_62 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_62);
        mercury__io__write_string_4_p_0(Stream_5, Str_61);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) ");\n\t}\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Data_6, (MR_Integer) 0))))) {
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
ll_backend__rtti_out__init_rtti_data_if_nec_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_4_p_0(
  MR_Word Stream_5,
  MR_Word Data_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Data_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorData_8 = (MR_Word) ((MR_Word) (Data_6));
        MR_Word RttiTypeCtor_9;
        MR_Word ModuleName_10;
        MR_String TypeName_11;
        uint16_t Arity_12;
        MR_String ModuleNameString_13;
        MR_String UnderscoresModule_14;
        MR_String MangledTypeName_16;
        MR_Word Var_64;
        MR_String Str_65;
        MR_String Var_66;
        MR_String Var_15;

        RttiTypeCtor_9 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(TypeCtorData_8);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\tMR_INIT_TYPE_CTOR_INFO(\n\t\t");
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_64, 0) = ((MR_Box) (RttiTypeCtor_9));
          MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        backend_libs__rtti__id_to_c_identifier_2_p_0(Var_64, &Str_65);
        Var_66 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_66);
        mercury__io__write_string_4_p_0(Stream_5, Str_65);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n\t\t");
        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, RttiTypeCtor_9, (MR_Integer) 0))));
        TypeName_11 = ((MR_String) ((MR_hl_field(0, RttiTypeCtor_9, (MR_Integer) 1))));
        Arity_12 = ((uint16_t) (MR_Word) (MR_hl_field(0, RttiTypeCtor_9, (MR_Integer) 2)));
        ModuleNameString_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_10);
        mercury__string__append_3_p_2(ModuleNameString_13, (MR_String) "__", &UnderscoresModule_14);
        succeeded = mercury__string__append_3_p_1(UnderscoresModule_14, &Var_15, TypeName_11);
        if (!(succeeded))
          mercury__io__write_string_4_p_0(Stream_5, UnderscoresModule_14);
        MangledTypeName_16 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_11);
        mercury__io__write_string_4_p_0(Stream_5, MangledTypeName_16);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
        mercury__io__write_uint16_4_p_0(Stream_5, Arity_12);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_0);\n");
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#error \"type_class_instance not yet supported without static code addresses\"\n");
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Data_6, (MR_Integer) 0))))) {
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
            MR_Word TCName_17 = ((MR_Word) ((MR_hl_field(3, Data_6, (MR_Integer) 1))));
            MR_String ClassArity_19 = ((MR_String) ((MR_hl_field(3, Data_6, (MR_Integer) 3))));
            MR_Word Methods_25;
            MR_Word CodeAddrs_27;
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, Data_6, (MR_Integer) 4))));

            Methods_25 = ((MR_Word) ((MR_hl_field(0, Var_48, (MR_Integer) 5))));
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
            CodeAddrs_27 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[18]), Methods_25);
            ll_backend__rtti_out__output_init_method_pointers_7_p_0(Stream_5, (MR_Integer) 5, CodeAddrs_27, TCName_17, ClassArity_19);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_7_p_0(
  MR_Word Stream_1,
  MR_Integer FieldNum_2,
  MR_Word HeadVar__3_3,
  MR_Word TCName_4,
  MR_String InstanceStr_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_String PrefixNameStr_22;
      MR_Integer Var_35;
      MR_String Var_44;
      MR_Integer next_value_of_FieldNum_2;
      MR_Word next_value_of_HeadVar__3_3;

      PrefixNameStr_22 = backend_libs__name_mangle__make_base_typeclass_info_name_with_data_prefix_2_f_0(TCName_4, InstanceStr_5);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t\tMR_field(MR_mktag(0), ");
      mercury__io__write_string_4_p_0(Stream_1, PrefixNameStr_22);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " , ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), FieldNum_2, &Var_44);
      mercury__io__write_string_4_p_0(Stream_1, Var_44);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ") =\n\t\t\t");
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_1, Arg_17);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ";\n");
      Var_35 = (MR_Integer) ((MR_Unsigned) FieldNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_FieldNum_2 = Var_35;
      next_value_of_HeadVar__3_3 = Args_18;
      FieldNum_2 = next_value_of_FieldNum_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_static_code_addr_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_LambdaHeadVar__2_47;

  conv4_LambdaHeadVar__2_47 = ll_backend__rtti_out__IntroducedFrom__func__output_base_typeclass_info_defn__311__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__5_5;

  ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word RttiDefn_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RttiDefn_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorData_15 = (MR_Word) ((MR_Word) (RttiDefn_10));

        ll_backend__rtti_out__output_type_ctor_data_defn_7_p_0(Info_8, Stream_9, TypeCtorData_15, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCDecl_20 = (MR_Word) (MR_body((MR_Word) (RttiDefn_10), (MR_Integer) 1));

        ll_backend__rtti_out__output_type_class_decl_defn_7_p_0(Info_8, Stream_9, TCDecl_20, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstanceDecl_21 = (MR_Word) (MR_body((MR_Word) (RttiDefn_10), (MR_Integer) 2));

        ll_backend__rtti_out__output_type_class_instance_defn_7_p_0(Info_8, Stream_9, InstanceDecl_21, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_13 = ((MR_Word) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 1))));
            MR_Word RttiId_69;
            MR_Word Var_71;

            backend_libs__rtti__rtti_data_to_id_2_p_0(RttiDefn_10, &RttiId_69);
            {
              Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_71, 1) = ((MR_Box) (RttiId_69));
            }
            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_71, STATE_VARIABLE_DeclSet_0_22);
            if (succeeded)
              *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
            else
              ll_backend__rtti_out__do_output_type_info_defn_7_p_0(Info_8, Stream_9, TypeInfo_13, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PseudoTypeInfo_14 = ((MR_Word) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 1))));

            succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_14)) == (MR_Integer) 3);
            if (succeeded)
              *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
            else
            {
              MR_Word RttiId_66;
              MR_Word Var_68;

              backend_libs__rtti__rtti_data_to_id_2_p_0(RttiDefn_10, &RttiId_66);
              {
                Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_68, 1) = ((MR_Box) (RttiId_66));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_68, STATE_VARIABLE_DeclSet_0_22);
              if (succeeded)
                *STATE_VARIABLE_DeclSet_23 = STATE_VARIABLE_DeclSet_0_22;
              else
                ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(Info_8, Stream_9, PseudoTypeInfo_14, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TCName_16 = ((MR_Word) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 1))));
            MR_Word InstanceModuleName_17 = ((MR_Word) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 2))));
            MR_String InstanceString_18 = ((MR_String) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 3))));
            MR_Word BaseTypeClassInfo_19 = ((MR_Word) ((MR_hl_field(3, RttiDefn_10, (MR_Integer) 4))));
            MR_Integer N1_26 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_19, (MR_Integer) 0))));
            MR_Integer N2_27 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_19, (MR_Integer) 1))));
            MR_Integer N3_28 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_19, (MR_Integer) 2))));
            MR_Integer N4_29 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_19, (MR_Integer) 3))));
            MR_Integer N5_30 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_19, (MR_Integer) 4))));
            MR_Word Methods_31 = ((MR_Word) ((MR_hl_field(0, BaseTypeClassInfo_19, (MR_Integer) 5))));
            MR_Word CodeAddrs_32;
            MR_Word RttiId_33;
            MR_Word NumSlots_35;
            MR_Word Var_37;
            MR_Word STATE_VARIABLE_DeclSet_36_38;
            MR_Word Var_42;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_53;
            MR_Box conv3_STATE_VARIABLE_DeclSet_36_38;
            MR_Box conv2_STATE_VARIABLE_IO_37_39;
            MR_Box conv5_STATE_VARIABLE_IO_59_54;

            CodeAddrs_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[15]), Methods_31);
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[3]));
              MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_defn_7_p_0_2));
              MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_37, 3) = ((MR_Box) (Info_8));
              MR_hl_field(0, Var_37, 4) = ((MR_Box) (Stream_9));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, CodeAddrs_32, ((MR_Box) (STATE_VARIABLE_DeclSet_0_22)), &conv3_STATE_VARIABLE_DeclSet_36_38, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_39);
            STATE_VARIABLE_DeclSet_36_38 = ((MR_Word) (conv3_STATE_VARIABLE_DeclSet_36_38));
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
            {
              Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_42, 0) = ((MR_Box) (InstanceModuleName_17));
              MR_hl_field(1, Var_42, 1) = ((MR_Box) (InstanceString_18));
            }
            {
              RttiId_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RttiId_33, 0) = ((MR_Box) (TCName_16));
              MR_hl_field(1, RttiId_33, 1) = ((MR_Box) (Var_42));
            }
            ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, RttiId_33, (MR_Integer) 1, STATE_VARIABLE_DeclSet_36_38, STATE_VARIABLE_DeclSet_23);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (N5_30));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_50, 0) = ((MR_Box) (N4_29));
              MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_51));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (N3_28));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
            }
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (N2_27));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) (N1_26));
              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
            }
            NumSlots_35 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[16]), Var_47);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[0]));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_defn_7_p_0_4));
              MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_53, 3) = ((MR_Box) (Stream_9));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, NumSlots_35, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_59_54);
            parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[17]), (MR_String) ",\n\t", CodeAddrs_32, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;

  ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TypeCtorData_10,
  MR_Word STATE_VARIABLE_DeclSet_0_43,
  MR_Word * STATE_VARIABLE_DeclSet_44)
{
  MR_Word RttiTypeCtor_13;
  uint8_t Version_14;
  MR_Word Module_15;
  MR_String TypeName_16;
  uint16_t TypeArity_17;
  MR_Word UnifyUniv_18;
  MR_Word CompareUniv_19;
  MR_Word Flags_20;
  MR_Word TypeCtorDetails_21;
  MR_Word MaybeFunctorsName_22;
  MR_Word MaybeLayoutName_23;
  MR_Word HaveFunctorNumberMap_24;
  MR_Word UnifyProcLabel_25;
  MR_Word UnifyCodeAddr_26;
  MR_Word CompareProcLabel_27;
  MR_Word CompareCodeAddr_28;
  MR_Word CodeAddrs_29;
  MR_Word MaybeNumPtags_30;
  int8_t NumPtagsEncoding_32;
  MR_String CtorRepStr_34;
  MR_Word MaybeNumFunctors_39;
  int32_t NumFunctorsEncoding_41;
  MR_Word STATE_VARIABLE_DeclSet_47_47;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_DeclSet_52_52;
  MR_Word Var_54;
  MR_Integer Var_60;
  MR_String Var_79;
  uint16_t Var_109;
  MR_Box conv0_UnifyProcLabel_25;
  MR_Box conv1_CompareProcLabel_27;
  MR_Box conv4_STATE_VARIABLE_DeclSet_52_52;
  MR_Box conv3_STATE_VARIABLE_IO_53_53;
  MR_Word _TargetPrefixes_33;

  RttiTypeCtor_13 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(TypeCtorData_10);
  Version_14 = ((uint8_t) (MR_Word) (MR_hl_field(0, TypeCtorData_10, (MR_Integer) 0)));
  Module_15 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_10, (MR_Integer) 1))));
  TypeName_16 = ((MR_String) ((MR_hl_field(0, TypeCtorData_10, (MR_Integer) 2))));
  TypeArity_17 = ((uint16_t) (MR_Word) (MR_hl_field(0, TypeCtorData_10, (MR_Integer) 3)));
  UnifyUniv_18 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_10, (MR_Integer) 4))));
  CompareUniv_19 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_10, (MR_Integer) 5))));
  Flags_20 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_10, (MR_Integer) 6))));
  TypeCtorDetails_21 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_10, (MR_Integer) 7))));
  ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0(Info_8, Stream_9, RttiTypeCtor_13, TypeCtorDetails_21, &MaybeFunctorsName_22, &MaybeLayoutName_23, &HaveFunctorNumberMap_24, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_47_47);
  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), UnifyUniv_18, &conv0_UnifyProcLabel_25);
  UnifyProcLabel_25 = ((MR_Word) (conv0_UnifyProcLabel_25));
  UnifyCodeAddr_26 = ll_backend__rtti_out__make_code_addr_1_f_0(UnifyProcLabel_25);
  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), CompareUniv_19, &conv1_CompareProcLabel_27);
  CompareProcLabel_27 = ((MR_Word) (conv1_CompareProcLabel_27));
  CompareCodeAddr_28 = ll_backend__rtti_out__make_code_addr_1_f_0(CompareProcLabel_27);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (CompareCodeAddr_28));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CodeAddrs_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CodeAddrs_29, 0) = ((MR_Box) (UnifyCodeAddr_26));
    MR_hl_field(1, CodeAddrs_29, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[3]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_data_defn_7_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, CodeAddrs_29, ((MR_Box) (STATE_VARIABLE_DeclSet_47_47)), &conv4_STATE_VARIABLE_DeclSet_52_52, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_53_53);
  STATE_VARIABLE_DeclSet_52_52 = ((MR_Word) (conv4_STATE_VARIABLE_DeclSet_52_52));
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (RttiTypeCtor_13));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 44U));
  }
  ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, Var_54, STATE_VARIABLE_DeclSet_52_52, STATE_VARIABLE_DeclSet_44);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t");
  Var_60 = mercury__uint16__to_int_1_f_0(TypeArity_17);
  mercury__io__write_int_4_p_0(Stream_9, Var_60);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_uint8_4_p_0(Stream_9, Version_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  MaybeNumPtags_30 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(TypeCtorDetails_21);
  if ((MaybeNumPtags_30 == (MR_Word) ((MR_Unsigned) 0U)))
    NumPtagsEncoding_32 = INT8_C(-1);
  else
  {
    MR_Integer NumPtags_31 = ((MR_Integer) ((MR_hl_field(1, MaybeNumPtags_30, (MR_Integer) 0))));

    NumPtagsEncoding_32 = mercury__int8__det_from_int_1_f_0(NumPtags_31);
  }
  mercury__io__write_int8_4_p_0(Stream_9, NumPtagsEncoding_32);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  backend_libs__rtti__type_ctor_rep_to_string_3_p_0(TypeCtorData_10, &_TargetPrefixes_33, &CtorRepStr_34);
  mercury__io__write_string_4_p_0(Stream_9, CtorRepStr_34);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  ll_backend__rtti_out__output_static_code_addr_4_p_0(UnifyCodeAddr_26, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  ll_backend__rtti_out__output_static_code_addr_4_p_0(CompareCodeAddr_28, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  Var_79 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_15);
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_9, Var_79);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_9, TypeName_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  if ((MaybeFunctorsName_22 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ 0 }");
  else
  {
    MR_Word FunctorsName_35 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorsName_22, (MR_Integer) 0))));
    MR_Word FunctorsRttiId_36;

    {
      FunctorsRttiId_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FunctorsRttiId_36, 0) = ((MR_Box) (RttiTypeCtor_13));
      MR_hl_field(0, FunctorsRttiId_36, 1) = ((MR_Box) (FunctorsName_35));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    ll_backend__rtti_out__output_cast_addr_of_rtti_id_5_p_0((MR_String) "(void *) ", FunctorsRttiId_36, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " }");
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  if ((MaybeLayoutName_23 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ 0 }");
  else
  {
    MR_Word LayoutName_37 = ((MR_Word) ((MR_hl_field(1, MaybeLayoutName_23, (MR_Integer) 0))));
    MR_Word LayoutRttiId_38;

    {
      LayoutRttiId_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LayoutRttiId_38, 0) = ((MR_Box) (RttiTypeCtor_13));
      MR_hl_field(0, LayoutRttiId_38, 1) = ((MR_Box) (LayoutName_37));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    ll_backend__rtti_out__output_cast_addr_of_rtti_id_5_p_0((MR_String) "(void *) ", LayoutRttiId_38, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " }");
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  MaybeNumFunctors_39 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(TypeCtorDetails_21);
  if ((MaybeNumFunctors_39 == (MR_Word) ((MR_Unsigned) 0U)))
    NumFunctorsEncoding_41 = INT32_C(-1);
  else
  {
    MR_Integer NumFunctors_40 = ((MR_Integer) ((MR_hl_field(1, MaybeNumFunctors_39, (MR_Integer) 0))));

    NumFunctorsEncoding_41 = mercury__int32__det_from_int_1_f_0(NumFunctors_40);
  }
  mercury__io__write_int32_4_p_0(Stream_9, NumFunctorsEncoding_41);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  Var_109 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(Flags_20);
  mercury__io__write_uint16_4_p_0(Stream_9, Var_109);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  switch (HaveFunctorNumberMap_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
      break;
    case (MR_Integer) 1:
      {
        MR_Word FunctorNumberMapRttiId_42;

        {
          FunctorNumberMapRttiId_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FunctorNumberMapRttiId_42, 0) = ((MR_Box) (RttiTypeCtor_13));
          MR_hl_field(0, FunctorNumberMapRttiId_42, 1) = ((MR_Box) ((MR_Unsigned) 32U));
        }
        ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, FunctorNumberMapRttiId_42);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_4_p_0(
  MR_Word CodeAddr_5,
  MR_Word Stream_6)
{
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "MR_MAYBE_STATIC_CODE(");
  ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_6, CodeAddr_5);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_5_p_0(
  MR_String Cast_6,
  MR_Word RttiId_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Integer VarNum_14;
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__io__write_string_4_p_0(Stream_8, Cast_6);
  succeeded = ((MR_tag((MR_Word) RttiId_7)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, RttiId_7, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 11)));
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3);
      if (succeeded)
        VarNum_14 = ((MR_Integer) ((MR_hl_field(3, Var_17, (MR_Integer) 0))));
    }
  }
  if (succeeded)
    mercury__io__write_int_4_p_0(Stream_8, VarNum_14);
  else
  {
    MR_Word IsArray_15;

    IsArray_15 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_7);
    switch (IsArray_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Str_20;
          MR_String Var_21;

          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, &Str_20);
          Var_21 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          mercury__io__write_string_4_p_0(Stream_8, Var_21);
          mercury__io__write_string_4_p_0(Stream_8, Str_20);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Str_23;
          MR_String Var_24;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, &Str_23);
          Var_24 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          mercury__io__write_string_4_p_0(Stream_8, Var_24);
          mercury__io__write_string_4_p_0(Stream_8, Str_23);
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
  MR_Word ProcLabel_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = ll_backend__code_util__make_entry_label_from_rtti_2_f_0(ProcLabel_3, (MR_Word) ((MR_Unsigned) 0U));
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_DeclSet_20;

  ll_backend__rtti_out__output_foreign_enum_functor_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DeclSet_20);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DeclSet_20));
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__918__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DeclSet_19;

  ll_backend__rtti_out__output_enum_functor_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DeclSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_19));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_46;

  ll_backend__rtti_out__output_du_functor_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_46);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_46));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word RttiTypeCtor_14,
  MR_Word TypeCtorDetails_15,
  MR_Word * MaybeFunctorsName_16,
  MR_Word * MaybeLayoutName_17,
  MR_Word * HaveFunctorNumberMap_18,
  MR_Word STATE_VARIABLE_DeclSet_0_48,
  MR_Word * STATE_VARIABLE_DeclSet_49)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TypeCtorDetails_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word EnumFunctors_23 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_15, (MR_Integer) 1))));
        MR_Word EnumByOrd_24 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_15, (MR_Integer) 2))));
        MR_Word EnumByName_25 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_15, (MR_Integer) 3))));
        MR_Word FunctorNumberMap_26 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_15, (MR_Integer) 4))));
        MR_Word Var_52;
        MR_Word STATE_VARIABLE_DeclSet_53_53;
        MR_Word STATE_VARIABLE_DeclSet_55_55;
        MR_Word STATE_VARIABLE_DeclSet_57_57;
        MR_Box conv5_STATE_VARIABLE_DeclSet_53_53;
        MR_Box conv4_STATE_VARIABLE_IO_54_54;

        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[2]));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_2));
          MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_52, 3) = ((MR_Box) (Info_12));
          MR_hl_field(0, Var_52, 4) = ((MR_Box) (Stream_13));
          MR_hl_field(0, Var_52, 5) = ((MR_Box) (RttiTypeCtor_14));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, EnumFunctors_23, ((MR_Box) (STATE_VARIABLE_DeclSet_0_48)), &conv5_STATE_VARIABLE_DeclSet_53_53, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_54_54);
        STATE_VARIABLE_DeclSet_53_53 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_53_53));
        ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, EnumByOrd_24, STATE_VARIABLE_DeclSet_53_53, &STATE_VARIABLE_DeclSet_55_55);
        ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, EnumByName_25, STATE_VARIABLE_DeclSet_55_55, &STATE_VARIABLE_DeclSet_57_57);
        ll_backend__rtti_out__output_functor_number_map_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, FunctorNumberMap_26, STATE_VARIABLE_DeclSet_57_57, STATE_VARIABLE_DeclSet_49);
        *MaybeLayoutName_17 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[2]));
        *MaybeFunctorsName_16 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[3]));
        *HaveFunctorNumberMap_18 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Lang_28 = ((((MR_Unsigned) ((MR_hl_field(1, TypeCtorDetails_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        MR_Word ForeignEnumFunctors_30 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_15, (MR_Integer) 1))));
        MR_Word ForeignEnumByOrdinal_31 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_15, (MR_Integer) 2))));
        MR_Word ForeignEnumByName_32 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_15, (MR_Integer) 3))));
        MR_Word Var_63;
        MR_Word Var_67;
        MR_Word STATE_VARIABLE_DeclSet_68_68;
        MR_Word STATE_VARIABLE_DeclSet_70_70;
        MR_Word STATE_VARIABLE_DeclSet_72_72;
        MR_Word FunctorNumberMap_105 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_15, (MR_Integer) 4))));
        MR_Box conv8_STATE_VARIABLE_DeclSet_68_68;
        MR_Box conv7_STATE_VARIABLE_IO_69_69;

        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[7]));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_3));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (Lang_28));
          MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ll_backend.rtti_out.output_type_ctor_details_defn\'/11", (MR_String) "language other than C for foreign enumeration");
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[3]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_4));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (Info_12));
          MR_hl_field(0, Var_67, 4) = ((MR_Box) (Stream_13));
          MR_hl_field(0, Var_67, 5) = ((MR_Box) (RttiTypeCtor_14));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, ForeignEnumFunctors_30, ((MR_Box) (STATE_VARIABLE_DeclSet_0_48)), &conv8_STATE_VARIABLE_DeclSet_68_68, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_69_69);
        STATE_VARIABLE_DeclSet_68_68 = ((MR_Word) (conv8_STATE_VARIABLE_DeclSet_68_68));
        ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, ForeignEnumByOrdinal_31, STATE_VARIABLE_DeclSet_68_68, &STATE_VARIABLE_DeclSet_70_70);
        ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, ForeignEnumByName_32, STATE_VARIABLE_DeclSet_70_70, &STATE_VARIABLE_DeclSet_72_72);
        ll_backend__rtti_out__output_functor_number_map_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, FunctorNumberMap_105, STATE_VARIABLE_DeclSet_72_72, STATE_VARIABLE_DeclSet_49);
        *MaybeLayoutName_17 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[4]));
        *MaybeFunctorsName_16 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[5]));
        *HaveFunctorNumberMap_18 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DuFunctors_34 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_15, (MR_Integer) 1))));
        MR_Word DuByRep_35 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_15, (MR_Integer) 2))));
        MR_Word DuByName_36 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_15, (MR_Integer) 3))));
        MR_Word Var_78;
        MR_Word STATE_VARIABLE_DeclSet_79_79;
        MR_Word STATE_VARIABLE_DeclSet_81_81;
        MR_Word STATE_VARIABLE_DeclSet_83_83;
        MR_Word FunctorNumberMap_107 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_15, (MR_Integer) 4))));
        MR_Box conv2_STATE_VARIABLE_DeclSet_79_79;
        MR_Box conv1_STATE_VARIABLE_IO_80_80;

        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[1]));
          MR_hl_field(0, Var_78, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_11_p_0_1));
          MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_78, 3) = ((MR_Box) (Info_12));
          MR_hl_field(0, Var_78, 4) = ((MR_Box) (Stream_13));
          MR_hl_field(0, Var_78, 5) = ((MR_Box) (RttiTypeCtor_14));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, DuFunctors_34, ((MR_Box) (STATE_VARIABLE_DeclSet_0_48)), &conv2_STATE_VARIABLE_DeclSet_79_79, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_80_80);
        STATE_VARIABLE_DeclSet_79_79 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_79_79));
        ll_backend__rtti_out__output_du_ptag_ordered_table_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, DuByRep_35, STATE_VARIABLE_DeclSet_79_79, &STATE_VARIABLE_DeclSet_81_81);
        ll_backend__rtti_out__output_du_name_ordered_table_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, DuByName_36, STATE_VARIABLE_DeclSet_81_81, &STATE_VARIABLE_DeclSet_83_83);
        ll_backend__rtti_out__output_functor_number_map_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, FunctorNumberMap_107, STATE_VARIABLE_DeclSet_83_83, STATE_VARIABLE_DeclSet_49);
        *MaybeLayoutName_17 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[0]));
        *MaybeFunctorsName_16 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[1]));
        *HaveFunctorNumberMap_18 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCtorDetails_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word NotagFunctor_38 = ((MR_Word) ((MR_hl_field(3, TypeCtorDetails_15, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_DeclSet_89_89;

            ll_backend__rtti_out__output_notag_functor_defn_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, NotagFunctor_38, STATE_VARIABLE_DeclSet_0_48, &STATE_VARIABLE_DeclSet_89_89);
            ll_backend__rtti_out__output_functor_number_map_8_p_0(Info_12, Stream_13, RttiTypeCtor_14, (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_1[3])), STATE_VARIABLE_DeclSet_89_89, STATE_VARIABLE_DeclSet_49);
            *MaybeLayoutName_17 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[6]));
            *MaybeFunctorsName_16 = (MR_Word) (MR_mkword(1, &ll_backend__rtti_out_scalar_common_3[6]));
            *HaveFunctorNumberMap_18 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word EqvType_39 = ((MR_Word) ((MR_hl_field(3, TypeCtorDetails_15, (MR_Integer) 1))));
            MR_Word TypeData_40;
            MR_Word LayoutName_43;
            MR_Word STATE_VARIABLE_DeclSet_98_98;
            MR_Integer Var_41;

            if (((MR_tag((MR_Word) EqvType_39)) == (MR_Integer) 1))
            {
              MR_Word TypeInfo_135 = ((MR_Word) ((MR_hl_field(1, EqvType_39, (MR_Integer) 0))));
              MR_Word RttiId_137;
              MR_Word Var_138;
              MR_Word Var_139;

              {
                Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_138, 1) = ((MR_Box) (TypeInfo_135));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(Var_138, &RttiId_137);
              {
                Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_139, 1) = ((MR_Box) (RttiId_137));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_139, STATE_VARIABLE_DeclSet_0_48);
              if (succeeded)
                STATE_VARIABLE_DeclSet_98_98 = STATE_VARIABLE_DeclSet_0_48;
              else
                ll_backend__rtti_out__do_output_type_info_defn_7_p_0(Info_12, Stream_13, TypeInfo_135, STATE_VARIABLE_DeclSet_0_48, &STATE_VARIABLE_DeclSet_98_98);
            }
            else
            {
              MR_Word PseudoTypeInfo_136 = ((MR_Word) ((MR_hl_field(0, EqvType_39, (MR_Integer) 0))));

              succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_136)) == (MR_Integer) 3);
              if (succeeded)
                STATE_VARIABLE_DeclSet_98_98 = STATE_VARIABLE_DeclSet_0_48;
              else
              {
                MR_Word RttiId_141;
                MR_Word Var_142;
                MR_Word Var_143;

                {
                  Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_142, 1) = ((MR_Box) (PseudoTypeInfo_136));
                }
                backend_libs__rtti__rtti_data_to_id_2_p_0(Var_142, &RttiId_141);
                {
                  Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, Var_143, 1) = ((MR_Box) (RttiId_141));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_143, STATE_VARIABLE_DeclSet_0_48);
                if (succeeded)
                  STATE_VARIABLE_DeclSet_98_98 = STATE_VARIABLE_DeclSet_0_48;
                else
                  ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(Info_12, Stream_13, PseudoTypeInfo_136, STATE_VARIABLE_DeclSet_0_48, &STATE_VARIABLE_DeclSet_98_98);
              }
            }
            TypeData_40 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(EqvType_39);
            ll_backend__rtti_out__output_record_rtti_data_decls_11_p_0(Info_12, Stream_13, TypeData_40, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_41, STATE_VARIABLE_DeclSet_98_98, STATE_VARIABLE_DeclSet_49);
            if (((MR_tag((MR_Word) EqvType_39)) == (MR_Integer) 1))
            {
              MR_Word TypeInfo_42 = ((MR_Word) ((MR_hl_field(1, EqvType_39, (MR_Integer) 0))));

              {
                LayoutName_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, LayoutName_43, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(3, LayoutName_43, 1) = ((MR_Box) (TypeInfo_42));
              }
            }
            else
            {
              MR_Word PseudoTypeInfo_44 = ((MR_Word) ((MR_hl_field(0, EqvType_39, (MR_Integer) 0))));

              {
                LayoutName_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, LayoutName_43, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, LayoutName_43, 1) = ((MR_Box) (PseudoTypeInfo_44));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLayoutName_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LayoutName_43));
            }
            *MaybeFunctorsName_16 = (MR_Word) ((MR_Unsigned) 0U);
            *HaveFunctorNumberMap_18 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            *MaybeLayoutName_17 = (MR_Word) ((MR_Unsigned) 0U);
            *MaybeFunctorsName_16 = (MR_Word) ((MR_Unsigned) 0U);
            *HaveFunctorNumberMap_18 = (MR_Integer) 0;
            *STATE_VARIABLE_DeclSet_49 = STATE_VARIABLE_DeclSet_0_48;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word RttiData_14,
  MR_String FirstIndent_15,
  MR_String LaterIndent_16,
  MR_Integer STATE_VARIABLE_N_0_22,
  MR_Integer * STATE_VARIABLE_N_23,
  MR_Word STATE_VARIABLE_DeclSet_0_24,
  MR_Word * STATE_VARIABLE_DeclSet_25)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Var_28;

  if (succeeded)
  {
    Var_28 = ((MR_Word) ((MR_hl_field(3, RttiData_14, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3);
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_DeclSet_25 = STATE_VARIABLE_DeclSet_0_24;
    *STATE_VARIABLE_N_23 = STATE_VARIABLE_N_0_22;
  }
  else
  {
    MR_Word RttiId_21;
    MR_Word Var_29;

    backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_14, &RttiId_21);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (RttiId_21));
    }
    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, Var_29, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_22, STATE_VARIABLE_N_23, STATE_VARIABLE_DeclSet_0_24, STATE_VARIABLE_DeclSet_25);
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_functor_number_map_value_4_p_0(((uint32_t) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorNumberMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_DeclSet_20_37;
  MR_Word Var_38;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 32U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_19, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_20_37);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_19));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_38, STATE_VARIABLE_DeclSet_20_37, STATE_VARIABLE_DeclSet_16);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n\t");
  parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[14]), (MR_String) ",\n\t", FunctorNumberMap_12, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n\t");
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_23;

  ll_backend__rtti_out__output_du_stag_ordered_table_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_23));
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word PtagMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  MR_Word PtagList_15;
  uint8_t LeastPtag_19;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_DeclSet_25_25;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_DeclSet_20_51;
  MR_Word Var_52;
  MR_Box conv2_STATE_VARIABLE_DeclSet_25_25;
  MR_Box conv1_STATE_VARIABLE_IO_26_26;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), PtagMap_12, &PtagList_15);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_8_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Info_9));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (RttiTypeCtor_11));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__rtti_out_scalar_common_2[2]), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, PtagList_15, ((MR_Box) (STATE_VARIABLE_DeclSet_0_20)), &conv2_STATE_VARIABLE_DeclSet_25_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
  STATE_VARIABLE_DeclSet_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_25_25));
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 28U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_27, (MR_Integer) 1, STATE_VARIABLE_DeclSet_25_25, &STATE_VARIABLE_DeclSet_20_51);
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_27));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_52, STATE_VARIABLE_DeclSet_20_51, STATE_VARIABLE_DeclSet_21);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if ((PtagList_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table\'/8", (MR_String) "bad ptag list");
      return;
    }
  else
  {
    MR_Word FirstPtag_16;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, PtagList_15, (MR_Integer) 0))));

    FirstPtag_16 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
    LeastPtag_19 = (uint8_t) (FirstPtag_16);
  }
  ll_backend__rtti_out__output_du_ptag_ordered_table_body_6_p_0(Stream_10, RttiTypeCtor_11, PtagList_15, LeastPtag_19);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n");
}

static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__uint8__f_less_or_equal_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((uint8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_6_p_0(
  MR_Word Stream_1,
  MR_Word RttiTypeCtor_2,
  MR_Word HeadVar__3_3,
  uint8_t LeastPtag_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Ptag_15;
      MR_Word SectagTable_16;
      MR_Word PtagTail_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      uint8_t PtagUint8_20;
      MR_Word SectagLocn_21;
      int8_t NumSectagBits_22;
      uint32_t NumSharers_23;
      MR_Word Flags_25;
      MR_String LocnStr_27;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_34;
      MR_Word Var_45;
      uint8_t Var_55;
      MR_Word Var_62;
      MR_String Str_63;
      MR_String Var_64;
      MR_Word _TargetPrefixes_26;

      Ptag_15 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
      SectagTable_16 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
      PtagUint8_20 = (uint8_t) (Ptag_15);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[6]));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_body_6_p_0_1));
        MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_34, 3) = ((MR_Box) (MR_Word) (LeastPtag_4));
        MR_hl_field(0, Var_34, 4) = ((MR_Box) (MR_Word) (PtagUint8_20));
      }
      mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table_body\'/6", (MR_String) "ptag mismatch");
      SectagLocn_21 = ((MR_Word) ((MR_hl_field(0, SectagTable_16, (MR_Integer) 0))));
      NumSectagBits_22 = ((int8_t) (MR_Word) (MR_hl_field(0, SectagTable_16, (MR_Integer) 1)));
      NumSharers_23 = ((uint32_t) (MR_Word) (MR_hl_field(0, SectagTable_16, (MR_Integer) 2)));
      backend_libs__type_ctor_info__compute_du_ptag_layout_flags_2_p_0(SectagTable_16, &Flags_25);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t{ ");
      mercury__io__write_uint32_4_p_0(Stream_1, NumSharers_23);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      backend_libs__rtti__sectag_locn_to_string_3_p_0(SectagLocn_21, &_TargetPrefixes_26, &LocnStr_27);
      mercury__io__write_string_4_p_0(Stream_1, LocnStr_27);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n\t");
      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (Ptag_15));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (RttiTypeCtor_2));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (Var_45));
      }
      backend_libs__rtti__id_to_c_identifier_2_p_0(Var_62, &Str_63);
      Var_64 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
      mercury__io__write_string_4_p_0(Stream_1, Var_64);
      mercury__io__write_string_4_p_0(Stream_1, Str_63);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n\t");
      mercury__io__write_int8_4_p_0(Stream_1, NumSectagBits_22);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n\t");
      mercury__io__write_uint8_4_p_0(Stream_1, PtagUint8_20);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n\t");
      Var_55 = backend_libs__rtti__encode_du_ptag_layout_flags_1_f_0(Flags_25);
      mercury__io__write_uint8_4_p_0(Stream_1, Var_55);
      if ((PtagTail_17 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " }\n");
      else
      {
        uint8_t NextLeastPtag_30;
        MR_Word next_value_of_HeadVar__3_3;
        uint8_t next_value_of_LeastPtag_4;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " },\n");
        NextLeastPtag_30 = (PtagUint8_20 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = PtagTail_17;
        next_value_of_LeastPtag_4 = NextLeastPtag_30;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        LeastPtag_4 = next_value_of_LeastPtag_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_36;

  ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1535__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_36);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_36));
}

static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word NameArityMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  MR_Word ArityMaps_15;
  MR_Word FunctorLists_16;
  MR_Word Functors_17;
  MR_Word FunctorRttiNames_18;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_DeclSet_20_45;
  MR_Word Var_46;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[1]), NameArityMap_12, &ArityMaps_15);
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_2[1]), (MR_Word) (&ll_backend__rtti_out_scalar_common_1[2]), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[12]), ArityMaps_15, &FunctorLists_16);
  mercury__list__condense_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), FunctorLists_16, &Functors_17);
  FunctorRttiNames_18 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[13]), Functors_17);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 24U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_25, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_19, &STATE_VARIABLE_DeclSet_20_45);
  {
    Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_25));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_46, STATE_VARIABLE_DeclSet_20_45, STATE_VARIABLE_DeclSet_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if (!((FunctorRttiNames_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_49;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_8_p_0_3));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (RttiTypeCtor_11));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_49, (MR_String) ",\n\t", FunctorRttiNames_18, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_Word Functors_15;
  MR_Word FunctorRttiNames_16;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_DeclSet_20_36;
  MR_Word Var_37;

  Functors_15 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), FunctorMap_12);
  FunctorRttiNames_16 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[11]), Functors_15);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_22, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_20_36);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_22));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_37, STATE_VARIABLE_DeclSet_20_36, STATE_VARIABLE_DeclSet_18);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if (!((FunctorRttiNames_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_40;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_8_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (RttiTypeCtor_11));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_40, (MR_String) ",\n\t", FunctorRttiNames_16, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19)
{
  MR_Word Functors_15;
  MR_Word FunctorRttiNames_16;
  MR_Word RttiId_17;
  MR_Word STATE_VARIABLE_DeclSet_20_36;
  MR_Word Var_37;

  Functors_15 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), FunctorMap_12);
  FunctorRttiNames_16 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[10]), Functors_15);
  {
    RttiId_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_17, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, RttiId_17, 1) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, RttiId_17, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_18, &STATE_VARIABLE_DeclSet_20_36);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (RttiId_17));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_37, STATE_VARIABLE_DeclSet_20_36, STATE_VARIABLE_DeclSet_19);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if (!((FunctorRttiNames_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_40;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_8_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (RttiTypeCtor_11));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_40, (MR_String) ",\n\t", FunctorRttiNames_16, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_Word Functors_15;
  MR_Word FunctorRttiNames_16;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_DeclSet_20_36;
  MR_Word Var_37;

  Functors_15 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), FunctorMap_12);
  FunctorRttiNames_16 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[9]), Functors_15);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_22, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_20_36);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_22));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_37, STATE_VARIABLE_DeclSet_20_36, STATE_VARIABLE_DeclSet_18);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if (!((FunctorRttiNames_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_40;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_8_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (RttiTypeCtor_11));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_40, (MR_String) ",\n\t", FunctorRttiNames_16, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_addr_of_ctor_rtti_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word FunctorMap_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_Word Functors_15;
  MR_Word FunctorRttiNames_16;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_DeclSet_20_36;
  MR_Word Var_37;

  Functors_15 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), FunctorMap_12);
  FunctorRttiNames_16 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[8]), Functors_15);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_22, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_17, &STATE_VARIABLE_DeclSet_20_36);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_22));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_37, STATE_VARIABLE_DeclSet_20_36, STATE_VARIABLE_DeclSet_18);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n");
  if (!((FunctorRttiNames_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_40;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\t");
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[3]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_ordinal_ordered_table_8_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (RttiTypeCtor_11));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_40, (MR_String) ",\n\t", FunctorRttiNames_16, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiTypeCtor_11,
  MR_Word NotagFunctor_12,
  MR_Word STATE_VARIABLE_DeclSet_0_26,
  MR_Word * STATE_VARIABLE_DeclSet_27)
{
  MR_bool succeeded;
  MR_String FunctorName_15 = ((MR_String) ((MR_hl_field(0, NotagFunctor_12, (MR_Integer) 0))));
  MR_Word ArgType_16 = ((MR_Word) ((MR_hl_field(0, NotagFunctor_12, (MR_Integer) 1))));
  MR_Word MaybeArgName_17 = ((MR_Word) ((MR_hl_field(0, NotagFunctor_12, (MR_Integer) 2))));
  MR_Word FunctorSubtypeInfo_18 = ((MR_Unsigned) ((MR_hl_field(0, NotagFunctor_12, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word ArgTypeData_19;
  MR_String FunctorSubtypeInfoStr_25;
  MR_Word STATE_VARIABLE_DeclSet_30_30;
  MR_Word STATE_VARIABLE_DeclSet_35_35;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_DeclSet_20_81;
  MR_Word Var_82;
  MR_Word Var_76;
  MR_Word Var_24;

  if (((MR_tag((MR_Word) ArgType_16)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_65 = ((MR_Word) ((MR_hl_field(1, ArgType_16, (MR_Integer) 0))));
    MR_Word RttiId_67;
    MR_Word Var_68;
    MR_Word Var_69;

    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (TypeInfo_65));
    }
    backend_libs__rtti__rtti_data_to_id_2_p_0(Var_68, &RttiId_67);
    {
      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_69, 1) = ((MR_Box) (RttiId_67));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_69, STATE_VARIABLE_DeclSet_0_26);
    if (succeeded)
      STATE_VARIABLE_DeclSet_30_30 = STATE_VARIABLE_DeclSet_0_26;
    else
      ll_backend__rtti_out__do_output_type_info_defn_7_p_0(Info_9, Stream_10, TypeInfo_65, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_30_30);
  }
  else
  {
    MR_Word PseudoTypeInfo_66 = ((MR_Word) ((MR_hl_field(0, ArgType_16, (MR_Integer) 0))));

    succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_66)) == (MR_Integer) 3);
    if (succeeded)
      STATE_VARIABLE_DeclSet_30_30 = STATE_VARIABLE_DeclSet_0_26;
    else
    {
      MR_Word RttiId_71;
      MR_Word Var_72;
      MR_Word Var_73;

      {
        Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_72, 1) = ((MR_Box) (PseudoTypeInfo_66));
      }
      backend_libs__rtti__rtti_data_to_id_2_p_0(Var_72, &RttiId_71);
      {
        Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_73, 1) = ((MR_Box) (RttiId_71));
      }
      succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_73, STATE_VARIABLE_DeclSet_0_26);
      if (succeeded)
        STATE_VARIABLE_DeclSet_30_30 = STATE_VARIABLE_DeclSet_0_26;
      else
        ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(Info_9, Stream_10, PseudoTypeInfo_66, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_30_30);
    }
  }
  ArgTypeData_19 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ArgType_16);
  succeeded = ((((MR_tag((MR_Word) ArgTypeData_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgTypeData_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Var_76 = ((MR_Word) ((MR_hl_field(3, ArgTypeData_19, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 3);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    STATE_VARIABLE_DeclSet_35_35 = STATE_VARIABLE_DeclSet_30_30;
  else
  {
    MR_Word RttiId_75;
    MR_Word Var_77;
    MR_Integer Var_85;

    backend_libs__rtti__rtti_data_to_id_2_p_0(ArgTypeData_19, &RttiId_75);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (RttiId_75));
    }
    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_9, Stream_10, Var_77, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_85, STATE_VARIABLE_DeclSet_30_30, &STATE_VARIABLE_DeclSet_35_35);
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (RttiTypeCtor_11));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_9, Stream_10, Var_37, (MR_Integer) 1, STATE_VARIABLE_DeclSet_35_35, &STATE_VARIABLE_DeclSet_20_81);
  {
    Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_37));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_82, STATE_VARIABLE_DeclSet_20_81, STATE_VARIABLE_DeclSet_27);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = {\n\t");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_10, FunctorName_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
  if (((MR_tag((MR_Word) ArgType_16)) == (MR_Integer) 1))
  {
    MR_Word ArgTypeInfo_21 = ((MR_Word) ((MR_hl_field(1, ArgType_16, (MR_Integer) 0))));
    MR_Word Var_47;

    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (ArgTypeInfo_21));
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(MR_PseudoTypeInfo) ");
    ll_backend__rtti_out__output_addr_of_rtti_data_4_p_0(Stream_10, Var_47);
  }
  else
  {
    MR_Word ArgPseudoTypeInfo_22 = ((MR_Word) ((MR_hl_field(0, ArgType_16, (MR_Integer) 0))));
    MR_Word Var_50;

    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (ArgPseudoTypeInfo_22));
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(MR_PseudoTypeInfo) ");
    ll_backend__rtti_out__output_addr_of_rtti_data_4_p_0(Stream_10, Var_50);
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
  if ((MaybeArgName_17 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "NULL");
  else
  {
    MR_String ArgName_23 = ((MR_String) ((MR_hl_field(1, MaybeArgName_17, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_10, ArgName_23);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\"");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n\t");
  backend_libs__rtti__functor_subtype_info_to_string_3_p_0(FunctorSubtypeInfo_18, &Var_24, &FunctorSubtypeInfoStr_25);
  mercury__io__write_string_4_p_0(Stream_10, FunctorSubtypeInfoStr_25);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n};\n");
}

void MR_CALL 
ll_backend__rtti_out__output_addr_of_rtti_data_4_p_0(
  MR_Word Stream_5,
  MR_Word RttiData_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Integer VarNum_8;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(3, RttiData_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3);
    if (succeeded)
      VarNum_8 = ((MR_Integer) ((MR_hl_field(3, Var_12, (MR_Integer) 0))));
  }
  if (succeeded)
    mercury__io__write_int_4_p_0(Stream_5, VarNum_8);
  else
  {
    MR_Word RttiId_9;
    MR_Integer VarNum_14;
    MR_Word Var_16;
    MR_Word Var_17;

    backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_6, &RttiId_9);
    succeeded = ((MR_tag((MR_Word) RttiId_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(0, RttiId_9, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 11)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3);
        if (succeeded)
          VarNum_14 = ((MR_Integer) ((MR_hl_field(3, Var_17, (MR_Integer) 0))));
      }
    }
    if (succeeded)
      mercury__io__write_int_4_p_0(Stream_5, VarNum_14);
    else
    {
      MR_Word IsArray_15;

      IsArray_15 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_9);
      switch (IsArray_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Str_20;
            MR_String Var_21;

            backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_9, &Str_20);
            Var_21 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_21);
            mercury__io__write_string_4_p_0(Stream_5, Str_20);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Str_23;
            MR_String Var_24;

            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "&");
            backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_9, &Str_23);
            Var_24 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_24);
            mercury__io__write_string_4_p_0(Stream_5, Str_23);
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DeclSet_23;

  ll_backend__rtti_out__output_rtti_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DeclSet_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DeclSet_23));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word PseudoTypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_23,
  MR_Word * STATE_VARIABLE_DeclSet_24)
{
  switch (MR_tag((MR_Word) PseudoTypeInfo_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_13 = (MR_Word) ((MR_Word) (PseudoTypeInfo_10));
        MR_Word TypeCtorRttiId_14;
        MR_Word Var_94;
        MR_Integer Var_15;

        {
          TypeCtorRttiId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorRttiId_14, 0) = ((MR_Box) (RttiTypeCtor_13));
          MR_hl_field(0, TypeCtorRttiId_14, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_94, 0) = ((MR_Box) (TypeCtorRttiId_14));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_8, Stream_9, Var_94, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_15, STATE_VARIABLE_DeclSet_0_23, STATE_VARIABLE_DeclSet_24);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_16 = ((MR_Word) ((MR_hl_field(1, PseudoTypeInfo_10, (MR_Integer) 1))));
        MR_Word ArgRttiDatas_18;
        MR_Word STATE_VARIABLE_DeclSet_37_37;
        MR_Word STATE_VARIABLE_DeclSet_40_40;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word RttiTypeCtor_82 = ((MR_Word) ((MR_hl_field(1, PseudoTypeInfo_10, (MR_Integer) 0))));
        MR_Word TypeCtorRttiId_83;
        MR_Word Var_95;
        MR_Word Var_97;
        MR_Word STATE_VARIABLE_DeclSet_19_98;
        MR_Word STATE_VARIABLE_DeclSet_20_109;
        MR_Word Var_110;
        MR_Integer Var_17;
        MR_Box conv3_STATE_VARIABLE_DeclSet_19_98;
        MR_Box conv2_STATE_VARIABLE_IO_20_99;
        MR_Integer Var_96;

        {
          TypeCtorRttiId_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorRttiId_83, 0) = ((MR_Box) (RttiTypeCtor_82));
          MR_hl_field(0, TypeCtorRttiId_83, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_95, 0) = ((MR_Box) (TypeCtorRttiId_83));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_8, Stream_9, Var_95, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_17, STATE_VARIABLE_DeclSet_0_23, &STATE_VARIABLE_DeclSet_37_37);
        ArgRttiDatas_18 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[6]), Args_16);
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[2]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (ll_backend__rtti_out__do_output_pseudo_type_info_defn_7_p_0_2));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (Info_8));
          MR_hl_field(0, Var_97, 4) = ((MR_Box) (Stream_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, ArgRttiDatas_18, ((MR_Box) (STATE_VARIABLE_DeclSet_37_37)), &conv3_STATE_VARIABLE_DeclSet_19_98, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20_99);
        STATE_VARIABLE_DeclSet_19_98 = ((MR_Word) (conv3_STATE_VARIABLE_DeclSet_19_98));
        ll_backend__rtti_out__output_record_rtti_datas_decls_11_p_0(Info_8, Stream_9, ArgRttiDatas_18, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_96, STATE_VARIABLE_DeclSet_19_98, &STATE_VARIABLE_DeclSet_40_40);
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (PseudoTypeInfo_10));
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (RttiTypeCtor_82));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (Var_45));
        }
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, Var_42, (MR_Integer) 1, STATE_VARIABLE_DeclSet_40_40, &STATE_VARIABLE_DeclSet_20_109);
        {
          Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_110, 1) = ((MR_Box) (Var_42));
        }
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_110, STATE_VARIABLE_DeclSet_20_109, STATE_VARIABLE_DeclSet_24);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_5_p_0(Stream_9, RttiTypeCtor_82, (MR_Word) ((MR_Unsigned) 44U));
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0((MR_String) "(MR_PseudoTypeInfo) ", ArgRttiDatas_18, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}};\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RttiVarArityId_19 = ((MR_Unsigned) ((MR_hl_field(2, PseudoTypeInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_21;
        MR_Word STATE_VARIABLE_DeclSet_60_60;
        MR_Word STATE_VARIABLE_DeclSet_63_63;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word RttiTypeCtor_84;
        MR_Word TypeCtorRttiId_85;
        MR_Word Args_86 = ((MR_Word) ((MR_hl_field(2, PseudoTypeInfo_10, (MR_Integer) 1))));
        MR_Word ArgRttiDatas_87;
        MR_Integer Var_20;

        RttiTypeCtor_84 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(RttiVarArityId_19);
        {
          TypeCtorRttiId_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorRttiId_85, 0) = ((MR_Box) (RttiTypeCtor_84));
          MR_hl_field(0, TypeCtorRttiId_85, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_11_p_0(Info_8, Stream_9, TypeCtorRttiId_85, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_20, STATE_VARIABLE_DeclSet_0_23, &STATE_VARIABLE_DeclSet_60_60);
        ArgRttiDatas_87 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[7]), Args_86);
        ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0(Info_8, Stream_9, ArgRttiDatas_87, STATE_VARIABLE_DeclSet_60_60, &STATE_VARIABLE_DeclSet_63_63);
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (PseudoTypeInfo_10));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (RttiTypeCtor_84));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (Var_68));
        }
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, Var_65, STATE_VARIABLE_DeclSet_63_63, STATE_VARIABLE_DeclSet_24);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_5_p_0(Stream_9, RttiTypeCtor_84, (MR_Word) ((MR_Unsigned) 44U));
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_86, &Arity_21);
        mercury__io__write_int_4_p_0(Stream_9, Arity_21);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0((MR_String) "(MR_PseudoTypeInfo) ", ArgRttiDatas_87, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}};\n");
      }
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_DeclSet_24 = STATE_VARIABLE_DeclSet_0_23;
      break;
  }
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DeclSet_23;

  ll_backend__rtti_out__output_rtti_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DeclSet_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DeclSet_23));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TypeInfo_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  switch (MR_tag((MR_Word) TypeInfo_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_13 = (MR_Word) ((MR_Word) (TypeInfo_10));
        MR_Word TypeCtorRttiId_14;
        MR_Word Var_93;
        MR_Integer Var_15;

        {
          TypeCtorRttiId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorRttiId_14, 0) = ((MR_Box) (RttiTypeCtor_13));
          MR_hl_field(0, TypeCtorRttiId_14, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          Var_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_93, 0) = ((MR_Box) (TypeCtorRttiId_14));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_8, Stream_9, Var_93, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_15, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_16 = ((MR_Word) ((MR_hl_field(1, TypeInfo_10, (MR_Integer) 1))));
        MR_Word ArgRttiDatas_18;
        MR_Word STATE_VARIABLE_DeclSet_36_36;
        MR_Word STATE_VARIABLE_DeclSet_39_39;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word RttiTypeCtor_81 = ((MR_Word) ((MR_hl_field(1, TypeInfo_10, (MR_Integer) 0))));
        MR_Word TypeCtorRttiId_82;
        MR_Word Var_94;
        MR_Word Var_96;
        MR_Word STATE_VARIABLE_DeclSet_19_97;
        MR_Word STATE_VARIABLE_DeclSet_20_108;
        MR_Word Var_109;
        MR_Integer Var_17;
        MR_Box conv3_STATE_VARIABLE_DeclSet_19_97;
        MR_Box conv2_STATE_VARIABLE_IO_20_98;
        MR_Integer Var_95;

        {
          TypeCtorRttiId_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorRttiId_82, 0) = ((MR_Box) (RttiTypeCtor_81));
          MR_hl_field(0, TypeCtorRttiId_82, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_94, 0) = ((MR_Box) (TypeCtorRttiId_82));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_8, Stream_9, Var_94, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_17, STATE_VARIABLE_DeclSet_0_22, &STATE_VARIABLE_DeclSet_36_36);
        ArgRttiDatas_18 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[4]), Args_16);
        {
          Var_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_96, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[2]));
          MR_hl_field(0, Var_96, 1) = ((MR_Box) (ll_backend__rtti_out__do_output_type_info_defn_7_p_0_2));
          MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_96, 3) = ((MR_Box) (Info_8));
          MR_hl_field(0, Var_96, 4) = ((MR_Box) (Stream_9));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, ArgRttiDatas_18, ((MR_Box) (STATE_VARIABLE_DeclSet_36_36)), &conv3_STATE_VARIABLE_DeclSet_19_97, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20_98);
        STATE_VARIABLE_DeclSet_19_97 = ((MR_Word) (conv3_STATE_VARIABLE_DeclSet_19_97));
        ll_backend__rtti_out__output_record_rtti_datas_decls_11_p_0(Info_8, Stream_9, ArgRttiDatas_18, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_95, STATE_VARIABLE_DeclSet_19_97, &STATE_VARIABLE_DeclSet_39_39);
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (TypeInfo_10));
        }
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (RttiTypeCtor_81));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (Var_44));
        }
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, Var_41, (MR_Integer) 1, STATE_VARIABLE_DeclSet_39_39, &STATE_VARIABLE_DeclSet_20_108);
        {
          Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_109, 1) = ((MR_Box) (Var_41));
        }
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_109, STATE_VARIABLE_DeclSet_20_108, STATE_VARIABLE_DeclSet_23);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_5_p_0(Stream_9, RttiTypeCtor_81, (MR_Word) ((MR_Unsigned) 44U));
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0((MR_String) "(MR_TypeInfo) ", ArgRttiDatas_18, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}};\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RttiVarArityId_19 = ((MR_Unsigned) ((MR_hl_field(2, TypeInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_21;
        MR_Word STATE_VARIABLE_DeclSet_59_59;
        MR_Word STATE_VARIABLE_DeclSet_62_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word RttiTypeCtor_83;
        MR_Word TypeCtorRttiId_84;
        MR_Word Args_85 = ((MR_Word) ((MR_hl_field(2, TypeInfo_10, (MR_Integer) 1))));
        MR_Word ArgRttiDatas_86;
        MR_Integer Var_20;

        RttiTypeCtor_83 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(RttiVarArityId_19);
        {
          TypeCtorRttiId_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorRttiId_84, 0) = ((MR_Box) (RttiTypeCtor_83));
          MR_hl_field(0, TypeCtorRttiId_84, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        ll_backend__rtti_out__output_record_rtti_id_decls_11_p_0(Info_8, Stream_9, TypeCtorRttiId_84, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_20, STATE_VARIABLE_DeclSet_0_22, &STATE_VARIABLE_DeclSet_59_59);
        ArgRttiDatas_86 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[5]), Args_85);
        ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0(Info_8, Stream_9, ArgRttiDatas_86, STATE_VARIABLE_DeclSet_59_59, &STATE_VARIABLE_DeclSet_62_62);
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (TypeInfo_10));
        }
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_64, 0) = ((MR_Box) (RttiTypeCtor_83));
          MR_hl_field(0, Var_64, 1) = ((MR_Box) (Var_67));
        }
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, Var_64, STATE_VARIABLE_DeclSet_62_62, STATE_VARIABLE_DeclSet_23);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t&");
        ll_backend__rtti_out__output_ctor_rtti_id_5_p_0(Stream_9, RttiTypeCtor_83, (MR_Word) ((MR_Unsigned) 44U));
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), Args_85, &Arity_21);
        mercury__io__write_int_4_p_0(Stream_9, Arity_21);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n{");
        ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0((MR_String) "(MR_TypeInfo) ", ArgRttiDatas_86, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}};\n");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_5_p_0(
  MR_Word Stream_6,
  MR_Word RttiTypeCtor_7,
  MR_Word RttiName_8)
{
  MR_Word Var_12;
  MR_String Str_13;
  MR_String Var_14;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (RttiName_8));
  }
  backend_libs__rtti__id_to_c_identifier_2_p_0(Var_12, &Str_13);
  Var_14 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_6, Var_14);
  mercury__io__write_string_4_p_0(Stream_6, Str_13);
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_23;

  ll_backend__rtti_out__output_rtti_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_23));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ArgRttiDatas_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_DeclSet_19_19;
  MR_Box conv2_STATE_VARIABLE_DeclSet_19_19;
  MR_Box conv1_STATE_VARIABLE_IO_20_20;
  MR_Integer Var_13;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[2]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, ArgRttiDatas_10, ((MR_Box) (STATE_VARIABLE_DeclSet_0_14)), &conv2_STATE_VARIABLE_DeclSet_19_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
  STATE_VARIABLE_DeclSet_19_19 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_19_19));
  ll_backend__rtti_out__output_record_rtti_datas_decls_11_p_0(Info_8, Stream_9, ArgRttiDatas_10, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_19_19, STATE_VARIABLE_DeclSet_15);
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_11_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_String FirstIndent_4,
  MR_String LaterIndent_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7,
  MR_Word STATE_VARIABLE_DeclSet_0_8,
  MR_Word * STATE_VARIABLE_DeclSet_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DeclSet_9 = STATE_VARIABLE_DeclSet_0_8;
      *STATE_VARIABLE_N_7 = STATE_VARIABLE_N_0_6;
    }
    else
    {
      MR_Word RttiData_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RttiDatas_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_N_40_40;
      MR_Word STATE_VARIABLE_DeclSet_41_41;
      MR_Word Var_45;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_8;

      succeeded = ((((MR_tag((MR_Word) RttiData_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(3, RttiData_27, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 3);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_DeclSet_41_41 = STATE_VARIABLE_DeclSet_0_8;
        STATE_VARIABLE_N_40_40 = STATE_VARIABLE_N_0_6;
      }
      else
      {
        MR_Word RttiId_44;
        MR_Word Var_46;

        backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_27, &RttiId_44);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (RttiId_44));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_1, Stream_2, Var_46, FirstIndent_4, LaterIndent_5, STATE_VARIABLE_N_0_6, &STATE_VARIABLE_N_40_40, STATE_VARIABLE_DeclSet_0_8, &STATE_VARIABLE_DeclSet_41_41);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = RttiDatas_28;
      next_value_of_STATE_VARIABLE_N_0_6 = STATE_VARIABLE_N_40_40;
      next_value_of_STATE_VARIABLE_DeclSet_0_8 = STATE_VARIABLE_DeclSet_41_41;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_N_0_6 = next_value_of_STATE_VARIABLE_N_0_6;
      STATE_VARIABLE_DeclSet_0_8 = next_value_of_STATE_VARIABLE_DeclSet_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_4(
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
  MR_Word conv7_TCDeclSuperRttiId_16;
  MR_Word conv6_STATE_VARIABLE_Counter_27;
  MR_Word conv5_STATE_VARIABLE_DeclSet_29;

  ll_backend__rtti_out__output_type_class_constraint_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_TCDeclSuperRttiId_16, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_DeclSet_29);
  *wrapper_arg_2 = ((MR_Box) (conv7_TCDeclSuperRttiId_16));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Counter_27));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_DeclSet_29));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_RttiId_10;

  ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_RttiId_10);
  *wrapper_arg_3 = ((MR_Box) (conv4_RttiId_10));
}

static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_16;

  ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_16));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Instance_10,
  MR_Word STATE_VARIABLE_DeclSet_0_30,
  MR_Word * STATE_VARIABLE_DeclSet_31)
{
  MR_Word TCName_13 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 0))));
  MR_Word TCTypes_14 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 1))));
  MR_Integer NumTypeVars_15 = ((MR_Integer) ((MR_hl_field(0, Instance_10, (MR_Integer) 2))));
  MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 3))));
  MR_Word TCTypeRttiDatas_18;
  MR_Word TCInstanceTypesRttiId_19;
  MR_Word TCInstanceConstraintsRttiId_20;
  MR_Word TCDeclRttiId_25;
  MR_Word TCInstanceRttiId_27;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_DeclSet_35_35;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_DeclSet_39_39;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_DeclSet_54_54;
  MR_Word STATE_VARIABLE_DeclSet_66_66;
  MR_Word Var_68;
  MR_Integer Var_79;
  MR_Word STATE_VARIABLE_DeclSet_20_119;
  MR_Word Var_120;
  MR_String Str_126;
  MR_String Var_127;
  MR_Box conv2_STATE_VARIABLE_DeclSet_35_35;
  MR_Box conv1_STATE_VARIABLE_IO_36_36;
  MR_Integer Var_26;

  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[1]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, TCTypes_14, ((MR_Box) (STATE_VARIABLE_DeclSet_0_30)), &conv2_STATE_VARIABLE_DeclSet_35_35, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_36);
  STATE_VARIABLE_DeclSet_35_35 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_35_35));
  TCTypeRttiDatas_18 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__rtti_out_scalar_common_2[3]), TCTypes_14);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (TCTypes_14));
  }
  {
    TCInstanceTypesRttiId_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCInstanceTypesRttiId_19, 0) = ((MR_Box) (TCName_13));
    MR_hl_field(1, TCInstanceTypesRttiId_19, 1) = ((MR_Box) (Var_38));
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, TCInstanceTypesRttiId_19, (MR_Integer) 1, STATE_VARIABLE_DeclSet_35_35, &STATE_VARIABLE_DeclSet_20_119);
  {
    Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_120, 1) = ((MR_Box) (TCInstanceTypesRttiId_19));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_120, STATE_VARIABLE_DeclSet_20_119, &STATE_VARIABLE_DeclSet_39_39);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
  ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0((MR_String) "(MR_PseudoTypeInfo) ", TCTypeRttiDatas_18, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (TCTypes_14));
  }
  {
    TCInstanceConstraintsRttiId_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCInstanceConstraintsRttiId_20, 0) = ((MR_Box) (TCName_13));
    MR_hl_field(1, TCInstanceConstraintsRttiId_20, 1) = ((MR_Box) (Var_47));
  }
  if ((Constraints_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DeclSet_54_54 = STATE_VARIABLE_DeclSet_39_39;
  else
  {
    MR_Word ConstraintIds_23;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_DeclSet_50_50;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_DeclSet_20_124;
    MR_Word Var_125;
    MR_Box conv10_Var_24;
    MR_Box conv9_STATE_VARIABLE_DeclSet_50_50;
    MR_Box conv8_STATE_VARIABLE_IO_51_51;

    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[2]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_3));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (TCName_13));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) (TCTypes_14));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_7_p_0_4));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (Info_8));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_48, 5) = ((MR_Box) (Var_52));
    }
    Var_49 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__list__map_foldl3_9_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, Constraints_16, &ConstraintIds_23, ((MR_Box) (Var_49)), &conv10_Var_24, ((MR_Box) (STATE_VARIABLE_DeclSet_39_39)), &conv9_STATE_VARIABLE_DeclSet_50_50, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_51_51);
    STATE_VARIABLE_DeclSet_50_50 = ((MR_Word) (conv9_STATE_VARIABLE_DeclSet_50_50));
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, TCInstanceConstraintsRttiId_20, (MR_Integer) 1, STATE_VARIABLE_DeclSet_50_50, &STATE_VARIABLE_DeclSet_20_124);
    {
      Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_125, 1) = ((MR_Box) (TCInstanceConstraintsRttiId_20));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_125, STATE_VARIABLE_DeclSet_20_124, &STATE_VARIABLE_DeclSet_54_54);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0((MR_String) "(MR_TypeClassConstraint) ", ConstraintIds_23, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  }
  {
    TCDeclRttiId_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCDeclRttiId_25, 0) = ((MR_Box) (TCName_13));
    MR_hl_field(1, TCDeclRttiId_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  ll_backend__rtti_out__output_record_rtti_id_decls_11_p_0(Info_8, Stream_9, TCDeclRttiId_25, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_26, STATE_VARIABLE_DeclSet_54_54, &STATE_VARIABLE_DeclSet_66_66);
  {
    Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_68, 1) = ((MR_Box) (TCTypes_14));
  }
  {
    TCInstanceRttiId_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCInstanceRttiId_27, 0) = ((MR_Box) (TCName_13));
    MR_hl_field(1, TCInstanceRttiId_27, 1) = ((MR_Box) (Var_68));
  }
  ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, TCInstanceRttiId_27, STATE_VARIABLE_DeclSet_66_66, STATE_VARIABLE_DeclSet_31);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t&");
  backend_libs__rtti__id_to_c_identifier_2_p_0(TCDeclRttiId_25, &Str_126);
  Var_127 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_9, Var_127);
  mercury__io__write_string_4_p_0(Stream_9, Str_126);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_int_4_p_0(Stream_9, NumTypeVars_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  Var_79 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), Constraints_16);
  mercury__io__write_int_4_p_0(Stream_9, Var_79);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, TCInstanceTypesRttiId_19);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  if ((Constraints_16 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
  else
    ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, TCInstanceConstraintsRttiId_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_cast_addr_of_rtti_data_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2,
  MR_Word Stream_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\t0\n");
  }
  else
  {
    MR_Word Var_24;

    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\t");
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[1]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_datas_5_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (Cast_1));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Var_24, (MR_String) ",\n\t", HeadVar__2_2, Stream_3);
    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word RttiId_14,
  MR_String FirstIndent_15,
  MR_String LaterIndent_16,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  MR_Word Var_26;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (RttiId_14));
  }
  ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, Var_26, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_20, STATE_VARIABLE_N_21, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_4(
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
  MR_Word conv5_TCDeclSuperRttiId_16;
  MR_Word conv4_STATE_VARIABLE_Counter_27;
  MR_Word conv3_STATE_VARIABLE_DeclSet_29;

  ll_backend__rtti_out__output_type_class_constraint_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_TCDeclSuperRttiId_16, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_DeclSet_29);
  *wrapper_arg_2 = ((MR_Box) (conv5_TCDeclSuperRttiId_16));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Counter_27));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_29));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_RttiId_8;

  ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_RttiId_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_RttiId_8));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_type_class_id_method_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_type_class_id_tvar_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TCDecl_10,
  MR_Word STATE_VARIABLE_DeclSet_0_49,
  MR_Word * STATE_VARIABLE_DeclSet_50)
{
  MR_Word TCId_13 = ((MR_Word) ((MR_hl_field(0, TCDecl_10, (MR_Integer) 0))));
  MR_Integer Version_14 = ((MR_Integer) ((MR_hl_field(0, TCDecl_10, (MR_Integer) 1))));
  MR_Word Supers_15 = ((MR_Word) ((MR_hl_field(0, TCDecl_10, (MR_Integer) 2))));
  MR_Word TCName_16 = ((MR_Word) ((MR_hl_field(0, TCId_13, (MR_Integer) 0))));
  MR_Word TVarNames_17 = ((MR_Word) ((MR_hl_field(0, TCId_13, (MR_Integer) 1))));
  MR_Word MethodIds_18 = ((MR_Word) ((MR_hl_field(0, TCId_13, (MR_Integer) 2))));
  MR_Word ModuleSymName_19 = ((MR_Word) ((MR_hl_field(0, TCName_16, (MR_Integer) 0))));
  MR_String ClassName_20 = ((MR_String) ((MR_hl_field(0, TCName_16, (MR_Integer) 1))));
  MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(0, TCName_16, (MR_Integer) 2))));
  MR_Word TCIdVarNamesRttiId_23;
  MR_Word TCIdMethodIdsRttiId_25;
  MR_Word TCIdRttiId_27;
  MR_Word TCDeclSupersRttiId_29;
  MR_Word TCDeclRttiId_31;
  MR_Integer NumTVarNames_36;
  MR_Integer NumMethodIds_37;
  MR_Integer NumSupers_46;
  MR_Word STATE_VARIABLE_DeclSet_53_53;
  MR_Word STATE_VARIABLE_DeclSet_61_61;
  MR_Word STATE_VARIABLE_DeclSet_69_69;
  MR_String Var_73;
  MR_Word STATE_VARIABLE_DeclSet_105_105;

  {
    TCIdVarNamesRttiId_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCIdVarNamesRttiId_23, 0) = ((MR_Box) (TCName_16));
    MR_hl_field(1, TCIdVarNamesRttiId_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  {
    TCIdMethodIdsRttiId_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCIdMethodIdsRttiId_25, 0) = ((MR_Box) (TCName_16));
    MR_hl_field(1, TCIdMethodIdsRttiId_25, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  {
    TCIdRttiId_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCIdRttiId_27, 0) = ((MR_Box) (TCName_16));
    MR_hl_field(1, TCIdRttiId_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TCDeclSupersRttiId_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCDeclSupersRttiId_29, 0) = ((MR_Box) (TCName_16));
    MR_hl_field(1, TCDeclSupersRttiId_29, 1) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  {
    TCDeclRttiId_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCDeclRttiId_31, 0) = ((MR_Box) (TCName_16));
    MR_hl_field(1, TCDeclRttiId_31, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  if ((TVarNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DeclSet_53_53 = STATE_VARIABLE_DeclSet_0_49;
  else
  {
    MR_Word Var_57;
    MR_Box conv0_STATE_VARIABLE_IO_58_58;

    ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, TCIdVarNamesRttiId_23, STATE_VARIABLE_DeclSet_0_49, &STATE_VARIABLE_DeclSet_53_53);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[0]));
      MR_hl_field(0, Var_57, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_1));
      MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_57, 3) = ((MR_Box) (Stream_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, TVarNames_17, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_58_58);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  }
  if ((MethodIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DeclSet_61_61 = STATE_VARIABLE_DeclSet_53_53;
  else
  {
    MR_Word Var_65;
    MR_Box conv1_STATE_VARIABLE_IO_66_66;

    ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, TCIdMethodIdsRttiId_25, STATE_VARIABLE_DeclSet_53_53, &STATE_VARIABLE_DeclSet_61_61);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[1]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_2));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (Stream_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, MethodIds_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_66_66);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  }
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVarNames_17, &NumTVarNames_36);
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0), MethodIds_18, &NumMethodIds_37);
  ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, TCIdRttiId_27, STATE_VARIABLE_DeclSet_61_61, &STATE_VARIABLE_DeclSet_69_69);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t");
  Var_73 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_19);
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_9, Var_73);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_9, ClassName_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_int_4_p_0(Stream_9, Arity_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_int_4_p_0(Stream_9, NumTVarNames_36);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_int_4_p_0(Stream_9, NumMethodIds_37);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  if ((TVarNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
  else
    ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, TCIdVarNamesRttiId_23);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  if ((MethodIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
  else
    ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, TCIdMethodIdsRttiId_25);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
  if ((Supers_15 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DeclSet_105_105 = STATE_VARIABLE_DeclSet_69_69;
  else
  {
    MR_Word SuperIds_44;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word STATE_VARIABLE_DeclSet_101_101;
    MR_Word Var_103;
    MR_Box conv8_Var_45;
    MR_Box conv7_STATE_VARIABLE_DeclSet_101_101;
    MR_Box conv6_STATE_VARIABLE_IO_102_102;

    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_103, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[2]));
      MR_hl_field(0, Var_103, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_3));
      MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_103, 3) = ((MR_Box) (TCName_16));
    }
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_99, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
      MR_hl_field(0, Var_99, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_7_p_0_4));
      MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_99, 3) = ((MR_Box) (Info_8));
      MR_hl_field(0, Var_99, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_99, 5) = ((MR_Box) (Var_103));
    }
    Var_100 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__list__map_foldl3_9_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_99, Supers_15, &SuperIds_44, ((MR_Box) (Var_100)), &conv8_Var_45, ((MR_Box) (STATE_VARIABLE_DeclSet_69_69)), &conv7_STATE_VARIABLE_DeclSet_101_101, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_102_102);
    STATE_VARIABLE_DeclSet_101_101 = ((MR_Word) (conv7_STATE_VARIABLE_DeclSet_101_101));
    ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, TCDeclSupersRttiId_29, STATE_VARIABLE_DeclSet_101_101, &STATE_VARIABLE_DeclSet_105_105);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0((MR_String) "(MR_TypeClassConstraint) ", SuperIds_44, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  }
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), Supers_15, &NumSupers_46);
  ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(Info_8, Stream_9, TCDeclRttiId_31, STATE_VARIABLE_DeclSet_105_105, STATE_VARIABLE_DeclSet_50);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n\t&");
  ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, TCIdRttiId_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_int_4_p_0(Stream_9, Version_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  mercury__io__write_int_4_p_0(Stream_9, NumSupers_46);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t");
  if ((Supers_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
  else
    ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_9, TCDeclSupersRttiId_29);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__rtti_out__output_cast_addr_of_rtti_id_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0(
  MR_String Cast_1,
  MR_Word HeadVar__2_2,
  MR_Word Stream_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\t0\n");
  }
  else
  {
    MR_Word Var_24;

    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\t");
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_5[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_ids_5_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (Cast_1));
    }
    parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), Var_24, (MR_String) ",\n\t", HeadVar__2_2, Stream_3);
    mercury__io__write_string_4_p_0(Stream_3, (MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word RttiId_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  MR_Word STATE_VARIABLE_DeclSet_20_20;
  MR_Word Var_22;

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, RttiId_10, (MR_Integer) 1, STATE_VARIABLE_DeclSet_0_13, &STATE_VARIABLE_DeclSet_20_20);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (RttiId_10));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_22, STATE_VARIABLE_DeclSet_20_20, STATE_VARIABLE_DeclSet_14);
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_4_p_0(
  MR_Word Stream_5,
  MR_Word RttiId_6)
{
  MR_String Str_8;
  MR_String Var_11;

  backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_6, &Str_8);
  Var_11 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_5, Var_11);
  mercury__io__write_string_4_p_0(Stream_5, Str_8);
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word RttiData_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Var_19;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(3, RttiData_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
  else
  {
    MR_Word RttiId_14;
    MR_Word STATE_VARIABLE_DeclSet_18_21;
    MR_Word Var_24;

    backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_10, &RttiId_14);
    ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(Info_8, Stream_9, RttiId_14, (MR_Integer) 0, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_18_21);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (RttiId_14));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_24, STATE_VARIABLE_DeclSet_18_21, STATE_VARIABLE_DeclSet_16);
  }
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word RttiId_11,
  MR_Word BeingDefined_12,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  MR_Word Linkage_15;
  MR_String LinkageStr_16;
  MR_Word Globals_17;
  MR_Word InclCodeAddr_18;
  MR_String ConstStr_19;
  MR_String CType_20;
  MR_Word IsArray_21;
  MR_Word IsArray_65;
  MR_String Str_67;
  MR_String Var_68;

  ll_backend__rtti_out__output_rtti_type_decl_6_p_0(Stream_10, RttiId_11, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
  IsArray_65 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_11);
  switch (IsArray_65) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Linkage_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Exported_66;

        Exported_66 = backend_libs__rtti__rtti_id_is_exported_1_f_0(RttiId_11);
        switch (Exported_66) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Linkage_15 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Linkage_15 = (MR_Integer) 0;
            break;
        }
      }
      break;
  }
  LinkageStr_16 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(Linkage_15, BeingDefined_12);
  Globals_17 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 8))));
  InclCodeAddr_18 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(RttiId_11);
  ConstStr_19 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(Globals_17, InclCodeAddr_18);
  backend_libs__rtti__rtti_id_c_type_3_p_0(RttiId_11, &CType_20, &IsArray_21);
  mercury__io__write_string_4_p_0(Stream_10, LinkageStr_16);
  mercury__io__write_string_4_p_0(Stream_10, ConstStr_19);
  mercury__io__write_string_4_p_0(Stream_10, CType_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ");
  backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_11, &Str_67);
  Var_68 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_10, Var_68);
  mercury__io__write_string_4_p_0(Stream_10, Str_67);
  switch (IsArray_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[]");
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word RttiId_8,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19)
{
  MR_bool succeeded = ((MR_tag((MR_Word) RttiId_8)) == (MR_Integer) 0);
  MR_Integer Arity_13;
  MR_Word RttiName_12;
  MR_Integer Var_22;

  if (succeeded)
  {
    RttiName_12 = ((MR_Word) ((MR_hl_field(0, RttiId_8, (MR_Integer) 1))));
    succeeded = ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(RttiName_12, &Arity_13);
    if (succeeded)
    {
      Var_22 = ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0();
      succeeded = (Arity_13 > Var_22);
    }
  }
  if (succeeded)
  {
    MR_Word DeclId_14;
    MR_Word STATE_VARIABLE_DeclSet_23_23;

    {
      DeclId_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, DeclId_14, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, DeclId_14, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(DeclId_14, STATE_VARIABLE_DeclSet_0_18, &STATE_VARIABLE_DeclSet_23_23);
    if (succeeded)
    {
      MR_String Var_54;
      MR_String Var_64;
      MR_String Var_74;

      *STATE_VARIABLE_DeclSet_19 = STATE_VARIABLE_DeclSet_23_23;
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#ifndef MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_13, &Var_54);
      mercury__io__write_string_4_p_0(Stream_7, Var_54);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_GUARD\n#define MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_13, &Var_64);
      mercury__io__write_string_4_p_0(Stream_7, Var_64);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_GUARD\nMR_DECLARE_ALL_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_13, &Var_74);
      mercury__io__write_string_4_p_0(Stream_7, Var_74);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ");\n#endif\n");
    }
    else
      *STATE_VARIABLE_DeclSet_19 = STATE_VARIABLE_DeclSet_0_18;
  }
  else
  {
    MR_Integer Arity_50;
    MR_Word TCRttiName_17;
    MR_Integer Var_33;

    succeeded = ((MR_tag((MR_Word) RttiId_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      TCRttiName_17 = ((MR_Word) ((MR_hl_field(1, RttiId_8, (MR_Integer) 1))));
      succeeded = ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(TCRttiName_17, &Arity_50);
      if (succeeded)
      {
        Var_33 = ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0();
        succeeded = (Arity_50 > Var_33);
      }
    }
    if (succeeded)
    {
      MR_Word DeclId_48;
      MR_Word STATE_VARIABLE_DeclSet_34_34;

      {
        DeclId_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, DeclId_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, DeclId_48, 1) = ((MR_Box) (Arity_50));
      }
      succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(DeclId_48, STATE_VARIABLE_DeclSet_0_18, &STATE_VARIABLE_DeclSet_34_34);
      if (succeeded)
      {
        MR_String Var_85;
        MR_String Var_95;
        MR_String Var_105;
        MR_String Var_115;

        *STATE_VARIABLE_DeclSet_19 = STATE_VARIABLE_DeclSet_34_34;
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#ifndef MR_TYPECLASS_CONSTRAINT_STRUCT_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_50, &Var_85);
        mercury__io__write_string_4_p_0(Stream_7, Var_85);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_GUARD\n#define MR_TYPECLASS_CONSTRAINT_STRUCT_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_50, &Var_95);
        mercury__io__write_string_4_p_0(Stream_7, Var_95);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_GUARD\nMR_DEFINE_TYPECLASS_CONSTRAINT_STRUCT(MR_TypeClassConstraint_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_50, &Var_105);
        mercury__io__write_string_4_p_0(Stream_7, Var_105);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__rtti_out_scalar_common_3[7]), Arity_50, &Var_115);
        mercury__io__write_string_4_p_0(Stream_7, Var_115);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ");\n#endif\n");
      }
      else
        *STATE_VARIABLE_DeclSet_19 = STATE_VARIABLE_DeclSet_0_18;
    }
    else
      *STATE_VARIABLE_DeclSet_19 = STATE_VARIABLE_DeclSet_0_18;
  }
}

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void)
{
  return (MR_Integer) 10;
}

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
  MR_Word TCRttiName_3,
  MR_Integer * Arity_4)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) TCRttiName_3)) == (MR_Integer) 2))
  {
    *Arity_4 = ((MR_Integer) ((MR_hl_field(2, TCRttiName_3, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) TCRttiName_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    *Arity_4 = ((MR_Integer) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 3))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void)
{
  return (MR_Integer) 20;
}

static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
  MR_Word RttiName_3,
  MR_Integer * NumArgTypes_4)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) RttiName_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiName_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
  {
    MR_Word PseudoTypeInfo_10 = ((MR_Word) ((MR_hl_field(3, RttiName_3, (MR_Integer) 1))));

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
          MR_Word ArgTypes_15 = ((MR_Word) ((MR_hl_field(1, PseudoTypeInfo_10, (MR_Integer) 1))));

          mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), ArgTypes_15, NumArgTypes_4);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgTypes_18 = ((MR_Word) ((MR_hl_field(2, PseudoTypeInfo_10, (MR_Integer) 1))));

          mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), ArgTypes_18, NumArgTypes_4);
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  else
  if (((((MR_tag((MR_Word) RttiName_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiName_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
  {
    MR_Word TypeInfo_5 = ((MR_Word) ((MR_hl_field(3, RttiName_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) TypeInfo_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *NumArgTypes_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(1, TypeInfo_5, (MR_Integer) 1))));

          mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), ArgTypes_7, NumArgTypes_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(2, TypeInfo_5, (MR_Integer) 1))));

          mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), ArgTypes_20, NumArgTypes_4);
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_17;

  ll_backend__rtti_out__output_rtti_data_decl_group_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_17));
}

void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word RttiDatas_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_Word GroupMap_13;
  MR_Word GroupList_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box conv2_STATE_VARIABLE_DeclSet_16;
  MR_Box conv1_STATE_VARIABLE_IO_18;

  Var_19 = mercury__multi_map__init_0_f_0((MR_Word) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0));
  ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(RttiDatas_10, Var_19, &GroupMap_13);
  mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), GroupMap_13, &GroupList_14);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_list_7_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__rtti_out_scalar_common_2[0]), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, GroupList_14, ((MR_Box) (STATE_VARIABLE_DeclSet_0_15)), &conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  *STATE_VARIABLE_DeclSet_16 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_16));
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_GroupMap_3 = STATE_VARIABLE_GroupMap_0_2;
    else
    {
      MR_Word RttiData_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RttiDatas_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_GroupMap_19_19;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GroupMap_0_2;

      succeeded = ((((MR_tag((MR_Word) RttiData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(3, RttiData_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3);
        if (succeeded)
        {
        }
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
        MR_Word IsArray_22;

        backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_7, &RttiId_11);
        backend_libs__rtti__rtti_id_c_type_3_p_0(RttiId_11, &CType_12, &IsArray_13);
        IsArray_22 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_11);
        switch (IsArray_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Linkage_14 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Exported_23;

              Exported_23 = backend_libs__rtti__rtti_id_is_exported_1_f_0(RttiId_11);
              switch (Exported_23) {
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
          Group_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Group_15, 0) = ((MR_Box) (CType_12));
          MR_hl_field(0, Group_15, 1) = (MR_Box) (((((MR_Unsigned) (IsArray_13) << 1)) | (MR_Unsigned) (Linkage_14)));
        }
        mercury__multi_map__add_4_p_0((MR_Word) (&ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), ((MR_Box) (Group_15)), ((MR_Box) (RttiId_11)), STATE_VARIABLE_GroupMap_0_2, &STATE_VARIABLE_GroupMap_19_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RttiDatas_8;
      next_value_of_STATE_VARIABLE_GroupMap_0_2 = STATE_VARIABLE_GroupMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GroupMap_0_2 = next_value_of_STATE_VARIABLE_GroupMap_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__rtti_out____Unify____data_group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__rtti_out____Compare____data_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.rtti_out.
