/*
** Automatically generated from `coverage_profiling.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module ll_backend.coverage_profiling. */
/* :- implementation. */

/*
INIT mercury__ll_backend__coverage_profiling__init
ENDINIT
*/

#include "ll_backend.coverage_profiling.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.deep_profiling.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0;

#line 148 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1;

#line 151 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0[2];

#line 154 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0[2];

#line 157 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0[2];

#line 160 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0;

#line 163 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1;

#line 166 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0[2];

#line 169 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0[2];

#line 172 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0[2];

#line 175 "ll_backend.coverage_profiling.c"
static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0[9];

#line 178 "ll_backend.coverage_profiling.c"
static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0[9];

#line 181 "ll_backend.coverage_profiling.c"
static const MR_DuArgLocn ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0[9];

#line 184 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0;

#line 187 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[1];

#line 190 "ll_backend.coverage_profiling.c"
static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[1];

#line 193 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0[1];

#line 196 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0[1];

#line 199 "ll_backend.coverage_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

#line 202 "ll_backend.coverage_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

#line 205 "ll_backend.coverage_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 208 "ll_backend.coverage_profiling.c"
static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0[8];

#line 211 "ll_backend.coverage_profiling.c"
static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0[8];

#line 214 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0;

#line 217 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[1];

#line 220 "ll_backend.coverage_profiling.c"
static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[1];

#line 223 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0[1];

#line 226 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0[1];

#line 229 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001(
#line 232 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 234 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

#line 237 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
#line 240 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 242 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 244 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

#line 247 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
#line 250 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 252 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

#line 255 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
#line 258 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 260 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 262 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

#line 265 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
#line 268 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 270 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

#line 273 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
#line 276 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 278 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 280 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

#line 283 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
#line 286 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 288 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2);

#line 291 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
#line 294 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 296 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 298 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3);

#line 97 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
#line 97 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

#line 97 "coverage_profiling.m"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

#line 91 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
#line 91 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

#line 91 "coverage_profiling.m"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

#line 769 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
#line 769 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3);

#line 769 "coverage_profiling.m"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2);

#line 1361 "coverage_profiling.m"
static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
#line 1361 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__GoalInfo_3);

#line 1245 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
#line 1245 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageDataType_4,
#line 1245 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__ForeignProcAttrs_5,
#line 1245 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__ForeignProcImpl_6);

#line 1236 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
#line 1236 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageInfo_3,
#line 1236 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__ProcStaticConsId_4);

#line 1123 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
#line 1123 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
#line 1123 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoveragePointInfo_7,
#line 1123 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goals_8,
#line 1123 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38,
#line 1123 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_39);

#line 1107 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_7,
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPInfo_8,
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15,
#line 1107 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Goal_16,
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_17,
#line 1107 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_18);

#line 1081 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
#line 1081 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
#line 1081 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 1081 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
#line 1081 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 1081 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5);

#line 1059 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(
#line 1059 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
#line 1059 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 1059 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
#line 1059 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 1059 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
#line 1059 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6);

#line 1040 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_8,
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal0_9,
#line 1040 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goal_10,
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__TrivialAcc_11,
#line 1040 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Trivial_12,
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterAcc_13,
#line 1040 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_14);

#line 938 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1(
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__closure_arg,
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 938 "coverage_profiling.m"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_2,
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3,
#line 938 "coverage_profiling.m"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_4,
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_5,
#line 938 "coverage_profiling.m"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_6);

#line 874 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
#line 874 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
#line 874 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal0_7,
#line 874 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goal_8,
#line 874 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9,
#line 874 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Info_10);

#line 818 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__has_port_counts_after_4_p_0(
#line 818 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal_5,
#line 818 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PCDirect_6,
#line 818 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PCBefore_7,
#line 818 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__PC_8);

#line 799 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(
#line 799 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__A_4,
#line 799 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__B_5,
#line 799 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_6);

#line 786 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__goal_trivial_and_3_p_0(
#line 786 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__A_4,
#line 786 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__B_5,
#line 786 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Trivial_6);

#line 631 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_12,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ITEExistVars_13,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Cond0_14,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Then0_15,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Else0_16,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__GoalExpr_17,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeITEKnown_18,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_19,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_55,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_56,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_21);

#line 539 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__SwitchCanFail_2,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_10,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__11_11);

#line 517 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_10,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CanFail_11,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Cases0_12,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Cases_13,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_14,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__CoverageAfterSwitchKnown_15,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_17);

#line 460 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown0_2,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_8,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__9_9);

#line 426 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_9,
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Disjuncts0_12,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Disjuncts_13,
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_15);

#line 397 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ConjType_1,
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__4_4,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5,
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_7,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__8_8);

#line 372 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(
#line 372 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Detism_4,
#line 372 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6,
#line 372 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7);

#line 186 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
#line 186 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal0_8,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goal_9,
#line 186 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
#line 186 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_91,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_13);


static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_1[3][3];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_2[8][2];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_3[4][1];

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10];




static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_2[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__coverage_profiling_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__coverage_profiling_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "CPIndex")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[1]))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "ProcLayout")),
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[2]))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[4])))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_2[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__coverage_profiling_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0))
  },
};



#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 809 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0 = {
  (MR_String) "coverage_before_known",
  (MR_Integer) 0
};

#line 815 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1 = {
  (MR_String) "coverage_before_unknown",
  (MR_Integer) 1
};

#line 821 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1
};

#line 827 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1
};

#line 833 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 839 "ll_backend.coverage_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_before_known",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0
};

#line 856 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0 = {
  (MR_String) "static_coverage_data",
  (MR_Integer) 0
};

#line 862 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1 = {
  (MR_String) "dynamic_coverage_data",
  (MR_Integer) 1
};

#line 868 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1
};

#line 874 "ll_backend.coverage_profiling.c"
static const MR_EnumFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0[2] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1,
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0
};

#line 880 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 886 "ll_backend.coverage_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_data_type",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0
};

#line 903 "ll_backend.coverage_profiling.c"
static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0[9] = {
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 916 "ll_backend.coverage_profiling.c"
static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0[9] = {
  (MR_String) "cpo_dynamic_coverage",
  (MR_String) "cpo_use_calls",
  (MR_String) "cpo_coverage_after_goal",
  (MR_String) "cpo_branch_ite",
  (MR_String) "cpo_branch_switch",
  (MR_String) "cpo_branch_disj",
  (MR_String) "cpo_use_portcounts",
  (MR_String) "cpo_use_trivial",
  (MR_String) "cpo_run_first_pass"
};

#line 929 "ll_backend.coverage_profiling.c"
static const MR_DuArgLocn ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0[9] = {
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
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  }
};

#line 978 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0 = {
  (MR_String) "coverage_profiling_options",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_locns_coverage_profiling_options_0_0,
  NULL
};

#line 993 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0
};

#line 998 "ll_backend.coverage_profiling.c"
static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0
  }
};

#line 1007 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0
};

#line 1012 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0[1] = {
  (MR_Integer) 0
};

#line 1017 "ll_backend.coverage_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "coverage_profiling_options",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0
};

#line 1034 "ll_backend.coverage_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
  }
};

#line 1043 "ll_backend.coverage_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
  }
};

#line 1051 "ll_backend.coverage_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1060 "ll_backend.coverage_profiling.c"
static const MR_PseudoTypeInfo ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0[8] = {
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0,
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0,
  (MR_PseudoTypeInfo) &ll_backend__coverage_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
};

#line 1072 "ll_backend.coverage_profiling.c"
static const MR_ConstString ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0[8] = {
  (MR_String) "ci_coverage_points",
  (MR_String) "ci_cp_index_counter",
  (MR_String) "ci_var_info",
  (MR_String) "ci_module_info",
  (MR_String) "ci_pred_proc_id",
  (MR_String) "ci_maybe_rec_info",
  (MR_String) "ci_coverage_profiling_opts",
  (MR_String) "ci_containing_goal_map"
};

#line 1084 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDesc ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0 = {
  (MR_String) "proc_coverage_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0,
  NULL,
  NULL
};

#line 1099 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0
};

#line 1104 "ll_backend.coverage_profiling.c"
static const MR_DuPtagLayout ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0
  }
};

#line 1113 "ll_backend.coverage_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0[1] = {
  &ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0
};

#line 1118 "ll_backend.coverage_profiling.c"
static const MR_Integer ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0[1] = {
  (MR_Integer) 0
};

#line 1123 "ll_backend.coverage_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001)),
  ((MR_Box) (ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001)),
  (MR_String) "ll_backend.coverage_profiling",
  (MR_String) "proc_coverage_info",
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0 },
  {     ll_backend__coverage_profiling__ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__coverage_profiling__ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0
};

#line 1140 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0_10001(
#line 1143 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 1145 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
#line 1147 "ll_backend.coverage_profiling.c"
{
#line 1149 "ll_backend.coverage_profiling.c"
  {
#line 1151 "ll_backend.coverage_profiling.c"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 1154 "ll_backend.coverage_profiling.c"
    {
#line 1156 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    }
#line 1159 "ll_backend.coverage_profiling.c"
    return ll_backend__coverage_profiling__succeeded;
#line 1161 "ll_backend.coverage_profiling.c"
  }
#line 1163 "ll_backend.coverage_profiling.c"
}

#line 1166 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0_10001(
#line 1169 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 1171 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 1173 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
#line 1175 "ll_backend.coverage_profiling.c"
{
#line 1177 "ll_backend.coverage_profiling.c"
  {
#line 1179 "ll_backend.coverage_profiling.c"
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

#line 1182 "ll_backend.coverage_profiling.c"
    {
#line 1184 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    }
#line 1187 "ll_backend.coverage_profiling.c"
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
#line 1189 "ll_backend.coverage_profiling.c"
  }
#line 1191 "ll_backend.coverage_profiling.c"
}

#line 1194 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0_10001(
#line 1197 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 1199 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
#line 1201 "ll_backend.coverage_profiling.c"
{
#line 1203 "ll_backend.coverage_profiling.c"
  {
#line 1205 "ll_backend.coverage_profiling.c"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 1208 "ll_backend.coverage_profiling.c"
    {
#line 1210 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    }
#line 1213 "ll_backend.coverage_profiling.c"
    return ll_backend__coverage_profiling__succeeded;
#line 1215 "ll_backend.coverage_profiling.c"
  }
#line 1217 "ll_backend.coverage_profiling.c"
}

#line 1220 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0_10001(
#line 1223 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 1225 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 1227 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
#line 1229 "ll_backend.coverage_profiling.c"
{
#line 1231 "ll_backend.coverage_profiling.c"
  {
#line 1233 "ll_backend.coverage_profiling.c"
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

#line 1236 "ll_backend.coverage_profiling.c"
    {
#line 1238 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    }
#line 1241 "ll_backend.coverage_profiling.c"
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
#line 1243 "ll_backend.coverage_profiling.c"
  }
#line 1245 "ll_backend.coverage_profiling.c"
}

#line 1248 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0_10001(
#line 1251 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 1253 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
#line 1255 "ll_backend.coverage_profiling.c"
{
#line 1257 "ll_backend.coverage_profiling.c"
  {
#line 1259 "ll_backend.coverage_profiling.c"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 1262 "ll_backend.coverage_profiling.c"
    {
#line 1264 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    }
#line 1267 "ll_backend.coverage_profiling.c"
    return ll_backend__coverage_profiling__succeeded;
#line 1269 "ll_backend.coverage_profiling.c"
  }
#line 1271 "ll_backend.coverage_profiling.c"
}

#line 1274 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0_10001(
#line 1277 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 1279 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 1281 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
#line 1283 "ll_backend.coverage_profiling.c"
{
#line 1285 "ll_backend.coverage_profiling.c"
  {
#line 1287 "ll_backend.coverage_profiling.c"
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

#line 1290 "ll_backend.coverage_profiling.c"
    {
#line 1292 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    }
#line 1295 "ll_backend.coverage_profiling.c"
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
#line 1297 "ll_backend.coverage_profiling.c"
  }
#line 1299 "ll_backend.coverage_profiling.c"
}

#line 1302 "ll_backend.coverage_profiling.c"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0_10001(
#line 1305 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 1307 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2)
#line 1309 "ll_backend.coverage_profiling.c"
{
#line 1311 "ll_backend.coverage_profiling.c"
  {
#line 1313 "ll_backend.coverage_profiling.c"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 1316 "ll_backend.coverage_profiling.c"
    {
#line 1318 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling__succeeded = ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2));
    }
#line 1321 "ll_backend.coverage_profiling.c"
    return ll_backend__coverage_profiling__succeeded;
#line 1323 "ll_backend.coverage_profiling.c"
  }
#line 1325 "ll_backend.coverage_profiling.c"
}

#line 1328 "ll_backend.coverage_profiling.c"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0_10001(
#line 1331 "ll_backend.coverage_profiling.c"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_1,
#line 1333 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_2,
#line 1335 "ll_backend.coverage_profiling.c"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3)
#line 1337 "ll_backend.coverage_profiling.c"
{
#line 1339 "ll_backend.coverage_profiling.c"
  {
#line 1341 "ll_backend.coverage_profiling.c"
    MR_Word ll_backend__coverage_profiling__conv0_HeadVar__1_1;

#line 1344 "ll_backend.coverage_profiling.c"
    {
#line 1346 "ll_backend.coverage_profiling.c"
      ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(&ll_backend__coverage_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_2), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3));
    }
#line 1349 "ll_backend.coverage_profiling.c"
    *ll_backend__coverage_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__coverage_profiling__conv0_HeadVar__1_1));
#line 1351 "ll_backend.coverage_profiling.c"
  }
#line 1353 "ll_backend.coverage_profiling.c"
}

#line 68 "coverage_profiling.m"
void MR_CALL 
ll_backend__coverage_profiling____Compare____proc_coverage_info_0_0(
#line 68 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 68 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 68 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
#line 68 "coverage_profiling.m"
{
#line 68 "coverage_profiling.m"
  {
#line 68 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 68 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastX_27 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
#line 68 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastY_28 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

#line 68 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_27 == ll_backend__coverage_profiling__CastY_28);
#line 68 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 1380 "ll_backend.coverage_profiling.c"
      *ll_backend__coverage_profiling__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "coverage_profiling.m"
    else
#line 68 "coverage_profiling.m"
      {
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 3)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 4)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 5)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 6)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 7)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 3)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 4)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 5)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 6)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 7)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_20_20;

#line 68 "coverage_profiling.m"
        {
#line 68 "coverage_profiling.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_1[0], &ll_backend__coverage_profiling__V_20_20, ((MR_Box) (ll_backend__coverage_profiling__V_4_4)), ((MR_Box) (ll_backend__coverage_profiling__V_12_12)));
        }
#line 1426 "ll_backend.coverage_profiling.c"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_20_20 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 68 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_20_20;
#line 68 "coverage_profiling.m"
        else
#line 68 "coverage_profiling.m"
          {
#line 68 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_21_21;

#line 68 "coverage_profiling.m"
            {
#line 68 "coverage_profiling.m"
              mercury__counter____Compare____counter_0_0(&ll_backend__coverage_profiling__V_21_21, ll_backend__coverage_profiling__V_5_5, ll_backend__coverage_profiling__V_13_13);
            }
#line 1446 "ll_backend.coverage_profiling.c"
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_21_21 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 68 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
              *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_21_21;
#line 68 "coverage_profiling.m"
            else
#line 68 "coverage_profiling.m"
              {
#line 68 "coverage_profiling.m"
                MR_Word ll_backend__coverage_profiling__V_22_22;

#line 68 "coverage_profiling.m"
                {
#line 68 "coverage_profiling.m"
                  hlds__vartypes____Compare____prog_var_set_types_0_0(&ll_backend__coverage_profiling__V_22_22, ll_backend__coverage_profiling__V_6_6, ll_backend__coverage_profiling__V_14_14);
                }
#line 1466 "ll_backend.coverage_profiling.c"
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_22_22 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 68 "coverage_profiling.m"
                if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                  *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_22_22;
#line 68 "coverage_profiling.m"
                else
#line 68 "coverage_profiling.m"
                  {
#line 68 "coverage_profiling.m"
                    MR_Word ll_backend__coverage_profiling__V_23_23;

#line 68 "coverage_profiling.m"
                    {
#line 68 "coverage_profiling.m"
                      hlds__hlds_module____Compare____module_info_0_0(&ll_backend__coverage_profiling__V_23_23, ll_backend__coverage_profiling__V_7_7, ll_backend__coverage_profiling__V_15_15);
                    }
#line 1486 "ll_backend.coverage_profiling.c"
                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_23_23 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 68 "coverage_profiling.m"
                    if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                      *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_23_23;
#line 68 "coverage_profiling.m"
                    else
#line 68 "coverage_profiling.m"
                      {
#line 68 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__V_24_24;

#line 68 "coverage_profiling.m"
                        {
#line 68 "coverage_profiling.m"
                          hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__coverage_profiling__V_24_24, ll_backend__coverage_profiling__V_8_8, ll_backend__coverage_profiling__V_16_16);
                        }
#line 1506 "ll_backend.coverage_profiling.c"
                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_24_24 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 68 "coverage_profiling.m"
                        if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                          *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_24_24;
#line 68 "coverage_profiling.m"
                        else
#line 68 "coverage_profiling.m"
                          {
#line 68 "coverage_profiling.m"
                            MR_Word ll_backend__coverage_profiling__V_25_25;

#line 68 "coverage_profiling.m"
                            {
#line 68 "coverage_profiling.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_2[0], &ll_backend__coverage_profiling__V_25_25, ((MR_Box) (ll_backend__coverage_profiling__V_9_9)), ((MR_Box) (ll_backend__coverage_profiling__V_17_17)));
                            }
#line 1526 "ll_backend.coverage_profiling.c"
                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_25_25 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 68 "coverage_profiling.m"
                            if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                              *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_25_25;
#line 68 "coverage_profiling.m"
                            else
#line 68 "coverage_profiling.m"
                              {
#line 68 "coverage_profiling.m"
                                MR_Word ll_backend__coverage_profiling__V_26_26;
#line 97 "coverage_profiling.m"
                                MR_Integer ll_backend__coverage_profiling__CastX_63 = (MR_Integer) ll_backend__coverage_profiling__V_10_10;
#line 97 "coverage_profiling.m"
                                MR_Integer ll_backend__coverage_profiling__CastY_64 = (MR_Integer) ll_backend__coverage_profiling__V_18_18;

#line 97 "coverage_profiling.m"
                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_63 == ll_backend__coverage_profiling__CastY_64);
#line 97 "coverage_profiling.m"
                                if (ll_backend__coverage_profiling__succeeded)
#line 1549 "ll_backend.coverage_profiling.c"
                                  {
#line 1551 "ll_backend.coverage_profiling.c"
                                    ll_backend__coverage_profiling__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 1555 "ll_backend.coverage_profiling.c"
                                    if (ll_backend__coverage_profiling__succeeded)
#line 1557 "ll_backend.coverage_profiling.c"
                                      {
#line 1559 "ll_backend.coverage_profiling.c"
                                        ll_backend__coverage_profiling__V_26_26 = (MR_Integer) 0;
#line 1561 "ll_backend.coverage_profiling.c"
                                        ll_backend__coverage_profiling__succeeded = MR_TRUE;
#line 1563 "ll_backend.coverage_profiling.c"
                                      }
#line 1565 "ll_backend.coverage_profiling.c"
                                  }
#line 97 "coverage_profiling.m"
                                else
#line 97 "coverage_profiling.m"
                                  {
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_55_55;
#line 97 "coverage_profiling.m"
                                    MR_Integer ll_backend__coverage_profiling__V_74_74 = (MR_Integer) ll_backend__coverage_profiling__V_37_37;
#line 97 "coverage_profiling.m"
                                    MR_Integer ll_backend__coverage_profiling__V_75_75 = (MR_Integer) ll_backend__coverage_profiling__V_46_46;

#line 97 "coverage_profiling.m"
                                    {
#line 97 "coverage_profiling.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_55_55, ll_backend__coverage_profiling__V_74_74, ll_backend__coverage_profiling__V_75_75);
                                    }
#line 1619 "ll_backend.coverage_profiling.c"
                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_55_55 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                      {
#line 97 "coverage_profiling.m"
                                        ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_55_55;
#line 1629 "ll_backend.coverage_profiling.c"
                                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                      }
#line 97 "coverage_profiling.m"
                                    else
#line 97 "coverage_profiling.m"
                                      {
#line 97 "coverage_profiling.m"
                                        MR_Word ll_backend__coverage_profiling__V_56_56;
#line 97 "coverage_profiling.m"
                                        MR_Integer ll_backend__coverage_profiling__V_76_76 = (MR_Integer) ll_backend__coverage_profiling__V_38_38;
#line 97 "coverage_profiling.m"
                                        MR_Integer ll_backend__coverage_profiling__V_77_77 = (MR_Integer) ll_backend__coverage_profiling__V_47_47;

#line 97 "coverage_profiling.m"
                                        {
#line 97 "coverage_profiling.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_56_56, ll_backend__coverage_profiling__V_76_76, ll_backend__coverage_profiling__V_77_77);
                                        }
#line 1651 "ll_backend.coverage_profiling.c"
                                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_56_56 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                          {
#line 97 "coverage_profiling.m"
                                            ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_56_56;
#line 1661 "ll_backend.coverage_profiling.c"
                                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                          }
#line 97 "coverage_profiling.m"
                                        else
#line 97 "coverage_profiling.m"
                                          {
#line 97 "coverage_profiling.m"
                                            MR_Word ll_backend__coverage_profiling__V_57_57;
#line 97 "coverage_profiling.m"
                                            MR_Integer ll_backend__coverage_profiling__V_78_78 = (MR_Integer) ll_backend__coverage_profiling__V_39_39;
#line 97 "coverage_profiling.m"
                                            MR_Integer ll_backend__coverage_profiling__V_79_79 = (MR_Integer) ll_backend__coverage_profiling__V_48_48;

#line 97 "coverage_profiling.m"
                                            {
#line 97 "coverage_profiling.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_57_57, ll_backend__coverage_profiling__V_78_78, ll_backend__coverage_profiling__V_79_79);
                                            }
#line 1683 "ll_backend.coverage_profiling.c"
                                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_57_57 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                              {
#line 97 "coverage_profiling.m"
                                                ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_57_57;
#line 1693 "ll_backend.coverage_profiling.c"
                                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                              }
#line 97 "coverage_profiling.m"
                                            else
#line 97 "coverage_profiling.m"
                                              {
#line 97 "coverage_profiling.m"
                                                MR_Word ll_backend__coverage_profiling__V_58_58;
#line 97 "coverage_profiling.m"
                                                MR_Integer ll_backend__coverage_profiling__V_80_80 = (MR_Integer) ll_backend__coverage_profiling__V_40_40;
#line 97 "coverage_profiling.m"
                                                MR_Integer ll_backend__coverage_profiling__V_81_81 = (MR_Integer) ll_backend__coverage_profiling__V_49_49;

#line 97 "coverage_profiling.m"
                                                {
#line 97 "coverage_profiling.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_58_58, ll_backend__coverage_profiling__V_80_80, ll_backend__coverage_profiling__V_81_81);
                                                }
#line 1715 "ll_backend.coverage_profiling.c"
                                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_58_58 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                  {
#line 97 "coverage_profiling.m"
                                                    ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_58_58;
#line 1725 "ll_backend.coverage_profiling.c"
                                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                  }
#line 97 "coverage_profiling.m"
                                                else
#line 97 "coverage_profiling.m"
                                                  {
#line 97 "coverage_profiling.m"
                                                    MR_Word ll_backend__coverage_profiling__V_59_59;
#line 97 "coverage_profiling.m"
                                                    MR_Integer ll_backend__coverage_profiling__V_82_82 = (MR_Integer) ll_backend__coverage_profiling__V_41_41;
#line 97 "coverage_profiling.m"
                                                    MR_Integer ll_backend__coverage_profiling__V_83_83 = (MR_Integer) ll_backend__coverage_profiling__V_50_50;

#line 97 "coverage_profiling.m"
                                                    {
#line 97 "coverage_profiling.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_59_59, ll_backend__coverage_profiling__V_82_82, ll_backend__coverage_profiling__V_83_83);
                                                    }
#line 1747 "ll_backend.coverage_profiling.c"
                                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_59_59 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                      {
#line 97 "coverage_profiling.m"
                                                        ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_59_59;
#line 1757 "ll_backend.coverage_profiling.c"
                                                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                      }
#line 97 "coverage_profiling.m"
                                                    else
#line 97 "coverage_profiling.m"
                                                      {
#line 97 "coverage_profiling.m"
                                                        MR_Word ll_backend__coverage_profiling__V_60_60;
#line 97 "coverage_profiling.m"
                                                        MR_Integer ll_backend__coverage_profiling__V_84_84 = (MR_Integer) ll_backend__coverage_profiling__V_42_42;
#line 97 "coverage_profiling.m"
                                                        MR_Integer ll_backend__coverage_profiling__V_85_85 = (MR_Integer) ll_backend__coverage_profiling__V_51_51;

#line 97 "coverage_profiling.m"
                                                        {
#line 97 "coverage_profiling.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_60_60, ll_backend__coverage_profiling__V_84_84, ll_backend__coverage_profiling__V_85_85);
                                                        }
#line 1779 "ll_backend.coverage_profiling.c"
                                                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_60_60 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                                        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                          {
#line 97 "coverage_profiling.m"
                                                            ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_60_60;
#line 1789 "ll_backend.coverage_profiling.c"
                                                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                          }
#line 97 "coverage_profiling.m"
                                                        else
#line 97 "coverage_profiling.m"
                                                          {
#line 97 "coverage_profiling.m"
                                                            MR_Word ll_backend__coverage_profiling__V_61_61;
#line 97 "coverage_profiling.m"
                                                            MR_Integer ll_backend__coverage_profiling__V_86_86 = (MR_Integer) ll_backend__coverage_profiling__V_43_43;
#line 97 "coverage_profiling.m"
                                                            MR_Integer ll_backend__coverage_profiling__V_87_87 = (MR_Integer) ll_backend__coverage_profiling__V_52_52;

#line 97 "coverage_profiling.m"
                                                            {
#line 97 "coverage_profiling.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_61_61, ll_backend__coverage_profiling__V_86_86, ll_backend__coverage_profiling__V_87_87);
                                                            }
#line 1811 "ll_backend.coverage_profiling.c"
                                                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_61_61 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                                            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                              {
#line 97 "coverage_profiling.m"
                                                                ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_61_61;
#line 1821 "ll_backend.coverage_profiling.c"
                                                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                              }
#line 97 "coverage_profiling.m"
                                                            else
#line 97 "coverage_profiling.m"
                                                              {
#line 97 "coverage_profiling.m"
                                                                MR_Word ll_backend__coverage_profiling__V_62_62;
#line 97 "coverage_profiling.m"
                                                                MR_Integer ll_backend__coverage_profiling__V_88_88 = (MR_Integer) ll_backend__coverage_profiling__V_44_44;
#line 97 "coverage_profiling.m"
                                                                MR_Integer ll_backend__coverage_profiling__V_89_89 = (MR_Integer) ll_backend__coverage_profiling__V_53_53;

#line 97 "coverage_profiling.m"
                                                                {
#line 97 "coverage_profiling.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_62_62, ll_backend__coverage_profiling__V_88_88, ll_backend__coverage_profiling__V_89_89);
                                                                }
#line 1843 "ll_backend.coverage_profiling.c"
                                                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_62_62 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                                                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                                  {
#line 97 "coverage_profiling.m"
                                                                    ll_backend__coverage_profiling__V_26_26 = ll_backend__coverage_profiling__V_62_62;
#line 1853 "ll_backend.coverage_profiling.c"
                                                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                                  }
#line 97 "coverage_profiling.m"
                                                                else
#line 97 "coverage_profiling.m"
                                                                  {
#line 97 "coverage_profiling.m"
                                                                    MR_Integer ll_backend__coverage_profiling__V_90_90 = (MR_Integer) ll_backend__coverage_profiling__V_45_45;
#line 97 "coverage_profiling.m"
                                                                    MR_Integer ll_backend__coverage_profiling__V_91_91 = (MR_Integer) ll_backend__coverage_profiling__V_54_54;

#line 97 "coverage_profiling.m"
                                                                    {
#line 97 "coverage_profiling.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_26_26, ll_backend__coverage_profiling__V_90_90, ll_backend__coverage_profiling__V_91_91);
                                                                    }
#line 1873 "ll_backend.coverage_profiling.c"
                                                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 68 "coverage_profiling.m"
                                                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                                                  }
#line 97 "coverage_profiling.m"
                                                              }
#line 97 "coverage_profiling.m"
                                                          }
#line 97 "coverage_profiling.m"
                                                      }
#line 97 "coverage_profiling.m"
                                                  }
#line 97 "coverage_profiling.m"
                                              }
#line 97 "coverage_profiling.m"
                                          }
#line 97 "coverage_profiling.m"
                                      }
#line 97 "coverage_profiling.m"
                                  }
#line 68 "coverage_profiling.m"
                                if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                                  *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_26_26;
#line 68 "coverage_profiling.m"
                                else
#line 68 "coverage_profiling.m"
                                  {
#line 68 "coverage_profiling.m"
                                    {
#line 68 "coverage_profiling.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_1[1], ll_backend__coverage_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__coverage_profiling__V_11_11)), ((MR_Box) (ll_backend__coverage_profiling__V_19_19)));
#line 68 "coverage_profiling.m"
                                      return;
                                    }
#line 68 "coverage_profiling.m"
                                  }
#line 68 "coverage_profiling.m"
                              }
#line 68 "coverage_profiling.m"
                          }
#line 68 "coverage_profiling.m"
                      }
#line 68 "coverage_profiling.m"
                  }
