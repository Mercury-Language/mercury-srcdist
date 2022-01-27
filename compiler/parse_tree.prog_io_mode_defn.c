/*
** Automatically generated from `prog_io_mode_defn.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module parse_tree.prog_io_mode_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_mode_defn__init
ENDINIT
*/

#include "parse_tree.prog_io_mode_defn.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 164 "prog_io_mode_defn.m"
struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s {
#line 168 "prog_io_mode_defn.m"
  MR_bool parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded;
#line 202 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Args_18;
#line 183 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__commit_0;
#line 183 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_71_71;
#line 183 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_80_80;
#line 183 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Arg2_19;
#line 183 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__OtherArgs_20;
#line 183 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_31_31;
#line 183 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_79_79;
#line 183 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__conv0_Arg2_19;
#line 164 "prog_io_mode_defn.m"
};

#line 76 "prog_io_mode_defn.m"
struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s {
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11;
#line 80 "prog_io_mode_defn.m"
  MR_bool parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded;
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149;
#line 154 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Args_20;
#line 95 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__commit_0;
#line 95 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_150_150;
#line 95 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_160_160;
#line 95 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Arg2_21;
#line 95 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__OtherArgs_22;
#line 95 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_39_39;
#line 95 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_159_159;
#line 95 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__conv0_Arg2_21;
#line 107 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__commit_1;
#line 107 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Var2_25;
#line 76 "prog_io_mode_defn.m"
};

#line 34 "prog_io_mode_defn.m"
struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s {
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__BodyTerm_11;
#line 222 "prog_io_mode_defn.m"
  MR_bool parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded;
#line 222 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121;
#line 280 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Args_20;
#line 235 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__commit_0;
#line 235 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_122_122;
#line 235 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_132_132;
#line 235 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Arg2_21;
#line 235 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__OtherArgs_22;
#line 235 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_35_35;
#line 235 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_131_131;
#line 235 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__conv0_Arg2_21;
#line 248 "prog_io_mode_defn.m"
  jmp_buf parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__commit_1;
#line 248 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Var2_25;
#line 34 "prog_io_mode_defn.m"
};


#line 226 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 229 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 232 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 235 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 238 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3];

#line 241 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0;

#line 244 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

#line 247 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

#line 250 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1];

#line 253 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1];

#line 256 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 259 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 261 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 264 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 267 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 269 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 271 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3);

#line 195 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_abstract_inst_defn__195__1_2_p_0(
#line 195 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_73,
#line 195 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_74);

#line 138 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_inst_defn_base__138__1_2_p_0(
#line 138 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_153,
#line 138 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_154);

#line 264 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_mode_defn__264__1_2_p_0(
#line 264 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_125,
#line 264 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_126);

#line 214 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 214 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3);

#line 214 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2);

#line 195 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_5(
#line 195 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 195 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 195 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_1(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_3(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_2(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_4(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 164 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 164 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 164 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12);

#line 138 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_8(
#line 138 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 138 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 138 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_1(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_3(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_2(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_4(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 107 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_5(
#line 107 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 107 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_6(
#line 107 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 107 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_7(
#line 107 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 76 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 76 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 76 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14);

#line 264 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_8(
#line 264 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 264 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 264 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_1(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_3(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_2(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_4(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 248 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_5(
#line 248 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 248 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_6(
#line 248 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);

#line 248 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_7(
#line 248 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[58][2];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[12][1];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[3][3];




static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[58][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "definition."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_mode_defn_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in LHS of mode definition."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: repeated parameters"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in RHS of mode definition."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: free inst parameter"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in mode definition body."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: mode parameters must be variables."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in LHS of inst definition."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: repeated inst parameters"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in RHS of inst definition."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: attempt to redefine builtin inst."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in abstract inst definition."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in inst body at"))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[12][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[12])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[16])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[20])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[24])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[26])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[33])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[35])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[39])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[42])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 893 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 901 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 909 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 917 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 925 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

#line 932 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0 = {
  (MR_String) "processed_mode_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 947 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 952 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0
  }
};

#line 961 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 966 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

#line 971 "parse_tree.prog_io_mode_defn.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__type_ctor_info_processed_mode_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.prog_io_mode_defn",
  (MR_String) "processed_mode_body",
  {     parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0 },
  {     parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0
};

#line 988 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 991 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 993 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 995 "parse_tree.prog_io_mode_defn.c"
{
#line 997 "parse_tree.prog_io_mode_defn.c"
  {
#line 999 "parse_tree.prog_io_mode_defn.c"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 1002 "parse_tree.prog_io_mode_defn.c"
    {
#line 1004 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2));
    }
#line 1007 "parse_tree.prog_io_mode_defn.c"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 1009 "parse_tree.prog_io_mode_defn.c"
  }
#line 1011 "parse_tree.prog_io_mode_defn.c"
}

#line 1014 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 1017 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 1019 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 1021 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3)
#line 1023 "parse_tree.prog_io_mode_defn.c"
{
#line 1025 "parse_tree.prog_io_mode_defn.c"
  {
#line 1027 "parse_tree.prog_io_mode_defn.c"
    MR_Word parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1;

#line 1030 "parse_tree.prog_io_mode_defn.c"
    {
#line 1032 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(&parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_3));
    }
#line 1035 "parse_tree.prog_io_mode_defn.c"
    *parse_tree__prog_io_mode_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1));
#line 1037 "parse_tree.prog_io_mode_defn.c"
  }
#line 1039 "parse_tree.prog_io_mode_defn.c"
}

#line 195 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_abstract_inst_defn__195__1_2_p_0(
#line 195 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_73,
#line 195 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_74)
#line 195 "prog_io_mode_defn.m"
{
#line 195 "prog_io_mode_defn.m"
  {
#line 195 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 195 "prog_io_mode_defn.m"
    {
#line 195 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_73, parse_tree__prog_io_mode_defn__HeadVar__2_74);
#line 195 "prog_io_mode_defn.m"
      return;
    }
#line 195 "prog_io_mode_defn.m"
  }
#line 195 "prog_io_mode_defn.m"
}

#line 138 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_inst_defn_base__138__1_2_p_0(
#line 138 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_153,
#line 138 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_154)
#line 138 "prog_io_mode_defn.m"
{
#line 138 "prog_io_mode_defn.m"
  {
#line 138 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 138 "prog_io_mode_defn.m"
    {
#line 138 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_153, parse_tree__prog_io_mode_defn__HeadVar__2_154);
#line 138 "prog_io_mode_defn.m"
      return;
    }
#line 138 "prog_io_mode_defn.m"
  }
#line 138 "prog_io_mode_defn.m"
}

#line 264 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_mode_defn__264__1_2_p_0(
#line 264 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_125,
#line 264 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_126)
#line 264 "prog_io_mode_defn.m"
{
#line 264 "prog_io_mode_defn.m"
  {
#line 264 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 264 "prog_io_mode_defn.m"
    {
#line 264 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_125, parse_tree__prog_io_mode_defn__HeadVar__2_126);
#line 264 "prog_io_mode_defn.m"
      return;
    }
#line 264 "prog_io_mode_defn.m"
  }
#line 264 "prog_io_mode_defn.m"
}

