/*
** Automatically generated from `rtti_out.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 1134 "rtti_out.m"
struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s {
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13;
#line 1152 "rtti_out.m"
  MR_bool ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded;
#line 1141 "rtti_out.m"
  jmp_buf ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0;
#line 1141 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17;
#line 1141 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20;
#line 1141 "rtti_out.m"
  MR_Box ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17;
#line 1134 "rtti_out.m"
};

#line 871 "rtti_out.m"
struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s {
#line 874 "rtti_out.m"
  MR_bool ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded;
#line 874 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_111_111;
#line 874 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_20;
#line 879 "rtti_out.m"
  jmp_buf ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0;
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_115_115;
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_42_42;
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_114_114;
#line 879 "rtti_out.m"
  MR_Box ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_V_114_114;
#line 871 "rtti_out.m"
};


#line 198 "ll_backend.rtti_out.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 201 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 204 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 207 "ll_backend.rtti_out.c"
static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 210 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

#line 213 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 216 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;

#line 219 "ll_backend.rtti_out.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 222 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 225 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 228 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 231 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

#line 234 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 237 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 240 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 243 "ll_backend.rtti_out.c"
static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3];

#line 246 "ll_backend.rtti_out.c"
static const MR_ConstString ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0[3];

#line 249 "ll_backend.rtti_out.c"
static const MR_DuArgLocn ll_backend__rtti_out__ll_backend__rtti_out__field_locns_data_group_0_0[3];

#line 252 "ll_backend.rtti_out.c"
static const MR_DuFunctorDesc ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0;

#line 255 "ll_backend.rtti_out.c"
static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1];

#line 258 "ll_backend.rtti_out.c"
static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1];

#line 261 "ll_backend.rtti_out.c"
static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1];

#line 264 "ll_backend.rtti_out.c"
static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1];

#line 267 "ll_backend.rtti_out.c"
static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
#line 270 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 272 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_2);

#line 275 "ll_backend.rtti_out.c"
static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
#line 278 "ll_backend.rtti_out.c"
  MR_Box * ll_backend__rtti_out__wrapper_arg_1,
#line 280 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 282 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_3);

#line 1401 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1401__1_2_p_0(
#line 1401 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_33,
#line 1401 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HeadVar__2_34);

#line 1366 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1366__1_2_p_0(
#line 1366 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__NumSymbolicResFunctorReps_19,
#line 1366 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__HeadVar__2_30);

#line 1316 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1316__1_2_p_0(
#line 1316 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__HeadVar__3_3,
#line 1316 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ptag_12);

#line 1260 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1260__1_2_p_0(
#line 1260 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_34,
#line 1260 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HeadVar__2_35);

#line 1130 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1130__1_1_p_0(
#line 1130 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeNames_12);

#line 1117 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1117__1_1_p_0(
#line 1117 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgTypes_12);

#line 723 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__723__1_2_p_0(
#line 723 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Lang_25,
#line 723 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_95);

#line 879 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeInfo_for_T_9,
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

#line 1471 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
#line 1471 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HeadVar__1_1,
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__3_3);

#line 1471 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0(
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

#line 2001 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_3_p_0(
#line 2001 "rtti_out.m"
  MR_Word ll_backend__rtti_out__CodeAddr_4);

#line 1968 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_3_p_0(
#line 1968 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Locn_4);

#line 1945 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(
#line 1945 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeName_4);

#line 1937 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(
#line 1937 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1937 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiName_6);

#line 1926 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(
#line 1926 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1926 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiName_6);

#line 1899 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(
#line 1899 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_5,
#line 1899 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_6);

#line 1874 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1(
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1874 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1864 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0(
#line 1864 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_1,
#line 1864 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

#line 1851 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1(
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1851 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1841 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0(
#line 1841 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_1,
#line 1841 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2);

#line 1832 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(
#line 1832 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 1832 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_12,
#line 1832 "rtti_out.m"
  MR_String ll_backend__rtti_out__FirstIndent_13,
#line 1832 "rtti_out.m"
  MR_String ll_backend__rtti_out__LaterIndent_14,
#line 1832 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_18,
#line 1832 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_19,
#line 1832 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 1832 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);

#line 1816 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(
#line 1816 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 1816 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiData_12,
#line 1816 "rtti_out.m"
  MR_String ll_backend__rtti_out__FirstIndent_13,
#line 1816 "rtti_out.m"
  MR_String ll_backend__rtti_out__LaterIndent_14,
#line 1816 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_20,
#line 1816 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_21,
#line 1816 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22,
#line 1816 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23);

#line 1804 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(
#line 1804 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_1,
#line 1804 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1804 "rtti_out.m"
  MR_String ll_backend__rtti_out__FirstIndent_3,
#line 1804 "rtti_out.m"
  MR_String ll_backend__rtti_out__LaterIndent_4,
#line 1804 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_5,
#line 1804 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_6,
#line 1804 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7,
#line 1804 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_8);

#line 1788 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_6_p_0(
#line 1788 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__FieldNum_1,
#line 1788 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1788 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_3,
#line 1788 "rtti_out.m"
  MR_String ll_backend__rtti_out__InstanceStr_4);

#line 1705 "rtti_out.m"
static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void);

#line 1697 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
#line 1697 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCRttiName_1,
#line 1697 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__Arity_2);

#line 1693 "rtti_out.m"
static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void);

#line 1674 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
#line 1674 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiName_1,
#line 1674 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__NumArgTypes_2);

#line 1629 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_5_p_0(
#line 1629 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_6,
#line 1629 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
#line 1629 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);

#line 1591 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(
#line 1591 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 1591 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_8,
#line 1591 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_11,
#line 1591 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_12);

#line 1544 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(
#line 1544 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1544 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1544 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3,
#line 1544 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_4);

#line 1517 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Group_9,
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiIds_10,
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 1517 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

#line 1514 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1(
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1514 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1514 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 1502 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(
#line 1502 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 1502 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1502 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_14,
#line 1502 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_15);

#line 1483 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(
#line 1483 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1483 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2,
#line 1483 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_GroupMap_3);

#line 1466 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0_1(
#line 1466 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1466 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1466 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1466 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1457 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0(
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorNumberMap_10,
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 1457 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

#line 1439 "rtti_out.m"
static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
#line 1439 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ProcLabel_3);

#line 1411 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(
#line 1411 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1411 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeResFunctor_6);

#line 1407 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2(
#line 1407 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1407 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1407 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1407 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1401 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1(
#line 1401 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1401 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1401 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2);

#line 1394 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__NameArityMap_10,
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
#line 1394 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);

#line 1373 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4(
#line 1373 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1373 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1373 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1373 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1366 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3(
#line 1366 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg);

#line 1362 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2(
#line 1362 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1362 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1361 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1(
#line 1361 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1361 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1355 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ResFunctors_11,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__DuPtagTable_12,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 1355 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);

#line 1348 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_addr_functors_4_p_0(
#line 1348 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1348 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ResFunctor_6);

#line 1316 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1(
#line 1316 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg);

#line 1310 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(
#line 1310 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1310 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1310 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__HeadVar__3_3);

#line 1292 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1(
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1292 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1292 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 1286 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__PtagMap_10,
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
#line 1286 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1278 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1(
#line 1278 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1278 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1270 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__3_3,
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
#line 1270 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1262 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2(
#line 1262 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1262 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1260 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1(
#line 1260 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1260 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1260 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2);

#line 1253 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__NameArityMap_10,
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 1253 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1245 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1(
#line 1245 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1245 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1238 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1238 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1230 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1(
#line 1230 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1230 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1223 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
#line 1223 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1215 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1(
#line 1215 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1215 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1208 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1208 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1200 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1(
#line 1200 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1200 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1193 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1193 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

#line 1156 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_2_4_p_0(
#line 1156 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1156 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__PrevSlotNum_2);

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_3(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 1134 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0(
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_10,
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_11,
#line 1134 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_12,
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgInfos_13,
#line 1134 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HaveArgLocns_14,
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 1134 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

#line 1963 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_2(
#line 1963 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1963 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1963 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1963 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1130 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_1(
#line 1130 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg);

#line 1121 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0(
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1121 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeNames_12,
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1121 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

#line 1874 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_4(
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1874 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1117 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_3(
#line 1117 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg);

#line 1109 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_2(
#line 1109 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1109 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1107 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_1(
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1107 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1107 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 1102 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0(
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1102 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgTypes_12,
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 1102 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

#line 1066 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_info_8_p_0(
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1066 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ExistInfo_12,
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_24,
#line 1066 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25);

#line 1851 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3(
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1851 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1056 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2(
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_8);

#line 1057 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1(
#line 1057 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1057 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1057 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1057 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1050 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0(
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1050 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Constraints_12,
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_18,
#line 1050 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_19);

#line 1043 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
#line 1043 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_6,
#line 1043 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_7,
#line 1043 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__TCNum_8,
#line 1043 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Arity_9,
#line 1043 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__RttiId_10);

#line 1990 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0_1(
#line 1990 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1990 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1990 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1990 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 1023 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0(
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1023 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Locns_12,
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 1023 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

#line 1007 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeResFunctor_10,
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1007 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

#line 878 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_2(
#line 878 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 878 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 877 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_1(
#line 877 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 877 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_5(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg);

#line 871 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0(
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__DuFunctor_10,
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_36,
#line 871 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37);

#line 833 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_7_p_0(
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__NotagFunctor_10,
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 833 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

#line 814 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ForeignEnumFunctor_10,
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 814 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);

#line 800 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_7_p_0(
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__EnumFunctor_10,
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 800 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);

#line 753 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5(
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 753 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 753 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 725 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4(
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 725 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 725 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 723 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3(
#line 723 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg);

#line 709 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2(
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 709 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 709 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 739 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1(
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 739 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 739 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 698 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_12,
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeCtorDetails_13,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__MaybeFunctorsName_14,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__MaybeLayoutName_15,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HaveFunctorNumberMap_16,
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);

#line 626 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1(
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 626 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 626 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 611 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(
#line 611 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 611 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeCtorData_8,
#line 611 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_34,
#line 611 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35);

#line 605 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1(
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 605 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 605 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 595 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(
#line 595 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 595 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgRttiDatas_8,
#line 595 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
#line 595 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);

#line 575 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2(
#line 575 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 575 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 556 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1(
#line 556 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 556 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 541 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(
#line 541 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 541 "rtti_out.m"
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
#line 541 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 541 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);

#line 523 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(
#line 523 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 523 "rtti_out.m"
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
#line 523 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 523 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

#line 507 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2(
#line 507 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 507 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 490 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1(
#line 490 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 490 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 476 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0(
#line 476 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 476 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeInfo_8,
#line 476 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 476 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);

#line 463 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_info_defn_6_p_0(
#line 463 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 463 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeInfo_8,
#line 463 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
#line 463 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);

#line 450 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(
#line 450 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 450 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
#line 450 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 450 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

#line 434 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(
#line 434 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 434 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
#line 434 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 434 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);

#line 423 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_2(
#line 423 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 423 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 421 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_1(
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 421 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 421 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 408 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0(
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MakeRttiId_12,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Constraint_13,
#line 408 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__TCDeclSuperRttiId_14,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_Counter_0_24,
#line 408 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_Counter_25,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_26,
#line 408 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_27);

#line 391 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
#line 391 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_6,
#line 391 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCTypes_7,
#line 391 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_8,
#line 391 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__NumTypes_9,
#line 391 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__RttiId_10);

#line 334 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4(
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_8);

#line 335 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3(
#line 335 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 335 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 335 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 335 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 319 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2(
#line 319 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 319 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 317 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1(
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 317 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 317 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 311 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(
#line 311 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 311 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Instance_8,
#line 311 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_28,
#line 311 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29);

#line 303 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
#line 303 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_5,
#line 303 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_6,
#line 303 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__NumTypes_7,
#line 303 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__RttiId_8);

#line 290 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(
#line 290 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MethodId_4);

#line 283 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(
#line 283 "rtti_out.m"
  MR_String ll_backend__rtti_out__TVarName_4);

#line 255 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4(
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_8);

#line 256 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3(
#line 256 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 256 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 256 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 256 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 218 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2(
#line 218 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 218 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 218 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 218 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 208 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1(
#line 208 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 208 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 208 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 208 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 183 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(
#line 183 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 183 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCDecl_8,
#line 183 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47,
#line 183 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48);

#line 178 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4(
#line 178 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 178 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 178 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 178 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 175 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3(
#line 175 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 175 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 175 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 175 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3);

#line 167 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2(
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 167 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 167 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5);

#line 166 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1(
#line 166 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 166 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 159 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_10,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_11,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__InstanceModuleName_12,
#line 159 "rtti_out.m"
  MR_String ll_backend__rtti_out__InstanceString_13,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__BaseTypeClassInfo_14,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_25,
#line 159 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26);

#line 1738 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1(
#line 1738 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1738 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1);

#line 1481 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1(
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1481 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1481 "rtti_out.m"
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



#line 2724 "ll_backend.rtti_out.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2732 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_ll_backend__rtti_out__type_ctor_info_data_group_0__plain_list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0,
    (MR_PseudoTypeInfo) &ll_backend__rtti_out__list__ti_list_1backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2741 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 2749 "ll_backend.rtti_out.c"
static const MR_VA_PseudoTypeInfo_Struct3 ll_backend__rtti_out____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2760 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

#line 2768 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2776 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0
  }
};

#line 2784 "ll_backend.rtti_out.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2792 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__rtti_out__maybe__ti_maybe_1builtin__type_ctor_info_string_0
  }
};

#line 2800 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2809 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2817 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

#line 2826 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__rtti_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2835 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2843 "ll_backend.rtti_out.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__rtti_out__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2851 "ll_backend.rtti_out.c"
static const MR_PseudoTypeInfo ll_backend__rtti_out__ll_backend__rtti_out__field_types_data_group_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_is_array_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0
};

#line 2858 "ll_backend.rtti_out.c"
static const MR_ConstString ll_backend__rtti_out__ll_backend__rtti_out__field_names_data_group_0_0[3] = {
  (MR_String) "data_c_type",
  (MR_String) "data_is_array",
  (MR_String) "data_linkage"
};

#line 2865 "ll_backend.rtti_out.c"
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

#line 2884 "ll_backend.rtti_out.c"
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
  NULL
};

#line 2899 "ll_backend.rtti_out.c"
static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0[1] = {
  &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0
};

#line 2904 "ll_backend.rtti_out.c"
static const MR_DuPtagLayout ll_backend__rtti_out__ll_backend__rtti_out__du_ptag_ordered_data_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__rtti_out__ll_backend__rtti_out__du_stag_ordered_data_group_0_0
  }
};

#line 2913 "ll_backend.rtti_out.c"
static const MR_DuFunctorDescPtr ll_backend__rtti_out__ll_backend__rtti_out__du_name_ordered_data_group_0[1] = {
  &ll_backend__rtti_out__ll_backend__rtti_out__du_functor_desc_data_group_0_0
};

#line 2918 "ll_backend.rtti_out.c"
static const MR_Integer ll_backend__rtti_out__ll_backend__rtti_out__functor_number_map_data_group_0[1] = {
  (MR_Integer) 0
};

#line 2923 "ll_backend.rtti_out.c"
const MR_TypeCtorInfo_Struct ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2940 "ll_backend.rtti_out.c"
static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0_10001(
#line 2943 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 2945 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_2)
#line 2947 "ll_backend.rtti_out.c"
{
#line 2949 "ll_backend.rtti_out.c"
  {
#line 2951 "ll_backend.rtti_out.c"
    MR_bool ll_backend__rtti_out__succeeded;

#line 2954 "ll_backend.rtti_out.c"
    {
#line 2956 "ll_backend.rtti_out.c"
      ll_backend__rtti_out__succeeded = ll_backend__rtti_out____Unify____data_group_0_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2));
    }
#line 2959 "ll_backend.rtti_out.c"
    return ll_backend__rtti_out__succeeded;
#line 2961 "ll_backend.rtti_out.c"
  }
#line 2963 "ll_backend.rtti_out.c"
}

#line 2966 "ll_backend.rtti_out.c"
static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0_10001(
#line 2969 "ll_backend.rtti_out.c"
  MR_Box * ll_backend__rtti_out__wrapper_arg_1,
#line 2971 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 2973 "ll_backend.rtti_out.c"
  MR_Box ll_backend__rtti_out__wrapper_arg_3)
#line 2975 "ll_backend.rtti_out.c"
{
#line 2977 "ll_backend.rtti_out.c"
  {
#line 2979 "ll_backend.rtti_out.c"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__1_1;

#line 2982 "ll_backend.rtti_out.c"
    {
#line 2984 "ll_backend.rtti_out.c"
      ll_backend__rtti_out____Compare____data_group_0_0(&ll_backend__rtti_out__conv0_HeadVar__1_1, ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), ((MR_Word) ll_backend__rtti_out__wrapper_arg_3));
    }
#line 2987 "ll_backend.rtti_out.c"
    *ll_backend__rtti_out__wrapper_arg_1 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__1_1));
#line 2989 "ll_backend.rtti_out.c"
  }
#line 2991 "ll_backend.rtti_out.c"
}

#line 1401 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1401__1_2_p_0(
#line 1401 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_33,
#line 1401 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HeadVar__2_34)
#line 1401 "rtti_out.m"
{
#line 1401 "rtti_out.m"
  {
#line 1401 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1401 "rtti_out.m"
    {
#line 1401 "rtti_out.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ll_backend__rtti_out__HeadVar__1_33, ll_backend__rtti_out__HeadVar__2_34);
#line 1401 "rtti_out.m"
      return;
    }
#line 1401 "rtti_out.m"
  }
#line 1401 "rtti_out.m"
}

#line 1366 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1366__1_2_p_0(
#line 1366 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__NumSymbolicResFunctorReps_19,
#line 1366 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__HeadVar__2_30)
#line 1366 "rtti_out.m"
{
#line 1366 "rtti_out.m"
  {
#line 1366 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__NumSymbolicResFunctorReps_19 == ll_backend__rtti_out__HeadVar__2_30);

#line 1366 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1366 "rtti_out.m"
  }
#line 1366 "rtti_out.m"
}

#line 1316 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1316__1_2_p_0(
#line 1316 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__HeadVar__3_3,
#line 1316 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ptag_12)
#line 1316 "rtti_out.m"
{
#line 1316 "rtti_out.m"
  {
#line 1316 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Ptag_12 == ll_backend__rtti_out__HeadVar__3_3);

#line 1316 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1316 "rtti_out.m"
  }
#line 1316 "rtti_out.m"
}

#line 1260 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1260__1_2_p_0(
#line 1260 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_34,
#line 1260 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HeadVar__2_35)
#line 1260 "rtti_out.m"
{
#line 1260 "rtti_out.m"
  {
#line 1260 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1260 "rtti_out.m"
    {
#line 1260 "rtti_out.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ll_backend__rtti_out__HeadVar__1_34, ll_backend__rtti_out__HeadVar__2_35);
#line 1260 "rtti_out.m"
      return;
    }
#line 1260 "rtti_out.m"
  }
#line 1260 "rtti_out.m"
}

#line 1130 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1130__1_1_p_0(
#line 1130 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeNames_12)
#line 1130 "rtti_out.m"
{
#line 1130 "rtti_out.m"
  {
#line 1130 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1130 "rtti_out.m"
    {
#line 1130 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_1[2], ll_backend__rtti_out__MaybeNames_12);
    }
#line 1130 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1130 "rtti_out.m"
  }
#line 1130 "rtti_out.m"
}

#line 1117 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1117__1_1_p_0(
#line 1117 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgTypes_12)
#line 1117 "rtti_out.m"
{
#line 1117 "rtti_out.m"
  {
#line 1117 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1117 "rtti_out.m"
    {
#line 1117 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, ll_backend__rtti_out__ArgTypes_12);
    }
#line 1117 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1117 "rtti_out.m"
  }
#line 1117 "rtti_out.m"
}

#line 723 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__723__1_2_p_0(
#line 723 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Lang_25,
#line 723 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_95)
#line 723 "rtti_out.m"
{
#line 723 "rtti_out.m"
  {
#line 723 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Lang_25 == ll_backend__rtti_out__HeadVar__2_95);

#line 723 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 723 "rtti_out.m"
  }
#line 723 "rtti_out.m"
}

#line 879 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____maybe__maybe_1_2(
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeInfo_for_T_9,
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 879 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
#line 879 "rtti_out.m"
{
#line 879 "rtti_out.m"
  {
#line 879 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 879 "rtti_out.m"
    MR_Box ll_backend__rtti_out__V_6_6;

#line 879 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 879 "rtti_out.m"
      {
#line 879 "rtti_out.m"
        ll_backend__rtti_out__V_6_6 = (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0));
#line 879 "rtti_out.m"
        (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)) = ll_backend__rtti_out__V_6_6;
#line 879 "rtti_out.m"
        ll_backend__rtti_out__succeeded = MR_TRUE;
#line 879 "rtti_out.m"
      }
#line 879 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 879 "rtti_out.m"
  }
#line 879 "rtti_out.m"
}

#line 1471 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out____Compare____data_group_0_0(
#line 1471 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HeadVar__1_1,
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__3_3)
#line 1471 "rtti_out.m"
{
#line 1471 "rtti_out.m"
  {
#line 1471 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1471 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__CastX_12 = (MR_Integer) ll_backend__rtti_out__HeadVar__2_2;
#line 1471 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__CastY_13 = (MR_Integer) ll_backend__rtti_out__HeadVar__3_3;

#line 1471 "rtti_out.m"
    ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__CastX_12 == ll_backend__rtti_out__CastY_13);
#line 1471 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 3218 "ll_backend.rtti_out.c"
      *ll_backend__rtti_out__HeadVar__1_1 = (MR_Integer) 0;
#line 1471 "rtti_out.m"
    else
#line 1471 "rtti_out.m"
      {
#line 1471 "rtti_out.m"
        MR_String ll_backend__rtti_out__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_String ll_backend__rtti_out__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 0)));
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_10_10;

#line 1471 "rtti_out.m"
        {
#line 1471 "rtti_out.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__rtti_out__V_10_10, ll_backend__rtti_out__V_4_4, ll_backend__rtti_out__V_7_7);
        }
#line 3244 "ll_backend.rtti_out.c"
        ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_10_10 == (MR_Integer) 0);
#line 1471 "rtti_out.m"
        ll_backend__rtti_out__succeeded = !(ll_backend__rtti_out__succeeded);
#line 1471 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1471 "rtti_out.m"
          *ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__V_10_10;
#line 1471 "rtti_out.m"
        else
#line 1471 "rtti_out.m"
          {
#line 1471 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_11_11;
#line 1471 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__V_17_17 = (MR_Integer) ll_backend__rtti_out__V_5_5;
#line 1471 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__V_18_18 = (MR_Integer) ll_backend__rtti_out__V_8_8;

#line 1471 "rtti_out.m"
            {
#line 1471 "rtti_out.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__rtti_out__V_11_11, ll_backend__rtti_out__V_17_17, ll_backend__rtti_out__V_18_18);
            }
#line 3268 "ll_backend.rtti_out.c"
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_11_11 == (MR_Integer) 0);
#line 1471 "rtti_out.m"
            ll_backend__rtti_out__succeeded = !(ll_backend__rtti_out__succeeded);
#line 1471 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1471 "rtti_out.m"
              *ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__V_11_11;
#line 1471 "rtti_out.m"
            else
#line 1471 "rtti_out.m"
              {
#line 1471 "rtti_out.m"
                MR_Integer ll_backend__rtti_out__V_19_19 = (MR_Integer) ll_backend__rtti_out__V_6_6;
#line 1471 "rtti_out.m"
                MR_Integer ll_backend__rtti_out__V_20_20 = (MR_Integer) ll_backend__rtti_out__V_9_9;

#line 1471 "rtti_out.m"
                {
#line 1471 "rtti_out.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__rtti_out__HeadVar__1_1, ll_backend__rtti_out__V_19_19, ll_backend__rtti_out__V_20_20);
#line 1471 "rtti_out.m"
                  return;
                }
#line 1471 "rtti_out.m"
              }
#line 1471 "rtti_out.m"
          }
#line 1471 "rtti_out.m"
      }
#line 1471 "rtti_out.m"
  }
#line 1471 "rtti_out.m"
}

#line 1471 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out____Unify____data_group_0_0(
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1471 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
#line 1471 "rtti_out.m"
{
#line 1471 "rtti_out.m"
  {
#line 1471 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1471 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__CastX_9 = (MR_Integer) ll_backend__rtti_out__HeadVar__1_1;
#line 1471 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__CastY_10 = (MR_Integer) ll_backend__rtti_out__HeadVar__2_2;

#line 1471 "rtti_out.m"
    ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__CastX_9 == ll_backend__rtti_out__CastY_10);
#line 1471 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1471 "rtti_out.m"
      ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1471 "rtti_out.m"
    else
#line 1471 "rtti_out.m"
      {
#line 1471 "rtti_out.m"
        MR_String ll_backend__rtti_out__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_String ll_backend__rtti_out__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1471 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 3344 "ll_backend.rtti_out.c"
        ll_backend__rtti_out__succeeded = (strcmp(ll_backend__rtti_out__V_3_3, ll_backend__rtti_out__V_6_6) == 0);
#line 1471 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1471 "rtti_out.m"
          {
#line 3350 "ll_backend.rtti_out.c"
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_4_4 == ll_backend__rtti_out__V_7_7);
#line 1471 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 3354 "ll_backend.rtti_out.c"
              ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_5_5 == ll_backend__rtti_out__V_8_8);
#line 1471 "rtti_out.m"
          }
#line 1471 "rtti_out.m"
      }
#line 1471 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1471 "rtti_out.m"
  }
#line 1471 "rtti_out.m"
}

#line 2001 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_static_code_addr_3_p_0(
#line 2001 "rtti_out.m"
  MR_Word ll_backend__rtti_out__CodeAddr_4)
#line 2001 "rtti_out.m"
{
#line 2003 "rtti_out.m"
  {
#line 2003 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 2004 "rtti_out.m"
    {
#line 2004 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_MAYBE_STATIC_CODE(");
    }
#line 2005 "rtti_out.m"
    {
#line 2005 "rtti_out.m"
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__rtti_out__CodeAddr_4);
    }
#line 2006 "rtti_out.m"
    {
#line 2006 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 2006 "rtti_out.m"
      return;
    }
#line 2003 "rtti_out.m"
  }
#line 2001 "rtti_out.m"
}

#line 1968 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_locn_3_p_0(
#line 1968 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Locn_4)
#line 1968 "rtti_out.m"
{
#line 1972 "rtti_out.m"
  {
#line 1972 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1972 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__Locn_4)) == (MR_mktag((MR_Integer) 0))))
#line 1972 "rtti_out.m"
      {
#line 1972 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__SlotInCell_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Locn_4, (MR_Integer) 0)));

#line 1973 "rtti_out.m"
        {
#line 1973 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
#line 1974 "rtti_out.m"
        {
#line 1974 "rtti_out.m"
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__SlotInCell_6);
        }
#line 1975 "rtti_out.m"
        {
#line 1975 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) ", -1 }");
#line 1975 "rtti_out.m"
          return;
        }
#line 1972 "rtti_out.m"
      }
#line 1972 "rtti_out.m"
    else
#line 1977 "rtti_out.m"
      {
#line 1977 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__SlotInTci_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__Locn_4, (MR_Integer) 1)));
#line 1977 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__SlotInCell_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__Locn_4, (MR_Integer) 0)));

#line 1978 "rtti_out.m"
        {
#line 1978 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
#line 1979 "rtti_out.m"
        {
#line 1979 "rtti_out.m"
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__SlotInCell_23);
        }
#line 1980 "rtti_out.m"
        {
#line 1980 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 1981 "rtti_out.m"
        {
#line 1981 "rtti_out.m"
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__SlotInTci_7);
        }
#line 1982 "rtti_out.m"
        {
#line 1982 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " }");
#line 1982 "rtti_out.m"
          return;
        }
#line 1977 "rtti_out.m"
      }
#line 1972 "rtti_out.m"
  }
#line 1968 "rtti_out.m"
}

#line 1945 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(
#line 1945 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeName_4)
#line 1945 "rtti_out.m"
{
#line 1949 "rtti_out.m"
  {
#line 1949 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1949 "rtti_out.m"
    if ((ll_backend__rtti_out__MaybeName_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1954 "rtti_out.m"
      {
#line 1955 "rtti_out.m"
        {
#line 1955 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
#line 1955 "rtti_out.m"
          return;
        }
#line 1954 "rtti_out.m"
      }
#line 1949 "rtti_out.m"
    else
#line 1949 "rtti_out.m"
      {
#line 1949 "rtti_out.m"
        MR_String ll_backend__rtti_out__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeName_4, (MR_Integer) 0)));

#line 1950 "rtti_out.m"
        {
#line 1950 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
#line 1951 "rtti_out.m"
        {
#line 1951 "rtti_out.m"
          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__Name_6);
        }
#line 1952 "rtti_out.m"
        {
#line 1952 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\"");
#line 1952 "rtti_out.m"
          return;
        }
#line 1949 "rtti_out.m"
      }
#line 1949 "rtti_out.m"
  }
#line 1945 "rtti_out.m"
}

#line 1937 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(
#line 1937 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1937 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiName_6)
#line 1937 "rtti_out.m"
{
#line 1940 "rtti_out.m"
  {
#line 1940 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1940 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_10_10;
#line 1940 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_16;
#line 1940 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_17_17;

#line 1941 "rtti_out.m"
    {
#line 1941 "rtti_out.m"
      ll_backend__rtti_out__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_6));
#line 1941 "rtti_out.m"
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_17_17 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_17_17);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_10_10, &ll_backend__rtti_out__Str_16);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_16);
#line 1935 "rtti_out.m"
      return;
    }
#line 1940 "rtti_out.m"
  }
#line 1937 "rtti_out.m"
}

#line 1926 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(
#line 1926 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1926 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiName_6)
#line 1926 "rtti_out.m"
{
#line 1929 "rtti_out.m"
  {
#line 1929 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1929 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_10_10;
#line 1912 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__VarNum_17;
#line 1910 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_19_19;
#line 1910 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_20_20;
#line 1910 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_16_16;

#line 1930 "rtti_out.m"
    {
#line 1930 "rtti_out.m"
      ll_backend__rtti_out__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
#line 1930 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_6));
#line 1930 "rtti_out.m"
    }
#line 1910 "rtti_out.m"
    ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_10_10)) == (MR_mktag((MR_Integer) 0)));
#line 1910 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
      {
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, (MR_Integer) 0)));
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_10_10, (MR_Integer) 1)));
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 1910 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
          {
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 1)));
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_20_20)) == (MR_mktag((MR_Integer) 3)));
#line 1910 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
              ll_backend__rtti_out__VarNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 0)));
#line 1910 "rtti_out.m"
          }
#line 1910 "rtti_out.m"
      }
#line 1912 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1911 "rtti_out.m"
      {
#line 1911 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_17);
#line 1911 "rtti_out.m"
        return;
      }
#line 1912 "rtti_out.m"
    else
#line 1915 "rtti_out.m"
      {
#line 1915 "rtti_out.m"
        MR_Word ll_backend__rtti_out__IsArray_18;

#line 1915 "rtti_out.m"
        {
#line 1915 "rtti_out.m"
          ll_backend__rtti_out__IsArray_18 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__V_10_10);
        }
#line 1919 "rtti_out.m"
#line 1919 "rtti_out.m"
        switch (ll_backend__rtti_out__IsArray_18) {
#line 1919 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1919 "rtti_out.m"
          case (MR_Integer) 0:
#line 1932 "rtti_out.m"
            {
#line 1932 "rtti_out.m"
              MR_String ll_backend__rtti_out__Str_30;
#line 1932 "rtti_out.m"
              MR_String ll_backend__rtti_out__V_31_31;

#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                ll_backend__rtti_out__V_31_31 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_31_31);
              }
#line 1934 "rtti_out.m"
              {
#line 1934 "rtti_out.m"
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_10_10, &ll_backend__rtti_out__Str_30);
              }
#line 1935 "rtti_out.m"
              {
#line 1935 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_30);
#line 1935 "rtti_out.m"
                return;
              }
#line 1932 "rtti_out.m"
            }
#line 1919 "rtti_out.m"
            break;
#line 1919 "rtti_out.m"
          case (MR_Integer) 1:
#line 1920 "rtti_out.m"
            {
#line 1920 "rtti_out.m"
              MR_String ll_backend__rtti_out__Str_38;
#line 1920 "rtti_out.m"
              MR_String ll_backend__rtti_out__V_39_39;

#line 1921 "rtti_out.m"
              {
#line 1921 "rtti_out.m"
                mercury__io__write_string_3_p_0((MR_String) "&");
              }
#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                ll_backend__rtti_out__V_39_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_39_39);
              }
#line 1934 "rtti_out.m"
              {
#line 1934 "rtti_out.m"
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_10_10, &ll_backend__rtti_out__Str_38);
              }
#line 1935 "rtti_out.m"
              {
#line 1935 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_38);
#line 1935 "rtti_out.m"
                return;
              }
#line 1920 "rtti_out.m"
            }
#line 1919 "rtti_out.m"
            break;
#line 1919 "rtti_out.m"
        }
#line 1915 "rtti_out.m"
      }
#line 1929 "rtti_out.m"
  }
#line 1926 "rtti_out.m"
}

#line 1899 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(
#line 1899 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_5,
#line 1899 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_6)
#line 1899 "rtti_out.m"
{
#line 1902 "rtti_out.m"
  {
#line 1902 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1912 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__VarNum_17;
#line 1910 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_19_19;
#line 1910 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_20_20;
#line 1910 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_16_16;

#line 1903 "rtti_out.m"
    {
#line 1903 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Cast_5);
    }
#line 1910 "rtti_out.m"
    ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_6)) == (MR_mktag((MR_Integer) 0)));
#line 1910 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
      {
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 0)));
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 1)));
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 1910 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
          {
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_19_19, (MR_Integer) 1)));
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_20_20)) == (MR_mktag((MR_Integer) 3)));
#line 1910 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
              ll_backend__rtti_out__VarNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 0)));
#line 1910 "rtti_out.m"
          }
#line 1910 "rtti_out.m"
      }
#line 1912 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1911 "rtti_out.m"
      {
#line 1911 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_17);
#line 1911 "rtti_out.m"
        return;
      }
#line 1912 "rtti_out.m"
    else
#line 1915 "rtti_out.m"
      {
#line 1915 "rtti_out.m"
        MR_Word ll_backend__rtti_out__IsArray_18;

#line 1915 "rtti_out.m"
        {
#line 1915 "rtti_out.m"
          ll_backend__rtti_out__IsArray_18 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_6);
        }
#line 1919 "rtti_out.m"
#line 1919 "rtti_out.m"
        switch (ll_backend__rtti_out__IsArray_18) {
#line 1919 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1919 "rtti_out.m"
          case (MR_Integer) 0:
#line 1932 "rtti_out.m"
            {
#line 1932 "rtti_out.m"
              MR_String ll_backend__rtti_out__Str_30;
#line 1932 "rtti_out.m"
              MR_String ll_backend__rtti_out__V_31_31;

#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                ll_backend__rtti_out__V_31_31 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_31_31);
              }
#line 1934 "rtti_out.m"
              {
#line 1934 "rtti_out.m"
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_6, &ll_backend__rtti_out__Str_30);
              }
#line 1935 "rtti_out.m"
              {
#line 1935 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_30);
#line 1935 "rtti_out.m"
                return;
              }
#line 1932 "rtti_out.m"
            }
#line 1919 "rtti_out.m"
            break;
#line 1919 "rtti_out.m"
          case (MR_Integer) 1:
#line 1920 "rtti_out.m"
            {
#line 1920 "rtti_out.m"
              MR_String ll_backend__rtti_out__Str_38;
#line 1920 "rtti_out.m"
              MR_String ll_backend__rtti_out__V_39_39;

#line 1921 "rtti_out.m"
              {
#line 1921 "rtti_out.m"
                mercury__io__write_string_3_p_0((MR_String) "&");
              }
#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                ll_backend__rtti_out__V_39_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
#line 1933 "rtti_out.m"
              {
#line 1933 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_39_39);
              }
#line 1934 "rtti_out.m"
              {
#line 1934 "rtti_out.m"
                backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_6, &ll_backend__rtti_out__Str_38);
              }
#line 1935 "rtti_out.m"
              {
#line 1935 "rtti_out.m"
                mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_38);
#line 1935 "rtti_out.m"
                return;
              }
#line 1920 "rtti_out.m"
            }
#line 1919 "rtti_out.m"
            break;
#line 1919 "rtti_out.m"
        }
#line 1915 "rtti_out.m"
      }
#line 1902 "rtti_out.m"
  }
#line 1899 "rtti_out.m"
}

#line 1874 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1(
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1874 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1874 "rtti_out.m"
{
#line 1874 "rtti_out.m"
  {
#line 1874 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1874 "rtti_out.m"
    {
#line 1874 "rtti_out.m"
      ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1874 "rtti_out.m"
      return;
    }
#line 1874 "rtti_out.m"
  }
#line 1874 "rtti_out.m"
}

#line 1864 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0(
#line 1864 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_1,
#line 1864 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
#line 1864 "rtti_out.m"
{
#line 1867 "rtti_out.m"
  {
#line 1867 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1867 "rtti_out.m"
    if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1867 "rtti_out.m"
      {
#line 1868 "rtti_out.m"
        {
#line 1868 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
#line 1870 "rtti_out.m"
        {
#line 1870 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
#line 1870 "rtti_out.m"
          return;
        }
#line 1867 "rtti_out.m"
      }
#line 1867 "rtti_out.m"
    else
#line 1871 "rtti_out.m"
      {
#line 1871 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_23_23;

#line 1872 "rtti_out.m"
        {
#line 1872 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1874 "rtti_out.m"
        {
#line 1874 "rtti_out.m"
          ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1874 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[2]));
#line 1874 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0_1));
#line 1874 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1874 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 3) = ((MR_Box) (ll_backend__rtti_out__Cast_1));
#line 1874 "rtti_out.m"
        }
#line 1873 "rtti_out.m"
        {
#line 1873 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__rtti_out__HeadVar__2_2, (MR_String) ",\n\t", ll_backend__rtti_out__V_23_23);
        }
#line 1875 "rtti_out.m"
        {
#line 1875 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1875 "rtti_out.m"
          return;
        }
#line 1871 "rtti_out.m"
      }
#line 1867 "rtti_out.m"
  }
#line 1864 "rtti_out.m"
}

#line 1851 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1(
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1851 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1851 "rtti_out.m"
{
#line 1851 "rtti_out.m"
  {
#line 1851 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1851 "rtti_out.m"
    {
#line 1851 "rtti_out.m"
      ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1851 "rtti_out.m"
      return;
    }
#line 1851 "rtti_out.m"
  }
#line 1851 "rtti_out.m"
}

#line 1841 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0(
#line 1841 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_1,
#line 1841 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2)
#line 1841 "rtti_out.m"
{
#line 1844 "rtti_out.m"
  {
#line 1844 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1844 "rtti_out.m"
    if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1844 "rtti_out.m"
      {
#line 1845 "rtti_out.m"
        {
#line 1845 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
#line 1847 "rtti_out.m"
        {
#line 1847 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
#line 1847 "rtti_out.m"
          return;
        }
#line 1844 "rtti_out.m"
      }
#line 1844 "rtti_out.m"
    else
#line 1848 "rtti_out.m"
      {
#line 1848 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_23_23;

#line 1849 "rtti_out.m"
        {
#line 1849 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1851 "rtti_out.m"
        {
#line 1851 "rtti_out.m"
          ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1851 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[1]));
#line 1851 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0_1));
#line 1851 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1851 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 3) = ((MR_Box) (ll_backend__rtti_out__Cast_1));
#line 1851 "rtti_out.m"
        }
#line 1850 "rtti_out.m"
        {
#line 1850 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ll_backend__rtti_out__HeadVar__2_2, (MR_String) ",\n\t", ll_backend__rtti_out__V_23_23);
        }
#line 1852 "rtti_out.m"
        {
#line 1852 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1852 "rtti_out.m"
          return;
        }
#line 1848 "rtti_out.m"
      }
#line 1844 "rtti_out.m"
  }
#line 1841 "rtti_out.m"
}

#line 1832 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(
#line 1832 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 1832 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_12,
#line 1832 "rtti_out.m"
  MR_String ll_backend__rtti_out__FirstIndent_13,
#line 1832 "rtti_out.m"
  MR_String ll_backend__rtti_out__LaterIndent_14,
#line 1832 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_18,
#line 1832 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_19,
#line 1832 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 1832 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
#line 1832 "rtti_out.m"
{
#line 1837 "rtti_out.m"
  {
#line 1837 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1837 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_24_24;

#line 1838 "rtti_out.m"
    {
#line 1838 "rtti_out.m"
      ll_backend__rtti_out__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1838 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_24_24, 0) = ((MR_Box) (ll_backend__rtti_out__RttiId_12));
#line 1838 "rtti_out.m"
    }
#line 1838 "rtti_out.m"
    {
#line 1838 "rtti_out.m"
      ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__V_24_24, ll_backend__rtti_out__FirstIndent_13, ll_backend__rtti_out__LaterIndent_14, ll_backend__rtti_out__STATE_VARIABLE_N_0_18, ll_backend__rtti_out__STATE_VARIABLE_N_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 1838 "rtti_out.m"
      return;
    }
#line 1837 "rtti_out.m"
  }
#line 1832 "rtti_out.m"
}

#line 1816 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(
#line 1816 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 1816 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiData_12,
#line 1816 "rtti_out.m"
  MR_String ll_backend__rtti_out__FirstIndent_13,
#line 1816 "rtti_out.m"
  MR_String ll_backend__rtti_out__LaterIndent_14,
#line 1816 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_20,
#line 1816 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_21,
#line 1816 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22,
#line 1816 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23)
#line 1816 "rtti_out.m"
{
#line 1826 "rtti_out.m"
  {
#line 1826 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1822 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_26_26;
#line 1822 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_18_18;

#line 1822 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1822 "rtti_out.m"
      {
#line 1822 "rtti_out.m"
        ll_backend__rtti_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_12, (MR_Integer) 1)));
#line 1822 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_26_26)) == (MR_mktag((MR_Integer) 3)));
#line 1822 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1822 "rtti_out.m"
          ll_backend__rtti_out__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_26_26, (MR_Integer) 0)));
#line 1822 "rtti_out.m"
      }
#line 1826 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1825 "rtti_out.m"
      {
#line 1825 "rtti_out.m"
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22;
#line 1825 "rtti_out.m"
        *ll_backend__rtti_out__STATE_VARIABLE_N_21 = ll_backend__rtti_out__STATE_VARIABLE_N_0_20;
#line 1825 "rtti_out.m"
      }
#line 1826 "rtti_out.m"
    else
#line 1827 "rtti_out.m"
      {
#line 1827 "rtti_out.m"
        MR_Word ll_backend__rtti_out__RttiId_19;
#line 1827 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_43_43;

#line 1827 "rtti_out.m"
        {
#line 1827 "rtti_out.m"
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_12, &ll_backend__rtti_out__RttiId_19);
        }
#line 1838 "rtti_out.m"
        {
#line 1838 "rtti_out.m"
          ll_backend__rtti_out__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1838 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_43_43, 0) = ((MR_Box) (ll_backend__rtti_out__RttiId_19));
#line 1838 "rtti_out.m"
        }
#line 1838 "rtti_out.m"
        {
#line 1838 "rtti_out.m"
          ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__V_43_43, ll_backend__rtti_out__FirstIndent_13, ll_backend__rtti_out__LaterIndent_14, ll_backend__rtti_out__STATE_VARIABLE_N_0_20, ll_backend__rtti_out__STATE_VARIABLE_N_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_22, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_23);
#line 1838 "rtti_out.m"
          return;
        }
#line 1827 "rtti_out.m"
      }
#line 1826 "rtti_out.m"
  }
#line 1816 "rtti_out.m"
}

#line 1804 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(
#line 1804 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_1,
#line 1804 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1804 "rtti_out.m"
  MR_String ll_backend__rtti_out__FirstIndent_3,
#line 1804 "rtti_out.m"
  MR_String ll_backend__rtti_out__LaterIndent_4,
#line 1804 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0_5,
#line 1804 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__STATE_VARIABLE_N_6,
#line 1804 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7,
#line 1804 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_8)
#line 1804 "rtti_out.m"
{
#line 1808 "rtti_out.m"
  while (MR_TRUE)
#line 1808 "rtti_out.m"
    {
#line 1808 "rtti_out.m"
      /* tailcall optimized into a loop */
#line 1808 "rtti_out.m"
      {
#line 1808 "rtti_out.m"
        MR_bool ll_backend__rtti_out__succeeded;

#line 1808 "rtti_out.m"
        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1808 "rtti_out.m"
          {
#line 1808 "rtti_out.m"
            *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_8 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7;
#line 1808 "rtti_out.m"
            *ll_backend__rtti_out__STATE_VARIABLE_N_6 = ll_backend__rtti_out__STATE_VARIABLE_N_0_5;
#line 1808 "rtti_out.m"
          }
#line 1808 "rtti_out.m"
        else
#line 1810 "rtti_out.m"
          {
#line 1810 "rtti_out.m"
            MR_Word ll_backend__rtti_out__RttiData_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1810 "rtti_out.m"
            MR_Word ll_backend__rtti_out__RttiDatas_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1810 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_37_37;
#line 1810 "rtti_out.m"
            MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38;
#line 1822 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_58_58;
#line 1822 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__V_56_56;

#line 1822 "rtti_out.m"
            ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1822 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1822 "rtti_out.m"
              {
#line 1822 "rtti_out.m"
                ll_backend__rtti_out__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_24, (MR_Integer) 1)));
#line 1822 "rtti_out.m"
                ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_58_58)) == (MR_mktag((MR_Integer) 3)));
#line 1822 "rtti_out.m"
                if (ll_backend__rtti_out__succeeded)
#line 1822 "rtti_out.m"
                  ll_backend__rtti_out__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_58_58, (MR_Integer) 0)));
#line 1822 "rtti_out.m"
              }
#line 1826 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1825 "rtti_out.m"
              {
#line 1825 "rtti_out.m"
                ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7;
#line 1825 "rtti_out.m"
                ll_backend__rtti_out__STATE_VARIABLE_N_37_37 = ll_backend__rtti_out__STATE_VARIABLE_N_0_5;
#line 1825 "rtti_out.m"
              }
#line 1826 "rtti_out.m"
            else
#line 1827 "rtti_out.m"
              {
#line 1827 "rtti_out.m"
                MR_Word ll_backend__rtti_out__RttiId_57;
#line 1827 "rtti_out.m"
                MR_Word ll_backend__rtti_out__V_75_75;

#line 1827 "rtti_out.m"
                {
#line 1827 "rtti_out.m"
                  backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_24, &ll_backend__rtti_out__RttiId_57);
                }
#line 1838 "rtti_out.m"
                {
#line 1838 "rtti_out.m"
                  ll_backend__rtti_out__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1838 "rtti_out.m"
                  MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_75_75, 0) = ((MR_Box) (ll_backend__rtti_out__RttiId_57));
#line 1838 "rtti_out.m"
                }
#line 1838 "rtti_out.m"
                {
#line 1838 "rtti_out.m"
                  ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__rtti_out__Info_1, ll_backend__rtti_out__V_75_75, ll_backend__rtti_out__FirstIndent_3, ll_backend__rtti_out__LaterIndent_4, ll_backend__rtti_out__STATE_VARIABLE_N_0_5, &ll_backend__rtti_out__STATE_VARIABLE_N_37_37, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38);
                }
#line 1827 "rtti_out.m"
              }
#line 1813 "rtti_out.m"
            /* direct tailcall eliminated */
#line 1813 "rtti_out.m"
            {
#line 1813 "rtti_out.m"
              MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__RttiDatas_25;
#line 1813 "rtti_out.m"
              MR_Integer ll_backend__rtti_out__STATE_VARIABLE_N_0__tmp_copy_5 = ll_backend__rtti_out__STATE_VARIABLE_N_37_37;
#line 1813 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_7 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38;

#line 1813 "rtti_out.m"
              ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_7 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_7;
#line 1813 "rtti_out.m"
              ll_backend__rtti_out__STATE_VARIABLE_N_0_5 = ll_backend__rtti_out__STATE_VARIABLE_N_0__tmp_copy_5;
#line 1813 "rtti_out.m"
              ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
#line 1813 "rtti_out.m"
            }
#line 1813 "rtti_out.m"
            continue;
#line 1810 "rtti_out.m"
          }
#line 1808 "rtti_out.m"
      }
#line 1808 "rtti_out.m"
      break;
#line 1808 "rtti_out.m"
    }
#line 1804 "rtti_out.m"
}

#line 1788 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_init_method_pointers_6_p_0(
#line 1788 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__FieldNum_1,
#line 1788 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1788 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_3,
#line 1788 "rtti_out.m"
  MR_String ll_backend__rtti_out__InstanceStr_4)
#line 1788 "rtti_out.m"
{
#line 1791 "rtti_out.m"
  while (MR_TRUE)
#line 1791 "rtti_out.m"
    {
#line 1791 "rtti_out.m"
      /* tailcall optimized into a loop */
#line 1791 "rtti_out.m"
      {
#line 1791 "rtti_out.m"
        MR_bool ll_backend__rtti_out__succeeded;

#line 1791 "rtti_out.m"
        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1791 "rtti_out.m"
          {
#line 1791 "rtti_out.m"
          }
#line 1791 "rtti_out.m"
        else
#line 1793 "rtti_out.m"
          {
#line 1793 "rtti_out.m"
            MR_Word ll_backend__rtti_out__Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1793 "rtti_out.m"
            MR_Word ll_backend__rtti_out__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1793 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__V_34_34;
#line 1793 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_40_40;

#line 1794 "rtti_out.m"
            {
#line 1794 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t");
            }
#line 1795 "rtti_out.m"
            {
#line 1795 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "MR_field(MR_mktag(0), ");
            }
#line 1796 "rtti_out.m"
            {
#line 1796 "rtti_out.m"
              backend_libs__name_mangle__output_base_typeclass_info_name_4_p_0(ll_backend__rtti_out__TCName_3, ll_backend__rtti_out__InstanceStr_4);
            }
#line 1797 "rtti_out.m"
            {
#line 1797 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1797 "rtti_out.m"
            {
#line 1797 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_10[9], ll_backend__rtti_out__FieldNum_1, &ll_backend__rtti_out__V_40_40);
            }
#line 1797 "rtti_out.m"
            {
#line 1797 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_40_40);
            }
#line 1797 "rtti_out.m"
            {
#line 1797 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ") =\n\t\t\t");
            }
#line 1798 "rtti_out.m"
            {
#line 1798 "rtti_out.m"
              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__rtti_out__Arg_14);
            }
#line 1799 "rtti_out.m"
            {
#line 1799 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 1800 "rtti_out.m"
            ll_backend__rtti_out__V_34_34 = (ll_backend__rtti_out__FieldNum_1 + (MR_Integer) 1);
#line 1800 "rtti_out.m"
            /* direct tailcall eliminated */
#line 1800 "rtti_out.m"
            {
#line 1800 "rtti_out.m"
              MR_Integer ll_backend__rtti_out__FieldNum__tmp_copy_1 = ll_backend__rtti_out__V_34_34;
#line 1800 "rtti_out.m"
              MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__Args_15;

#line 1800 "rtti_out.m"
              ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
#line 1800 "rtti_out.m"
              ll_backend__rtti_out__FieldNum_1 = ll_backend__rtti_out__FieldNum__tmp_copy_1;
#line 1800 "rtti_out.m"
            }
#line 1800 "rtti_out.m"
            continue;
#line 1793 "rtti_out.m"
          }
#line 1791 "rtti_out.m"
      }
#line 1791 "rtti_out.m"
      break;
#line 1791 "rtti_out.m"
    }
#line 1788 "rtti_out.m"
}

#line 1705 "rtti_out.m"
static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0(void)
#line 1705 "rtti_out.m"
{
#line 1707 "rtti_out.m"
  {
#line 1707 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1707 "rtti_out.m"
    return (MR_Integer) 10;
#line 1707 "rtti_out.m"
  }
#line 1705 "rtti_out.m"
}

#line 1697 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(
#line 1697 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCRttiName_1,
#line 1697 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__Arity_2)
#line 1697 "rtti_out.m"
{
#line 1700 "rtti_out.m"
  {
#line 1700 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1700 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__TCRttiName_1)) == (MR_mktag((MR_Integer) 2))))
#line 1701 "rtti_out.m"
      {
#line 1701 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 0)));

#line 1701 "rtti_out.m"
        *ll_backend__rtti_out__Arity_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 1)));
#line 1701 "rtti_out.m"
        ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1701 "rtti_out.m"
      }
#line 1700 "rtti_out.m"
    else
#line 1700 "rtti_out.m"
    if (((((MR_tag((MR_Word) ll_backend__rtti_out__TCRttiName_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1703 "rtti_out.m"
      {
#line 1703 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 1)));
#line 1703 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 2)));

#line 1703 "rtti_out.m"
        *ll_backend__rtti_out__Arity_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TCRttiName_1, (MR_Integer) 3)));
#line 1703 "rtti_out.m"
        ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1703 "rtti_out.m"
      }
#line 1700 "rtti_out.m"
    else
#line 1700 "rtti_out.m"
      ll_backend__rtti_out__succeeded = MR_FALSE;
#line 1700 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1700 "rtti_out.m"
  }
#line 1697 "rtti_out.m"
}

#line 1693 "rtti_out.m"
static MR_Integer MR_CALL 
ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0(void)
#line 1693 "rtti_out.m"
{
#line 1695 "rtti_out.m"
  {
#line 1695 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1695 "rtti_out.m"
    return (MR_Integer) 20;
#line 1695 "rtti_out.m"
  }
#line 1693 "rtti_out.m"
}

#line 1674 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(
#line 1674 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiName_1,
#line 1674 "rtti_out.m"
  MR_Integer * ll_backend__rtti_out__NumArgTypes_2)
#line 1674 "rtti_out.m"
{
#line 1676 "rtti_out.m"
  {
#line 1676 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1676 "rtti_out.m"
    if (((((MR_tag((MR_Word) ll_backend__rtti_out__RttiName_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1684 "rtti_out.m"
      {
#line 1684 "rtti_out.m"
        MR_Word ll_backend__rtti_out__TypeCtorInfo_16_16;
#line 1684 "rtti_out.m"
        MR_Word ll_backend__rtti_out__PseudoTypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 1)));
#line 1684 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ArgTypes_13;

#line 1688 "rtti_out.m"
        if (((MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_11)) == (MR_mktag((MR_Integer) 1))))
#line 1687 "rtti_out.m"
          {
#line 1687 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 0)));

#line 1687 "rtti_out.m"
            ll_backend__rtti_out__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 1)));
#line 1687 "rtti_out.m"
            ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1687 "rtti_out.m"
          }
#line 1688 "rtti_out.m"
        else
#line 1688 "rtti_out.m"
        if (((MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_11)) == (MR_mktag((MR_Integer) 2))))
#line 1689 "rtti_out.m"
          {
#line 1689 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 0)));

#line 1689 "rtti_out.m"
            ll_backend__rtti_out__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_11, (MR_Integer) 1)));
#line 1689 "rtti_out.m"
            ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1689 "rtti_out.m"
          }
#line 1688 "rtti_out.m"
        else
#line 1688 "rtti_out.m"
          ll_backend__rtti_out__succeeded = MR_FALSE;
#line 1684 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1684 "rtti_out.m"
          {
#line 4698 "ll_backend.rtti_out.c"
            ll_backend__rtti_out__TypeCtorInfo_16_16 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 1691 "rtti_out.m"
            {
#line 1691 "rtti_out.m"
              *ll_backend__rtti_out__NumArgTypes_2 = mercury__list__length_1_f_0(ll_backend__rtti_out__TypeCtorInfo_16_16, ll_backend__rtti_out__ArgTypes_13);
            }
#line 1691 "rtti_out.m"
            ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1684 "rtti_out.m"
          }
#line 1684 "rtti_out.m"
      }
#line 1676 "rtti_out.m"
    else
#line 1676 "rtti_out.m"
    if (((((MR_tag((MR_Word) ll_backend__rtti_out__RttiName_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1676 "rtti_out.m"
      {
#line 1676 "rtti_out.m"
        MR_Word ll_backend__rtti_out__TypeCtorInfo_15_15;
#line 1676 "rtti_out.m"
        MR_Word ll_backend__rtti_out__TypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiName_1, (MR_Integer) 1)));
#line 1676 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ArgTypes_7;

#line 1680 "rtti_out.m"
        if (((MR_tag((MR_Word) ll_backend__rtti_out__TypeInfo_5)) == (MR_mktag((MR_Integer) 1))))
#line 1679 "rtti_out.m"
          {
#line 1679 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 0)));

#line 1679 "rtti_out.m"
            ll_backend__rtti_out__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 1)));
#line 1679 "rtti_out.m"
            ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1679 "rtti_out.m"
          }
#line 1680 "rtti_out.m"
        else
#line 1680 "rtti_out.m"
        if (((MR_tag((MR_Word) ll_backend__rtti_out__TypeInfo_5)) == (MR_mktag((MR_Integer) 2))))
#line 1681 "rtti_out.m"
          {
#line 1681 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 0)));

#line 1681 "rtti_out.m"
            ll_backend__rtti_out__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_5, (MR_Integer) 1)));
#line 1681 "rtti_out.m"
            ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1681 "rtti_out.m"
          }
#line 1680 "rtti_out.m"
        else
#line 1680 "rtti_out.m"
          ll_backend__rtti_out__succeeded = MR_FALSE;
#line 1676 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1676 "rtti_out.m"
          {
#line 4760 "ll_backend.rtti_out.c"
            ll_backend__rtti_out__TypeCtorInfo_15_15 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
#line 1683 "rtti_out.m"
            {
#line 1683 "rtti_out.m"
              *ll_backend__rtti_out__NumArgTypes_2 = mercury__list__length_1_f_0(ll_backend__rtti_out__TypeCtorInfo_15_15, ll_backend__rtti_out__ArgTypes_7);
            }
#line 1683 "rtti_out.m"
            ll_backend__rtti_out__succeeded = MR_TRUE;
#line 1676 "rtti_out.m"
          }
#line 1676 "rtti_out.m"
      }
#line 1676 "rtti_out.m"
    else
#line 1676 "rtti_out.m"
      ll_backend__rtti_out__succeeded = MR_FALSE;
#line 1676 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1676 "rtti_out.m"
  }
#line 1674 "rtti_out.m"
}

#line 1629 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_type_decl_5_p_0(
#line 1629 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_6,
#line 1629 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
#line 1629 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17)
#line 1629 "rtti_out.m"
{
#line 1651 "rtti_out.m"
  {
#line 1651 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_6)) == (MR_mktag((MR_Integer) 0)));
#line 1651 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Arity_11;
#line 1634 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiName_10;
#line 1634 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_20_20;
#line 1634 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_9_9;

#line 1634 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1634 "rtti_out.m"
      {
#line 1634 "rtti_out.m"
        ll_backend__rtti_out__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 0)));
#line 1634 "rtti_out.m"
        ll_backend__rtti_out__RttiName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_6, (MR_Integer) 1)));
#line 1635 "rtti_out.m"
        {
#line 1635 "rtti_out.m"
          ll_backend__rtti_out__succeeded = ll_backend__rtti_out__rtti_type_ctor_template_arity_2_p_0(ll_backend__rtti_out__RttiName_10, &ll_backend__rtti_out__Arity_11);
        }
#line 1634 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1634 "rtti_out.m"
          {
#line 1636 "rtti_out.m"
            {
#line 1636 "rtti_out.m"
              ll_backend__rtti_out__V_20_20 = ll_backend__rtti_out__max_always_declared_arity_type_ctor_0_f_0();
            }
#line 1636 "rtti_out.m"
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Arity_11 > ll_backend__rtti_out__V_20_20);
#line 1634 "rtti_out.m"
          }
#line 1634 "rtti_out.m"
      }
#line 1651 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1638 "rtti_out.m"
      {
#line 1638 "rtti_out.m"
        MR_Word ll_backend__rtti_out__DeclId_12;

#line 1638 "rtti_out.m"
        {
#line 1638 "rtti_out.m"
          ll_backend__rtti_out__DeclId_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1638 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1638 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_12, 1) = ((MR_Box) (ll_backend__rtti_out__Arity_11));
#line 1638 "rtti_out.m"
        }
#line 1639 "rtti_out.m"
        {
#line 1639 "rtti_out.m"
          ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__DeclId_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16);
        }
#line 1641 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1640 "rtti_out.m"
          *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16;
#line 1641 "rtti_out.m"
        else
#line 1647 "rtti_out.m"
          {
#line 1647 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_52_52;
#line 1647 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_58_58;
#line 1647 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_62_62;
#line 1647 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_72_72;

#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
            }
#line 4880 "ll_backend.rtti_out.c"
            ll_backend__rtti_out__V_58_58 = (MR_Word) &ll_backend__rtti_out_scalar_common_10[9];
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_58_58, ll_backend__rtti_out__Arity_11, &ll_backend__rtti_out__V_52_52);
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_52_52);
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "_GUARD\n#define MR_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY_");
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_58_58, ll_backend__rtti_out__Arity_11, &ll_backend__rtti_out__V_62_62);
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_62_62);
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "_GUARD\nMR_DECLARE_ALL_TYPE_INFO_LIKE_STRUCTS_FOR_ARITY(");
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_58_58, ll_backend__rtti_out__Arity_11, &ll_backend__rtti_out__V_72_72);
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_72_72);
            }
#line 1648 "rtti_out.m"
            {
#line 1648 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n#endif\n");
            }
#line 1649 "rtti_out.m"
            {
#line 1649 "rtti_out.m"
              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__DeclId_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
#line 1649 "rtti_out.m"
              return;
            }
#line 1647 "rtti_out.m"
          }
#line 1638 "rtti_out.m"
      }
#line 1651 "rtti_out.m"
    else
#line 1670 "rtti_out.m"
      {
#line 1670 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__Arity_46;
#line 1652 "rtti_out.m"
        MR_Word ll_backend__rtti_out__TCRttiName_15;
#line 1652 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__V_30_30;
#line 1652 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_14_14;

#line 1652 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_6)) == (MR_mktag((MR_Integer) 1)));
#line 1652 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1652 "rtti_out.m"
          {
#line 1652 "rtti_out.m"
            ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_6, (MR_Integer) 0)));
#line 1652 "rtti_out.m"
            ll_backend__rtti_out__TCRttiName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_6, (MR_Integer) 1)));
#line 1653 "rtti_out.m"
            {
#line 1653 "rtti_out.m"
              ll_backend__rtti_out__succeeded = ll_backend__rtti_out__rtti_type_class_constraint_template_arity_2_p_0(ll_backend__rtti_out__TCRttiName_15, &ll_backend__rtti_out__Arity_46);
            }
#line 1652 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1652 "rtti_out.m"
              {
#line 1654 "rtti_out.m"
                {
#line 1654 "rtti_out.m"
                  ll_backend__rtti_out__V_30_30 = ll_backend__rtti_out__max_always_declared_arity_type_class_constraint_0_f_0();
                }
#line 1654 "rtti_out.m"
                ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__Arity_46 > ll_backend__rtti_out__V_30_30);
#line 1652 "rtti_out.m"
              }
#line 1652 "rtti_out.m"
          }
#line 1670 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1656 "rtti_out.m"
          {
#line 1656 "rtti_out.m"
            MR_Word ll_backend__rtti_out__DeclId_44;

#line 1656 "rtti_out.m"
            {
#line 1656 "rtti_out.m"
              ll_backend__rtti_out__DeclId_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1656 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__DeclId_44, 1) = ((MR_Box) (ll_backend__rtti_out__Arity_46));
#line 1656 "rtti_out.m"
            }
#line 1657 "rtti_out.m"
            {
#line 1657 "rtti_out.m"
              ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__DeclId_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16);
            }
#line 1659 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1658 "rtti_out.m"
              *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16;
#line 1659 "rtti_out.m"
            else
#line 1665 "rtti_out.m"
              {
#line 1665 "rtti_out.m"
                MR_String ll_backend__rtti_out__V_83_83;
#line 1665 "rtti_out.m"
                MR_Word ll_backend__rtti_out__V_89_89;
#line 1665 "rtti_out.m"
                MR_String ll_backend__rtti_out__V_93_93;
#line 1665 "rtti_out.m"
                MR_String ll_backend__rtti_out__V_103_103;
#line 1665 "rtti_out.m"
                MR_String ll_backend__rtti_out__V_113_113;

#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_TYPECLASS_CONSTRAINT_STRUCT_");
                }
#line 5027 "ll_backend.rtti_out.c"
                ll_backend__rtti_out__V_89_89 = (MR_Word) &ll_backend__rtti_out_scalar_common_10[9];
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_83_83);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_83_83);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "_GUARD\n#define MR_TYPECLASS_CONSTRAINT_STRUCT_");
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_93_93);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_93_93);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) "_GUARD\nMR_DEFINE_TYPECLASS_CONSTRAINT_STRUCT(MR_TypeClassConstraint_");
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_103_103);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_103_103);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_89_89, ll_backend__rtti_out__Arity_46, &ll_backend__rtti_out__V_113_113);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_113_113);
                }
#line 1666 "rtti_out.m"
                {
#line 1666 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n#endif\n");
                }
#line 1668 "rtti_out.m"
                {
#line 1668 "rtti_out.m"
                  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__DeclId_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
#line 1668 "rtti_out.m"
                  return;
                }
#line 1665 "rtti_out.m"
              }
#line 1656 "rtti_out.m"
          }
#line 1670 "rtti_out.m"
        else
#line 1671 "rtti_out.m"
          *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16;
#line 1670 "rtti_out.m"
      }
#line 1651 "rtti_out.m"
  }
#line 1629 "rtti_out.m"
}

#line 1591 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(
#line 1591 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 1591 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_8,
#line 1591 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_11,
#line 1591 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_12)
#line 1591 "rtti_out.m"
{
#line 1594 "rtti_out.m"
  {
#line 1594 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1594 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_18;
#line 1594 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_20_20;

#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__RttiId_8, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_11, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_18);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_8));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_20_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_12);
#line 1597 "rtti_out.m"
      return;
    }
#line 1594 "rtti_out.m"
  }
#line 1591 "rtti_out.m"
}

#line 1544 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(
#line 1544 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1544 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1544 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3,
#line 1544 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_4)
#line 1544 "rtti_out.m"
{
#line 1547 "rtti_out.m"
  while (MR_TRUE)
#line 1547 "rtti_out.m"
    {
#line 1547 "rtti_out.m"
      /* tailcall optimized into a loop */
#line 1547 "rtti_out.m"
      {
#line 1547 "rtti_out.m"
        MR_bool ll_backend__rtti_out__succeeded;

#line 1547 "rtti_out.m"
        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1547 "rtti_out.m"
          {
#line 1548 "rtti_out.m"
            {
#line 1548 "rtti_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk_entries\'/6", (MR_String) "empty list");
#line 1548 "rtti_out.m"
              return;
            }
#line 1547 "rtti_out.m"
          }
#line 1547 "rtti_out.m"
        else
#line 1550 "rtti_out.m"
          {
#line 1550 "rtti_out.m"
            MR_Word ll_backend__rtti_out__RttiId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1550 "rtti_out.m"
            MR_Word ll_backend__rtti_out__RttiIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1550 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_28_28;
#line 1550 "rtti_out.m"
            MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
#line 1550 "rtti_out.m"
            MR_String ll_backend__rtti_out__Str_45;
#line 1550 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_46_46;

#line 1551 "rtti_out.m"
            {
#line 1551 "rtti_out.m"
              ll_backend__rtti_out__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1551 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_18));
#line 1551 "rtti_out.m"
            }
#line 1551 "rtti_out.m"
            {
#line 1551 "rtti_out.m"
              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_28_28, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29);
            }
#line 1552 "rtti_out.m"
            {
#line 1552 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1933 "rtti_out.m"
            {
#line 1933 "rtti_out.m"
              ll_backend__rtti_out__V_46_46 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            }
#line 1933 "rtti_out.m"
            {
#line 1933 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_46_46);
            }
#line 1934 "rtti_out.m"
            {
#line 1934 "rtti_out.m"
              backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_18, &ll_backend__rtti_out__Str_45);
            }
#line 1935 "rtti_out.m"
            {
#line 1935 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_45);
            }
#line 1557 "rtti_out.m"
#line 1557 "rtti_out.m"
            switch (ll_backend__rtti_out__HeadVar__1_1) {
#line 1557 "rtti_out.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1557 "rtti_out.m"
              case (MR_Integer) 0:
#line 1555 "rtti_out.m"
                {
#line 1556 "rtti_out.m"
                  {
#line 1556 "rtti_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "[]");
                  }
#line 1555 "rtti_out.m"
                }
#line 1557 "rtti_out.m"
                break;
#line 1557 "rtti_out.m"
              case (MR_Integer) 1:
#line 1558 "rtti_out.m"
                {
#line 1558 "rtti_out.m"
                }
#line 1557 "rtti_out.m"
                break;
#line 1557 "rtti_out.m"
            }
#line 1564 "rtti_out.m"
            if ((ll_backend__rtti_out__RttiIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "rtti_out.m"
              {
#line 1566 "rtti_out.m"
                {
#line 1566 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
#line 1565 "rtti_out.m"
                *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_4 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
#line 1565 "rtti_out.m"
              }
#line 1564 "rtti_out.m"
            else
#line 1561 "rtti_out.m"
              {
#line 1562 "rtti_out.m"
                {
#line 1562 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 1563 "rtti_out.m"
                /* direct tailcall eliminated */
#line 1563 "rtti_out.m"
                {
#line 1563 "rtti_out.m"
                  MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__RttiIds_19;
#line 1563 "rtti_out.m"
                  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_3 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;

#line 1563 "rtti_out.m"
                  ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_3 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0__tmp_copy_3;
#line 1563 "rtti_out.m"
                  ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
#line 1563 "rtti_out.m"
                }
#line 1563 "rtti_out.m"
                continue;
#line 1561 "rtti_out.m"
              }
#line 1550 "rtti_out.m"
          }
#line 1547 "rtti_out.m"
      }
#line 1547 "rtti_out.m"
      break;
#line 1547 "rtti_out.m"
    }
#line 1544 "rtti_out.m"
}

#line 1517 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Group_9,
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiIds_10,
#line 1517 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 1517 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
#line 1517 "rtti_out.m"
{
#line 1520 "rtti_out.m"
  {
#line 1520 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1520 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiId_13;
#line 1520 "rtti_out.m"
    MR_String ll_backend__rtti_out__CType_15;
#line 1520 "rtti_out.m"
    MR_Word ll_backend__rtti_out__IsArray_16;
#line 1520 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Linkage_17;
#line 1520 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Globals_18;
#line 1520 "rtti_out.m"
    MR_String ll_backend__rtti_out__LinkageStr_19;
#line 1520 "rtti_out.m"
    MR_Word ll_backend__rtti_out__InclCodeAddr_20;
#line 1520 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
#line 1520 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_33_33;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_39_39;
#line 1533 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_40_40;
#line 1533 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_41_41;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_42_42;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_43_43;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_44_44;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_46_46;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_48_48;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_49_49;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_50_50;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_51_51;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_52_52;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_53_53;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_54_54;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_55_55;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_56_56;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_57_57;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_58_58;
#line 1533 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_59_59;

#line 1525 "rtti_out.m"
    if ((ll_backend__rtti_out__RttiIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1526 "rtti_out.m"
      {
#line 1527 "rtti_out.m"
        {
#line 1527 "rtti_out.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_rtti_data_decl_chunk\'/7", (MR_String) "empty list");
#line 1527 "rtti_out.m"
          return;
        }
#line 1526 "rtti_out.m"
      }
#line 1525 "rtti_out.m"
    else
#line 1524 "rtti_out.m"
      {
#line 1524 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_14_14;

#line 1524 "rtti_out.m"
        ll_backend__rtti_out__RttiId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiIds_10, (MR_Integer) 0)));
#line 1524 "rtti_out.m"
        ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiIds_10, (MR_Integer) 1)));
#line 1524 "rtti_out.m"
      }
#line 1529 "rtti_out.m"
    ll_backend__rtti_out__CType_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_9, (MR_Integer) 0)));
#line 1529 "rtti_out.m"
    ll_backend__rtti_out__IsArray_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1529 "rtti_out.m"
    ll_backend__rtti_out__Linkage_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1531 "rtti_out.m"
    {
#line 1531 "rtti_out.m"
      mercury__io__nl_2_p_0();
    }
#line 1532 "rtti_out.m"
    {
#line 1532 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_type_decl_5_p_0(ll_backend__rtti_out__RttiId_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29);
    }
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 0)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 1)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 2)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 3)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 4)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 5)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 6)));
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1533 "rtti_out.m"
    ll_backend__rtti_out__Globals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 8)));
#line 1534 "rtti_out.m"
    {
#line 1534 "rtti_out.m"
      ll_backend__rtti_out__LinkageStr_19 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(ll_backend__rtti_out__Linkage_17, (MR_Integer) 0);
    }
#line 1535 "rtti_out.m"
    {
#line 1535 "rtti_out.m"
      ll_backend__rtti_out__InclCodeAddr_20 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(ll_backend__rtti_out__RttiId_13);
    }
#line 1537 "rtti_out.m"
    {
#line 1537 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__LinkageStr_19);
    }
#line 1538 "rtti_out.m"
    {
#line 1538 "rtti_out.m"
      ll_backend__rtti_out__V_33_33 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(ll_backend__rtti_out__Globals_18, ll_backend__rtti_out__InclCodeAddr_20);
    }
#line 1538 "rtti_out.m"
    {
#line 1538 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_33_33);
    }
#line 1539 "rtti_out.m"
    {
#line 1539 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__CType_15);
    }
#line 1540 "rtti_out.m"
    {
#line 1540 "rtti_out.m"
      mercury__io__nl_2_p_0();
    }
#line 1542 "rtti_out.m"
    {
#line 1542 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_data_decl_chunk_entries_6_p_0(ll_backend__rtti_out__IsArray_16, ll_backend__rtti_out__RttiIds_10, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
#line 1542 "rtti_out.m"
      return;
    }
#line 1520 "rtti_out.m"
  }
#line 1517 "rtti_out.m"
}

#line 1514 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1(
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1514 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1514 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1514 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 1514 "rtti_out.m"
{
#line 1514 "rtti_out.m"
  {
#line 1514 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1514 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_22;

#line 1514 "rtti_out.m"
    {
#line 1514 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_data_decl_chunk_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_22);
    }
#line 1514 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_22));
#line 1514 "rtti_out.m"
  }
#line 1514 "rtti_out.m"
}

#line 1502 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(
#line 1502 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 1502 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1502 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_14,
#line 1502 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_15)
#line 1502 "rtti_out.m"
{
#line 1506 "rtti_out.m"
  {
#line 1506 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1506 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 1506 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Group_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1506 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1506 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiIdChunks_13;
#line 1506 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_18_18;
#line 1506 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_19_19;
#line 1514 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_15;
#line 1514 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_17;

#line 1513 "rtti_out.m"
    {
#line 1513 "rtti_out.m"
      ll_backend__rtti_out__V_18_18 = mercury__list__reverse_1_f_0(ll_backend__rtti_out__TypeCtorInfo_22_22, ll_backend__rtti_out__RttiIds_9);
    }
#line 1513 "rtti_out.m"
    {
#line 1513 "rtti_out.m"
      mercury__list__chunk_3_p_0(ll_backend__rtti_out__TypeCtorInfo_22_22, ll_backend__rtti_out__V_18_18, (MR_Integer) 10, &ll_backend__rtti_out__RttiIdChunks_13);
    }
#line 1514 "rtti_out.m"
    {
#line 1514 "rtti_out.m"
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[5]));
#line 1514 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0_1));
#line 1514 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1514 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 1514 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 4) = ((MR_Box) (ll_backend__rtti_out__Group_8));
#line 1514 "rtti_out.m"
    }
#line 1514 "rtti_out.m"
    {
#line 1514 "rtti_out.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_1[0], (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_19_19, ll_backend__rtti_out__RttiIdChunks_13, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_14)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_17);
    }
#line 1514 "rtti_out.m"
    *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_15 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_15);
#line 1506 "rtti_out.m"
  }
#line 1502 "rtti_out.m"
}

#line 1483 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(
#line 1483 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1483 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2,
#line 1483 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_GroupMap_3)
#line 1483 "rtti_out.m"
{
#line 1487 "rtti_out.m"
  while (MR_TRUE)
#line 1487 "rtti_out.m"
    {
#line 1487 "rtti_out.m"
      /* tailcall optimized into a loop */
#line 1487 "rtti_out.m"
      {
#line 1487 "rtti_out.m"
        MR_bool ll_backend__rtti_out__succeeded;

#line 1487 "rtti_out.m"
        if ((ll_backend__rtti_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1487 "rtti_out.m"
          *ll_backend__rtti_out__STATE_VARIABLE_GroupMap_3 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2;
#line 1487 "rtti_out.m"
        else
#line 1488 "rtti_out.m"
          {
#line 1488 "rtti_out.m"
            MR_Word ll_backend__rtti_out__RttiData_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));
#line 1488 "rtti_out.m"
            MR_Word ll_backend__rtti_out__RttiDatas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)));
#line 1488 "rtti_out.m"
            MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19;
#line 1489 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_18_18;
#line 1489 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__V_10_10;

#line 1489 "rtti_out.m"
            ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1489 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1489 "rtti_out.m"
              {
#line 1489 "rtti_out.m"
                ll_backend__rtti_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_7, (MR_Integer) 1)));
#line 1489 "rtti_out.m"
                ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_18_18)) == (MR_mktag((MR_Integer) 3)));
#line 1489 "rtti_out.m"
                if (ll_backend__rtti_out__succeeded)
#line 1489 "rtti_out.m"
                  ll_backend__rtti_out__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_18_18, (MR_Integer) 0)));
#line 1489 "rtti_out.m"
              }
#line 1493 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1493 "rtti_out.m"
              ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2;
#line 1493 "rtti_out.m"
            else
#line 1494 "rtti_out.m"
              {
#line 1494 "rtti_out.m"
                MR_Word ll_backend__rtti_out__RttiId_11;
#line 1494 "rtti_out.m"
                MR_String ll_backend__rtti_out__CType_12;
#line 1494 "rtti_out.m"
                MR_Word ll_backend__rtti_out__IsArray_13;
#line 1494 "rtti_out.m"
                MR_Word ll_backend__rtti_out__Linkage_14;
#line 1494 "rtti_out.m"
                MR_Word ll_backend__rtti_out__Group_15;
#line 1494 "rtti_out.m"
                MR_Word ll_backend__rtti_out__IsArray_25;

#line 1494 "rtti_out.m"
                {
#line 1494 "rtti_out.m"
                  backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_7, &ll_backend__rtti_out__RttiId_11);
                }
#line 1495 "rtti_out.m"
                {
#line 1495 "rtti_out.m"
                  backend_libs__rtti__rtti_id_c_type_3_p_0(ll_backend__rtti_out__RttiId_11, &ll_backend__rtti_out__CType_12, &ll_backend__rtti_out__IsArray_13);
                }
#line 2013 "rtti_out.m"
                {
#line 2013 "rtti_out.m"
                  ll_backend__rtti_out__IsArray_25 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_11);
                }
#line 2020 "rtti_out.m"
#line 2020 "rtti_out.m"
                switch (ll_backend__rtti_out__IsArray_25) {
#line 2020 "rtti_out.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2020 "rtti_out.m"
                  case (MR_Integer) 0:
#line 2019 "rtti_out.m"
                    ll_backend__rtti_out__Linkage_14 = (MR_Integer) 0;
#line 2020 "rtti_out.m"
                    break;
#line 2020 "rtti_out.m"
                  case (MR_Integer) 1:
#line 2021 "rtti_out.m"
                    {
#line 2021 "rtti_out.m"
                      MR_Word ll_backend__rtti_out__Exported_26;

#line 2022 "rtti_out.m"
                      {
#line 2022 "rtti_out.m"
                        ll_backend__rtti_out__Exported_26 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ll_backend__rtti_out__RttiId_11);
                      }
#line 2024 "rtti_out.m"
#line 2024 "rtti_out.m"
                      switch (ll_backend__rtti_out__Exported_26) {
#line 2024 "rtti_out.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 2024 "rtti_out.m"
                        case (MR_Integer) 0:
#line 2024 "rtti_out.m"
                          ll_backend__rtti_out__Linkage_14 = (MR_Integer) 1;
#line 2024 "rtti_out.m"
                          break;
#line 2024 "rtti_out.m"
                        case (MR_Integer) 1:
#line 2023 "rtti_out.m"
                          ll_backend__rtti_out__Linkage_14 = (MR_Integer) 0;
#line 2024 "rtti_out.m"
                          break;
#line 2024 "rtti_out.m"
                      }
#line 2021 "rtti_out.m"
                    }
#line 2020 "rtti_out.m"
                    break;
#line 2020 "rtti_out.m"
                }
#line 1497 "rtti_out.m"
                {
#line 1497 "rtti_out.m"
                  ll_backend__rtti_out__Group_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "rtti_out.m"
                  MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_15, 0) = ((MR_Box) (ll_backend__rtti_out__CType_12));
#line 1497 "rtti_out.m"
                  MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Group_15, 1) = ((MR_Box) ((ll_backend__rtti_out__IsArray_13 | ((ll_backend__rtti_out__Linkage_14 << (MR_Integer) 1)))));
#line 1497 "rtti_out.m"
                }
#line 1498 "rtti_out.m"
                {
#line 1498 "rtti_out.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ((MR_Box) (ll_backend__rtti_out__Group_15)), ((MR_Box) (ll_backend__rtti_out__RttiId_11)), ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2, &ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19);
                }
#line 1494 "rtti_out.m"
              }
#line 1500 "rtti_out.m"
            /* direct tailcall eliminated */
#line 1500 "rtti_out.m"
            {
#line 1500 "rtti_out.m"
              MR_Word ll_backend__rtti_out__HeadVar__1__tmp_copy_1 = ll_backend__rtti_out__RttiDatas_8;
#line 1500 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0__tmp_copy_2 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_19_19;

#line 1500 "rtti_out.m"
              ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0_2 = ll_backend__rtti_out__STATE_VARIABLE_GroupMap_0__tmp_copy_2;
#line 1500 "rtti_out.m"
              ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__HeadVar__1__tmp_copy_1;
#line 1500 "rtti_out.m"
            }
#line 1500 "rtti_out.m"
            continue;
#line 1488 "rtti_out.m"
          }
#line 1487 "rtti_out.m"
      }
#line 1487 "rtti_out.m"
      break;
#line 1487 "rtti_out.m"
    }
#line 1483 "rtti_out.m"
}

#line 1466 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0_1(
#line 1466 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1466 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1466 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1466 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1466 "rtti_out.m"
{
#line 1466 "rtti_out.m"
  {
#line 1466 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1466 "rtti_out.m"
    {
#line 1466 "rtti_out.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__rtti_out__wrapper_arg_1));
#line 1466 "rtti_out.m"
      return;
    }
#line 1466 "rtti_out.m"
  }
#line 1466 "rtti_out.m"
}

#line 1457 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_functor_number_map_7_p_0(
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorNumberMap_10,
#line 1457 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 1457 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
#line 1457 "rtti_out.m"
{
#line 1461 "rtti_out.m"
  {
#line 1461 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1461 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_17_17;
#line 1461 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43;
#line 1461 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;

#line 1463 "rtti_out.m"
    {
#line 1463 "rtti_out.m"
      ll_backend__rtti_out__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1463 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_17_17, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1463 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 1463 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_17_17, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__V_17_17));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_45_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
    }
#line 1465 "rtti_out.m"
    {
#line 1465 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
#line 1466 "rtti_out.m"
    {
#line 1466 "rtti_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__FunctorNumberMap_10, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[31]);
    }
#line 1467 "rtti_out.m"
    {
#line 1467 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " };\n\t");
#line 1467 "rtti_out.m"
      return;
    }
#line 1461 "rtti_out.m"
  }
#line 1457 "rtti_out.m"
}

#line 1439 "rtti_out.m"
static MR_Word MR_CALL 
ll_backend__rtti_out__make_code_addr_1_f_0(
#line 1439 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ProcLabel_3)
#line 1439 "rtti_out.m"
{
#line 1441 "rtti_out.m"
  {
#line 1441 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1441 "rtti_out.m"
    MR_Word ll_backend__rtti_out__HeadVar__2_2;

#line 1442 "rtti_out.m"
    {
#line 1442 "rtti_out.m"
      return ll_backend__rtti_out__HeadVar__2_2 = ll_backend__code_util__make_entry_label_from_rtti_2_f_0(ll_backend__rtti_out__ProcLabel_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1441 "rtti_out.m"
    return ll_backend__rtti_out__HeadVar__2_2;
#line 1441 "rtti_out.m"
  }
#line 1439 "rtti_out.m"
}

#line 1411 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(
#line 1411 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1411 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeResFunctor_6)
#line 1411 "rtti_out.m"
{
#line 1414 "rtti_out.m"
  {
#line 1414 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiName_12;
#line 1414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_53_53;
#line 1414 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_59;
#line 1414 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_60_60;

#line 1415 "rtti_out.m"
    {
#line 1415 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t{ \"");
    }
#line 1423 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__MaybeResFunctor_6)) == (MR_mktag((MR_Integer) 1))))
#line 1424 "rtti_out.m"
      {
#line 1424 "rtti_out.m"
        MR_Word ll_backend__rtti_out__DuFunctor_10 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_6), (MR_Integer) 1);
#line 1424 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 1)));
#line 1424 "rtti_out.m"
        MR_String ll_backend__rtti_out__Name_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 0)));
#line 1425 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 2)));
#line 1425 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 3)));
#line 1425 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 4)));
#line 1425 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 5)));

#line 1427 "rtti_out.m"
        {
#line 1427 "rtti_out.m"
          mercury__io__write_string_3_p_0(ll_backend__rtti_out__Name_35);
        }
#line 1428 "rtti_out.m"
        {
#line 1428 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 1429 "rtti_out.m"
        {
#line 1429 "rtti_out.m"
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_11);
        }
#line 1430 "rtti_out.m"
        {
#line 1430 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 1431 "rtti_out.m"
        {
#line 1431 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_FALSE, ");
        }
#line 1424 "rtti_out.m"
      }
#line 1423 "rtti_out.m"
    else
#line 1417 "rtti_out.m"
      {
#line 1417 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ResFunctor_8 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_6), (MR_Integer) 0);
#line 1417 "rtti_out.m"
        MR_String ll_backend__rtti_out__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_8, (MR_Integer) 0)));
#line 1418 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_8, (MR_Integer) 1)));
#line 1418 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_8, (MR_Integer) 2)));

#line 1419 "rtti_out.m"
        {
#line 1419 "rtti_out.m"
          mercury__io__write_string_3_p_0(ll_backend__rtti_out__Name_9);
        }
#line 1420 "rtti_out.m"
        {
#line 1420 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 1421 "rtti_out.m"
        {
#line 1421 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "0, ");
        }
#line 1422 "rtti_out.m"
        {
#line 1422 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "MR_TRUE, ");
        }
#line 1417 "rtti_out.m"
      }
#line 1433 "rtti_out.m"
    {
#line 1433 "rtti_out.m"
      ll_backend__rtti_out__RttiName_12 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ll_backend__rtti_out__MaybeResFunctor_6);
    }
#line 1941 "rtti_out.m"
    {
#line 1941 "rtti_out.m"
      ll_backend__rtti_out__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_53_53, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_53_53, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_12));
#line 1941 "rtti_out.m"
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_60_60 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_60_60);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_53_53, &ll_backend__rtti_out__Str_59);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_59);
    }
#line 1435 "rtti_out.m"
    {
#line 1435 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " },\n");
#line 1435 "rtti_out.m"
      return;
    }
#line 1414 "rtti_out.m"
  }
#line 1411 "rtti_out.m"
}

#line 1407 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2(
#line 1407 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1407 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1407 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1407 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1407 "rtti_out.m"
{
#line 1407 "rtti_out.m"
  {
#line 1407 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1407 "rtti_out.m"
    {
#line 1407 "rtti_out.m"
      ll_backend__rtti_out__output_res_name_ordered_table_element_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1407 "rtti_out.m"
      return;
    }
#line 1407 "rtti_out.m"
  }
#line 1407 "rtti_out.m"
}

#line 1401 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_1(
#line 1401 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1401 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1401 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2)
#line 1401 "rtti_out.m"
{
#line 1401 "rtti_out.m"
  {
#line 1401 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1401 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_34;

#line 1401 "rtti_out.m"
    {
#line 1401 "rtti_out.m"
      ll_backend__rtti_out__IntroducedFrom__pred__output_res_name_ordered_table__1401__1_2_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv0_HeadVar__2_34);
    }
#line 1401 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_34));
#line 1401 "rtti_out.m"
  }
#line 1401 "rtti_out.m"
}

#line 1394 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__NameArityMap_10,
#line 1394 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
#line 1394 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17)
#line 1394 "rtti_out.m"
{
#line 1399 "rtti_out.m"
  {
#line 1399 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeInfo_32_32 = (MR_Word) &ll_backend__rtti_out_scalar_common_2[3];
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_38_38;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ArityMaps_13;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorLists_14;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Functors_15;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_21_21;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_27_27;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54;
#line 1399 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_56_56;
#line 1407 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_28_28;

#line 1400 "rtti_out.m"
    {
#line 1400 "rtti_out.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeInfo_32_32, ll_backend__rtti_out__NameArityMap_10, &ll_backend__rtti_out__ArityMaps_13);
    }
#line 1401 "rtti_out.m"
    {
#line 1401 "rtti_out.m"
      mercury__list__map_3_p_0(ll_backend__rtti_out__TypeInfo_32_32, (MR_Word) &ll_backend__rtti_out_scalar_common_1[4], (MR_Word) &ll_backend__rtti_out_scalar_common_2[30], ll_backend__rtti_out__ArityMaps_13, &ll_backend__rtti_out__FunctorLists_14);
    }
#line 6250 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
#line 1402 "rtti_out.m"
    {
#line 1402 "rtti_out.m"
      mercury__list__condense_2_p_0(ll_backend__rtti_out__TypeCtorInfo_38_38, ll_backend__rtti_out__FunctorLists_14, &ll_backend__rtti_out__Functors_15);
    }
#line 1404 "rtti_out.m"
    {
#line 1404 "rtti_out.m"
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1404 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 1404 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_21_21, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 1) = ((MR_Box) (ll_backend__rtti_out__V_21_21));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_56_56, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
    }
#line 1406 "rtti_out.m"
    {
#line 1406 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
#line 1407 "rtti_out.m"
    {
#line 1407 "rtti_out.m"
      ll_backend__rtti_out__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1407 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[5]));
#line 1407 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_name_ordered_table_7_p_0_2));
#line 1407 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1407 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_27_27, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1407 "rtti_out.m"
    }
#line 1407 "rtti_out.m"
    {
#line 1407 "rtti_out.m"
      mercury__list__foldl_4_p_2(ll_backend__rtti_out__TypeCtorInfo_38_38, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_27_27, ll_backend__rtti_out__Functors_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 1409 "rtti_out.m"
    {
#line 1409 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1409 "rtti_out.m"
      return;
    }
#line 1399 "rtti_out.m"
  }
#line 1394 "rtti_out.m"
}

#line 1373 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4(
#line 1373 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1373 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1373 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1373 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1373 "rtti_out.m"
{
#line 1373 "rtti_out.m"
  {
#line 1373 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1373 "rtti_out.m"
    {
#line 1373 "rtti_out.m"
      ll_backend__rtti_out__output_res_addr_functors_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1373 "rtti_out.m"
      return;
    }
#line 1373 "rtti_out.m"
  }
#line 1373 "rtti_out.m"
}

#line 1366 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3(
#line 1366 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg)
#line 1366 "rtti_out.m"
{
#line 1366 "rtti_out.m"
  {
#line 1366 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1366 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1366 "rtti_out.m"
    {
#line 1366 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_res_value_ordered_table__1366__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))));
    }
#line 1366 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1366 "rtti_out.m"
  }
#line 1366 "rtti_out.m"
}

#line 1362 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_2(
#line 1362 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1362 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1362 "rtti_out.m"
{
#line 1362 "rtti_out.m"
  {
#line 1362 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1362 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1362 "rtti_out.m"
    {
#line 1362 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1362 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1362 "rtti_out.m"
  }
#line 1362 "rtti_out.m"
}

#line 1361 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_1(
#line 1361 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1361 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1361 "rtti_out.m"
{
#line 1361 "rtti_out.m"
  {
#line 1361 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1361 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1361 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1361 "rtti_out.m"
    {
#line 1361 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1361 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1361 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1361 "rtti_out.m"
  }
#line 1361 "rtti_out.m"
}

#line 1355 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ResFunctors_11,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__DuPtagTable_12,
#line 1355 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 1355 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
#line 1355 "rtti_out.m"
{
#line 1360 "rtti_out.m"
  {
#line 1360 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_67_67 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ResFunctorReps_15;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__NumericResFunctorReps_16;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__SymbolicResFunctorReps_17;
#line 1360 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumNumericResFunctorReps_18;
#line 1360 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumSymbolicResFunctorReps_19;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_26_26;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_31_31;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_37_37;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_41_41;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_43_43;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_88;
#line 1360 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_90_90;
#line 1373 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_38_38;

#line 1361 "rtti_out.m"
    {
#line 1361 "rtti_out.m"
      ll_backend__rtti_out__ResFunctorReps_15 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_67_67, ll_backend__rtti_out__TypeCtorInfo_68_68, (MR_Word) &ll_backend__rtti_out_scalar_common_2[28], ll_backend__rtti_out__ResFunctors_11);
    }
#line 1362 "rtti_out.m"
    {
#line 1362 "rtti_out.m"
      mercury__list__filter_4_p_0(ll_backend__rtti_out__TypeCtorInfo_68_68, (MR_Word) &ll_backend__rtti_out_scalar_common_2[29], ll_backend__rtti_out__ResFunctorReps_15, &ll_backend__rtti_out__NumericResFunctorReps_16, &ll_backend__rtti_out__SymbolicResFunctorReps_17);
    }
#line 1364 "rtti_out.m"
    {
#line 1364 "rtti_out.m"
      mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_68_68, ll_backend__rtti_out__NumericResFunctorReps_16, &ll_backend__rtti_out__NumNumericResFunctorReps_18);
    }
#line 1365 "rtti_out.m"
    {
#line 1365 "rtti_out.m"
      mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_68_68, ll_backend__rtti_out__SymbolicResFunctorReps_17, &ll_backend__rtti_out__NumSymbolicResFunctorReps_19);
    }
#line 1366 "rtti_out.m"
    {
#line 1366 "rtti_out.m"
      ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[11]));
#line 1366 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_3));
#line 1366 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1366 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 3) = ((MR_Box) (ll_backend__rtti_out__NumSymbolicResFunctorReps_19));
#line 1366 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1366 "rtti_out.m"
    }
#line 1366 "rtti_out.m"
    {
#line 1366 "rtti_out.m"
      mercury__require__expect_4_p_0(ll_backend__rtti_out__V_26_26, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_res_value_ordered_table\'/8", (MR_String) "symbolic functors");
    }
#line 1370 "rtti_out.m"
    {
#line 1370 "rtti_out.m"
      ll_backend__rtti_out__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_31_31, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1370 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1370 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_31_31, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_88);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_90_90, 1) = ((MR_Box) (ll_backend__rtti_out__V_31_31));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_90_90, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_88, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32);
    }
#line 1372 "rtti_out.m"
    {
#line 1372 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1373 "rtti_out.m"
    {
#line 1373 "rtti_out.m"
      ll_backend__rtti_out__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[4]));
#line 1373 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 1) = ((MR_Box) (ll_backend__rtti_out__output_res_value_ordered_table_8_p_0_4));
#line 1373 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1373 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_37_37, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1373 "rtti_out.m"
    }
#line 1373 "rtti_out.m"
    {
#line 1373 "rtti_out.m"
      mercury__list__foldl_4_p_2(ll_backend__rtti_out__TypeCtorInfo_67_67, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_37_37, ll_backend__rtti_out__ResFunctors_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_38_38);
    }
#line 1374 "rtti_out.m"
    {
#line 1374 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 1376 "rtti_out.m"
    {
#line 1376 "rtti_out.m"
      ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__DuPtagTable_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_41_41);
    }
#line 1380 "rtti_out.m"
    {
#line 1380 "rtti_out.m"
      ll_backend__rtti_out__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_43_43, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1380 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1380 "rtti_out.m"
    }
#line 1379 "rtti_out.m"
    {
#line 1379 "rtti_out.m"
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_43_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_41_41, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
    }
#line 1382 "rtti_out.m"
    {
#line 1382 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
#line 1383 "rtti_out.m"
    {
#line 1383 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumNumericResFunctorReps_18);
    }
#line 1384 "rtti_out.m"
    {
#line 1384 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1385 "rtti_out.m"
    {
#line 1385 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumSymbolicResFunctorReps_19);
    }
#line 1386 "rtti_out.m"
    {
#line 1386 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1387 "rtti_out.m"
    {
#line 1387 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
#line 1388 "rtti_out.m"
    {
#line 1388 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1389 "rtti_out.m"
    {
#line 1389 "rtti_out.m"
      ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    }
#line 1390 "rtti_out.m"
    {
#line 1390 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1391 "rtti_out.m"
    {
#line 1391 "rtti_out.m"
      ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    }
#line 1392 "rtti_out.m"
    {
#line 1392 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1392 "rtti_out.m"
      return;
    }
#line 1360 "rtti_out.m"
  }
#line 1355 "rtti_out.m"
}

#line 1348 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_res_addr_functors_4_p_0(
#line 1348 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_5,
#line 1348 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ResFunctor_6)
#line 1348 "rtti_out.m"
{
#line 1351 "rtti_out.m"
  {
#line 1351 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1351 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_10_10;
#line 1351 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_19_19;
#line 1351 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_25;
#line 1351 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_26_26;

#line 1352 "rtti_out.m"
    {
#line 1352 "rtti_out.m"
      ll_backend__rtti_out__V_10_10 = backend_libs__rtti__res_functor_rtti_name_1_f_0(ll_backend__rtti_out__ResFunctor_6);
    }
#line 1941 "rtti_out.m"
    {
#line 1941 "rtti_out.m"
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_5));
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__V_10_10));
#line 1941 "rtti_out.m"
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_26_26 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_26_26);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_19_19, &ll_backend__rtti_out__Str_25);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_25);
    }
#line 1353 "rtti_out.m"
    {
#line 1353 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
#line 1353 "rtti_out.m"
      return;
    }
#line 1351 "rtti_out.m"
  }
#line 1348 "rtti_out.m"
}

#line 1316 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1(
#line 1316 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg)
#line 1316 "rtti_out.m"
{
#line 1316 "rtti_out.m"
  {
#line 1316 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1316 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1316 "rtti_out.m"
    {
#line 1316 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_ptag_ordered_table_body__1316__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))));
    }
#line 1316 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1316 "rtti_out.m"
  }
#line 1316 "rtti_out.m"
}

#line 1310 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(
#line 1310 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1310 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__2_2,
#line 1310 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__HeadVar__3_3)
#line 1310 "rtti_out.m"
{
#line 1313 "rtti_out.m"
  while (MR_TRUE)
#line 1313 "rtti_out.m"
    {
#line 1313 "rtti_out.m"
      /* tailcall optimized into a loop */
#line 1313 "rtti_out.m"
      {
#line 1313 "rtti_out.m"
        MR_bool ll_backend__rtti_out__succeeded;

#line 1313 "rtti_out.m"
        if ((ll_backend__rtti_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1313 "rtti_out.m"
          {
#line 1313 "rtti_out.m"
          }
#line 1313 "rtti_out.m"
        else
#line 1315 "rtti_out.m"
          {
#line 1315 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__Ptag_12;
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__SectagTable_13;
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__PtagTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__SectagLocn_17;
#line 1315 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__NumSharers_18;
#line 1315 "rtti_out.m"
            MR_String ll_backend__rtti_out__LocnStr_20;
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__2_2, (MR_Integer) 0)));
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_26_26;
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_38_38;
#line 1315 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_53_53;
#line 1315 "rtti_out.m"
            MR_String ll_backend__rtti_out__Str_59;
#line 1315 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_60_60;
#line 1317 "rtti_out.m"
            MR_Word ll_backend__rtti_out___SectagMap_19;

#line 1315 "rtti_out.m"
            ll_backend__rtti_out__Ptag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, (MR_Integer) 0)));
#line 1315 "rtti_out.m"
            ll_backend__rtti_out__SectagTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, (MR_Integer) 1)));
#line 1316 "rtti_out.m"
            {
#line 1316 "rtti_out.m"
              ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[11]));
#line 1316 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0_1));
#line 1316 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1316 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 3) = ((MR_Box) (ll_backend__rtti_out__HeadVar__3_3));
#line 1316 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 4) = ((MR_Box) (ll_backend__rtti_out__Ptag_12));
#line 1316 "rtti_out.m"
            }
#line 1316 "rtti_out.m"
            {
#line 1316 "rtti_out.m"
              mercury__require__expect_4_p_0(ll_backend__rtti_out__V_26_26, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table_body\'/5", (MR_String) "ptag mismatch");
            }
#line 1317 "rtti_out.m"
            ll_backend__rtti_out__SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_13, (MR_Integer) 0)));
#line 1317 "rtti_out.m"
            ll_backend__rtti_out__NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_13, (MR_Integer) 1)));
#line 1317 "rtti_out.m"
            ll_backend__rtti_out___SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_13, (MR_Integer) 2)));
#line 1318 "rtti_out.m"
            {
#line 1318 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "\t{ ");
            }
#line 1319 "rtti_out.m"
            {
#line 1319 "rtti_out.m"
              mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumSharers_18);
            }
#line 1320 "rtti_out.m"
            {
#line 1320 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1321 "rtti_out.m"
            {
#line 1321 "rtti_out.m"
              backend_libs__rtti__sectag_locn_to_string_2_p_0(ll_backend__rtti_out__SectagLocn_17, &ll_backend__rtti_out__LocnStr_20);
            }
#line 1322 "rtti_out.m"
            {
#line 1322 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__LocnStr_20);
            }
#line 1323 "rtti_out.m"
            {
#line 1323 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t");
            }
#line 1324 "rtti_out.m"
            {
#line 1324 "rtti_out.m"
              ll_backend__rtti_out__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1324 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_38_38, 1) = ((MR_Box) (ll_backend__rtti_out__Ptag_12));
#line 1324 "rtti_out.m"
            }
#line 1941 "rtti_out.m"
            {
#line 1941 "rtti_out.m"
              ll_backend__rtti_out__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_53_53, 0) = ((MR_Box) (ll_backend__rtti_out__HeadVar__1_1));
#line 1941 "rtti_out.m"
              MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_53_53, 1) = ((MR_Box) (ll_backend__rtti_out__V_38_38));
#line 1941 "rtti_out.m"
            }
#line 1933 "rtti_out.m"
            {
#line 1933 "rtti_out.m"
              ll_backend__rtti_out__V_60_60 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            }
#line 1933 "rtti_out.m"
            {
#line 1933 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_60_60);
            }
#line 1934 "rtti_out.m"
            {
#line 1934 "rtti_out.m"
              backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_53_53, &ll_backend__rtti_out__Str_59);
            }
#line 1935 "rtti_out.m"
            {
#line 1935 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_59);
            }
#line 1329 "rtti_out.m"
            if ((ll_backend__rtti_out__PtagTail_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1327 "rtti_out.m"
              {
#line 1328 "rtti_out.m"
                {
#line 1328 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) " }\n");
#line 1328 "rtti_out.m"
                  return;
                }
#line 1327 "rtti_out.m"
              }
#line 1329 "rtti_out.m"
            else
#line 1330 "rtti_out.m"
              {
#line 1330 "rtti_out.m"
                MR_Integer ll_backend__rtti_out__V_42_42;

#line 1331 "rtti_out.m"
                {
#line 1331 "rtti_out.m"
                  mercury__io__write_string_3_p_0((MR_String) " },\n");
                }
#line 1333 "rtti_out.m"
                ll_backend__rtti_out__V_42_42 = (ll_backend__rtti_out__HeadVar__3_3 + (MR_Integer) 1);
#line 1332 "rtti_out.m"
                /* direct tailcall eliminated */
#line 1332 "rtti_out.m"
                {
#line 1332 "rtti_out.m"
                  MR_Word ll_backend__rtti_out__HeadVar__2__tmp_copy_2 = ll_backend__rtti_out__PtagTail_14;
#line 1332 "rtti_out.m"
                  MR_Integer ll_backend__rtti_out__HeadVar__3__tmp_copy_3 = ll_backend__rtti_out__V_42_42;

#line 1332 "rtti_out.m"
                  ll_backend__rtti_out__HeadVar__3_3 = ll_backend__rtti_out__HeadVar__3__tmp_copy_3;
#line 1332 "rtti_out.m"
                  ll_backend__rtti_out__HeadVar__2_2 = ll_backend__rtti_out__HeadVar__2__tmp_copy_2;
#line 1332 "rtti_out.m"
                }
#line 1332 "rtti_out.m"
                continue;
#line 1330 "rtti_out.m"
              }
#line 1315 "rtti_out.m"
          }
#line 1313 "rtti_out.m"
      }
#line 1313 "rtti_out.m"
      break;
#line 1313 "rtti_out.m"
    }
#line 1310 "rtti_out.m"
}

#line 1292 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1(
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1292 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1292 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1292 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 1292 "rtti_out.m"
{
#line 1292 "rtti_out.m"
  {
#line 1292 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1292 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_20;

#line 1292 "rtti_out.m"
    {
#line 1292 "rtti_out.m"
      ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_20);
    }
#line 1292 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_20));
#line 1292 "rtti_out.m"
  }
#line 1292 "rtti_out.m"
}

#line 1286 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__PtagMap_10,
#line 1286 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
#line 1286 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20)
#line 1286 "rtti_out.m"
{
#line 1290 "rtti_out.m"
  {
#line 1290 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1290 "rtti_out.m"
    MR_Word ll_backend__rtti_out__PtagList_13;
#line 1290 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__FirstPtag_16;
#line 1290 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_23_23;
#line 1290 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24;
#line 1290 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_26_26;
#line 1290 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64;
#line 1290 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_66_66;
#line 1292 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_24_24;
#line 1292 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_25_25;
#line 1298 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_32_32;
#line 1298 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_33_33;
#line 1298 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_15_15;
#line 1298 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_14_14;

#line 1291 "rtti_out.m"
    {
#line 1291 "rtti_out.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, ll_backend__rtti_out__PtagMap_10, &ll_backend__rtti_out__PtagList_13);
    }
#line 1292 "rtti_out.m"
    {
#line 1292 "rtti_out.m"
      ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[4]));
#line 1292 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0_1));
#line 1292 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1292 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 3) = ((MR_Box) (ll_backend__rtti_out__Info_8));
#line 1292 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1292 "rtti_out.m"
    }
#line 1292 "rtti_out.m"
    {
#line 1292 "rtti_out.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_2[2], (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_23_23, ll_backend__rtti_out__PtagList_13, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_25_25);
    }
#line 1292 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_24_24);
#line 1295 "rtti_out.m"
    {
#line 1295 "rtti_out.m"
      ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1295 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1295 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_26_26, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 1) = ((MR_Box) (ll_backend__rtti_out__V_26_26));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_66_66, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);
    }
#line 1297 "rtti_out.m"
    {
#line 1297 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1298 "rtti_out.m"
    ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__PtagList_13)) == (MR_mktag((MR_Integer) 1)));
#line 1298 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1298 "rtti_out.m"
      {
#line 1298 "rtti_out.m"
        ll_backend__rtti_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 0)));
#line 1298 "rtti_out.m"
        ll_backend__rtti_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 1)));
#line 1298 "rtti_out.m"
        ll_backend__rtti_out__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, (MR_Integer) 0)));
#line 1298 "rtti_out.m"
        ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, (MR_Integer) 1)));
#line 1298 "rtti_out.m"
        ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_33_33 == (MR_Integer) 1);
#line 1298 "rtti_out.m"
      }
#line 1302 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1300 "rtti_out.m"
      {
#line 1346 "rtti_out.m"
        {
#line 1346 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t{ 0, MR_SECTAG_VARIABLE, NULL },\n");
        }
#line 1301 "rtti_out.m"
        ll_backend__rtti_out__FirstPtag_16 = (MR_Integer) 1;
#line 1300 "rtti_out.m"
      }
#line 1302 "rtti_out.m"
    else
#line 1304 "rtti_out.m"
      {
#line 1302 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_35_35;
#line 1302 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__V_36_36;
#line 1302 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_18_18;
#line 1302 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_17_17;

#line 1302 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__PtagList_13)) == (MR_mktag((MR_Integer) 1)));
#line 1302 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1302 "rtti_out.m"
          {
#line 1302 "rtti_out.m"
            ll_backend__rtti_out__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 0)));
#line 1302 "rtti_out.m"
            ll_backend__rtti_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PtagList_13, (MR_Integer) 1)));
#line 1302 "rtti_out.m"
            ll_backend__rtti_out__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_35_35, (MR_Integer) 0)));
#line 1302 "rtti_out.m"
            ll_backend__rtti_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_35_35, (MR_Integer) 1)));
#line 1302 "rtti_out.m"
            ll_backend__rtti_out__succeeded = (ll_backend__rtti_out__V_36_36 == (MR_Integer) 0);
#line 1302 "rtti_out.m"
          }
#line 1304 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1303 "rtti_out.m"
          ll_backend__rtti_out__FirstPtag_16 = (MR_Integer) 0;
#line 1304 "rtti_out.m"
        else
#line 1305 "rtti_out.m"
          {
#line 1305 "rtti_out.m"
            {
#line 1305 "rtti_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_ptag_ordered_table\'/7", (MR_String) "bad ptag list");
#line 1305 "rtti_out.m"
              return;
            }
#line 1305 "rtti_out.m"
          }
#line 1304 "rtti_out.m"
      }
#line 1307 "rtti_out.m"
    {
#line 1307 "rtti_out.m"
      ll_backend__rtti_out__output_du_ptag_ordered_table_body_5_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__PtagList_13, ll_backend__rtti_out__FirstPtag_16);
    }
#line 1308 "rtti_out.m"
    {
#line 1308 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1308 "rtti_out.m"
      return;
    }
#line 1290 "rtti_out.m"
  }
#line 1286 "rtti_out.m"
}

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1861 "rtti_out.m"
{
#line 1861 "rtti_out.m"
  {
#line 1861 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1861 "rtti_out.m"
    {
#line 1861 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1861 "rtti_out.m"
      return;
    }
#line 1861 "rtti_out.m"
  }
#line 1861 "rtti_out.m"
}

#line 1278 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_1(
#line 1278 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1278 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1278 "rtti_out.m"
{
#line 1278 "rtti_out.m"
  {
#line 1278 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1278 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1278 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1278 "rtti_out.m"
    {
#line 1278 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1278 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1278 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1278 "rtti_out.m"
  }
#line 1278 "rtti_out.m"
}

#line 1270 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0(
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__3_3,
#line 1270 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
#line 1270 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20)
#line 1270 "rtti_out.m"
{
#line 1275 "rtti_out.m"
  {
#line 1275 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_34_34 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1275 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Ptag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 0)));
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__SectagTable_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__HeadVar__3_3, (MR_Integer) 1)));
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__SectagMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_11, (MR_Integer) 2)));
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__SectagFunctors_17;
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorNames_18;
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_24_24;
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_27_27;
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_49;
#line 1275 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_51_51;
#line 1276 "rtti_out.m"
    MR_Word ll_backend__rtti_out___SectagLocn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_11, (MR_Integer) 0)));
#line 1276 "rtti_out.m"
    MR_Integer ll_backend__rtti_out___NumSharers_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__SectagTable_11, (MR_Integer) 1)));

#line 1277 "rtti_out.m"
    {
#line 1277 "rtti_out.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__TypeCtorInfo_34_34, ll_backend__rtti_out__SectagMap_16, &ll_backend__rtti_out__SectagFunctors_17);
    }
#line 1278 "rtti_out.m"
    {
#line 1278 "rtti_out.m"
      ll_backend__rtti_out__FunctorNames_18 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_34_34, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[27], ll_backend__rtti_out__SectagFunctors_17);
    }
#line 1280 "rtti_out.m"
    {
#line 1280 "rtti_out.m"
      ll_backend__rtti_out__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1280 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_27_27, 1) = ((MR_Box) (ll_backend__rtti_out__Ptag_10));
#line 1280 "rtti_out.m"
    }
#line 1280 "rtti_out.m"
    {
#line 1280 "rtti_out.m"
      ll_backend__rtti_out__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_24_24, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1280 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_24_24, 1) = ((MR_Box) (ll_backend__rtti_out__V_27_27));
#line 1280 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_24_24, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_49);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 1) = ((MR_Box) (ll_backend__rtti_out__V_24_24));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_49, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);
    }
#line 1282 "rtti_out.m"
    {
#line 1282 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1857 "rtti_out.m"
    if ((ll_backend__rtti_out__FunctorNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1857 "rtti_out.m"
      {
#line 1857 "rtti_out.m"
      }
#line 1857 "rtti_out.m"
    else
#line 1858 "rtti_out.m"
      {
#line 1858 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_67_67;

#line 1859 "rtti_out.m"
        {
#line 1859 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1861 "rtti_out.m"
        {
#line 1861 "rtti_out.m"
          ll_backend__rtti_out__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_stag_ordered_table_7_p_0_2));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_67_67, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1861 "rtti_out.m"
        }
#line 1860 "rtti_out.m"
        {
#line 1860 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorNames_18, (MR_String) ",\n\t", ll_backend__rtti_out__V_67_67);
        }
#line 1862 "rtti_out.m"
        {
#line 1862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1858 "rtti_out.m"
      }
#line 1284 "rtti_out.m"
    {
#line 1284 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1284 "rtti_out.m"
      return;
    }
#line 1275 "rtti_out.m"
  }
#line 1270 "rtti_out.m"
}

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1861 "rtti_out.m"
{
#line 1861 "rtti_out.m"
  {
#line 1861 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1861 "rtti_out.m"
    {
#line 1861 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1861 "rtti_out.m"
      return;
    }
#line 1861 "rtti_out.m"
  }
#line 1861 "rtti_out.m"
}

#line 1262 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_2(
#line 1262 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1262 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1262 "rtti_out.m"
{
#line 1262 "rtti_out.m"
  {
#line 1262 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1262 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1262 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

#line 1262 "rtti_out.m"
    {
#line 1262 "rtti_out.m"
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1262 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
#line 1262 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1262 "rtti_out.m"
  }
#line 1262 "rtti_out.m"
}

#line 1260 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_1(
#line 1260 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1260 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1260 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2)
#line 1260 "rtti_out.m"
{
#line 1260 "rtti_out.m"
  {
#line 1260 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1260 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_35;

#line 1260 "rtti_out.m"
    {
#line 1260 "rtti_out.m"
      ll_backend__rtti_out__IntroducedFrom__pred__output_du_name_ordered_table__1260__1_2_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv0_HeadVar__2_35);
    }
#line 1260 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_35));
#line 1260 "rtti_out.m"
  }
#line 1260 "rtti_out.m"
}

#line 1253 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__NameArityMap_10,
#line 1253 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 1253 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
#line 1253 "rtti_out.m"
{
#line 1258 "rtti_out.m"
  {
#line 1258 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeInfo_33_33 = (MR_Word) &ll_backend__rtti_out_scalar_common_2[1];
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_39_39;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ArityMaps_13;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorLists_14;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Functors_15;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorRttiNames_16;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_23_23;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54;
#line 1258 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_56_56;

#line 1259 "rtti_out.m"
    {
#line 1259 "rtti_out.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeInfo_33_33, ll_backend__rtti_out__NameArityMap_10, &ll_backend__rtti_out__ArityMaps_13);
    }
#line 1260 "rtti_out.m"
    {
#line 1260 "rtti_out.m"
      mercury__list__map_3_p_0(ll_backend__rtti_out__TypeInfo_33_33, (MR_Word) &ll_backend__rtti_out_scalar_common_1[3], (MR_Word) &ll_backend__rtti_out_scalar_common_2[25], ll_backend__rtti_out__ArityMaps_13, &ll_backend__rtti_out__FunctorLists_14);
    }
#line 7607 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeCtorInfo_39_39 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1261 "rtti_out.m"
    {
#line 1261 "rtti_out.m"
      mercury__list__condense_2_p_0(ll_backend__rtti_out__TypeCtorInfo_39_39, ll_backend__rtti_out__FunctorLists_14, &ll_backend__rtti_out__Functors_15);
    }
#line 1262 "rtti_out.m"
    {
#line 1262 "rtti_out.m"
      ll_backend__rtti_out__FunctorRttiNames_16 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_39_39, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[26], ll_backend__rtti_out__Functors_15);
    }
#line 1264 "rtti_out.m"
    {
#line 1264 "rtti_out.m"
      ll_backend__rtti_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1264 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1264 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_23_23, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_56_56, 1) = ((MR_Box) (ll_backend__rtti_out__V_23_23));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_56_56, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_54, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
#line 1266 "rtti_out.m"
    {
#line 1266 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1857 "rtti_out.m"
    if ((ll_backend__rtti_out__FunctorRttiNames_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1857 "rtti_out.m"
      {
#line 1857 "rtti_out.m"
      }
#line 1857 "rtti_out.m"
    else
#line 1858 "rtti_out.m"
      {
#line 1858 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_72_72;

#line 1859 "rtti_out.m"
        {
#line 1859 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1861 "rtti_out.m"
        {
#line 1861 "rtti_out.m"
          ll_backend__rtti_out__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_name_ordered_table_7_p_0_3));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_72_72, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1861 "rtti_out.m"
        }
#line 1860 "rtti_out.m"
        {
#line 1860 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_16, (MR_String) ",\n\t", ll_backend__rtti_out__V_72_72);
        }
#line 1862 "rtti_out.m"
        {
#line 1862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1858 "rtti_out.m"
      }
#line 1268 "rtti_out.m"
    {
#line 1268 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1268 "rtti_out.m"
      return;
    }
#line 1258 "rtti_out.m"
  }
#line 1253 "rtti_out.m"
}

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1861 "rtti_out.m"
{
#line 1861 "rtti_out.m"
  {
#line 1861 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1861 "rtti_out.m"
    {
#line 1861 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1861 "rtti_out.m"
      return;
    }
#line 1861 "rtti_out.m"
  }
#line 1861 "rtti_out.m"
}

#line 1245 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_1(
#line 1245 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1245 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1245 "rtti_out.m"
{
#line 1245 "rtti_out.m"
  {
#line 1245 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1245 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1245 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1245 "rtti_out.m"
    {
#line 1245 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1245 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1245 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1245 "rtti_out.m"
  }
#line 1245 "rtti_out.m"
}

#line 1238 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1238 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1238 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
#line 1238 "rtti_out.m"
{
#line 1243 "rtti_out.m"
  {
#line 1243 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1243 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1243 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Functors_13;
#line 1243 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
#line 1243 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_20_20;
#line 1243 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
#line 1243 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;

#line 1244 "rtti_out.m"
    {
#line 1244 "rtti_out.m"
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
#line 1245 "rtti_out.m"
    {
#line 1245 "rtti_out.m"
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[24], ll_backend__rtti_out__Functors_13);
    }
#line 1247 "rtti_out.m"
    {
#line 1247 "rtti_out.m"
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1247 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1247 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_20_20, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_20_20));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
#line 1249 "rtti_out.m"
    {
#line 1249 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1857 "rtti_out.m"
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1857 "rtti_out.m"
      {
#line 1857 "rtti_out.m"
      }
#line 1857 "rtti_out.m"
    else
#line 1858 "rtti_out.m"
      {
#line 1858 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_63_63;

#line 1859 "rtti_out.m"
        {
#line 1859 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1861 "rtti_out.m"
        {
#line 1861 "rtti_out.m"
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0_2));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1861 "rtti_out.m"
        }
#line 1860 "rtti_out.m"
        {
#line 1860 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
#line 1862 "rtti_out.m"
        {
#line 1862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1858 "rtti_out.m"
      }
#line 1251 "rtti_out.m"
    {
#line 1251 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1251 "rtti_out.m"
      return;
    }
#line 1243 "rtti_out.m"
  }
#line 1238 "rtti_out.m"
}

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1861 "rtti_out.m"
{
#line 1861 "rtti_out.m"
  {
#line 1861 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1861 "rtti_out.m"
    {
#line 1861 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1861 "rtti_out.m"
      return;
    }
#line 1861 "rtti_out.m"
  }
#line 1861 "rtti_out.m"
}

#line 1230 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_1(
#line 1230 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1230 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1230 "rtti_out.m"
{
#line 1230 "rtti_out.m"
  {
#line 1230 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1230 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1230 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1230 "rtti_out.m"
    {
#line 1230 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1230 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1230 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1230 "rtti_out.m"
  }
#line 1230 "rtti_out.m"
}

#line 1223 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1223 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16,
#line 1223 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17)
#line 1223 "rtti_out.m"
{
#line 1228 "rtti_out.m"
  {
#line 1228 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1228 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1228 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Functors_13;
#line 1228 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
#line 1228 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiId_15;
#line 1228 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
#line 1228 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;

#line 1229 "rtti_out.m"
    {
#line 1229 "rtti_out.m"
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
#line 1230 "rtti_out.m"
    {
#line 1230 "rtti_out.m"
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[23], ll_backend__rtti_out__Functors_13);
    }
#line 1231 "rtti_out.m"
    {
#line 1231 "rtti_out.m"
      ll_backend__rtti_out__RttiId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_15, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1231 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1231 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiId_15, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_16, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_15));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17);
    }
#line 1234 "rtti_out.m"
    {
#line 1234 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1857 "rtti_out.m"
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1857 "rtti_out.m"
      {
#line 1857 "rtti_out.m"
      }
#line 1857 "rtti_out.m"
    else
#line 1858 "rtti_out.m"
      {
#line 1858 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_63_63;

#line 1859 "rtti_out.m"
        {
#line 1859 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1861 "rtti_out.m"
        {
#line 1861 "rtti_out.m"
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0_2));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1861 "rtti_out.m"
        }
#line 1860 "rtti_out.m"
        {
#line 1860 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
#line 1862 "rtti_out.m"
        {
#line 1862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1858 "rtti_out.m"
      }
#line 1236 "rtti_out.m"
    {
#line 1236 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1236 "rtti_out.m"
      return;
    }
#line 1228 "rtti_out.m"
  }
#line 1223 "rtti_out.m"
}

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1861 "rtti_out.m"
{
#line 1861 "rtti_out.m"
  {
#line 1861 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1861 "rtti_out.m"
    {
#line 1861 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1861 "rtti_out.m"
      return;
    }
#line 1861 "rtti_out.m"
  }
#line 1861 "rtti_out.m"
}

#line 1215 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_1(
#line 1215 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1215 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1215 "rtti_out.m"
{
#line 1215 "rtti_out.m"
  {
#line 1215 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1215 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1215 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1215 "rtti_out.m"
    {
#line 1215 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1215 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1215 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1215 "rtti_out.m"
  }
#line 1215 "rtti_out.m"
}

#line 1208 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1208 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1208 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
#line 1208 "rtti_out.m"
{
#line 1213 "rtti_out.m"
  {
#line 1213 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1213 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1213 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Functors_13;
#line 1213 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
#line 1213 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_20_20;
#line 1213 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
#line 1213 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;

#line 1214 "rtti_out.m"
    {
#line 1214 "rtti_out.m"
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
#line 1215 "rtti_out.m"
    {
#line 1215 "rtti_out.m"
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[22], ll_backend__rtti_out__Functors_13);
    }
#line 1217 "rtti_out.m"
    {
#line 1217 "rtti_out.m"
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1217 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1217 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_20_20, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_20_20));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
#line 1219 "rtti_out.m"
    {
#line 1219 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1857 "rtti_out.m"
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1857 "rtti_out.m"
      {
#line 1857 "rtti_out.m"
      }
#line 1857 "rtti_out.m"
    else
#line 1858 "rtti_out.m"
      {
#line 1858 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_63_63;

#line 1859 "rtti_out.m"
        {
#line 1859 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1861 "rtti_out.m"
        {
#line 1861 "rtti_out.m"
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0_2));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1861 "rtti_out.m"
        }
#line 1860 "rtti_out.m"
        {
#line 1860 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
#line 1862 "rtti_out.m"
        {
#line 1862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1858 "rtti_out.m"
      }
#line 1221 "rtti_out.m"
    {
#line 1221 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1221 "rtti_out.m"
      return;
    }
#line 1213 "rtti_out.m"
  }
#line 1208 "rtti_out.m"
}

#line 1861 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2(
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1861 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1861 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1861 "rtti_out.m"
{
#line 1861 "rtti_out.m"
  {
#line 1861 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1861 "rtti_out.m"
    {
#line 1861 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1861 "rtti_out.m"
      return;
    }
#line 1861 "rtti_out.m"
  }
#line 1861 "rtti_out.m"
}

#line 1200 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_1(
#line 1200 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1200 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1200 "rtti_out.m"
{
#line 1200 "rtti_out.m"
  {
#line 1200 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1200 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1200 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1200 "rtti_out.m"
    {
#line 1200 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1200 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1200 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1200 "rtti_out.m"
  }
#line 1200 "rtti_out.m"
}

#line 1193 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__FunctorMap_10,
#line 1193 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1193 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
#line 1193 "rtti_out.m"
{
#line 1198 "rtti_out.m"
  {
#line 1198 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1198 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1198 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Functors_13;
#line 1198 "rtti_out.m"
    MR_Word ll_backend__rtti_out__FunctorRttiNames_14;
#line 1198 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_20_20;
#line 1198 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45;
#line 1198 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;

#line 1199 "rtti_out.m"
    {
#line 1199 "rtti_out.m"
      ll_backend__rtti_out__Functors_13 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__TypeCtorInfo_30_30, ll_backend__rtti_out__FunctorMap_10);
    }
#line 1200 "rtti_out.m"
    {
#line 1200 "rtti_out.m"
      ll_backend__rtti_out__FunctorRttiNames_14 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_30_30, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[21], ll_backend__rtti_out__Functors_13);
    }
#line 1202 "rtti_out.m"
    {
#line 1202 "rtti_out.m"
      ll_backend__rtti_out__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1202 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1202 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_20_20, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_20_20));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_47_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
#line 1204 "rtti_out.m"
    {
#line 1204 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1857 "rtti_out.m"
    if ((ll_backend__rtti_out__FunctorRttiNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1857 "rtti_out.m"
      {
#line 1857 "rtti_out.m"
      }
#line 1857 "rtti_out.m"
    else
#line 1858 "rtti_out.m"
      {
#line 1858 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_63_63;

#line 1859 "rtti_out.m"
        {
#line 1859 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1861 "rtti_out.m"
        {
#line 1861 "rtti_out.m"
          ll_backend__rtti_out__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[3]));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0_2));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1861 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_63_63, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 1861 "rtti_out.m"
        }
#line 1860 "rtti_out.m"
        {
#line 1860 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ll_backend__rtti_out__FunctorRttiNames_14, (MR_String) ",\n\t", ll_backend__rtti_out__V_63_63);
        }
#line 1862 "rtti_out.m"
        {
#line 1862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1858 "rtti_out.m"
      }
#line 1206 "rtti_out.m"
    {
#line 1206 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1206 "rtti_out.m"
      return;
    }
#line 1198 "rtti_out.m"
  }
#line 1193 "rtti_out.m"
}

#line 1156 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_2_4_p_0(
#line 1156 "rtti_out.m"
  MR_Word ll_backend__rtti_out__HeadVar__1_1,
#line 1156 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__PrevSlotNum_2)
#line 1156 "rtti_out.m"
{
#line 1159 "rtti_out.m"
  while (MR_TRUE)
#line 1159 "rtti_out.m"
    {
#line 1159 "rtti_out.m"
      /* tailcall optimized into a loop */
#line 1159 "rtti_out.m"
      {
#line 1159 "rtti_out.m"
        MR_bool ll_backend__rtti_out__succeeded;

#line 1159 "rtti_out.m"
        if ((ll_backend__rtti_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1159 "rtti_out.m"
          {
#line 1159 "rtti_out.m"
          }
#line 1159 "rtti_out.m"
        else
#line 1160 "rtti_out.m"
          {
#line 1160 "rtti_out.m"
            MR_Word ll_backend__rtti_out__ArgInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 0)));
#line 1160 "rtti_out.m"
            MR_Word ll_backend__rtti_out__ArgInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__HeadVar__1_1, (MR_Integer) 1)));
#line 1160 "rtti_out.m"
            MR_Word ll_backend__rtti_out__ArgWidth_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgInfo_9, (MR_Integer) 2)));
#line 1160 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__Shift_14;
#line 1160 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__Bits_15;
#line 1160 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__SlotNum_16;
#line 1160 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__Skip_17;
#line 1160 "rtti_out.m"
            MR_Integer ll_backend__rtti_out__V_37_37;
#line 1160 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_45_45;
#line 1160 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_51_51;
#line 1160 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_55_55;
#line 1160 "rtti_out.m"
            MR_String ll_backend__rtti_out__V_65_65;
#line 1161 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgInfo_9, (MR_Integer) 0)));
#line 1161 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgInfo_9, (MR_Integer) 1)));

#line 1169 "rtti_out.m"
#line 1169 "rtti_out.m"
            switch (MR_tag((MR_Word) ll_backend__rtti_out__ArgWidth_13)) {
#line 1169 "rtti_out.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1169 "rtti_out.m"
              case (MR_Integer) 0:
#line 1169 "rtti_out.m"
#line 1169 "rtti_out.m"
                switch (MR_unmkbody(ll_backend__rtti_out__ArgWidth_13)) {
#line 1169 "rtti_out.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1169 "rtti_out.m"
                  case (MR_Integer) 0:
#line 1163 "rtti_out.m"
                    {
#line 1165 "rtti_out.m"
                      ll_backend__rtti_out__Shift_14 = (MR_Integer) 0;
#line 1166 "rtti_out.m"
                      ll_backend__rtti_out__Bits_15 = (MR_Integer) 0;
#line 1167 "rtti_out.m"
                      ll_backend__rtti_out__SlotNum_16 = (ll_backend__rtti_out__PrevSlotNum_2 + (MR_Integer) 1);
#line 1168 "rtti_out.m"
                      ll_backend__rtti_out__Skip_17 = (MR_Integer) 0;
#line 1163 "rtti_out.m"
                    }
#line 1169 "rtti_out.m"
                    break;
#line 1169 "rtti_out.m"
                  case (MR_Integer) 1:
#line 1170 "rtti_out.m"
                    {
#line 1172 "rtti_out.m"
                      ll_backend__rtti_out__Shift_14 = (MR_Integer) 0;
#line 1173 "rtti_out.m"
                      ll_backend__rtti_out__Bits_15 = (MR_Integer) -1;
#line 1174 "rtti_out.m"
                      ll_backend__rtti_out__SlotNum_16 = (ll_backend__rtti_out__PrevSlotNum_2 + (MR_Integer) 1);
#line 1175 "rtti_out.m"
                      ll_backend__rtti_out__Skip_17 = (MR_Integer) 1;
#line 1170 "rtti_out.m"
                    }
#line 1169 "rtti_out.m"
                    break;
#line 1169 "rtti_out.m"
                }
#line 1169 "rtti_out.m"
                break;
#line 1169 "rtti_out.m"
              case (MR_Integer) 1:
#line 1177 "rtti_out.m"
                {
#line 1177 "rtti_out.m"
                  MR_Integer ll_backend__rtti_out__Mask_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__ArgWidth_13, (MR_Integer) 0)));
#line 1177 "rtti_out.m"
                  MR_Integer ll_backend__rtti_out__V_23_23;

#line 1178 "rtti_out.m"
                  ll_backend__rtti_out__Shift_14 = (MR_Integer) 0;
#line 1179 "rtti_out.m"
                  ll_backend__rtti_out__V_23_23 = (ll_backend__rtti_out__Mask_18 + (MR_Integer) 1);
#line 1179 "rtti_out.m"
                  {
#line 1179 "rtti_out.m"
                    mercury__int__log2_2_p_0(ll_backend__rtti_out__V_23_23, &ll_backend__rtti_out__Bits_15);
                  }
#line 1180 "rtti_out.m"
                  ll_backend__rtti_out__SlotNum_16 = (ll_backend__rtti_out__PrevSlotNum_2 + (MR_Integer) 1);
#line 1181 "rtti_out.m"
                  ll_backend__rtti_out__Skip_17 = (MR_Integer) 0;
#line 1177 "rtti_out.m"
                }
#line 1169 "rtti_out.m"
                break;
#line 1169 "rtti_out.m"
              case (MR_Integer) 2:
#line 1183 "rtti_out.m"
                {
#line 1183 "rtti_out.m"
                  MR_Integer ll_backend__rtti_out__V_21_21;
#line 1183 "rtti_out.m"
                  MR_Integer ll_backend__rtti_out__Mask_39;

#line 1183 "rtti_out.m"
                  ll_backend__rtti_out__Shift_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__ArgWidth_13, (MR_Integer) 0)));
#line 1183 "rtti_out.m"
                  ll_backend__rtti_out__Mask_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__ArgWidth_13, (MR_Integer) 1)));
#line 1184 "rtti_out.m"
                  ll_backend__rtti_out__V_21_21 = (ll_backend__rtti_out__Mask_39 + (MR_Integer) 1);
#line 1184 "rtti_out.m"
                  {
#line 1184 "rtti_out.m"
                    mercury__int__log2_2_p_0(ll_backend__rtti_out__V_21_21, &ll_backend__rtti_out__Bits_15);
                  }
#line 1185 "rtti_out.m"
                  ll_backend__rtti_out__SlotNum_16 = ll_backend__rtti_out__PrevSlotNum_2;
#line 1186 "rtti_out.m"
                  ll_backend__rtti_out__Skip_17 = (MR_Integer) 0;
#line 1183 "rtti_out.m"
                }
#line 1169 "rtti_out.m"
                break;
#line 1169 "rtti_out.m"
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "\t{ ");
            }
#line 8683 "ll_backend.rtti_out.c"
            ll_backend__rtti_out__V_51_51 = (MR_Word) &ll_backend__rtti_out_scalar_common_10[9];
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__SlotNum_16, &ll_backend__rtti_out__V_45_45);
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_45_45);
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__Shift_14, &ll_backend__rtti_out__V_55_55);
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_55_55);
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__Bits_15, &ll_backend__rtti_out__V_65_65);
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_65_65);
            }
#line 1188 "rtti_out.m"
            {
#line 1188 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
#line 1189 "rtti_out.m"
            ll_backend__rtti_out__V_37_37 = (ll_backend__rtti_out__SlotNum_16 + ll_backend__rtti_out__Skip_17);
#line 1189 "rtti_out.m"
            /* direct tailcall eliminated */
#line 1189 "rtti_out.m"
            {
#line 1189 "rtti_out.m"
              MR_Word ll_backend__rtti_out__HeadVar__1__tmp_copy_1 = ll_backend__rtti_out__ArgInfos_10;
#line 1189 "rtti_out.m"
              MR_Integer ll_backend__rtti_out__PrevSlotNum__tmp_copy_2 = ll_backend__rtti_out__V_37_37;

#line 1189 "rtti_out.m"
              ll_backend__rtti_out__PrevSlotNum_2 = ll_backend__rtti_out__PrevSlotNum__tmp_copy_2;
#line 1189 "rtti_out.m"
              ll_backend__rtti_out__HeadVar__1_1 = ll_backend__rtti_out__HeadVar__1__tmp_copy_1;
#line 1189 "rtti_out.m"
            }
#line 1189 "rtti_out.m"
            continue;
#line 1160 "rtti_out.m"
          }
#line 1159 "rtti_out.m"
      }
#line 1159 "rtti_out.m"
      break;
#line 1159 "rtti_out.m"
    }
#line 1156 "rtti_out.m"
}

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 1141 "rtti_out.m"
{
#line 1141 "rtti_out.m"
  {
#line 1141 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 1141 "rtti_out.m"
    MR_builtin_longjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0, 1);
#line 1141 "rtti_out.m"
  }
#line 1141 "rtti_out.m"
}

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_3(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 1141 "rtti_out.m"
{
#line 1141 "rtti_out.m"
  {
#line 1141 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 1141 "rtti_out.m"
    (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17 = ((MR_Word) (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17);
#line 1141 "rtti_out.m"
    {
#line 1141 "rtti_out.m"
      ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(ll_backend__rtti_out__env_ptr);
#line 1141 "rtti_out.m"
      return;
    }
#line 1141 "rtti_out.m"
  }
#line 1141 "rtti_out.m"
}

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_2(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 1141 "rtti_out.m"
{
#line 1141 "rtti_out.m"
  {
#line 1141 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 1141 "rtti_out.m"
    {
#line 1142 "rtti_out.m"
      MR_Word ll_backend__rtti_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 0)));
#line 1142 "rtti_out.m"
      MR_Word ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 1)));

#line 1142 "rtti_out.m"
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfo_17, (MR_Integer) 2)));
#line 1143 "rtti_out.m"
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = ((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__Width_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "rtti_out.m"
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = !((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded);
#line 1143 "rtti_out.m"
      if ((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded)
#line 1143 "rtti_out.m"
        {
#line 1143 "rtti_out.m"
          ll_backend__rtti_out__output_du_arg_locns_9_p_0_1(ll_backend__rtti_out__env_ptr);
#line 1143 "rtti_out.m"
          return;
        }
#line 1141 "rtti_out.m"
    }
#line 1141 "rtti_out.m"
  }
#line 1141 "rtti_out.m"
}

#line 1141 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(
#line 1141 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 1141 "rtti_out.m"
{
#line 1141 "rtti_out.m"
  {
#line 1141 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 1141 "rtti_out.m"
    if (MR_builtin_setjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__commit_0) == 0)
#line 1141 "rtti_out.m"
      {
#line 1141 "rtti_out.m"
        {
#line 1141 "rtti_out.m"
          {
#line 1141 "rtti_out.m"
            mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__conv0_ArgInfo_17, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13, ll_backend__rtti_out__output_du_arg_locns_9_p_0_3, ll_backend__rtti_out__env_ptr);
          }
#line 1141 "rtti_out.m"
        }
#line 1141 "rtti_out.m"
        (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = MR_FALSE;
#line 1141 "rtti_out.m"
      }
#line 1141 "rtti_out.m"
    else
#line 1141 "rtti_out.m"
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded = MR_TRUE;
#line 1141 "rtti_out.m"
  }
#line 1141 "rtti_out.m"
}

#line 1134 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_locns_9_p_0(
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_10,
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_11,
#line 1134 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_12,
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgInfos_13,
#line 1134 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HaveArgLocns_14,
#line 1134 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 1134 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
#line 1134 "rtti_out.m"
{
#line 1134 "rtti_out.m"
  {
#line 1134 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0_s ll_backend__rtti_out__env;

#line 1134 "rtti_out.m"
    (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13 = ll_backend__rtti_out__ArgInfos_13;
#line 1141 "rtti_out.m"
    {
#line 1141 "rtti_out.m"
      ll_backend__rtti_out__output_du_arg_locns_9_p_0_4(&ll_backend__rtti_out__env);
    }
#line 1152 "rtti_out.m"
    if ((ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__succeeded)
#line 1147 "rtti_out.m"
      {
#line 1147 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_25_25;
#line 1147 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_28_28;
#line 1147 "rtti_out.m"
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_47;
#line 1147 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_49_49;

#line 1146 "rtti_out.m"
        {
#line 1146 "rtti_out.m"
          ll_backend__rtti_out__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1146 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_12));
#line 1146 "rtti_out.m"
        }
#line 1146 "rtti_out.m"
        {
#line 1146 "rtti_out.m"
          ll_backend__rtti_out__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 1146 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 1) = ((MR_Box) (ll_backend__rtti_out__V_28_28));
#line 1146 "rtti_out.m"
        }
#line 1595 "rtti_out.m"
        {
#line 1595 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1596 "rtti_out.m"
        {
#line 1596 "rtti_out.m"
          ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_10, ll_backend__rtti_out__V_25_25, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_47);
        }
#line 1597 "rtti_out.m"
        {
#line 1597 "rtti_out.m"
          ll_backend__rtti_out__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_49_49, 1) = ((MR_Box) (ll_backend__rtti_out__V_25_25));
#line 1597 "rtti_out.m"
        }
#line 1597 "rtti_out.m"
        {
#line 1597 "rtti_out.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_49_49, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_47, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
        }
#line 1148 "rtti_out.m"
        {
#line 1148 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 1149 "rtti_out.m"
        {
#line 1149 "rtti_out.m"
          ll_backend__rtti_out__output_du_arg_locns_2_4_p_0((ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_arg_locns_9_p_0_env_0__ArgInfos_13, (MR_Integer) -1);
        }
#line 1150 "rtti_out.m"
        {
#line 1150 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 1151 "rtti_out.m"
        *ll_backend__rtti_out__HaveArgLocns_14 = (MR_Integer) 1;
#line 1147 "rtti_out.m"
      }
#line 1152 "rtti_out.m"
    else
#line 1153 "rtti_out.m"
      {
#line 1153 "rtti_out.m"
        *ll_backend__rtti_out__HaveArgLocns_14 = (MR_Integer) 0;
#line 1153 "rtti_out.m"
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21;
#line 1153 "rtti_out.m"
      }
#line 1134 "rtti_out.m"
  }
#line 1134 "rtti_out.m"
}

#line 1963 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_2(
#line 1963 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1963 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1963 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1963 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1963 "rtti_out.m"
{
#line 1963 "rtti_out.m"
  {
#line 1963 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1963 "rtti_out.m"
    {
#line 1963 "rtti_out.m"
      ll_backend__rtti_out__output_maybe_quoted_string_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1963 "rtti_out.m"
      return;
    }
#line 1963 "rtti_out.m"
  }
#line 1963 "rtti_out.m"
}

#line 1130 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0_1(
#line 1130 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg)
#line 1130 "rtti_out.m"
{
#line 1130 "rtti_out.m"
  {
#line 1130 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1130 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1130 "rtti_out.m"
    {
#line 1130 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_names__1130__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))));
    }
#line 1130 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1130 "rtti_out.m"
  }
#line 1130 "rtti_out.m"
}

#line 1121 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_names_8_p_0(
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1121 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeNames_12,
#line 1121 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1121 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
#line 1121 "rtti_out.m"
{
#line 1125 "rtti_out.m"
  {
#line 1125 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1125 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_19_19;
#line 1125 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_22_22;
#line 1125 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_25_25;
#line 1125 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_44;
#line 1125 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_46_46;

#line 1127 "rtti_out.m"
    {
#line 1127 "rtti_out.m"
      ll_backend__rtti_out__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1127 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1127 "rtti_out.m"
    }
#line 1127 "rtti_out.m"
    {
#line 1127 "rtti_out.m"
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1127 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__V_22_22));
#line 1127 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_19_19, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_44);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__V_19_19));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_46_46, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
#line 1129 "rtti_out.m"
    {
#line 1129 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1130 "rtti_out.m"
    {
#line 1130 "rtti_out.m"
      ll_backend__rtti_out__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[3]));
#line 1130 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_names_8_p_0_1));
#line 1130 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1130 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_25_25, 3) = ((MR_Box) (ll_backend__rtti_out__MaybeNames_12));
#line 1130 "rtti_out.m"
    }
#line 1130 "rtti_out.m"
    {
#line 1130 "rtti_out.m"
      mercury__require__expect_4_p_0(ll_backend__rtti_out__V_25_25, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_names\'/8", (MR_String) "empty list");
    }
#line 1962 "rtti_out.m"
    {
#line 1962 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1963 "rtti_out.m"
    {
#line 1963 "rtti_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &ll_backend__rtti_out_scalar_common_1[2], ll_backend__rtti_out__MaybeNames_12, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[20]);
    }
#line 1964 "rtti_out.m"
    {
#line 1964 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1132 "rtti_out.m"
    {
#line 1132 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1132 "rtti_out.m"
      return;
    }
#line 1125 "rtti_out.m"
  }
#line 1121 "rtti_out.m"
}

#line 1874 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_4(
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1874 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1874 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1874 "rtti_out.m"
{
#line 1874 "rtti_out.m"
  {
#line 1874 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1874 "rtti_out.m"
    {
#line 1874 "rtti_out.m"
      ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1874 "rtti_out.m"
      return;
    }
#line 1874 "rtti_out.m"
  }
#line 1874 "rtti_out.m"
}

#line 1117 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_3(
#line 1117 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg)
#line 1117 "rtti_out.m"
{
#line 1117 "rtti_out.m"
  {
#line 1117 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1117 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1117 "rtti_out.m"
    {
#line 1117 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_du_arg_types__1117__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))));
    }
#line 1117 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 1117 "rtti_out.m"
  }
#line 1117 "rtti_out.m"
}

#line 1109 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_2(
#line 1109 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1109 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1109 "rtti_out.m"
{
#line 1109 "rtti_out.m"
  {
#line 1109 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1109 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1109 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv3_HeadVar__2_2;

#line 1109 "rtti_out.m"
    {
#line 1109 "rtti_out.m"
      ll_backend__rtti_out__conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1109 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv3_HeadVar__2_2));
#line 1109 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1109 "rtti_out.m"
  }
#line 1109 "rtti_out.m"
}

#line 1107 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0_1(
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1107 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1107 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1107 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 1107 "rtti_out.m"
{
#line 1107 "rtti_out.m"
  {
#line 1107 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1107 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14;

#line 1107 "rtti_out.m"
    {
#line 1107 "rtti_out.m"
      ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 1107 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14));
#line 1107 "rtti_out.m"
  }
#line 1107 "rtti_out.m"
}

#line 1102 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_arg_types_8_p_0(
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1102 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgTypes_12,
#line 1102 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 1102 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
#line 1102 "rtti_out.m"
{
#line 1106 "rtti_out.m"
  {
#line 1106 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_49_49;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ArgTypeDatas_15;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_21_21;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22_22;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_30_30;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_33_33;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_36_36;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67;
#line 1106 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_69_69;
#line 1107 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_22_22;
#line 1107 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_23_23;
#line 1111 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_16_16;

#line 1107 "rtti_out.m"
    {
#line 1107 "rtti_out.m"
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[4]));
#line 1107 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_1));
#line 1107 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1107 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 3) = ((MR_Box) (ll_backend__rtti_out__Info_9));
#line 1107 "rtti_out.m"
    }
#line 9377 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeCtorInfo_49_49 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0;
#line 1107 "rtti_out.m"
    {
#line 1107 "rtti_out.m"
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_21_21, ll_backend__rtti_out__ArgTypes_12, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1107 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_22_22);
#line 1109 "rtti_out.m"
    {
#line 1109 "rtti_out.m"
      ll_backend__rtti_out__ArgTypeDatas_15 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[19], ll_backend__rtti_out__ArgTypes_12);
    }
#line 1111 "rtti_out.m"
    {
#line 1111 "rtti_out.m"
      ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__ArgTypeDatas_15, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_16_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22_22, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28);
    }
#line 1114 "rtti_out.m"
    {
#line 1114 "rtti_out.m"
      ll_backend__rtti_out__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1114 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1114 "rtti_out.m"
    }
#line 1114 "rtti_out.m"
    {
#line 1114 "rtti_out.m"
      ll_backend__rtti_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1114 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 1) = ((MR_Box) (ll_backend__rtti_out__V_33_33));
#line 1114 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_30_30, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 1) = ((MR_Box) (ll_backend__rtti_out__V_30_30));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_69_69, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
#line 1116 "rtti_out.m"
    {
#line 1116 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 1117 "rtti_out.m"
    {
#line 1117 "rtti_out.m"
      ll_backend__rtti_out__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_11[1]));
#line 1117 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 1) = ((MR_Box) (ll_backend__rtti_out__output_du_arg_types_8_p_0_3));
#line 1117 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1117 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_36_36, 3) = ((MR_Box) (ll_backend__rtti_out__ArgTypes_12));
#line 1117 "rtti_out.m"
    }
#line 1117 "rtti_out.m"
    {
#line 1117 "rtti_out.m"
      mercury__require__expect_4_p_0(ll_backend__rtti_out__V_36_36, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_arg_types\'/8", (MR_String) "empty list");
    }
#line 1867 "rtti_out.m"
    if ((ll_backend__rtti_out__ArgTypeDatas_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1867 "rtti_out.m"
      {
#line 1868 "rtti_out.m"
        {
#line 1868 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
#line 1870 "rtti_out.m"
        {
#line 1870 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
        }
#line 1867 "rtti_out.m"
      }
#line 1867 "rtti_out.m"
    else
#line 1871 "rtti_out.m"
      {
#line 1872 "rtti_out.m"
        {
#line 1872 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1873 "rtti_out.m"
        {
#line 1873 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__rtti_out__ArgTypeDatas_15, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_11[2]);
        }
#line 1875 "rtti_out.m"
        {
#line 1875 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1871 "rtti_out.m"
      }
#line 1119 "rtti_out.m"
    {
#line 1119 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1119 "rtti_out.m"
      return;
    }
#line 1106 "rtti_out.m"
  }
#line 1102 "rtti_out.m"
}

#line 1066 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_info_8_p_0(
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1066 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ExistInfo_12,
#line 1066 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_24,
#line 1066 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25)
#line 1066 "rtti_out.m"
{
#line 1069 "rtti_out.m"
  {
#line 1069 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1069 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Plain_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 0)));
#line 1069 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__InTci_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 1)));
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 2)));
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Locns_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ExistInfo_12, (MR_Integer) 3)));
#line 1069 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Tci_21;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_32_32;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_35_35;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_69_69;
#line 1069 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_76_76;
#line 1069 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_82;
#line 1069 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_83_83;

#line 1071 "rtti_out.m"
    {
#line 1071 "rtti_out.m"
      ll_backend__rtti_out__output_exist_locns_array_8_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__Ordinal_11, ll_backend__rtti_out__Locns_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_24, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28);
    }
#line 1077 "rtti_out.m"
    if ((ll_backend__rtti_out__Constraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "rtti_out.m"
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
#line 1077 "rtti_out.m"
    else
#line 1075 "rtti_out.m"
      {
#line 1075 "rtti_out.m"
        ll_backend__rtti_out__output_exist_constraints_data_8_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__Ordinal_11, ll_backend__rtti_out__Constraints_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30);
      }
#line 1081 "rtti_out.m"
    {
#line 1081 "rtti_out.m"
      ll_backend__rtti_out__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1081 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_35_35, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1081 "rtti_out.m"
    }
#line 1081 "rtti_out.m"
    {
#line 1081 "rtti_out.m"
      ll_backend__rtti_out__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1081 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 1) = ((MR_Box) (ll_backend__rtti_out__V_35_35));
#line 1081 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_32_32, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_69_69, 1) = ((MR_Box) (ll_backend__rtti_out__V_32_32));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_69_69, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_67, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25);
    }
#line 1083 "rtti_out.m"
    {
#line 1083 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
#line 1084 "rtti_out.m"
    {
#line 1084 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Plain_15);
    }
#line 1085 "rtti_out.m"
    {
#line 1085 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1086 "rtti_out.m"
    {
#line 1086 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__InTci_16);
    }
#line 1087 "rtti_out.m"
    {
#line 1087 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1088 "rtti_out.m"
    {
#line 1088 "rtti_out.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ll_backend__rtti_out__Constraints_17, &ll_backend__rtti_out__Tci_21);
    }
#line 1089 "rtti_out.m"
    {
#line 1089 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Tci_21);
    }
#line 1090 "rtti_out.m"
    {
#line 1090 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1091 "rtti_out.m"
    {
#line 1091 "rtti_out.m"
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1091 "rtti_out.m"
    }
#line 1941 "rtti_out.m"
    {
#line 1941 "rtti_out.m"
      ll_backend__rtti_out__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_76_76, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1941 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_76_76, 1) = ((MR_Box) (ll_backend__rtti_out__V_47_47));
#line 1941 "rtti_out.m"
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_83_83 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_83_83);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_76_76, &ll_backend__rtti_out__Str_82);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_82);
    }
#line 1092 "rtti_out.m"
    {
#line 1092 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 1097 "rtti_out.m"
    if ((ll_backend__rtti_out__Constraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1098 "rtti_out.m"
      {
#line 1098 "rtti_out.m"
      }
#line 1097 "rtti_out.m"
    else
#line 1094 "rtti_out.m"
      {
#line 1094 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_51_51;

#line 1095 "rtti_out.m"
        {
#line 1095 "rtti_out.m"
          ll_backend__rtti_out__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1095 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_51_51, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1095 "rtti_out.m"
        }
#line 1095 "rtti_out.m"
        {
#line 1095 "rtti_out.m"
          ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_10, ll_backend__rtti_out__V_51_51);
        }
#line 1094 "rtti_out.m"
      }
#line 1100 "rtti_out.m"
    {
#line 1100 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1100 "rtti_out.m"
      return;
    }
#line 1069 "rtti_out.m"
  }
#line 1066 "rtti_out.m"
}

#line 1851 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_3(
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1851 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1851 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1851 "rtti_out.m"
{
#line 1851 "rtti_out.m"
  {
#line 1851 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1851 "rtti_out.m"
    {
#line 1851 "rtti_out.m"
      ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1851 "rtti_out.m"
      return;
    }
#line 1851 "rtti_out.m"
  }
#line 1851 "rtti_out.m"
}

#line 1056 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2(
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
#line 1056 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
#line 1056 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_8)
#line 1056 "rtti_out.m"
{
#line 1056 "rtti_out.m"
  {
#line 1056 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1056 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv3_TCDeclSuperRttiId_14;
#line 1056 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv2_STATE_VARIABLE_Counter_25;
#line 1056 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv1_STATE_VARIABLE_DeclSet_27;

#line 1056 "rtti_out.m"
    {
#line 1056 "rtti_out.m"
      ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv3_TCDeclSuperRttiId_14, ((MR_Word) ll_backend__rtti_out__wrapper_arg_3), &ll_backend__rtti_out__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ll_backend__rtti_out__wrapper_arg_5), &ll_backend__rtti_out__conv1_STATE_VARIABLE_DeclSet_27);
    }
#line 1056 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv3_TCDeclSuperRttiId_14));
#line 1056 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_4 = ((MR_Box) (ll_backend__rtti_out__conv2_STATE_VARIABLE_Counter_25));
#line 1056 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_6 = ((MR_Box) (ll_backend__rtti_out__conv1_STATE_VARIABLE_DeclSet_27));
#line 1056 "rtti_out.m"
  }
#line 1056 "rtti_out.m"
}

#line 1057 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1(
#line 1057 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1057 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1057 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1057 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1057 "rtti_out.m"
{
#line 1057 "rtti_out.m"
  {
#line 1057 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1057 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_RttiId_10;

#line 1057 "rtti_out.m"
    {
#line 1057 "rtti_out.m"
      ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_1), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_RttiId_10);
    }
#line 1057 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_RttiId_10));
#line 1057 "rtti_out.m"
  }
#line 1057 "rtti_out.m"
}

#line 1050 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_constraints_data_8_p_0(
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1050 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Constraints_12,
#line 1050 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_18,
#line 1050 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_19)
#line 1050 "rtti_out.m"
{
#line 1055 "rtti_out.m"
  {
#line 1055 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ConstraintIds_15;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiId_17;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_22_22;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_23_23;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_26_26;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_28_28;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64;
#line 1055 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_66_66;
#line 1056 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_16_16;
#line 1056 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv6_V_16_16;
#line 1056 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_24_24;
#line 1056 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_25_25;

#line 1057 "rtti_out.m"
    {
#line 1057 "rtti_out.m"
      ll_backend__rtti_out__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[1]));
#line 1057 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_1));
#line 1057 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1057 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 3) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1057 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_26_26, 4) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1057 "rtti_out.m"
    }
#line 1056 "rtti_out.m"
    {
#line 1056 "rtti_out.m"
      ll_backend__rtti_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
#line 1056 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 1) = ((MR_Box) (ll_backend__rtti_out__output_exist_constraints_data_8_p_0_2));
#line 1056 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1056 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 3) = ((MR_Box) (ll_backend__rtti_out__Info_9));
#line 1056 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_22_22, 4) = ((MR_Box) (ll_backend__rtti_out__V_26_26));
#line 1056 "rtti_out.m"
    }
#line 1058 "rtti_out.m"
    {
#line 1058 "rtti_out.m"
      ll_backend__rtti_out__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 1056 "rtti_out.m"
    {
#line 1056 "rtti_out.m"
      mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_22_22, ll_backend__rtti_out__Constraints_12, &ll_backend__rtti_out__ConstraintIds_15, ((MR_Box) (ll_backend__rtti_out__V_23_23)), &ll_backend__rtti_out__conv6_V_16_16, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_18)), &ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_25_25);
    }
#line 1056 "rtti_out.m"
    ll_backend__rtti_out__V_16_16 = ((MR_Word) ll_backend__rtti_out__conv6_V_16_16);
#line 1056 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_24_24);
#line 1059 "rtti_out.m"
    {
#line 1059 "rtti_out.m"
      ll_backend__rtti_out__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1059 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_28_28, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1059 "rtti_out.m"
    }
#line 1059 "rtti_out.m"
    {
#line 1059 "rtti_out.m"
      ll_backend__rtti_out__RttiId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_17, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1059 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_17, 1) = ((MR_Box) (ll_backend__rtti_out__V_28_28));
#line 1059 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__RttiId_17, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_24_24, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_17));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_66_66, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_64, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_19);
    }
#line 1061 "rtti_out.m"
    {
#line 1061 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
#line 1844 "rtti_out.m"
    if ((ll_backend__rtti_out__ConstraintIds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1844 "rtti_out.m"
      {
#line 1845 "rtti_out.m"
        {
#line 1845 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t/* Dummy entry, since ISO C forbids zero-sized arrays */\n");
        }
#line 1847 "rtti_out.m"
        {
#line 1847 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t0\n");
        }
#line 1844 "rtti_out.m"
      }
#line 1844 "rtti_out.m"
    else
#line 1848 "rtti_out.m"
      {
#line 1849 "rtti_out.m"
        {
#line 1849 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1850 "rtti_out.m"
        {
#line 1850 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, ll_backend__rtti_out__ConstraintIds_15, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_11[0]);
        }
#line 1852 "rtti_out.m"
        {
#line 1852 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1848 "rtti_out.m"
      }
#line 1064 "rtti_out.m"
    {
#line 1064 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1064 "rtti_out.m"
      return;
    }
#line 1055 "rtti_out.m"
  }
#line 1050 "rtti_out.m"
}

#line 1043 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__make_exist_tc_constr_id_5_p_0(
#line 1043 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_6,
#line 1043 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_7,
#line 1043 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__TCNum_8,
#line 1043 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Arity_9,
#line 1043 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__RttiId_10)
#line 1043 "rtti_out.m"
{
#line 1046 "rtti_out.m"
  {
#line 1046 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1046 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiName_11;

#line 1047 "rtti_out.m"
    {
#line 1047 "rtti_out.m"
      ll_backend__rtti_out__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "rtti_out.m"
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__RttiName_11, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_7));
#line 1047 "rtti_out.m"
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__RttiName_11, 1) = ((MR_Box) (ll_backend__rtti_out__TCNum_8));
#line 1047 "rtti_out.m"
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__RttiName_11, 2) = ((MR_Box) (ll_backend__rtti_out__Arity_9));
#line 1047 "rtti_out.m"
    }
#line 1048 "rtti_out.m"
    {
#line 1048 "rtti_out.m"
      MR_Word base;
#line 1048 "rtti_out.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "rtti_out.m"
      *ll_backend__rtti_out__RttiId_10 = base;
#line 1048 "rtti_out.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_6));
#line 1048 "rtti_out.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__rtti_out__RttiName_11));
#line 1048 "rtti_out.m"
    }
#line 1046 "rtti_out.m"
  }
#line 1043 "rtti_out.m"
}

#line 1990 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0_1(
#line 1990 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1990 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1990 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1990 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 1990 "rtti_out.m"
{
#line 1990 "rtti_out.m"
  {
#line 1990 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 1990 "rtti_out.m"
    {
#line 1990 "rtti_out.m"
      ll_backend__rtti_out__output_exist_locn_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 1990 "rtti_out.m"
      return;
    }
#line 1990 "rtti_out.m"
  }
#line 1990 "rtti_out.m"
}

#line 1023 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_exist_locns_array_8_p_0(
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_9,
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_10,
#line 1023 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_11,
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Locns_12,
#line 1023 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 1023 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
#line 1023 "rtti_out.m"
{
#line 1027 "rtti_out.m"
  {
#line 1027 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1027 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_21_21;
#line 1027 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_24_24;
#line 1027 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43;
#line 1027 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;

#line 1029 "rtti_out.m"
    {
#line 1029 "rtti_out.m"
      ll_backend__rtti_out__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_24_24, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_11));
#line 1029 "rtti_out.m"
    }
#line 1029 "rtti_out.m"
    {
#line 1029 "rtti_out.m"
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_10));
#line 1029 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (ll_backend__rtti_out__V_24_24));
#line 1029 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_9, ll_backend__rtti_out__V_21_21, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__V_21_21));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_45_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
#line 1036 "rtti_out.m"
    if ((ll_backend__rtti_out__Locns_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "rtti_out.m"
      {
#line 1035 "rtti_out.m"
        {
#line 1035 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "= { {0, 0} };\n");
#line 1035 "rtti_out.m"
          return;
        }
#line 1034 "rtti_out.m"
      }
#line 1036 "rtti_out.m"
    else
#line 1037 "rtti_out.m"
      {
#line 1038 "rtti_out.m"
        {
#line 1038 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 1989 "rtti_out.m"
        {
#line 1989 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\t");
        }
#line 1990 "rtti_out.m"
        {
#line 1990 "rtti_out.m"
          mercury__io__write_list_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ll_backend__rtti_out__Locns_12, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[18]);
        }
#line 1991 "rtti_out.m"
        {
#line 1991 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1040 "rtti_out.m"
        {
#line 1040 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 1040 "rtti_out.m"
          return;
        }
#line 1037 "rtti_out.m"
      }
#line 1027 "rtti_out.m"
  }
#line 1023 "rtti_out.m"
}

#line 1007 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybeResFunctor_10,
#line 1007 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 1007 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
#line 1007 "rtti_out.m"
{
#line 1014 "rtti_out.m"
  {
#line 1014 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1014 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__MaybeResFunctor_10)) == (MR_mktag((MR_Integer) 1))))
#line 1017 "rtti_out.m"
      {
#line 1017 "rtti_out.m"
        MR_Word ll_backend__rtti_out__DuFunctor_14 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_10), (MR_Integer) 1);

#line 1018 "rtti_out.m"
        {
#line 1018 "rtti_out.m"
          ll_backend__rtti_out__output_du_functor_defn_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__DuFunctor_14, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
#line 1018 "rtti_out.m"
          return;
        }
#line 1017 "rtti_out.m"
      }
#line 1014 "rtti_out.m"
    else
#line 1014 "rtti_out.m"
      {
#line 1014 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ResFunctor_13 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__MaybeResFunctor_10), (MR_Integer) 0);
#line 1014 "rtti_out.m"
        MR_String ll_backend__rtti_out__FunctorName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_13, (MR_Integer) 0)));
#line 1014 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__Ordinal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_13, (MR_Integer) 1)));
#line 1014 "rtti_out.m"
        MR_Word ll_backend__rtti_out__Rep_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ResFunctor_13, (MR_Integer) 2)));
#line 1014 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_39_39;
#line 1014 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_42_42;
#line 1014 "rtti_out.m"
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_72;
#line 1014 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_74_74;

#line 987 "rtti_out.m"
        {
#line 987 "rtti_out.m"
          ll_backend__rtti_out__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 987 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_42_42, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_33));
#line 987 "rtti_out.m"
        }
#line 987 "rtti_out.m"
        {
#line 987 "rtti_out.m"
          ll_backend__rtti_out__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_39_39, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 987 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_39_39, 1) = ((MR_Box) (ll_backend__rtti_out__V_42_42));
#line 987 "rtti_out.m"
        }
#line 1595 "rtti_out.m"
        {
#line 1595 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1596 "rtti_out.m"
        {
#line 1596 "rtti_out.m"
          ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_39_39, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_72);
        }
#line 1597 "rtti_out.m"
        {
#line 1597 "rtti_out.m"
          ll_backend__rtti_out__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_74_74, 1) = ((MR_Box) (ll_backend__rtti_out__V_39_39));
#line 1597 "rtti_out.m"
        }
#line 1597 "rtti_out.m"
        {
#line 1597 "rtti_out.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_74_74, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_72, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
        }
#line 989 "rtti_out.m"
        {
#line 989 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
        }
#line 990 "rtti_out.m"
        {
#line 990 "rtti_out.m"
          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__FunctorName_32);
        }
#line 991 "rtti_out.m"
        {
#line 991 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
        }
#line 992 "rtti_out.m"
        {
#line 992 "rtti_out.m"
          mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ordinal_33);
        }
#line 993 "rtti_out.m"
        {
#line 993 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t");
        }
#line 994 "rtti_out.m"
        {
#line 994 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "(void *) ");
        }
#line 998 "rtti_out.m"
#line 998 "rtti_out.m"
        switch (MR_tag((MR_Word) ll_backend__rtti_out__Rep_34)) {
#line 998 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 998 "rtti_out.m"
          case (MR_Integer) 0:
#line 996 "rtti_out.m"
            {
#line 997 "rtti_out.m"
              {
#line 997 "rtti_out.m"
                mercury__io__write_string_3_p_0((MR_String) "NULL");
              }
#line 996 "rtti_out.m"
            }
#line 998 "rtti_out.m"
            break;
#line 998 "rtti_out.m"
          case (MR_Integer) 1:
#line 999 "rtti_out.m"
            {
#line 999 "rtti_out.m"
              MR_Integer ll_backend__rtti_out__SmallPtr_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__Rep_34, (MR_Integer) 0)));

#line 1000 "rtti_out.m"
              {
#line 1000 "rtti_out.m"
                mercury__io__write_int_3_p_0(ll_backend__rtti_out__SmallPtr_35);
              }
#line 999 "rtti_out.m"
            }
#line 998 "rtti_out.m"
            break;
#line 998 "rtti_out.m"
          case (MR_Integer) 2:
#line 1002 "rtti_out.m"
            {
#line 1003 "rtti_out.m"
              {
#line 1003 "rtti_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_res_functor_defn\'/7", (MR_String) "reserved object");
#line 1003 "rtti_out.m"
                return;
              }
#line 1002 "rtti_out.m"
            }
#line 998 "rtti_out.m"
            break;
#line 998 "rtti_out.m"
        }
#line 1005 "rtti_out.m"
        {
#line 1005 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 1005 "rtti_out.m"
          return;
        }
#line 1014 "rtti_out.m"
      }
#line 1014 "rtti_out.m"
  }
#line 1007 "rtti_out.m"
}

#line 878 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_2(
#line 878 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 878 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 878 "rtti_out.m"
{
#line 878 "rtti_out.m"
  {
#line 878 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 878 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 878 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

#line 878 "rtti_out.m"
    {
#line 878 "rtti_out.m"
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 878 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
#line 878 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 878 "rtti_out.m"
  }
#line 878 "rtti_out.m"
}

#line 877 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_1(
#line 877 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 877 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 877 "rtti_out.m"
{
#line 877 "rtti_out.m"
  {
#line 877 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 877 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 877 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 877 "rtti_out.m"
    {
#line 877 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 877 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 877 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 877 "rtti_out.m"
  }
#line 877 "rtti_out.m"
}

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 879 "rtti_out.m"
{
#line 879 "rtti_out.m"
  {
#line 879 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 879 "rtti_out.m"
    MR_builtin_longjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0, 1);
#line 879 "rtti_out.m"
  }
#line 879 "rtti_out.m"
}

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_5(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 879 "rtti_out.m"
{
#line 879 "rtti_out.m"
  {
#line 879 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 879 "rtti_out.m"
    (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_114_114 = ((MR_Word) (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_V_114_114);
#line 879 "rtti_out.m"
    {
#line 879 "rtti_out.m"
      ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(ll_backend__rtti_out__env_ptr);
#line 879 "rtti_out.m"
      return;
    }
#line 879 "rtti_out.m"
  }
#line 879 "rtti_out.m"
}

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_4(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 879 "rtti_out.m"
{
#line 879 "rtti_out.m"
  {
#line 879 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 10582 "ll_backend.rtti_out.c"
    (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_115_115 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 879 "rtti_out.m"
    {
#line 879 "rtti_out.m"
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = ll_backend__rtti_out____Unify____maybe__maybe_1_2((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeCtorInfo_115_115, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_42_42, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_114_114);
    }
#line 879 "rtti_out.m"
    if ((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded)
#line 879 "rtti_out.m"
      {
#line 879 "rtti_out.m"
        ll_backend__rtti_out__output_du_functor_defn_7_p_0_3(ll_backend__rtti_out__env_ptr);
#line 879 "rtti_out.m"
        return;
      }
#line 879 "rtti_out.m"
  }
#line 879 "rtti_out.m"
}

#line 879 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(
#line 879 "rtti_out.m"
  void * ll_backend__rtti_out__env_ptr_arg)
#line 879 "rtti_out.m"
{
#line 879 "rtti_out.m"
  {
#line 879 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s * ll_backend__rtti_out__env_ptr = (struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s *) ll_backend__rtti_out__env_ptr_arg;

#line 879 "rtti_out.m"
    if (MR_builtin_setjmp((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__commit_0) == 0)
#line 879 "rtti_out.m"
      {
#line 879 "rtti_out.m"
        {
#line 879 "rtti_out.m"
          MR_String ll_backend__rtti_out__V_22_22;

#line 879 "rtti_out.m"
          {
#line 879 "rtti_out.m"
            MR_Word base;
#line 879 "rtti_out.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 879 "rtti_out.m"
            (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__V_42_42 = base;
#line 879 "rtti_out.m"
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 879 "rtti_out.m"
          }
#line 879 "rtti_out.m"
          {
#line 879 "rtti_out.m"
            mercury__list__member_2_p_1((ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_111_111, &(ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__conv2_V_114_114, (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_20, ll_backend__rtti_out__output_du_functor_defn_7_p_0_5, ll_backend__rtti_out__env_ptr);
          }
#line 879 "rtti_out.m"
        }
#line 879 "rtti_out.m"
        (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 879 "rtti_out.m"
      }
#line 879 "rtti_out.m"
    else
#line 879 "rtti_out.m"
      (ll_backend__rtti_out__env_ptr)->ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 879 "rtti_out.m"
  }
#line 879 "rtti_out.m"
}

#line 871 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_du_functor_defn_7_p_0(
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__DuFunctor_10,
#line 871 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_36,
#line 871 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37)
#line 871 "rtti_out.m"
{
#line 871 "rtti_out.m"
  {
#line 871 "rtti_out.m"
    struct ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0_s ll_backend__rtti_out__env;

#line 874 "rtti_out.m"
    {
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__TypeCtorInfo_107_107 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
#line 874 "rtti_out.m"
      MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 0)));
#line 874 "rtti_out.m"
      MR_Integer ll_backend__rtti_out__OrigArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 1)));
#line 874 "rtti_out.m"
      MR_Integer ll_backend__rtti_out__Ordinal_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 2)));
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__Rep_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 3)));
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__ArgInfos_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 4)));
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__MaybeExistInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__DuFunctor_10, (MR_Integer) 5)));
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__ArgTypes_19;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__HaveArgNames_21;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__HaveArgLocns_25;
#line 874 "rtti_out.m"
      MR_Integer ll_backend__rtti_out__ContainsVarBitVector_27;
#line 874 "rtti_out.m"
      MR_Integer ll_backend__rtti_out__Ptag_28;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__SectagAndLocn_29;
#line 874 "rtti_out.m"
      MR_String ll_backend__rtti_out__Locn_31;
#line 874 "rtti_out.m"
      MR_Integer ll_backend__rtti_out__Stag_32;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_45_45;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_47_47;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_49_49;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__V_51_51;
#line 874 "rtti_out.m"
      MR_Word ll_backend__rtti_out__V_54_54;

#line 877 "rtti_out.m"
      {
#line 877 "rtti_out.m"
        ll_backend__rtti_out__ArgTypes_19 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_107_107, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[16], ll_backend__rtti_out__ArgInfos_17);
      }
#line 10726 "ll_backend.rtti_out.c"
      (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_111_111 = (MR_Word) &ll_backend__rtti_out_scalar_common_1[2];
#line 878 "rtti_out.m"
      {
#line 878 "rtti_out.m"
        (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_20 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_107_107, (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__TypeInfo_111_111, (MR_Word) &ll_backend__rtti_out_scalar_common_2[17], ll_backend__rtti_out__ArgInfos_17);
      }
#line 884 "rtti_out.m"
      if ((ll_backend__rtti_out__ArgInfos_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "rtti_out.m"
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_36;
#line 884 "rtti_out.m"
      else
#line 882 "rtti_out.m"
        {
#line 882 "rtti_out.m"
          ll_backend__rtti_out__output_du_arg_types_8_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, ll_backend__rtti_out__ArgTypes_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_36, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43);
        }
#line 879 "rtti_out.m"
      {
#line 879 "rtti_out.m"
        ll_backend__rtti_out__output_du_functor_defn_7_p_0_6(&ll_backend__rtti_out__env);
      }
#line 10749 "ll_backend.rtti_out.c"
      if ((ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__succeeded)
#line 10751 "ll_backend.rtti_out.c"
        {
#line 879 "rtti_out.m"
          ll_backend__rtti_out__HaveArgNames_21 = (MR_Integer) 1;
#line 889 "rtti_out.m"
          {
#line 889 "rtti_out.m"
            ll_backend__rtti_out__output_du_arg_names_8_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, (ll_backend__rtti_out__env).ll_backend__rtti_out__output_du_functor_defn_7_p_0_env_0__MaybeArgNames_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_45_45);
          }
#line 10760 "ll_backend.rtti_out.c"
        }
#line 10762 "ll_backend.rtti_out.c"
      else
#line 10764 "ll_backend.rtti_out.c"
        {
#line 879 "rtti_out.m"
          ll_backend__rtti_out__HaveArgNames_21 = (MR_Integer) 0;
#line 892 "rtti_out.m"
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_45_45 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43;
#line 10770 "ll_backend.rtti_out.c"
        }
#line 894 "rtti_out.m"
      {
#line 894 "rtti_out.m"
        ll_backend__rtti_out__output_du_arg_locns_9_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, ll_backend__rtti_out__ArgInfos_17, &ll_backend__rtti_out__HaveArgLocns_25, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_45_45, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_47_47);
      }
#line 900 "rtti_out.m"
      if ((ll_backend__rtti_out__MaybeExistInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "rtti_out.m"
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_49_49 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_47_47;
#line 900 "rtti_out.m"
      else
#line 897 "rtti_out.m"
        {
#line 897 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ExistInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeExistInfo_18, (MR_Integer) 0)));

#line 898 "rtti_out.m"
          {
#line 898 "rtti_out.m"
            ll_backend__rtti_out__output_exist_info_8_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__Ordinal_15, ll_backend__rtti_out__ExistInfo_26, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_47_47, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_49_49);
          }
#line 897 "rtti_out.m"
        }
#line 904 "rtti_out.m"
      {
#line 904 "rtti_out.m"
        ll_backend__rtti_out__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "rtti_out.m"
        MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 904 "rtti_out.m"
        MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_54_54, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
#line 904 "rtti_out.m"
      }
#line 904 "rtti_out.m"
      {
#line 904 "rtti_out.m"
        ll_backend__rtti_out__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "rtti_out.m"
        MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_51_51, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 904 "rtti_out.m"
        MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_51_51, 1) = ((MR_Box) (ll_backend__rtti_out__V_54_54));
#line 904 "rtti_out.m"
      }
#line 903 "rtti_out.m"
      {
#line 903 "rtti_out.m"
        ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_51_51, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_49_49, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37);
      }
#line 906 "rtti_out.m"
      {
#line 906 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
      }
#line 907 "rtti_out.m"
      {
#line 907 "rtti_out.m"
        backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__FunctorName_13);
      }
#line 908 "rtti_out.m"
      {
#line 908 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
      }
#line 909 "rtti_out.m"
      {
#line 909 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__OrigArity_14);
      }
#line 910 "rtti_out.m"
      {
#line 910 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 911 "rtti_out.m"
      {
#line 911 "rtti_out.m"
        ll_backend__rtti_out__ContainsVarBitVector_27 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ll_backend__rtti_out__ArgTypes_19);
      }
#line 912 "rtti_out.m"
      {
#line 912 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__ContainsVarBitVector_27);
      }
#line 913 "rtti_out.m"
      {
#line 913 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 916 "rtti_out.m"
      if (((MR_tag((MR_Word) ll_backend__rtti_out__Rep_16)) == (MR_mktag((MR_Integer) 1))))
#line 917 "rtti_out.m"
        {
#line 918 "rtti_out.m"
          {
#line 918 "rtti_out.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_du_functor_defn\'/7", (MR_String) "du_hl_rep");
#line 918 "rtti_out.m"
            return;
          }
#line 917 "rtti_out.m"
        }
#line 916 "rtti_out.m"
      else
#line 915 "rtti_out.m"
        {
#line 915 "rtti_out.m"
          ll_backend__rtti_out__Ptag_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Rep_16, (MR_Integer) 0)));
#line 915 "rtti_out.m"
          ll_backend__rtti_out__SectagAndLocn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Rep_16, (MR_Integer) 1)));
#line 915 "rtti_out.m"
        }
#line 924 "rtti_out.m"
#line 924 "rtti_out.m"
      switch (MR_tag((MR_Word) ll_backend__rtti_out__SectagAndLocn_29)) {
#line 924 "rtti_out.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 924 "rtti_out.m"
        case (MR_Integer) 0:
#line 924 "rtti_out.m"
#line 924 "rtti_out.m"
          switch (MR_unmkbody(ll_backend__rtti_out__SectagAndLocn_29)) {
#line 924 "rtti_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 924 "rtti_out.m"
            case (MR_Integer) 0:
#line 921 "rtti_out.m"
              {
#line 922 "rtti_out.m"
                ll_backend__rtti_out__Locn_31 = (MR_String) "MR_SECTAG_NONE";
#line 923 "rtti_out.m"
                ll_backend__rtti_out__Stag_32 = (MR_Integer) -1;
#line 921 "rtti_out.m"
              }
#line 924 "rtti_out.m"
              break;
#line 924 "rtti_out.m"
            case (MR_Integer) 1:
#line 925 "rtti_out.m"
              {
#line 926 "rtti_out.m"
                ll_backend__rtti_out__Locn_31 = (MR_String) "MR_SECTAG_NONE_DIRECT_ARG";
#line 927 "rtti_out.m"
                ll_backend__rtti_out__Stag_32 = (MR_Integer) -1;
#line 925 "rtti_out.m"
              }
#line 924 "rtti_out.m"
              break;
#line 924 "rtti_out.m"
          }
#line 924 "rtti_out.m"
          break;
#line 924 "rtti_out.m"
        case (MR_Integer) 1:
#line 929 "rtti_out.m"
          {
#line 929 "rtti_out.m"
            ll_backend__rtti_out__Stag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__SectagAndLocn_29, (MR_Integer) 0)));
#line 930 "rtti_out.m"
            ll_backend__rtti_out__Locn_31 = (MR_String) "MR_SECTAG_LOCAL";
#line 929 "rtti_out.m"
          }
#line 924 "rtti_out.m"
          break;
#line 924 "rtti_out.m"
        case (MR_Integer) 2:
#line 932 "rtti_out.m"
          {
#line 932 "rtti_out.m"
            ll_backend__rtti_out__Stag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__SectagAndLocn_29, (MR_Integer) 0)));
#line 933 "rtti_out.m"
            ll_backend__rtti_out__Locn_31 = (MR_String) "MR_SECTAG_REMOTE";
#line 932 "rtti_out.m"
          }
#line 924 "rtti_out.m"
          break;
#line 924 "rtti_out.m"
      }
#line 935 "rtti_out.m"
      {
#line 935 "rtti_out.m"
        mercury__io__write_string_3_p_0(ll_backend__rtti_out__Locn_31);
      }
#line 936 "rtti_out.m"
      {
#line 936 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 937 "rtti_out.m"
      {
#line 937 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ptag_28);
      }
#line 938 "rtti_out.m"
      {
#line 938 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 939 "rtti_out.m"
      {
#line 939 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__Stag_32);
      }
#line 940 "rtti_out.m"
      {
#line 940 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 941 "rtti_out.m"
      {
#line 941 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ordinal_15);
      }
#line 942 "rtti_out.m"
      {
#line 942 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 943 "rtti_out.m"
      {
#line 943 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) "(MR_PseudoTypeInfo *) ");
      }
#line 948 "rtti_out.m"
      if ((ll_backend__rtti_out__ArgInfos_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "rtti_out.m"
        {
#line 950 "rtti_out.m"
          {
#line 950 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
#line 949 "rtti_out.m"
        }
#line 948 "rtti_out.m"
      else
#line 945 "rtti_out.m"
        {
#line 945 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_85_85;

#line 947 "rtti_out.m"
          {
#line 947 "rtti_out.m"
            ll_backend__rtti_out__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 947 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_85_85, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
#line 947 "rtti_out.m"
          }
#line 946 "rtti_out.m"
          {
#line 946 "rtti_out.m"
            ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_85_85);
          }
#line 945 "rtti_out.m"
        }
#line 952 "rtti_out.m"
      {
#line 952 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 957 "rtti_out.m"
#line 957 "rtti_out.m"
      switch (ll_backend__rtti_out__HaveArgNames_21) {
#line 957 "rtti_out.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 957 "rtti_out.m"
        case (MR_Integer) 0:
#line 958 "rtti_out.m"
          {
#line 959 "rtti_out.m"
            {
#line 959 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "NULL");
            }
#line 958 "rtti_out.m"
          }
#line 957 "rtti_out.m"
          break;
#line 957 "rtti_out.m"
        case (MR_Integer) 1:
#line 954 "rtti_out.m"
          {
#line 954 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_91_91;

#line 956 "rtti_out.m"
            {
#line 956 "rtti_out.m"
              ll_backend__rtti_out__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 956 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_91_91, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
#line 956 "rtti_out.m"
            }
#line 955 "rtti_out.m"
            {
#line 955 "rtti_out.m"
              ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_91_91);
            }
#line 954 "rtti_out.m"
          }
#line 957 "rtti_out.m"
          break;
#line 957 "rtti_out.m"
      }
#line 961 "rtti_out.m"
      {
#line 961 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 966 "rtti_out.m"
#line 966 "rtti_out.m"
      switch (ll_backend__rtti_out__HaveArgLocns_25) {
#line 966 "rtti_out.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 966 "rtti_out.m"
        case (MR_Integer) 0:
#line 967 "rtti_out.m"
          {
#line 968 "rtti_out.m"
            {
#line 968 "rtti_out.m"
              mercury__io__write_string_3_p_0((MR_String) "NULL");
            }
#line 967 "rtti_out.m"
          }
#line 966 "rtti_out.m"
          break;
#line 966 "rtti_out.m"
        case (MR_Integer) 1:
#line 963 "rtti_out.m"
          {
#line 963 "rtti_out.m"
            MR_Word ll_backend__rtti_out__V_97_97;

#line 965 "rtti_out.m"
            {
#line 965 "rtti_out.m"
              ll_backend__rtti_out__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 965 "rtti_out.m"
              MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_97_97, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
#line 965 "rtti_out.m"
            }
#line 964 "rtti_out.m"
            {
#line 964 "rtti_out.m"
              ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_97_97);
            }
#line 963 "rtti_out.m"
          }
#line 966 "rtti_out.m"
          break;
#line 966 "rtti_out.m"
      }
#line 970 "rtti_out.m"
      {
#line 970 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      }
#line 975 "rtti_out.m"
      if ((ll_backend__rtti_out__MaybeExistInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "rtti_out.m"
        {
#line 977 "rtti_out.m"
          {
#line 977 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
#line 976 "rtti_out.m"
        }
#line 975 "rtti_out.m"
      else
#line 972 "rtti_out.m"
        {
#line 972 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_103_103;

#line 974 "rtti_out.m"
          {
#line 974 "rtti_out.m"
            ll_backend__rtti_out__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 974 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_103_103, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_15));
#line 974 "rtti_out.m"
          }
#line 973 "rtti_out.m"
          {
#line 973 "rtti_out.m"
            ll_backend__rtti_out__output_addr_of_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_9, ll_backend__rtti_out__V_103_103);
          }
#line 972 "rtti_out.m"
        }
#line 979 "rtti_out.m"
      {
#line 979 "rtti_out.m"
        mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 979 "rtti_out.m"
        return;
      }
#line 874 "rtti_out.m"
    }
#line 871 "rtti_out.m"
  }
#line 871 "rtti_out.m"
}

#line 833 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_notag_functor_defn_7_p_0(
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__NotagFunctor_10,
#line 833 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 833 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
#line 833 "rtti_out.m"
{
#line 836 "rtti_out.m"
  {
#line 836 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 836 "rtti_out.m"
    MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 0)));
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ArgType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 1)));
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__MaybeArgName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__NotagFunctor_10, (MR_Integer) 2)));
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ArgTypeData_16;
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25_25;
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30;
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_32_32;
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_83;
#line 836 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_85_85;
#line 840 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_17_17;

#line 456 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__ArgType_14)) == (MR_mktag((MR_Integer) 1))))
#line 456 "rtti_out.m"
      {
#line 456 "rtti_out.m"
        MR_Word ll_backend__rtti_out__TypeInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));

#line 457 "rtti_out.m"
        {
#line 457 "rtti_out.m"
          ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__TypeInfo_66, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25_25);
        }
#line 456 "rtti_out.m"
      }
#line 456 "rtti_out.m"
    else
#line 459 "rtti_out.m"
      {
#line 459 "rtti_out.m"
        MR_Word ll_backend__rtti_out__PseudoTypeInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));

#line 460 "rtti_out.m"
        {
#line 460 "rtti_out.m"
          ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__PseudoTypeInfo_67, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25_25);
        }
#line 459 "rtti_out.m"
      }
#line 839 "rtti_out.m"
    {
#line 839 "rtti_out.m"
      ll_backend__rtti_out__ArgTypeData_16 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ll_backend__rtti_out__ArgType_14);
    }
#line 840 "rtti_out.m"
    {
#line 840 "rtti_out.m"
      ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__ArgTypeData_16, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_17_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_25_25, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30);
    }
#line 843 "rtti_out.m"
    {
#line 843 "rtti_out.m"
      ll_backend__rtti_out__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 843 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 843 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_32_32, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_30_30, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_83);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_85_85, 1) = ((MR_Box) (ll_backend__rtti_out__V_32_32));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_85_85, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_83, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
    }
#line 845 "rtti_out.m"
    {
#line 845 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
#line 846 "rtti_out.m"
    {
#line 846 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__FunctorName_13);
    }
#line 847 "rtti_out.m"
    {
#line 847 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 852 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__ArgType_14)) == (MR_mktag((MR_Integer) 1))))
#line 849 "rtti_out.m"
      {
#line 849 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ArgTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));
#line 849 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_45_45;

#line 851 "rtti_out.m"
        {
#line 851 "rtti_out.m"
          ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 851 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__ArgTypeInfo_18));
#line 851 "rtti_out.m"
        }
#line 1887 "rtti_out.m"
        {
#line 1887 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "(MR_PseudoTypeInfo) ");
        }
#line 1888 "rtti_out.m"
        {
#line 1888 "rtti_out.m"
          ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(ll_backend__rtti_out__V_45_45);
        }
#line 849 "rtti_out.m"
      }
#line 852 "rtti_out.m"
    else
#line 853 "rtti_out.m"
      {
#line 853 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ArgPseudoTypeInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ArgType_14, (MR_Integer) 0)));
#line 853 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_42_42;

#line 857 "rtti_out.m"
        {
#line 857 "rtti_out.m"
          ll_backend__rtti_out__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_42_42, 1) = ((MR_Box) (ll_backend__rtti_out__ArgPseudoTypeInfo_19));
#line 857 "rtti_out.m"
        }
#line 856 "rtti_out.m"
        {
#line 856 "rtti_out.m"
          ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__V_42_42);
        }
#line 853 "rtti_out.m"
      }
#line 859 "rtti_out.m"
    {
#line 859 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 865 "rtti_out.m"
    if ((ll_backend__rtti_out__MaybeArgName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "rtti_out.m"
      {
#line 867 "rtti_out.m"
        {
#line 867 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
#line 866 "rtti_out.m"
      }
#line 865 "rtti_out.m"
    else
#line 861 "rtti_out.m"
      {
#line 861 "rtti_out.m"
        MR_String ll_backend__rtti_out__ArgName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeArgName_15, (MR_Integer) 0)));

#line 862 "rtti_out.m"
        {
#line 862 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
#line 863 "rtti_out.m"
        {
#line 863 "rtti_out.m"
          mercury__io__write_string_3_p_0(ll_backend__rtti_out__ArgName_20);
        }
#line 864 "rtti_out.m"
        {
#line 864 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
#line 861 "rtti_out.m"
      }
#line 869 "rtti_out.m"
    {
#line 869 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 869 "rtti_out.m"
      return;
    }
#line 836 "rtti_out.m"
  }
#line 833 "rtti_out.m"
}

#line 814 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ForeignEnumFunctor_10,
#line 814 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17,
#line 814 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18)
#line 814 "rtti_out.m"
{
#line 819 "rtti_out.m"
  {
#line 819 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 819 "rtti_out.m"
    MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ForeignEnumFunctor_10, (MR_Integer) 0)));
#line 819 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__FunctorOrdinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ForeignEnumFunctor_10, (MR_Integer) 1)));
#line 819 "rtti_out.m"
    MR_String ll_backend__rtti_out__FunctorValue_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__ForeignEnumFunctor_10, (MR_Integer) 2)));
#line 819 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiId_16;
#line 819 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_21_21;
#line 819 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_46;
#line 819 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_48_48;

#line 823 "rtti_out.m"
    {
#line 823 "rtti_out.m"
      ll_backend__rtti_out__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 823 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_21_21, 1) = ((MR_Box) (ll_backend__rtti_out__FunctorOrdinal_14));
#line 823 "rtti_out.m"
    }
#line 822 "rtti_out.m"
    {
#line 822 "rtti_out.m"
      ll_backend__rtti_out__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_16, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 822 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_16, 1) = ((MR_Box) (ll_backend__rtti_out__V_21_21));
#line 822 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__RttiId_16, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_17, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_46);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_48_48, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_16));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_48_48, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_46, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18);
    }
#line 825 "rtti_out.m"
    {
#line 825 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
#line 826 "rtti_out.m"
    {
#line 826 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__FunctorName_13);
    }
#line 827 "rtti_out.m"
    {
#line 827 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 828 "rtti_out.m"
    {
#line 828 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__FunctorOrdinal_14);
    }
#line 829 "rtti_out.m"
    {
#line 829 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 830 "rtti_out.m"
    {
#line 830 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__FunctorValue_15);
    }
#line 831 "rtti_out.m"
    {
#line 831 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 831 "rtti_out.m"
      return;
    }
#line 819 "rtti_out.m"
  }
#line 814 "rtti_out.m"
}

#line 800 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_enum_functor_defn_7_p_0(
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_9,
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__EnumFunctor_10,
#line 800 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15,
#line 800 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16)
#line 800 "rtti_out.m"
{
#line 803 "rtti_out.m"
  {
#line 803 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 803 "rtti_out.m"
    MR_String ll_backend__rtti_out__FunctorName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__EnumFunctor_10, (MR_Integer) 0)));
#line 803 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Ordinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__EnumFunctor_10, (MR_Integer) 1)));
#line 803 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_19_19;
#line 803 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_22_22;
#line 803 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_42;
#line 803 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_44_44;

#line 806 "rtti_out.m"
    {
#line 806 "rtti_out.m"
      ll_backend__rtti_out__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 806 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_22_22, 1) = ((MR_Box) (ll_backend__rtti_out__Ordinal_14));
#line 806 "rtti_out.m"
    }
#line 806 "rtti_out.m"
    {
#line 806 "rtti_out.m"
      ll_backend__rtti_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_9));
#line 806 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_19_19, 1) = ((MR_Box) (ll_backend__rtti_out__V_22_22));
#line 806 "rtti_out.m"
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_8, ll_backend__rtti_out__V_19_19, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_15, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_42);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_44_44, 1) = ((MR_Box) (ll_backend__rtti_out__V_19_19));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_44_44, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_42, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16);
    }
#line 808 "rtti_out.m"
    {
#line 808 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
#line 809 "rtti_out.m"
    {
#line 809 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__FunctorName_13);
    }
#line 810 "rtti_out.m"
    {
#line 810 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 811 "rtti_out.m"
    {
#line 811 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Ordinal_14);
    }
#line 812 "rtti_out.m"
    {
#line 812 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 812 "rtti_out.m"
      return;
    }
#line 803 "rtti_out.m"
  }
#line 800 "rtti_out.m"
}

#line 753 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5(
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 753 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 753 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 753 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 753 "rtti_out.m"
{
#line 753 "rtti_out.m"
  {
#line 753 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 753 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_16;

#line 753 "rtti_out.m"
    {
#line 753 "rtti_out.m"
      ll_backend__rtti_out__output_maybe_res_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_16);
    }
#line 753 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_16));
#line 753 "rtti_out.m"
  }
#line 753 "rtti_out.m"
}

#line 725 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4(
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 725 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 725 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 725 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 725 "rtti_out.m"
{
#line 725 "rtti_out.m"
  {
#line 725 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 725 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv6_STATE_VARIABLE_DeclSet_18;

#line 725 "rtti_out.m"
    {
#line 725 "rtti_out.m"
      ll_backend__rtti_out__output_foreign_enum_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv6_STATE_VARIABLE_DeclSet_18);
    }
#line 725 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv6_STATE_VARIABLE_DeclSet_18));
#line 725 "rtti_out.m"
  }
#line 725 "rtti_out.m"
}

#line 723 "rtti_out.m"
static MR_bool MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3(
#line 723 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg)
#line 723 "rtti_out.m"
{
#line 723 "rtti_out.m"
  {
#line 723 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 723 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 723 "rtti_out.m"
    {
#line 723 "rtti_out.m"
      return ll_backend__rtti_out__succeeded = ll_backend__rtti_out__IntroducedFrom__pred__output_type_ctor_details_defn__723__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))));
    }
#line 723 "rtti_out.m"
    return ll_backend__rtti_out__succeeded;
#line 723 "rtti_out.m"
  }
#line 723 "rtti_out.m"
}

#line 709 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2(
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 709 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 709 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 709 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 709 "rtti_out.m"
{
#line 709 "rtti_out.m"
  {
#line 709 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 709 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_16;

#line 709 "rtti_out.m"
    {
#line 709 "rtti_out.m"
      ll_backend__rtti_out__output_enum_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_16);
    }
#line 709 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_16));
#line 709 "rtti_out.m"
  }
#line 709 "rtti_out.m"
}

#line 739 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1(
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 739 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 739 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 739 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 739 "rtti_out.m"
{
#line 739 "rtti_out.m"
  {
#line 739 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 739 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_37;

#line 739 "rtti_out.m"
    {
#line 739 "rtti_out.m"
      ll_backend__rtti_out__output_du_functor_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_37);
    }
#line 739 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_37));
#line 739 "rtti_out.m"
  }
#line 739 "rtti_out.m"
}

#line 698 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiTypeCtor_12,
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeCtorDetails_13,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__MaybeFunctorsName_14,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__MaybeLayoutName_15,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__HaveFunctorNumberMap_16,
#line 698 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49,
#line 698 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50)
#line 698 "rtti_out.m"
{
#line 708 "rtti_out.m"
  {
#line 708 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 708 "rtti_out.m"
#line 708 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__TypeCtorDetails_13)) {
#line 708 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 708 "rtti_out.m"
      case (MR_Integer) 0:
#line 708 "rtti_out.m"
        {
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__EnumFunctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__EnumByRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__EnumByName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__FunctorNumberMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 5)));
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_107_107;
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_108_108;
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_110_110;
#line 708 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_112_112;
#line 707 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)));
#line 707 "rtti_out.m"
          MR_Word ll_backend__rtti_out___IsDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
#line 709 "rtti_out.m"
          MR_Box ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_108_108;
#line 709 "rtti_out.m"
          MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_109_109;

#line 709 "rtti_out.m"
          {
#line 709 "rtti_out.m"
            ll_backend__rtti_out__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 709 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[1]));
#line 709 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_2));
#line 709 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 709 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
#line 709 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_107_107, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
#line 709 "rtti_out.m"
          }
#line 709 "rtti_out.m"
          {
#line 709 "rtti_out.m"
            mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_107_107, ll_backend__rtti_out__EnumFunctors_20, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_IO_109_109);
          }
#line 709 "rtti_out.m"
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_108_108);
#line 711 "rtti_out.m"
          {
#line 711 "rtti_out.m"
            ll_backend__rtti_out__output_enum_value_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__EnumByRep_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_108_108, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_110_110);
          }
#line 713 "rtti_out.m"
          {
#line 713 "rtti_out.m"
            ll_backend__rtti_out__output_enum_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__EnumByName_22, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_110_110, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_112_112);
          }
#line 715 "rtti_out.m"
          {
#line 715 "rtti_out.m"
            ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_24, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_112_112, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
          }
#line 717 "rtti_out.m"
          *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[2]);
#line 718 "rtti_out.m"
          *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[3]);
#line 719 "rtti_out.m"
          *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
#line 708 "rtti_out.m"
        }
#line 708 "rtti_out.m"
        break;
#line 708 "rtti_out.m"
      case (MR_Integer) 1:
#line 722 "rtti_out.m"
        {
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__Lang_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)));
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ForeignEnumFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ForeignEnumByOrdinal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ForeignEnumByName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_91_91;
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_96_96;
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_97_97;
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99;
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_101_101;
#line 722 "rtti_out.m"
          MR_Word ll_backend__rtti_out__FunctorNumberMap_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 5)));
#line 721 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
#line 725 "rtti_out.m"
          MR_Box ll_backend__rtti_out__conv8_STATE_VARIABLE_DeclSet_97_97;
#line 725 "rtti_out.m"
          MR_Box ll_backend__rtti_out__conv7_STATE_VARIABLE_IO_98_98;

#line 723 "rtti_out.m"
          {
#line 723 "rtti_out.m"
            ll_backend__rtti_out__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 723 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_4[3]));
#line 723 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_3));
#line 723 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 723 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 3) = ((MR_Box) (ll_backend__rtti_out__Lang_25));
#line 723 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_91_91, 4) = ((MR_Box) ((MR_Integer) 0));
#line 723 "rtti_out.m"
          }
#line 723 "rtti_out.m"
          {
#line 723 "rtti_out.m"
            mercury__require__expect_4_p_0(ll_backend__rtti_out__V_91_91, (MR_String) "ll_backend.rtti_out", (MR_String) "predicate \140ll_backend.rtti_out.output_type_ctor_details_defn\'/10", (MR_String) "language other than C for foreign enumeration");
          }
#line 725 "rtti_out.m"
          {
#line 725 "rtti_out.m"
            ll_backend__rtti_out__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 725 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[2]));
#line 725 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_4));
#line 725 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 725 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
#line 725 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_96_96, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
#line 725 "rtti_out.m"
          }
#line 725 "rtti_out.m"
          {
#line 725 "rtti_out.m"
            mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_96_96, ll_backend__rtti_out__ForeignEnumFunctors_27, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv8_STATE_VARIABLE_DeclSet_97_97, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv7_STATE_VARIABLE_IO_98_98);
          }
#line 725 "rtti_out.m"
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_97_97 = ((MR_Word) ll_backend__rtti_out__conv8_STATE_VARIABLE_DeclSet_97_97);
#line 727 "rtti_out.m"
          {
#line 727 "rtti_out.m"
            ll_backend__rtti_out__output_foreign_enum_ordinal_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__ForeignEnumByOrdinal_28, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_97_97, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99);
          }
#line 729 "rtti_out.m"
          {
#line 729 "rtti_out.m"
            ll_backend__rtti_out__output_foreign_enum_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__ForeignEnumByName_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_101_101);
          }
#line 731 "rtti_out.m"
          {
#line 731 "rtti_out.m"
            ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_118, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_101_101, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
          }
#line 733 "rtti_out.m"
          *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[4]);
#line 734 "rtti_out.m"
          *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[5]);
#line 735 "rtti_out.m"
          *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
#line 722 "rtti_out.m"
        }
#line 708 "rtti_out.m"
        break;
#line 708 "rtti_out.m"
      case (MR_Integer) 2:
#line 738 "rtti_out.m"
        {
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__DuFunctors_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__DuByRep_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__DuByName_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_80_80;
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_81_81;
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_83_83;
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_85_85;
#line 738 "rtti_out.m"
          MR_Word ll_backend__rtti_out__FunctorNumberMap_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
#line 737 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)));
#line 739 "rtti_out.m"
          MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_81_81;
#line 739 "rtti_out.m"
          MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_82_82;

#line 739 "rtti_out.m"
          {
#line 739 "rtti_out.m"
            ll_backend__rtti_out__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 739 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[0]));
#line 739 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_1));
#line 739 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 739 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
#line 739 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_80_80, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
#line 739 "rtti_out.m"
          }
#line 739 "rtti_out.m"
          {
#line 739 "rtti_out.m"
            mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_80_80, ll_backend__rtti_out__DuFunctors_31, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_81_81, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_82_82);
          }
#line 739 "rtti_out.m"
          ll_backend__rtti_out__STATE_VARIABLE_DeclSet_81_81 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_81_81);
#line 741 "rtti_out.m"
          {
#line 741 "rtti_out.m"
            ll_backend__rtti_out__output_du_ptag_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__DuByRep_32, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_81_81, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_83_83);
          }
#line 743 "rtti_out.m"
          {
#line 743 "rtti_out.m"
            ll_backend__rtti_out__output_du_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__DuByName_33, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_83_83, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_85_85);
          }
#line 745 "rtti_out.m"
          {
#line 745 "rtti_out.m"
            ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_119, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_85_85, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
          }
#line 747 "rtti_out.m"
          *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[0]);
#line 748 "rtti_out.m"
          *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[1]);
#line 749 "rtti_out.m"
          *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
#line 738 "rtti_out.m"
        }
#line 708 "rtti_out.m"
        break;
#line 708 "rtti_out.m"
      case (MR_Integer) 3:
#line 708 "rtti_out.m"
#line 708 "rtti_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 0)))) {
#line 708 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 708 "rtti_out.m"
          case (MR_Integer) 0:
#line 752 "rtti_out.m"
            {
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__MaybeResFunctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__ResFunctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 3)));
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__MaybeResByName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 5)));
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__V_69_69;
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_70_70;
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_72_72;
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_74_74;
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__FunctorNumberMap_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 6)));
#line 752 "rtti_out.m"
              MR_Word ll_backend__rtti_out__DuByRep_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 4)));
#line 751 "rtti_out.m"
              MR_Word ll_backend__rtti_out__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
#line 753 "rtti_out.m"
              MR_Box ll_backend__rtti_out__conv11_STATE_VARIABLE_DeclSet_70_70;
#line 753 "rtti_out.m"
              MR_Box ll_backend__rtti_out__conv10_STATE_VARIABLE_IO_71_71;

#line 753 "rtti_out.m"
              {
#line 753 "rtti_out.m"
                ll_backend__rtti_out__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 753 "rtti_out.m"
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_9[3]));
#line 753 "rtti_out.m"
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0_5));
#line 753 "rtti_out.m"
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 753 "rtti_out.m"
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
#line 753 "rtti_out.m"
                MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_69_69, 4) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_12));
#line 753 "rtti_out.m"
              }
#line 753 "rtti_out.m"
              {
#line 753 "rtti_out.m"
                mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_69_69, ll_backend__rtti_out__MaybeResFunctors_35, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49)), &ll_backend__rtti_out__conv11_STATE_VARIABLE_DeclSet_70_70, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv10_STATE_VARIABLE_IO_71_71);
              }
#line 753 "rtti_out.m"
              ll_backend__rtti_out__STATE_VARIABLE_DeclSet_70_70 = ((MR_Word) ll_backend__rtti_out__conv11_STATE_VARIABLE_DeclSet_70_70);
#line 755 "rtti_out.m"
              {
#line 755 "rtti_out.m"
                ll_backend__rtti_out__output_res_value_ordered_table_8_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__ResFunctors_36, ll_backend__rtti_out__DuByRep_121, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_70_70, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_72_72);
              }
#line 757 "rtti_out.m"
              {
#line 757 "rtti_out.m"
                ll_backend__rtti_out__output_res_name_ordered_table_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__MaybeResByName_37, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_72_72, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_74_74);
              }
#line 759 "rtti_out.m"
              {
#line 759 "rtti_out.m"
                ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__FunctorNumberMap_120, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_74_74, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
              }
#line 761 "rtti_out.m"
              *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[7]);
#line 762 "rtti_out.m"
              *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[8]);
#line 763 "rtti_out.m"
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
#line 752 "rtti_out.m"
            }
#line 708 "rtti_out.m"
            break;
#line 708 "rtti_out.m"
          case (MR_Integer) 1:
#line 765 "rtti_out.m"
            {
#line 765 "rtti_out.m"
              MR_Word ll_backend__rtti_out__NotagFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 2)));
#line 765 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_60_60;
#line 765 "rtti_out.m"
              MR_Word ll_backend__rtti_out__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));

#line 766 "rtti_out.m"
              {
#line 766 "rtti_out.m"
                ll_backend__rtti_out__output_notag_functor_defn_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, ll_backend__rtti_out__NotagFunctor_39, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_60_60);
              }
#line 768 "rtti_out.m"
              {
#line 768 "rtti_out.m"
                ll_backend__rtti_out__output_functor_number_map_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_1[5]), ll_backend__rtti_out__STATE_VARIABLE_DeclSet_60_60, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
              }
#line 769 "rtti_out.m"
              *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__rtti_out_scalar_common_10[6]);
#line 770 "rtti_out.m"
              *ll_backend__rtti_out__MaybeFunctorsName_14 = *ll_backend__rtti_out__MaybeLayoutName_15;
#line 771 "rtti_out.m"
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 1;
#line 765 "rtti_out.m"
            }
#line 708 "rtti_out.m"
            break;
#line 708 "rtti_out.m"
          case (MR_Integer) 2:
#line 773 "rtti_out.m"
            {
#line 773 "rtti_out.m"
              MR_Word ll_backend__rtti_out__EqvType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__TypeCtorDetails_13, (MR_Integer) 1)));
#line 773 "rtti_out.m"
              MR_Word ll_backend__rtti_out__TypeData_41;
#line 773 "rtti_out.m"
              MR_Word ll_backend__rtti_out__LayoutName_44;
#line 773 "rtti_out.m"
              MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_53_53;
#line 776 "rtti_out.m"
              MR_Integer ll_backend__rtti_out__V_42_42;

#line 774 "rtti_out.m"
              {
#line 774 "rtti_out.m"
                ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__EqvType_40, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_53_53);
              }
#line 775 "rtti_out.m"
              {
#line 775 "rtti_out.m"
                ll_backend__rtti_out__TypeData_41 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ll_backend__rtti_out__EqvType_40);
              }
#line 776 "rtti_out.m"
              {
#line 776 "rtti_out.m"
                ll_backend__rtti_out__output_record_rtti_data_decls_10_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__TypeData_41, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_42_42, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_53_53, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50);
              }
#line 781 "rtti_out.m"
              if (((MR_tag((MR_Word) ll_backend__rtti_out__EqvType_40)) == (MR_mktag((MR_Integer) 1))))
#line 779 "rtti_out.m"
                {
#line 779 "rtti_out.m"
                  MR_Word ll_backend__rtti_out__TypeInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__EqvType_40, (MR_Integer) 0)));

#line 780 "rtti_out.m"
                  {
#line 780 "rtti_out.m"
                    ll_backend__rtti_out__LayoutName_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "rtti_out.m"
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 780 "rtti_out.m"
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_43));
#line 780 "rtti_out.m"
                  }
#line 779 "rtti_out.m"
                }
#line 781 "rtti_out.m"
              else
#line 782 "rtti_out.m"
                {
#line 782 "rtti_out.m"
                  MR_Word ll_backend__rtti_out__PseudoTypeInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__EqvType_40, (MR_Integer) 0)));

#line 783 "rtti_out.m"
                  {
#line 783 "rtti_out.m"
                    ll_backend__rtti_out__LayoutName_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "rtti_out.m"
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 783 "rtti_out.m"
                    MR_hl_field(MR_mktag(3), ll_backend__rtti_out__LayoutName_44, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_45));
#line 783 "rtti_out.m"
                  }
#line 782 "rtti_out.m"
                }
#line 785 "rtti_out.m"
              {
#line 785 "rtti_out.m"
                MR_Word base;
#line 785 "rtti_out.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 785 "rtti_out.m"
                *ll_backend__rtti_out__MaybeLayoutName_15 = base;
#line 785 "rtti_out.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__rtti_out__LayoutName_44));
#line 785 "rtti_out.m"
              }
#line 786 "rtti_out.m"
              *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "rtti_out.m"
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 0;
#line 773 "rtti_out.m"
            }
#line 708 "rtti_out.m"
            break;
#line 708 "rtti_out.m"
          case (MR_Integer) 3:
#line 708 "rtti_out.m"
          case (MR_Integer) 4:
#line 708 "rtti_out.m"
          case (MR_Integer) 5:
#line 792 "rtti_out.m"
            {
#line 793 "rtti_out.m"
              *ll_backend__rtti_out__MaybeLayoutName_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "rtti_out.m"
              *ll_backend__rtti_out__MaybeFunctorsName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "rtti_out.m"
              *ll_backend__rtti_out__HaveFunctorNumberMap_16 = (MR_Integer) 0;
#line 792 "rtti_out.m"
              *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_50 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_49;
#line 792 "rtti_out.m"
            }
#line 708 "rtti_out.m"
            break;
#line 708 "rtti_out.m"
        }
#line 708 "rtti_out.m"
        break;
#line 708 "rtti_out.m"
    }
#line 708 "rtti_out.m"
  }
#line 698 "rtti_out.m"
}

#line 626 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1(
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 626 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 626 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 626 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 626 "rtti_out.m"
{
#line 626 "rtti_out.m"
  {
#line 626 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 626 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv2_HeadVar__4_4;

#line 626 "rtti_out.m"
    {
#line 626 "rtti_out.m"
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv2_HeadVar__4_4);
    }
#line 626 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv2_HeadVar__4_4));
#line 626 "rtti_out.m"
  }
#line 626 "rtti_out.m"
}

#line 611 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(
#line 611 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 611 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeCtorData_8,
#line 611 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_34,
#line 611 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35)
#line 611 "rtti_out.m"
{
#line 614 "rtti_out.m"
  {
#line 614 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_111_111;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiTypeCtor_11;
#line 614 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Version_12;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Module_13;
#line 614 "rtti_out.m"
    MR_String ll_backend__rtti_out__TypeName_14;
#line 614 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__TypeArity_15;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__UnifyUniv_16;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__CompareUniv_17;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Flags_18;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorDetails_19;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__MaybeFunctorsName_20;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__MaybeLayoutName_21;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__HaveFunctorNumberMap_22;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__UnifyProcLabel_23;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__UnifyCodeAddr_24;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__CompareProcLabel_25;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__CompareCodeAddr_26;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__CodeAddrs_27;
#line 614 "rtti_out.m"
    MR_String ll_backend__rtti_out__CtorRepStr_28;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_40_40;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_42_42;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43;
#line 614 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;
#line 614 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_57_57;
#line 614 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_70_70;
#line 614 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_97_97;
#line 614 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_101_101;
#line 621 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv0_UnifyProcLabel_23;
#line 623 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_CompareProcLabel_25;
#line 626 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_43_43;
#line 626 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_44_44;

#line 615 "rtti_out.m"
    {
#line 615 "rtti_out.m"
      ll_backend__rtti_out__RttiTypeCtor_11 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(ll_backend__rtti_out__TypeCtorData_8);
    }
#line 616 "rtti_out.m"
    ll_backend__rtti_out__Version_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 0)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 1)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__TypeName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 2)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__TypeArity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 3)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__UnifyUniv_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 4)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__CompareUniv_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 5)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 6)));
#line 616 "rtti_out.m"
    ll_backend__rtti_out__TypeCtorDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorData_8, (MR_Integer) 7)));
#line 618 "rtti_out.m"
    {
#line 618 "rtti_out.m"
      ll_backend__rtti_out__output_type_ctor_details_defn_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__RttiTypeCtor_11, ll_backend__rtti_out__TypeCtorDetails_19, &ll_backend__rtti_out__MaybeFunctorsName_20, &ll_backend__rtti_out__MaybeLayoutName_21, &ll_backend__rtti_out__HaveFunctorNumberMap_22, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_34, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38);
    }
#line 12483 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeCtorInfo_111_111 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
#line 621 "rtti_out.m"
    {
#line 621 "rtti_out.m"
      mercury__univ__det_univ_to_type_2_p_0(ll_backend__rtti_out__TypeCtorInfo_111_111, ll_backend__rtti_out__UnifyUniv_16, &ll_backend__rtti_out__conv0_UnifyProcLabel_23);
    }
#line 621 "rtti_out.m"
    ll_backend__rtti_out__UnifyProcLabel_23 = ((MR_Word) ll_backend__rtti_out__conv0_UnifyProcLabel_23);
#line 622 "rtti_out.m"
    {
#line 622 "rtti_out.m"
      ll_backend__rtti_out__UnifyCodeAddr_24 = ll_backend__rtti_out__make_code_addr_1_f_0(ll_backend__rtti_out__UnifyProcLabel_23);
    }
#line 623 "rtti_out.m"
    {
#line 623 "rtti_out.m"
      mercury__univ__det_univ_to_type_2_p_0(ll_backend__rtti_out__TypeCtorInfo_111_111, ll_backend__rtti_out__CompareUniv_17, &ll_backend__rtti_out__conv1_CompareProcLabel_25);
    }
#line 623 "rtti_out.m"
    ll_backend__rtti_out__CompareProcLabel_25 = ((MR_Word) ll_backend__rtti_out__conv1_CompareProcLabel_25);
#line 624 "rtti_out.m"
    {
#line 624 "rtti_out.m"
      ll_backend__rtti_out__CompareCodeAddr_26 = ll_backend__rtti_out__make_code_addr_1_f_0(ll_backend__rtti_out__CompareProcLabel_25);
    }
#line 625 "rtti_out.m"
    {
#line 625 "rtti_out.m"
      ll_backend__rtti_out__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_40_40, 0) = ((MR_Box) (ll_backend__rtti_out__CompareCodeAddr_26));
#line 625 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "rtti_out.m"
    }
#line 625 "rtti_out.m"
    {
#line 625 "rtti_out.m"
      ll_backend__rtti_out__CodeAddrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__CodeAddrs_27, 0) = ((MR_Box) (ll_backend__rtti_out__UnifyCodeAddr_24));
#line 625 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__CodeAddrs_27, 1) = ((MR_Box) (ll_backend__rtti_out__V_40_40));
#line 625 "rtti_out.m"
    }
#line 626 "rtti_out.m"
    {
#line 626 "rtti_out.m"
      ll_backend__rtti_out__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[1]));
#line 626 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0_1));
#line 626 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 626 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_42_42, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 626 "rtti_out.m"
    }
#line 626 "rtti_out.m"
    {
#line 626 "rtti_out.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_42_42, ll_backend__rtti_out__CodeAddrs_27, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_38_38)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_43_43, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_44_44);
    }
#line 626 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43 = ((MR_Word) ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_43_43);
#line 628 "rtti_out.m"
    {
#line 628 "rtti_out.m"
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 628 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 628 "rtti_out.m"
    }
#line 627 "rtti_out.m"
    {
#line 627 "rtti_out.m"
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_45_45, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_43_43, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35);
    }
#line 629 "rtti_out.m"
    {
#line 629 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t");
    }
#line 630 "rtti_out.m"
    {
#line 630 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__TypeArity_15);
    }
#line 631 "rtti_out.m"
    {
#line 631 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 632 "rtti_out.m"
    {
#line 632 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Version_12);
    }
#line 633 "rtti_out.m"
    {
#line 633 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 634 "rtti_out.m"
    {
#line 634 "rtti_out.m"
      ll_backend__rtti_out__V_57_57 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(ll_backend__rtti_out__TypeCtorDetails_19);
    }
#line 634 "rtti_out.m"
    {
#line 634 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_57_57);
    }
#line 635 "rtti_out.m"
    {
#line 635 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 636 "rtti_out.m"
    {
#line 636 "rtti_out.m"
      backend_libs__rtti__type_ctor_rep_to_string_2_p_0(ll_backend__rtti_out__TypeCtorData_8, &ll_backend__rtti_out__CtorRepStr_28);
    }
#line 637 "rtti_out.m"
    {
#line 637 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__CtorRepStr_28);
    }
#line 638 "rtti_out.m"
    {
#line 638 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 639 "rtti_out.m"
    {
#line 639 "rtti_out.m"
      ll_backend__rtti_out__output_static_code_addr_3_p_0(ll_backend__rtti_out__UnifyCodeAddr_24);
    }
#line 640 "rtti_out.m"
    {
#line 640 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 641 "rtti_out.m"
    {
#line 641 "rtti_out.m"
      ll_backend__rtti_out__output_static_code_addr_3_p_0(ll_backend__rtti_out__CompareCodeAddr_26);
    }
#line 642 "rtti_out.m"
    {
#line 642 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t\"");
    }
#line 643 "rtti_out.m"
    {
#line 643 "rtti_out.m"
      ll_backend__rtti_out__V_70_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__rtti_out__Module_13);
    }
#line 643 "rtti_out.m"
    {
#line 643 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__V_70_70);
    }
#line 644 "rtti_out.m"
    {
#line 644 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t\"");
    }
#line 645 "rtti_out.m"
    {
#line 645 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__TypeName_14);
    }
#line 646 "rtti_out.m"
    {
#line 646 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 653 "rtti_out.m"
    if ((ll_backend__rtti_out__MaybeFunctorsName_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "rtti_out.m"
      {
#line 655 "rtti_out.m"
        {
#line 655 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ 0 }");
        }
#line 654 "rtti_out.m"
      }
#line 653 "rtti_out.m"
    else
#line 648 "rtti_out.m"
      {
#line 648 "rtti_out.m"
        MR_Word ll_backend__rtti_out__FunctorsName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeFunctorsName_20, (MR_Integer) 0)));
#line 648 "rtti_out.m"
        MR_Word ll_backend__rtti_out__FunctorsRttiId_30;

#line 649 "rtti_out.m"
        {
#line 649 "rtti_out.m"
          ll_backend__rtti_out__FunctorsRttiId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorsRttiId_30, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 649 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorsRttiId_30, 1) = ((MR_Box) (ll_backend__rtti_out__FunctorsName_29));
#line 649 "rtti_out.m"
        }
#line 650 "rtti_out.m"
        {
#line 650 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
#line 651 "rtti_out.m"
        {
#line 651 "rtti_out.m"
          ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0((MR_String) "(void *)", ll_backend__rtti_out__FunctorsRttiId_30);
        }
#line 652 "rtti_out.m"
        {
#line 652 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
#line 648 "rtti_out.m"
      }
#line 657 "rtti_out.m"
    {
#line 657 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 664 "rtti_out.m"
    if ((ll_backend__rtti_out__MaybeLayoutName_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "rtti_out.m"
      {
#line 666 "rtti_out.m"
        {
#line 666 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ 0 }");
        }
#line 665 "rtti_out.m"
      }
#line 664 "rtti_out.m"
    else
#line 659 "rtti_out.m"
      {
#line 659 "rtti_out.m"
        MR_Word ll_backend__rtti_out__LayoutName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybeLayoutName_21, (MR_Integer) 0)));
#line 659 "rtti_out.m"
        MR_Word ll_backend__rtti_out__LayoutRttiId_32;

#line 660 "rtti_out.m"
        {
#line 660 "rtti_out.m"
          ll_backend__rtti_out__LayoutRttiId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__LayoutRttiId_32, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 660 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__LayoutRttiId_32, 1) = ((MR_Box) (ll_backend__rtti_out__LayoutName_31));
#line 660 "rtti_out.m"
        }
#line 661 "rtti_out.m"
        {
#line 661 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "{ ");
        }
#line 662 "rtti_out.m"
        {
#line 662 "rtti_out.m"
          ll_backend__rtti_out__output_cast_addr_of_rtti_id_4_p_0((MR_String) "(void *)", ll_backend__rtti_out__LayoutRttiId_32);
        }
#line 663 "rtti_out.m"
        {
#line 663 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
#line 659 "rtti_out.m"
      }
#line 668 "rtti_out.m"
    {
#line 668 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 669 "rtti_out.m"
    {
#line 669 "rtti_out.m"
      ll_backend__rtti_out__V_97_97 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(ll_backend__rtti_out__TypeCtorDetails_19);
    }
#line 669 "rtti_out.m"
    {
#line 669 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_97_97);
    }
#line 670 "rtti_out.m"
    {
#line 670 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 671 "rtti_out.m"
    {
#line 671 "rtti_out.m"
      ll_backend__rtti_out__V_101_101 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(ll_backend__rtti_out__Flags_18);
    }
#line 671 "rtti_out.m"
    {
#line 671 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_101_101);
    }
#line 672 "rtti_out.m"
    {
#line 672 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 678 "rtti_out.m"
#line 678 "rtti_out.m"
    switch (ll_backend__rtti_out__HaveFunctorNumberMap_22) {
#line 678 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 678 "rtti_out.m"
      case (MR_Integer) 0:
#line 679 "rtti_out.m"
        {
#line 680 "rtti_out.m"
          {
#line 680 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL");
          }
#line 679 "rtti_out.m"
        }
#line 678 "rtti_out.m"
        break;
#line 678 "rtti_out.m"
      case (MR_Integer) 1:
#line 674 "rtti_out.m"
        {
#line 674 "rtti_out.m"
          MR_Word ll_backend__rtti_out__FunctorNumberMapRttiId_33;

#line 676 "rtti_out.m"
          {
#line 676 "rtti_out.m"
            ll_backend__rtti_out__FunctorNumberMapRttiId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorNumberMapRttiId_33, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 676 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__FunctorNumberMapRttiId_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 676 "rtti_out.m"
          }
#line 677 "rtti_out.m"
          {
#line 677 "rtti_out.m"
            ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__FunctorNumberMapRttiId_33);
          }
#line 674 "rtti_out.m"
        }
#line 678 "rtti_out.m"
        break;
#line 678 "rtti_out.m"
    }
#line 696 "rtti_out.m"
    {
#line 696 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 696 "rtti_out.m"
      return;
    }
#line 614 "rtti_out.m"
  }
#line 611 "rtti_out.m"
}

#line 605 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1(
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 605 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 605 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 605 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 605 "rtti_out.m"
{
#line 605 "rtti_out.m"
  {
#line 605 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 605 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_21;

#line 605 "rtti_out.m"
    {
#line 605 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_21);
    }
#line 605 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_21));
#line 605 "rtti_out.m"
  }
#line 605 "rtti_out.m"
}

#line 595 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(
#line 595 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 595 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ArgRttiDatas_8,
#line 595 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
#line 595 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13)
#line 595 "rtti_out.m"
{
#line 598 "rtti_out.m"
  {
#line 598 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 598 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_16_16;
#line 598 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17_17;
#line 605 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_17_17;
#line 605 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_18_18;
#line 606 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_11_11;

#line 605 "rtti_out.m"
    {
#line 605 "rtti_out.m"
      ll_backend__rtti_out__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 605 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[3]));
#line 605 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0_1));
#line 605 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 605 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_16_16, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 605 "rtti_out.m"
    }
#line 605 "rtti_out.m"
    {
#line 605 "rtti_out.m"
      mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_16_16, ll_backend__rtti_out__ArgRttiDatas_8, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_17_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_18_18);
    }
#line 605 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17_17 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_17_17);
#line 606 "rtti_out.m"
    {
#line 606 "rtti_out.m"
      ll_backend__rtti_out__output_record_rtti_datas_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_11_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_17_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);
    }
#line 598 "rtti_out.m"
  }
#line 595 "rtti_out.m"
}

#line 575 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_2(
#line 575 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 575 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 575 "rtti_out.m"
{
#line 575 "rtti_out.m"
  {
#line 575 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 575 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 575 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

#line 575 "rtti_out.m"
    {
#line 575 "rtti_out.m"
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 575 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
#line 575 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 575 "rtti_out.m"
  }
#line 575 "rtti_out.m"
}

#line 556 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0_1(
#line 556 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 556 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 556 "rtti_out.m"
{
#line 556 "rtti_out.m"
  {
#line 556 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 556 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 556 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 556 "rtti_out.m"
    {
#line 556 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 556 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 556 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 556 "rtti_out.m"
  }
#line 556 "rtti_out.m"
}

#line 541 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(
#line 541 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 541 "rtti_out.m"
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
#line 541 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21,
#line 541 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22)
#line 541 "rtti_out.m"
{
#line 547 "rtti_out.m"
  {
#line 547 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 547 "rtti_out.m"
#line 547 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_8)) {
#line 547 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 547 "rtti_out.m"
      case (MR_Integer) 0:
#line 547 "rtti_out.m"
        {
#line 547 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_8), (MR_Integer) 0);
#line 547 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_12;
#line 549 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_13_13;

#line 548 "rtti_out.m"
          {
#line 548 "rtti_out.m"
            ll_backend__rtti_out__TypeCtorRttiId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 548 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 548 "rtti_out.m"
          }
#line 549 "rtti_out.m"
          {
#line 549 "rtti_out.m"
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_12, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_13_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
          }
#line 547 "rtti_out.m"
        }
#line 547 "rtti_out.m"
        break;
#line 547 "rtti_out.m"
      case (MR_Integer) 1:
#line 552 "rtti_out.m"
        {
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 1)));
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ArgRttiDatas_16;
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_55_55;
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_58_58;
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_60_60;
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_63_63;
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 0)));
#line 552 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_81;
#line 554 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_15_15;

#line 553 "rtti_out.m"
          {
#line 553 "rtti_out.m"
            ll_backend__rtti_out__TypeCtorRttiId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_81, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_80));
#line 553 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 553 "rtti_out.m"
          }
#line 554 "rtti_out.m"
          {
#line 554 "rtti_out.m"
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_81, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_15_15, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_55_55);
          }
#line 556 "rtti_out.m"
          {
#line 556 "rtti_out.m"
            ll_backend__rtti_out__ArgRttiDatas_16 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[14], ll_backend__rtti_out__Args_14);
          }
#line 557 "rtti_out.m"
          {
#line 557 "rtti_out.m"
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_55_55, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_58_58);
          }
#line 561 "rtti_out.m"
          {
#line 561 "rtti_out.m"
            ll_backend__rtti_out__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 561 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_63_63, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_8));
#line 561 "rtti_out.m"
          }
#line 560 "rtti_out.m"
          {
#line 560 "rtti_out.m"
            ll_backend__rtti_out__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_60_60, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_80));
#line 560 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_60_60, 1) = ((MR_Box) (ll_backend__rtti_out__V_63_63));
#line 560 "rtti_out.m"
          }
#line 559 "rtti_out.m"
          {
#line 559 "rtti_out.m"
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_60_60, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_58_58, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
          }
#line 563 "rtti_out.m"
          {
#line 563 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
#line 564 "rtti_out.m"
          {
#line 564 "rtti_out.m"
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
#line 565 "rtti_out.m"
          {
#line 565 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
#line 566 "rtti_out.m"
          {
#line 566 "rtti_out.m"
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_16);
          }
#line 568 "rtti_out.m"
          {
#line 568 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
#line 568 "rtti_out.m"
            return;
          }
#line 552 "rtti_out.m"
        }
#line 547 "rtti_out.m"
        break;
#line 547 "rtti_out.m"
      case (MR_Integer) 2:
#line 570 "rtti_out.m"
        {
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorInfo_90_90;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiVarArityId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 0)));
#line 570 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__Arity_19;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_34_34;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_37_37;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_82;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_83;
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__Args_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 1)));
#line 570 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ArgRttiDatas_85;
#line 573 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_18_18;

#line 571 "rtti_out.m"
          {
#line 571 "rtti_out.m"
            ll_backend__rtti_out__RttiTypeCtor_82 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__rtti_out__RttiVarArityId_17);
          }
#line 572 "rtti_out.m"
          {
#line 572 "rtti_out.m"
            ll_backend__rtti_out__TypeCtorRttiId_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_83, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_82));
#line 572 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 572 "rtti_out.m"
          }
#line 573 "rtti_out.m"
          {
#line 573 "rtti_out.m"
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_83, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29);
          }
#line 13222 "ll_backend.rtti_out.c"
          ll_backend__rtti_out__TypeCtorInfo_90_90 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 575 "rtti_out.m"
          {
#line 575 "rtti_out.m"
            ll_backend__rtti_out__ArgRttiDatas_85 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_90_90, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[15], ll_backend__rtti_out__Args_84);
          }
#line 576 "rtti_out.m"
          {
#line 576 "rtti_out.m"
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_85, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29_29, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32);
          }
#line 580 "rtti_out.m"
          {
#line 580 "rtti_out.m"
            ll_backend__rtti_out__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 580 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_37_37, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_8));
#line 580 "rtti_out.m"
          }
#line 579 "rtti_out.m"
          {
#line 579 "rtti_out.m"
            ll_backend__rtti_out__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_82));
#line 579 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 1) = ((MR_Box) (ll_backend__rtti_out__V_37_37));
#line 579 "rtti_out.m"
          }
#line 578 "rtti_out.m"
          {
#line 578 "rtti_out.m"
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_34_34, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22);
          }
#line 582 "rtti_out.m"
          {
#line 582 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
#line 583 "rtti_out.m"
          {
#line 583 "rtti_out.m"
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
#line 584 "rtti_out.m"
          {
#line 584 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
#line 585 "rtti_out.m"
          {
#line 585 "rtti_out.m"
            mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_90_90, ll_backend__rtti_out__Args_84, &ll_backend__rtti_out__Arity_19);
          }
#line 586 "rtti_out.m"
          {
#line 586 "rtti_out.m"
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_19);
          }
#line 587 "rtti_out.m"
          {
#line 587 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
#line 588 "rtti_out.m"
          {
#line 588 "rtti_out.m"
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_85);
          }
#line 590 "rtti_out.m"
          {
#line 590 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
#line 590 "rtti_out.m"
            return;
          }
#line 570 "rtti_out.m"
        }
#line 547 "rtti_out.m"
        break;
#line 547 "rtti_out.m"
      case (MR_Integer) 3:
#line 592 "rtti_out.m"
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_22 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_21;
#line 547 "rtti_out.m"
        break;
#line 547 "rtti_out.m"
    }
#line 547 "rtti_out.m"
  }
#line 541 "rtti_out.m"
}

#line 523 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(
#line 523 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 523 "rtti_out.m"
  MR_Word ll_backend__rtti_out__PseudoTypeInfo_8,
#line 523 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 523 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
#line 523 "rtti_out.m"
{
#line 532 "rtti_out.m"
  {
#line 532 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__PseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 3)));
#line 529 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_11_11;

#line 529 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 529 "rtti_out.m"
      {
#line 529 "rtti_out.m"
        ll_backend__rtti_out__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__PseudoTypeInfo_8, (MR_Integer) 0)));
#line 531 "rtti_out.m"
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
#line 529 "rtti_out.m"
      }
#line 529 "rtti_out.m"
    else
#line 537 "rtti_out.m"
      {
#line 533 "rtti_out.m"
        MR_Word ll_backend__rtti_out__RttiId_12;
#line 533 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_17_17;
#line 533 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_18_18;

#line 533 "rtti_out.m"
        {
#line 533 "rtti_out.m"
          ll_backend__rtti_out__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 1) = ((MR_Box) (ll_backend__rtti_out__PseudoTypeInfo_8));
#line 533 "rtti_out.m"
        }
#line 533 "rtti_out.m"
        {
#line 533 "rtti_out.m"
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__V_17_17, &ll_backend__rtti_out__RttiId_12);
        }
#line 534 "rtti_out.m"
        {
#line 534 "rtti_out.m"
          ll_backend__rtti_out__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 534 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_18_18, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_12));
#line 534 "rtti_out.m"
        }
#line 534 "rtti_out.m"
        {
#line 534 "rtti_out.m"
          ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13);
        }
#line 537 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 536 "rtti_out.m"
          *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
#line 537 "rtti_out.m"
        else
#line 538 "rtti_out.m"
          {
#line 538 "rtti_out.m"
            ll_backend__rtti_out__do_output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_8, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
#line 538 "rtti_out.m"
            return;
          }
#line 537 "rtti_out.m"
      }
#line 532 "rtti_out.m"
  }
#line 523 "rtti_out.m"
}

#line 507 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_2(
#line 507 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 507 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 507 "rtti_out.m"
{
#line 507 "rtti_out.m"
  {
#line 507 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 507 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 507 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv1_HeadVar__2_2;

#line 507 "rtti_out.m"
    {
#line 507 "rtti_out.m"
      ll_backend__rtti_out__conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 507 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__2_2));
#line 507 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 507 "rtti_out.m"
  }
#line 507 "rtti_out.m"
}

#line 490 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0_1(
#line 490 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 490 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 490 "rtti_out.m"
{
#line 490 "rtti_out.m"
  {
#line 490 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 490 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 490 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 490 "rtti_out.m"
    {
#line 490 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 490 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 490 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 490 "rtti_out.m"
  }
#line 490 "rtti_out.m"
}

#line 476 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__do_output_type_info_defn_6_p_0(
#line 476 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 476 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeInfo_8,
#line 476 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 476 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
#line 476 "rtti_out.m"
{
#line 481 "rtti_out.m"
  {
#line 481 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 481 "rtti_out.m"
#line 481 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__TypeInfo_8)) {
#line 481 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 481 "rtti_out.m"
      case (MR_Integer) 0:
#line 481 "rtti_out.m"
        {
#line 481 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__TypeInfo_8), (MR_Integer) 0);
#line 481 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_12;
#line 483 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_13_13;

#line 482 "rtti_out.m"
          {
#line 482 "rtti_out.m"
            ll_backend__rtti_out__TypeCtorRttiId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_11));
#line 482 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 482 "rtti_out.m"
          }
#line 483 "rtti_out.m"
          {
#line 483 "rtti_out.m"
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_12, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_13_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
#line 481 "rtti_out.m"
        }
#line 481 "rtti_out.m"
        break;
#line 481 "rtti_out.m"
      case (MR_Integer) 1:
#line 486 "rtti_out.m"
        {
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 1)));
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ArgRttiDatas_16;
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_54_54;
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_57_57;
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_59_59;
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_62_62;
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 0)));
#line 486 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_80;
#line 488 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_15_15;

#line 487 "rtti_out.m"
          {
#line 487 "rtti_out.m"
            ll_backend__rtti_out__TypeCtorRttiId_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_80, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_79));
#line 487 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 487 "rtti_out.m"
          }
#line 488 "rtti_out.m"
          {
#line 488 "rtti_out.m"
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_80, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_15_15, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_54_54);
          }
#line 490 "rtti_out.m"
          {
#line 490 "rtti_out.m"
            ll_backend__rtti_out__ArgRttiDatas_16 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[12], ll_backend__rtti_out__Args_14);
          }
#line 491 "rtti_out.m"
          {
#line 491 "rtti_out.m"
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_16, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_54_54, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_57_57);
          }
#line 494 "rtti_out.m"
          {
#line 494 "rtti_out.m"
            ll_backend__rtti_out__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 494 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_62_62, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_8));
#line 494 "rtti_out.m"
          }
#line 494 "rtti_out.m"
          {
#line 494 "rtti_out.m"
            ll_backend__rtti_out__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_59_59, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_79));
#line 494 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_59_59, 1) = ((MR_Box) (ll_backend__rtti_out__V_62_62));
#line 494 "rtti_out.m"
          }
#line 493 "rtti_out.m"
          {
#line 493 "rtti_out.m"
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_59_59, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_57_57, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
#line 496 "rtti_out.m"
          {
#line 496 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
#line 497 "rtti_out.m"
          {
#line 497 "rtti_out.m"
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
#line 498 "rtti_out.m"
          {
#line 498 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
#line 499 "rtti_out.m"
          {
#line 499 "rtti_out.m"
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_TypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_16);
          }
#line 500 "rtti_out.m"
          {
#line 500 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
#line 500 "rtti_out.m"
            return;
          }
#line 486 "rtti_out.m"
        }
#line 481 "rtti_out.m"
        break;
#line 481 "rtti_out.m"
      case (MR_Integer) 2:
#line 502 "rtti_out.m"
        {
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorInfo_89_89;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiVarArityId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 0)));
#line 502 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__Arity_19;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_33_33;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_36_36;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_81;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorRttiId_82;
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__TypeInfo_8, (MR_Integer) 1)));
#line 502 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ArgRttiDatas_84;
#line 505 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_18_18;

#line 503 "rtti_out.m"
          {
#line 503 "rtti_out.m"
            ll_backend__rtti_out__RttiTypeCtor_81 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__rtti_out__RttiVarArityId_17);
          }
#line 504 "rtti_out.m"
          {
#line 504 "rtti_out.m"
            ll_backend__rtti_out__TypeCtorRttiId_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_82, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_81));
#line 504 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TypeCtorRttiId_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 504 "rtti_out.m"
          }
#line 505 "rtti_out.m"
          {
#line 505 "rtti_out.m"
            ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorRttiId_82, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28);
          }
#line 13679 "ll_backend.rtti_out.c"
          ll_backend__rtti_out__TypeCtorInfo_89_89 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
#line 507 "rtti_out.m"
          {
#line 507 "rtti_out.m"
            ll_backend__rtti_out__ArgRttiDatas_84 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_89_89, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[13], ll_backend__rtti_out__Args_83);
          }
#line 508 "rtti_out.m"
          {
#line 508 "rtti_out.m"
            ll_backend__rtti_out__output_type_ctor_arg_defns_and_decls_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__ArgRttiDatas_84, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_28_28, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31);
          }
#line 511 "rtti_out.m"
          {
#line 511 "rtti_out.m"
            ll_backend__rtti_out__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 511 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_8));
#line 511 "rtti_out.m"
          }
#line 511 "rtti_out.m"
          {
#line 511 "rtti_out.m"
            ll_backend__rtti_out__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_81));
#line 511 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (ll_backend__rtti_out__V_36_36));
#line 511 "rtti_out.m"
          }
#line 510 "rtti_out.m"
          {
#line 510 "rtti_out.m"
            ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__V_33_33, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
          }
#line 513 "rtti_out.m"
          {
#line 513 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
          }
#line 514 "rtti_out.m"
          {
#line 514 "rtti_out.m"
            ll_backend__rtti_out__output_ctor_rtti_id_4_p_0(ll_backend__rtti_out__RttiTypeCtor_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
          }
#line 515 "rtti_out.m"
          {
#line 515 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t");
          }
#line 516 "rtti_out.m"
          {
#line 516 "rtti_out.m"
            mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_89_89, ll_backend__rtti_out__Args_83, &ll_backend__rtti_out__Arity_19);
          }
#line 517 "rtti_out.m"
          {
#line 517 "rtti_out.m"
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_19);
          }
#line 518 "rtti_out.m"
          {
#line 518 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n{");
          }
#line 519 "rtti_out.m"
          {
#line 519 "rtti_out.m"
            ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_TypeInfo) ", ll_backend__rtti_out__ArgRttiDatas_84);
          }
#line 520 "rtti_out.m"
          {
#line 520 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "}};\n");
#line 520 "rtti_out.m"
            return;
          }
#line 502 "rtti_out.m"
        }
#line 481 "rtti_out.m"
        break;
#line 481 "rtti_out.m"
    }
#line 481 "rtti_out.m"
  }
#line 476 "rtti_out.m"
}

#line 463 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_info_defn_6_p_0(
#line 463 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 463 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TypeInfo_8,
#line 463 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12,
#line 463 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13)
#line 463 "rtti_out.m"
{
#line 472 "rtti_out.m"
  {
#line 472 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 468 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiId_11;
#line 468 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_16_16;
#line 468 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_17_17;

#line 468 "rtti_out.m"
    {
#line 468 "rtti_out.m"
      ll_backend__rtti_out__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 468 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_16_16, 1) = ((MR_Box) (ll_backend__rtti_out__TypeInfo_8));
#line 468 "rtti_out.m"
    }
#line 468 "rtti_out.m"
    {
#line 468 "rtti_out.m"
      backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__V_16_16, &ll_backend__rtti_out__RttiId_11);
    }
#line 469 "rtti_out.m"
    {
#line 469 "rtti_out.m"
      ll_backend__rtti_out__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 469 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_11));
#line 469 "rtti_out.m"
    }
#line 469 "rtti_out.m"
    {
#line 469 "rtti_out.m"
      ll_backend__rtti_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__rtti_out__V_17_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12);
    }
#line 472 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 471 "rtti_out.m"
      *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12;
#line 472 "rtti_out.m"
    else
#line 473 "rtti_out.m"
      {
#line 473 "rtti_out.m"
        ll_backend__rtti_out__do_output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_8, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_13);
#line 473 "rtti_out.m"
        return;
      }
#line 472 "rtti_out.m"
  }
#line 463 "rtti_out.m"
}

#line 450 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(
#line 450 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 450 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
#line 450 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 450 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
#line 450 "rtti_out.m"
{
#line 456 "rtti_out.m"
  {
#line 456 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 456 "rtti_out.m"
    if (((MR_tag((MR_Word) ll_backend__rtti_out__MaybePseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 456 "rtti_out.m"
      {
#line 456 "rtti_out.m"
        MR_Word ll_backend__rtti_out__TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

#line 457 "rtti_out.m"
        {
#line 457 "rtti_out.m"
          ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
#line 457 "rtti_out.m"
          return;
        }
#line 456 "rtti_out.m"
      }
#line 456 "rtti_out.m"
    else
#line 459 "rtti_out.m"
      {
#line 459 "rtti_out.m"
        MR_Word ll_backend__rtti_out__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

#line 460 "rtti_out.m"
        {
#line 460 "rtti_out.m"
          ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
#line 460 "rtti_out.m"
          return;
        }
#line 459 "rtti_out.m"
      }
#line 456 "rtti_out.m"
  }
#line 450 "rtti_out.m"
}

#line 434 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_maybe_pseudo_type_info_or_self_defn_6_p_0(
#line 434 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 434 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MaybePseudoTypeInfo_8,
#line 434 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 434 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
#line 434 "rtti_out.m"
{
#line 441 "rtti_out.m"
  {
#line 441 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 441 "rtti_out.m"
#line 441 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__MaybePseudoTypeInfo_8)) {
#line 441 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 441 "rtti_out.m"
      case (MR_Integer) 0:
#line 447 "rtti_out.m"
        *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
#line 441 "rtti_out.m"
        break;
#line 441 "rtti_out.m"
      case (MR_Integer) 1:
#line 444 "rtti_out.m"
        {
#line 444 "rtti_out.m"
          MR_Word ll_backend__rtti_out__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

#line 445 "rtti_out.m"
          {
#line 445 "rtti_out.m"
            ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
#line 445 "rtti_out.m"
            return;
          }
#line 444 "rtti_out.m"
        }
#line 441 "rtti_out.m"
        break;
#line 441 "rtti_out.m"
      case (MR_Integer) 2:
#line 441 "rtti_out.m"
        {
#line 441 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__rtti_out__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

#line 442 "rtti_out.m"
          {
#line 442 "rtti_out.m"
            ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
#line 442 "rtti_out.m"
            return;
          }
#line 441 "rtti_out.m"
        }
#line 441 "rtti_out.m"
        break;
#line 441 "rtti_out.m"
    }
#line 441 "rtti_out.m"
  }
#line 434 "rtti_out.m"
}

#line 423 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_2(
#line 423 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 423 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 423 "rtti_out.m"
{
#line 423 "rtti_out.m"
  {
#line 423 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 423 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 423 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv5_HeadVar__2_2;

#line 423 "rtti_out.m"
    {
#line 423 "rtti_out.m"
      ll_backend__rtti_out__conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 423 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv5_HeadVar__2_2));
#line 423 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 423 "rtti_out.m"
  }
#line 423 "rtti_out.m"
}

#line 421 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0_1(
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 421 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 421 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 421 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 421 "rtti_out.m"
{
#line 421 "rtti_out.m"
  {
#line 421 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 421 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14;

#line 421 "rtti_out.m"
    {
#line 421 "rtti_out.m"
      ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14);
    }
#line 421 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14));
#line 421 "rtti_out.m"
  }
#line 421 "rtti_out.m"
}

#line 408 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_constraint_10_p_0(
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_11,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MakeRttiId_12,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Constraint_13,
#line 408 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__TCDeclSuperRttiId_14,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_Counter_0_24,
#line 408 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_Counter_25,
#line 408 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_26,
#line 408 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_27)
#line 408 "rtti_out.m"
{
#line 414 "rtti_out.m"
  {
#line 414 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_49_49 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Constraint_13, (MR_Integer) 0)));
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Types_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Constraint_13, (MR_Integer) 1)));
#line 414 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumTypes_20;
#line 414 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__TCNum_21;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCDeclRttiId_22;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeRttiDatas_23;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_34_34;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35_35;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_69;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_73_73;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_86;
#line 414 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_88_88;
#line 414 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_94;
#line 414 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_95_95;
#line 418 "rtti_out.m"
    void MR_CALL (* ll_backend__rtti_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 418 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_TCDeclSuperRttiId_14;
#line 421 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_35_35;
#line 421 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_36_36;

#line 416 "rtti_out.m"
    {
#line 416 "rtti_out.m"
      mercury__list__length_2_p_0(ll_backend__rtti_out__TypeCtorInfo_49_49, ll_backend__rtti_out__Types_19, &ll_backend__rtti_out__NumTypes_20);
    }
#line 417 "rtti_out.m"
    {
#line 417 "rtti_out.m"
      mercury__counter__allocate_3_p_0(&ll_backend__rtti_out__TCNum_21, ll_backend__rtti_out__STATE_VARIABLE_Counter_0_24, ll_backend__rtti_out__STATE_VARIABLE_Counter_25);
    }
#line 418 "rtti_out.m"
    ll_backend__rtti_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MakeRttiId_12, (MR_Integer) 1)));
#line 418 "rtti_out.m"
    {
#line 418 "rtti_out.m"
      ll_backend__rtti_out__func_0(((MR_Box) ll_backend__rtti_out__MakeRttiId_12), ((MR_Box) (ll_backend__rtti_out__TCNum_21)), ((MR_Box) (ll_backend__rtti_out__NumTypes_20)), &ll_backend__rtti_out__conv1_TCDeclSuperRttiId_14);
    }
#line 418 "rtti_out.m"
    *ll_backend__rtti_out__TCDeclSuperRttiId_14 = ((MR_Word) ll_backend__rtti_out__conv1_TCDeclSuperRttiId_14);
#line 419 "rtti_out.m"
    {
#line 419 "rtti_out.m"
      ll_backend__rtti_out__TCDeclRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_22, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_18));
#line 419 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "rtti_out.m"
    }
#line 1587 "rtti_out.m"
    {
#line 1587 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_11, ll_backend__rtti_out__TCDeclRttiId_22, (MR_Integer) 0, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_26, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_69);
    }
#line 1588 "rtti_out.m"
    {
#line 1588 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
#line 1589 "rtti_out.m"
    {
#line 1589 "rtti_out.m"
      ll_backend__rtti_out__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1589 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_73_73, 1) = ((MR_Box) (ll_backend__rtti_out__TCDeclRttiId_22));
#line 1589 "rtti_out.m"
    }
#line 1589 "rtti_out.m"
    {
#line 1589 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_73_73, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_69, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32);
    }
#line 421 "rtti_out.m"
    {
#line 421 "rtti_out.m"
      ll_backend__rtti_out__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 421 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[2]));
#line 421 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_constraint_10_p_0_1));
#line 421 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 421 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_34_34, 3) = ((MR_Box) (ll_backend__rtti_out__Info_11));
#line 421 "rtti_out.m"
    }
#line 421 "rtti_out.m"
    {
#line 421 "rtti_out.m"
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_34_34, ll_backend__rtti_out__Types_19, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_32_32)), &ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_35_35, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv3_STATE_VARIABLE_IO_36_36);
    }
#line 421 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35_35 = ((MR_Word) ll_backend__rtti_out__conv4_STATE_VARIABLE_DeclSet_35_35);
#line 423 "rtti_out.m"
    {
#line 423 "rtti_out.m"
      ll_backend__rtti_out__TypeRttiDatas_23 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_49_49, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[11], ll_backend__rtti_out__Types_19);
    }
#line 1595 "rtti_out.m"
    {
#line 1595 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1596 "rtti_out.m"
    {
#line 1596 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_11, *ll_backend__rtti_out__TCDeclSuperRttiId_14, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_35_35, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_86);
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__rtti_out__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1597 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_88_88, 1) = ((MR_Box) (*ll_backend__rtti_out__TCDeclSuperRttiId_14));
#line 1597 "rtti_out.m"
    }
#line 1597 "rtti_out.m"
    {
#line 1597 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_88_88, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_18_86, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_27);
    }
#line 426 "rtti_out.m"
    {
#line 426 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_95_95 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_95_95);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__TCDeclRttiId_22, &ll_backend__rtti_out__Str_94);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_94);
    }
#line 428 "rtti_out.m"
    {
#line 428 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{\n");
    }
#line 429 "rtti_out.m"
    {
#line 429 "rtti_out.m"
      ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__TypeRttiDatas_23);
    }
#line 430 "rtti_out.m"
    {
#line 430 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n};\n");
#line 430 "rtti_out.m"
      return;
    }
#line 414 "rtti_out.m"
  }
#line 408 "rtti_out.m"
}

#line 391 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(
#line 391 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_6,
#line 391 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCTypes_7,
#line 391 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_8,
#line 391 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__NumTypes_9,
#line 391 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__RttiId_10)
#line 391 "rtti_out.m"
{
#line 394 "rtti_out.m"
  {
#line 394 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 394 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_11_11;

#line 396 "rtti_out.m"
    {
#line 396 "rtti_out.m"
      ll_backend__rtti_out__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 396 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 396 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_7));
#line 396 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 2) = ((MR_Box) (ll_backend__rtti_out__Ordinal_8));
#line 396 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_11_11, 3) = ((MR_Box) (ll_backend__rtti_out__NumTypes_9));
#line 396 "rtti_out.m"
    }
#line 395 "rtti_out.m"
    {
#line 395 "rtti_out.m"
      MR_Word base;
#line 395 "rtti_out.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "rtti_out.m"
      *ll_backend__rtti_out__RttiId_10 = base;
#line 395 "rtti_out.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_6));
#line 395 "rtti_out.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__rtti_out__V_11_11));
#line 395 "rtti_out.m"
    }
#line 394 "rtti_out.m"
  }
#line 391 "rtti_out.m"
}

#line 334 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4(
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
#line 334 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
#line 334 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_8)
#line 334 "rtti_out.m"
{
#line 334 "rtti_out.m"
  {
#line 334 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 334 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv7_TCDeclSuperRttiId_14;
#line 334 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv6_STATE_VARIABLE_Counter_25;
#line 334 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_27;

#line 334 "rtti_out.m"
    {
#line 334 "rtti_out.m"
      ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv7_TCDeclSuperRttiId_14, ((MR_Word) ll_backend__rtti_out__wrapper_arg_3), &ll_backend__rtti_out__conv6_STATE_VARIABLE_Counter_25, ((MR_Word) ll_backend__rtti_out__wrapper_arg_5), &ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_27);
    }
#line 334 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv7_TCDeclSuperRttiId_14));
#line 334 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_4 = ((MR_Box) (ll_backend__rtti_out__conv6_STATE_VARIABLE_Counter_25));
#line 334 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_6 = ((MR_Box) (ll_backend__rtti_out__conv5_STATE_VARIABLE_DeclSet_27));
#line 334 "rtti_out.m"
  }
#line 334 "rtti_out.m"
}

#line 335 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3(
#line 335 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 335 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 335 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 335 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 335 "rtti_out.m"
{
#line 335 "rtti_out.m"
  {
#line 335 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 335 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv4_RttiId_10;

#line 335 "rtti_out.m"
    {
#line 335 "rtti_out.m"
      ll_backend__rtti_out__make_tc_instance_constraint_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_1), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv4_RttiId_10);
    }
#line 335 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv4_RttiId_10));
#line 335 "rtti_out.m"
  }
#line 335 "rtti_out.m"
}

#line 319 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_2(
#line 319 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 319 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 319 "rtti_out.m"
{
#line 319 "rtti_out.m"
  {
#line 319 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 319 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 319 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv3_HeadVar__2_2;

#line 319 "rtti_out.m"
    {
#line 319 "rtti_out.m"
      ll_backend__rtti_out__conv3_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 319 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv3_HeadVar__2_2));
#line 319 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 319 "rtti_out.m"
  }
#line 319 "rtti_out.m"
}

#line 317 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1(
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 317 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 317 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 317 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 317 "rtti_out.m"
{
#line 317 "rtti_out.m"
  {
#line 317 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 317 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14;

#line 317 "rtti_out.m"
    {
#line 317 "rtti_out.m"
      ll_backend__rtti_out__output_maybe_pseudo_type_info_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 317 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_14));
#line 317 "rtti_out.m"
  }
#line 317 "rtti_out.m"
}

#line 311 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(
#line 311 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 311 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Instance_8,
#line 311 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_28,
#line 311 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29)
#line 311 "rtti_out.m"
{
#line 314 "rtti_out.m"
  {
#line 314 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_94_94;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeInfo_95_95;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_96_96;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 0)));
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 1)));
#line 314 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumTypeVars_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 2)));
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 3)));
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCTypeRttiDatas_16;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCInstanceTypesRttiId_17;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCInstanceConstraintsRttiId_18;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCDeclRttiId_23;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCInstanceRttiId_25;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_32_32;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_33_33;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_36_36;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_64_64;
#line 314 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_66_66;
#line 314 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_77_77;
#line 315 "rtti_out.m"
    MR_Word ll_backend__rtti_out___MethodProcLabels_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Instance_8, (MR_Integer) 4)));
#line 317 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_33_33;
#line 317 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_34_34;
#line 360 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_24_24;

#line 317 "rtti_out.m"
    {
#line 317 "rtti_out.m"
      ll_backend__rtti_out__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 317 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[2]));
#line 317 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_1));
#line 317 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 317 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_32_32, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 317 "rtti_out.m"
    }
#line 14541 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeCtorInfo_94_94 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 14543 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeInfo_95_95 = (MR_Word) &ll_backend__rtti_out_scalar_common_1[1];
#line 14545 "ll_backend.rtti_out.c"
    ll_backend__rtti_out__TypeCtorInfo_96_96 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 317 "rtti_out.m"
    {
#line 317 "rtti_out.m"
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_94_94, ll_backend__rtti_out__TypeInfo_95_95, ll_backend__rtti_out__TypeCtorInfo_96_96, ll_backend__rtti_out__V_32_32, ll_backend__rtti_out__TCTypes_12, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_28)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_33_33, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_34_34);
    }
#line 317 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_33_33 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_33_33);
#line 319 "rtti_out.m"
    {
#line 319 "rtti_out.m"
      ll_backend__rtti_out__TCTypeRttiDatas_16 = mercury__list__map_2_f_0(ll_backend__rtti_out__TypeCtorInfo_94_94, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[10], ll_backend__rtti_out__TCTypes_12);
    }
#line 321 "rtti_out.m"
    {
#line 321 "rtti_out.m"
      ll_backend__rtti_out__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_36_36, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
#line 321 "rtti_out.m"
    }
#line 320 "rtti_out.m"
    {
#line 320 "rtti_out.m"
      ll_backend__rtti_out__TCInstanceTypesRttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceTypesRttiId_17, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
#line 320 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceTypesRttiId_17, 1) = ((MR_Box) (ll_backend__rtti_out__V_36_36));
#line 320 "rtti_out.m"
    }
#line 322 "rtti_out.m"
    {
#line 322 "rtti_out.m"
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCInstanceTypesRttiId_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_33_33, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37);
    }
#line 324 "rtti_out.m"
    {
#line 324 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
#line 325 "rtti_out.m"
    {
#line 325 "rtti_out.m"
      ll_backend__rtti_out__output_cast_addr_of_rtti_datas_4_p_0((MR_String) "(MR_PseudoTypeInfo) ", ll_backend__rtti_out__TCTypeRttiDatas_16);
    }
#line 327 "rtti_out.m"
    {
#line 327 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 329 "rtti_out.m"
    {
#line 329 "rtti_out.m"
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 329 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
#line 329 "rtti_out.m"
    }
#line 328 "rtti_out.m"
    {
#line 328 "rtti_out.m"
      ll_backend__rtti_out__TCInstanceConstraintsRttiId_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceConstraintsRttiId_18, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
#line 328 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceConstraintsRttiId_18, 1) = ((MR_Box) (ll_backend__rtti_out__V_45_45));
#line 328 "rtti_out.m"
    }
#line 332 "rtti_out.m"
    if ((ll_backend__rtti_out__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "rtti_out.m"
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37;
#line 332 "rtti_out.m"
    else
#line 333 "rtti_out.m"
      {
#line 333 "rtti_out.m"
        MR_Word ll_backend__rtti_out__ConstraintIds_21;
#line 333 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_46_46;
#line 333 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_47_47;
#line 333 "rtti_out.m"
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48;
#line 333 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_50_50;
#line 334 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_22_22;
#line 334 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv10_V_22_22;
#line 334 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_48_48;
#line 334 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv8_STATE_VARIABLE_IO_49_49;

#line 335 "rtti_out.m"
        {
#line 335 "rtti_out.m"
          ll_backend__rtti_out__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 335 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_8[0]));
#line 335 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_3));
#line 335 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 335 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 3) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
#line 335 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_50_50, 4) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
#line 335 "rtti_out.m"
        }
#line 334 "rtti_out.m"
        {
#line 334 "rtti_out.m"
          ll_backend__rtti_out__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 334 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
#line 334 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_instance_defn_6_p_0_4));
#line 334 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 334 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_46_46, 4) = ((MR_Box) (ll_backend__rtti_out__V_50_50));
#line 334 "rtti_out.m"
        }
#line 336 "rtti_out.m"
        {
#line 336 "rtti_out.m"
          ll_backend__rtti_out__V_47_47 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 334 "rtti_out.m"
        {
#line 334 "rtti_out.m"
          mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, ll_backend__rtti_out__TypeInfo_95_95, ll_backend__rtti_out__TypeCtorInfo_96_96, ll_backend__rtti_out__V_46_46, ll_backend__rtti_out__Constraints_14, &ll_backend__rtti_out__ConstraintIds_21, ((MR_Box) (ll_backend__rtti_out__V_47_47)), &ll_backend__rtti_out__conv10_V_22_22, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_37_37)), &ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_48_48, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv8_STATE_VARIABLE_IO_49_49);
        }
#line 334 "rtti_out.m"
        ll_backend__rtti_out__V_22_22 = ((MR_Word) ll_backend__rtti_out__conv10_V_22_22);
#line 334 "rtti_out.m"
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48 = ((MR_Word) ll_backend__rtti_out__conv9_STATE_VARIABLE_DeclSet_48_48);
#line 337 "rtti_out.m"
        {
#line 337 "rtti_out.m"
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCInstanceConstraintsRttiId_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48_48, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52);
        }
#line 339 "rtti_out.m"
        {
#line 339 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 340 "rtti_out.m"
        {
#line 340 "rtti_out.m"
          ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0((MR_String) "(MR_TypeClassConstraint) ", ll_backend__rtti_out__ConstraintIds_21);
        }
#line 342 "rtti_out.m"
        {
#line 342 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 333 "rtti_out.m"
      }
#line 359 "rtti_out.m"
    {
#line 359 "rtti_out.m"
      ll_backend__rtti_out__TCDeclRttiId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_23, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
#line 359 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 359 "rtti_out.m"
    }
#line 360 "rtti_out.m"
    {
#line 360 "rtti_out.m"
      ll_backend__rtti_out__output_record_rtti_id_decls_10_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDeclRttiId_23, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__rtti_out__V_24_24, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_52_52, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_64_64);
    }
#line 362 "rtti_out.m"
    {
#line 362 "rtti_out.m"
      ll_backend__rtti_out__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 362 "rtti_out.m"
      MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_66_66, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_12));
#line 362 "rtti_out.m"
    }
#line 362 "rtti_out.m"
    {
#line 362 "rtti_out.m"
      ll_backend__rtti_out__TCInstanceRttiId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceRttiId_25, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
#line 362 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCInstanceRttiId_25, 1) = ((MR_Box) (ll_backend__rtti_out__V_66_66));
#line 362 "rtti_out.m"
    }
#line 363 "rtti_out.m"
    {
#line 363 "rtti_out.m"
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCInstanceRttiId_25, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_64_64, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_29);
    }
#line 364 "rtti_out.m"
    {
#line 364 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    }
#line 365 "rtti_out.m"
    {
#line 365 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCDeclRttiId_23);
    }
#line 366 "rtti_out.m"
    {
#line 366 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 367 "rtti_out.m"
    {
#line 367 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumTypeVars_13);
    }
#line 368 "rtti_out.m"
    {
#line 368 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 369 "rtti_out.m"
    {
#line 369 "rtti_out.m"
      ll_backend__rtti_out__V_77_77 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ll_backend__rtti_out__Constraints_14);
    }
#line 369 "rtti_out.m"
    {
#line 369 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__V_77_77);
    }
#line 370 "rtti_out.m"
    {
#line 370 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 371 "rtti_out.m"
    {
#line 371 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCInstanceTypesRttiId_17);
    }
#line 372 "rtti_out.m"
    {
#line 372 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 376 "rtti_out.m"
    if ((ll_backend__rtti_out__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "rtti_out.m"
      {
#line 375 "rtti_out.m"
        {
#line 375 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
#line 374 "rtti_out.m"
      }
#line 376 "rtti_out.m"
    else
#line 378 "rtti_out.m"
      {
#line 378 "rtti_out.m"
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCInstanceConstraintsRttiId_18);
      }
#line 389 "rtti_out.m"
    {
#line 389 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 389 "rtti_out.m"
      return;
    }
#line 314 "rtti_out.m"
  }
#line 311 "rtti_out.m"
}

#line 303 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(
#line 303 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_5,
#line 303 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__Ordinal_6,
#line 303 "rtti_out.m"
  MR_Integer ll_backend__rtti_out__NumTypes_7,
#line 303 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__RttiId_8)
#line 303 "rtti_out.m"
{
#line 306 "rtti_out.m"
  {
#line 306 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 306 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_9_9;

#line 307 "rtti_out.m"
    {
#line 307 "rtti_out.m"
      ll_backend__rtti_out__V_9_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "rtti_out.m"
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__V_9_9, 0) = ((MR_Box) (ll_backend__rtti_out__Ordinal_6));
#line 307 "rtti_out.m"
      MR_hl_field(MR_mktag(2), ll_backend__rtti_out__V_9_9, 1) = ((MR_Box) (ll_backend__rtti_out__NumTypes_7));
#line 307 "rtti_out.m"
    }
#line 307 "rtti_out.m"
    {
#line 307 "rtti_out.m"
      MR_Word base;
#line 307 "rtti_out.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "rtti_out.m"
      *ll_backend__rtti_out__RttiId_8 = base;
#line 307 "rtti_out.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_5));
#line 307 "rtti_out.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__rtti_out__V_9_9));
#line 307 "rtti_out.m"
    }
#line 306 "rtti_out.m"
  }
#line 303 "rtti_out.m"
}

#line 290 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(
#line 290 "rtti_out.m"
  MR_Word ll_backend__rtti_out__MethodId_4)
#line 290 "rtti_out.m"
{
#line 293 "rtti_out.m"
  {
#line 293 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 293 "rtti_out.m"
    MR_String ll_backend__rtti_out__MethodName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MethodId_4, (MR_Integer) 0)));
#line 293 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__MethodArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MethodId_4, (MR_Integer) 1)));
#line 293 "rtti_out.m"
    MR_Word ll_backend__rtti_out__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__MethodId_4, (MR_Integer) 2)));

#line 295 "rtti_out.m"
    {
#line 295 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t{ \"");
    }
#line 296 "rtti_out.m"
    {
#line 296 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__MethodName_6);
    }
#line 297 "rtti_out.m"
    {
#line 297 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
#line 298 "rtti_out.m"
    {
#line 298 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__MethodArity_7);
    }
#line 299 "rtti_out.m"
    {
#line 299 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 300 "rtti_out.m"
    {
#line 300 "rtti_out.m"
      ll_backend__layout_out__output_pred_or_func_3_p_0(ll_backend__rtti_out__PredOrFunc_8);
    }
#line 301 "rtti_out.m"
    {
#line 301 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " },\n");
#line 301 "rtti_out.m"
      return;
    }
#line 293 "rtti_out.m"
  }
#line 290 "rtti_out.m"
}

#line 283 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(
#line 283 "rtti_out.m"
  MR_String ll_backend__rtti_out__TVarName_4)
#line 283 "rtti_out.m"
{
#line 285 "rtti_out.m"
  {
#line 285 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 286 "rtti_out.m"
    {
#line 286 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\"");
    }
#line 287 "rtti_out.m"
    {
#line 287 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__TVarName_4);
    }
#line 288 "rtti_out.m"
    {
#line 288 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n");
#line 288 "rtti_out.m"
      return;
    }
#line 285 "rtti_out.m"
  }
#line 283 "rtti_out.m"
}

#line 255 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4(
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_2,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_3,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_4,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_5,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_6,
#line 255 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_7,
#line 255 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_8)
#line 255 "rtti_out.m"
{
#line 255 "rtti_out.m"
  {
#line 255 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 255 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv5_TCDeclSuperRttiId_14;
#line 255 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv4_STATE_VARIABLE_Counter_25;
#line 255 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_27;

#line 255 "rtti_out.m"
    {
#line 255 "rtti_out.m"
      ll_backend__rtti_out__output_type_class_constraint_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), &ll_backend__rtti_out__conv5_TCDeclSuperRttiId_14, ((MR_Word) ll_backend__rtti_out__wrapper_arg_3), &ll_backend__rtti_out__conv4_STATE_VARIABLE_Counter_25, ((MR_Word) ll_backend__rtti_out__wrapper_arg_5), &ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_27);
    }
#line 255 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv5_TCDeclSuperRttiId_14));
#line 255 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_4 = ((MR_Box) (ll_backend__rtti_out__conv4_STATE_VARIABLE_Counter_25));
#line 255 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_6 = ((MR_Box) (ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_27));
#line 255 "rtti_out.m"
  }
#line 255 "rtti_out.m"
}

#line 256 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3(
#line 256 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 256 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 256 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 256 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 256 "rtti_out.m"
{
#line 256 "rtti_out.m"
  {
#line 256 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 256 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv2_RttiId_8;

#line 256 "rtti_out.m"
    {
#line 256 "rtti_out.m"
      ll_backend__rtti_out__make_tc_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_1), ((MR_Integer) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv2_RttiId_8);
    }
#line 256 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv2_RttiId_8));
#line 256 "rtti_out.m"
  }
#line 256 "rtti_out.m"
}

#line 218 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_2(
#line 218 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 218 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 218 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 218 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 218 "rtti_out.m"
{
#line 218 "rtti_out.m"
  {
#line 218 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 218 "rtti_out.m"
    {
#line 218 "rtti_out.m"
      ll_backend__rtti_out__output_type_class_id_method_id_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 218 "rtti_out.m"
      return;
    }
#line 218 "rtti_out.m"
  }
#line 218 "rtti_out.m"
}

#line 208 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_1(
#line 208 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 208 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 208 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 208 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 208 "rtti_out.m"
{
#line 208 "rtti_out.m"
  {
#line 208 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 208 "rtti_out.m"
    {
#line 208 "rtti_out.m"
      ll_backend__rtti_out__output_type_class_id_tvar_name_3_p_0(((MR_String) ll_backend__rtti_out__wrapper_arg_1));
#line 208 "rtti_out.m"
      return;
    }
#line 208 "rtti_out.m"
  }
#line 208 "rtti_out.m"
}

#line 183 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(
#line 183 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 183 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCDecl_8,
#line 183 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47,
#line 183 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48)
#line 183 "rtti_out.m"
{
#line 186 "rtti_out.m"
  {
#line 186 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_8, (MR_Integer) 0)));
#line 186 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Version_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_8, (MR_Integer) 1)));
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Supers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_8, (MR_Integer) 2)));
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_11, (MR_Integer) 0)));
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TVarNames_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_11, (MR_Integer) 1)));
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__MethodIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_11, (MR_Integer) 2)));
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__ModuleSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCName_14, (MR_Integer) 0)));
#line 186 "rtti_out.m"
    MR_String ll_backend__rtti_out__ClassName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCName_14, (MR_Integer) 1)));
#line 186 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCName_14, (MR_Integer) 2)));
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCIdVarNamesRttiId_21;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCIdMethodIdsRttiId_23;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCIdRttiId_25;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCDeclSupersRttiId_27;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TCDeclRttiId_29;
#line 186 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumTVarNames_34;
#line 186 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumMethodIds_35;
#line 186 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__NumSupers_44;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67;
#line 186 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_71_71;
#line 186 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103;

#line 192 "rtti_out.m"
    {
#line 192 "rtti_out.m"
      ll_backend__rtti_out__TCIdVarNamesRttiId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdVarNamesRttiId_21, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
#line 192 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdVarNamesRttiId_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 192 "rtti_out.m"
    }
#line 194 "rtti_out.m"
    {
#line 194 "rtti_out.m"
      ll_backend__rtti_out__TCIdMethodIdsRttiId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdMethodIdsRttiId_23, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
#line 194 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdMethodIdsRttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 194 "rtti_out.m"
    }
#line 196 "rtti_out.m"
    {
#line 196 "rtti_out.m"
      ll_backend__rtti_out__TCIdRttiId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdRttiId_25, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
#line 196 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCIdRttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "rtti_out.m"
    }
#line 198 "rtti_out.m"
    {
#line 198 "rtti_out.m"
      ll_backend__rtti_out__TCDeclSupersRttiId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclSupersRttiId_27, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
#line 198 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclSupersRttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 198 "rtti_out.m"
    }
#line 200 "rtti_out.m"
    {
#line 200 "rtti_out.m"
      ll_backend__rtti_out__TCDeclRttiId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_29, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
#line 200 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__TCDeclRttiId_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 200 "rtti_out.m"
    }
#line 203 "rtti_out.m"
    if ((ll_backend__rtti_out__TVarNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "rtti_out.m"
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47;
#line 203 "rtti_out.m"
    else
#line 204 "rtti_out.m"
      {
#line 208 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv0_STATE_VARIABLE_IO_56_56;

#line 205 "rtti_out.m"
        {
#line 205 "rtti_out.m"
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCIdVarNamesRttiId_21, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_47, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51);
        }
#line 207 "rtti_out.m"
        {
#line 207 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 208 "rtti_out.m"
        {
#line 208 "rtti_out.m"
          mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[8], ll_backend__rtti_out__TVarNames_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv0_STATE_VARIABLE_IO_56_56);
        }
#line 209 "rtti_out.m"
        {
#line 209 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 204 "rtti_out.m"
      }
#line 213 "rtti_out.m"
    if ((ll_backend__rtti_out__MethodIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "rtti_out.m"
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51;
#line 213 "rtti_out.m"
    else
#line 214 "rtti_out.m"
      {
#line 218 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_64_64;

#line 215 "rtti_out.m"
        {
#line 215 "rtti_out.m"
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCIdMethodIdsRttiId_23, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_51_51, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59);
        }
#line 217 "rtti_out.m"
        {
#line 217 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 218 "rtti_out.m"
        {
#line 218 "rtti_out.m"
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[9], ll_backend__rtti_out__MethodIds_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_64_64);
        }
#line 219 "rtti_out.m"
        {
#line 219 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 214 "rtti_out.m"
      }
#line 221 "rtti_out.m"
    {
#line 221 "rtti_out.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__rtti_out__TVarNames_15, &ll_backend__rtti_out__NumTVarNames_34);
    }
#line 222 "rtti_out.m"
    {
#line 222 "rtti_out.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ll_backend__rtti_out__MethodIds_16, &ll_backend__rtti_out__NumMethodIds_35);
    }
#line 223 "rtti_out.m"
    {
#line 223 "rtti_out.m"
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCIdRttiId_25, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_59_59, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67);
    }
#line 224 "rtti_out.m"
    {
#line 224 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t\"");
    }
#line 225 "rtti_out.m"
    {
#line 225 "rtti_out.m"
      ll_backend__rtti_out__V_71_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__rtti_out__ModuleSymName_17);
    }
#line 225 "rtti_out.m"
    {
#line 225 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__V_71_71);
    }
#line 226 "rtti_out.m"
    {
#line 226 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t\"");
    }
#line 227 "rtti_out.m"
    {
#line 227 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__ClassName_18);
    }
#line 228 "rtti_out.m"
    {
#line 228 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 229 "rtti_out.m"
    {
#line 229 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_19);
    }
#line 230 "rtti_out.m"
    {
#line 230 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 231 "rtti_out.m"
    {
#line 231 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumTVarNames_34);
    }
#line 232 "rtti_out.m"
    {
#line 232 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 233 "rtti_out.m"
    {
#line 233 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumMethodIds_35);
    }
#line 234 "rtti_out.m"
    {
#line 234 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 238 "rtti_out.m"
    if ((ll_backend__rtti_out__TVarNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "rtti_out.m"
      {
#line 237 "rtti_out.m"
        {
#line 237 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
#line 236 "rtti_out.m"
      }
#line 238 "rtti_out.m"
    else
#line 240 "rtti_out.m"
      {
#line 240 "rtti_out.m"
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCIdVarNamesRttiId_21);
      }
#line 242 "rtti_out.m"
    {
#line 242 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 246 "rtti_out.m"
    if ((ll_backend__rtti_out__MethodIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "rtti_out.m"
      {
#line 245 "rtti_out.m"
        {
#line 245 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
#line 244 "rtti_out.m"
      }
#line 246 "rtti_out.m"
    else
#line 248 "rtti_out.m"
      {
#line 248 "rtti_out.m"
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCIdMethodIdsRttiId_23);
      }
#line 250 "rtti_out.m"
    {
#line 250 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
#line 253 "rtti_out.m"
    if ((ll_backend__rtti_out__Supers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "rtti_out.m"
      ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67;
#line 253 "rtti_out.m"
    else
#line 254 "rtti_out.m"
      {
#line 254 "rtti_out.m"
        MR_Word ll_backend__rtti_out__SuperIds_42;
#line 254 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_97_97;
#line 254 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_98_98;
#line 254 "rtti_out.m"
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99;
#line 254 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_101_101;
#line 255 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_43_43;
#line 255 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv8_V_43_43;
#line 255 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv7_STATE_VARIABLE_DeclSet_99_99;
#line 255 "rtti_out.m"
        MR_Box ll_backend__rtti_out__conv6_STATE_VARIABLE_IO_100_100;

#line 256 "rtti_out.m"
        {
#line 256 "rtti_out.m"
          ll_backend__rtti_out__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 256 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_6[0]));
#line 256 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_3));
#line 256 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 256 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_101_101, 3) = ((MR_Box) (ll_backend__rtti_out__TCName_14));
#line 256 "rtti_out.m"
        }
#line 255 "rtti_out.m"
        {
#line 255 "rtti_out.m"
          ll_backend__rtti_out__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 255 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_7[0]));
#line 255 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 1) = ((MR_Box) (ll_backend__rtti_out__output_type_class_decl_defn_6_p_0_4));
#line 255 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 255 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 255 "rtti_out.m"
          MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_97_97, 4) = ((MR_Box) (ll_backend__rtti_out__V_101_101));
#line 255 "rtti_out.m"
        }
#line 257 "rtti_out.m"
        {
#line 257 "rtti_out.m"
          ll_backend__rtti_out__V_98_98 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 255 "rtti_out.m"
        {
#line 255 "rtti_out.m"
          mercury__list__map_foldl3_9_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_97_97, ll_backend__rtti_out__Supers_13, &ll_backend__rtti_out__SuperIds_42, ((MR_Box) (ll_backend__rtti_out__V_98_98)), &ll_backend__rtti_out__conv8_V_43_43, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_67_67)), &ll_backend__rtti_out__conv7_STATE_VARIABLE_DeclSet_99_99, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv6_STATE_VARIABLE_IO_100_100);
        }
#line 255 "rtti_out.m"
        ll_backend__rtti_out__V_43_43 = ((MR_Word) ll_backend__rtti_out__conv8_V_43_43);
#line 255 "rtti_out.m"
        ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99 = ((MR_Word) ll_backend__rtti_out__conv7_STATE_VARIABLE_DeclSet_99_99);
#line 258 "rtti_out.m"
        {
#line 258 "rtti_out.m"
          ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDeclSupersRttiId_27, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_99_99, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103);
        }
#line 260 "rtti_out.m"
        {
#line 260 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 261 "rtti_out.m"
        {
#line 261 "rtti_out.m"
          ll_backend__rtti_out__output_cast_addr_of_rtti_ids_4_p_0((MR_String) "(MR_TypeClassConstraint) ", ll_backend__rtti_out__SuperIds_42);
        }
#line 263 "rtti_out.m"
        {
#line 263 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 254 "rtti_out.m"
      }
#line 265 "rtti_out.m"
    {
#line 265 "rtti_out.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ll_backend__rtti_out__Supers_13, &ll_backend__rtti_out__NumSupers_44);
    }
#line 266 "rtti_out.m"
    {
#line 266 "rtti_out.m"
      ll_backend__rtti_out__output_generic_rtti_data_defn_start_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDeclRttiId_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_103_103, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_48);
    }
#line 267 "rtti_out.m"
    {
#line 267 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t&");
    }
#line 268 "rtti_out.m"
    {
#line 268 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCIdRttiId_25);
    }
#line 269 "rtti_out.m"
    {
#line 269 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 270 "rtti_out.m"
    {
#line 270 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__Version_12);
    }
#line 271 "rtti_out.m"
    {
#line 271 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 272 "rtti_out.m"
    {
#line 272 "rtti_out.m"
      mercury__io__write_int_3_p_0(ll_backend__rtti_out__NumSupers_44);
    }
#line 273 "rtti_out.m"
    {
#line 273 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 277 "rtti_out.m"
    if ((ll_backend__rtti_out__Supers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "rtti_out.m"
      {
#line 276 "rtti_out.m"
        {
#line 276 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
#line 275 "rtti_out.m"
      }
#line 277 "rtti_out.m"
    else
#line 279 "rtti_out.m"
      {
#line 279 "rtti_out.m"
        ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__rtti_out__TCDeclSupersRttiId_27);
      }
#line 281 "rtti_out.m"
    {
#line 281 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 281 "rtti_out.m"
      return;
    }
#line 186 "rtti_out.m"
  }
#line 183 "rtti_out.m"
}

#line 178 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_4(
#line 178 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 178 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 178 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 178 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 178 "rtti_out.m"
{
#line 178 "rtti_out.m"
  {
#line 178 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 178 "rtti_out.m"
    {
#line 178 "rtti_out.m"
      ll_backend__rtti_out__output_static_code_addr_3_p_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
#line 178 "rtti_out.m"
      return;
    }
#line 178 "rtti_out.m"
  }
#line 178 "rtti_out.m"
}

#line 175 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_3(
#line 175 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 175 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 175 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 175 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3)
#line 175 "rtti_out.m"
{
#line 175 "rtti_out.m"
  {
#line 175 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;

#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__rtti_out__wrapper_arg_1));
#line 175 "rtti_out.m"
      return;
    }
#line 175 "rtti_out.m"
  }
#line 175 "rtti_out.m"
}

#line 167 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2(
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 167 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 167 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 167 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 167 "rtti_out.m"
{
#line 167 "rtti_out.m"
  {
#line 167 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 167 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv1_HeadVar__4_4;

#line 167 "rtti_out.m"
    {
#line 167 "rtti_out.m"
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv1_HeadVar__4_4);
    }
#line 167 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv1_HeadVar__4_4));
#line 167 "rtti_out.m"
  }
#line 167 "rtti_out.m"
}

#line 166 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_1(
#line 166 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 166 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 166 "rtti_out.m"
{
#line 166 "rtti_out.m"
  {
#line 166 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 166 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 166 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 166 "rtti_out.m"
    {
#line 166 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 166 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 166 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 166 "rtti_out.m"
  }
#line 166 "rtti_out.m"
}

#line 159 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_10,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__TCName_11,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__InstanceModuleName_12,
#line 159 "rtti_out.m"
  MR_String ll_backend__rtti_out__InstanceString_13,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__BaseTypeClassInfo_14,
#line 159 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_25,
#line 159 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26)
#line 159 "rtti_out.m"
{
#line 164 "rtti_out.m"
  {
#line 164 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_58_58 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0;
#line 164 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 0)));
#line 164 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__N2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 1)));
#line 164 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__N3_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 2)));
#line 164 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__N4_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 3)));
#line 164 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__N5_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 4)));
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Methods_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__BaseTypeClassInfo_14, (MR_Integer) 5)));
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__CodeAddrs_23;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__RttiId_24;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_30_30;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_35_35;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_41_41;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_46_46;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;
#line 164 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_48_48;
#line 167 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_31_31;
#line 167 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_IO_32_32;

#line 166 "rtti_out.m"
    {
#line 166 "rtti_out.m"
      ll_backend__rtti_out__CodeAddrs_23 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ll_backend__rtti_out__TypeCtorInfo_58_58, (MR_Word) &ll_backend__rtti_out_scalar_common_2[5], ll_backend__rtti_out__Methods_22);
    }
#line 167 "rtti_out.m"
    {
#line 167 "rtti_out.m"
      ll_backend__rtti_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 167 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[1]));
#line 167 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 1) = ((MR_Box) (ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0_2));
#line 167 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_30_30, 3) = ((MR_Box) (ll_backend__rtti_out__Info_10));
#line 167 "rtti_out.m"
    }
#line 167 "rtti_out.m"
    {
#line 167 "rtti_out.m"
      mercury__list__foldl2_6_p_2(ll_backend__rtti_out__TypeCtorInfo_58_58, (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_30_30, ll_backend__rtti_out__CodeAddrs_23, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_25)), &ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_31_31, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_IO_32_32);
    }
#line 167 "rtti_out.m"
    ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31 = ((MR_Word) ll_backend__rtti_out__conv3_STATE_VARIABLE_DeclSet_31_31);
#line 168 "rtti_out.m"
    {
#line 168 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 170 "rtti_out.m"
    {
#line 170 "rtti_out.m"
      ll_backend__rtti_out__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_35_35, 0) = ((MR_Box) (ll_backend__rtti_out__InstanceModuleName_12));
#line 170 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_35_35, 1) = ((MR_Box) (ll_backend__rtti_out__InstanceString_13));
#line 170 "rtti_out.m"
    }
#line 169 "rtti_out.m"
    {
#line 169 "rtti_out.m"
      ll_backend__rtti_out__RttiId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_24, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_11));
#line 169 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_24, 1) = ((MR_Box) (ll_backend__rtti_out__V_35_35));
#line 169 "rtti_out.m"
    }
#line 171 "rtti_out.m"
    {
#line 171 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_10, ll_backend__rtti_out__RttiId_24, (MR_Integer) 1, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_31_31, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_26);
    }
#line 174 "rtti_out.m"
    {
#line 174 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " = {\n\t(MR_Code *) ");
    }
#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      ll_backend__rtti_out__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_48_48, 0) = ((MR_Box) (ll_backend__rtti_out__N5_21));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "rtti_out.m"
    }
#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      ll_backend__rtti_out__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_47_47, 0) = ((MR_Box) (ll_backend__rtti_out__N4_20));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_47_47, 1) = ((MR_Box) (ll_backend__rtti_out__V_48_48));
#line 175 "rtti_out.m"
    }
#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      ll_backend__rtti_out__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_46_46, 0) = ((MR_Box) (ll_backend__rtti_out__N3_19));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_46_46, 1) = ((MR_Box) (ll_backend__rtti_out__V_47_47));
#line 175 "rtti_out.m"
    }
#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      ll_backend__rtti_out__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_45_45, 0) = ((MR_Box) (ll_backend__rtti_out__N2_18));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_45_45, 1) = ((MR_Box) (ll_backend__rtti_out__V_46_46));
#line 175 "rtti_out.m"
    }
#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      ll_backend__rtti_out__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_41_41, 0) = ((MR_Box) (ll_backend__rtti_out__N1_17));
#line 175 "rtti_out.m"
      MR_hl_field(MR_mktag(1), ll_backend__rtti_out__V_41_41, 1) = ((MR_Box) (ll_backend__rtti_out__V_45_45));
#line 175 "rtti_out.m"
    }
#line 175 "rtti_out.m"
    {
#line 175 "rtti_out.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__rtti_out__V_41_41, (MR_String) ",\n\t(MR_Code *) ", (MR_Word) &ll_backend__rtti_out_scalar_common_2[6]);
    }
#line 177 "rtti_out.m"
    {
#line 177 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 178 "rtti_out.m"
    {
#line 178 "rtti_out.m"
      mercury__io__write_list_5_p_0(ll_backend__rtti_out__TypeCtorInfo_58_58, ll_backend__rtti_out__CodeAddrs_23, (MR_String) ",\n\t", (MR_Word) &ll_backend__rtti_out_scalar_common_2[7]);
    }
#line 179 "rtti_out.m"
    {
#line 179 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
#line 179 "rtti_out.m"
      return;
    }
#line 164 "rtti_out.m"
  }
#line 159 "rtti_out.m"
}

#line 97 "rtti_out.m"
MR_String MR_CALL 
ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(
#line 97 "rtti_out.m"
  MR_Word ll_backend__rtti_out__ProcLabel_4,
#line 97 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Id_5)
#line 97 "rtti_out.m"
{
#line 2030 "rtti_out.m"
  {
#line 2030 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__HeadVar__3_3;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_6_6;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_7_7;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_9_9;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_10_10;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_11_11;
#line 2030 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_13_13;

#line 2031 "rtti_out.m"
    {
#line 2031 "rtti_out.m"
      ll_backend__rtti_out__V_6_6 = backend_libs__name_mangle__mercury_var_prefix_0_f_0();
    }
#line 2031 "rtti_out.m"
    {
#line 2031 "rtti_out.m"
      ll_backend__rtti_out__V_10_10 = backend_libs__rtti__tabling_info_id_str_1_f_0(ll_backend__rtti_out__Id_5);
    }
#line 2032 "rtti_out.m"
    {
#line 2032 "rtti_out.m"
      ll_backend__rtti_out__V_13_13 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__rtti_out__ProcLabel_4, (MR_Integer) 0);
    }
#line 2031 "rtti_out.m"
    {
#line 2031 "rtti_out.m"
      ll_backend__rtti_out__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__rtti_out__V_13_13);
    }
#line 2031 "rtti_out.m"
    {
#line 2031 "rtti_out.m"
      ll_backend__rtti_out__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__rtti_out__V_10_10, ll_backend__rtti_out__V_11_11);
    }
#line 2031 "rtti_out.m"
    {
#line 2031 "rtti_out.m"
      ll_backend__rtti_out__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "_proc", ll_backend__rtti_out__V_9_9);
    }
#line 2031 "rtti_out.m"
    {
#line 2031 "rtti_out.m"
      return ll_backend__rtti_out__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__rtti_out__V_6_6, ll_backend__rtti_out__V_7_7);
    }
#line 2030 "rtti_out.m"
    return ll_backend__rtti_out__HeadVar__3_3;
#line 2030 "rtti_out.m"
  }
#line 97 "rtti_out.m"
}

#line 94 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_5_p_0(
#line 94 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_6,
#line 94 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_7,
#line 94 "rtti_out.m"
  MR_Word ll_backend__rtti_out__BeingDefined_8)
#line 94 "rtti_out.m"
{
#line 1599 "rtti_out.m"
  {
#line 1599 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1599 "rtti_out.m"
    MR_Word ll_backend__rtti_out__DeclSet0_10;
#line 1601 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_11_11;

#line 1600 "rtti_out.m"
    {
#line 1600 "rtti_out.m"
      ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&ll_backend__rtti_out__DeclSet0_10);
    }
#line 1601 "rtti_out.m"
    {
#line 1601 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_6, ll_backend__rtti_out__RttiId_7, ll_backend__rtti_out__BeingDefined_8, ll_backend__rtti_out__DeclSet0_10, &ll_backend__rtti_out__V_11_11);
    }
#line 1599 "rtti_out.m"
  }
#line 94 "rtti_out.m"
}

#line 87 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(
#line 87 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_8,
#line 87 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_9,
#line 87 "rtti_out.m"
  MR_Word ll_backend__rtti_out__BeingDefined_10,
#line 87 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19,
#line 87 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20)
#line 87 "rtti_out.m"
{
#line 1604 "rtti_out.m"
  {
#line 1604 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1604 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Linkage_13;
#line 1604 "rtti_out.m"
    MR_String ll_backend__rtti_out__LinkageStr_14;
#line 1604 "rtti_out.m"
    MR_Word ll_backend__rtti_out__Globals_15;
#line 1604 "rtti_out.m"
    MR_Word ll_backend__rtti_out__InclCodeAddr_16;
#line 1604 "rtti_out.m"
    MR_String ll_backend__rtti_out__CType_17;
#line 1604 "rtti_out.m"
    MR_Word ll_backend__rtti_out__IsArray_18;
#line 1604 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_26_26;
#line 1604 "rtti_out.m"
    MR_Word ll_backend__rtti_out__IsArray_57;
#line 1604 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_63;
#line 1604 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_64_64;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_34_34;
#line 1610 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_35_35;
#line 1610 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_36_36;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_37_37;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_38_38;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_39_39;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_40_40;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_41_41;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_42_42;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_43_43;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_44_44;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_45_45;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_46_46;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_47_47;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_48_48;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_49_49;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_50_50;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_51_51;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_52_52;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_53_53;
#line 1610 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_54_54;

#line 1605 "rtti_out.m"
    {
#line 1605 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_type_decl_5_p_0(ll_backend__rtti_out__RttiId_9, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_20);
    }
#line 2013 "rtti_out.m"
    {
#line 2013 "rtti_out.m"
      ll_backend__rtti_out__IsArray_57 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_9);
    }
#line 2020 "rtti_out.m"
#line 2020 "rtti_out.m"
    switch (ll_backend__rtti_out__IsArray_57) {
#line 2020 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2020 "rtti_out.m"
      case (MR_Integer) 0:
#line 2019 "rtti_out.m"
        ll_backend__rtti_out__Linkage_13 = (MR_Integer) 0;
#line 2020 "rtti_out.m"
        break;
#line 2020 "rtti_out.m"
      case (MR_Integer) 1:
#line 2021 "rtti_out.m"
        {
#line 2021 "rtti_out.m"
          MR_Word ll_backend__rtti_out__Exported_58;

#line 2022 "rtti_out.m"
          {
#line 2022 "rtti_out.m"
            ll_backend__rtti_out__Exported_58 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ll_backend__rtti_out__RttiId_9);
          }
#line 2024 "rtti_out.m"
#line 2024 "rtti_out.m"
          switch (ll_backend__rtti_out__Exported_58) {
#line 2024 "rtti_out.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2024 "rtti_out.m"
            case (MR_Integer) 0:
#line 2024 "rtti_out.m"
              ll_backend__rtti_out__Linkage_13 = (MR_Integer) 1;
#line 2024 "rtti_out.m"
              break;
#line 2024 "rtti_out.m"
            case (MR_Integer) 1:
#line 2023 "rtti_out.m"
              ll_backend__rtti_out__Linkage_13 = (MR_Integer) 0;
#line 2024 "rtti_out.m"
              break;
#line 2024 "rtti_out.m"
          }
#line 2021 "rtti_out.m"
        }
#line 2020 "rtti_out.m"
        break;
#line 2020 "rtti_out.m"
    }
#line 1607 "rtti_out.m"
    {
#line 1607 "rtti_out.m"
      ll_backend__rtti_out__LinkageStr_14 = ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(ll_backend__rtti_out__Linkage_13, ll_backend__rtti_out__BeingDefined_10);
    }
#line 1608 "rtti_out.m"
    {
#line 1608 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__LinkageStr_14);
    }
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 0)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 1)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 2)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 3)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 4)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 5)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 6)));
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1610 "rtti_out.m"
    ll_backend__rtti_out__Globals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__Info_8, (MR_Integer) 8)));
#line 1611 "rtti_out.m"
    {
#line 1611 "rtti_out.m"
      ll_backend__rtti_out__InclCodeAddr_16 = backend_libs__rtti__rtti_id_would_include_code_addr_1_f_0(ll_backend__rtti_out__RttiId_9);
    }
#line 1612 "rtti_out.m"
    {
#line 1612 "rtti_out.m"
      ll_backend__rtti_out__V_26_26 = ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(ll_backend__rtti_out__Globals_15, ll_backend__rtti_out__InclCodeAddr_16);
    }
#line 1612 "rtti_out.m"
    {
#line 1612 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_26_26);
    }
#line 1614 "rtti_out.m"
    {
#line 1614 "rtti_out.m"
      backend_libs__rtti__rtti_id_c_type_3_p_0(ll_backend__rtti_out__RttiId_9, &ll_backend__rtti_out__CType_17, &ll_backend__rtti_out__IsArray_18);
    }
#line 1615 "rtti_out.m"
    {
#line 1615 "rtti_out.m"
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__rtti_out__CType_17);
    }
#line 1616 "rtti_out.m"
    {
#line 1616 "rtti_out.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_64_64 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_64_64);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_9, &ll_backend__rtti_out__Str_63);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_63);
    }
#line 1621 "rtti_out.m"
#line 1621 "rtti_out.m"
    switch (ll_backend__rtti_out__IsArray_18) {
#line 1621 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1621 "rtti_out.m"
      case (MR_Integer) 0:
#line 1619 "rtti_out.m"
        {
#line 1620 "rtti_out.m"
          {
#line 1620 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "[]");
#line 1620 "rtti_out.m"
            return;
          }
#line 1619 "rtti_out.m"
        }
#line 1621 "rtti_out.m"
        break;
#line 1621 "rtti_out.m"
      case (MR_Integer) 1:
#line 1622 "rtti_out.m"
        {
#line 1622 "rtti_out.m"
        }
#line 1621 "rtti_out.m"
        break;
#line 1621 "rtti_out.m"
    }
#line 1604 "rtti_out.m"
  }
#line 87 "rtti_out.m"
}

#line 81 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_rtti_id_3_p_0(
#line 81 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiId_4)
#line 81 "rtti_out.m"
{
#line 1932 "rtti_out.m"
  {
#line 1932 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1932 "rtti_out.m"
    MR_String ll_backend__rtti_out__Str_6;
#line 1932 "rtti_out.m"
    MR_String ll_backend__rtti_out__V_9_9;

#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      ll_backend__rtti_out__V_9_9 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
    }
#line 1933 "rtti_out.m"
    {
#line 1933 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_9_9);
    }
#line 1934 "rtti_out.m"
    {
#line 1934 "rtti_out.m"
      backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_4, &ll_backend__rtti_out__Str_6);
    }
#line 1935 "rtti_out.m"
    {
#line 1935 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_6);
#line 1935 "rtti_out.m"
      return;
    }
#line 1932 "rtti_out.m"
  }
#line 81 "rtti_out.m"
}

#line 76 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(
#line 76 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Data_4)
#line 76 "rtti_out.m"
{
#line 1757 "rtti_out.m"
  {
#line 1757 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1757 "rtti_out.m"
#line 1757 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__Data_4)) {
#line 1757 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1757 "rtti_out.m"
      case (MR_Integer) 0:
#line 1757 "rtti_out.m"
        {
#line 1757 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorData_6 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 0);
#line 1757 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_7;
#line 1757 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiId_8;
#line 1757 "rtti_out.m"
          MR_String ll_backend__rtti_out__Str_76;
#line 1757 "rtti_out.m"
          MR_String ll_backend__rtti_out__V_77_77;

#line 1758 "rtti_out.m"
          {
#line 1758 "rtti_out.m"
            ll_backend__rtti_out__RttiTypeCtor_7 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(ll_backend__rtti_out__TypeCtorData_6);
          }
#line 1759 "rtti_out.m"
          {
#line 1759 "rtti_out.m"
            ll_backend__rtti_out__RttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1759 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_8, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_7));
#line 1759 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 1759 "rtti_out.m"
          }
#line 1760 "rtti_out.m"
          {
#line 1760 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
          }
#line 1761 "rtti_out.m"
          {
#line 1761 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_ctor_info(\n\t\t&");
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            ll_backend__rtti_out__V_77_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_77_77);
          }
#line 1934 "rtti_out.m"
          {
#line 1934 "rtti_out.m"
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_8, &ll_backend__rtti_out__Str_76);
          }
#line 1935 "rtti_out.m"
          {
#line 1935 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_76);
          }
#line 1763 "rtti_out.m"
          {
#line 1763 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
#line 1763 "rtti_out.m"
            return;
          }
#line 1757 "rtti_out.m"
        }
#line 1757 "rtti_out.m"
        break;
#line 1757 "rtti_out.m"
      case (MR_Integer) 1:
#line 1765 "rtti_out.m"
        {
#line 1765 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCDecl_9 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 1);
#line 1765 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_9, (MR_Integer) 0)));
#line 1765 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_10, (MR_Integer) 0)));
#line 1765 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiId_53;
#line 1765 "rtti_out.m"
          MR_String ll_backend__rtti_out__Str_60;
#line 1765 "rtti_out.m"
          MR_String ll_backend__rtti_out__V_61_61;
#line 1766 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_9, (MR_Integer) 1)));
#line 1766 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCDecl_9, (MR_Integer) 2)));
#line 1767 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_10, (MR_Integer) 1)));
#line 1767 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCId_10, (MR_Integer) 2)));

#line 1768 "rtti_out.m"
          {
#line 1768 "rtti_out.m"
            ll_backend__rtti_out__RttiId_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1768 "rtti_out.m"
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_53, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_13));
#line 1768 "rtti_out.m"
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1768 "rtti_out.m"
          }
#line 1769 "rtti_out.m"
          {
#line 1769 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
          }
#line 1770 "rtti_out.m"
          {
#line 1770 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_class_decl(\n\t\t&");
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            ll_backend__rtti_out__V_61_61 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_61_61);
          }
#line 1934 "rtti_out.m"
          {
#line 1934 "rtti_out.m"
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_53, &ll_backend__rtti_out__Str_60);
          }
#line 1935 "rtti_out.m"
          {
#line 1935 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_60);
          }
#line 1772 "rtti_out.m"
          {
#line 1772 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
#line 1772 "rtti_out.m"
            return;
          }
#line 1765 "rtti_out.m"
        }
#line 1757 "rtti_out.m"
        break;
#line 1757 "rtti_out.m"
      case (MR_Integer) 2:
#line 1774 "rtti_out.m"
        {
#line 1774 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCInstance_16 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 2);
#line 1774 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 1)));
#line 1774 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_29_29;
#line 1774 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiId_54;
#line 1774 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 0)));
#line 1774 "rtti_out.m"
          MR_String ll_backend__rtti_out__Str_68;
#line 1774 "rtti_out.m"
          MR_String ll_backend__rtti_out__V_69_69;
#line 1775 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 2)));
#line 1775 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 3)));
#line 1775 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__TCInstance_16, (MR_Integer) 4)));

#line 1776 "rtti_out.m"
          {
#line 1776 "rtti_out.m"
            ll_backend__rtti_out__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1776 "rtti_out.m"
            MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_29_29, 1) = ((MR_Box) (ll_backend__rtti_out__TCTypes_17));
#line 1776 "rtti_out.m"
          }
#line 1776 "rtti_out.m"
          {
#line 1776 "rtti_out.m"
            ll_backend__rtti_out__RttiId_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "rtti_out.m"
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_54, 0) = ((MR_Box) (ll_backend__rtti_out__TCName_55));
#line 1776 "rtti_out.m"
            MR_hl_field(MR_mktag(1), ll_backend__rtti_out__RttiId_54, 1) = ((MR_Box) (ll_backend__rtti_out__V_29_29));
#line 1776 "rtti_out.m"
          }
#line 1777 "rtti_out.m"
          {
#line 1777 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\t{\n\t");
          }
#line 1778 "rtti_out.m"
          {
#line 1778 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_class_instance(\n\t\t&");
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            ll_backend__rtti_out__V_69_69 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_69_69);
          }
#line 1934 "rtti_out.m"
          {
#line 1934 "rtti_out.m"
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_54, &ll_backend__rtti_out__Str_68);
          }
#line 1935 "rtti_out.m"
          {
#line 1935 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_68);
          }
#line 1780 "rtti_out.m"
          {
#line 1780 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
#line 1780 "rtti_out.m"
            return;
          }
#line 1774 "rtti_out.m"
        }
#line 1757 "rtti_out.m"
        break;
#line 1757 "rtti_out.m"
      case (MR_Integer) 3:
#line 1757 "rtti_out.m"
#line 1757 "rtti_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 0)))) {
#line 1757 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1757 "rtti_out.m"
          case (MR_Integer) 0:
#line 1782 "rtti_out.m"
            {
#line 1782 "rtti_out.m"
            }
#line 1757 "rtti_out.m"
            break;
#line 1757 "rtti_out.m"
          case (MR_Integer) 1:
#line 1783 "rtti_out.m"
            {
#line 1783 "rtti_out.m"
            }
#line 1757 "rtti_out.m"
            break;
#line 1757 "rtti_out.m"
          case (MR_Integer) 2:
#line 1784 "rtti_out.m"
            {
#line 1784 "rtti_out.m"
            }
#line 1757 "rtti_out.m"
            break;
#line 1757 "rtti_out.m"
        }
#line 1757 "rtti_out.m"
        break;
#line 1757 "rtti_out.m"
    }
#line 1757 "rtti_out.m"
  }
#line 76 "rtti_out.m"
}

#line 1738 "rtti_out.m"
static MR_Box MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0_1(
#line 1738 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1738 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1)
#line 1738 "rtti_out.m"
{
#line 1738 "rtti_out.m"
  {
#line 1738 "rtti_out.m"
    MR_Box ll_backend__rtti_out__wrapper_arg_2;
#line 1738 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1738 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_HeadVar__2_2;

#line 1738 "rtti_out.m"
    {
#line 1738 "rtti_out.m"
      ll_backend__rtti_out__conv0_HeadVar__2_2 = ll_backend__rtti_out__make_code_addr_1_f_0(((MR_Word) ll_backend__rtti_out__wrapper_arg_1));
    }
#line 1738 "rtti_out.m"
    ll_backend__rtti_out__wrapper_arg_2 = ((MR_Box) (ll_backend__rtti_out__conv0_HeadVar__2_2));
#line 1738 "rtti_out.m"
    return ll_backend__rtti_out__wrapper_arg_2;
#line 1738 "rtti_out.m"
  }
#line 1738 "rtti_out.m"
}

#line 69 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(
#line 69 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Data_4)
#line 69 "rtti_out.m"
{
#line 1713 "rtti_out.m"
  {
#line 1713 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1713 "rtti_out.m"
#line 1713 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__Data_4)) {
#line 1713 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1713 "rtti_out.m"
      case (MR_Integer) 0:
#line 1713 "rtti_out.m"
        {
#line 1713 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorData_6 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__Data_4), (MR_Integer) 0);
#line 1713 "rtti_out.m"
          MR_Word ll_backend__rtti_out__RttiTypeCtor_7;
#line 1713 "rtti_out.m"
          MR_Word ll_backend__rtti_out__ModuleName_8;
#line 1713 "rtti_out.m"
          MR_String ll_backend__rtti_out__TypeName_9;
#line 1713 "rtti_out.m"
          MR_Integer ll_backend__rtti_out__Arity_10;
#line 1713 "rtti_out.m"
          MR_String ll_backend__rtti_out__ModuleNameString_11;
#line 1713 "rtti_out.m"
          MR_String ll_backend__rtti_out__UnderscoresModule_12;
#line 1713 "rtti_out.m"
          MR_String ll_backend__rtti_out__MangledTypeName_14;
#line 1713 "rtti_out.m"
          MR_Word ll_backend__rtti_out__V_70_70;
#line 1713 "rtti_out.m"
          MR_String ll_backend__rtti_out__Str_76;
#line 1713 "rtti_out.m"
          MR_String ll_backend__rtti_out__V_77_77;
#line 1721 "rtti_out.m"
          MR_String ll_backend__rtti_out__V_13_13;

#line 1714 "rtti_out.m"
          {
#line 1714 "rtti_out.m"
            ll_backend__rtti_out__RttiTypeCtor_7 = backend_libs__rtti__tcd_get_rtti_type_ctor_1_f_0(ll_backend__rtti_out__TypeCtorData_6);
          }
#line 1715 "rtti_out.m"
          {
#line 1715 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_TYPE_CTOR_INFO(\n\t\t");
          }
#line 1941 "rtti_out.m"
          {
#line 1941 "rtti_out.m"
            ll_backend__rtti_out__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_70_70, 0) = ((MR_Box) (ll_backend__rtti_out__RttiTypeCtor_7));
#line 1941 "rtti_out.m"
            MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 1941 "rtti_out.m"
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            ll_backend__rtti_out__V_77_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
#line 1933 "rtti_out.m"
          {
#line 1933 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_77_77);
          }
#line 1934 "rtti_out.m"
          {
#line 1934 "rtti_out.m"
            backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__V_70_70, &ll_backend__rtti_out__Str_76);
          }
#line 1935 "rtti_out.m"
          {
#line 1935 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_76);
          }
#line 1717 "rtti_out.m"
          {
#line 1717 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
          }
#line 1718 "rtti_out.m"
          ll_backend__rtti_out__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiTypeCtor_7, (MR_Integer) 0)));
#line 1718 "rtti_out.m"
          ll_backend__rtti_out__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiTypeCtor_7, (MR_Integer) 1)));
#line 1718 "rtti_out.m"
          ll_backend__rtti_out__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiTypeCtor_7, (MR_Integer) 2)));
#line 1719 "rtti_out.m"
          {
#line 1719 "rtti_out.m"
            ll_backend__rtti_out__ModuleNameString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__rtti_out__ModuleName_8);
          }
#line 1720 "rtti_out.m"
          {
#line 1720 "rtti_out.m"
            mercury__string__append_3_p_2(ll_backend__rtti_out__ModuleNameString_11, (MR_String) "__", &ll_backend__rtti_out__UnderscoresModule_12);
          }
#line 1721 "rtti_out.m"
          {
#line 1721 "rtti_out.m"
            ll_backend__rtti_out__succeeded = mercury__string__append_3_p_1(ll_backend__rtti_out__UnderscoresModule_12, &ll_backend__rtti_out__V_13_13, ll_backend__rtti_out__TypeName_9);
          }
#line 1723 "rtti_out.m"
          if (ll_backend__rtti_out__succeeded)
#line 1723 "rtti_out.m"
            {
#line 1723 "rtti_out.m"
            }
#line 1723 "rtti_out.m"
          else
#line 1724 "rtti_out.m"
            {
#line 1724 "rtti_out.m"
              mercury__io__write_string_3_p_0(ll_backend__rtti_out__UnderscoresModule_12);
            }
#line 1726 "rtti_out.m"
          {
#line 1726 "rtti_out.m"
            ll_backend__rtti_out__MangledTypeName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__rtti_out__TypeName_9);
          }
#line 1727 "rtti_out.m"
          {
#line 1727 "rtti_out.m"
            mercury__io__write_string_3_p_0(ll_backend__rtti_out__MangledTypeName_14);
          }
#line 1728 "rtti_out.m"
          {
#line 1728 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "_");
          }
#line 1729 "rtti_out.m"
          {
#line 1729 "rtti_out.m"
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__Arity_10);
          }
#line 1730 "rtti_out.m"
          {
#line 1730 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "_0);\n");
#line 1730 "rtti_out.m"
            return;
          }
#line 1713 "rtti_out.m"
        }
#line 1713 "rtti_out.m"
        break;
#line 1713 "rtti_out.m"
      case (MR_Integer) 1:
#line 1751 "rtti_out.m"
        {
#line 1751 "rtti_out.m"
        }
#line 1713 "rtti_out.m"
        break;
#line 1713 "rtti_out.m"
      case (MR_Integer) 2:
#line 1743 "rtti_out.m"
        {
#line 1744 "rtti_out.m"
          {
#line 1744 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
          }
#line 1745 "rtti_out.m"
          {
#line 1745 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "#error \"type_class_instance not yet supported without static code addresses\"\n");
          }
#line 1747 "rtti_out.m"
          {
#line 1747 "rtti_out.m"
            mercury__io__write_string_3_p_0((MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
#line 1747 "rtti_out.m"
            return;
          }
#line 1743 "rtti_out.m"
        }
#line 1713 "rtti_out.m"
        break;
#line 1713 "rtti_out.m"
      case (MR_Integer) 3:
#line 1713 "rtti_out.m"
#line 1713 "rtti_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 0)))) {
#line 1713 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1713 "rtti_out.m"
          case (MR_Integer) 0:
#line 1749 "rtti_out.m"
            {
#line 1749 "rtti_out.m"
            }
#line 1713 "rtti_out.m"
            break;
#line 1713 "rtti_out.m"
          case (MR_Integer) 1:
#line 1750 "rtti_out.m"
            {
#line 1750 "rtti_out.m"
            }
#line 1713 "rtti_out.m"
            break;
#line 1713 "rtti_out.m"
          case (MR_Integer) 2:
#line 1733 "rtti_out.m"
            {
#line 1733 "rtti_out.m"
              MR_Word ll_backend__rtti_out__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 1)));
#line 1733 "rtti_out.m"
              MR_String ll_backend__rtti_out__ClassArity_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 3)));
#line 1733 "rtti_out.m"
              MR_Word ll_backend__rtti_out__Methods_23;
#line 1733 "rtti_out.m"
              MR_Word ll_backend__rtti_out__CodeAddrs_25;
#line 1733 "rtti_out.m"
              MR_Word ll_backend__rtti_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 4)));
#line 1732 "rtti_out.m"
              MR_Word ll_backend__rtti_out___ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__Data_4, (MR_Integer) 2)));
#line 1733 "rtti_out.m"
              MR_Integer ll_backend__rtti_out___N1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 0)));
#line 1733 "rtti_out.m"
              MR_Integer ll_backend__rtti_out___N2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 1)));
#line 1733 "rtti_out.m"
              MR_Integer ll_backend__rtti_out___N3_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 2)));
#line 1733 "rtti_out.m"
              MR_Integer ll_backend__rtti_out___N4_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 3)));
#line 1733 "rtti_out.m"
              MR_Integer ll_backend__rtti_out___N5_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 4)));

#line 1733 "rtti_out.m"
              ll_backend__rtti_out__Methods_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_40_40, (MR_Integer) 5)));
#line 1734 "rtti_out.m"
              {
#line 1734 "rtti_out.m"
                mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_STATIC_CODE_ADDRESSES\n");
              }
#line 1738 "rtti_out.m"
              {
#line 1738 "rtti_out.m"
                ll_backend__rtti_out__CodeAddrs_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, (MR_Word) &ll_backend__rtti_out_scalar_common_2[4], ll_backend__rtti_out__Methods_23);
              }
#line 1739 "rtti_out.m"
              {
#line 1739 "rtti_out.m"
                ll_backend__rtti_out__output_init_method_pointers_6_p_0((MR_Integer) 5, ll_backend__rtti_out__CodeAddrs_25, ll_backend__rtti_out__TCName_15, ll_backend__rtti_out__ClassArity_17);
              }
#line 1741 "rtti_out.m"
              {
#line 1741 "rtti_out.m"
                mercury__io__write_string_3_p_0((MR_String) "#endif /* MR_STATIC_CODE_ADDRESSES */\n");
#line 1741 "rtti_out.m"
                return;
              }
#line 1733 "rtti_out.m"
            }
#line 1713 "rtti_out.m"
            break;
#line 1713 "rtti_out.m"
        }
#line 1713 "rtti_out.m"
        break;
#line 1713 "rtti_out.m"
    }
#line 1713 "rtti_out.m"
  }
#line 69 "rtti_out.m"
}

#line 63 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_rtti_data_defn_6_p_0(
#line 63 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 63 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiDefn_8,
#line 63 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20,
#line 63 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21)
#line 63 "rtti_out.m"
{
#line 136 "rtti_out.m"
  {
#line 136 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 136 "rtti_out.m"
#line 136 "rtti_out.m"
    switch (MR_tag((MR_Word) ll_backend__rtti_out__RttiDefn_8)) {
#line 136 "rtti_out.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "rtti_out.m"
      case (MR_Integer) 0:
#line 142 "rtti_out.m"
        {
#line 142 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TypeCtorData_13 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__RttiDefn_8), (MR_Integer) 0);

#line 143 "rtti_out.m"
          {
#line 143 "rtti_out.m"
            ll_backend__rtti_out__output_type_ctor_data_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeCtorData_13, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 143 "rtti_out.m"
            return;
          }
#line 142 "rtti_out.m"
        }
#line 136 "rtti_out.m"
        break;
#line 136 "rtti_out.m"
      case (MR_Integer) 1:
#line 150 "rtti_out.m"
        {
#line 150 "rtti_out.m"
          MR_Word ll_backend__rtti_out__TCDecl_18 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__RttiDefn_8), (MR_Integer) 1);

#line 151 "rtti_out.m"
          {
#line 151 "rtti_out.m"
            ll_backend__rtti_out__output_type_class_decl_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCDecl_18, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 151 "rtti_out.m"
            return;
          }
#line 150 "rtti_out.m"
        }
#line 136 "rtti_out.m"
        break;
#line 136 "rtti_out.m"
      case (MR_Integer) 2:
#line 153 "rtti_out.m"
        {
#line 153 "rtti_out.m"
          MR_Word ll_backend__rtti_out__InstanceDecl_19 = (MR_Word) MR_body(((MR_Word) ll_backend__rtti_out__RttiDefn_8), (MR_Integer) 2);

#line 154 "rtti_out.m"
          {
#line 154 "rtti_out.m"
            ll_backend__rtti_out__output_type_class_instance_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__InstanceDecl_19, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 154 "rtti_out.m"
            return;
          }
#line 153 "rtti_out.m"
        }
#line 136 "rtti_out.m"
        break;
#line 136 "rtti_out.m"
      case (MR_Integer) 3:
#line 136 "rtti_out.m"
#line 136 "rtti_out.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 0)))) {
#line 136 "rtti_out.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "rtti_out.m"
          case (MR_Integer) 0:
#line 136 "rtti_out.m"
            {
#line 136 "rtti_out.m"
              MR_Word ll_backend__rtti_out__TypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 1)));

#line 137 "rtti_out.m"
              {
#line 137 "rtti_out.m"
                ll_backend__rtti_out__output_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TypeInfo_11, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 137 "rtti_out.m"
                return;
              }
#line 136 "rtti_out.m"
            }
#line 136 "rtti_out.m"
            break;
#line 136 "rtti_out.m"
          case (MR_Integer) 1:
#line 139 "rtti_out.m"
            {
#line 139 "rtti_out.m"
              MR_Word ll_backend__rtti_out__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 1)));

#line 140 "rtti_out.m"
              {
#line 140 "rtti_out.m"
                ll_backend__rtti_out__output_pseudo_type_info_defn_6_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__PseudoTypeInfo_12, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 140 "rtti_out.m"
                return;
              }
#line 139 "rtti_out.m"
            }
#line 136 "rtti_out.m"
            break;
#line 136 "rtti_out.m"
          case (MR_Integer) 2:
#line 146 "rtti_out.m"
            {
#line 146 "rtti_out.m"
              MR_Word ll_backend__rtti_out__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 1)));
#line 146 "rtti_out.m"
              MR_Word ll_backend__rtti_out__InstanceModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 2)));
#line 146 "rtti_out.m"
              MR_String ll_backend__rtti_out__InstanceString_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 3)));
#line 146 "rtti_out.m"
              MR_Word ll_backend__rtti_out__BaseTypeClassInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiDefn_8, (MR_Integer) 4)));

#line 147 "rtti_out.m"
              {
#line 147 "rtti_out.m"
                ll_backend__rtti_out__output_base_typeclass_info_defn_9_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__TCName_14, ll_backend__rtti_out__InstanceModuleName_15, ll_backend__rtti_out__InstanceString_16, ll_backend__rtti_out__BaseTypeClassInfo_17, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_21);
#line 147 "rtti_out.m"
                return;
              }
#line 146 "rtti_out.m"
            }
#line 136 "rtti_out.m"
            break;
#line 136 "rtti_out.m"
        }
#line 136 "rtti_out.m"
        break;
#line 136 "rtti_out.m"
    }
#line 136 "rtti_out.m"
  }
#line 63 "rtti_out.m"
}

#line 58 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_6_p_0(
#line 58 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 58 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiData_8,
#line 58 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 58 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
#line 58 "rtti_out.m"
{
#line 1576 "rtti_out.m"
  {
#line 1576 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1572 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_17_17;
#line 1572 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__V_11_11;

#line 1572 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1572 "rtti_out.m"
      {
#line 1572 "rtti_out.m"
        ll_backend__rtti_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_8, (MR_Integer) 1)));
#line 1572 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_17_17)) == (MR_mktag((MR_Integer) 3)));
#line 1572 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1572 "rtti_out.m"
          ll_backend__rtti_out__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_17_17, (MR_Integer) 0)));
#line 1572 "rtti_out.m"
      }
#line 1576 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1575 "rtti_out.m"
      *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13;
#line 1576 "rtti_out.m"
    else
#line 1577 "rtti_out.m"
      {
#line 1577 "rtti_out.m"
        MR_Word ll_backend__rtti_out__RttiId_12;
#line 1577 "rtti_out.m"
        MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_29;
#line 1577 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_33_33;

#line 1577 "rtti_out.m"
        {
#line 1577 "rtti_out.m"
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_8, &ll_backend__rtti_out__RttiId_12);
        }
#line 1587 "rtti_out.m"
        {
#line 1587 "rtti_out.m"
          ll_backend__rtti_out__output_rtti_id_storage_type_name_7_p_0(ll_backend__rtti_out__Info_7, ll_backend__rtti_out__RttiId_12, (MR_Integer) 0, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13, &ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_29);
        }
#line 1588 "rtti_out.m"
        {
#line 1588 "rtti_out.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
#line 1589 "rtti_out.m"
        {
#line 1589 "rtti_out.m"
          ll_backend__rtti_out__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1589 "rtti_out.m"
          MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_33_33, 1) = ((MR_Box) (ll_backend__rtti_out__RttiId_12));
#line 1589 "rtti_out.m"
        }
#line 1589 "rtti_out.m"
        {
#line 1589 "rtti_out.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__rtti_out__V_33_33, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_16_29, ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14);
#line 1589 "rtti_out.m"
          return;
        }
#line 1577 "rtti_out.m"
      }
#line 1576 "rtti_out.m"
  }
#line 58 "rtti_out.m"
}

#line 1481 "rtti_out.m"
static void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1(
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__closure_arg,
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_1,
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_2,
#line 1481 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_3,
#line 1481 "rtti_out.m"
  MR_Box ll_backend__rtti_out__wrapper_arg_4,
#line 1481 "rtti_out.m"
  MR_Box * ll_backend__rtti_out__wrapper_arg_5)
#line 1481 "rtti_out.m"
{
#line 1481 "rtti_out.m"
  {
#line 1481 "rtti_out.m"
    MR_Box ll_backend__rtti_out__closure = ll_backend__rtti_out__closure_arg;
#line 1481 "rtti_out.m"
    MR_Word ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_15;

#line 1481 "rtti_out.m"
    {
#line 1481 "rtti_out.m"
      ll_backend__rtti_out__output_rtti_data_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__rtti_out__wrapper_arg_1), ((MR_Word) ll_backend__rtti_out__wrapper_arg_2), &ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_15);
    }
#line 1481 "rtti_out.m"
    *ll_backend__rtti_out__wrapper_arg_3 = ((MR_Box) (ll_backend__rtti_out__conv0_STATE_VARIABLE_DeclSet_15));
#line 1481 "rtti_out.m"
  }
#line 1481 "rtti_out.m"
}

#line 53 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(
#line 53 "rtti_out.m"
  MR_Word ll_backend__rtti_out__Info_7,
#line 53 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiDatas_8,
#line 53 "rtti_out.m"
  MR_Word ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13,
#line 53 "rtti_out.m"
  MR_Word * ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14)
#line 53 "rtti_out.m"
{
#line 1478 "rtti_out.m"
  {
#line 1478 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;
#line 1478 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__rtti_out__ll_backend__rtti_out__type_ctor_info_data_group_0;
#line 1478 "rtti_out.m"
    MR_Word ll_backend__rtti_out__TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 1478 "rtti_out.m"
    MR_Word ll_backend__rtti_out__GroupMap_11;
#line 1478 "rtti_out.m"
    MR_Word ll_backend__rtti_out__GroupList_12;
#line 1478 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_17_17;
#line 1478 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_18_18;
#line 1481 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14;
#line 1481 "rtti_out.m"
    MR_Box ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_16;

#line 1479 "rtti_out.m"
    {
#line 1479 "rtti_out.m"
      ll_backend__rtti_out__V_17_17 = mercury__multi_map__init_0_f_0(ll_backend__rtti_out__TypeCtorInfo_21_21, ll_backend__rtti_out__TypeCtorInfo_22_22);
    }
#line 1479 "rtti_out.m"
    {
#line 1479 "rtti_out.m"
      ll_backend__rtti_out__classify_rtti_datas_to_decl_3_p_0(ll_backend__rtti_out__RttiDatas_8, ll_backend__rtti_out__V_17_17, &ll_backend__rtti_out__GroupMap_11);
    }
#line 1480 "rtti_out.m"
    {
#line 1480 "rtti_out.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__rtti_out__TypeCtorInfo_21_21, ll_backend__rtti_out__TypeCtorInfo_22_22, ll_backend__rtti_out__GroupMap_11, &ll_backend__rtti_out__GroupList_12);
    }
#line 1481 "rtti_out.m"
    {
#line 1481 "rtti_out.m"
      ll_backend__rtti_out__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 0) = ((MR_Box) (&ll_backend__rtti_out_scalar_common_3[0]));
#line 1481 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 1) = ((MR_Box) (ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0_1));
#line 1481 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1481 "rtti_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__rtti_out__V_18_18, 3) = ((MR_Box) (ll_backend__rtti_out__Info_7));
#line 1481 "rtti_out.m"
    }
#line 1481 "rtti_out.m"
    {
#line 1481 "rtti_out.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__rtti_out_scalar_common_2[0], (MR_Word) &ll_backend__rtti_out_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__rtti_out__V_18_18, ll_backend__rtti_out__GroupList_12, ((MR_Box) (ll_backend__rtti_out__STATE_VARIABLE_DeclSet_0_13)), &ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__rtti_out__conv1_STATE_VARIABLE_IO_16);
    }
#line 1481 "rtti_out.m"
    *ll_backend__rtti_out__STATE_VARIABLE_DeclSet_14 = ((MR_Word) ll_backend__rtti_out__conv2_STATE_VARIABLE_DeclSet_14);
#line 1478 "rtti_out.m"
  }
#line 53 "rtti_out.m"
}

#line 49 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(
#line 49 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiData_4)
#line 49 "rtti_out.m"
{
#line 1894 "rtti_out.m"
  {
#line 1894 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__RttiData_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1894 "rtti_out.m"
    MR_Integer ll_backend__rtti_out__VarNum_6;
#line 1891 "rtti_out.m"
    MR_Word ll_backend__rtti_out__V_10_10;

#line 1891 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1891 "rtti_out.m"
      {
#line 1891 "rtti_out.m"
        ll_backend__rtti_out__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__RttiData_4, (MR_Integer) 1)));
#line 1891 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_10_10)) == (MR_mktag((MR_Integer) 3)));
#line 1891 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1891 "rtti_out.m"
          ll_backend__rtti_out__VarNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_10_10, (MR_Integer) 0)));
#line 1891 "rtti_out.m"
      }
#line 1894 "rtti_out.m"
    if (ll_backend__rtti_out__succeeded)
#line 1893 "rtti_out.m"
      {
#line 1893 "rtti_out.m"
        mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_6);
#line 1893 "rtti_out.m"
        return;
      }
#line 1894 "rtti_out.m"
    else
#line 1895 "rtti_out.m"
      {
#line 1895 "rtti_out.m"
        MR_Word ll_backend__rtti_out__RttiId_7;
#line 1912 "rtti_out.m"
        MR_Integer ll_backend__rtti_out__VarNum_18;
#line 1910 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_20_20;
#line 1910 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_21_21;
#line 1910 "rtti_out.m"
        MR_Word ll_backend__rtti_out__V_17_17;

#line 1895 "rtti_out.m"
        {
#line 1895 "rtti_out.m"
          backend_libs__rtti__rtti_data_to_id_2_p_0(ll_backend__rtti_out__RttiData_4, &ll_backend__rtti_out__RttiId_7);
        }
#line 1910 "rtti_out.m"
        ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__RttiId_7)) == (MR_mktag((MR_Integer) 0)));
#line 1910 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
          {
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_7, (MR_Integer) 0)));
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__rtti_out__RttiId_7, (MR_Integer) 1)));
#line 1910 "rtti_out.m"
            ll_backend__rtti_out__succeeded = ((((MR_tag((MR_Word) ll_backend__rtti_out__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 1910 "rtti_out.m"
            if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
              {
#line 1910 "rtti_out.m"
                ll_backend__rtti_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_20_20, (MR_Integer) 1)));
#line 1910 "rtti_out.m"
                ll_backend__rtti_out__succeeded = ((MR_tag((MR_Word) ll_backend__rtti_out__V_21_21)) == (MR_mktag((MR_Integer) 3)));
#line 1910 "rtti_out.m"
                if (ll_backend__rtti_out__succeeded)
#line 1910 "rtti_out.m"
                  ll_backend__rtti_out__VarNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__rtti_out__V_21_21, (MR_Integer) 0)));
#line 1910 "rtti_out.m"
              }
#line 1910 "rtti_out.m"
          }
#line 1912 "rtti_out.m"
        if (ll_backend__rtti_out__succeeded)
#line 1911 "rtti_out.m"
          {
#line 1911 "rtti_out.m"
            mercury__io__write_int_3_p_0(ll_backend__rtti_out__VarNum_18);
#line 1911 "rtti_out.m"
            return;
          }
#line 1912 "rtti_out.m"
        else
#line 1915 "rtti_out.m"
          {
#line 1915 "rtti_out.m"
            MR_Word ll_backend__rtti_out__IsArray_19;

#line 1915 "rtti_out.m"
            {
#line 1915 "rtti_out.m"
              ll_backend__rtti_out__IsArray_19 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(ll_backend__rtti_out__RttiId_7);
            }
#line 1919 "rtti_out.m"
#line 1919 "rtti_out.m"
            switch (ll_backend__rtti_out__IsArray_19) {
#line 1919 "rtti_out.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1919 "rtti_out.m"
              case (MR_Integer) 0:
#line 1932 "rtti_out.m"
                {
#line 1932 "rtti_out.m"
                  MR_String ll_backend__rtti_out__Str_31;
#line 1932 "rtti_out.m"
                  MR_String ll_backend__rtti_out__V_32_32;

#line 1933 "rtti_out.m"
                  {
#line 1933 "rtti_out.m"
                    ll_backend__rtti_out__V_32_32 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
                  }
#line 1933 "rtti_out.m"
                  {
#line 1933 "rtti_out.m"
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_32_32);
                  }
#line 1934 "rtti_out.m"
                  {
#line 1934 "rtti_out.m"
                    backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_7, &ll_backend__rtti_out__Str_31);
                  }
#line 1935 "rtti_out.m"
                  {
#line 1935 "rtti_out.m"
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_31);
#line 1935 "rtti_out.m"
                    return;
                  }
#line 1932 "rtti_out.m"
                }
#line 1919 "rtti_out.m"
                break;
#line 1919 "rtti_out.m"
              case (MR_Integer) 1:
#line 1920 "rtti_out.m"
                {
#line 1920 "rtti_out.m"
                  MR_String ll_backend__rtti_out__Str_39;
#line 1920 "rtti_out.m"
                  MR_String ll_backend__rtti_out__V_40_40;

#line 1921 "rtti_out.m"
                  {
#line 1921 "rtti_out.m"
                    mercury__io__write_string_3_p_0((MR_String) "&");
                  }
#line 1933 "rtti_out.m"
                  {
#line 1933 "rtti_out.m"
                    ll_backend__rtti_out__V_40_40 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
                  }
#line 1933 "rtti_out.m"
                  {
#line 1933 "rtti_out.m"
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__V_40_40);
                  }
#line 1934 "rtti_out.m"
                  {
#line 1934 "rtti_out.m"
                    backend_libs__rtti__id_to_c_identifier_2_p_0(ll_backend__rtti_out__RttiId_7, &ll_backend__rtti_out__Str_39);
                  }
#line 1935 "rtti_out.m"
                  {
#line 1935 "rtti_out.m"
                    mercury__io__write_string_3_p_0(ll_backend__rtti_out__Str_39);
#line 1935 "rtti_out.m"
                    return;
                  }
#line 1920 "rtti_out.m"
                }
#line 1919 "rtti_out.m"
                break;
#line 1919 "rtti_out.m"
            }
#line 1915 "rtti_out.m"
          }
#line 1895 "rtti_out.m"
      }
#line 1894 "rtti_out.m"
  }
#line 49 "rtti_out.m"
}

#line 43 "rtti_out.m"
void MR_CALL 
ll_backend__rtti_out__output_cast_addr_of_rtti_data_4_p_0(
#line 43 "rtti_out.m"
  MR_String ll_backend__rtti_out__Cast_5,
#line 43 "rtti_out.m"
  MR_Word ll_backend__rtti_out__RttiData_6)
#line 43 "rtti_out.m"
{
#line 1886 "rtti_out.m"
  {
#line 1886 "rtti_out.m"
    MR_bool ll_backend__rtti_out__succeeded;

#line 1887 "rtti_out.m"
    {
#line 1887 "rtti_out.m"
      mercury__io__write_string_3_p_0(ll_backend__rtti_out__Cast_5);
    }
#line 1888 "rtti_out.m"
    {
#line 1888 "rtti_out.m"
      ll_backend__rtti_out__output_addr_of_rtti_data_3_p_0(ll_backend__rtti_out__RttiData_6);
#line 1888 "rtti_out.m"
      return;
    }
#line 1886 "rtti_out.m"
  }
#line 43 "rtti_out.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.rtti_out. */