#line 68 "coverage_profiling.m"
              }
#line 68 "coverage_profiling.m"
          }
#line 68 "coverage_profiling.m"
      }
#line 68 "coverage_profiling.m"
  }
#line 68 "coverage_profiling.m"
}

#line 68 "coverage_profiling.m"
MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____proc_coverage_info_0_0(
#line 68 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
#line 68 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
#line 68 "coverage_profiling.m"
{
#line 68 "coverage_profiling.m"
  {
#line 68 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 68 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastX_19 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__1_1;
#line 68 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastY_20 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;

#line 68 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_19 == ll_backend__coverage_profiling__CastY_20);
#line 68 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = MR_TRUE;
#line 68 "coverage_profiling.m"
    else
#line 68 "coverage_profiling.m"
      {
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TypeInfo_26_26;
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TypeInfo_27_27;
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 3)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 4)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 5)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 6)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 7)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 3)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 4)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 5)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 6)));
#line 68 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 7)));
#line 97 "coverage_profiling.m"
        MR_Integer ll_backend__coverage_profiling__CastX_46;
#line 97 "coverage_profiling.m"
        MR_Integer ll_backend__coverage_profiling__CastY_47;

#line 2000 "ll_backend.coverage_profiling.c"
        {
#line 2002 "ll_backend.coverage_profiling.c"
          ll_backend__coverage_profiling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_1[0], ((MR_Box) (ll_backend__coverage_profiling__V_3_3)), ((MR_Box) (ll_backend__coverage_profiling__V_11_11)));
        }
#line 68 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
          {
#line 2009 "ll_backend.coverage_profiling.c"
            {
#line 2011 "ll_backend.coverage_profiling.c"
              ll_backend__coverage_profiling__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__coverage_profiling__V_4_4, ll_backend__coverage_profiling__V_12_12);
            }
#line 68 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
              {
#line 2018 "ll_backend.coverage_profiling.c"
                {
#line 2020 "ll_backend.coverage_profiling.c"
                  ll_backend__coverage_profiling__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(ll_backend__coverage_profiling__V_5_5, ll_backend__coverage_profiling__V_13_13);
                }
#line 68 "coverage_profiling.m"
                if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                  {
#line 2027 "ll_backend.coverage_profiling.c"
                    {
#line 2029 "ll_backend.coverage_profiling.c"
                      ll_backend__coverage_profiling__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__coverage_profiling__V_6_6, ll_backend__coverage_profiling__V_14_14);
                    }
#line 68 "coverage_profiling.m"
                    if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                      {
#line 2036 "ll_backend.coverage_profiling.c"
                        {
#line 2038 "ll_backend.coverage_profiling.c"
                          ll_backend__coverage_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__coverage_profiling__V_7_7, ll_backend__coverage_profiling__V_15_15);
                        }
#line 68 "coverage_profiling.m"
                        if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                          {
#line 2045 "ll_backend.coverage_profiling.c"
                            ll_backend__coverage_profiling__TypeInfo_26_26 = (MR_Word) &ll_backend__coverage_profiling_scalar_common_2[0];
#line 2047 "ll_backend.coverage_profiling.c"
                            {
#line 2049 "ll_backend.coverage_profiling.c"
                              ll_backend__coverage_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__coverage_profiling__TypeInfo_26_26, ((MR_Box) (ll_backend__coverage_profiling__V_8_8)), ((MR_Box) (ll_backend__coverage_profiling__V_16_16)));
                            }
#line 68 "coverage_profiling.m"
                            if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                              {
#line 97 "coverage_profiling.m"
                                ll_backend__coverage_profiling__CastX_46 = (MR_Integer) ll_backend__coverage_profiling__V_9_9;
#line 97 "coverage_profiling.m"
                                ll_backend__coverage_profiling__CastY_47 = (MR_Integer) ll_backend__coverage_profiling__V_17_17;
#line 97 "coverage_profiling.m"
                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_46 == ll_backend__coverage_profiling__CastY_47);
#line 97 "coverage_profiling.m"
                                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                  ll_backend__coverage_profiling__succeeded = MR_TRUE;
#line 97 "coverage_profiling.m"
                                else
#line 97 "coverage_profiling.m"
                                  {
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_9_9, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_17_17, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 2107 "ll_backend.coverage_profiling.c"
                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_28_28 == ll_backend__coverage_profiling__V_37_37);
#line 97 "coverage_profiling.m"
                                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                      {
#line 2113 "ll_backend.coverage_profiling.c"
                                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_29_29 == ll_backend__coverage_profiling__V_38_38);
#line 97 "coverage_profiling.m"
                                        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                          {
#line 2119 "ll_backend.coverage_profiling.c"
                                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_30_30 == ll_backend__coverage_profiling__V_39_39);
#line 97 "coverage_profiling.m"
                                            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                              {
#line 2125 "ll_backend.coverage_profiling.c"
                                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_31_31 == ll_backend__coverage_profiling__V_40_40);
#line 97 "coverage_profiling.m"
                                                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                  {
#line 2131 "ll_backend.coverage_profiling.c"
                                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_32_32 == ll_backend__coverage_profiling__V_41_41);
#line 97 "coverage_profiling.m"
                                                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                      {
#line 2137 "ll_backend.coverage_profiling.c"
                                                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_33_33 == ll_backend__coverage_profiling__V_42_42);
#line 97 "coverage_profiling.m"
                                                        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                          {
#line 2143 "ll_backend.coverage_profiling.c"
                                                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_34_34 == ll_backend__coverage_profiling__V_43_43);
#line 97 "coverage_profiling.m"
                                                            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                                              {
#line 2149 "ll_backend.coverage_profiling.c"
                                                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_35_35 == ll_backend__coverage_profiling__V_44_44);
#line 97 "coverage_profiling.m"
                                                                if (ll_backend__coverage_profiling__succeeded)
#line 2153 "ll_backend.coverage_profiling.c"
                                                                  ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_36_36 == ll_backend__coverage_profiling__V_45_45);
#line 97 "coverage_profiling.m"
                                                              }
#line 97 "coverage_profiling.m"
                                                          }
#line 97 "coverage_profiling.m"
                                                      }
#line 97 "coverage_profiling.m"
                                                  }
#line 97 "coverage_profiling.m"
                                              }
#line 97 "coverage_profiling.m"
                                          }
#line 97 "coverage_profiling.m"
                                      }
#line 97 "coverage_profiling.m"
                                  }
#line 68 "coverage_profiling.m"
                                if (ll_backend__coverage_profiling__succeeded)
#line 68 "coverage_profiling.m"
                                  {
#line 2175 "ll_backend.coverage_profiling.c"
                                    ll_backend__coverage_profiling__TypeInfo_27_27 = (MR_Word) &ll_backend__coverage_profiling_scalar_common_1[1];
#line 2177 "ll_backend.coverage_profiling.c"
                                    {
#line 2179 "ll_backend.coverage_profiling.c"
                                      return ll_backend__coverage_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__coverage_profiling__TypeInfo_27_27, ((MR_Box) (ll_backend__coverage_profiling__V_10_10)), ((MR_Box) (ll_backend__coverage_profiling__V_18_18)));
                                    }
#line 68 "coverage_profiling.m"
                                  }
#line 68 "coverage_profiling.m"
                              }
#line 68 "coverage_profiling.m"
                          }
#line 68 "coverage_profiling.m"
                      }
#line 68 "coverage_profiling.m"
                  }
#line 68 "coverage_profiling.m"
              }
#line 68 "coverage_profiling.m"
          }
#line 68 "coverage_profiling.m"
      }
#line 68 "coverage_profiling.m"
    return ll_backend__coverage_profiling__succeeded;
#line 68 "coverage_profiling.m"
  }
#line 68 "coverage_profiling.m"
}

#line 97 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_profiling_options_0_0(
#line 97 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
#line 97 "coverage_profiling.m"
{
#line 97 "coverage_profiling.m"
  {
#line 97 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 97 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastX_30 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
#line 97 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastY_31 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

#line 97 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_30 == ll_backend__coverage_profiling__CastY_31);
#line 97 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 2229 "ll_backend.coverage_profiling.c"
      *ll_backend__coverage_profiling__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "coverage_profiling.m"
    else
#line 97 "coverage_profiling.m"
      {
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_22_22;
#line 97 "coverage_profiling.m"
        MR_Integer ll_backend__coverage_profiling__V_41_41 = (MR_Integer) ll_backend__coverage_profiling__V_4_4;
#line 97 "coverage_profiling.m"
        MR_Integer ll_backend__coverage_profiling__V_42_42 = (MR_Integer) ll_backend__coverage_profiling__V_13_13;

#line 97 "coverage_profiling.m"
        {
#line 97 "coverage_profiling.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_22_22, ll_backend__coverage_profiling__V_41_41, ll_backend__coverage_profiling__V_42_42);
        }
#line 2283 "ll_backend.coverage_profiling.c"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_22_22 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_22_22;
#line 97 "coverage_profiling.m"
        else
#line 97 "coverage_profiling.m"
          {
#line 97 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_23_23;
#line 97 "coverage_profiling.m"
            MR_Integer ll_backend__coverage_profiling__V_43_43 = (MR_Integer) ll_backend__coverage_profiling__V_5_5;
#line 97 "coverage_profiling.m"
            MR_Integer ll_backend__coverage_profiling__V_44_44 = (MR_Integer) ll_backend__coverage_profiling__V_14_14;

#line 97 "coverage_profiling.m"
            {
#line 97 "coverage_profiling.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_23_23, ll_backend__coverage_profiling__V_43_43, ll_backend__coverage_profiling__V_44_44);
            }
#line 2307 "ll_backend.coverage_profiling.c"
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_23_23 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
              *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_23_23;
#line 97 "coverage_profiling.m"
            else
#line 97 "coverage_profiling.m"
              {
#line 97 "coverage_profiling.m"
                MR_Word ll_backend__coverage_profiling__V_24_24;
#line 97 "coverage_profiling.m"
                MR_Integer ll_backend__coverage_profiling__V_45_45 = (MR_Integer) ll_backend__coverage_profiling__V_6_6;
#line 97 "coverage_profiling.m"
                MR_Integer ll_backend__coverage_profiling__V_46_46 = (MR_Integer) ll_backend__coverage_profiling__V_15_15;

#line 97 "coverage_profiling.m"
                {
#line 97 "coverage_profiling.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_24_24, ll_backend__coverage_profiling__V_45_45, ll_backend__coverage_profiling__V_46_46);
                }
#line 2331 "ll_backend.coverage_profiling.c"
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_24_24 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                  *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_24_24;
#line 97 "coverage_profiling.m"
                else
#line 97 "coverage_profiling.m"
                  {
#line 97 "coverage_profiling.m"
                    MR_Word ll_backend__coverage_profiling__V_25_25;
#line 97 "coverage_profiling.m"
                    MR_Integer ll_backend__coverage_profiling__V_47_47 = (MR_Integer) ll_backend__coverage_profiling__V_7_7;
#line 97 "coverage_profiling.m"
                    MR_Integer ll_backend__coverage_profiling__V_48_48 = (MR_Integer) ll_backend__coverage_profiling__V_16_16;

#line 97 "coverage_profiling.m"
                    {
#line 97 "coverage_profiling.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_25_25, ll_backend__coverage_profiling__V_47_47, ll_backend__coverage_profiling__V_48_48);
                    }
#line 2355 "ll_backend.coverage_profiling.c"
                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_25_25 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                      *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_25_25;
#line 97 "coverage_profiling.m"
                    else
#line 97 "coverage_profiling.m"
                      {
#line 97 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__V_26_26;
#line 97 "coverage_profiling.m"
                        MR_Integer ll_backend__coverage_profiling__V_49_49 = (MR_Integer) ll_backend__coverage_profiling__V_8_8;
#line 97 "coverage_profiling.m"
                        MR_Integer ll_backend__coverage_profiling__V_50_50 = (MR_Integer) ll_backend__coverage_profiling__V_17_17;

#line 97 "coverage_profiling.m"
                        {
#line 97 "coverage_profiling.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_26_26, ll_backend__coverage_profiling__V_49_49, ll_backend__coverage_profiling__V_50_50);
                        }
#line 2379 "ll_backend.coverage_profiling.c"
                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_26_26 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                        ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                          *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_26_26;
#line 97 "coverage_profiling.m"
                        else
#line 97 "coverage_profiling.m"
                          {
#line 97 "coverage_profiling.m"
                            MR_Word ll_backend__coverage_profiling__V_27_27;
#line 97 "coverage_profiling.m"
                            MR_Integer ll_backend__coverage_profiling__V_51_51 = (MR_Integer) ll_backend__coverage_profiling__V_9_9;
#line 97 "coverage_profiling.m"
                            MR_Integer ll_backend__coverage_profiling__V_52_52 = (MR_Integer) ll_backend__coverage_profiling__V_18_18;

#line 97 "coverage_profiling.m"
                            {
#line 97 "coverage_profiling.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_27_27, ll_backend__coverage_profiling__V_51_51, ll_backend__coverage_profiling__V_52_52);
                            }
#line 2403 "ll_backend.coverage_profiling.c"
                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_27_27 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                            ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                              *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_27_27;
#line 97 "coverage_profiling.m"
                            else
#line 97 "coverage_profiling.m"
                              {
#line 97 "coverage_profiling.m"
                                MR_Word ll_backend__coverage_profiling__V_28_28;
#line 97 "coverage_profiling.m"
                                MR_Integer ll_backend__coverage_profiling__V_53_53 = (MR_Integer) ll_backend__coverage_profiling__V_10_10;
#line 97 "coverage_profiling.m"
                                MR_Integer ll_backend__coverage_profiling__V_54_54 = (MR_Integer) ll_backend__coverage_profiling__V_19_19;

#line 97 "coverage_profiling.m"
                                {
#line 97 "coverage_profiling.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_28_28, ll_backend__coverage_profiling__V_53_53, ll_backend__coverage_profiling__V_54_54);
                                }
#line 2427 "ll_backend.coverage_profiling.c"
                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_28_28 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                  *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_28_28;
#line 97 "coverage_profiling.m"
                                else
#line 97 "coverage_profiling.m"
                                  {
#line 97 "coverage_profiling.m"
                                    MR_Word ll_backend__coverage_profiling__V_29_29;
#line 97 "coverage_profiling.m"
                                    MR_Integer ll_backend__coverage_profiling__V_55_55 = (MR_Integer) ll_backend__coverage_profiling__V_11_11;
#line 97 "coverage_profiling.m"
                                    MR_Integer ll_backend__coverage_profiling__V_56_56 = (MR_Integer) ll_backend__coverage_profiling__V_20_20;

#line 97 "coverage_profiling.m"
                                    {
#line 97 "coverage_profiling.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__coverage_profiling__V_29_29, ll_backend__coverage_profiling__V_55_55, ll_backend__coverage_profiling__V_56_56);
                                    }
#line 2451 "ll_backend.coverage_profiling.c"
                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_29_29 == (MR_Integer) 0);
#line 97 "coverage_profiling.m"
                                    ll_backend__coverage_profiling__succeeded = !(ll_backend__coverage_profiling__succeeded);
#line 97 "coverage_profiling.m"
                                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                      *ll_backend__coverage_profiling__HeadVar__1_1 = ll_backend__coverage_profiling__V_29_29;
#line 97 "coverage_profiling.m"
                                    else
#line 97 "coverage_profiling.m"
                                      {
#line 97 "coverage_profiling.m"
                                        MR_Integer ll_backend__coverage_profiling__V_57_57 = (MR_Integer) ll_backend__coverage_profiling__V_12_12;
#line 97 "coverage_profiling.m"
                                        MR_Integer ll_backend__coverage_profiling__V_58_58 = (MR_Integer) ll_backend__coverage_profiling__V_21_21;

#line 97 "coverage_profiling.m"
                                        {
#line 97 "coverage_profiling.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__coverage_profiling__HeadVar__1_1, ll_backend__coverage_profiling__V_57_57, ll_backend__coverage_profiling__V_58_58);
#line 97 "coverage_profiling.m"
                                          return;
                                        }
#line 97 "coverage_profiling.m"
                                      }
#line 97 "coverage_profiling.m"
                                  }
#line 97 "coverage_profiling.m"
                              }
#line 97 "coverage_profiling.m"
                          }
#line 97 "coverage_profiling.m"
                      }
#line 97 "coverage_profiling.m"
                  }
#line 97 "coverage_profiling.m"
              }
#line 97 "coverage_profiling.m"
          }
#line 97 "coverage_profiling.m"
      }
#line 97 "coverage_profiling.m"
  }
#line 97 "coverage_profiling.m"
}

#line 97 "coverage_profiling.m"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_profiling_options_0_0(
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__1_1,
#line 97 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
#line 97 "coverage_profiling.m"
{
#line 97 "coverage_profiling.m"
  {
#line 97 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 97 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastX_21 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__1_1;
#line 97 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CastY_22 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;

#line 97 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CastX_21 == ll_backend__coverage_profiling__CastY_22);
#line 97 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = MR_TRUE;
#line 97 "coverage_profiling.m"
    else
#line 97 "coverage_profiling.m"
      {
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 97 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 2563 "ll_backend.coverage_profiling.c"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_3_3 == ll_backend__coverage_profiling__V_12_12);
#line 97 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
          {
#line 2569 "ll_backend.coverage_profiling.c"
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_4_4 == ll_backend__coverage_profiling__V_13_13);
#line 97 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
              {
#line 2575 "ll_backend.coverage_profiling.c"
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_5_5 == ll_backend__coverage_profiling__V_14_14);
#line 97 "coverage_profiling.m"
                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                  {
#line 2581 "ll_backend.coverage_profiling.c"
                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_6_6 == ll_backend__coverage_profiling__V_15_15);
#line 97 "coverage_profiling.m"
                    if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                      {
#line 2587 "ll_backend.coverage_profiling.c"
                        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_7_7 == ll_backend__coverage_profiling__V_16_16);
#line 97 "coverage_profiling.m"
                        if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                          {
#line 2593 "ll_backend.coverage_profiling.c"
                            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_8_8 == ll_backend__coverage_profiling__V_17_17);
#line 97 "coverage_profiling.m"
                            if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                              {
#line 2599 "ll_backend.coverage_profiling.c"
                                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_9_9 == ll_backend__coverage_profiling__V_18_18);
#line 97 "coverage_profiling.m"
                                if (ll_backend__coverage_profiling__succeeded)
#line 97 "coverage_profiling.m"
                                  {
#line 2605 "ll_backend.coverage_profiling.c"
                                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_10_10 == ll_backend__coverage_profiling__V_19_19);
#line 97 "coverage_profiling.m"
                                    if (ll_backend__coverage_profiling__succeeded)
#line 2609 "ll_backend.coverage_profiling.c"
                                      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_11_11 == ll_backend__coverage_profiling__V_20_20);
#line 97 "coverage_profiling.m"
                                  }