#line 214 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 214 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3)
#line 214 "prog_io_mode_defn.m"
{
#line 214 "prog_io_mode_defn.m"
  {
#line 214 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 214 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_12 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;
#line 214 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_13 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__3_3;

#line 214 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_12 == parse_tree__prog_io_mode_defn__CastY_13);
#line 214 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 1144 "parse_tree.prog_io_mode_defn.c"
      *parse_tree__prog_io_mode_defn__HeadVar__1_1 = (MR_Integer) 0;
#line 214 "prog_io_mode_defn.m"
    else
#line 214 "prog_io_mode_defn.m"
      {
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 2)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_10_10;

#line 214 "prog_io_mode_defn.m"
        {
#line 214 "prog_io_mode_defn.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_mode_defn__V_10_10, parse_tree__prog_io_mode_defn__V_4_4, parse_tree__prog_io_mode_defn__V_7_7);
        }
#line 1170 "parse_tree.prog_io_mode_defn.c"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_10_10 == (MR_Integer) 0);
#line 214 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 214 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 214 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_10_10;
#line 214 "prog_io_mode_defn.m"
        else
#line 214 "prog_io_mode_defn.m"
          {
#line 214 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_11_11;

#line 214 "prog_io_mode_defn.m"
            {
#line 214 "prog_io_mode_defn.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2], &parse_tree__prog_io_mode_defn__V_11_11, ((MR_Box) (parse_tree__prog_io_mode_defn__V_5_5)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_8_8)));
            }
#line 1190 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_11_11 == (MR_Integer) 0);
#line 214 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 214 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 214 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_11_11;
#line 214 "prog_io_mode_defn.m"
            else
#line 214 "prog_io_mode_defn.m"
              {
#line 214 "prog_io_mode_defn.m"
                parse_tree__prog_data____Compare____mode_defn_0_0(parse_tree__prog_io_mode_defn__HeadVar__1_1, parse_tree__prog_io_mode_defn__V_6_6, parse_tree__prog_io_mode_defn__V_9_9);
#line 214 "prog_io_mode_defn.m"
                return;
              }
#line 214 "prog_io_mode_defn.m"
          }
#line 214 "prog_io_mode_defn.m"
      }
#line 214 "prog_io_mode_defn.m"
  }
#line 214 "prog_io_mode_defn.m"
}

#line 214 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 214 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2)
#line 214 "prog_io_mode_defn.m"
{
#line 214 "prog_io_mode_defn.m"
  {
#line 214 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 214 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_9 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__1_1;
#line 214 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_10 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;

#line 214 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_9 == parse_tree__prog_io_mode_defn__CastY_10);
#line 214 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 214 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = MR_TRUE;
#line 214 "prog_io_mode_defn.m"
    else
#line 214 "prog_io_mode_defn.m"
      {
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_12_12;
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 2)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 214 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));

#line 1259 "parse_tree.prog_io_mode_defn.c"
        {
#line 1261 "parse_tree.prog_io_mode_defn.c"
          parse_tree__prog_io_mode_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_mode_defn__V_3_3, parse_tree__prog_io_mode_defn__V_6_6);
        }
#line 214 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 214 "prog_io_mode_defn.m"
          {
#line 1268 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 1270 "parse_tree.prog_io_mode_defn.c"
            {
#line 1272 "parse_tree.prog_io_mode_defn.c"
              parse_tree__prog_io_mode_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io_mode_defn__V_4_4)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_7_7)));
            }
#line 214 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 1277 "parse_tree.prog_io_mode_defn.c"
              {
#line 1279 "parse_tree.prog_io_mode_defn.c"
                return parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(parse_tree__prog_io_mode_defn__V_5_5, parse_tree__prog_io_mode_defn__V_8_8);
              }
#line 214 "prog_io_mode_defn.m"
          }
#line 214 "prog_io_mode_defn.m"
      }
#line 214 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 214 "prog_io_mode_defn.m"
  }
#line 214 "prog_io_mode_defn.m"
}