#line 97 "coverage_profiling.m"
                              }
#line 97 "coverage_profiling.m"
                          }
#line 97 "coverage_profiling.m"
                      }
#line 97 "coverage_profiling.m"
                  }
#line 97 "coverage_profiling.m"
              }
#line 97 "coverage_profiling.m"
          }
#line 97 "coverage_profiling.m"
      }
#line 97 "coverage_profiling.m"
    return ll_backend__coverage_profiling__succeeded;
#line 97 "coverage_profiling.m"
  }
#line 97 "coverage_profiling.m"
}

#line 91 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_data_type_0_0(
#line 91 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
#line 91 "coverage_profiling.m"
{
#line 91 "coverage_profiling.m"
  {
#line 91 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 91 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar1_4 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
#line 91 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar2_5 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

#line 91 "coverage_profiling.m"
    {
#line 91 "coverage_profiling.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__coverage_profiling__HeadVar__1_1, ll_backend__coverage_profiling__Cast_HeadVar1_4, ll_backend__coverage_profiling__Cast_HeadVar2_5);
#line 91 "coverage_profiling.m"
      return;
    }
#line 91 "coverage_profiling.m"
  }
#line 91 "coverage_profiling.m"
}

#line 91 "coverage_profiling.m"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_data_type_0_0(
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
#line 91 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
#line 91 "coverage_profiling.m"
{
#line 2675 "ll_backend.coverage_profiling.c"
  {
#line 2677 "ll_backend.coverage_profiling.c"
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__HeadVar__2_1 == ll_backend__coverage_profiling__HeadVar__2_2);

#line 2680 "ll_backend.coverage_profiling.c"
    return ll_backend__coverage_profiling__succeeded;
#line 2682 "ll_backend.coverage_profiling.c"
  }
#line 91 "coverage_profiling.m"
}

#line 769 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling____Compare____coverage_before_known_0_0(
#line 769 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__1_1,
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3)
#line 769 "coverage_profiling.m"
{
#line 769 "coverage_profiling.m"
  {
#line 769 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 769 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar1_4 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__2_2;
#line 769 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__Cast_HeadVar2_5 = (MR_Integer) ll_backend__coverage_profiling__HeadVar__3_3;

#line 769 "coverage_profiling.m"
    {
#line 769 "coverage_profiling.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__coverage_profiling__HeadVar__1_1, ll_backend__coverage_profiling__Cast_HeadVar1_4, ll_backend__coverage_profiling__Cast_HeadVar2_5);
#line 769 "coverage_profiling.m"
      return;
    }
#line 769 "coverage_profiling.m"
  }
#line 769 "coverage_profiling.m"
}

#line 769 "coverage_profiling.m"
static MR_bool MR_CALL 
ll_backend__coverage_profiling____Unify____coverage_before_known_0_0(
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_1,
#line 769 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2)
#line 769 "coverage_profiling.m"
{
#line 2728 "ll_backend.coverage_profiling.c"
  {
#line 2730 "ll_backend.coverage_profiling.c"
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__HeadVar__2_1 == ll_backend__coverage_profiling__HeadVar__2_2);

#line 2733 "ll_backend.coverage_profiling.c"
    return ll_backend__coverage_profiling__succeeded;
#line 2735 "ll_backend.coverage_profiling.c"
  }
#line 769 "coverage_profiling.m"
}

#line 1361 "coverage_profiling.m"
static MR_Word MR_CALL 
ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(
#line 1361 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__GoalInfo_3)
#line 1361 "coverage_profiling.m"
{
#line 1363 "coverage_profiling.m"
  {
#line 1363 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 1363 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__DPInfo_4;
#line 1363 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__MaybeDPInfo_5;

#line 1364 "coverage_profiling.m"
    {
#line 1364 "coverage_profiling.m"
      ll_backend__coverage_profiling__MaybeDPInfo_5 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(ll_backend__coverage_profiling__GoalInfo_3);
    }
#line 1367 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__MaybeDPInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1368 "coverage_profiling.m"
      {
#line 1369 "coverage_profiling.m"
        {
#line 1369 "coverage_profiling.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "function \140ll_backend.coverage_profiling.goal_info_get_dp_info\'/1", (MR_String) "MaybeDPInfo = no");
        }
#line 1368 "coverage_profiling.m"
      }
#line 1367 "coverage_profiling.m"
    else
#line 1366 "coverage_profiling.m"
      ll_backend__coverage_profiling__DPInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__MaybeDPInfo_5, (MR_Integer) 0)));
#line 1363 "coverage_profiling.m"
    return ll_backend__coverage_profiling__DPInfo_4;
#line 1363 "coverage_profiling.m"
  }
#line 1361 "coverage_profiling.m"
}

#line 1245 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(
#line 1245 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageDataType_4,
#line 1245 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__ForeignProcAttrs_5,
#line 1245 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__ForeignProcImpl_6)
#line 1245 "coverage_profiling.m"
{
#line 1248 "coverage_profiling.m"
  {
#line 1248 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 1248 "coverage_profiling.m"
    MR_String ll_backend__coverage_profiling__Code_7;
#line 1248 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_8_8;
#line 1248 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_11_11;
#line 1248 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_13_13;
#line 1248 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_15_15;
#line 1248 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_17_17;

#line 1256 "coverage_profiling.m"
    {
#line 1256 "coverage_profiling.m"
      ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_8_8 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 1257 "coverage_profiling.m"
    {
#line 1257 "coverage_profiling.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_8_8, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_11_11);
    }
#line 1258 "coverage_profiling.m"
    {
#line 1258 "coverage_profiling.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_11_11, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_13_13);
    }
#line 1259 "coverage_profiling.m"
    {
#line 1259 "coverage_profiling.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_13_13, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_15_15);
    }
#line 1260 "coverage_profiling.m"
    {
#line 1260 "coverage_profiling.m"
      parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_15_15, &ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_17_17);
    }
#line 1261 "coverage_profiling.m"
    {
#line 1261 "coverage_profiling.m"
      parse_tree__prog_data__set_may_throw_exception_3_p_0((MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_ForeignProcAttrs_17_17, ll_backend__coverage_profiling__ForeignProcAttrs_5);
    }
#line 1270 "coverage_profiling.m"
#line 1270 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__CoverageDataType_4) {
#line 1270 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1270 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 1309 "coverage_profiling.m"
        ll_backend__coverage_profiling__Code_7 = (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC\n    const MR_CallSiteDynamic *csd;\n    const MR_ProcDynamic *pd;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_P" "ROFILING_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        print" "f(\", CallSiteDynamic: 0x%x, CPIndex: %d\\n\",\n            MR_current_call_site_dynamic, CPIndex);\n    }\n  #endif\n\n    csd = MR_current_call_site_dynamic;\n\n    MR_" "deep_assert(NULL, NULL, NULL, csd != NULL);\n    pd = csd->MR_csd_callee_ptr;\n\n    MR_deep_assert(csd, NULL, NULL, pd != NULL);\n\n#ifdef MR_DEEP_CHECKS\n    /*\n   " " ** Check that CPIndex is within bounds.\n    */\n    {\n        const MR_ProcLayout *pl;\n        const MR_ProcStatic *ps;\n\n        pl = pd->MR_pd_proc_layout;\n   " "     MR_deep_assert(csd, NULL, NULL, pl != NULL);\n        ps = pl->MR_sle_proc_static;\n        MR_deep_assert(csd, pl, NULL, ps != NULL);\n        MR_deep_assert" "(csd, pl, ps, CPIndex < ps->MR_ps_num_coverage_points);\n    }\n#endif\n\n    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);\n\n    pd->MR_pd_cov" "erage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_fatal_error(\n        \"increment_dynamic_coverage_point_count:  \"\n            \"dynamic dee" "p profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_DYNAMIC */\n";
#line 1270 "coverage_profiling.m"
        break;
#line 1270 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 1273 "coverage_profiling.m"
        ll_backend__coverage_profiling__Code_7 = (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n    const MR_ProcLayout *pl;\n    MR_ProcStatic       *ps;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_PROFILING" "_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        printf(\", Pro" "cLayout: 0x%x, CPIndex: %d\\n\", ProcLayout, CPIndex);\n    }\n  #endif\n\n    pl = (const MR_ProcLayout *) ProcLayout;\n\n    MR_deep_assert(NULL, NULL, NULL, pl != NU" "LL);\n    ps = pl->MR_sle_proc_static;\n    MR_deep_assert(NULL, pl, NULL, ps != NULL);\n\n    MR_deep_assert(NULL, pl, ps, CPIndex < ps->MR_ps_num_coverage_points)" ";\n    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);\n\n    ps->MR_ps_coverage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_" "fatal_error(\n        \"increment_static_coverage_point_count:  \"\n            \"static coverage profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_STATI" "C */\n";
#line 1270 "coverage_profiling.m"
        break;
#line 1270 "coverage_profiling.m"
    }
#line 1265 "coverage_profiling.m"
    {
#line 1265 "coverage_profiling.m"
      MR_Word base;
#line 1265 "coverage_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "coverage_profiling.m"
      *ll_backend__coverage_profiling__ForeignProcImpl_6 = base;
#line 1265 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Code_7));
#line 1265 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "coverage_profiling.m"
    }
#line 1248 "coverage_profiling.m"
  }
#line 1245 "coverage_profiling.m"
}

#line 1236 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(
#line 1236 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageInfo_3,
#line 1236 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__ProcStaticConsId_4)
#line 1236 "coverage_profiling.m"
{
#line 1238 "coverage_profiling.m"
  {
#line 1238 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 1238 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__PredId_5;
#line 1238 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__ProcId_6;
#line 1238 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__ShroudedPredProcId_7;
#line 1238 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_8_8;
#line 1238 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__MaybeRecInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 5)));
#line 1238 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 4)));
#line 1223 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 0)));
#line 1223 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 1)));
#line 1223 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 2)));
#line 1223 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 3)));
#line 1223 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 6)));
#line 1223 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_3, (MR_Integer) 7)));
#line 1230 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__OuterPredProcId_15;
#line 1226 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__RecInfo_14;
#line 1226 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_16_16;
#line 1227 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_31_31;

#line 1226 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__MaybeRecInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 1226 "coverage_profiling.m"
      {
#line 1226 "coverage_profiling.m"
        ll_backend__coverage_profiling__RecInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__MaybeRecInfo_12, (MR_Integer) 0)));
#line 1227 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__RecInfo_14, (MR_Integer) 0)));
#line 1227 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__RecInfo_14, (MR_Integer) 1)));
#line 1227 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1227 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 1227 "coverage_profiling.m"
          ll_backend__coverage_profiling__OuterPredProcId_15 = (MR_Word) MR_body(((MR_Word) ll_backend__coverage_profiling__V_16_16), (MR_Integer) 0);
#line 1226 "coverage_profiling.m"
      }
#line 1230 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 1229 "coverage_profiling.m"
      {
#line 1229 "coverage_profiling.m"
        ll_backend__coverage_profiling__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__OuterPredProcId_15, (MR_Integer) 0)));
#line 1229 "coverage_profiling.m"
        ll_backend__coverage_profiling__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__OuterPredProcId_15, (MR_Integer) 1)));
#line 1229 "coverage_profiling.m"
      }
#line 1230 "coverage_profiling.m"
    else
#line 1231 "coverage_profiling.m"
      {
#line 1231 "coverage_profiling.m"
        ll_backend__coverage_profiling__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__PredProcId_13, (MR_Integer) 0)));
#line 1231 "coverage_profiling.m"
        ll_backend__coverage_profiling__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__PredProcId_13, (MR_Integer) 1)));
#line 1231 "coverage_profiling.m"
      }
#line 1240 "coverage_profiling.m"
    {
#line 1240 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_8_8, 0) = ((MR_Box) (ll_backend__coverage_profiling__PredId_5));
#line 1240 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_8_8, 1) = ((MR_Box) (ll_backend__coverage_profiling__ProcId_6));
#line 1240 "coverage_profiling.m"
    }
#line 1240 "coverage_profiling.m"
    {
#line 1240 "coverage_profiling.m"
      ll_backend__coverage_profiling__ShroudedPredProcId_7 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(ll_backend__coverage_profiling__V_8_8);
    }
#line 1241 "coverage_profiling.m"
    {
#line 1241 "coverage_profiling.m"
      MR_Word base;
#line 1241 "coverage_profiling.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "coverage_profiling.m"
      *ll_backend__coverage_profiling__ProcStaticConsId_4 = base;
#line 1241 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1241 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__ShroudedPredProcId_7));
#line 1241 "coverage_profiling.m"
    }
#line 1238 "coverage_profiling.m"
  }
#line 1236 "coverage_profiling.m"
}

#line 1123 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__make_coverage_point_5_p_0(
#line 1123 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
#line 1123 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoveragePointInfo_7,
#line 1123 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goals_8,
#line 1123 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38,
#line 1123 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_39)
#line 1123 "coverage_profiling.m"
{
#line 1127 "coverage_profiling.m"
  {
#line 1127 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoveragePointInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 0)));
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPIndexCounter0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 1)));
#line 1127 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__CPIndex_12;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPIndexCounter_13;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoveragePointInfos_14;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPIndexVar_16;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalUnifyIndex_17;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__ProcLayoutVar_18;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__ProcStaticConsId_19;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalUnifyProcLayout_20;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__UseCalls_21;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__ModuleInfo_22;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__DataType_24;
#line 1127 "coverage_profiling.m"
    MR_String ll_backend__coverage_profiling__PredName_25;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__ArgVars_26;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__ForeignArgVars_27;
#line 1127 "coverage_profiling.m"
    MR_Integer ll_backend__coverage_profiling__PredArity_28;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CallGoal_37;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_42_42;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_44_44;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_45_45;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_46_46;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_48_48;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_49_49;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_97_97;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_98_98;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_116_116;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_117_117;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_118_118;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_119_119;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_120_120;
#line 1127 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_121_121;
#line 1128 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 2)));
#line 1128 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 3)));
#line 1128 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 4)));
#line 1128 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 5)));
#line 1128 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 6)));
#line 1128 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 7)));
#line 1134 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_114_114;
#line 1134 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_115_115;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_137_137;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_138_138;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_141_141;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_142_142;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_143_143;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_144_144;
#line 1152 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_139_139;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_146_146;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_147_147;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_148_148;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_149_149;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_150_150;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_151_151;
#line 1157 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_152_152;

#line 1131 "coverage_profiling.m"
    {
#line 1131 "coverage_profiling.m"
      mercury__counter__allocate_3_p_0(&ll_backend__coverage_profiling__CPIndex_12, ll_backend__coverage_profiling__CPIndexCounter0_11, &ll_backend__coverage_profiling__CPIndexCounter_13);
    }
#line 1132 "coverage_profiling.m"
    {
#line 1132 "coverage_profiling.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, ll_backend__coverage_profiling__CPIndex_12, ((MR_Box) (ll_backend__coverage_profiling__CoveragePointInfo_7)), ll_backend__coverage_profiling__CoveragePointInfos0_10, &ll_backend__coverage_profiling__CoveragePointInfos_14);
    }
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 0)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 1)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 2)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 3)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 4)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 5)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 6)));
#line 1134 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_0_38, (MR_Integer) 7)));
#line 1135 "coverage_profiling.m"
    ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_42_42 = ll_backend__coverage_profiling__V_116_116;
#line 1135 "coverage_profiling.m"
    {
#line 1135 "coverage_profiling.m"
      ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 0) = ((MR_Box) (ll_backend__coverage_profiling__CoveragePointInfos_14));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 1) = ((MR_Box) (ll_backend__coverage_profiling__CPIndexCounter_13));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 2) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_42_42));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 3) = ((MR_Box) (ll_backend__coverage_profiling__V_117_117));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 4) = ((MR_Box) (ll_backend__coverage_profiling__V_118_118));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 5) = ((MR_Box) (ll_backend__coverage_profiling__V_119_119));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 6) = ((MR_Box) (ll_backend__coverage_profiling__V_120_120));
#line 1135 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, 7) = ((MR_Box) (ll_backend__coverage_profiling__V_121_121));
#line 1135 "coverage_profiling.m"
    }
#line 1142 "coverage_profiling.m"
    {
#line 1142 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_44_44 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1142 "coverage_profiling.m"
    {
#line 1142 "coverage_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "CPIndex", ll_backend__coverage_profiling__V_44_44, &ll_backend__coverage_profiling__CPIndexVar_16, ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_42_42, &ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_45_45);
    }
#line 1143 "coverage_profiling.m"
    {
#line 1143 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1143 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_46_46, 1) = ((MR_Box) (ll_backend__coverage_profiling__CPIndex_12));
#line 1143 "coverage_profiling.m"
    }
#line 1143 "coverage_profiling.m"
    {
#line 1143 "coverage_profiling.m"
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__coverage_profiling__V_46_46, ll_backend__coverage_profiling__CPIndexVar_16, &ll_backend__coverage_profiling__GoalUnifyIndex_17);
    }
#line 1147 "coverage_profiling.m"
    {
#line 1147 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_48_48 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 1147 "coverage_profiling.m"
    {
#line 1147 "coverage_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "ProcLayout", ll_backend__coverage_profiling__V_48_48, &ll_backend__coverage_profiling__ProcLayoutVar_18, ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_45_45, &ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_49_49);
    }
#line 1148 "coverage_profiling.m"
    {
#line 1148 "coverage_profiling.m"
      ll_backend__coverage_profiling__proc_static_cons_id_2_p_0(ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, &ll_backend__coverage_profiling__ProcStaticConsId_19);
    }
#line 1149 "coverage_profiling.m"
    {
#line 1149 "coverage_profiling.m"
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__coverage_profiling__ProcStaticConsId_19, ll_backend__coverage_profiling__ProcLayoutVar_18, &ll_backend__coverage_profiling__GoalUnifyProcLayout_20);
    }
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 0)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 1)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 2)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 3)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 4)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 5)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 6)));
#line 1152 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_41_41, (MR_Integer) 7)));
#line 1152 "coverage_profiling.m"
    {
#line 1152 "coverage_profiling.m"
      MR_Word base;
#line 1152 "coverage_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1152 "coverage_profiling.m"
      *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageInfo_39 = base;
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__V_137_137));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_138_138));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_49_49));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__coverage_profiling__ModuleInfo_22));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__coverage_profiling__V_141_141));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__coverage_profiling__V_142_142));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__coverage_profiling__V_143_143));
#line 1152 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__coverage_profiling__V_144_144));
#line 1152 "coverage_profiling.m"
    }
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__DataType_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__UseCalls_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1157 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_152_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1169 "coverage_profiling.m"
#line 1169 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__DataType_24) {
#line 1169 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1169 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 1162 "coverage_profiling.m"
        {
#line 1162 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_79_79;
#line 1162 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_88_88;

#line 1163 "coverage_profiling.m"
          ll_backend__coverage_profiling__PredName_25 = (MR_String) "increment_dynamic_coverage_point_count";
#line 1164 "coverage_profiling.m"
          {
#line 1164 "coverage_profiling.m"
            ll_backend__coverage_profiling__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_26, 0) = ((MR_Box) (ll_backend__coverage_profiling__CPIndexVar_16));
#line 1164 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1164 "coverage_profiling.m"
          }
#line 1167 "coverage_profiling.m"
          {
#line 1167 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_88_88 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 1167 "coverage_profiling.m"
          {
#line 1167 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1167 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_79_79, 0) = ((MR_Box) (ll_backend__coverage_profiling__V_88_88));
#line 1167 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1167 "coverage_profiling.m"
          }
#line 1165 "coverage_profiling.m"
          {
#line 1165 "coverage_profiling.m"
            hlds__hlds_goal__make_foreign_args_4_p_0(ll_backend__coverage_profiling__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[4]), ll_backend__coverage_profiling__V_79_79, &ll_backend__coverage_profiling__ForeignArgVars_27);
          }
#line 1168 "coverage_profiling.m"
          ll_backend__coverage_profiling__PredArity_28 = (MR_Integer) 1;
#line 1162 "coverage_profiling.m"
        }
#line 1169 "coverage_profiling.m"
        break;
#line 1169 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 1170 "coverage_profiling.m"
        {
#line 1170 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_53_53;
#line 1170 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_56_56;
#line 1170 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_73_73;
#line 1170 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_74_74;
#line 1170 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_75_75;

#line 1171 "coverage_profiling.m"
          ll_backend__coverage_profiling__PredName_25 = (MR_String) "increment_static_coverage_point_count";
#line 1172 "coverage_profiling.m"
          {
#line 1172 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_53_53, 0) = ((MR_Box) (ll_backend__coverage_profiling__CPIndexVar_16));
#line 1172 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1172 "coverage_profiling.m"
          }
#line 1172 "coverage_profiling.m"
          {
#line 1172 "coverage_profiling.m"
            ll_backend__coverage_profiling__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_26, 0) = ((MR_Box) (ll_backend__coverage_profiling__ProcLayoutVar_18));
#line 1172 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__ArgVars_26, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_53_53));
#line 1172 "coverage_profiling.m"
          }
#line 1176 "coverage_profiling.m"
          {
#line 1176 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_73_73 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 1176 "coverage_profiling.m"
          {
#line 1176 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_75_75 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 1176 "coverage_profiling.m"
          {
#line 1176 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_74_74, 0) = ((MR_Box) (ll_backend__coverage_profiling__V_75_75));
#line 1176 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "coverage_profiling.m"
          }
#line 1176 "coverage_profiling.m"
          {
#line 1176 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_56_56, 0) = ((MR_Box) (ll_backend__coverage_profiling__V_73_73));
#line 1176 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_56_56, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_74_74));
#line 1176 "coverage_profiling.m"
          }
#line 1173 "coverage_profiling.m"
          {
#line 1173 "coverage_profiling.m"
            hlds__hlds_goal__make_foreign_args_4_p_0(ll_backend__coverage_profiling__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_2[7]), ll_backend__coverage_profiling__V_56_56, &ll_backend__coverage_profiling__ForeignArgVars_27);
          }
#line 1177 "coverage_profiling.m"
          ll_backend__coverage_profiling__PredArity_28 = (MR_Integer) 2;
#line 1170 "coverage_profiling.m"
        }
#line 1169 "coverage_profiling.m"
        break;
#line 1169 "coverage_profiling.m"
    }
#line 1197 "coverage_profiling.m"
#line 1197 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__UseCalls_21) {
#line 1197 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1197 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 1186 "coverage_profiling.m"
        {
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__PredId_29;
#line 1186 "coverage_profiling.m"
          MR_Integer ll_backend__coverage_profiling__ProcId_30;
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__ForeignCallAttrs_31;
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__ForeignProc_32;
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__CallGoalExpr_33;
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__NonLocals_34;
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__InstMapDelta_35;
#line 1186 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__CallGoalInfo_36;

#line 1187 "coverage_profiling.m"
          {
#line 1187 "coverage_profiling.m"
            ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(ll_backend__coverage_profiling__ModuleInfo_22, ll_backend__coverage_profiling__PredName_25, ll_backend__coverage_profiling__PredArity_28, &ll_backend__coverage_profiling__PredId_29, &ll_backend__coverage_profiling__ProcId_30);
          }
#line 1189 "coverage_profiling.m"
          {
#line 1189 "coverage_profiling.m"
            ll_backend__coverage_profiling__coverage_point_ll_code_3_p_0(ll_backend__coverage_profiling__DataType_24, &ll_backend__coverage_profiling__ForeignCallAttrs_31, &ll_backend__coverage_profiling__ForeignProc_32);
          }
#line 1190 "coverage_profiling.m"
          {
#line 1190 "coverage_profiling.m"
            ll_backend__coverage_profiling__CallGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 1) = ((MR_Box) (ll_backend__coverage_profiling__ForeignCallAttrs_31));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 2) = ((MR_Box) (ll_backend__coverage_profiling__PredId_29));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 3) = ((MR_Box) (ll_backend__coverage_profiling__ProcId_30));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 4) = ((MR_Box) (ll_backend__coverage_profiling__ForeignArgVars_27));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "coverage_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__CallGoalExpr_33, 7) = ((MR_Box) (ll_backend__coverage_profiling__ForeignProc_32));
#line 1190 "coverage_profiling.m"
          }
#line 1192 "coverage_profiling.m"
          {
#line 1192 "coverage_profiling.m"
            ll_backend__coverage_profiling__NonLocals_34 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__coverage_profiling__ArgVars_26);
          }
#line 1193 "coverage_profiling.m"
          {
#line 1193 "coverage_profiling.m"
            ll_backend__coverage_profiling__InstMapDelta_35 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1194 "coverage_profiling.m"
          {
#line 1194 "coverage_profiling.m"
            ll_backend__coverage_profiling__CallGoalInfo_36 = hlds__hlds_goal__impure_init_goal_info_3_f_0(ll_backend__coverage_profiling__NonLocals_34, ll_backend__coverage_profiling__InstMapDelta_35, (MR_Integer) 0);
          }
#line 1196 "coverage_profiling.m"
          {
#line 1196 "coverage_profiling.m"
            ll_backend__coverage_profiling__CallGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "coverage_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CallGoal_37, 0) = ((MR_Box) (ll_backend__coverage_profiling__CallGoalExpr_33));
#line 1196 "coverage_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CallGoal_37, 1) = ((MR_Box) (ll_backend__coverage_profiling__CallGoalInfo_36));
#line 1196 "coverage_profiling.m"
          }
#line 1186 "coverage_profiling.m"
        }
#line 1197 "coverage_profiling.m"
        break;
#line 1197 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 1198 "coverage_profiling.m"
        {
#line 1199 "coverage_profiling.m"
          {
#line 1199 "coverage_profiling.m"
            ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__coverage_profiling__ModuleInfo_22, ll_backend__coverage_profiling__PredName_25, ll_backend__coverage_profiling__PredArity_28, ll_backend__coverage_profiling__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__coverage_profiling_scalar_common_3[3]), (MR_Integer) 0, &ll_backend__coverage_profiling__CallGoal_37);
          }
#line 1198 "coverage_profiling.m"
        }
#line 1197 "coverage_profiling.m"
        break;
#line 1197 "coverage_profiling.m"
    }
#line 1204 "coverage_profiling.m"
    {
#line 1204 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_98_98, 0) = ((MR_Box) (ll_backend__coverage_profiling__CallGoal_37));
#line 1204 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "coverage_profiling.m"
    }
#line 1204 "coverage_profiling.m"
    {
#line 1204 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_97_97, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalUnifyProcLayout_20));
#line 1204 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_97_97, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_98_98));
#line 1204 "coverage_profiling.m"
    }
#line 1204 "coverage_profiling.m"
    {
#line 1204 "coverage_profiling.m"
      MR_Word base;
#line 1204 "coverage_profiling.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Goals_8 = base;
#line 1204 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalUnifyIndex_17));
#line 1204 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_97_97));
#line 1204 "coverage_profiling.m"
    }
#line 1127 "coverage_profiling.m"
  }
#line 1123 "coverage_profiling.m"
}

#line 1107 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_7,
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPInfo_8,
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15,
#line 1107 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Goal_16,
#line 1107 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_17,
#line 1107 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_18)
#line 1107 "coverage_profiling.m"
{
#line 1111 "coverage_profiling.m"
  {
#line 1111 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 1111 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPGoals_11;
#line 1111 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Goals_14;
#line 1115 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__InnerGoals_12;
#line 1113 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_20_20;
#line 1113 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_21_21;
#line 1113 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_13_13;

#line 1112 "coverage_profiling.m"
    {
#line 1112 "coverage_profiling.m"
      ll_backend__coverage_profiling__make_coverage_point_5_p_0(ll_backend__coverage_profiling__CPOptions_7, ll_backend__coverage_profiling__CPInfo_8, &ll_backend__coverage_profiling__CPGoals_11, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_17, ll_backend__coverage_profiling__STATE_VARIABLE_Info_18);
    }
#line 1113 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15, (MR_Integer) 0)));
#line 1113 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15, (MR_Integer) 1)));
#line 1113 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__coverage_profiling__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1113 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 1113 "coverage_profiling.m"
      {
#line 1113 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_20_20, (MR_Integer) 1)));
#line 1113 "coverage_profiling.m"
        ll_backend__coverage_profiling__InnerGoals_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_20_20, (MR_Integer) 2)));
#line 1113 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_21_21 == (MR_Integer) 0);
#line 1113 "coverage_profiling.m"
      }
#line 1115 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 1114 "coverage_profiling.m"
      {
#line 1114 "coverage_profiling.m"
        {
#line 1114 "coverage_profiling.m"
          ll_backend__coverage_profiling__Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__coverage_profiling__CPGoals_11, ll_backend__coverage_profiling__InnerGoals_12);
        }
#line 1114 "coverage_profiling.m"
      }
#line 1115 "coverage_profiling.m"
    else
#line 1116 "coverage_profiling.m"
      {
#line 1116 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_22_22;

#line 1116 "coverage_profiling.m"
        {
#line 1116 "coverage_profiling.m"
          ll_backend__coverage_profiling__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_22_22, 0) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_15));
#line 1116 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "coverage_profiling.m"
        }
#line 1116 "coverage_profiling.m"
        {
#line 1116 "coverage_profiling.m"
          ll_backend__coverage_profiling__Goals_14 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__coverage_profiling__CPGoals_11, ll_backend__coverage_profiling__V_22_22);
        }
#line 1116 "coverage_profiling.m"
      }
#line 1118 "coverage_profiling.m"
    {
#line 1118 "coverage_profiling.m"
      hlds__goal_util__create_conj_from_list_3_p_0(ll_backend__coverage_profiling__Goals_14, (MR_Integer) 0, ll_backend__coverage_profiling__STATE_VARIABLE_Goal_16);
#line 1118 "coverage_profiling.m"
      return;
    }
#line 1111 "coverage_profiling.m"
  }
#line 1107 "coverage_profiling.m"
}

#line 1081 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(
#line 1081 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
#line 1081 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 1081 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
#line 1081 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 1081 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5)
#line 1081 "coverage_profiling.m"
{
#line 1085 "coverage_profiling.m"
  {
#line 1085 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 1085 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "coverage_profiling.m"
      {
#line 1085 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1086 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
#line 1086 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__5_5 = (MR_Integer) 0;
#line 1085 "coverage_profiling.m"
      }
#line 1085 "coverage_profiling.m"
    else
#line 1088 "coverage_profiling.m"
      {
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Case_10;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Cases_11;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__FirstFunctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_8, (MR_Integer) 0)));
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__LaterFunctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_8, (MR_Integer) 1)));
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_8, (MR_Integer) 2)));
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goal_17;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TrivialGoal_18;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_19;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TrivialSwitchcase_20;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterSwitchcase_21;
#line 1088 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_23_23;

#line 1091 "coverage_profiling.m"
        {
#line 1091 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Goal0_16, &ll_backend__coverage_profiling__Goal_17, (MR_Integer) 1, &ll_backend__coverage_profiling__V_23_23);
        }
#line 1093 "coverage_profiling.m"
        ll_backend__coverage_profiling__TrivialGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_23_23, (MR_Integer) 0)));
#line 1093 "coverage_profiling.m"
        ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_23_23, (MR_Integer) 1)));
#line 1094 "coverage_profiling.m"
        {
#line 1094 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Cases0_9, &ll_backend__coverage_profiling__Cases_11, &ll_backend__coverage_profiling__TrivialSwitchcase_20, &ll_backend__coverage_profiling__PortCountsCoverageAfterSwitchcase_21);
        }
#line 791 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialGoal_18 == (MR_Integer) 0);
#line 791 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 792 "coverage_profiling.m"
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialSwitchcase_20 == (MR_Integer) 0);
#line 795 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 794 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
#line 795 "coverage_profiling.m"
        else
#line 796 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 1;
#line 805 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_19 == (MR_Integer) 0);
#line 805 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 806 "coverage_profiling.m"
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterSwitchcase_21 == (MR_Integer) 0);
#line 809 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 808 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__5_5 = (MR_Integer) 0;
#line 809 "coverage_profiling.m"
        else
#line 810 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__5_5 = (MR_Integer) 1;
#line 1100 "coverage_profiling.m"
        {
#line 1100 "coverage_profiling.m"
          ll_backend__coverage_profiling__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_10, 0) = ((MR_Box) (ll_backend__coverage_profiling__FirstFunctor_14));
#line 1100 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_10, 1) = ((MR_Box) (ll_backend__coverage_profiling__LaterFunctors_15));
#line 1100 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_10, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goal_17));
#line 1100 "coverage_profiling.m"
        }
#line 1088 "coverage_profiling.m"
        {
#line 1088 "coverage_profiling.m"
          MR_Word base;
#line 1088 "coverage_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__3_3 = base;
#line 1088 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Case_10));
#line 1088 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Cases_11));
#line 1088 "coverage_profiling.m"
        }
#line 1088 "coverage_profiling.m"
      }
#line 1085 "coverage_profiling.m"
  }
#line 1081 "coverage_profiling.m"
}

#line 1059 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(
#line 1059 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_1,
#line 1059 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 1059 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
#line 1059 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 1059 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
#line 1059 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6)
#line 1059 "coverage_profiling.m"
{
#line 1064 "coverage_profiling.m"
  {
#line 1064 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 1064 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "coverage_profiling.m"
      {
#line 1064 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1064 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
#line 1065 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__6_6 = ll_backend__coverage_profiling__HeadVar__5_5;
#line 1064 "coverage_profiling.m"
      }
#line 1064 "coverage_profiling.m"
    else
#line 1067 "coverage_profiling.m"
      {
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goal_14;
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goals_15;
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TrivialGoal_19;
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_20;
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TrivialDisj_21;
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterDisj_22;
#line 1067 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_23_23;

#line 1068 "coverage_profiling.m"
        {
#line 1068 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Goal0_12, &ll_backend__coverage_profiling__Goal_14, ll_backend__coverage_profiling__HeadVar__5_5, &ll_backend__coverage_profiling__V_23_23);
        }
#line 1070 "coverage_profiling.m"
        ll_backend__coverage_profiling__TrivialGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_23_23, (MR_Integer) 0)));
#line 1070 "coverage_profiling.m"
        ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_23_23, (MR_Integer) 1)));
#line 1071 "coverage_profiling.m"
        {
#line 1071 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(ll_backend__coverage_profiling__CPOptions_1, ll_backend__coverage_profiling__Goals0_13, &ll_backend__coverage_profiling__Goals_15, &ll_backend__coverage_profiling__TrivialDisj_21, (MR_Integer) 1, &ll_backend__coverage_profiling__PortCountsCoverageAfterDisj_22);
        }
#line 1066 "coverage_profiling.m"
        {
#line 1066 "coverage_profiling.m"
          MR_Word base;
#line 1066 "coverage_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__3_3 = base;
#line 1066 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Goal_14));
#line 1066 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Goals_15));
#line 1066 "coverage_profiling.m"
        }
#line 791 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialGoal_19 == (MR_Integer) 0);
#line 791 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 792 "coverage_profiling.m"
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialDisj_21 == (MR_Integer) 0);
#line 795 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 794 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 0;
#line 795 "coverage_profiling.m"
        else
#line 796 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Integer) 1;
#line 805 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterGoal_20 == (MR_Integer) 0);
#line 805 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 806 "coverage_profiling.m"
          ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__PortCountsCoverageAfterDisj_22 == (MR_Integer) 0);
#line 809 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 808 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__6_6 = (MR_Integer) 0;
#line 809 "coverage_profiling.m"
        else
#line 810 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__6_6 = (MR_Integer) 1;
#line 1067 "coverage_profiling.m"
      }
#line 1064 "coverage_profiling.m"
  }
#line 1059 "coverage_profiling.m"
}

#line 1040 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_8,
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal0_9,
#line 1040 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goal_10,
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__TrivialAcc_11,
#line 1040 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Trivial_12,
#line 1040 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterAcc_13,
#line 1040 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_14)
#line 1040 "coverage_profiling.m"
{
#line 1046 "coverage_profiling.m"
  {
#line 1046 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 1046 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__TrivialGoal_15;
#line 1046 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_16_16;

#line 1047 "coverage_profiling.m"
    {
#line 1047 "coverage_profiling.m"
      ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_8, ll_backend__coverage_profiling__Goal0_9, ll_backend__coverage_profiling__Goal_10, ll_backend__coverage_profiling__PortCountsCoverageAfterAcc_13, &ll_backend__coverage_profiling__V_16_16);
    }
#line 1049 "coverage_profiling.m"
    ll_backend__coverage_profiling__TrivialGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_16_16, (MR_Integer) 0)));
#line 1049 "coverage_profiling.m"
    *ll_backend__coverage_profiling__PortCountsCoverageAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_16_16, (MR_Integer) 1)));
#line 791 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialAcc_11 == (MR_Integer) 0);
#line 791 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 792 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__TrivialGoal_15 == (MR_Integer) 0);
#line 795 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 794 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Trivial_12 = (MR_Integer) 0;
#line 795 "coverage_profiling.m"
    else
#line 796 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Trivial_12 = (MR_Integer) 1;
#line 1046 "coverage_profiling.m"
  }
#line 1040 "coverage_profiling.m"
}

#line 938 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1(
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__closure_arg,
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_1,
#line 938 "coverage_profiling.m"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_2,
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_3,
#line 938 "coverage_profiling.m"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_4,
#line 938 "coverage_profiling.m"
  MR_Box ll_backend__coverage_profiling__wrapper_arg_5,
#line 938 "coverage_profiling.m"
  MR_Box * ll_backend__coverage_profiling__wrapper_arg_6)
#line 938 "coverage_profiling.m"
{
#line 938 "coverage_profiling.m"
  {
#line 938 "coverage_profiling.m"
    MR_Box ll_backend__coverage_profiling__closure = ll_backend__coverage_profiling__closure_arg;
#line 938 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__conv2_Goal_10;
#line 938 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__conv1_Trivial_12;
#line 938 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__conv0_PortCountsCoverageAfter_14;

#line 938 "coverage_profiling.m"
    {
#line 938 "coverage_profiling.m"
      ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_1), &ll_backend__coverage_profiling__conv2_Goal_10, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_3), &ll_backend__coverage_profiling__conv1_Trivial_12, ((MR_Word) ll_backend__coverage_profiling__wrapper_arg_5), &ll_backend__coverage_profiling__conv0_PortCountsCoverageAfter_14);
    }
#line 938 "coverage_profiling.m"
    *ll_backend__coverage_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__coverage_profiling__conv2_Goal_10));
#line 938 "coverage_profiling.m"
    *ll_backend__coverage_profiling__wrapper_arg_4 = ((MR_Box) (ll_backend__coverage_profiling__conv1_Trivial_12));
#line 938 "coverage_profiling.m"
    *ll_backend__coverage_profiling__wrapper_arg_6 = ((MR_Box) (ll_backend__coverage_profiling__conv0_PortCountsCoverageAfter_14));
#line 938 "coverage_profiling.m"
  }
#line 938 "coverage_profiling.m"
}

#line 874 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(
#line 874 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CPOptions_6,
#line 874 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal0_7,
#line 874 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goal_8,
#line 874 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9,
#line 874 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Info_10)
#line 874 "coverage_profiling.m"
{
#line 879 "coverage_profiling.m"
  {
#line 879 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_7, (MR_Integer) 0)));
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_7, (MR_Integer) 1)));
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Trivial0_19;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalExpr_21;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfter_75;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Trivial_76;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__MaybeDPInfo0_77;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__DPInfo_80;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalInfo_81;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_101_101;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_148_148;
#line 879 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_149_149;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_147_147;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_150_150;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_151_151;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_152_152;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_153_153;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_154_154;
#line 1009 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_155_155;

#line 908 "coverage_profiling.m"
#line 908 "coverage_profiling.m"
    switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GoalExpr0_11)) {
#line 908 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 908 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 960 "coverage_profiling.m"
        {
#line 960 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__InnerGoal0_57 = (MR_Word) MR_body(((MR_Word) ll_backend__coverage_profiling__GoalExpr0_11), (MR_Integer) 0);
#line 960 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__InnerGoal_58;
#line 960 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_89_89;

#line 961 "coverage_profiling.m"
          {
#line 961 "coverage_profiling.m"
            ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__InnerGoal0_57, &ll_backend__coverage_profiling__InnerGoal_58, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__V_89_89);
          }
#line 963 "coverage_profiling.m"
          ll_backend__coverage_profiling__Trivial0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_89_89, (MR_Integer) 0)));
#line 963 "coverage_profiling.m"
          ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_89_89, (MR_Integer) 1)));
#line 964 "coverage_profiling.m"
          ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__coverage_profiling__InnerGoal_58);
#line 960 "coverage_profiling.m"
        }
#line 908 "coverage_profiling.m"
        break;
#line 908 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 932 "coverage_profiling.m"
        {
#line 933 "coverage_profiling.m"
          ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 0;
#line 934 "coverage_profiling.m"
          ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
#line 935 "coverage_profiling.m"
          ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
#line 932 "coverage_profiling.m"
        }
#line 908 "coverage_profiling.m"
        break;
#line 908 "coverage_profiling.m"
      case (MR_Integer) 2:
#line 895 "coverage_profiling.m"
        {
#line 895 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__BuiltinState_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
#line 895 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 0)));
#line 895 "coverage_profiling.m"
          MR_Integer ll_backend__coverage_profiling__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 895 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
#line 895 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 4)));
#line 895 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 5)));

#line 902 "coverage_profiling.m"
#line 902 "coverage_profiling.m"
          switch (ll_backend__coverage_profiling__BuiltinState_16) {
#line 902 "coverage_profiling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 902 "coverage_profiling.m"
            case (MR_Integer) 0:
#line 903 "coverage_profiling.m"
              {
#line 904 "coverage_profiling.m"
                ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 0;
#line 905 "coverage_profiling.m"
                ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
#line 903 "coverage_profiling.m"
              }
#line 902 "coverage_profiling.m"
              break;
#line 902 "coverage_profiling.m"
            case (MR_Integer) 2:
#line 902 "coverage_profiling.m"
            case (MR_Integer) 1:
#line 899 "coverage_profiling.m"
              {
#line 900 "coverage_profiling.m"
                ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 1;
#line 901 "coverage_profiling.m"
                ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
#line 899 "coverage_profiling.m"
              }
#line 902 "coverage_profiling.m"
              break;
#line 902 "coverage_profiling.m"
          }
#line 907 "coverage_profiling.m"
          ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
#line 895 "coverage_profiling.m"
        }
#line 908 "coverage_profiling.m"
        break;
#line 908 "coverage_profiling.m"
      case (MR_Integer) 3:
#line 908 "coverage_profiling.m"
#line 908 "coverage_profiling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 0)))) {
#line 908 "coverage_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 908 "coverage_profiling.m"
          case (MR_Integer) 0:
#line 909 "coverage_profiling.m"
            {
#line 909 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__GenericCall_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 909 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
#line 909 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
#line 909 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 4)));
#line 909 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 5)));

#line 916 "coverage_profiling.m"
#line 916 "coverage_profiling.m"
              switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GenericCall_22)) {
#line 916 "coverage_profiling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 916 "coverage_profiling.m"
                case (MR_Integer) 0:
#line 916 "coverage_profiling.m"
                case (MR_Integer) 1:
#line 913 "coverage_profiling.m"
                  {
#line 914 "coverage_profiling.m"
                    ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 1;
#line 915 "coverage_profiling.m"
                    ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 0;
#line 913 "coverage_profiling.m"
                  }
#line 916 "coverage_profiling.m"
                  break;
#line 916 "coverage_profiling.m"
                case (MR_Integer) 2:
#line 916 "coverage_profiling.m"
                case (MR_Integer) 3:
#line 919 "coverage_profiling.m"
                  {
#line 920 "coverage_profiling.m"
                    ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 0;
#line 921 "coverage_profiling.m"
                    ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
#line 919 "coverage_profiling.m"
                  }
#line 916 "coverage_profiling.m"
                  break;
#line 916 "coverage_profiling.m"
              }
#line 923 "coverage_profiling.m"
              ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
#line 909 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 1:
#line 925 "coverage_profiling.m"
            {
#line 928 "coverage_profiling.m"
              ll_backend__coverage_profiling__Trivial0_19 = (MR_Integer) 1;
#line 929 "coverage_profiling.m"
              ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
#line 930 "coverage_profiling.m"
              ll_backend__coverage_profiling__GoalExpr_21 = ll_backend__coverage_profiling__GoalExpr0_11;
#line 925 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 2:
#line 937 "coverage_profiling.m"
            {
#line 937 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__TypeCtorInfo_144_144;
#line 937 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ConjType_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 937 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
#line 937 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals_51;
#line 937 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_90_90;
#line 938 "coverage_profiling.m"
              MR_Box ll_backend__coverage_profiling__conv4_Trivial0_19;
#line 938 "coverage_profiling.m"
              MR_Box ll_backend__coverage_profiling__conv3_PortCountsCoverageAfterDirect_20;

#line 938 "coverage_profiling.m"
              {
#line 938 "coverage_profiling.m"
                ll_backend__coverage_profiling__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 938 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_90_90, 0) = ((MR_Box) (&ll_backend__coverage_profiling_scalar_common_4[0]));
#line 938 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_90_90, 1) = ((MR_Box) (ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0_1));
#line 938 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 938 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_90_90, 3) = ((MR_Box) (ll_backend__coverage_profiling__CPOptions_6));
#line 938 "coverage_profiling.m"
              }
#line 4292 "ll_backend.coverage_profiling.c"
              ll_backend__coverage_profiling__TypeCtorInfo_144_144 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 938 "coverage_profiling.m"
              {
#line 938 "coverage_profiling.m"
                mercury__list__map_foldl2_7_p_0(ll_backend__coverage_profiling__TypeCtorInfo_144_144, ll_backend__coverage_profiling__TypeCtorInfo_144_144, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_trivial_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0, ll_backend__coverage_profiling__V_90_90, ll_backend__coverage_profiling__Goals0_50, &ll_backend__coverage_profiling__Goals_51, ((MR_Box) ((MR_Integer) 0)), &ll_backend__coverage_profiling__conv4_Trivial0_19, ((MR_Box) (ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9)), &ll_backend__coverage_profiling__conv3_PortCountsCoverageAfterDirect_20);
              }
#line 938 "coverage_profiling.m"
              ll_backend__coverage_profiling__Trivial0_19 = ((MR_Word) ll_backend__coverage_profiling__conv4_Trivial0_19);
#line 938 "coverage_profiling.m"
              ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ((MR_Word) ll_backend__coverage_profiling__conv3_PortCountsCoverageAfterDirect_20);
#line 941 "coverage_profiling.m"
              {
#line 941 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 941 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 941 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__ConjType_49));
#line 941 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goals_51));
#line 941 "coverage_profiling.m"
              }
#line 937 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 3:
#line 943 "coverage_profiling.m"
            {
#line 943 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 943 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals_103;

#line 944 "coverage_profiling.m"
              {
#line 944 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__Goals0_102, &ll_backend__coverage_profiling__Goals_103, &ll_backend__coverage_profiling__Trivial0_19, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20);
              }
#line 946 "coverage_profiling.m"
              {
#line 946 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 946 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Goals_103));
#line 946 "coverage_profiling.m"
              }
#line 943 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 4:
#line 948 "coverage_profiling.m"
            {
#line 948 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 948 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
#line 948 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
#line 948 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Cases_55;
#line 948 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterCases_56;

#line 949 "coverage_profiling.m"
              {
#line 949 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__Cases0_54, &ll_backend__coverage_profiling__Cases_55, &ll_backend__coverage_profiling__Trivial0_19, &ll_backend__coverage_profiling__PortCountsCoverageAfterCases_56);
              }
#line 951 "coverage_profiling.m"
              {
#line 951 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 951 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 951 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_52));
#line 951 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__CanFail_53));
#line 951 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 3) = ((MR_Box) (ll_backend__coverage_profiling__Cases_55));
#line 951 "coverage_profiling.m"
              }
#line 955 "coverage_profiling.m"
#line 955 "coverage_profiling.m"
              switch (ll_backend__coverage_profiling__CanFail_53) {
#line 955 "coverage_profiling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 955 "coverage_profiling.m"
                case (MR_Integer) 0:
#line 953 "coverage_profiling.m"
                  ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = (MR_Integer) 1;
#line 955 "coverage_profiling.m"
                  break;
#line 955 "coverage_profiling.m"
                case (MR_Integer) 1:
#line 956 "coverage_profiling.m"
                  ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ll_backend__coverage_profiling__PortCountsCoverageAfterCases_56;
#line 955 "coverage_profiling.m"
                  break;
#line 955 "coverage_profiling.m"
              }
#line 948 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 5:
#line 966 "coverage_profiling.m"
            {
#line 966 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 966 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_88_88;
#line 966 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__InnerGoal0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
#line 966 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__InnerGoal_105;

#line 970 "coverage_profiling.m"
              {
#line 970 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__InnerGoal0_104, &ll_backend__coverage_profiling__InnerGoal_105, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__V_88_88);
              }
#line 972 "coverage_profiling.m"
              ll_backend__coverage_profiling__Trivial0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_88_88, (MR_Integer) 0)));
#line 972 "coverage_profiling.m"
              ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_88_88, (MR_Integer) 1)));