#line 195 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_5(
#line 195 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 195 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 195 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 195 "prog_io_mode_defn.m"
{
#line 195 "prog_io_mode_defn.m"
  {
#line 195 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 195 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv1_HeadVar__2_74;

#line 195 "prog_io_mode_defn.m"
    {
#line 195 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_abstract_inst_defn__195__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv1_HeadVar__2_74);
    }
#line 195 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv1_HeadVar__2_74));
#line 195 "prog_io_mode_defn.m"
  }
#line 195 "prog_io_mode_defn.m"
}

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_1(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 183 "prog_io_mode_defn.m"
{
#line 183 "prog_io_mode_defn.m"
  {
#line 183 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 183 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__commit_0, 1);
#line 183 "prog_io_mode_defn.m"
  }
#line 183 "prog_io_mode_defn.m"
}

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_3(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 183 "prog_io_mode_defn.m"
{
#line 183 "prog_io_mode_defn.m"
  {
#line 183 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 183 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Arg2_19 = ((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__conv0_Arg2_19);
#line 183 "prog_io_mode_defn.m"
    {
#line 183 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_2(parse_tree__prog_io_mode_defn__env_ptr);
#line 183 "prog_io_mode_defn.m"
      return;
    }
#line 183 "prog_io_mode_defn.m"
  }
#line 183 "prog_io_mode_defn.m"
}

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_2(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 183 "prog_io_mode_defn.m"
{
#line 183 "prog_io_mode_defn.m"
  {
#line 183 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 183 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 183 "prog_io_mode_defn.m"
    if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded)
#line 183 "prog_io_mode_defn.m"
      {
#line 183 "prog_io_mode_defn.m"
        {
#line 183 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_31_31, (MR_Integer) 0)));
#line 183 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__OtherArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_31_31, (MR_Integer) 1)));
#line 183 "prog_io_mode_defn.m"
        }
#line 183 "prog_io_mode_defn.m"
        {
#line 1396 "parse_tree.prog_io_mode_defn.c"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_80_80 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 183 "prog_io_mode_defn.m"
          {
#line 183 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_80_80, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Arg2_19)), ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_79_79)));
          }
#line 183 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded)
#line 183 "prog_io_mode_defn.m"
            {
#line 184 "prog_io_mode_defn.m"
              {
#line 184 "prog_io_mode_defn.m"
                (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_71_71, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Arg2_19)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__OtherArgs_20);
              }
#line 184 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded)
#line 184 "prog_io_mode_defn.m"
                {
#line 184 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_1(parse_tree__prog_io_mode_defn__env_ptr);
#line 184 "prog_io_mode_defn.m"
                  return;
                }
#line 183 "prog_io_mode_defn.m"
            }
#line 183 "prog_io_mode_defn.m"
        }
#line 183 "prog_io_mode_defn.m"
      }
#line 183 "prog_io_mode_defn.m"
  }
#line 183 "prog_io_mode_defn.m"
}

#line 183 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_4(
#line 183 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 183 "prog_io_mode_defn.m"
{
#line 183 "prog_io_mode_defn.m"
  {
#line 183 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 183 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__commit_0) == 0)
#line 183 "prog_io_mode_defn.m"
      {
#line 1448 "parse_tree.prog_io_mode_defn.c"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_71_71 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 183 "prog_io_mode_defn.m"
        {
#line 183 "prog_io_mode_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__TypeInfo_71_71, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__conv0_Arg2_19, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Args_18, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__V_31_31, parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_3, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 183 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded = MR_FALSE;
#line 183 "prog_io_mode_defn.m"
      }
#line 183 "prog_io_mode_defn.m"
    else
#line 183 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded = MR_TRUE;
#line 183 "prog_io_mode_defn.m"
  }
#line 183 "prog_io_mode_defn.m"
}

#line 164 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 164 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 164 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 164 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12)
#line 164 "prog_io_mode_defn.m"
{
#line 164 "prog_io_mode_defn.m"
  {
#line 164 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0_s parse_tree__prog_io_mode_defn__env;

#line 168 "prog_io_mode_defn.m"
    {
#line 168 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_70_70 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 168 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14;

#line 170 "prog_io_mode_defn.m"
      {
#line 170 "prog_io_mode_defn.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_70_70, parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__HeadTerm_9, parse_tree__prog_io_mode_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[51]), &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14);
      }
#line 175 "prog_io_mode_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14)) == (MR_mktag((MR_Integer) 0))))
#line 173 "prog_io_mode_defn.m"
        {
#line 173 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));

#line 174 "prog_io_mode_defn.m"
          {
#line 174 "prog_io_mode_defn.m"
            MR_Word base;
#line 174 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 174 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 174 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_15));
#line 174 "prog_io_mode_defn.m"
          }
#line 173 "prog_io_mode_defn.m"
        }
#line 175 "prog_io_mode_defn.m"
      else
#line 176 "prog_io_mode_defn.m"
        {
#line 176 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));
#line 176 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 1)));

#line 179 "prog_io_mode_defn.m"
          {
#line 179 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_70_70, parse_tree__prog_io_mode_defn__ArgTerms_17, &(parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Args_18);
          }
#line 202 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded)
#line 193 "prog_io_mode_defn.m"
            {
#line 183 "prog_io_mode_defn.m"
              {
#line 183 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_4(&parse_tree__prog_io_mode_defn__env);
              }
#line 193 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__succeeded)
#line 188 "prog_io_mode_defn.m"
                {
#line 188 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Spec_22;
#line 188 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_42_42;
#line 188 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_43_43;
#line 188 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_44_44;
#line 188 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_49_49;

#line 190 "prog_io_mode_defn.m"
                  {
#line 190 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_44_44 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_70_70, parse_tree__prog_io_mode_defn__HeadTerm_9);
                  }
#line 190 "prog_io_mode_defn.m"
                  {
#line 190 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_44_44));
#line 190 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[57])));
#line 190 "prog_io_mode_defn.m"
                  }
#line 191 "prog_io_mode_defn.m"
                  {
#line 191 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_43_43));
#line 191 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "prog_io_mode_defn.m"
                  }
#line 189 "prog_io_mode_defn.m"
                  {
#line 189 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 189 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 189 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_42_42));
#line 189 "prog_io_mode_defn.m"
                  }
#line 192 "prog_io_mode_defn.m"
                  {
#line 192 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_22));
#line 192 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "prog_io_mode_defn.m"
                  }
#line 192 "prog_io_mode_defn.m"
                  {
#line 192 "prog_io_mode_defn.m"
                    MR_Word base;
#line 192 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 192 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 192 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 192 "prog_io_mode_defn.m"
                  }
#line 188 "prog_io_mode_defn.m"
                }
#line 193 "prog_io_mode_defn.m"
              else
#line 194 "prog_io_mode_defn.m"
                {
#line 194 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__InstVarSet_23;
#line 194 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__InstArgs_24;
#line 194 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_26;
#line 194 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Item_27;

#line 194 "prog_io_mode_defn.m"
                  {
#line 194 "prog_io_mode_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_70_70, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_8, &parse_tree__prog_io_mode_defn__InstVarSet_23);
                  }
#line 195 "prog_io_mode_defn.m"
                  {
#line 195 "prog_io_mode_defn.m"
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_4[2], (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0_env_0__Args_18, &parse_tree__prog_io_mode_defn__InstArgs_24);
                  }
#line 197 "prog_io_mode_defn.m"
                  {
#line 197 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__ItemInstDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 197 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_26, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_16));
#line 197 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_26, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgs_24));
#line 197 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_26, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_23));
#line 197 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_26, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 197 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_26, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_11));
#line 197 "prog_io_mode_defn.m"
                  }
#line 199 "prog_io_mode_defn.m"
                  {
#line 199 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 199 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_27, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemInstDefn_26));
#line 199 "prog_io_mode_defn.m"
                  }
#line 200 "prog_io_mode_defn.m"
                  {
#line 200 "prog_io_mode_defn.m"
                    MR_Word base;
#line 200 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 200 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_27));
#line 200 "prog_io_mode_defn.m"
                  }
#line 194 "prog_io_mode_defn.m"
                }
#line 193 "prog_io_mode_defn.m"
            }
#line 202 "prog_io_mode_defn.m"
          else
#line 205 "prog_io_mode_defn.m"
            {
#line 205 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 205 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 205 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 205 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 205 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__Spec_69;

#line 207 "prog_io_mode_defn.m"
              {
#line 207 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_61_61 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_70_70, parse_tree__prog_io_mode_defn__HeadTerm_9);
              }
#line 207 "prog_io_mode_defn.m"
              {
#line 207 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 207 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[56])));
#line 207 "prog_io_mode_defn.m"
              }
#line 207 "prog_io_mode_defn.m"
              {
#line 207 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_60_60));
#line 207 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "prog_io_mode_defn.m"
              }
#line 206 "prog_io_mode_defn.m"
              {
#line 206 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Spec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 206 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_69, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 206 "prog_io_mode_defn.m"
              }
#line 208 "prog_io_mode_defn.m"
              {
#line 208 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_69));
#line 208 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "prog_io_mode_defn.m"
              }
#line 208 "prog_io_mode_defn.m"
              {
#line 208 "prog_io_mode_defn.m"
                MR_Word base;
#line 208 "prog_io_mode_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "prog_io_mode_defn.m"
                *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 208 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 208 "prog_io_mode_defn.m"
              }
#line 205 "prog_io_mode_defn.m"
            }
#line 176 "prog_io_mode_defn.m"
        }
#line 168 "prog_io_mode_defn.m"
    }
#line 164 "prog_io_mode_defn.m"
  }
#line 164 "prog_io_mode_defn.m"
}

#line 138 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_8(
#line 138 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 138 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 138 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 138 "prog_io_mode_defn.m"
{
#line 138 "prog_io_mode_defn.m"
  {
#line 138 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 138 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv1_HeadVar__2_154;

#line 138 "prog_io_mode_defn.m"
    {
#line 138 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_inst_defn_base__138__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv1_HeadVar__2_154);
    }
#line 138 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv1_HeadVar__2_154));
#line 138 "prog_io_mode_defn.m"
  }
#line 138 "prog_io_mode_defn.m"
}

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_1(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 95 "prog_io_mode_defn.m"
{
#line 95 "prog_io_mode_defn.m"
  {
#line 95 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 95 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__commit_0, 1);
#line 95 "prog_io_mode_defn.m"
  }
#line 95 "prog_io_mode_defn.m"
}

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_3(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 95 "prog_io_mode_defn.m"
{
#line 95 "prog_io_mode_defn.m"
  {
#line 95 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 95 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Arg2_21 = ((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__conv0_Arg2_21);
#line 95 "prog_io_mode_defn.m"
    {
#line 95 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_2(parse_tree__prog_io_mode_defn__env_ptr);
#line 95 "prog_io_mode_defn.m"
      return;
    }
#line 95 "prog_io_mode_defn.m"
  }
#line 95 "prog_io_mode_defn.m"
}

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_2(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 95 "prog_io_mode_defn.m"
{
#line 95 "prog_io_mode_defn.m"
  {
#line 95 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 95 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 95 "prog_io_mode_defn.m"
    if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 95 "prog_io_mode_defn.m"
      {
#line 95 "prog_io_mode_defn.m"
        {
#line 95 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_39_39, (MR_Integer) 0)));
#line 95 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__OtherArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_39_39, (MR_Integer) 1)));
#line 95 "prog_io_mode_defn.m"
        }
#line 95 "prog_io_mode_defn.m"
        {
#line 1877 "parse_tree.prog_io_mode_defn.c"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_160_160 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 95 "prog_io_mode_defn.m"
          {
#line 95 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_160_160, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Arg2_21)), ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_159_159)));
          }
#line 95 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 95 "prog_io_mode_defn.m"
            {
#line 96 "prog_io_mode_defn.m"
              {
#line 96 "prog_io_mode_defn.m"
                (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_150_150, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Arg2_21)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__OtherArgs_22);
              }
#line 96 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 96 "prog_io_mode_defn.m"
                {
#line 96 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_1(parse_tree__prog_io_mode_defn__env_ptr);
#line 96 "prog_io_mode_defn.m"
                  return;
                }
#line 95 "prog_io_mode_defn.m"
            }
#line 95 "prog_io_mode_defn.m"
        }
#line 95 "prog_io_mode_defn.m"
      }
#line 95 "prog_io_mode_defn.m"
  }
#line 95 "prog_io_mode_defn.m"
}

#line 95 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_4(
#line 95 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 95 "prog_io_mode_defn.m"
{
#line 95 "prog_io_mode_defn.m"
  {
#line 95 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 95 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__commit_0) == 0)
#line 95 "prog_io_mode_defn.m"
      {
#line 1929 "parse_tree.prog_io_mode_defn.c"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_150_150 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 95 "prog_io_mode_defn.m"
        {
#line 95 "prog_io_mode_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeInfo_150_150, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__conv0_Arg2_21, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Args_20, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__V_39_39, parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_3, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 95 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = MR_FALSE;
#line 95 "prog_io_mode_defn.m"
      }
#line 95 "prog_io_mode_defn.m"
    else
#line 95 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = MR_TRUE;
#line 95 "prog_io_mode_defn.m"
  }
#line 95 "prog_io_mode_defn.m"
}

#line 107 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_5(
#line 107 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 107 "prog_io_mode_defn.m"
{
#line 107 "prog_io_mode_defn.m"
  {
#line 107 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 107 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__commit_1, 1);
#line 107 "prog_io_mode_defn.m"
  }
#line 107 "prog_io_mode_defn.m"
}

#line 107 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_6(
#line 107 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 107 "prog_io_mode_defn.m"
{
#line 107 "prog_io_mode_defn.m"
  {
#line 107 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 107 "prog_io_mode_defn.m"
    {
#line 108 "prog_io_mode_defn.m"
      {
#line 108 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Var2_25)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Args_20);
      }
#line 108 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = !((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded);
#line 108 "prog_io_mode_defn.m"
      if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 108 "prog_io_mode_defn.m"
        {
#line 108 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_5(parse_tree__prog_io_mode_defn__env_ptr);
#line 108 "prog_io_mode_defn.m"
          return;
        }
#line 107 "prog_io_mode_defn.m"
    }
#line 107 "prog_io_mode_defn.m"
  }
#line 107 "prog_io_mode_defn.m"
}

#line 107 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_7(
#line 107 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 107 "prog_io_mode_defn.m"
{
#line 107 "prog_io_mode_defn.m"
  {
#line 107 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 107 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__commit_1) == 0)
#line 107 "prog_io_mode_defn.m"
      {
#line 107 "prog_io_mode_defn.m"
        {
#line 107 "prog_io_mode_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Var2_25, parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_6, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 107 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = MR_FALSE;
#line 107 "prog_io_mode_defn.m"
      }
#line 107 "prog_io_mode_defn.m"
    else
#line 107 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = MR_TRUE;
#line 107 "prog_io_mode_defn.m"
  }
#line 107 "prog_io_mode_defn.m"
}

#line 76 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 76 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 76 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 76 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14)
#line 76 "prog_io_mode_defn.m"
{
#line 76 "prog_io_mode_defn.m"
  {
#line 76 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0_s parse_tree__prog_io_mode_defn__env;

#line 76 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11 = parse_tree__prog_io_mode_defn__BodyTerm_11;
#line 80 "prog_io_mode_defn.m"
    {
#line 80 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16;

#line 2070 "parse_tree.prog_io_mode_defn.c"
      (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 82 "prog_io_mode_defn.m"
      {
#line 82 "prog_io_mode_defn.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[51]), &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16);
      }
#line 87 "prog_io_mode_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 85 "prog_io_mode_defn.m"
        {
#line 85 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16, (MR_Integer) 0)));

#line 86 "prog_io_mode_defn.m"
          {
#line 86 "prog_io_mode_defn.m"
            MR_Word base;
#line 86 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 86 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 86 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 86 "prog_io_mode_defn.m"
          }
#line 85 "prog_io_mode_defn.m"
        }
#line 87 "prog_io_mode_defn.m"
      else
#line 88 "prog_io_mode_defn.m"
        {
#line 88 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16, (MR_Integer) 0)));
#line 88 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_16, (MR_Integer) 1)));

#line 91 "prog_io_mode_defn.m"
          {
#line 91 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, parse_tree__prog_io_mode_defn__ArgTerms_19, &(parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Args_20);
          }
#line 154 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 105 "prog_io_mode_defn.m"
            {
#line 95 "prog_io_mode_defn.m"
              {
#line 95 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_4(&parse_tree__prog_io_mode_defn__env);
              }
#line 105 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 100 "prog_io_mode_defn.m"
                {
#line 100 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Spec_24;
#line 100 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 100 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 100 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 100 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_57_57;

#line 102 "prog_io_mode_defn.m"
                  {
#line 102 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_52_52 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, parse_tree__prog_io_mode_defn__HeadTerm_10);
                  }
#line 102 "prog_io_mode_defn.m"
                  {
#line 102 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 102 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_52_52));
#line 102 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[52])));
#line 102 "prog_io_mode_defn.m"
                  }
#line 103 "prog_io_mode_defn.m"
                  {
#line 103 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_51_51));
#line 103 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "prog_io_mode_defn.m"
                  }
#line 101 "prog_io_mode_defn.m"
                  {
#line 101 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 101 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 101 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 101 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_50_50));
#line 101 "prog_io_mode_defn.m"
                  }
#line 104 "prog_io_mode_defn.m"
                  {
#line 104 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_24));
#line 104 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_mode_defn.m"
                  }
#line 104 "prog_io_mode_defn.m"
                  {
#line 104 "prog_io_mode_defn.m"
                    MR_Word base;
#line 104 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 104 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_57_57));
#line 104 "prog_io_mode_defn.m"
                  }
#line 100 "prog_io_mode_defn.m"
                }
#line 105 "prog_io_mode_defn.m"
              else
#line 116 "prog_io_mode_defn.m"
                {
#line 107 "prog_io_mode_defn.m"
                  {
#line 107 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_7(&parse_tree__prog_io_mode_defn__env);
                  }
#line 116 "prog_io_mode_defn.m"
                  if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 111 "prog_io_mode_defn.m"
                    {
#line 111 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_69_69;
#line 111 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_70_70;
#line 111 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_71_71;
#line 111 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_76_76;
#line 111 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__Spec_136;

#line 113 "prog_io_mode_defn.m"
                      {
#line 113 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_71_71 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11);
                      }
#line 113 "prog_io_mode_defn.m"
                      {
#line 113 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 113 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[53])));
#line 113 "prog_io_mode_defn.m"
                      }
#line 114 "prog_io_mode_defn.m"
                      {
#line 114 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_70_70));
#line 114 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "prog_io_mode_defn.m"
                      }
#line 112 "prog_io_mode_defn.m"
                      {
#line 112 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 112 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 112 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_136, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_69_69));
#line 112 "prog_io_mode_defn.m"
                      }
#line 115 "prog_io_mode_defn.m"
                      {
#line 115 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_136));
#line 115 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 115 "prog_io_mode_defn.m"
                      }
#line 115 "prog_io_mode_defn.m"
                      {
#line 115 "prog_io_mode_defn.m"
                        MR_Word base;
#line 115 "prog_io_mode_defn.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 115 "prog_io_mode_defn.m"
                        *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 115 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_76_76));
#line 115 "prog_io_mode_defn.m"
                      }
#line 111 "prog_io_mode_defn.m"
                    }
#line 116 "prog_io_mode_defn.m"
                  else
#line 132 "prog_io_mode_defn.m"
                    {
#line 121 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__UserInst_26;
#line 121 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_79_79;
#line 122 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_27_27;
#line 122 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_28_28;

#line 120 "prog_io_mode_defn.m"
                      {
#line 120 "prog_io_mode_defn.m"
                        (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__HeadTerm_10, &parse_tree__prog_io_mode_defn__UserInst_26);
                      }
#line 121 "prog_io_mode_defn.m"
                      if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 121 "prog_io_mode_defn.m"
                        {
#line 122 "prog_io_mode_defn.m"
                          (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__UserInst_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__UserInst_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 122 "prog_io_mode_defn.m"
                          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 122 "prog_io_mode_defn.m"
                            {
#line 122 "prog_io_mode_defn.m"
                              parse_tree__prog_io_mode_defn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__UserInst_26, (MR_Integer) 1)));
#line 122 "prog_io_mode_defn.m"
                              (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_79_79)) == (MR_mktag((MR_Integer) 0)));
#line 122 "prog_io_mode_defn.m"
                              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 122 "prog_io_mode_defn.m"
                                {
#line 122 "prog_io_mode_defn.m"
                                  parse_tree__prog_io_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_79_79, (MR_Integer) 0)));
#line 122 "prog_io_mode_defn.m"
                                  parse_tree__prog_io_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_79_79, (MR_Integer) 1)));
#line 122 "prog_io_mode_defn.m"
                                }
#line 122 "prog_io_mode_defn.m"
                            }
#line 121 "prog_io_mode_defn.m"
                        }
#line 119 "prog_io_mode_defn.m"
                      (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = !((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded);
#line 132 "prog_io_mode_defn.m"
                      if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 127 "prog_io_mode_defn.m"
                        {
#line 127 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 127 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_88_88;
#line 127 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_89_89;
#line 127 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 127 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Spec_138;

#line 129 "prog_io_mode_defn.m"
                          {
#line 129 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_89_89 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, parse_tree__prog_io_mode_defn__HeadTerm_10);
                          }
#line 129 "prog_io_mode_defn.m"
                          {
#line 129 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_89_89));
#line 129 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[54])));
#line 129 "prog_io_mode_defn.m"
                          }
#line 130 "prog_io_mode_defn.m"
                          {
#line 130 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 130 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "prog_io_mode_defn.m"
                          }
#line 128 "prog_io_mode_defn.m"
                          {
#line 128 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__Spec_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 128 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 128 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 128 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_138, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 128 "prog_io_mode_defn.m"
                          }
#line 131 "prog_io_mode_defn.m"
                          {
#line 131 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_138));
#line 131 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "prog_io_mode_defn.m"
                          }
#line 131 "prog_io_mode_defn.m"
                          {
#line 131 "prog_io_mode_defn.m"
                            MR_Word base;
#line 131 "prog_io_mode_defn.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "prog_io_mode_defn.m"
                            *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 131 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_94_94));
#line 131 "prog_io_mode_defn.m"
                          }
#line 127 "prog_io_mode_defn.m"
                        }
#line 132 "prog_io_mode_defn.m"
                      else
#line 144 "prog_io_mode_defn.m"
                        {
#line 144 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Inst_29;

#line 135 "prog_io_mode_defn.m"
                          {
#line 135 "prog_io_mode_defn.m"
                            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11, &parse_tree__prog_io_mode_defn__Inst_29);
                          }
#line 144 "prog_io_mode_defn.m"
                          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__succeeded)
#line 137 "prog_io_mode_defn.m"
                            {
#line 137 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__InstVarSet_30;
#line 137 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__InstArgs_31;
#line 137 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__InstDefn_32;
#line 137 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_33;
#line 137 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__Item_34;

#line 137 "prog_io_mode_defn.m"
                              {
#line 137 "prog_io_mode_defn.m"
                                mercury__varset__coerce_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_30);
                              }
#line 138 "prog_io_mode_defn.m"
                              {
#line 138 "prog_io_mode_defn.m"
                                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_4[1], (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__Args_20, &parse_tree__prog_io_mode_defn__InstArgs_31);
                              }
#line 139 "prog_io_mode_defn.m"
                              {
#line 139 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__InstDefn_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__InstDefn_32, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst_29));
#line 139 "prog_io_mode_defn.m"
                              }
#line 140 "prog_io_mode_defn.m"
                              {
#line 140 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__ItemInstDefn_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 140 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_33, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_18));
#line 140 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_33, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgs_31));
#line 140 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_33, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstDefn_32));
#line 140 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_33, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_30));
#line 140 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_33, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 140 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_33, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 140 "prog_io_mode_defn.m"
                              }
#line 142 "prog_io_mode_defn.m"
                              {
#line 142 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 142 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemInstDefn_33));
#line 142 "prog_io_mode_defn.m"
                              }
#line 143 "prog_io_mode_defn.m"
                              {
#line 143 "prog_io_mode_defn.m"
                                MR_Word base;
#line 143 "prog_io_mode_defn.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_mode_defn.m"
                                *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 143 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_34));
#line 143 "prog_io_mode_defn.m"
                              }
#line 137 "prog_io_mode_defn.m"
                            }
#line 144 "prog_io_mode_defn.m"
                          else
#line 145 "prog_io_mode_defn.m"
                            {
#line 145 "prog_io_mode_defn.m"
                              MR_String parse_tree__prog_io_mode_defn__BodyTermStr_35;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_100_100;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_101_101;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_110_110;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_111_111;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_112_112;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_113_113;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_114_114;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__V_117_117;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__Pieces_139;
#line 145 "prog_io_mode_defn.m"
                              MR_Word parse_tree__prog_io_mode_defn__Spec_140;

#line 145 "prog_io_mode_defn.m"
                              {
#line 145 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__BodyTermStr_35 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, parse_tree__prog_io_mode_defn__VarSet_9, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11);
                              }
#line 147 "prog_io_mode_defn.m"
                              {
#line 147 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 147 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_101_101, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTermStr_35));
#line 147 "prog_io_mode_defn.m"
                              }
#line 147 "prog_io_mode_defn.m"
                              {
#line 147 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_101_101));
#line 147 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[37])));
#line 147 "prog_io_mode_defn.m"
                              }
#line 146 "prog_io_mode_defn.m"
                              {
#line 146 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__Pieces_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Pieces_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[55])));
#line 146 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Pieces_139, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_100_100));
#line 146 "prog_io_mode_defn.m"
                              }
#line 149 "prog_io_mode_defn.m"
                              {
#line 149 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_112_112 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__BodyTerm_11);
                              }
#line 150 "prog_io_mode_defn.m"
                              {
#line 150 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Pieces_139));
#line 150 "prog_io_mode_defn.m"
                              }
#line 150 "prog_io_mode_defn.m"
                              {
#line 150 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_114_114));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "prog_io_mode_defn.m"
                              }
#line 149 "prog_io_mode_defn.m"
                              {
#line 149 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_112_112));
#line 149 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_113_113));
#line 149 "prog_io_mode_defn.m"
                              }
#line 150 "prog_io_mode_defn.m"
                              {
#line 150 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_111_111));
#line 150 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "prog_io_mode_defn.m"
                              }
#line 148 "prog_io_mode_defn.m"
                              {
#line 148 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__Spec_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 148 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_140, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_110_110));
#line 148 "prog_io_mode_defn.m"
                              }
#line 151 "prog_io_mode_defn.m"
                              {
#line 151 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_140));
#line 151 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "prog_io_mode_defn.m"
                              }
#line 151 "prog_io_mode_defn.m"
                              {
#line 151 "prog_io_mode_defn.m"
                                MR_Word base;
#line 151 "prog_io_mode_defn.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 151 "prog_io_mode_defn.m"
                                *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 151 "prog_io_mode_defn.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_117_117));
#line 151 "prog_io_mode_defn.m"
                              }
#line 145 "prog_io_mode_defn.m"
                            }