#line 973 "coverage_profiling.m"
              {
#line 973 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 973 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 973 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Reason_59));
#line 973 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__InnerGoal_105));
#line 973 "coverage_profiling.m"
              }
#line 966 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 6:
#line 975 "coverage_profiling.m"
            {
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Vars_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 1)));
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__CondGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 2)));
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ThenGoal0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 3)));
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ElseGoal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_11, (MR_Integer) 4)));
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__CondGoal_64;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__TrivialCond_65;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ThenGoal_67;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__TrivialThen_68;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterThen_69;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ElseGoal_70;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__TrivialElse_71;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__PortCountsCoverageAfterElse_72;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__TrivialCondThen_73;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_85_85;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_86_86;
#line 975 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_87_87;

#line 980 "coverage_profiling.m"
              {
#line 980 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__CondGoal0_61, &ll_backend__coverage_profiling__CondGoal_64, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__V_85_85);
              }
#line 982 "coverage_profiling.m"
              ll_backend__coverage_profiling__TrivialCond_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_85_85, (MR_Integer) 0)));
#line 982 "coverage_profiling.m"
              ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_85_85, (MR_Integer) 1)));
#line 984 "coverage_profiling.m"
              {
#line 984 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__ThenGoal0_62, &ll_backend__coverage_profiling__ThenGoal_67, ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66, &ll_backend__coverage_profiling__V_86_86);
              }
#line 986 "coverage_profiling.m"
              ll_backend__coverage_profiling__TrivialThen_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_86_86, (MR_Integer) 0)));
#line 986 "coverage_profiling.m"
              ll_backend__coverage_profiling__PortCountsCoverageAfterThen_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_86_86, (MR_Integer) 1)));
#line 987 "coverage_profiling.m"
              {
#line 987 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CPOptions_6, ll_backend__coverage_profiling__ElseGoal0_63, &ll_backend__coverage_profiling__ElseGoal_70, ll_backend__coverage_profiling__PortCountsCoverageAfterCond_66, &ll_backend__coverage_profiling__V_87_87);
              }
#line 989 "coverage_profiling.m"
              ll_backend__coverage_profiling__TrivialElse_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_87_87, (MR_Integer) 0)));
#line 989 "coverage_profiling.m"
              ll_backend__coverage_profiling__PortCountsCoverageAfterElse_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_87_87, (MR_Integer) 1)));
#line 991 "coverage_profiling.m"
              {
#line 991 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 991 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 991 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__coverage_profiling__Vars_60));
#line 991 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__coverage_profiling__CondGoal_64));
#line 991 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 3) = ((MR_Box) (ll_backend__coverage_profiling__ThenGoal_67));
#line 991 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr_21, 4) = ((MR_Box) (ll_backend__coverage_profiling__ElseGoal_70));
#line 991 "coverage_profiling.m"
              }
#line 995 "coverage_profiling.m"
              {
#line 995 "coverage_profiling.m"
                ll_backend__coverage_profiling__goal_trivial_and_3_p_0(ll_backend__coverage_profiling__TrivialCond_65, ll_backend__coverage_profiling__TrivialThen_68, &ll_backend__coverage_profiling__TrivialCondThen_73);
              }
#line 996 "coverage_profiling.m"
              {
#line 996 "coverage_profiling.m"
                ll_backend__coverage_profiling__goal_trivial_and_3_p_0(ll_backend__coverage_profiling__TrivialCondThen_73, ll_backend__coverage_profiling__TrivialElse_71, &ll_backend__coverage_profiling__Trivial0_19);
              }
#line 1001 "coverage_profiling.m"
              {
#line 1001 "coverage_profiling.m"
                ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(ll_backend__coverage_profiling__PortCountsCoverageAfterThen_69, ll_backend__coverage_profiling__PortCountsCoverageAfterElse_72, &ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20);
              }
#line 975 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
          case (MR_Integer) 7:
#line 1004 "coverage_profiling.m"
            {
#line 1005 "coverage_profiling.m"
              {
#line 1005 "coverage_profiling.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "shorthand");
#line 1005 "coverage_profiling.m"
                return;
              }
#line 1004 "coverage_profiling.m"
            }
#line 908 "coverage_profiling.m"
            break;
#line 908 "coverage_profiling.m"
        }
#line 908 "coverage_profiling.m"
        break;
#line 908 "coverage_profiling.m"
    }
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_155_155 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_152_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1009 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_6, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1012 "coverage_profiling.m"
#line 1012 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__V_149_149) {
#line 1012 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 1014 "coverage_profiling.m"
        ll_backend__coverage_profiling__PortCountsCoverageAfter_75 = (MR_Integer) 1;
#line 1012 "coverage_profiling.m"
        break;
#line 1012 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 1010 "coverage_profiling.m"
        {
#line 1010 "coverage_profiling.m"
          ll_backend__coverage_profiling__has_port_counts_after_4_p_0(ll_backend__coverage_profiling__Goal0_7, ll_backend__coverage_profiling__PortCountsCoverageAfterDirect_20, ll_backend__coverage_profiling__PortCountsCoverageAfterBefore_9, &ll_backend__coverage_profiling__PortCountsCoverageAfter_75);
        }
#line 1012 "coverage_profiling.m"
        break;
#line 1012 "coverage_profiling.m"
    }
#line 1020 "coverage_profiling.m"
#line 1020 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__V_148_148) {
#line 1020 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1020 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 1022 "coverage_profiling.m"
        ll_backend__coverage_profiling__Trivial_76 = (MR_Integer) 1;
#line 1020 "coverage_profiling.m"
        break;
#line 1020 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 1019 "coverage_profiling.m"
        ll_backend__coverage_profiling__Trivial_76 = ll_backend__coverage_profiling__Trivial0_19;
#line 1020 "coverage_profiling.m"
        break;
#line 1020 "coverage_profiling.m"
    }
#line 1026 "coverage_profiling.m"
    {
#line 1026 "coverage_profiling.m"
      MR_Word base;
#line 1026 "coverage_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Info_10 = base;
#line 1026 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Trivial_76));
#line 1026 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__PortCountsCoverageAfter_75));
#line 1026 "coverage_profiling.m"
    }
#line 1027 "coverage_profiling.m"
    {
#line 1027 "coverage_profiling.m"
      ll_backend__coverage_profiling__MaybeDPInfo0_77 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(ll_backend__coverage_profiling__GoalInfo0_12);
    }
#line 1031 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__MaybeDPInfo0_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "coverage_profiling.m"
      {
#line 1033 "coverage_profiling.m"
        {
#line 1033 "coverage_profiling.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", (MR_String) "goal_dp_info not present");
#line 1033 "coverage_profiling.m"
          return;
        }
#line 1032 "coverage_profiling.m"
      }
#line 1031 "coverage_profiling.m"
    else
#line 1029 "coverage_profiling.m"
      {
#line 1029 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__IsProfilingInstrumentation_78;
#line 1029 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__MaybeDPInfo0_77, (MR_Integer) 0)));
#line 1029 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_100_100;
#line 1029 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_79_79;

#line 1029 "coverage_profiling.m"
        ll_backend__coverage_profiling__IsProfilingInstrumentation_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_99_99, (MR_Integer) 0)));
#line 1029 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__V_99_99, (MR_Integer) 1)));
#line 1030 "coverage_profiling.m"
        {
#line 1030 "coverage_profiling.m"
          ll_backend__coverage_profiling__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_100_100, 0) = ((MR_Box) (*ll_backend__coverage_profiling__Info_10));
#line 1030 "coverage_profiling.m"
        }
#line 1030 "coverage_profiling.m"
        {
#line 1030 "coverage_profiling.m"
          ll_backend__coverage_profiling__DPInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_80, 0) = ((MR_Box) (ll_backend__coverage_profiling__IsProfilingInstrumentation_78));
#line 1030 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_80, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_100_100));
#line 1030 "coverage_profiling.m"
        }
#line 1029 "coverage_profiling.m"
      }
#line 1035 "coverage_profiling.m"
    {
#line 1035 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "coverage_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_101_101, 0) = ((MR_Box) (ll_backend__coverage_profiling__DPInfo_80));
#line 1035 "coverage_profiling.m"
    }
#line 1035 "coverage_profiling.m"
    {
#line 1035 "coverage_profiling.m"
      hlds__hlds_goal__goal_info_set_maybe_dp_info_3_p_0(ll_backend__coverage_profiling__V_101_101, ll_backend__coverage_profiling__GoalInfo0_12, &ll_backend__coverage_profiling__GoalInfo_81);
    }
#line 1036 "coverage_profiling.m"
    {
#line 1036 "coverage_profiling.m"
      MR_Word base;
#line 1036 "coverage_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Goal_8 = base;
#line 1036 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalExpr_21));
#line 1036 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__GoalInfo_81));
#line 1036 "coverage_profiling.m"
    }
#line 879 "coverage_profiling.m"
  }
#line 874 "coverage_profiling.m"
}

#line 818 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__has_port_counts_after_4_p_0(
#line 818 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal_5,
#line 818 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PCDirect_6,
#line 818 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PCBefore_7,
#line 818 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__PC_8)
#line 818 "coverage_profiling.m"
{
#line 827 "coverage_profiling.m"
  {
#line 827 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 827 "coverage_profiling.m"
#line 827 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__PCDirect_6) {
#line 827 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 827 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 830 "coverage_profiling.m"
        {
#line 830 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__Detism_9;
#line 830 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal_5, (MR_Integer) 1)));
#line 837 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal_5, (MR_Integer) 0)));

#line 837 "coverage_profiling.m"
          {
#line 837 "coverage_profiling.m"
            ll_backend__coverage_profiling__Detism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__V_10_10);
          }
#line 852 "coverage_profiling.m"
#line 852 "coverage_profiling.m"
          switch (ll_backend__coverage_profiling__Detism_9) {
#line 852 "coverage_profiling.m"
            default:
#line 852 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = MR_FALSE;
#line 852 "coverage_profiling.m"
              break;
#line 852 "coverage_profiling.m"
            case (MR_Integer) 4:
#line 852 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = MR_TRUE;
#line 852 "coverage_profiling.m"
              break;
#line 852 "coverage_profiling.m"
            case (MR_Integer) 0:
#line 851 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = MR_TRUE;
#line 852 "coverage_profiling.m"
              break;
#line 852 "coverage_profiling.m"
          }
#line 856 "coverage_profiling.m"
          if (ll_backend__coverage_profiling__succeeded)
#line 855 "coverage_profiling.m"
            *ll_backend__coverage_profiling__PC_8 = ll_backend__coverage_profiling__PCBefore_7;
#line 856 "coverage_profiling.m"
          else
#line 857 "coverage_profiling.m"
            *ll_backend__coverage_profiling__PC_8 = (MR_Integer) 1;
#line 830 "coverage_profiling.m"
        }
#line 827 "coverage_profiling.m"
        break;
#line 827 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 828 "coverage_profiling.m"
        *ll_backend__coverage_profiling__PC_8 = (MR_Integer) 0;
#line 827 "coverage_profiling.m"
        break;
#line 827 "coverage_profiling.m"
    }
#line 827 "coverage_profiling.m"
  }
#line 818 "coverage_profiling.m"
}

#line 799 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_p_0(
#line 799 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__A_4,
#line 799 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__B_5,
#line 799 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__PortCountsCoverageAfter_6)
#line 799 "coverage_profiling.m"
{
#line 809 "coverage_profiling.m"
  {
#line 809 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__A_4 == (MR_Integer) 0);

#line 805 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 806 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__B_5 == (MR_Integer) 0);
#line 809 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 808 "coverage_profiling.m"
      *ll_backend__coverage_profiling__PortCountsCoverageAfter_6 = (MR_Integer) 0;
#line 809 "coverage_profiling.m"
    else
#line 810 "coverage_profiling.m"
      *ll_backend__coverage_profiling__PortCountsCoverageAfter_6 = (MR_Integer) 1;
#line 809 "coverage_profiling.m"
  }
#line 799 "coverage_profiling.m"
}

#line 786 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__goal_trivial_and_3_p_0(
#line 786 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__A_4,
#line 786 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__B_5,
#line 786 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Trivial_6)
#line 786 "coverage_profiling.m"
{
#line 795 "coverage_profiling.m"
  {
#line 795 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__A_4 == (MR_Integer) 0);

#line 791 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 792 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__B_5 == (MR_Integer) 0);
#line 795 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 794 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Trivial_6 = (MR_Integer) 0;
#line 795 "coverage_profiling.m"
    else
#line 796 "coverage_profiling.m"
      *ll_backend__coverage_profiling__Trivial_6 = (MR_Integer) 1;
#line 795 "coverage_profiling.m"
  }
#line 786 "coverage_profiling.m"
}

#line 631 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_12,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ITEExistVars_13,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Cond0_14,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Then0_15,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Else0_16,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__GoalExpr_17,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeITEKnown_18,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_19,
#line 631 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_55,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_56,
#line 631 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_21)
#line 631 "coverage_profiling.m"
{
#line 638 "coverage_profiling.m"
  {
#line 638 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Cond_22;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__AddedImpurityCond_24;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPOptions_27;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPOBranchIf_28;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__IsMDProfInst_29;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__NextCoverageKnownThen_44;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__NextCoverageKnownElse_47;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Then_50;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__AddedImpurityThen_51;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Else_53;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__AddedImpurityElse_54;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57;
#line 638 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_71_71;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_72_72;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_73_73;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_74_74;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_75_75;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_76_76;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_77_77;
#line 655 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_78_78;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_79_79;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_80_80;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_81_81;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_82_82;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_83_83;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_84_84;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_85_85;
#line 656 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_86_86;
#line 657 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_30_30;

#line 640 "coverage_profiling.m"
    {
#line 640 "coverage_profiling.m"
      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Cond0_14, &ll_backend__coverage_profiling__Cond_22, ll_backend__coverage_profiling__CoverageBeforeITEKnown_18, &ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_55, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__AddedImpurityCond_24);
    }
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__CPOptions_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 655 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__CPOBranchIf_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 656 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 657 "coverage_profiling.m"
    ll_backend__coverage_profiling__IsMDProfInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_12, (MR_Integer) 0)));
#line 657 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_12, (MR_Integer) 1)));
#line 659 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CPOBranchIf_28 == (MR_Integer) 1);
#line 659 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 660 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_29 == (MR_Integer) 1);
#line 5018 "ll_backend.coverage_profiling.c"
    if (ll_backend__coverage_profiling__succeeded)
#line 5020 "ll_backend.coverage_profiling.c"
      {
#line 5022 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__ContainingGoalMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 5024 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__ElseId_36;
#line 5026 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__ElsePath_37;
#line 5028 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__CondDetism_38;
#line 5030 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__CondSolns_40;
#line 5032 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Else0_16, (MR_Integer) 1)));
#line 5034 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__V_62_62;
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 662 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 675 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Else0_16, (MR_Integer) 0)));
#line 677 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_96_96;
#line 678 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_39_39;

#line 675 "coverage_profiling.m"
        {
#line 675 "coverage_profiling.m"
          ll_backend__coverage_profiling__ElseId_36 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__V_61_61);
        }
#line 676 "coverage_profiling.m"
        {
#line 676 "coverage_profiling.m"
          ll_backend__coverage_profiling__ElsePath_37 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ElseId_36);
        }
#line 677 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Cond_22, (MR_Integer) 0)));
#line 677 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Cond_22, (MR_Integer) 1)));
#line 677 "coverage_profiling.m"
        {
#line 677 "coverage_profiling.m"
          ll_backend__coverage_profiling__CondDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__V_62_62);
        }
#line 678 "coverage_profiling.m"
        {
#line 678 "coverage_profiling.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__coverage_profiling__CondDetism_38, &ll_backend__coverage_profiling__V_39_39, &ll_backend__coverage_profiling__CondSolns_40);
        }
#line 5081 "ll_backend.coverage_profiling.c"
#line 5082 "ll_backend.coverage_profiling.c"
        switch (ll_backend__coverage_profiling__CondSolns_40) {
#line 5084 "ll_backend.coverage_profiling.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 5086 "ll_backend.coverage_profiling.c"
          case (MR_Integer) 3:
#line 5088 "ll_backend.coverage_profiling.c"
            {
#line 5090 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__Else1_46;
#line 5092 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__CPInfoElse_52;
#line 5094 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69;

#line 683 "coverage_profiling.m"
              {
#line 683 "coverage_profiling.m"
                ll_backend__coverage_profiling__CPInfoElse_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 683 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_52, 0) = ((MR_Box) (ll_backend__coverage_profiling__ElsePath_37));
#line 683 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_52, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 683 "coverage_profiling.m"
              }
#line 5107 "ll_backend.coverage_profiling.c"
#line 5108 "ll_backend.coverage_profiling.c"
              switch (ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25) {
#line 5110 "ll_backend.coverage_profiling.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 5112 "ll_backend.coverage_profiling.c"
                case (MR_Integer) 0:
#line 5114 "ll_backend.coverage_profiling.c"
                  {
#line 5116 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_67;
#line 718 "coverage_profiling.m"
                    MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_48;

#line 715 "coverage_profiling.m"
                    {
#line 715 "coverage_profiling.m"
                      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_67, &ll_backend__coverage_profiling__AddedImpurityThen_51);
                    }
#line 718 "coverage_profiling.m"
                    {
#line 718 "coverage_profiling.m"
                      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_46, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_67, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69, &ll_backend__coverage_profiling__AddedImpurityElseGoal_48);
                    }
#line 5131 "ll_backend.coverage_profiling.c"
                  }
#line 5133 "ll_backend.coverage_profiling.c"
                  break;
#line 5135 "ll_backend.coverage_profiling.c"
                case (MR_Integer) 1:
#line 5137 "ll_backend.coverage_profiling.c"
                  {
#line 5139 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__ThenId_32;
#line 5141 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__ThenPath_33;
#line 5143 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__CPInfoThen_49;
#line 5145 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 1)));
#line 5147 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__Then1_114;
#line 5149 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_116;
#line 5151 "ll_backend.coverage_profiling.c"
                    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_117;
#line 665 "coverage_profiling.m"
                    MR_Word ll_backend__coverage_profiling__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 0)));
#line 715 "coverage_profiling.m"
                    MR_Word ll_backend__coverage_profiling__AddedImpurityThenGoal_112;
#line 718 "coverage_profiling.m"
                    MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_118;

#line 665 "coverage_profiling.m"
                    {
#line 665 "coverage_profiling.m"
                      ll_backend__coverage_profiling__ThenId_32 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__V_58_58);
                    }
#line 666 "coverage_profiling.m"
                    {
#line 666 "coverage_profiling.m"
                      ll_backend__coverage_profiling__ThenPath_33 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ThenId_32);
                    }
#line 667 "coverage_profiling.m"
                    {
#line 667 "coverage_profiling.m"
                      ll_backend__coverage_profiling__CPInfoThen_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "coverage_profiling.m"
                      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_49, 0) = ((MR_Box) (ll_backend__coverage_profiling__ThenPath_33));
#line 667 "coverage_profiling.m"
                      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_49, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 667 "coverage_profiling.m"
                    }
#line 715 "coverage_profiling.m"
                    {
#line 715 "coverage_profiling.m"
                      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then1_114, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_116, &ll_backend__coverage_profiling__AddedImpurityThenGoal_112);
                    }
#line 718 "coverage_profiling.m"
                    {
#line 718 "coverage_profiling.m"
                      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_46, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_116, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_117, &ll_backend__coverage_profiling__AddedImpurityElseGoal_118);
                    }
#line 725 "coverage_profiling.m"
                    {
#line 725 "coverage_profiling.m"
                      ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoThen_49, ll_backend__coverage_profiling__Then1_114, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_117, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69);
                    }
#line 727 "coverage_profiling.m"
                    ll_backend__coverage_profiling__AddedImpurityThen_51 = (MR_Integer) 1;
#line 5197 "ll_backend.coverage_profiling.c"
                  }
#line 5199 "ll_backend.coverage_profiling.c"
                  break;
#line 5201 "ll_backend.coverage_profiling.c"
              }
#line 735 "coverage_profiling.m"
              {
#line 735 "coverage_profiling.m"
                ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoElse_52, ll_backend__coverage_profiling__Else1_46, &ll_backend__coverage_profiling__Else_53, ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_69, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56);
              }
#line 737 "coverage_profiling.m"
              ll_backend__coverage_profiling__AddedImpurityElse_54 = (MR_Integer) 1;
#line 5210 "ll_backend.coverage_profiling.c"
            }
#line 5212 "ll_backend.coverage_profiling.c"
            break;
#line 5214 "ll_backend.coverage_profiling.c"
          case (MR_Integer) 2:
#line 5216 "ll_backend.coverage_profiling.c"
          case (MR_Integer) 1:
#line 5218 "ll_backend.coverage_profiling.c"
          case (MR_Integer) 0:
#line 5220 "ll_backend.coverage_profiling.c"
            {
#line 695 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeITEKnown_18 == (MR_Integer) 0);
#line 5224 "ll_backend.coverage_profiling.c"
              if (ll_backend__coverage_profiling__succeeded)
#line 5226 "ll_backend.coverage_profiling.c"
                {
#line 5228 "ll_backend.coverage_profiling.c"
#line 5229 "ll_backend.coverage_profiling.c"
                  switch (ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25) {
#line 5231 "ll_backend.coverage_profiling.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 5233 "ll_backend.coverage_profiling.c"
                    case (MR_Integer) 0:
#line 5235 "ll_backend.coverage_profiling.c"
                      {
#line 5237 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_120;

#line 715 "coverage_profiling.m"
                        {
#line 715 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_120, &ll_backend__coverage_profiling__AddedImpurityThen_51);
                        }
#line 718 "coverage_profiling.m"
                        {
#line 718 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else_53, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_120, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56, &ll_backend__coverage_profiling__AddedImpurityElse_54);
                        }
#line 5250 "ll_backend.coverage_profiling.c"
                      }
#line 5252 "ll_backend.coverage_profiling.c"
                      break;
#line 5254 "ll_backend.coverage_profiling.c"
                    case (MR_Integer) 1:
#line 5256 "ll_backend.coverage_profiling.c"
                      {
#line 5258 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__ThenId_123;
#line 5260 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__ThenPath_124;
#line 5262 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__CPInfoThen_125;
#line 5264 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 1)));
#line 5266 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__Then1_130;
#line 5268 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_131;
#line 5270 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_132;
#line 665 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 0)));
#line 715 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__AddedImpurityThenGoal_122;

#line 665 "coverage_profiling.m"
                        {
#line 665 "coverage_profiling.m"
                          ll_backend__coverage_profiling__ThenId_123 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__V_126_126);
                        }
#line 666 "coverage_profiling.m"
                        {
#line 666 "coverage_profiling.m"
                          ll_backend__coverage_profiling__ThenPath_124 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ThenId_123);
                        }
#line 667 "coverage_profiling.m"
                        {
#line 667 "coverage_profiling.m"
                          ll_backend__coverage_profiling__CPInfoThen_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "coverage_profiling.m"
                          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_125, 0) = ((MR_Box) (ll_backend__coverage_profiling__ThenPath_124));
#line 667 "coverage_profiling.m"
                          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_125, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 667 "coverage_profiling.m"
                        }
#line 715 "coverage_profiling.m"
                        {
#line 715 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then1_130, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_131, &ll_backend__coverage_profiling__AddedImpurityThenGoal_122);
                        }
#line 718 "coverage_profiling.m"
                        {
#line 718 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else_53, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_131, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_132, &ll_backend__coverage_profiling__AddedImpurityElse_54);
                        }
#line 725 "coverage_profiling.m"
                        {
#line 725 "coverage_profiling.m"
                          ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoThen_125, ll_backend__coverage_profiling__Then1_130, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_132, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56);
                        }