#line 144 "prog_io_mode_defn.m"
                        }
#line 132 "prog_io_mode_defn.m"
                    }
#line 116 "prog_io_mode_defn.m"
                }
#line 105 "prog_io_mode_defn.m"
            }
#line 154 "prog_io_mode_defn.m"
          else
#line 157 "prog_io_mode_defn.m"
            {
#line 157 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_126_126;
#line 157 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_127_127;
#line 157 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_128_128;
#line 157 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_133_133;
#line 157 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__Spec_148;

#line 159 "prog_io_mode_defn.m"
              {
#line 159 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_128_128 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0_env_0__TypeCtorInfo_149_149, parse_tree__prog_io_mode_defn__HeadTerm_10);
              }
#line 159 "prog_io_mode_defn.m"
              {
#line 159 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_128_128));
#line 159 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[56])));
#line 159 "prog_io_mode_defn.m"
              }
#line 159 "prog_io_mode_defn.m"
              {
#line 159 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_127_127));
#line 159 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "prog_io_mode_defn.m"
              }
#line 158 "prog_io_mode_defn.m"
              {
#line 158 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Spec_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_148, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 158 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_148, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_126_126));
#line 158 "prog_io_mode_defn.m"
              }
#line 160 "prog_io_mode_defn.m"
              {
#line 160 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_148));
#line 160 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "prog_io_mode_defn.m"
              }
#line 160 "prog_io_mode_defn.m"
              {
#line 160 "prog_io_mode_defn.m"
                MR_Word base;
#line 160 "prog_io_mode_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "prog_io_mode_defn.m"
                *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 160 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_133_133));
#line 160 "prog_io_mode_defn.m"
              }
#line 157 "prog_io_mode_defn.m"
            }
#line 88 "prog_io_mode_defn.m"
        }
#line 80 "prog_io_mode_defn.m"
    }
#line 76 "prog_io_mode_defn.m"
  }
#line 76 "prog_io_mode_defn.m"
}

#line 264 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_8(
#line 264 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 264 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 264 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 264 "prog_io_mode_defn.m"
{
#line 264 "prog_io_mode_defn.m"
  {
#line 264 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 264 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv1_HeadVar__2_126;

#line 264 "prog_io_mode_defn.m"
    {
#line 264 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__parse_mode_defn__264__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv1_HeadVar__2_126);
    }
#line 264 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv1_HeadVar__2_126));
#line 264 "prog_io_mode_defn.m"
  }
#line 264 "prog_io_mode_defn.m"
}

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_1(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 235 "prog_io_mode_defn.m"
{
#line 235 "prog_io_mode_defn.m"
  {
#line 235 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 235 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__commit_0, 1);
#line 235 "prog_io_mode_defn.m"
  }
#line 235 "prog_io_mode_defn.m"
}

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_3(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 235 "prog_io_mode_defn.m"
{
#line 235 "prog_io_mode_defn.m"
  {
#line 235 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 235 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Arg2_21 = ((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__conv0_Arg2_21);
#line 235 "prog_io_mode_defn.m"
    {
#line 235 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_2(parse_tree__prog_io_mode_defn__env_ptr);
#line 235 "prog_io_mode_defn.m"
      return;
    }
#line 235 "prog_io_mode_defn.m"
  }
#line 235 "prog_io_mode_defn.m"
}

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_2(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 235 "prog_io_mode_defn.m"
{
#line 235 "prog_io_mode_defn.m"
  {
#line 235 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 235 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 235 "prog_io_mode_defn.m"
    if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 235 "prog_io_mode_defn.m"
      {
#line 235 "prog_io_mode_defn.m"
        {
#line 235 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_35_35, (MR_Integer) 0)));
#line 235 "prog_io_mode_defn.m"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__OtherArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_35_35, (MR_Integer) 1)));
#line 235 "prog_io_mode_defn.m"
        }
#line 235 "prog_io_mode_defn.m"
        {
#line 2830 "parse_tree.prog_io_mode_defn.c"
          (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_132_132 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 235 "prog_io_mode_defn.m"
          {
#line 235 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_132_132, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Arg2_21)), ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_131_131)));
          }
#line 235 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 235 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              {
#line 236 "prog_io_mode_defn.m"
                (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_122_122, ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Arg2_21)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__OtherArgs_22);
              }
#line 236 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 236 "prog_io_mode_defn.m"
                {
#line 236 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_1(parse_tree__prog_io_mode_defn__env_ptr);
#line 236 "prog_io_mode_defn.m"
                  return;
                }
#line 235 "prog_io_mode_defn.m"
            }
#line 235 "prog_io_mode_defn.m"
        }
#line 235 "prog_io_mode_defn.m"
      }
#line 235 "prog_io_mode_defn.m"
  }
#line 235 "prog_io_mode_defn.m"
}

#line 235 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_4(
#line 235 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 235 "prog_io_mode_defn.m"
{
#line 235 "prog_io_mode_defn.m"
  {
#line 235 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 235 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__commit_0) == 0)
#line 235 "prog_io_mode_defn.m"
      {
#line 2882 "parse_tree.prog_io_mode_defn.c"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_122_122 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0];
#line 235 "prog_io_mode_defn.m"
        {
#line 235 "prog_io_mode_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeInfo_122_122, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__conv0_Arg2_21, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Args_20, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__V_35_35, parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_3, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 235 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 235 "prog_io_mode_defn.m"
      }
#line 235 "prog_io_mode_defn.m"
    else
#line 235 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 235 "prog_io_mode_defn.m"
  }
#line 235 "prog_io_mode_defn.m"
}

#line 248 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_5(
#line 248 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 248 "prog_io_mode_defn.m"
{
#line 248 "prog_io_mode_defn.m"
  {
#line 248 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 248 "prog_io_mode_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__commit_1, 1);
#line 248 "prog_io_mode_defn.m"
  }
#line 248 "prog_io_mode_defn.m"
}

#line 248 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_6(
#line 248 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 248 "prog_io_mode_defn.m"
{
#line 248 "prog_io_mode_defn.m"
  {
#line 248 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 248 "prog_io_mode_defn.m"
    {
#line 249 "prog_io_mode_defn.m"
      {
#line 249 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], ((MR_Box) ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Var2_25)), (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Args_20);
      }
#line 249 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = !((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded);
#line 249 "prog_io_mode_defn.m"
      if ((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 249 "prog_io_mode_defn.m"
        {
#line 249 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_5(parse_tree__prog_io_mode_defn__env_ptr);
#line 249 "prog_io_mode_defn.m"
          return;
        }
#line 248 "prog_io_mode_defn.m"
    }
#line 248 "prog_io_mode_defn.m"
  }
#line 248 "prog_io_mode_defn.m"
}

#line 248 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_7(
#line 248 "prog_io_mode_defn.m"
  void * parse_tree__prog_io_mode_defn__env_ptr_arg)
#line 248 "prog_io_mode_defn.m"
{
#line 248 "prog_io_mode_defn.m"
  {
#line 248 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s * parse_tree__prog_io_mode_defn__env_ptr = (struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s *) parse_tree__prog_io_mode_defn__env_ptr_arg;

#line 248 "prog_io_mode_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__commit_1) == 0)
#line 248 "prog_io_mode_defn.m"
      {
#line 248 "prog_io_mode_defn.m"
        {
#line 248 "prog_io_mode_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__BodyTerm_11, &(parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Var2_25, parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_6, parse_tree__prog_io_mode_defn__env_ptr);
        }
#line 248 "prog_io_mode_defn.m"
        (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 248 "prog_io_mode_defn.m"
      }
#line 248 "prog_io_mode_defn.m"
    else
#line 248 "prog_io_mode_defn.m"
      (parse_tree__prog_io_mode_defn__env_ptr)->parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 248 "prog_io_mode_defn.m"
  }
#line 248 "prog_io_mode_defn.m"
}

#line 34 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 34 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 34 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14)
#line 34 "prog_io_mode_defn.m"
{
#line 34 "prog_io_mode_defn.m"
  {
#line 34 "prog_io_mode_defn.m"
    struct parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0_s parse_tree__prog_io_mode_defn__env;

#line 34 "prog_io_mode_defn.m"
    (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__BodyTerm_11 = parse_tree__prog_io_mode_defn__BodyTerm_11;
#line 222 "prog_io_mode_defn.m"
    {
#line 222 "prog_io_mode_defn.m"
      MR_Word parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_16;

#line 3023 "parse_tree.prog_io_mode_defn.c"
      (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 224 "prog_io_mode_defn.m"
      {
#line 224 "prog_io_mode_defn.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[45]), &parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_16);
      }
#line 229 "prog_io_mode_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 227 "prog_io_mode_defn.m"
        {
#line 227 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_16, (MR_Integer) 0)));

#line 228 "prog_io_mode_defn.m"
          {
#line 228 "prog_io_mode_defn.m"
            MR_Word base;
#line 228 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 228 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 228 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 228 "prog_io_mode_defn.m"
          }
#line 227 "prog_io_mode_defn.m"
        }
#line 229 "prog_io_mode_defn.m"
      else
#line 230 "prog_io_mode_defn.m"
        {
#line 230 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_16, (MR_Integer) 0)));
#line 230 "prog_io_mode_defn.m"
          MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeModeNameAndArgs_16, (MR_Integer) 1)));

#line 232 "prog_io_mode_defn.m"
          {
#line 232 "prog_io_mode_defn.m"
            (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, parse_tree__prog_io_mode_defn__ArgTerms_19, &(parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Args_20);
          }
#line 280 "prog_io_mode_defn.m"
          if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 246 "prog_io_mode_defn.m"
            {
#line 235 "prog_io_mode_defn.m"
              {
#line 235 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_4(&parse_tree__prog_io_mode_defn__env);
              }
#line 246 "prog_io_mode_defn.m"
              if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 241 "prog_io_mode_defn.m"
                {
#line 241 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__Spec_24;
#line 241 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_46_46;
#line 241 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_47_47;
#line 241 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_48_48;
#line 241 "prog_io_mode_defn.m"
                  MR_Word parse_tree__prog_io_mode_defn__V_53_53;

#line 243 "prog_io_mode_defn.m"
                  {
#line 243 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_48_48 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, parse_tree__prog_io_mode_defn__HeadTerm_10);
                  }
#line 243 "prog_io_mode_defn.m"
                  {
#line 243 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_48_48));
#line 243 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[46])));
#line 243 "prog_io_mode_defn.m"
                  }
#line 244 "prog_io_mode_defn.m"
                  {
#line 244 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_47_47));
#line 244 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_io_mode_defn.m"
                  }
#line 242 "prog_io_mode_defn.m"
                  {
#line 242 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 242 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 242 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_46_46));
#line 242 "prog_io_mode_defn.m"
                  }
#line 245 "prog_io_mode_defn.m"
                  {
#line 245 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_24));
#line 245 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_io_mode_defn.m"
                  }
#line 245 "prog_io_mode_defn.m"
                  {
#line 245 "prog_io_mode_defn.m"
                    MR_Word base;
#line 245 "prog_io_mode_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io_mode_defn.m"
                    *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 245 "prog_io_mode_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_53_53));
#line 245 "prog_io_mode_defn.m"
                  }
#line 241 "prog_io_mode_defn.m"
                }
#line 246 "prog_io_mode_defn.m"
              else
#line 259 "prog_io_mode_defn.m"
                {
#line 248 "prog_io_mode_defn.m"
                  {
#line 248 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_7(&parse_tree__prog_io_mode_defn__env);
                  }
#line 259 "prog_io_mode_defn.m"
                  if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 254 "prog_io_mode_defn.m"
                    {
#line 254 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 254 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 254 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_67_67;
#line 254 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__V_72_72;
#line 254 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__Spec_112;

#line 256 "prog_io_mode_defn.m"
                      {
#line 256 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_67_67 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, parse_tree__prog_io_mode_defn__HeadTerm_10);
                      }
#line 256 "prog_io_mode_defn.m"
                      {
#line 256 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_67_67));
#line 256 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[47])));
#line 256 "prog_io_mode_defn.m"
                      }
#line 257 "prog_io_mode_defn.m"
                      {
#line 257 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 257 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io_mode_defn.m"
                      }
#line 255 "prog_io_mode_defn.m"
                      {
#line 255 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__Spec_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 255 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 255 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_112, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 255 "prog_io_mode_defn.m"
                      }
#line 258 "prog_io_mode_defn.m"
                      {
#line 258 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_112));
#line 258 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io_mode_defn.m"
                      }
#line 258 "prog_io_mode_defn.m"
                      {
#line 258 "prog_io_mode_defn.m"
                        MR_Word base;
#line 258 "prog_io_mode_defn.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 258 "prog_io_mode_defn.m"
                        *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 258 "prog_io_mode_defn.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_72_72));
#line 258 "prog_io_mode_defn.m"
                      }
#line 254 "prog_io_mode_defn.m"
                    }
#line 259 "prog_io_mode_defn.m"
                  else
#line 270 "prog_io_mode_defn.m"
                    {
#line 270 "prog_io_mode_defn.m"
                      MR_Word parse_tree__prog_io_mode_defn__Mode_26;

#line 261 "prog_io_mode_defn.m"
                      {
#line 261 "prog_io_mode_defn.m"
                        (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 1, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__BodyTerm_11, &parse_tree__prog_io_mode_defn__Mode_26);
                      }
#line 270 "prog_io_mode_defn.m"
                      if ((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__succeeded)
#line 263 "prog_io_mode_defn.m"
                        {
#line 263 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__InstVarSet_27;
#line 263 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__ModeArgs_28;
#line 263 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__ModeDefn_29;
#line 263 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__ItemModeDefn_30;
#line 263 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Item_31;

#line 263 "prog_io_mode_defn.m"
                          {
#line 263 "prog_io_mode_defn.m"
                            mercury__varset__coerce_2_p_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_27);
                          }
#line 264 "prog_io_mode_defn.m"
                          {
#line 264 "prog_io_mode_defn.m"
                            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_4[0], (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__Args_20, &parse_tree__prog_io_mode_defn__ModeArgs_28);
                          }
#line 265 "prog_io_mode_defn.m"
                          parse_tree__prog_io_mode_defn__ModeDefn_29 = (MR_Word) parse_tree__prog_io_mode_defn__Mode_26;
#line 266 "prog_io_mode_defn.m"
                          {
#line 266 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__ItemModeDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_30, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_18));
#line 266 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_30, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeArgs_28));
#line 266 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_30, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeDefn_29));
#line 266 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_30, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_27));
#line 266 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_30, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 266 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_30, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 266 "prog_io_mode_defn.m"
                          }
#line 268 "prog_io_mode_defn.m"
                          {
#line 268 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__Item_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 268 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_31, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemModeDefn_30));
#line 268 "prog_io_mode_defn.m"
                          }
#line 269 "prog_io_mode_defn.m"
                          {
#line 269 "prog_io_mode_defn.m"
                            MR_Word base;
#line 269 "prog_io_mode_defn.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io_mode_defn.m"
                            *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 269 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_31));
#line 269 "prog_io_mode_defn.m"
                          }
#line 263 "prog_io_mode_defn.m"
                        }
#line 270 "prog_io_mode_defn.m"
                      else
#line 273 "prog_io_mode_defn.m"
                        {
#line 273 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_86_86;
#line 273 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 273 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_88_88;
#line 273 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__V_93_93;
#line 273 "prog_io_mode_defn.m"
                          MR_Word parse_tree__prog_io_mode_defn__Spec_114;

#line 275 "prog_io_mode_defn.m"
                          {
#line 275 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_88_88 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, (parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__BodyTerm_11);
                          }
#line 275 "prog_io_mode_defn.m"
                          {
#line 275 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 275 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[48])));
#line 275 "prog_io_mode_defn.m"
                          }
#line 276 "prog_io_mode_defn.m"
                          {
#line 276 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 276 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "prog_io_mode_defn.m"
                          }
#line 274 "prog_io_mode_defn.m"
                          {
#line 274 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__Spec_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 274 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 274 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_114, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_86_86));
#line 274 "prog_io_mode_defn.m"
                          }
#line 277 "prog_io_mode_defn.m"
                          {
#line 277 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_114));
#line 277 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "prog_io_mode_defn.m"
                          }
#line 277 "prog_io_mode_defn.m"
                          {
#line 277 "prog_io_mode_defn.m"
                            MR_Word base;
#line 277 "prog_io_mode_defn.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "prog_io_mode_defn.m"
                            *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 277 "prog_io_mode_defn.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_93_93));
#line 277 "prog_io_mode_defn.m"
                          }
#line 273 "prog_io_mode_defn.m"
                        }
#line 270 "prog_io_mode_defn.m"
                    }
#line 259 "prog_io_mode_defn.m"
                }
#line 246 "prog_io_mode_defn.m"
            }
#line 280 "prog_io_mode_defn.m"
          else
#line 283 "prog_io_mode_defn.m"
            {
#line 283 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_102_102;
#line 283 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_103_103;
#line 283 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_104_104;
#line 283 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__V_109_109;
#line 283 "prog_io_mode_defn.m"
              MR_Word parse_tree__prog_io_mode_defn__Spec_120;

#line 285 "prog_io_mode_defn.m"
              {
#line 285 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_104_104 = mercury__term__get_term_context_1_f_0((parse_tree__prog_io_mode_defn__env).parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0_env_0__TypeCtorInfo_121_121, parse_tree__prog_io_mode_defn__HeadTerm_10);
              }
#line 285 "prog_io_mode_defn.m"
              {
#line 285 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_104_104));
#line 285 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[49])));
#line 285 "prog_io_mode_defn.m"
              }
#line 285 "prog_io_mode_defn.m"
              {
#line 285 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_103_103));
#line 285 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "prog_io_mode_defn.m"
              }
#line 284 "prog_io_mode_defn.m"
              {
#line 284 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 284 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 284 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_120, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_102_102));
#line 284 "prog_io_mode_defn.m"
              }
#line 286 "prog_io_mode_defn.m"
              {
#line 286 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_120));
#line 286 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "prog_io_mode_defn.m"
              }
#line 286 "prog_io_mode_defn.m"
              {
#line 286 "prog_io_mode_defn.m"
                MR_Word base;
#line 286 "prog_io_mode_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "prog_io_mode_defn.m"
                *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 286 "prog_io_mode_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_109_109));
#line 286 "prog_io_mode_defn.m"
              }
#line 283 "prog_io_mode_defn.m"
            }
#line 230 "prog_io_mode_defn.m"
        }
#line 222 "prog_io_mode_defn.m"
    }
#line 34 "prog_io_mode_defn.m"
  }
#line 34 "prog_io_mode_defn.m"
}

#line 29 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Term_9,
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 29 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 29 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12)
#line 29 "prog_io_mode_defn.m"
{
#line 54 "prog_io_mode_defn.m"
  {
#line 54 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__HeadTerm_13;
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__BodyTerm_14;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_23_23;
#line 50 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__V_24_24;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_25_25;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_26_26;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_27_27;
#line 50 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_15_15;

#line 50 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
      {
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 50 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
          {
#line 50 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_24_24, (MR_String) "==") == 0);
#line 50 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
              {
#line 50 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
                  {
#line 50 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__HeadTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 50 "prog_io_mode_defn.m"
                      {
#line 50 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__BodyTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_26_26, (MR_Integer) 0)));
#line 50 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_26_26, (MR_Integer) 1)));
#line 50 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 50 "prog_io_mode_defn.m"
                      }
#line 50 "prog_io_mode_defn.m"
                  }
#line 50 "prog_io_mode_defn.m"
              }
#line 50 "prog_io_mode_defn.m"
          }
#line 50 "prog_io_mode_defn.m"
      }
#line 54 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 52 "prog_io_mode_defn.m"
      {
#line 52 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_13, parse_tree__prog_io_mode_defn__BodyTerm_14, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 52 "prog_io_mode_defn.m"
        return;
      }
#line 54 "prog_io_mode_defn.m"
    else
#line 62 "prog_io_mode_defn.m"
      {
#line 62 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTerm_75;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Args_16;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_28_28;
#line 57 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_29_29;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_31_31;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 57 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_33_33;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_34_34;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_35_35;
#line 57 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_17_17;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_18_18;

#line 57 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 57 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 57 "prog_io_mode_defn.m"
          {
#line 57 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 57 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 57 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 57 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 57 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 57 "prog_io_mode_defn.m"
              {
#line 57 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 0)));
#line 57 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_29_29, (MR_String) "is") == 0);
#line 57 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 57 "prog_io_mode_defn.m"
                  {
#line 58 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 58 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                      {
#line 58 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__HeadTerm_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_16, (MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_16, (MR_Integer) 1)));
#line 58 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 58 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                          {
#line 58 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 1)));
#line 58 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 57 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 57 "prog_io_mode_defn.m"
                              {
#line 58 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                                if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                                  {
#line 58 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 1)));
#line 58 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 2)));
#line 58 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 57 "prog_io_mode_defn.m"
                                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 57 "prog_io_mode_defn.m"
                                      {
#line 58 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
                                          {
#line 58 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_32_32, (MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_33_33, (MR_String) "private") == 0);
#line 58 "prog_io_mode_defn.m"
                                          }
#line 57 "prog_io_mode_defn.m"
                                      }
#line 58 "prog_io_mode_defn.m"
                                  }
#line 57 "prog_io_mode_defn.m"
                              }
#line 58 "prog_io_mode_defn.m"
                          }
#line 58 "prog_io_mode_defn.m"
                      }
#line 57 "prog_io_mode_defn.m"
                  }
#line 57 "prog_io_mode_defn.m"
              }
#line 57 "prog_io_mode_defn.m"
          }
#line 62 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
          {
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_75, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 60 "prog_io_mode_defn.m"
            return;
          }
#line 62 "prog_io_mode_defn.m"
        else
#line 68 "prog_io_mode_defn.m"
          {
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_39_39;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__HeadTerm_73;
#line 63 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_36_36;
#line 63 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_37_37;
#line 63 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_38_38;
#line 63 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_40_40;
#line 63 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_19_19;
#line 63 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodyTerm_74;

#line 63 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 63 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 63 "prog_io_mode_defn.m"
              {
#line 63 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 63 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 63 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 63 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 63 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 63 "prog_io_mode_defn.m"
                  {
#line 63 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_36_36, (MR_Integer) 0)));
#line 63 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_37_37, (MR_String) "--->") == 0);
#line 63 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 63 "prog_io_mode_defn.m"
                      {
#line 63 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 63 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 63 "prog_io_mode_defn.m"
                          {
#line 63 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__HeadTerm_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_38_38, (MR_Integer) 0)));
#line 63 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_38_38, (MR_Integer) 1)));
#line 63 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 63 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 63 "prog_io_mode_defn.m"
                              {
#line 63 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__BodyTerm_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 0)));
#line 63 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 1)));
#line 63 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 63 "prog_io_mode_defn.m"
                              }
#line 63 "prog_io_mode_defn.m"
                          }
#line 63 "prog_io_mode_defn.m"
                      }
#line 63 "prog_io_mode_defn.m"
                  }
#line 63 "prog_io_mode_defn.m"
              }
#line 68 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
              {
#line 65 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__BoundBodyTerm_20;

#line 65 "prog_io_mode_defn.m"
                {
#line 65 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__BoundBodyTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 65 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_20, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[1]));
#line 65 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_20, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_39_39));
#line 65 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_20, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 65 "prog_io_mode_defn.m"
                }
#line 66 "prog_io_mode_defn.m"
                {
#line 66 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_73, parse_tree__prog_io_mode_defn__BoundBodyTerm_20, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 66 "prog_io_mode_defn.m"
                  return;
                }
#line 65 "prog_io_mode_defn.m"
              }
#line 68 "prog_io_mode_defn.m"
            else
#line 70 "prog_io_mode_defn.m"
              {
#line 70 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__Spec_22;
#line 70 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_64_64;
#line 70 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 70 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 70 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_71_71;

#line 72 "prog_io_mode_defn.m"
                {
#line 72 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__Term_9);
                }
#line 72 "prog_io_mode_defn.m"
                {
#line 72 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 72 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 72 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[43])));
#line 72 "prog_io_mode_defn.m"
                }
#line 72 "prog_io_mode_defn.m"
                {
#line 72 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 72 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 72 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 72 "prog_io_mode_defn.m"
                }
#line 71 "prog_io_mode_defn.m"
                {
#line 71 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 71 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 71 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 71 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_64_64));
#line 71 "prog_io_mode_defn.m"
                }
#line 73 "prog_io_mode_defn.m"
                {
#line 73 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_22));
#line 73 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 73 "prog_io_mode_defn.m"
                }
#line 73 "prog_io_mode_defn.m"
                {
#line 73 "prog_io_mode_defn.m"
                  MR_Word base;
#line 73 "prog_io_mode_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 73 "prog_io_mode_defn.m"
                  *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 73 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 73 "prog_io_mode_defn.m"
                }
#line 70 "prog_io_mode_defn.m"
              }
#line 68 "prog_io_mode_defn.m"
          }
#line 62 "prog_io_mode_defn.m"
      }
#line 54 "prog_io_mode_defn.m"
  }
#line 29 "prog_io_mode_defn.m"
}

void mercury__parse_tree__prog_io_mode_defn__init(void)
{
}

void mercury__parse_tree__prog_io_mode_defn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__type_ctor_info_processed_mode_body_0);
}

void mercury__parse_tree__prog_io_mode_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_mode_defn. */