#line 727 "coverage_profiling.m"
                        ll_backend__coverage_profiling__AddedImpurityThen_51 = (MR_Integer) 1;
#line 5314 "ll_backend.coverage_profiling.c"
                      }
#line 5316 "ll_backend.coverage_profiling.c"
                      break;
#line 5318 "ll_backend.coverage_profiling.c"
                  }
#line 5320 "ll_backend.coverage_profiling.c"
                }
#line 5322 "ll_backend.coverage_profiling.c"
              else
#line 5324 "ll_backend.coverage_profiling.c"
                {
#line 5326 "ll_backend.coverage_profiling.c"
                  MR_Word ll_backend__coverage_profiling__CPInfoElse_144;
#line 5328 "ll_backend.coverage_profiling.c"
                  MR_Word ll_backend__coverage_profiling__Else1_206;
#line 5330 "ll_backend.coverage_profiling.c"
                  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208;

#line 701 "coverage_profiling.m"
                  {
#line 701 "coverage_profiling.m"
                    ll_backend__coverage_profiling__CPInfoElse_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "coverage_profiling.m"
                    MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_144, 0) = ((MR_Box) (ll_backend__coverage_profiling__ElsePath_37));
#line 701 "coverage_profiling.m"
                    MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoElse_144, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 701 "coverage_profiling.m"
                  }
#line 5343 "ll_backend.coverage_profiling.c"
#line 5344 "ll_backend.coverage_profiling.c"
                  switch (ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25) {
#line 5346 "ll_backend.coverage_profiling.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 5348 "ll_backend.coverage_profiling.c"
                    case (MR_Integer) 0:
#line 5350 "ll_backend.coverage_profiling.c"
                      {
#line 5352 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_165;
#line 718 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_164;

#line 715 "coverage_profiling.m"
                        {
#line 715 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_165, &ll_backend__coverage_profiling__AddedImpurityThen_51);
                        }
#line 718 "coverage_profiling.m"
                        {
#line 718 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_206, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_165, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208, &ll_backend__coverage_profiling__AddedImpurityElseGoal_164);
                        }
#line 5367 "ll_backend.coverage_profiling.c"
                      }
#line 5369 "ll_backend.coverage_profiling.c"
                      break;
#line 5371 "ll_backend.coverage_profiling.c"
                    case (MR_Integer) 1:
#line 5373 "ll_backend.coverage_profiling.c"
                      {
#line 5375 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__ThenId_172;
#line 5377 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__ThenPath_173;
#line 5379 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__CPInfoThen_174;
#line 5381 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 1)));
#line 5383 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__Then1_177;
#line 5385 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_178;
#line 5387 "ll_backend.coverage_profiling.c"
                        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_179;
#line 665 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Then0_15, (MR_Integer) 0)));
#line 715 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__AddedImpurityThenGoal_168;
#line 718 "coverage_profiling.m"
                        MR_Word ll_backend__coverage_profiling__AddedImpurityElseGoal_169;

#line 665 "coverage_profiling.m"
                        {
#line 665 "coverage_profiling.m"
                          ll_backend__coverage_profiling__ThenId_172 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__V_175_175);
                        }
#line 666 "coverage_profiling.m"
                        {
#line 666 "coverage_profiling.m"
                          ll_backend__coverage_profiling__ThenPath_173 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_31, ll_backend__coverage_profiling__ThenId_172);
                        }
#line 667 "coverage_profiling.m"
                        {
#line 667 "coverage_profiling.m"
                          ll_backend__coverage_profiling__CPInfoThen_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "coverage_profiling.m"
                          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_174, 0) = ((MR_Box) (ll_backend__coverage_profiling__ThenPath_173));
#line 667 "coverage_profiling.m"
                          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfoThen_174, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 667 "coverage_profiling.m"
                        }
#line 715 "coverage_profiling.m"
                        {
#line 715 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then1_177, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_178, &ll_backend__coverage_profiling__AddedImpurityThenGoal_168);
                        }
#line 718 "coverage_profiling.m"
                        {
#line 718 "coverage_profiling.m"
                          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else1_206, (MR_Integer) 0, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_178, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_179, &ll_backend__coverage_profiling__AddedImpurityElseGoal_169);
                        }
#line 725 "coverage_profiling.m"
                        {
#line 725 "coverage_profiling.m"
                          ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoThen_174, ll_backend__coverage_profiling__Then1_177, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__STATE_VARIABLE_Info_68_179, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208);
                        }
#line 727 "coverage_profiling.m"
                        ll_backend__coverage_profiling__AddedImpurityThen_51 = (MR_Integer) 1;
#line 5433 "ll_backend.coverage_profiling.c"
                      }
#line 5435 "ll_backend.coverage_profiling.c"
                      break;
#line 5437 "ll_backend.coverage_profiling.c"
                  }
#line 735 "coverage_profiling.m"
                  {
#line 735 "coverage_profiling.m"
                    ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__CPInfoElse_144, ll_backend__coverage_profiling__Else1_206, &ll_backend__coverage_profiling__Else_53, ll_backend__coverage_profiling__STATE_VARIABLE_Info_69_208, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56);
                  }
#line 737 "coverage_profiling.m"
                  ll_backend__coverage_profiling__AddedImpurityElse_54 = (MR_Integer) 1;
#line 5446 "ll_backend.coverage_profiling.c"
                }
#line 5448 "ll_backend.coverage_profiling.c"
            }
#line 5450 "ll_backend.coverage_profiling.c"
            break;
#line 5452 "ll_backend.coverage_profiling.c"
        }
#line 5454 "ll_backend.coverage_profiling.c"
      }
#line 5456 "ll_backend.coverage_profiling.c"
    else
#line 5458 "ll_backend.coverage_profiling.c"
      {
#line 5460 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_108;

#line 715 "coverage_profiling.m"
        {
#line 715 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Then0_15, &ll_backend__coverage_profiling__Then_50, ll_backend__coverage_profiling__CoverageKnownBeforeThen0_25, &ll_backend__coverage_profiling__NextCoverageKnownThen_44, ll_backend__coverage_profiling__STATE_VARIABLE_Info_57_57, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_108, &ll_backend__coverage_profiling__AddedImpurityThen_51);
        }
#line 718 "coverage_profiling.m"
        {
#line 718 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Else0_16, &ll_backend__coverage_profiling__Else_53, (MR_Integer) 1, &ll_backend__coverage_profiling__NextCoverageKnownElse_47, ll_backend__coverage_profiling__STATE_VARIABLE_Info_67_108, ll_backend__coverage_profiling__STATE_VARIABLE_Info_56, &ll_backend__coverage_profiling__AddedImpurityElse_54);
        }
#line 5473 "ll_backend.coverage_profiling.c"
      }
#line 746 "coverage_profiling.m"
    {
#line 746 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_71_71 = mercury__bool__or_2_f_0(ll_backend__coverage_profiling__AddedImpurityThen_51, ll_backend__coverage_profiling__AddedImpurityElse_54);
    }
#line 745 "coverage_profiling.m"
    {
#line 745 "coverage_profiling.m"
      *ll_backend__coverage_profiling__AddedImpurity_21 = mercury__bool__or_2_f_0(ll_backend__coverage_profiling__AddedImpurityCond_24, ll_backend__coverage_profiling__V_71_71);
    }
#line 747 "coverage_profiling.m"
    {
#line 747 "coverage_profiling.m"
      MR_Word base;
#line 747 "coverage_profiling.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 747 "coverage_profiling.m"
      *ll_backend__coverage_profiling__GoalExpr_17 = base;
#line 747 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 747 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__ITEExistVars_13));
#line 747 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__coverage_profiling__Cond_22));
#line 747 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__coverage_profiling__Then_50));
#line 747 "coverage_profiling.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__coverage_profiling__Else_53));
#line 747 "coverage_profiling.m"
    }
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__NextCoverageKnownThen_44) {
#line 777 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
        switch (ll_backend__coverage_profiling__NextCoverageKnownElse_47) {
#line 777 "coverage_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
          case (MR_Integer) 0:
#line 778 "coverage_profiling.m"
            *ll_backend__coverage_profiling__NextCoverageBeforeKnown_19 = (MR_Integer) 0;
#line 777 "coverage_profiling.m"
            break;
#line 777 "coverage_profiling.m"
          case (MR_Integer) 1:
#line 780 "coverage_profiling.m"
            *ll_backend__coverage_profiling__NextCoverageBeforeKnown_19 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
            break;
#line 777 "coverage_profiling.m"
        }
#line 777 "coverage_profiling.m"
        break;
#line 777 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 782 "coverage_profiling.m"
        *ll_backend__coverage_profiling__NextCoverageBeforeKnown_19 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
        break;
#line 777 "coverage_profiling.m"
    }
#line 638 "coverage_profiling.m"
  }
#line 631 "coverage_profiling.m"
}

#line 539 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__SwitchCanFail_2,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8,
#line 539 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_10,
#line 539 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__11_11)
#line 539 "coverage_profiling.m"
{
#line 545 "coverage_profiling.m"
  {
#line 545 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 545 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "coverage_profiling.m"
      {
#line 545 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__11_11 = (MR_Integer) 0;
#line 546 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_Info_10 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9;
#line 546 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8 = ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7;
#line 545 "coverage_profiling.m"
      }
#line 545 "coverage_profiling.m"
    else
#line 550 "coverage_profiling.m"
      {
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Case0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 0)));
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Cases0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__3_3, (MR_Integer) 1)));
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Case_26;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Cases_27;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_24, (MR_Integer) 0)));
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_24, (MR_Integer) 1)));
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case0_24, (MR_Integer) 2)));
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CPOptions_39;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CPOBranchSwitch_40;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__IsMDProfInst_41;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CoverageAfterCaseKnown_46;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__Goal_52;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__AddedImpurityHead_53;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__AddedImpurityTail_55;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61;
#line 550 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_67_67;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_68_68;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_69_69;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_70_70;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_71_71;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_72_72;
#line 573 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_73_73;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_74_74;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_75_75;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_76_76;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_77_77;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_78_78;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_79_79;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_80_80;
#line 574 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_81_81;
#line 575 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_42_42;

#line 567 "coverage_profiling.m"
        if ((ll_backend__coverage_profiling__Cases0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 563 "coverage_profiling.m"
#line 563 "coverage_profiling.m"
          switch (ll_backend__coverage_profiling__SwitchCanFail_2) {
#line 563 "coverage_profiling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 563 "coverage_profiling.m"
            case (MR_Integer) 0:
#line 565 "coverage_profiling.m"
              ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
#line 563 "coverage_profiling.m"
              break;
#line 563 "coverage_profiling.m"
            case (MR_Integer) 1:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
              switch (ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5) {
#line 777 "coverage_profiling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
                case (MR_Integer) 0:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
                  switch (ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6) {
#line 777 "coverage_profiling.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
                    case (MR_Integer) 0:
#line 778 "coverage_profiling.m"
                      ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 0;
#line 777 "coverage_profiling.m"
                      break;
#line 777 "coverage_profiling.m"
                    case (MR_Integer) 1:
#line 780 "coverage_profiling.m"
                      ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                      break;
#line 777 "coverage_profiling.m"
                  }
#line 777 "coverage_profiling.m"
                  break;
#line 777 "coverage_profiling.m"
                case (MR_Integer) 1:
#line 782 "coverage_profiling.m"
                  ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                  break;
#line 777 "coverage_profiling.m"
              }
#line 563 "coverage_profiling.m"
              break;
#line 563 "coverage_profiling.m"
          }
#line 567 "coverage_profiling.m"
        else
#line 569 "coverage_profiling.m"
          ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 = (MR_Integer) 1;
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__CPOptions_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
#line 573 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__CPOBranchSwitch_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 574 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_39, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 575 "coverage_profiling.m"
        ll_backend__coverage_profiling__IsMDProfInst_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 0)));
#line 575 "coverage_profiling.m"
        ll_backend__coverage_profiling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1)));
#line 577 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CPOBranchSwitch_40 == (MR_Integer) 1);
#line 577 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 577 "coverage_profiling.m"
          {
#line 578 "coverage_profiling.m"
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36 == (MR_Integer) 1);
#line 577 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 579 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_41 == (MR_Integer) 1);
#line 577 "coverage_profiling.m"
          }
#line 5778 "ll_backend.coverage_profiling.c"
        if (ll_backend__coverage_profiling__succeeded)
#line 5780 "ll_backend.coverage_profiling.c"
          {
#line 5782 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__Goal1_45;
#line 5784 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__CaseId_48;
#line 5786 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__ContainingGoalMap_49;
#line 5788 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__CasePath_50;
#line 5790 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__CoveragePoint_51;
#line 5792 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60;
#line 5794 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__V_62_62;
#line 588 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__AddedImpurityHead0_47;
#line 597 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_82_82;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_83_83;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_84_84;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_85_85;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_86_86;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_87_87;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_88_88;
#line 598 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_89_89;

#line 582 "coverage_profiling.m"
            ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44 = (MR_Integer) 0;
#line 588 "coverage_profiling.m"
            {
#line 588 "coverage_profiling.m"
              ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Goal0_35, &ll_backend__coverage_profiling__Goal1_45, ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44, &ll_backend__coverage_profiling__CoverageAfterCaseKnown_46, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, &ll_backend__coverage_profiling__AddedImpurityHead0_47);
            }
#line 597 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_35, (MR_Integer) 0)));
#line 597 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_35, (MR_Integer) 1)));
#line 597 "coverage_profiling.m"
            {
#line 597 "coverage_profiling.m"
              ll_backend__coverage_profiling__CaseId_48 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__V_62_62);
            }
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 0)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 1)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 2)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 3)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 4)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 5)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 6)));
#line 598 "coverage_profiling.m"
            ll_backend__coverage_profiling__ContainingGoalMap_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, (MR_Integer) 7)));
#line 599 "coverage_profiling.m"
            {
#line 599 "coverage_profiling.m"
              ll_backend__coverage_profiling__CasePath_50 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_49, ll_backend__coverage_profiling__CaseId_48);
            }
#line 600 "coverage_profiling.m"
            {
#line 600 "coverage_profiling.m"
              ll_backend__coverage_profiling__CoveragePoint_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 600 "coverage_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoveragePoint_51, 0) = ((MR_Box) (ll_backend__coverage_profiling__CasePath_50));
#line 600 "coverage_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoveragePoint_51, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 600 "coverage_profiling.m"
            }
#line 601 "coverage_profiling.m"
            {
#line 601 "coverage_profiling.m"
              ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_39, ll_backend__coverage_profiling__CoveragePoint_51, ll_backend__coverage_profiling__Goal1_45, &ll_backend__coverage_profiling__Goal_52, ll_backend__coverage_profiling__STATE_VARIABLE_Info_60_60, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64);
            }
#line 603 "coverage_profiling.m"
            ll_backend__coverage_profiling__AddedImpurityHead_53 = (MR_Integer) 1;
#line 5869 "ll_backend.coverage_profiling.c"
          }
#line 5871 "ll_backend.coverage_profiling.c"
        else
#line 5873 "ll_backend.coverage_profiling.c"
          {
#line 585 "coverage_profiling.m"
            ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44 = ll_backend__coverage_profiling__CoverageBeforeCaseKnown0_36;
#line 588 "coverage_profiling.m"
            {
#line 588 "coverage_profiling.m"
              ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__Goal0_35, &ll_backend__coverage_profiling__Goal_52, ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44, &ll_backend__coverage_profiling__CoverageAfterCaseKnown_46, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_9, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64, &ll_backend__coverage_profiling__AddedImpurityHead_53);
            }
#line 5882 "ll_backend.coverage_profiling.c"
          }
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
        switch (ll_backend__coverage_profiling__CoverageAfterCaseKnown_46) {
#line 777 "coverage_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
          case (MR_Integer) 0:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
            switch (ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_0_7) {
#line 777 "coverage_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
              case (MR_Integer) 0:
#line 778 "coverage_profiling.m"
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 0;
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
              case (MR_Integer) 1:
#line 780 "coverage_profiling.m"
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
            }
#line 777 "coverage_profiling.m"
            break;
#line 777 "coverage_profiling.m"
          case (MR_Integer) 1:
#line 782 "coverage_profiling.m"
            ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
            break;
#line 777 "coverage_profiling.m"
        }
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
        switch (ll_backend__coverage_profiling__CoverageBeforeEveryCaseKnown_6) {
#line 777 "coverage_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
          case (MR_Integer) 0:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
            switch (ll_backend__coverage_profiling__CoverageBeforeCaseKnown_44) {
#line 777 "coverage_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
              case (MR_Integer) 0:
#line 778 "coverage_profiling.m"
                ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 0;
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
              case (MR_Integer) 1:
#line 780 "coverage_profiling.m"
                ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
            }
#line 777 "coverage_profiling.m"
            break;
#line 777 "coverage_profiling.m"
          case (MR_Integer) 1:
#line 782 "coverage_profiling.m"
            ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
            break;
#line 777 "coverage_profiling.m"
        }
#line 616 "coverage_profiling.m"
        {
#line 616 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(ll_backend__coverage_profiling__DPInfo_1, ll_backend__coverage_profiling__SwitchCanFail_2, ll_backend__coverage_profiling__Cases0_25, &ll_backend__coverage_profiling__Cases_27, ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_5, ll_backend__coverage_profiling__NextCoverageBeforeEveryCaseKnown_54, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_61_61, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterSwitchKnown_8, ll_backend__coverage_profiling__STATE_VARIABLE_Info_64_64, ll_backend__coverage_profiling__STATE_VARIABLE_Info_10, &ll_backend__coverage_profiling__AddedImpurityTail_55);
        }
#line 620 "coverage_profiling.m"
        {
#line 620 "coverage_profiling.m"
          ll_backend__coverage_profiling__Case_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_26, 0) = ((MR_Box) (ll_backend__coverage_profiling__MainConsId_33));
#line 620 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_26, 1) = ((MR_Box) (ll_backend__coverage_profiling__OtherConsIds_34));
#line 620 "coverage_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Case_26, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goal_52));
#line 620 "coverage_profiling.m"
        }
#line 548 "coverage_profiling.m"
        {
#line 548 "coverage_profiling.m"
          MR_Word base;
#line 548 "coverage_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__4_4 = base;
#line 548 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__Case_26));
#line 548 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__Cases_27));
#line 548 "coverage_profiling.m"
        }
#line 621 "coverage_profiling.m"
        {
#line 621 "coverage_profiling.m"
          mercury__bool__or_3_p_0(ll_backend__coverage_profiling__AddedImpurityHead_53, ll_backend__coverage_profiling__AddedImpurityTail_55, ll_backend__coverage_profiling__HeadVar__11_11);
#line 621 "coverage_profiling.m"
          return;
        }
#line 550 "coverage_profiling.m"
      }
#line 545 "coverage_profiling.m"
  }
#line 539 "coverage_profiling.m"
}

#line 517 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_10,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CanFail_11,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Cases0_12,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Cases_13,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_14,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__CoverageAfterSwitchKnown_15,
#line 517 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
#line 517 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_17)
#line 517 "coverage_profiling.m"
{
#line 524 "coverage_profiling.m"
  {
#line 524 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 524 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18;

#line 529 "coverage_profiling.m"
#line 529 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__CanFail_11) {
#line 529 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 529 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 528 "coverage_profiling.m"
        ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18 = (MR_Integer) 1;
#line 529 "coverage_profiling.m"
        break;
#line 529 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 531 "coverage_profiling.m"
        ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18 = (MR_Integer) 0;
#line 529 "coverage_profiling.m"
        break;
#line 529 "coverage_profiling.m"
    }
#line 534 "coverage_profiling.m"
    {
#line 534 "coverage_profiling.m"
      ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_p_0(ll_backend__coverage_profiling__DPInfo_10, ll_backend__coverage_profiling__CanFail_11, ll_backend__coverage_profiling__Cases0_12, ll_backend__coverage_profiling__Cases_13, ll_backend__coverage_profiling__CoverageBeforeSwitchKnown_14, (MR_Integer) 0, ll_backend__coverage_profiling__CoverageAfterSwitchKnown0_18, ll_backend__coverage_profiling__CoverageAfterSwitchKnown_15, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20, ll_backend__coverage_profiling__STATE_VARIABLE_Info_21, ll_backend__coverage_profiling__AddedImpurity_17);
#line 534 "coverage_profiling.m"
      return;
    }
#line 524 "coverage_profiling.m"
  }
#line 517 "coverage_profiling.m"
}

#line 460 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_1,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown0_2,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__3_3,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__4_4,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__5_5,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__6_6,
#line 460 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_8,
#line 460 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__9_9)
#line 460 "coverage_profiling.m"
{
#line 466 "coverage_profiling.m"
  {
#line 466 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 466 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "coverage_profiling.m"
      {
#line 466 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__9_9 = (MR_Integer) 0;
#line 466 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_Info_8 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7;
#line 466 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__4_4 = ll_backend__coverage_profiling__HeadVar__3_3;
#line 466 "coverage_profiling.m"
      }
#line 466 "coverage_profiling.m"
    else
#line 470 "coverage_profiling.m"
      {
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__HeadDisjunct0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__5_5, (MR_Integer) 0)));
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TailDisjuncts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__5_5, (MR_Integer) 1)));
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__HeadDisjunct_23;
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TailDisjuncts_24;
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CPOptions_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CPOBranchDisj_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 470 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__IsMDProfInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 0)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 473 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 474 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_27, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 475 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1)));

#line 477 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CPOBranchDisj_28 == (MR_Integer) 1);
#line 477 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 477 "coverage_profiling.m"
          {
#line 478 "coverage_profiling.m"
            ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeKnown0_2 == (MR_Integer) 1);
#line 477 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 479 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_29 == (MR_Integer) 1);
#line 477 "coverage_profiling.m"
          }
#line 6169 "ll_backend.coverage_profiling.c"
        if (ll_backend__coverage_profiling__succeeded)
#line 6171 "ll_backend.coverage_profiling.c"
          {
#line 6173 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__HeadDisjunct1_33;
#line 6175 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__CoverageAfterDisjKnown_34;
#line 6177 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__DisjId_37;
#line 6179 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__ContainingGoalMap_38;
#line 6181 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__DisjPath_39;
#line 6183 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__HeadCoveragePoint_40;
#line 6185 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_45;
#line 6187 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46;
#line 6189 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49;
#line 6191 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__V_50_50;
#line 488 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__AddedImpurityHead_35;
#line 492 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__AddedImpurityTail_36;
#line 499 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_68_68;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_69_69;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_70_70;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_71_71;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_72_72;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_73_73;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_74_74;
#line 500 "coverage_profiling.m"
            MR_Word ll_backend__coverage_profiling__V_75_75;

#line 488 "coverage_profiling.m"
            {
#line 488 "coverage_profiling.m"
              ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__HeadDisjunct0_21, &ll_backend__coverage_profiling__HeadDisjunct1_33, (MR_Integer) 0, &ll_backend__coverage_profiling__CoverageAfterDisjKnown_34, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_45, &ll_backend__coverage_profiling__AddedImpurityHead_35);
            }
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
            switch (ll_backend__coverage_profiling__HeadVar__3_3) {
#line 777 "coverage_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
              case (MR_Integer) 0:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
                switch (ll_backend__coverage_profiling__CoverageAfterDisjKnown_34) {
#line 777 "coverage_profiling.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
                  case (MR_Integer) 0:
#line 778 "coverage_profiling.m"
                    ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 0;
#line 777 "coverage_profiling.m"
                    break;
#line 777 "coverage_profiling.m"
                  case (MR_Integer) 1:
#line 780 "coverage_profiling.m"
                    ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                    break;
#line 777 "coverage_profiling.m"
                }
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
              case (MR_Integer) 1:
#line 782 "coverage_profiling.m"
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
            }
#line 492 "coverage_profiling.m"
            {
#line 492 "coverage_profiling.m"
              ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_46, ll_backend__coverage_profiling__HeadVar__4_4, ll_backend__coverage_profiling__TailDisjuncts0_22, &ll_backend__coverage_profiling__TailDisjuncts_24, ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_45, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, &ll_backend__coverage_profiling__AddedImpurityTail_36);
            }
#line 499 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadDisjunct0_21, (MR_Integer) 0)));
#line 499 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadDisjunct0_21, (MR_Integer) 1)));
#line 499 "coverage_profiling.m"
            {
#line 499 "coverage_profiling.m"
              ll_backend__coverage_profiling__DisjId_37 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__V_50_50);
            }
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 1)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
#line 500 "coverage_profiling.m"
            ll_backend__coverage_profiling__ContainingGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
#line 501 "coverage_profiling.m"
            {
#line 501 "coverage_profiling.m"
              ll_backend__coverage_profiling__DisjPath_39 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_38, ll_backend__coverage_profiling__DisjId_37);
            }
#line 502 "coverage_profiling.m"
            {
#line 502 "coverage_profiling.m"
              ll_backend__coverage_profiling__HeadCoveragePoint_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "coverage_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadCoveragePoint_40, 0) = ((MR_Box) (ll_backend__coverage_profiling__DisjPath_39));
#line 502 "coverage_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadCoveragePoint_40, 1) = ((MR_Box) (((int) MR_cp_type_branch_arm)));
#line 502 "coverage_profiling.m"
            }
#line 503 "coverage_profiling.m"
            {
#line 503 "coverage_profiling.m"
              ll_backend__coverage_profiling__insert_coverage_point_before_6_p_0(ll_backend__coverage_profiling__CPOptions_27, ll_backend__coverage_profiling__HeadCoveragePoint_40, ll_backend__coverage_profiling__HeadDisjunct1_33, &ll_backend__coverage_profiling__HeadDisjunct_23, ll_backend__coverage_profiling__STATE_VARIABLE_Info_49_49, ll_backend__coverage_profiling__STATE_VARIABLE_Info_8);
            }
#line 505 "coverage_profiling.m"
            *ll_backend__coverage_profiling__HeadVar__9_9 = (MR_Integer) 1;
#line 6307 "ll_backend.coverage_profiling.c"
          }
#line 6309 "ll_backend.coverage_profiling.c"
        else
#line 6311 "ll_backend.coverage_profiling.c"
          {
#line 6313 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__CoverageAfterDisjKnown_81;
#line 6315 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__AddedImpurityHead_82;
#line 6317 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__AddedImpurityTail_83;
#line 6319 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_84;
#line 6321 "ll_backend.coverage_profiling.c"
            MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85;

#line 488 "coverage_profiling.m"
            {
#line 488 "coverage_profiling.m"
              ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__HeadDisjunct0_21, &ll_backend__coverage_profiling__HeadDisjunct_23, ll_backend__coverage_profiling__CoverageBeforeKnown0_2, &ll_backend__coverage_profiling__CoverageAfterDisjKnown_81, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_7, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_84, &ll_backend__coverage_profiling__AddedImpurityHead_82);
            }
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
            switch (ll_backend__coverage_profiling__HeadVar__3_3) {
#line 777 "coverage_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
              case (MR_Integer) 0:
#line 777 "coverage_profiling.m"
#line 777 "coverage_profiling.m"
                switch (ll_backend__coverage_profiling__CoverageAfterDisjKnown_81) {
#line 777 "coverage_profiling.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 777 "coverage_profiling.m"
                  case (MR_Integer) 0:
#line 778 "coverage_profiling.m"
                    ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 0;
#line 777 "coverage_profiling.m"
                    break;
#line 777 "coverage_profiling.m"
                  case (MR_Integer) 1:
#line 780 "coverage_profiling.m"
                    ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                    break;
#line 777 "coverage_profiling.m"
                }
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
              case (MR_Integer) 1:
#line 782 "coverage_profiling.m"
                ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85 = (MR_Integer) 1;
#line 777 "coverage_profiling.m"
                break;
#line 777 "coverage_profiling.m"
            }
#line 492 "coverage_profiling.m"
            {
#line 492 "coverage_profiling.m"
              ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(ll_backend__coverage_profiling__DPInfo_1, (MR_Integer) 1, ll_backend__coverage_profiling__STATE_VARIABLE_CoverageAfterKnown_46_85, ll_backend__coverage_profiling__HeadVar__4_4, ll_backend__coverage_profiling__TailDisjuncts0_22, &ll_backend__coverage_profiling__TailDisjuncts_24, ll_backend__coverage_profiling__STATE_VARIABLE_Info_45_84, ll_backend__coverage_profiling__STATE_VARIABLE_Info_8, &ll_backend__coverage_profiling__AddedImpurityTail_83);
            }
#line 509 "coverage_profiling.m"
            {
#line 509 "coverage_profiling.m"
              *ll_backend__coverage_profiling__HeadVar__9_9 = mercury__bool__or_2_f_0(ll_backend__coverage_profiling__AddedImpurityHead_82, ll_backend__coverage_profiling__AddedImpurityTail_83);
            }
#line 6375 "ll_backend.coverage_profiling.c"
          }
#line 469 "coverage_profiling.m"
        {
#line 469 "coverage_profiling.m"
          MR_Word base;
#line 469 "coverage_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "coverage_profiling.m"
          *ll_backend__coverage_profiling__HeadVar__6_6 = base;
#line 469 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__HeadDisjunct_23));
#line 469 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__TailDisjuncts_24));
#line 469 "coverage_profiling.m"
        }
#line 470 "coverage_profiling.m"
      }
#line 466 "coverage_profiling.m"
  }
#line 460 "coverage_profiling.m"
}

#line 426 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__DPInfo_9,
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Disjuncts0_12,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Disjuncts_13,
#line 426 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_21,
#line 426 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_15)
#line 426 "coverage_profiling.m"
{
#line 454 "coverage_profiling.m"
  {
#line 454 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 454 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__FirstDisjunct0_17;
#line 454 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_23_23;
#line 439 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__SecondDisjunct_18;
#line 439 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_9, (MR_Integer) 0)));
#line 439 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_24_24;
#line 439 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_25_25;
#line 439 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_26_26;
#line 439 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_9, (MR_Integer) 1)));
#line 441 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_32_32;

#line 439 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_22_22 == (MR_Integer) 0);
#line 439 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 439 "coverage_profiling.m"
      {
#line 440 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__Disjuncts0_12)) == (MR_mktag((MR_Integer) 1)));
#line 440 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 440 "coverage_profiling.m"
          {
#line 440 "coverage_profiling.m"
            ll_backend__coverage_profiling__FirstDisjunct0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Disjuncts0_12, (MR_Integer) 0)));
#line 440 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__Disjuncts0_12, (MR_Integer) 1)));
#line 440 "coverage_profiling.m"
            ll_backend__coverage_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__coverage_profiling__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 440 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 440 "coverage_profiling.m"
              {
#line 440 "coverage_profiling.m"
                ll_backend__coverage_profiling__SecondDisjunct_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_23_23, (MR_Integer) 0)));
#line 440 "coverage_profiling.m"
                ll_backend__coverage_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_23_23, (MR_Integer) 1)));
#line 440 "coverage_profiling.m"
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "coverage_profiling.m"
                if (ll_backend__coverage_profiling__succeeded)
#line 439 "coverage_profiling.m"
                  {
#line 441 "coverage_profiling.m"
                    ll_backend__coverage_profiling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__SecondDisjunct_18, (MR_Integer) 0)));
#line 441 "coverage_profiling.m"
                    ll_backend__coverage_profiling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__SecondDisjunct_18, (MR_Integer) 1)));
#line 441 "coverage_profiling.m"
                    {
#line 441 "coverage_profiling.m"
                      ll_backend__coverage_profiling__V_25_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__V_26_26);
                    }
#line 442 "coverage_profiling.m"
                    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_25_25 == (MR_Integer) 7);
#line 439 "coverage_profiling.m"
                  }
#line 440 "coverage_profiling.m"
              }
#line 440 "coverage_profiling.m"
          }
#line 439 "coverage_profiling.m"
      }
#line 454 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 452 "coverage_profiling.m"
      {
#line 452 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__FirstDisjunct_19;

#line 450 "coverage_profiling.m"
        {
#line 450 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__FirstDisjunct0_17, &ll_backend__coverage_profiling__FirstDisjunct_19, ll_backend__coverage_profiling__CoverageBeforeKnown_10, ll_backend__coverage_profiling__NextCoverageBeforeKnown_11, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20, ll_backend__coverage_profiling__STATE_VARIABLE_Info_21, ll_backend__coverage_profiling__AddedImpurity_15);
        }
#line 453 "coverage_profiling.m"
        {
#line 453 "coverage_profiling.m"
          MR_Word base;
#line 453 "coverage_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "coverage_profiling.m"
          *ll_backend__coverage_profiling__Disjuncts_13 = base;
#line 453 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__FirstDisjunct_19));
#line 453 "coverage_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_23_23));
#line 453 "coverage_profiling.m"
        }
#line 452 "coverage_profiling.m"
      }
#line 454 "coverage_profiling.m"
    else
#line 455 "coverage_profiling.m"
      {
#line 455 "coverage_profiling.m"
        {
#line 455 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_p_0(ll_backend__coverage_profiling__DPInfo_9, ll_backend__coverage_profiling__CoverageBeforeKnown_10, (MR_Integer) 0, ll_backend__coverage_profiling__NextCoverageBeforeKnown_11, ll_backend__coverage_profiling__Disjuncts0_12, ll_backend__coverage_profiling__Disjuncts_13, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_20, ll_backend__coverage_profiling__STATE_VARIABLE_Info_21, ll_backend__coverage_profiling__AddedImpurity_15);
#line 455 "coverage_profiling.m"
          return;
        }
#line 455 "coverage_profiling.m"
      }
#line 454 "coverage_profiling.m"
  }
#line 426 "coverage_profiling.m"
}

#line 397 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ConjType_1,
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__2_2,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__3_3,
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__HeadVar__4_4,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__5_5,
#line 397 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_7,
#line 397 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__HeadVar__8_8)
#line 397 "coverage_profiling.m"
{
#line 402 "coverage_profiling.m"
  {
#line 402 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 402 "coverage_profiling.m"
    if ((ll_backend__coverage_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "coverage_profiling.m"
      {
#line 402 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 402 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__8_8 = (MR_Integer) 0;
#line 402 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_Info_7 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6;
#line 402 "coverage_profiling.m"
        *ll_backend__coverage_profiling__HeadVar__5_5 = ll_backend__coverage_profiling__HeadVar__4_4;
#line 402 "coverage_profiling.m"
      }
#line 402 "coverage_profiling.m"
    else
#line 404 "coverage_profiling.m"
      {
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__HeadGoal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TailGoals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__HeadGoal_24;
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__CoverageBeforeTailKnown_25;
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__AddedImpurityHead_26;
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__TailGoals_27;
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__AddedImpurityTail_28;
#line 404 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_33_33;
#line 418 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__HeadConjGoals_29;
#line 414 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_35_35;
#line 414 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_36_36;
#line 414 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_30_30;

#line 405 "coverage_profiling.m"
        {
#line 405 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__HeadGoal0_17, &ll_backend__coverage_profiling__HeadGoal_24, ll_backend__coverage_profiling__HeadVar__4_4, &ll_backend__coverage_profiling__CoverageBeforeTailKnown_25, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_6, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_33_33, &ll_backend__coverage_profiling__AddedImpurityHead_26);
        }
#line 408 "coverage_profiling.m"
        {
#line 408 "coverage_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ll_backend__coverage_profiling__ConjType_1, ll_backend__coverage_profiling__TailGoals0_18, &ll_backend__coverage_profiling__TailGoals_27, ll_backend__coverage_profiling__CoverageBeforeTailKnown_25, ll_backend__coverage_profiling__HeadVar__5_5, ll_backend__coverage_profiling__STATE_VARIABLE_Info_33_33, ll_backend__coverage_profiling__STATE_VARIABLE_Info_7, &ll_backend__coverage_profiling__AddedImpurityTail_28);
        }
#line 415 "coverage_profiling.m"
        ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ConjType_1 == (MR_Integer) 0);
#line 414 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 414 "coverage_profiling.m"
          {
#line 414 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadGoal_24, (MR_Integer) 0)));
#line 414 "coverage_profiling.m"
            ll_backend__coverage_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__HeadGoal_24, (MR_Integer) 1)));
#line 414 "coverage_profiling.m"
            ll_backend__coverage_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__coverage_profiling__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 414 "coverage_profiling.m"
            if (ll_backend__coverage_profiling__succeeded)
#line 414 "coverage_profiling.m"
              {
#line 414 "coverage_profiling.m"
                ll_backend__coverage_profiling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_35_35, (MR_Integer) 1)));
#line 414 "coverage_profiling.m"
                ll_backend__coverage_profiling__HeadConjGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__V_35_35, (MR_Integer) 2)));
#line 414 "coverage_profiling.m"
                ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__V_36_36 == (MR_Integer) 0);
#line 414 "coverage_profiling.m"
              }
#line 414 "coverage_profiling.m"
          }
#line 418 "coverage_profiling.m"
        if (ll_backend__coverage_profiling__succeeded)
#line 417 "coverage_profiling.m"
          {
#line 417 "coverage_profiling.m"
            {
#line 417 "coverage_profiling.m"
              *ll_backend__coverage_profiling__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__coverage_profiling__HeadConjGoals_29, ll_backend__coverage_profiling__TailGoals_27);
            }
#line 417 "coverage_profiling.m"
          }
#line 418 "coverage_profiling.m"
        else
#line 419 "coverage_profiling.m"
          {
#line 419 "coverage_profiling.m"
            MR_Word base;
#line 419 "coverage_profiling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "coverage_profiling.m"
            *ll_backend__coverage_profiling__HeadVar__3_3 = base;
#line 419 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__coverage_profiling__HeadGoal_24));
#line 419 "coverage_profiling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__coverage_profiling__TailGoals_27));
#line 419 "coverage_profiling.m"
          }
#line 421 "coverage_profiling.m"
        {
#line 421 "coverage_profiling.m"
          mercury__bool__or_3_p_0(ll_backend__coverage_profiling__AddedImpurityHead_26, ll_backend__coverage_profiling__AddedImpurityTail_28, ll_backend__coverage_profiling__HeadVar__8_8);
#line 421 "coverage_profiling.m"
          return;
        }
#line 404 "coverage_profiling.m"
      }
#line 402 "coverage_profiling.m"
  }
#line 397 "coverage_profiling.m"
}

#line 372 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(
#line 372 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Detism_4,
#line 372 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6,
#line 372 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7)
#line 372 "coverage_profiling.m"
{
#line 383 "coverage_profiling.m"
  {
#line 383 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;

#line 383 "coverage_profiling.m"
#line 383 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__Detism_4) {
#line 383 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 383 "coverage_profiling.m"
      case (MR_Integer) 4:
#line 387 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7 = ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6;
#line 383 "coverage_profiling.m"
        break;
#line 383 "coverage_profiling.m"
      case (MR_Integer) 5:
#line 383 "coverage_profiling.m"
      case (MR_Integer) 6:
#line 383 "coverage_profiling.m"
      case (MR_Integer) 7:
#line 383 "coverage_profiling.m"
      case (MR_Integer) 2:
#line 383 "coverage_profiling.m"
      case (MR_Integer) 3:
#line 383 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 384 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7 = (MR_Integer) 1;
#line 383 "coverage_profiling.m"
        break;
#line 383 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 386 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_7 = ll_backend__coverage_profiling__STATE_VARIABLE_CoverageKnown_0_6;
#line 383 "coverage_profiling.m"
        break;
#line 383 "coverage_profiling.m"
    }
#line 383 "coverage_profiling.m"
  }
#line 372 "coverage_profiling.m"
}

#line 186 "coverage_profiling.m"
static void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(
#line 186 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__Goal0_8,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__Goal_9,
#line 186 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__CoverageBeforeKnown_10,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__NextCoverageBeforeKnown_11,
#line 186 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Info_91,
#line 186 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__AddedImpurity_13)
#line 186 "coverage_profiling.m"
{
#line 191 "coverage_profiling.m"
  {
#line 191 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_8, (MR_Integer) 0)));
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal0_8, (MR_Integer) 1)));
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Detism_16;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalId_17;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CPOptions_18;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__DPInfo_19;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__IsMDProfInst_20;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__AddedImpurityInner_37;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalExpr1_38;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__GoalInfo1_83;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Goal1_84;
#line 191 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_114_114;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_115_115;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_116_116;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_117_117;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_118_118;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_119_119;
#line 195 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_120_120;
#line 200 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling___MaybeDPCoverageInfo_21;

#line 193 "coverage_profiling.m"
    {
#line 193 "coverage_profiling.m"
      ll_backend__coverage_profiling__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__GoalInfo0_15);
    }
#line 194 "coverage_profiling.m"
    {
#line 194 "coverage_profiling.m"
      ll_backend__coverage_profiling__GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__coverage_profiling__GoalInfo0_15);
    }
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 0)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 1)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 2)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 3)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 4)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 5)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__CPOptions_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 6)));
#line 195 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, (MR_Integer) 7)));
#line 199 "coverage_profiling.m"
    {
#line 199 "coverage_profiling.m"
      ll_backend__coverage_profiling__DPInfo_19 = ll_backend__coverage_profiling__goal_info_get_dp_info_1_f_0(ll_backend__coverage_profiling__GoalInfo0_15);
    }
#line 200 "coverage_profiling.m"
    ll_backend__coverage_profiling__IsMDProfInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_19, (MR_Integer) 0)));
#line 200 "coverage_profiling.m"
    ll_backend__coverage_profiling___MaybeDPCoverageInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__DPInfo_19, (MR_Integer) 1)));
#line 203 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_20 == (MR_Integer) 1);
#line 203 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 204 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__CoverageBeforeKnown_10 == (MR_Integer) 1);
#line 210 "coverage_profiling.m"
    if (ll_backend__coverage_profiling__succeeded)
#line 206 "coverage_profiling.m"
      {
#line 206 "coverage_profiling.m"
        MR_Integer ll_backend__coverage_profiling__GoalNum_22 = (MR_Integer) ll_backend__coverage_profiling__GoalId_17;
#line 206 "coverage_profiling.m"
        MR_String ll_backend__coverage_profiling__UnknownMsg_23;
#line 206 "coverage_profiling.m"
        MR_String ll_backend__coverage_profiling__V_139_139;
#line 206 "coverage_profiling.m"
        MR_String ll_backend__coverage_profiling__V_146_146;

#line 208 "coverage_profiling.m"
        {
#line 208 "coverage_profiling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__coverage_profiling_scalar_common_3[0], ll_backend__coverage_profiling__GoalNum_22, &ll_backend__coverage_profiling__V_139_139);
        }
#line 207 "coverage_profiling.m"
        {
#line 207 "coverage_profiling.m"
          ll_backend__coverage_profiling__V_146_146 = mercury__string__f_43_43_2_f_0(ll_backend__coverage_profiling__V_139_139, (MR_String) "\n");
        }
#line 207 "coverage_profiling.m"
        {
#line 207 "coverage_profiling.m"
          ll_backend__coverage_profiling__UnknownMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "Coverage information is unknown for goal_id ", ll_backend__coverage_profiling__V_146_146);
        }
#line 209 "coverage_profiling.m"
        {
#line 209 "coverage_profiling.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", ll_backend__coverage_profiling__UnknownMsg_23);
#line 209 "coverage_profiling.m"
          return;
        }
#line 206 "coverage_profiling.m"
      }
#line 210 "coverage_profiling.m"
    else
#line 211 "coverage_profiling.m"
      {
#line 211 "coverage_profiling.m"
      }
#line 231 "coverage_profiling.m"
#line 231 "coverage_profiling.m"
    switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GoalExpr0_14)) {
#line 231 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 231 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 286 "coverage_profiling.m"
        {
#line 286 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__NegGoal0_68 = (MR_Word) MR_body(((MR_Word) ll_backend__coverage_profiling__GoalExpr0_14), (MR_Integer) 0);
#line 286 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__NegGoal_69;
#line 287 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_70_70;

#line 287 "coverage_profiling.m"
          {
#line 287 "coverage_profiling.m"
            ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__NegGoal0_68, &ll_backend__coverage_profiling__NegGoal_69, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__V_70_70, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
          }
#line 291 "coverage_profiling.m"
          ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
#line 292 "coverage_profiling.m"
          ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__coverage_profiling__NegGoal_69);
#line 286 "coverage_profiling.m"
        }
#line 231 "coverage_profiling.m"
        break;
#line 231 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 226 "coverage_profiling.m"
        {
#line 227 "coverage_profiling.m"
          {
#line 227 "coverage_profiling.m"
            ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
          }
#line 229 "coverage_profiling.m"
          ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
#line 230 "coverage_profiling.m"
          ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
#line 226 "coverage_profiling.m"
          ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
#line 226 "coverage_profiling.m"
        }
#line 231 "coverage_profiling.m"
        break;
#line 231 "coverage_profiling.m"
      case (MR_Integer) 2:
#line 256 "coverage_profiling.m"
        {
#line 256 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__BuiltinState_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
#line 233 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 0)));
#line 233 "coverage_profiling.m"
          MR_Integer ll_backend__coverage_profiling__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 233 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
#line 233 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 4)));
#line 233 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 5)));

#line 6956 "ll_backend.coverage_profiling.c"
#line 6957 "ll_backend.coverage_profiling.c"
          switch (ll_backend__coverage_profiling__BuiltinState_42) {
#line 6959 "ll_backend.coverage_profiling.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 6961 "ll_backend.coverage_profiling.c"
            case (MR_Integer) 0:
#line 262 "coverage_profiling.m"
              {
#line 262 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
              }
#line 6968 "ll_backend.coverage_profiling.c"
              break;
#line 6970 "ll_backend.coverage_profiling.c"
            case (MR_Integer) 2:
#line 6972 "ll_backend.coverage_profiling.c"
            case (MR_Integer) 1:
#line 259 "coverage_profiling.m"
              ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 0;
#line 6976 "ll_backend.coverage_profiling.c"
              break;
#line 6978 "ll_backend.coverage_profiling.c"
          }
#line 265 "coverage_profiling.m"
          ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
#line 266 "coverage_profiling.m"
          ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
#line 256 "coverage_profiling.m"
          ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
#line 256 "coverage_profiling.m"
        }
#line 231 "coverage_profiling.m"
        break;
#line 231 "coverage_profiling.m"
      case (MR_Integer) 3:
#line 231 "coverage_profiling.m"
#line 231 "coverage_profiling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 0)))) {
#line 231 "coverage_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 231 "coverage_profiling.m"
          case (MR_Integer) 0:
#line 256 "coverage_profiling.m"
            {
#line 256 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__GenericCall_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 244 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
#line 244 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
#line 244 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 4)));
#line 244 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 5)));

#line 7012 "ll_backend.coverage_profiling.c"
#line 7013 "ll_backend.coverage_profiling.c"
              switch (MR_tag((MR_Word) ll_backend__coverage_profiling__GenericCall_46)) {
#line 7015 "ll_backend.coverage_profiling.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 7017 "ll_backend.coverage_profiling.c"
                case (MR_Integer) 0:
#line 7019 "ll_backend.coverage_profiling.c"
                case (MR_Integer) 1:
#line 259 "coverage_profiling.m"
                  ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 0;
#line 7023 "ll_backend.coverage_profiling.c"
                  break;
#line 7025 "ll_backend.coverage_profiling.c"
                case (MR_Integer) 2:
#line 7027 "ll_backend.coverage_profiling.c"
                case (MR_Integer) 3:
#line 262 "coverage_profiling.m"
                  {
#line 262 "coverage_profiling.m"
                    ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
                  }
#line 7034 "ll_backend.coverage_profiling.c"
                  break;
#line 7036 "ll_backend.coverage_profiling.c"
              }
#line 265 "coverage_profiling.m"
              ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
#line 266 "coverage_profiling.m"
              ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
#line 256 "coverage_profiling.m"
              ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
#line 256 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 1:
#line 226 "coverage_profiling.m"
            {
#line 227 "coverage_profiling.m"
              {
#line 227 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_p_0(ll_backend__coverage_profiling__Detism_16, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36);
              }
#line 229 "coverage_profiling.m"
              ll_backend__coverage_profiling__AddedImpurityInner_37 = (MR_Integer) 0;
#line 230 "coverage_profiling.m"
              ll_backend__coverage_profiling__GoalExpr1_38 = ll_backend__coverage_profiling__GoalExpr0_14;
#line 226 "coverage_profiling.m"
              ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90;
#line 226 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 2:
#line 268 "coverage_profiling.m"
            {
#line 268 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ConjType_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 268 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
#line 268 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals_63;

#line 269 "coverage_profiling.m"
              {
#line 269 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_p_0(ll_backend__coverage_profiling__ConjType_61, ll_backend__coverage_profiling__Goals0_62, &ll_backend__coverage_profiling__Goals_63, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              }
#line 272 "coverage_profiling.m"
              {
#line 272 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 272 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 272 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__ConjType_61));
#line 272 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 2) = ((MR_Box) (ll_backend__coverage_profiling__Goals_63));
#line 272 "coverage_profiling.m"
              }
#line 268 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 3:
#line 274 "coverage_profiling.m"
            {
#line 274 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 274 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Goals_113;

#line 275 "coverage_profiling.m"
              {
#line 275 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_p_0(ll_backend__coverage_profiling__DPInfo_19, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__Goals0_112, &ll_backend__coverage_profiling__Goals_113, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              }
#line 278 "coverage_profiling.m"
              {
#line 278 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 278 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__Goals_113));
#line 278 "coverage_profiling.m"
              }
#line 274 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 4:
#line 280 "coverage_profiling.m"
            {
#line 280 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 280 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__SwitchCanFail_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
#line 280 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Cases0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
#line 280 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Cases_67;

#line 281 "coverage_profiling.m"
              {
#line 281 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_p_0(ll_backend__coverage_profiling__DPInfo_19, ll_backend__coverage_profiling__SwitchCanFail_65, ll_backend__coverage_profiling__Cases0_66, &ll_backend__coverage_profiling__Cases_67, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              }
#line 284 "coverage_profiling.m"
              {
#line 284 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 284 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 284 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__Var_64));
#line 284 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 2) = ((MR_Box) (ll_backend__coverage_profiling__SwitchCanFail_65));
#line 284 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 3) = ((MR_Box) (ll_backend__coverage_profiling__Cases_67));
#line 284 "coverage_profiling.m"
              }
#line 280 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 5:
#line 294 "coverage_profiling.m"
            {
#line 294 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Reason_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 294 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ScopeGoal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
#line 294 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ScopeGoal_73;
#line 294 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__CoverageAfterScopedGoalKnown_74;
#line 294 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ScopedGoalDetism_75;
#line 294 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_103_103;
#line 303 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_121_121;

#line 298 "coverage_profiling.m"
              {
#line 298 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__ScopeGoal0_72, &ll_backend__coverage_profiling__ScopeGoal_73, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__CoverageAfterScopedGoalKnown_74, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              }
#line 303 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__ScopeGoal0_72, (MR_Integer) 0)));
#line 303 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__ScopeGoal0_72, (MR_Integer) 1)));
#line 303 "coverage_profiling.m"
              {
#line 303 "coverage_profiling.m"
                ll_backend__coverage_profiling__ScopedGoalDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__coverage_profiling__V_103_103);
              }
#line 305 "coverage_profiling.m"
              ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__ScopedGoalDetism_75 == ll_backend__coverage_profiling__Detism_16);
#line 307 "coverage_profiling.m"
              if (ll_backend__coverage_profiling__succeeded)
#line 306 "coverage_profiling.m"
                ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = ll_backend__coverage_profiling__CoverageAfterScopedGoalKnown_74;
#line 307 "coverage_profiling.m"
              else
#line 308 "coverage_profiling.m"
                ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 = (MR_Integer) 1;
#line 310 "coverage_profiling.m"
              {
#line 310 "coverage_profiling.m"
                ll_backend__coverage_profiling__GoalExpr1_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 310 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 1) = ((MR_Box) (ll_backend__coverage_profiling__Reason_71));
#line 310 "coverage_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr1_38, 2) = ((MR_Box) (ll_backend__coverage_profiling__ScopeGoal_73));
#line 310 "coverage_profiling.m"
              }
#line 294 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 6:
#line 312 "coverage_profiling.m"
            {
#line 312 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__ITEExistVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 1)));
#line 312 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Cond_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 2)));
#line 312 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Then_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 3)));
#line 312 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__Else_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__coverage_profiling__GoalExpr0_14, (MR_Integer) 4)));

#line 313 "coverage_profiling.m"
              {
#line 313 "coverage_profiling.m"
                ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_p_0(ll_backend__coverage_profiling__DPInfo_19, ll_backend__coverage_profiling__ITEExistVars_76, ll_backend__coverage_profiling__Cond_77, ll_backend__coverage_profiling__Then_78, ll_backend__coverage_profiling__Else_79, &ll_backend__coverage_profiling__GoalExpr1_38, ll_backend__coverage_profiling__CoverageBeforeKnown_10, &ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36, ll_backend__coverage_profiling__STATE_VARIABLE_Info_0_90, &ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, &ll_backend__coverage_profiling__AddedImpurityInner_37);
              }
#line 312 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
          case (MR_Integer) 7:
#line 317 "coverage_profiling.m"
            {
#line 318 "coverage_profiling.m"
              {
#line 318 "coverage_profiling.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.coverage_profiling", (MR_String) "predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", (MR_String) "shorthand");
#line 318 "coverage_profiling.m"
                return;
              }
#line 317 "coverage_profiling.m"
            }
#line 231 "coverage_profiling.m"
            break;
#line 231 "coverage_profiling.m"
        }
#line 231 "coverage_profiling.m"
        break;
#line 231 "coverage_profiling.m"
    }
#line 354 "coverage_profiling.m"
    {
#line 354 "coverage_profiling.m"
      hlds__hlds_goal__add_impurity_if_needed_3_p_0(ll_backend__coverage_profiling__AddedImpurityInner_37, ll_backend__coverage_profiling__GoalInfo0_15, &ll_backend__coverage_profiling__GoalInfo1_83);
    }
#line 355 "coverage_profiling.m"
    {
#line 355 "coverage_profiling.m"
      ll_backend__coverage_profiling__Goal1_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 355 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal1_84, 0) = ((MR_Box) (ll_backend__coverage_profiling__GoalExpr1_38));
#line 355 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__Goal1_84, 1) = ((MR_Box) (ll_backend__coverage_profiling__GoalInfo1_83));
#line 355 "coverage_profiling.m"
    }
#line 329 "coverage_profiling.m"
    ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__IsMDProfInst_20 == (MR_Integer) 0);
#line 330 "coverage_profiling.m"
    if (!(ll_backend__coverage_profiling__succeeded))
#line 333 "coverage_profiling.m"
      ll_backend__coverage_profiling__succeeded = (ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36 == (MR_Integer) 0);
#line 7286 "ll_backend.coverage_profiling.c"
    if (ll_backend__coverage_profiling__succeeded)
#line 7288 "ll_backend.coverage_profiling.c"
      {
#line 337 "coverage_profiling.m"
        *ll_backend__coverage_profiling__NextCoverageBeforeKnown_11 = ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36;
#line 368 "coverage_profiling.m"
        *ll_backend__coverage_profiling__Goal_9 = ll_backend__coverage_profiling__Goal1_84;
#line 369 "coverage_profiling.m"
        *ll_backend__coverage_profiling__AddedImpurity_13 = ll_backend__coverage_profiling__AddedImpurityInner_37;
#line 367 "coverage_profiling.m"
        *ll_backend__coverage_profiling__STATE_VARIABLE_Info_91 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107;
#line 7298 "ll_backend.coverage_profiling.c"
      }
#line 7300 "ll_backend.coverage_profiling.c"
    else
#line 7302 "ll_backend.coverage_profiling.c"
      {
#line 7304 "ll_backend.coverage_profiling.c"
        MR_Word ll_backend__coverage_profiling__CoverageAfterGoals_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_122_122 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 339 "coverage_profiling.m"
        MR_Word ll_backend__coverage_profiling__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPOptions_18, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);

#line 7323 "ll_backend.coverage_profiling.c"
#line 7324 "ll_backend.coverage_profiling.c"
        switch (ll_backend__coverage_profiling__CoverageAfterGoals_82) {
#line 7326 "ll_backend.coverage_profiling.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 7328 "ll_backend.coverage_profiling.c"
          case (MR_Integer) 0:
#line 7330 "ll_backend.coverage_profiling.c"
            {
#line 347 "coverage_profiling.m"
              *ll_backend__coverage_profiling__NextCoverageBeforeKnown_11 = ll_backend__coverage_profiling__NextCoverageBeforeKnown0_36;
#line 368 "coverage_profiling.m"
              *ll_backend__coverage_profiling__Goal_9 = ll_backend__coverage_profiling__Goal1_84;
#line 369 "coverage_profiling.m"
              *ll_backend__coverage_profiling__AddedImpurity_13 = ll_backend__coverage_profiling__AddedImpurityInner_37;
#line 367 "coverage_profiling.m"
              *ll_backend__coverage_profiling__STATE_VARIABLE_Info_91 = ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107;
#line 7340 "ll_backend.coverage_profiling.c"
            }
#line 7342 "ll_backend.coverage_profiling.c"
            break;
#line 7344 "ll_backend.coverage_profiling.c"
          case (MR_Integer) 1:
#line 7346 "ll_backend.coverage_profiling.c"
            {
#line 7348 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__ContainingGoalMap_86;
#line 7350 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__RevGoalPath_87;
#line 7352 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__CPInfo_88;
#line 7354 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__CPGoals_89;
#line 7356 "ll_backend.coverage_profiling.c"
              MR_Word ll_backend__coverage_profiling__V_110_110;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_130_130;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_131_131;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_132_132;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_133_133;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_134_134;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_135_135;
#line 358 "coverage_profiling.m"
              MR_Word ll_backend__coverage_profiling__V_136_136;

#line 343 "coverage_profiling.m"
              *ll_backend__coverage_profiling__NextCoverageBeforeKnown_11 = (MR_Integer) 0;
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 0)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 1)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 2)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 3)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 4)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 5)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 6)));
#line 358 "coverage_profiling.m"
              ll_backend__coverage_profiling__ContainingGoalMap_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, (MR_Integer) 7)));
#line 359 "coverage_profiling.m"
              {
#line 359 "coverage_profiling.m"
                ll_backend__coverage_profiling__RevGoalPath_87 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ll_backend__coverage_profiling__ContainingGoalMap_86, ll_backend__coverage_profiling__GoalId_17);
              }
#line 360 "coverage_profiling.m"
              {
#line 360 "coverage_profiling.m"
                ll_backend__coverage_profiling__CPInfo_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfo_88, 0) = ((MR_Box) (ll_backend__coverage_profiling__RevGoalPath_87));
#line 360 "coverage_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CPInfo_88, 1) = ((MR_Box) (((int) MR_cp_type_coverage_after)));
#line 360 "coverage_profiling.m"
              }
#line 362 "coverage_profiling.m"
              {
#line 362 "coverage_profiling.m"
                ll_backend__coverage_profiling__make_coverage_point_5_p_0(ll_backend__coverage_profiling__CPOptions_18, ll_backend__coverage_profiling__CPInfo_88, &ll_backend__coverage_profiling__CPGoals_89, ll_backend__coverage_profiling__STATE_VARIABLE_Info_107_107, ll_backend__coverage_profiling__STATE_VARIABLE_Info_91);
              }
#line 363 "coverage_profiling.m"
              {
#line 363 "coverage_profiling.m"
                ll_backend__coverage_profiling__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "coverage_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_110_110, 0) = ((MR_Box) (ll_backend__coverage_profiling__Goal1_84));
#line 363 "coverage_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__coverage_profiling__V_110_110, 1) = ((MR_Box) (ll_backend__coverage_profiling__CPGoals_89));
#line 363 "coverage_profiling.m"
              }
#line 363 "coverage_profiling.m"
              {
#line 363 "coverage_profiling.m"
                hlds__goal_util__create_conj_from_list_3_p_0(ll_backend__coverage_profiling__V_110_110, (MR_Integer) 0, ll_backend__coverage_profiling__Goal_9);
              }
#line 365 "coverage_profiling.m"
              *ll_backend__coverage_profiling__AddedImpurity_13 = (MR_Integer) 1;
#line 7428 "ll_backend.coverage_profiling.c"
            }
#line 7430 "ll_backend.coverage_profiling.c"
            break;
#line 7432 "ll_backend.coverage_profiling.c"
        }
#line 7434 "ll_backend.coverage_profiling.c"
      }
#line 191 "coverage_profiling.m"
  }
#line 186 "coverage_profiling.m"
}

#line 38 "coverage_profiling.m"
void MR_CALL 
ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(
#line 38 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ModuleInfo_10,
#line 38 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__PredProcId_11,
#line 38 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ContainingGoalMap_12,
#line 38 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__MaybeRecInfo_13,
#line 38 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_25,
#line 38 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_Goal_26,
#line 38 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_0_27,
#line 38 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_28,
#line 38 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__CoveragePoints_16)
#line 38 "coverage_profiling.m"
{
#line 158 "coverage_profiling.m"
  {
#line 158 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__TypeCtorInfo_6_71;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__TypeCtorInfo_7_72;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoverageProfilingOptions_17;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoverageInfo0_18;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__RunFirstPass_19;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoverageInfo_22;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoveragePointsMap_24;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_63_63;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_64_64;
#line 158 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__AssocList_70;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_34_34;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_35_35;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_36_36;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_37_37;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_38_38;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_39_39;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_40_40;
#line 162 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_41_41;
#line 170 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_21_21;
#line 170 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_23_23;
#line 172 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_42_42;
#line 172 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_44_44;
#line 172 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_45_45;
#line 172 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_46_46;
#line 172 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_47_47;
#line 172 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__V_48_48;

#line 159 "coverage_profiling.m"
    {
#line 159 "coverage_profiling.m"
      ll_backend__coverage_profiling__coverage_profiling_options_2_p_0(ll_backend__coverage_profiling__ModuleInfo_10, &ll_backend__coverage_profiling__CoverageProfilingOptions_17);
    }
#line 762 "coverage_profiling.m"
    {
#line 762 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_63_63 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0);
    }
#line 762 "coverage_profiling.m"
    {
#line 762 "coverage_profiling.m"
      ll_backend__coverage_profiling__V_64_64 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 762 "coverage_profiling.m"
    {
#line 762 "coverage_profiling.m"
      ll_backend__coverage_profiling__CoverageInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 0) = ((MR_Box) (ll_backend__coverage_profiling__V_63_63));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 1) = ((MR_Box) (ll_backend__coverage_profiling__V_64_64));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 2) = ((MR_Box) (ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_0_27));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 3) = ((MR_Box) (ll_backend__coverage_profiling__ModuleInfo_10));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 4) = ((MR_Box) (ll_backend__coverage_profiling__PredProcId_11));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 5) = ((MR_Box) (ll_backend__coverage_profiling__MaybeRecInfo_13));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 6) = ((MR_Box) (ll_backend__coverage_profiling__CoverageProfilingOptions_17));
#line 762 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo0_18, 7) = ((MR_Box) (ll_backend__coverage_profiling__ContainingGoalMap_12));
#line 762 "coverage_profiling.m"
    }
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 162 "coverage_profiling.m"
    ll_backend__coverage_profiling__RunFirstPass_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageProfilingOptions_17, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 167 "coverage_profiling.m"
#line 167 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__RunFirstPass_19) {
#line 167 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 167 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 168 "coverage_profiling.m"
        ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29 = ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_25;
#line 167 "coverage_profiling.m"
        break;
#line 167 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 164 "coverage_profiling.m"
        {
#line 165 "coverage_profiling.m"
          MR_Word ll_backend__coverage_profiling__V_20_20;

#line 165 "coverage_profiling.m"
          {
#line 165 "coverage_profiling.m"
            ll_backend__coverage_profiling__coverage_prof_first_pass_5_p_0(ll_backend__coverage_profiling__CoverageProfilingOptions_17, ll_backend__coverage_profiling__STATE_VARIABLE_Goal_0_25, &ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29, (MR_Integer) 0, &ll_backend__coverage_profiling__V_20_20);
          }
#line 164 "coverage_profiling.m"
        }
#line 167 "coverage_profiling.m"
        break;
#line 167 "coverage_profiling.m"
    }
#line 170 "coverage_profiling.m"
    {
#line 170 "coverage_profiling.m"
      ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_p_0(ll_backend__coverage_profiling__STATE_VARIABLE_Goal_29_29, ll_backend__coverage_profiling__STATE_VARIABLE_Goal_26, (MR_Integer) 0, &ll_backend__coverage_profiling__V_21_21, ll_backend__coverage_profiling__CoverageInfo0_18, &ll_backend__coverage_profiling__CoverageInfo_22, &ll_backend__coverage_profiling__V_23_23);
    }
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__CoveragePointsMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 0)));
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 1)));
#line 172 "coverage_profiling.m"
    *ll_backend__coverage_profiling__STATE_VARIABLE_VarInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 2)));
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 3)));
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 4)));
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 5)));
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 6)));
#line 172 "coverage_profiling.m"
    ll_backend__coverage_profiling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__coverage_profiling__CoverageInfo_22, (MR_Integer) 7)));
#line 7628 "ll_backend.coverage_profiling.c"
    ll_backend__coverage_profiling__TypeCtorInfo_6_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7630 "ll_backend.coverage_profiling.c"
    ll_backend__coverage_profiling__TypeCtorInfo_7_72 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
#line 1213 "coverage_profiling.m"
    {
#line 1213 "coverage_profiling.m"
      mercury__map__to_sorted_assoc_list_2_p_0(ll_backend__coverage_profiling__TypeCtorInfo_6_71, ll_backend__coverage_profiling__TypeCtorInfo_7_72, ll_backend__coverage_profiling__CoveragePointsMap_24, &ll_backend__coverage_profiling__AssocList_70);
    }
#line 1214 "coverage_profiling.m"
    {
#line 1214 "coverage_profiling.m"
      mercury__assoc_list__values_2_p_0(ll_backend__coverage_profiling__TypeCtorInfo_6_71, ll_backend__coverage_profiling__TypeCtorInfo_7_72, ll_backend__coverage_profiling__AssocList_70, ll_backend__coverage_profiling__CoveragePoints_16);
#line 1214 "coverage_profiling.m"
      return;
    }
#line 158 "coverage_profiling.m"
  }
#line 38 "coverage_profiling.m"
}

#line 32 "coverage_profiling.m"
void MR_CALL 
ll_backend__coverage_profiling__coverage_profiling_options_2_p_0(
#line 32 "coverage_profiling.m"
  MR_Word ll_backend__coverage_profiling__ModuleInfo_3,
#line 32 "coverage_profiling.m"
  MR_Word * ll_backend__coverage_profiling__CoveragePointOptions_4)
#line 32 "coverage_profiling.m"
{
#line 120 "coverage_profiling.m"
  {
#line 120 "coverage_profiling.m"
    MR_bool ll_backend__coverage_profiling__succeeded;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Globals_5;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__Static_6;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__DataType_7;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__UseCalls_8;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__CoverageAfterGoal_9;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__BranchIf_10;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__BranchSwitch_11;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__BranchDisj_12;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__UsePortCounts_13;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__UseTrivial_14;
#line 120 "coverage_profiling.m"
    MR_Word ll_backend__coverage_profiling__RunFirstPass_15;

#line 121 "coverage_profiling.m"
    {
#line 121 "coverage_profiling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__coverage_profiling__ModuleInfo_3, &ll_backend__coverage_profiling__Globals_5);
    }
#line 124 "coverage_profiling.m"
    {
#line 124 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 202, &ll_backend__coverage_profiling__Static_6);
    }
#line 129 "coverage_profiling.m"
#line 129 "coverage_profiling.m"
    switch (ll_backend__coverage_profiling__Static_6) {
#line 129 "coverage_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 129 "coverage_profiling.m"
      case (MR_Integer) 0:
#line 131 "coverage_profiling.m"
        ll_backend__coverage_profiling__DataType_7 = (MR_Integer) 1;
#line 129 "coverage_profiling.m"
        break;
#line 129 "coverage_profiling.m"
      case (MR_Integer) 1:
#line 128 "coverage_profiling.m"
        ll_backend__coverage_profiling__DataType_7 = (MR_Integer) 0;
#line 129 "coverage_profiling.m"
        break;
#line 129 "coverage_profiling.m"
    }
#line 133 "coverage_profiling.m"
    {
#line 133 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 201, &ll_backend__coverage_profiling__UseCalls_8);
    }
#line 137 "coverage_profiling.m"
    {
#line 137 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 203, &ll_backend__coverage_profiling__CoverageAfterGoal_9);
    }
#line 139 "coverage_profiling.m"
    {
#line 139 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 204, &ll_backend__coverage_profiling__BranchIf_10);
    }
#line 141 "coverage_profiling.m"
    {
#line 141 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 205, &ll_backend__coverage_profiling__BranchSwitch_11);
    }
#line 143 "coverage_profiling.m"
    {
#line 143 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 206, &ll_backend__coverage_profiling__BranchDisj_12);
    }
#line 147 "coverage_profiling.m"
    {
#line 147 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 207, &ll_backend__coverage_profiling__UsePortCounts_13);
    }
#line 149 "coverage_profiling.m"
    {
#line 149 "coverage_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__coverage_profiling__Globals_5, (MR_Integer) 208, &ll_backend__coverage_profiling__UseTrivial_14);
    }
#line 151 "coverage_profiling.m"
    {
#line 151 "coverage_profiling.m"
      mercury__bool__or_3_p_0(ll_backend__coverage_profiling__UsePortCounts_13, ll_backend__coverage_profiling__UseTrivial_14, &ll_backend__coverage_profiling__RunFirstPass_15);
    }
#line 153 "coverage_profiling.m"
    {
#line 153 "coverage_profiling.m"
      MR_Word base;
#line 153 "coverage_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 153 "coverage_profiling.m"
      *ll_backend__coverage_profiling__CoveragePointOptions_4 = base;
#line 153 "coverage_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ll_backend__coverage_profiling__DataType_7 | ((((ll_backend__coverage_profiling__UseCalls_8 << (MR_Integer) 1)) | ((((ll_backend__coverage_profiling__CoverageAfterGoal_9 << (MR_Integer) 2)) | ((((ll_backend__coverage_profiling__BranchIf_10 << (MR_Integer) 3)) | ((((ll_backend__coverage_profiling__BranchSwitch_11 << (MR_Integer) 4)) | ((((ll_backend__coverage_profiling__BranchDisj_12 << (MR_Integer) 5)) | ((((ll_backend__coverage_profiling__UsePortCounts_13 << (MR_Integer) 6)) | ((((ll_backend__coverage_profiling__UseTrivial_14 << (MR_Integer) 7)) | ((ll_backend__coverage_profiling__RunFirstPass_15 << (MR_Integer) 8)))))))))))))))))));
#line 153 "coverage_profiling.m"
    }
#line 120 "coverage_profiling.m"
  }
#line 32 "coverage_profiling.m"
}

void mercury__ll_backend__coverage_profiling__init(void)
{
}

void mercury__ll_backend__coverage_profiling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0);
	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0);
	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0);
	MR_register_type_ctor_info(&ll_backend__coverage_profiling__ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0);
}

void mercury__ll_backend__coverage_profiling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.coverage_profiling. */
